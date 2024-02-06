// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInstance.h"
#include "IvyGenerator.generated.h"

// Ue5 Core
class USplineComponent;
class USplineMeshComponent;
class UStaticMeshComponent;
class UInstancedStaticMeshComponent;
class UStaticMesh;

USTRUCT()
struct FTendrilPointData
{
    GENERATED_BODY()

    UPROPERTY()
    FVector Location = FVector::ZeroVector;

    UPROPERTY()
    float Distance = 0.f;

    FTendrilPointData() = default;
    FTendrilPointData(const FVector& InLocation, float InDistance) : Location(InLocation), Distance(InDistance) {}
};

USTRUCT()
struct FTendrilData
{
    GENERATED_BODY()
    
    UPROPERTY()
    TArray<FTendrilPointData> Points;    
};

USTRUCT()
struct FInstancingData
{
    GENERATED_BODY()

    // Generation probability in each iteration
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ClampMax = 1, UIMin = 0, UIMax = 1), Category = "Instancing Data")
    float Probability = 0.8f;

    // Min distance between meshes
    UPROPERTY(EditAnywhere, meta = (ClampMin = 5, ForceUnits = "cm"), Category = "Instancing Data")
    float MinSpacing = 150.f;

    // Max distance between meshes
    UPROPERTY(EditAnywhere, meta = (ClampMin = 5, ForceUnits = "cm"), Category = "Instancing Data")
    float MaxSpacing = 175.f;

    // Min meshes scaling
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0.1, ClampMax = 10), Category = "Instancing Data")
    float MinScaling = 0.75f;

    // Max meshes scaling
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0.1, ClampMax = 10), Category = "Instancing Data")
    float MaxScaling = 1.f;

    // Max meshes scaling
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0.1), Category = "Instancing Data")
    float Zoffset = 5.f;

    // Include branches
    UPROPERTY(EditAnywhere, Category = "Instancing Data")
    bool bIncludeBranches = true;

    FInstancingData() = default;
};

USTRUCT()
struct FMeshesData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category = "Meshes Data")
    TArray<UStaticMesh*> Meshes;

    UPROPERTY(EditAnywhere, Category = "Meshes Data")
    TArray<UMaterialInstance*> OverrideMaterials;

    FMeshesData() = default;

    bool IsValid() const
    {
        for (const UStaticMesh* StaticMesh : Meshes)
        {
            if (StaticMesh)
            {
                return true;
            }
        }

        return false;
    }
    UStaticMesh* GetRandomStaticMesh(FRandomStream& RandomStream) const
    {
        if (!Meshes.IsEmpty())
        {
            int32 RandomIndex = RandomStream.RandRange(0, Meshes.Num() - 1);
            if (UStaticMesh* SelectedMesh = Meshes[RandomIndex])
            {
                for (int32 index = 0; index < OverrideMaterials.Num(); index++)
                {
                    if (UMaterialInstance* Material = OverrideMaterials[index])
                    {
                        SelectedMesh->SetMaterial(index, Material);
                    }
                }
                
                return SelectedMesh;
            }
        }

        return nullptr;
    }

};

