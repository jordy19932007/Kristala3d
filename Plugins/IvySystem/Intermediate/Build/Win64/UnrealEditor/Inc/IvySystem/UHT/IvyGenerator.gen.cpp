// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IvySystem/Public/IvyGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIvyGenerator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	IVYSYSTEM_API UClass* Z_Construct_UClass_AIvyGenerator();
	IVYSYSTEM_API UClass* Z_Construct_UClass_AIvyGenerator_NoRegister();
	IVYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInstancingData();
	IVYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMeshesData();
	IVYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTendrilData();
	IVYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTendrilPointData();
	UPackage* Z_Construct_UPackage__Script_IvySystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TendrilPointData;
class UScriptStruct* FTendrilPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TendrilPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TendrilPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTendrilPointData, (UObject*)Z_Construct_UPackage__Script_IvySystem(), TEXT("TendrilPointData"));
	}
	return Z_Registration_Info_UScriptStruct_TendrilPointData.OuterSingleton;
}
template<> IVYSYSTEM_API UScriptStruct* StaticStruct<FTendrilPointData>()
{
	return FTendrilPointData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTendrilPointData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTendrilPointData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTendrilPointData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTendrilPointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Distance_MetaData[] = {
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTendrilPointData, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Distance_MetaData), Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Distance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTendrilPointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewProp_Distance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTendrilPointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IvySystem,
		nullptr,
		&NewStructOps,
		"TendrilPointData",
		Z_Construct_UScriptStruct_FTendrilPointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilPointData_Statics::PropPointers),
		sizeof(FTendrilPointData),
		alignof(FTendrilPointData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTendrilPointData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilPointData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTendrilPointData()
	{
		if (!Z_Registration_Info_UScriptStruct_TendrilPointData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TendrilPointData.InnerSingleton, Z_Construct_UScriptStruct_FTendrilPointData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TendrilPointData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TendrilData;
class UScriptStruct* FTendrilData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TendrilData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TendrilData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTendrilData, (UObject*)Z_Construct_UPackage__Script_IvySystem(), TEXT("TendrilData"));
	}
	return Z_Registration_Info_UScriptStruct_TendrilData.OuterSingleton;
}
template<> IVYSYSTEM_API UScriptStruct* StaticStruct<FTendrilData>()
{
	return FTendrilData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTendrilData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTendrilData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTendrilData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTendrilData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTendrilData_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTendrilPointData, METADATA_PARAMS(0, nullptr) }; // 3383093860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTendrilData_Statics::NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTendrilData_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTendrilData, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilData_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FTendrilData_Statics::NewProp_Points_MetaData) }; // 3383093860
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTendrilData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTendrilData_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTendrilData_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTendrilData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IvySystem,
		nullptr,
		&NewStructOps,
		"TendrilData",
		Z_Construct_UScriptStruct_FTendrilData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilData_Statics::PropPointers),
		sizeof(FTendrilData),
		alignof(FTendrilData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTendrilData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTendrilData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTendrilData()
	{
		if (!Z_Registration_Info_UScriptStruct_TendrilData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TendrilData.InnerSingleton, Z_Construct_UScriptStruct_FTendrilData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TendrilData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancingData;
class UScriptStruct* FInstancingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancingData, (UObject*)Z_Construct_UPackage__Script_IvySystem(), TEXT("InstancingData"));
	}
	return Z_Registration_Info_UScriptStruct_InstancingData.OuterSingleton;
}
template<> IVYSYSTEM_API UScriptStruct* StaticStruct<FInstancingData>()
{
	return FInstancingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeBranches_MetaData[];
#endif
		static void NewProp_bIncludeBranches_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBranches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancingData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "Instancing Data" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generation probability in each iteration\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generation probability in each iteration" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancingData, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Probability_MetaData), Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Probability_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinSpacing_MetaData[] = {
		{ "Category", "Instancing Data" },
		{ "ClampMin", "5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min distance between meshes\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min distance between meshes" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinSpacing = { "MinSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancingData, MinSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinSpacing_MetaData), Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxSpacing_MetaData[] = {
		{ "Category", "Instancing Data" },
		{ "ClampMin", "5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max distance between meshes\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance between meshes" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxSpacing = { "MaxSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancingData, MaxSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxSpacing_MetaData), Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinScaling_MetaData[] = {
		{ "Category", "Instancing Data" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min meshes scaling\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min meshes scaling" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinScaling = { "MinScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancingData, MinScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinScaling_MetaData), Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxScaling_MetaData[] = {
		{ "Category", "Instancing Data" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max meshes scaling\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max meshes scaling" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxScaling = { "MaxScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancingData, MaxScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxScaling_MetaData), Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Zoffset_MetaData[] = {
		{ "Category", "Instancing Data" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max meshes scaling\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max meshes scaling" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Zoffset = { "Zoffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancingData, Zoffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Zoffset_MetaData), Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Zoffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_bIncludeBranches_MetaData[] = {
		{ "Category", "Instancing Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include branches\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include branches" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_bIncludeBranches_SetBit(void* Obj)
	{
		((FInstancingData*)Obj)->bIncludeBranches = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_bIncludeBranches = { "bIncludeBranches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInstancingData), &Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_bIncludeBranches_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_bIncludeBranches_MetaData), Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_bIncludeBranches_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Probability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MinScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_MaxScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_Zoffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancingData_Statics::NewProp_bIncludeBranches,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IvySystem,
		nullptr,
		&NewStructOps,
		"InstancingData",
		Z_Construct_UScriptStruct_FInstancingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::PropPointers),
		sizeof(FInstancingData),
		alignof(FInstancingData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancingData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancingData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInstancingData()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancingData.InnerSingleton, Z_Construct_UScriptStruct_FInstancingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancingData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshesData;
class UScriptStruct* FMeshesData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshesData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshesData, (UObject*)Z_Construct_UPackage__Script_IvySystem(), TEXT("MeshesData"));
	}
	return Z_Registration_Info_UScriptStruct_MeshesData.OuterSingleton;
}
template<> IVYSYSTEM_API UScriptStruct* StaticStruct<FMeshesData>()
{
	return FMeshesData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshesData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshesData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshesData>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshesData_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshesData_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Meshes Data" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshesData_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshesData, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshesData_Statics::NewProp_Meshes_MetaData), Z_Construct_UScriptStruct_FMeshesData_Statics::NewProp_Meshes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshesData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshesData_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshesData_Statics::NewProp_Meshes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IvySystem,
		nullptr,
		&NewStructOps,
		"MeshesData",
		Z_Construct_UScriptStruct_FMeshesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshesData_Statics::PropPointers),
		sizeof(FMeshesData),
		alignof(FMeshesData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshesData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshesData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshesData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMeshesData()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshesData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshesData.InnerSingleton, Z_Construct_UScriptStruct_FMeshesData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshesData.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(AIvyGenerator::execCleanBakeMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanBakeMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIvyGenerator::execBakeMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BakeMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIvyGenerator::execGenerateVariation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateVariation();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void AIvyGenerator::StaticRegisterNativesAIvyGenerator()
	{
#if WITH_EDITOR
		UClass* Class = AIvyGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BakeMeshes", &AIvyGenerator::execBakeMeshes },
			{ "CleanBakeMeshes", &AIvyGenerator::execCleanBakeMeshes },
			{ "GenerateVariation", &AIvyGenerator::execGenerateVariation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AIvyGenerator_BakeMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIvyGenerator_BakeMeshes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGenerator_BakeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGenerator, nullptr, "BakeMeshes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGenerator_BakeMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGenerator_BakeMeshes_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AIvyGenerator_BakeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGenerator_BakeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AIvyGenerator_CleanBakeMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIvyGenerator_CleanBakeMeshes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGenerator_CleanBakeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGenerator, nullptr, "CleanBakeMeshes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGenerator_CleanBakeMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGenerator_CleanBakeMeshes_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AIvyGenerator_CleanBakeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGenerator_CleanBakeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AIvyGenerator_GenerateVariation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIvyGenerator_GenerateVariation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIvyGenerator_GenerateVariation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIvyGenerator, nullptr, "GenerateVariation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIvyGenerator_GenerateVariation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIvyGenerator_GenerateVariation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AIvyGenerator_GenerateVariation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIvyGenerator_GenerateVariation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIvyGenerator);
	UClass* Z_Construct_UClass_AIvyGenerator_NoRegister()
	{
		return AIvyGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AIvyGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSegmentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSegmentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSegmentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSegmentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TendrilScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TendrilScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRoot_MetaData[];
#endif
		static void NewProp_bShowRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BranchingFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BranchingProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBranchingOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBranchingOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBranchingOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBranchingOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBranchingCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBranchingCompletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBranchingCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBranchingCompletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActiveLeafs_MetaData[];
#endif
		static void NewProp_bActiveLeafs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveLeafs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeafParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeafParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActiveFlowers_MetaData[];
#endif
		static void NewProp_bActiveFlowers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveFlowers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowerParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlowerParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTendrilMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTendrilMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTendrilMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTendrilMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidTendrilMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MidTendrilMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTendrilMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTendrilMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeafMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeafMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowerMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlowerMeshes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TendrilOverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TendrilOverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TendrilOverrideMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeafOverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeafOverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LeafOverrideMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlowerOverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowerOverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FlowerOverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewMeshes_MetaData[];
#endif
		static void NewProp_bPreviewMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BasePackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BakedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedStaticMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BakedStaticMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainSplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainSplineComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMCMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMCMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMCMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ISMCMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIvyGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IvySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_AIvyGenerator_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AIvyGenerator_BakeMeshes, "BakeMeshes" }, // 3606617786
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AIvyGenerator_CleanBakeMeshes, "CleanBakeMeshes" }, // 3657866670
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AIvyGenerator_GenerateVariation, "GenerateVariation" }, // 2092446363
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IvyGenerator.h" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Generation|Random" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Seed for the random stream to ensure consistency\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seed for the random stream to ensure consistency" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomSeed_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Generation|Noise" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale for the Perlin noise used in tendril generation\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale for the Perlin noise used in tendril generation" },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseScale_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseOffset_MetaData[] = {
		{ "Category", "Generation|Noise" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset for the Perlin noise used in tendril generation\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset for the Perlin noise used in tendril generation" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseOffset = { "NoiseOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, NoiseOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseOffset_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinSegmentLength_MetaData[] = {
		{ "Category", "Generation|Tendril" },
		{ "ClampMin", "5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min length of each segment of the tendril\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min length of each segment of the tendril" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinSegmentLength = { "MinSegmentLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MinSegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinSegmentLength_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinSegmentLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxSegmentLength_MetaData[] = {
		{ "Category", "Generation|Tendril" },
		{ "ClampMin", "5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max length of each segment of the tendril\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max length of each segment of the tendril" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxSegmentLength = { "MaxSegmentLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MaxSegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxSegmentLength_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxSegmentLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxWidth_MetaData[] = {
		{ "Category", "Generation|Tendril" },
		{ "ClampMin", "5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max width offset applied to the tendril points\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max width offset applied to the tendril points" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MaxWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxWidth_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Generation|Tendril" },
		{ "ClampMin", "5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max height offset applied to the tendril points\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max height offset applied to the tendril points" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxHeight_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilScaling_MetaData[] = {
		{ "Category", "Generation|Tendril" },
		{ "ClampMax", "5.000000" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min tendril scaling\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min tendril scaling" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilScaling = { "TendrilScaling", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, TendrilScaling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilScaling_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bShowRoot_MetaData[] = {
		{ "Category", "Generation|Tendril" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use root at the beginning\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use root at the beginning" },
#endif
	};
#endif
	void Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bShowRoot_SetBit(void* Obj)
	{
		((AIvyGenerator*)Obj)->bShowRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bShowRoot = { "bShowRoot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIvyGenerator), &Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bShowRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bShowRoot_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bShowRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingFrequency_MetaData[] = {
		{ "Category", "Generation|Branching" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Frequency at which branches will be attempted to be generated\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frequency at which branches will be attempted to be generated" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingFrequency = { "BranchingFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, BranchingFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingFrequency_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingProbability_MetaData[] = {
		{ "Category", "Generation|Branching" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Probability of a branch being generated at each eligible point\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Probability of a branch being generated at each eligible point" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingProbability = { "BranchingProbability", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, BranchingProbability), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingProbability_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingProbability_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingOffset_MetaData[] = {
		{ "Category", "Generation|Branching" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min offset applied to the branches\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min offset applied to the branches" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingOffset = { "MinBranchingOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MinBranchingOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingOffset_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingOffset_MetaData[] = {
		{ "Category", "Generation|Branching" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max offset applied to the branches\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max offset applied to the branches" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingOffset = { "MaxBranchingOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MaxBranchingOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingOffset_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingCompletion_MetaData[] = {
		{ "Category", "Generation|Branching" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min length of branches\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min length of branches" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingCompletion = { "MinBranchingCompletion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MinBranchingCompletion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingCompletion_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingCompletion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingCompletion_MetaData[] = {
		{ "Category", "Generation|Branching" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maxlength of branches\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maxlength of branches" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingCompletion = { "MaxBranchingCompletion", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MaxBranchingCompletion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingCompletion_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingCompletion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveLeafs_MetaData[] = {
		{ "Category", "Generation|Intancing" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveLeafs_SetBit(void* Obj)
	{
		((AIvyGenerator*)Obj)->bActiveLeafs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveLeafs = { "bActiveLeafs", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIvyGenerator), &Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveLeafs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveLeafs_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveLeafs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafParameters_MetaData[] = {
		{ "Category", "Generation|Intancing" },
		{ "EditCondition", "bActiveLeafs" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafParameters = { "LeafParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, LeafParameters), Z_Construct_UScriptStruct_FInstancingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafParameters_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafParameters_MetaData) }; // 2910574265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveFlowers_MetaData[] = {
		{ "Category", "Generation|Intancing" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveFlowers_SetBit(void* Obj)
	{
		((AIvyGenerator*)Obj)->bActiveFlowers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveFlowers = { "bActiveFlowers", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIvyGenerator), &Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveFlowers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveFlowers_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveFlowers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerParameters_MetaData[] = {
		{ "Category", "Generation|Intancing" },
		{ "EditCondition", "bActiveFlowers" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerParameters = { "FlowerParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, FlowerParameters), Z_Construct_UScriptStruct_FInstancingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerParameters_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerParameters_MetaData) }; // 2910574265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RootTendrilMeshes_MetaData[] = {
		{ "Category", "Meshes|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default only\n" },
#endif
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default only" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RootTendrilMeshes = { "RootTendrilMeshes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, RootTendrilMeshes), Z_Construct_UScriptStruct_FMeshesData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RootTendrilMeshes_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RootTendrilMeshes_MetaData) }; // 1442345001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_StartTendrilMeshes_MetaData[] = {
		{ "Category", "Meshes|Data" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_StartTendrilMeshes = { "StartTendrilMeshes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, StartTendrilMeshes), Z_Construct_UScriptStruct_FMeshesData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_StartTendrilMeshes_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_StartTendrilMeshes_MetaData) }; // 1442345001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MidTendrilMeshes_MetaData[] = {
		{ "Category", "Meshes|Data" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MidTendrilMeshes = { "MidTendrilMeshes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MidTendrilMeshes), Z_Construct_UScriptStruct_FMeshesData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MidTendrilMeshes_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MidTendrilMeshes_MetaData) }; // 1442345001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_EndTendrilMeshes_MetaData[] = {
		{ "Category", "Meshes|Data" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_EndTendrilMeshes = { "EndTendrilMeshes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, EndTendrilMeshes), Z_Construct_UScriptStruct_FMeshesData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_EndTendrilMeshes_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_EndTendrilMeshes_MetaData) }; // 1442345001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafMeshes_MetaData[] = {
		{ "Category", "Meshes|Data" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafMeshes = { "LeafMeshes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, LeafMeshes), Z_Construct_UScriptStruct_FMeshesData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafMeshes_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafMeshes_MetaData) }; // 1442345001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerMeshes_MetaData[] = {
		{ "Category", "Meshes|Data" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerMeshes = { "FlowerMeshes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, FlowerMeshes), Z_Construct_UScriptStruct_FMeshesData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerMeshes_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerMeshes_MetaData) }; // 1442345001
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilOverrideMaterials_Inner = { "TendrilOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilOverrideMaterials_MetaData[] = {
		{ "Category", "Meshes|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh Data\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh Data" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilOverrideMaterials = { "TendrilOverrideMaterials", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, TendrilOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilOverrideMaterials_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilOverrideMaterials_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafOverrideMaterials_Inner = { "LeafOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafOverrideMaterials_MetaData[] = {
		{ "Category", "Meshes|Data" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafOverrideMaterials = { "LeafOverrideMaterials", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, LeafOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafOverrideMaterials_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafOverrideMaterials_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerOverrideMaterials_Inner = { "FlowerOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerOverrideMaterials_MetaData[] = {
		{ "Category", "Meshes|Data" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerOverrideMaterials = { "FlowerOverrideMaterials", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, FlowerOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerOverrideMaterials_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerOverrideMaterials_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bPreviewMeshes_MetaData[] = {
		{ "Category", "Meshes|Baking" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bPreviewMeshes_SetBit(void* Obj)
	{
		((AIvyGenerator*)Obj)->bPreviewMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bPreviewMeshes = { "bPreviewMeshes", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIvyGenerator), &Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bPreviewMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bPreviewMeshes_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bPreviewMeshes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "Category", "Meshes|Baking" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, DirectoryPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_DirectoryPath_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_DirectoryPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BasePackageName_MetaData[] = {
		{ "Category", "Meshes|Baking" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BasePackageName = { "BasePackageName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, BasePackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BasePackageName_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BasePackageName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedMesh_MetaData[] = {
		{ "Category", "Meshes|Baking" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedMesh = { "BakedMesh", nullptr, (EPropertyFlags)0x0020080000200001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, BakedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedMesh_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedStaticMeshComp_MetaData[] = {
		{ "Category", "Ivy System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedStaticMeshComp = { "BakedStaticMeshComp", nullptr, (EPropertyFlags)0x002008000028001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, BakedStaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedStaticMeshComp_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedStaticMeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MainSplineComp_MetaData[] = {
		{ "Category", "Ivy System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main spline used for ivys design\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main spline used for ivys design" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MainSplineComp = { "MainSplineComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, MainSplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MainSplineComp_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MainSplineComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomStream_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The random stream for controlled randomness\n" },
#endif
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The random stream for controlled randomness" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomStream_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomStream_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineComponents_Inner = { "SplineComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineComponents = { "SplineComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, SplineComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineComponents_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineComponents_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineMeshComponents_Inner = { "SplineMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineMeshComponents = { "SplineMeshComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, SplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineMeshComponents_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineMeshComponents_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap_ValueProp = { "ISMCMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap_Key_KeyProp = { "ISMCMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IvyGenerator.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap = { "ISMCMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIvyGenerator, ISMCMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap_MetaData), Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIvyGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_NoiseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinSegmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxSegmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bShowRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BranchingProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MinBranchingCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MaxBranchingCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveLeafs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bActiveFlowers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RootTendrilMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_StartTendrilMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MidTendrilMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_EndTendrilMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilOverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_TendrilOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafOverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_LeafOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerOverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_FlowerOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_bPreviewMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BasePackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_BakedStaticMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_MainSplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_SplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIvyGenerator_Statics::NewProp_ISMCMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIvyGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIvyGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIvyGenerator_Statics::ClassParams = {
		&AIvyGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_AIvyGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AIvyGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIvyGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AIvyGenerator()
	{
		if (!Z_Registration_Info_UClass_AIvyGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIvyGenerator.OuterSingleton, Z_Construct_UClass_AIvyGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIvyGenerator.OuterSingleton;
	}
	template<> IVYSYSTEM_API UClass* StaticClass<AIvyGenerator>()
	{
		return AIvyGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIvyGenerator);
	AIvyGenerator::~AIvyGenerator() {}
	struct Z_CompiledInDeferFile_FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_Statics::ScriptStructInfo[] = {
		{ FTendrilPointData::StaticStruct, Z_Construct_UScriptStruct_FTendrilPointData_Statics::NewStructOps, TEXT("TendrilPointData"), &Z_Registration_Info_UScriptStruct_TendrilPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTendrilPointData), 3383093860U) },
		{ FTendrilData::StaticStruct, Z_Construct_UScriptStruct_FTendrilData_Statics::NewStructOps, TEXT("TendrilData"), &Z_Registration_Info_UScriptStruct_TendrilData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTendrilData), 2296976914U) },
		{ FInstancingData::StaticStruct, Z_Construct_UScriptStruct_FInstancingData_Statics::NewStructOps, TEXT("InstancingData"), &Z_Registration_Info_UScriptStruct_InstancingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancingData), 2910574265U) },
		{ FMeshesData::StaticStruct, Z_Construct_UScriptStruct_FMeshesData_Statics::NewStructOps, TEXT("MeshesData"), &Z_Registration_Info_UScriptStruct_MeshesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshesData), 1442345001U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIvyGenerator, AIvyGenerator::StaticClass, TEXT("AIvyGenerator"), &Z_Registration_Info_UClass_AIvyGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIvyGenerator), 1253277324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_4128768474(TEXT("/Script/IvySystem"),
		Z_CompiledInDeferFile_FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
