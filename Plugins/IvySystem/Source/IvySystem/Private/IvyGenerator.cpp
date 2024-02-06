// Fill out your copyright notice in the Description page of Project Settings.

#include "IvyGenerator.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"
#include "MeshMergeModule.h"
#include "IMeshMergeUtilities.h"

#if WITH_EDITOR
#include "EditorAssetLibrary.h"
#endif

AIvyGenerator::AIvyGenerator()
{
    // Set this actor to call Tick() every frame if needed
    PrimaryActorTick.bCanEverTick = false;

    USceneComponent* RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    RootComponent = RootSceneComponent;

    MainSplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("MainSplineComp"));
    MainSplineComp->SetupAttachment(RootSceneComponent);

    BakedStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BakedStaticMeshComp"));
    BakedStaticMeshComp->SetupAttachment(RootSceneComponent);
}

void AIvyGenerator::BakeMeshes()
{
#if WITH_EDITOR

    if (SplineMeshComponents.IsEmpty() && ISMCMap.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("No components to merge."));
        return;
    }

    // Prepare a list of components to merge
    TArray<UPrimitiveComponent*> ComponentsToMerge;

    // Add all spline mesh components
    for (USplineMeshComponent* SplineMeshComponent : SplineMeshComponents)
    {
        if (IsValid(SplineMeshComponent))
        {
            ComponentsToMerge.Add(SplineMeshComponent);
        }
    }

    // Add all instanced static mesh components
    for (const auto& ISMCPair : ISMCMap)
    {
        UInstancedStaticMeshComponent* ISMC = ISMCPair.Value;
        if (IsValid(ISMC))
        {
            ComponentsToMerge.Add(ISMC);
        }
    }

    // Configure the mesh merging settings
    FMeshMergingSettings MergeSettings;
    MergeSettings.bBakeVertexDataToMesh = true;

    // Get the mesh merge utilities module
    const IMeshMergeUtilities& MeshMergeUtilities = FModuleManager::Get().LoadModuleChecked<IMeshMergeModule>("MeshMergeUtilities").GetUtilities();

    // Output arrays
    TArray<UObject*> AssetsToSync;
    FVector TempLocation = GetActorLocation();
    float ScreenSize = 100.f;
    FString UniqueBasePackageName = BasePackageName + TEXT("_") + GetName();
    
    // Merge the components into a new static mesh
    MeshMergeUtilities.MergeComponentsToStaticMesh(ComponentsToMerge, this->GetWorld(), MergeSettings, nullptr, nullptr, UniqueBasePackageName, AssetsToSync, TempLocation, ScreenSize, true);

    if (AssetsToSync.Num() > 0)
    {
        BakedMesh = Cast<UStaticMesh>(AssetsToSync[0]);
        GenerateIvy();
    }

#endif // WITH_EDITOR
}

void AIvyGenerator::CleanBakeMeshes()
{
#if WITH_EDITOR
    if (BakedStaticMeshComp)
    {
        BakedStaticMeshComp->SetStaticMesh(nullptr);
    }

    if (BakedMesh)
    {
        FString AssetPath = BakedMesh->GetPathName();

        UEditorAssetLibrary::DeleteAsset(AssetPath);
        BakedMesh = nullptr;
    }

    GenerateIvy();
#endif // WITH_EDITOR
}

void AIvyGenerator::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITOR
    GenerateIvy();
#endif
}

void AIvyGenerator::GenerateIvy()
{
    // Clean previous data
    RemoveSplineComponents();
    RemoveSplineMeshComponents();
    RemoveISMC();

    if (BakedMesh && BakedStaticMeshComp)
    {
        BakedStaticMeshComp->SetStaticMesh(BakedMesh);
    }
    else
    {
        GenerateTendrilData();
        if (bPreviewMeshes)
        {
            GenerateMeshes();
        }
    }
}