UCLASS()
class IVYSYSTEM_API AIvyGenerator : public AActor 
{
    GENERATED_BODY()
	
public:	
    AIvyGenerator();

protected:
    // Seed for the random stream to ensure consistency
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0), Category = "Generation|Random")
    int32 RandomSeed = 1234;

    // Scale for the Perlin noise used in tendril generation
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ClampMax = 100, UIMin = 0, UIMax = 100), Category = "Generation|Noise")
    float NoiseScale = 50.f;

    // Offset for the Perlin noise used in tendril generation
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ClampMax = 1, UIMin = 0, UIMax = 1), Category = "Generation|Noise")
    float NoiseOffset = 0.f;

    // Min length of each segment of the tendril
    UPROPERTY(EditAnywhere, meta = (ClampMin = 5, ForceUnits = "cm"), Category = "Generation|Tendril")
    float MinSegmentLength = 75.f;

    // Max length of each segment of the tendril
    UPROPERTY(EditAnywhere, meta = (ClampMin = 5, ForceUnits = "cm"), Category = "Generation|Tendril")
    float MaxSegmentLength = 150.f;
 
    // Max width offset applied to the tendril points
    UPROPERTY(EditAnywhere, meta = (ClampMin = 5, ForceUnits = "cm"), Category = "Generation|Tendril")
    float MaxWidth = 50.f;

    // Max height offset applied to the tendril points
    UPROPERTY(EditAnywhere, meta = (ClampMin = 5, ForceUnits = "cm"), Category = "Generation|Tendril")
    float MaxHeight = 35.f;

    // Min tendril scaling
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0.1, ClampMax = 5.0), Category = "Generation|Tendril")
    float TendrilScaling = 1.f;

    // Use root at the beginning
    UPROPERTY(EditAnywhere, Category = "Generation|Tendril")
    bool bShowRoot = true;

    // Frequency at which branches will be attempted to be generated
    UPROPERTY(EditAnywhere, meta = (ClampMin = 1), Category = "Generation|Branching")
    int32 BranchingFrequency = 2;

    // Probability of a branch being generated at each eligible point
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ClampMax = 1, UIMin = 0, UIMax = 1), Category = "Generation|Branching")
    float BranchingProbability = 0.8f;

    // Min offset applied to the branches
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ForceUnits = "cm"), Category = "Generation|Branching")
    float MinBranchingOffset = 45.f;

    // Max offset applied to the branches
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ForceUnits = "cm"), Category = "Generation|Branching")
    float MaxBranchingOffset = 100.f;

    // Min length of branches
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ClampMax = 1, UIMin = 0, UIMax = 1), Category = "Generation|Branching")
    float MinBranchingCompletion = 0.3f;

    // Maxlength of branches
    UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ClampMax = 1, UIMin = 0, UIMax = 1), Category = "Generation|Branching")
    float MaxBranchingCompletion = 0.6f;

    UPROPERTY(EditAnywhere, Category = "Generation|Intancing")
    bool bActiveLeafs = false;

    UPROPERTY(EditAnywhere, meta = (EditCondition = "bActiveLeafs"), Category = "Generation|Intancing")
    FInstancingData LeafParameters;

    UPROPERTY(EditAnywhere, Category = "Generation|Intancing")
    bool bActiveFlowers = false;

    UPROPERTY(EditAnywhere, meta = (EditCondition = "bActiveFlowers"), Category = "Generation|Intancing")
    FInstancingData FlowerParameters;

    UPROPERTY(EditAnywhere, Category = "Meshes|Data")
    FMeshesData RootTendrilMeshes;

    UPROPERTY(EditAnywhere, Category = "Meshes|Data")
    FMeshesData StartTendrilMeshes;

    UPROPERTY(EditAnywhere, Category = "Meshes|Data")
    FMeshesData MidTendrilMeshes;

    UPROPERTY(EditAnywhere, Category = "Meshes|Data")
    FMeshesData EndTendrilMeshes;

    UPROPERTY(EditAnywhere, Category = "Meshes|Data")
    FMeshesData LeafMeshes;

    UPROPERTY(EditAnywhere, Category = "Meshes|Data")
    FMeshesData FlowerMeshes;

    UPROPERTY(EditAnywhere, Category = "Meshes|Baking")
    bool bPreviewMeshes = true;

    UPROPERTY(EditAnywhere, Category = "Meshes|Baking")
    FString DirectoryPath = TEXT("/Game/Meshes");

    UPROPERTY(EditAnywhere, Category = "Meshes|Baking")
    FString BasePackageName = TEXT("MergedMesh");

    UPROPERTY(EditAnywhere, DuplicateTransient, Category = "Meshes|Baking")
    UStaticMesh* BakedMesh = nullptr;

    UPROPERTY(BlueprintReadOnly, DuplicateTransient, Category = "Ivy System")
    UStaticMeshComponent* BakedStaticMeshComp = nullptr;

    // Main spline used for ivys design
    UPROPERTY(BlueprintReadOnly, Category = "Ivy System")
    USplineComponent* MainSplineComp = nullptr;

protected:
    virtual void OnConstruction(const FTransform& Transform) override;

#if WITH_EDITOR
    UFUNCTION(CallInEditor, Category = "Meshes|Baking")
    void GenerateVariation();

    UFUNCTION(CallInEditor, Category = "Meshes|Baking")
    void BakeMeshes();

    UFUNCTION(CallInEditor, Category = "Meshes|Baking")
    void CleanBakeMeshes();
#endif // WITH_EDITOR

private:
    // The random stream for controlled randomness
    UPROPERTY()
    FRandomStream RandomStream;

    UPROPERTY(Transient)
    TArray<USplineComponent*> SplineComponents;

    UPROPERTY(Transient)
    TArray<USplineMeshComponent*> SplineMeshComponents;

    UPROPERTY(Transient)
    TMap<UStaticMesh*, UInstancedStaticMeshComponent*> ISMCMap;

private:

    void GenerateIvy();

    //--- Tendril data ---
    void GenerateTendrilData();
    void GenerateTendrilAlongSpline(FTendrilData& OutTendril, const FTendrilPointData& StartPoint, float Offset, float EndDistance, const FLinearColor& DebugColo);
    void GenerateBranchesFromTendril(const FTendrilData& Tendril);

    //--- Meshes ---
    void GenerateMeshes();

    // Spline
    void GenerateSplineFromTendril(const FTendrilData& Tendril, const FLinearColor& DebugColo);
    void RemoveSplineComponents();

    // Spline mesh
    void GenerateSplineMeshesFromSpline(USplineComponent*& Spline, bool bBranch);
    void RemoveSplineMeshComponents();

    // Static mesh
    void InstanceMeshesAlongSpline(const FMeshesData& MeshesData, USplineComponent*& Spline, const FInstancingData& InstancingData);
    UInstancedStaticMeshComponent* FindOrAddISMC(UStaticMesh* Mesh);
    void RemoveISMC();

};

