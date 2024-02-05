// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IvyGenerator.generated.h"

// Core
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
    UPROPERTY(EditAnywhere, meta = (ClampMin = 50, ForceUnits = "cm"), Category = "Instancing Data")
    float MinSpacing = 150.f;

    // Max distance between meshes
    UPROPERTY(EditAnywhere, meta = (ClampMin = 50, ForceUnits = "cm"), Category = "Instancing Data")
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

UCLASS()
class IVYSYSTEM_API AIvyGenerator : public AActor 
{
    GENERATED_BODY()
	
public:	
    AIvyGenerator();

    UFUNCTION(CallInEditor, BlueprintCallable, Category = "Meshes")
    void BakeMeshes();

    UFUNCTION(CallInEditor, BlueprintCallable, Category = "Meshes")
    void CleanBakeMeshes();

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
    UPROPERTY(EditAnywhere, meta = (ClampMin = 10, ForceUnits = "cm"), Category = "Generation|Tendril")
    float MinSegmentLength = 75.f;

    // Max length of each segment of the tendril
    UPROPERTY(EditAnywhere, meta = (ClampMin = 10, ForceUnits = "cm"), Category = "Generation|Tendril")
    float MaxSegmentLength = 150.f;
 
    // Max width offset applied to the tendril points
    UPROPERTY(EditAnywhere, meta = (ClampMin = 10, ForceUnits = "cm"), Category = "Generation|Tendril")
    float MaxWidth = 50.f;

    // Max height offset applied to the tendril points
    UPROPERTY(EditAnywhere, meta = (ClampMin = 10, ForceUnits = "cm"), Category = "Generation|Tendril")
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

    UPROPERTY(EditAnywhere, Category = "Meshes")
    bool bPreviewMeshes = true;

    UPROPERTY(EditAnywhere, Category = "Meshes")
    FString BasePackageName = TEXT("/Game/Meshes/MergedMeshAsset");

    UPROPERTY(EditAnywhere, Category = "Meshes")
    UStaticMesh* BakedMesh = nullptr;

    // Main spline used for ivys design
    UPROPERTY(BlueprintReadOnly, Category = "Base")
    USplineComponent* MainSplineComp = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = "Base")
    UStaticMeshComponent* BakedStaticMeshComp = nullptr;

protected:
    virtual void OnConstruction(const FTransform& Transform) override;

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

    UPROPERTY(EditDefaultsOnly, Category = "Meshes|Base")
    TArray<UStaticMesh*> RootTendrilMeshes;

    UPROPERTY(EditDefaultsOnly, Category = "Meshes|Base")
    TArray<UStaticMesh*> StartTendrilMeshes;

    UPROPERTY(EditDefaultsOnly, Category = "Meshes|Base")
    TArray<UStaticMesh*> MidTendrilMeshes;

    UPROPERTY(EditDefaultsOnly, Category = "Meshes|Base")
    TArray<UStaticMesh*> EndTendrilMeshes;

    UPROPERTY(EditDefaultsOnly, Category = "Meshes|Base")
    TArray<UStaticMesh*> LeafMeshes;

    UPROPERTY(EditDefaultsOnly, Category = "Meshes|Base")
    TArray<UStaticMesh*> FlowerMeshes;

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
    void InstanceMeshesAlongSpline(const TArray<UStaticMesh*>& Meshes, USplineComponent*& Spline, const FInstancingData& InstancingData);
    UInstancedStaticMeshComponent* FindOrAddISMC(UStaticMesh* Mesh);
    void RemoveISMC();

    UStaticMesh* GetRandomStaticMesh(const TArray<UStaticMesh*>& MeshArray);

};