void AIvyGenerator::GenerateTendrilData()
{
    if (!MainSplineComp || MainSplineComp->GetNumberOfSplinePoints() < 2) return;
    RandomStream.Initialize(RandomSeed);

    float MinDistance = 0.f;
    float MaxDistance = MainSplineComp->GetSplineLength();
    const FVector StartLocation = MainSplineComp->GetLocationAtDistanceAlongSpline(0.f, ESplineCoordinateSpace::World);

    // Main tendril   
    FTendrilData MainTendril;
    GenerateTendrilAlongSpline(MainTendril, FTendrilPointData(StartLocation, MinDistance), 0.f, MaxDistance, FLinearColor::Red);

    // Branches
    GenerateBranchesFromTendril(MainTendril);

}

void AIvyGenerator::GenerateTendrilAlongSpline(FTendrilData& OutTendril, const FTendrilPointData& StartPoint, float Offset, float EndDistance, const FLinearColor& DebugColor)
{
    OutTendril = FTendrilData();
    OutTendril.Points.Add(StartPoint);
    const float MaxDistance = MainSplineComp->GetSplineLength();
    const float RandomNoiseOffset = RandomStream.FRand();
    float CurrentDistance = StartPoint.Distance;
    int32 count = 0;

    while (CurrentDistance < EndDistance && count < 1000)
    {
        count++;
        // Increment distance along the spline for the next point
        CurrentDistance += RandomStream.FRandRange(MinSegmentLength, MaxSegmentLength);

        const FVector PointOnSpline = MainSplineComp->GetLocationAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);
        const FVector SplineRightVector = MainSplineComp->GetRightVectorAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);
        const FVector SplineUpVector = MainSplineComp->GetUpVectorAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);

        float HeightVariation = RandomStream.FRandRange(0.f, MaxHeight);
        float ScaledDistance = FMath::Fmod((CurrentDistance / MaxDistance) + RandomNoiseOffset + NoiseOffset, 1.0f);
        float NoiseValue = FMath::PerlinNoise1D(ScaledDistance * NoiseScale);

        // Offset point to the side of the spline
        const float NewOffset = (MaxWidth * NoiseValue) + Offset;
        const FVector NewPoint = PointOnSpline + (SplineRightVector * NewOffset) + (SplineUpVector * HeightVariation);
        OutTendril.Points.Add(FTendrilPointData(NewPoint, CurrentDistance));
    }

    // Store the generated tendril
    GenerateSplineFromTendril(OutTendril, DebugColor);
}

void AIvyGenerator::GenerateBranchesFromTendril(const FTendrilData& Tendril)
{
    const float MaxDistance = MainSplineComp->GetSplineLength();
    const int32 PointsCount = Tendril.Points.Num();
    for (int32 i = BranchingFrequency; i < PointsCount - BranchingFrequency; i += BranchingFrequency)
    {
        if (RandomStream.FRand() <= BranchingProbability)
        {
            const FTendrilPointData& TendrilPointData = Tendril.Points[i];
            FTendrilData NewTendril;
            const float Direction = RandomStream.FRand() >= 0.5f ? -1.f : 1.f;
            const float BrachOffset = RandomStream.FRandRange(MinBranchingOffset, MaxBranchingOffset) * Direction;
            const float BranchingCompletion = MaxDistance * RandomStream.FRandRange(MinBranchingCompletion, MaxBranchingCompletion);
            const float NewMaxDistance = FMath::Clamp(TendrilPointData.Distance + BranchingCompletion, 0.f, MaxDistance);
            
            GenerateTendrilAlongSpline(NewTendril, TendrilPointData, BrachOffset, NewMaxDistance, FLinearColor::Blue);
        }
    }
}

void AIvyGenerator::GenerateSplineFromTendril(const FTendrilData& Tendril, const FLinearColor& Color)
{
    FName UniqueName = MakeUniqueObjectName(this, USplineComponent::StaticClass(), "Spline");
    USplineComponent* SplineComponent = NewObject<USplineComponent>(this, USplineComponent::StaticClass(), UniqueName, RF_Transient);
    SplineComponent->ClearSplinePoints();
    SplineComponent->EditorSelectedSplineSegmentColor = Color;
    SplineComponent->EditorUnselectedSplineSegmentColor = Color;
    //SplineComponent->bEditableWhenInherited = false;
    SplineComponent->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
    SplineComponent->RegisterComponent();
    SplineComponents.Add(SplineComponent);

    // Asume que tienes una referencia a la spline original llamada MainSplineComp
    for (int32 i = 0; i < Tendril.Points.Num(); i++)
    {
        const FTendrilPointData& Point = Tendril.Points[i];
        FVector UpVector = MainSplineComp->GetUpVectorAtDistanceAlongSpline(Point.Distance, ESplineCoordinateSpace::World);

        SplineComponent->AddSplinePoint(Point.Location, ESplineCoordinateSpace::World, false);
        SplineComponent->SetUpVectorAtSplinePoint(i, UpVector, ESplineCoordinateSpace::World, false);
    }

    SplineComponent->UpdateSpline();
}

void AIvyGenerator::RemoveSplineComponents()
{
    for (auto* Spline : SplineComponents)
    {
        if (Spline)
        {
            Spline->DestroyComponent();
        }
    }

    SplineComponents.Empty();
}

void AIvyGenerator::GenerateMeshes()
{
    int32 count = 0;
    for (USplineComponent*& Spline : SplineComponents)
    {
        const bool bBrach = count > 0;
        GenerateSplineMeshesFromSpline(Spline, bBrach);

        if (bActiveLeafs)
        {   
            if (!bBrach || LeafParameters.bIncludeBranches)
            {
                InstanceMeshesAlongSpline(LeafMeshes, Spline, LeafParameters);
            }
        }

        if (bActiveFlowers)
        {
            if (!bBrach || FlowerParameters.bIncludeBranches)
            {
                InstanceMeshesAlongSpline(FlowerMeshes, Spline, FlowerParameters);
            }
        }

        count++;
    }
}

void AIvyGenerator::GenerateSplineMeshesFromSpline(USplineComponent*& Spline, bool bBranch)
{
    if (!Spline || Spline->GetNumberOfSplinePoints() < 2) return;

    for (int32 i = 0; i < Spline->GetNumberOfSplinePoints() - 1; ++i)
    {
        // Create the USplineMeshComponent
        FName UniqueName = MakeUniqueObjectName(this, USplineComponent::StaticClass(), "SplineMesh");
        USplineMeshComponent* SplineMeshComponent = NewObject<USplineMeshComponent>(this, UniqueName, RF_Transient);
        SplineMeshComponent->SetMobility(EComponentMobility::Movable);
        //SplineMeshComponent->SetRelativeLocation(FVector::ZeroVector);
        SplineMeshComponent->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
        SplineMeshComponent->RegisterComponent();

        UStaticMesh* SelectedMesh = nullptr;
        if (i == 0 && !bBranch) // First segment
        {
            SelectedMesh = bShowRoot ? RootTendrilMeshes.GetRandomStaticMesh(RandomStream) : StartTendrilMeshes.GetRandomStaticMesh(RandomStream);
        }
        else if (i == Spline->GetNumberOfSplinePoints() - 2) // Last segment
        {
            SelectedMesh = EndTendrilMeshes.GetRandomStaticMesh(RandomStream);
        }
        else // Middle segment
        {
            SelectedMesh = MidTendrilMeshes.GetRandomStaticMesh(RandomStream);
        }

        if (!SelectedMesh) continue;

        SplineMeshComponent->SetStaticMesh(SelectedMesh);

        // Set the start and end points of the spline mesh
        const FVector StartPoint = Spline->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local);
        const FVector StartTangent = Spline->GetTangentAtSplinePoint(i, ESplineCoordinateSpace::Local);
        const FVector EndPoint = Spline->GetLocationAtSplinePoint(i + 1, ESplineCoordinateSpace::Local);
        const FVector EndTangent = Spline->GetTangentAtSplinePoint(i + 1, ESplineCoordinateSpace::Local);
        SplineMeshComponent->SetStartAndEnd(StartPoint, StartTangent, EndPoint, EndTangent, false);
        SplineMeshComponent->SetStartScale(FVector2D(TendrilScaling), false);
        SplineMeshComponent->SetEndScale(FVector2D(TendrilScaling), false);

        SplineMeshComponent->UpdateMesh();
        //SplineMeshComponent->UpdateComponentToWorld();
        SplineMeshComponents.Add(SplineMeshComponent);
    }
}

void AIvyGenerator::RemoveSplineMeshComponents()
{
    for (auto* Spline : SplineMeshComponents)
    {
        if (Spline)
        {
            Spline->DestroyComponent();
        }
    }

    SplineMeshComponents.Empty();
}

void AIvyGenerator::InstanceMeshesAlongSpline(const FMeshesData& MeshesData, USplineComponent*& Spline, const FInstancingData& InstancingData)
{
    if (!Spline || Spline->GetNumberOfSplinePoints() < 2 || !MeshesData.IsValid()) return;

    const float SplineLength = Spline->GetSplineLength();
    float CurrentDistance = 0.0f;

    while (CurrentDistance < SplineLength)
    {
        if (RandomStream.FRand() > InstancingData.Probability)
        {
            CurrentDistance += RandomStream.FRandRange(InstancingData.MinSpacing, InstancingData.MaxSpacing);
            continue;
        }
        UStaticMesh* SelectedMesh = MeshesData.GetRandomStaticMesh(RandomStream);
        if (!SelectedMesh) continue;

        UInstancedStaticMeshComponent* ISMC = FindOrAddISMC(SelectedMesh);
        if (!ISMC)continue;

        const FVector Location = Spline->GetLocationAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);
        const FVector UpVector = Spline->GetUpVectorAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);
        const FVector FinalLocation = Location + (UpVector * TendrilScaling * InstancingData.Zoffset);

        // This will align the mesh's Z-axis with the spline's up vector
        const FRotator BaseRotation = FRotationMatrix::MakeFromZ(UpVector).Rotator();

        // Random yaw value between -180 and 180 degrees
        const float RandomYawRotation = RandomStream.FRandRange(-180.0f, 180.0f);
        const FRotator RandomRotation = FRotator(0.0f, RandomYawRotation, 0.0f);

        // Combine base alignment with random yaw rotation
        const FQuat FinalRotation = BaseRotation.Quaternion() * RandomRotation.Quaternion();
        const float RandomScaling = RandomStream.FRandRange(InstancingData.MinScaling, InstancingData.MaxScaling);
        ISMC->AddInstance(FTransform(FinalRotation, FinalLocation, FVector(RandomScaling)));
        CurrentDistance += RandomStream.FRandRange(InstancingData.MinSpacing, InstancingData.MaxSpacing);
    }
}

UInstancedStaticMeshComponent* AIvyGenerator::FindOrAddISMC(UStaticMesh* Mesh)
{
    if (!Mesh) return nullptr;

    UInstancedStaticMeshComponent*& FoundISMC = ISMCMap.FindOrAdd(Mesh);
    if (!FoundISMC)
    {
        FName UniqueName = MakeUniqueObjectName(this, USplineComponent::StaticClass(), "InstanceMesh");
        FoundISMC = NewObject<UInstancedStaticMeshComponent>(this, UniqueName, RF_Transient);
        FoundISMC->SetStaticMesh(Mesh);
        FoundISMC->RegisterComponent();
        FoundISMC->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
    }

    return FoundISMC;
}

void AIvyGenerator::RemoveISMC()
{
    for (auto ISMCPair : ISMCMap)
    {
        if (UInstancedStaticMeshComponent* ISMC = ISMCPair.Value)
        {
            ISMC->ClearInstances();
            ISMC->DestroyComponent();
        }
    }

    ISMCMap.Empty();
}