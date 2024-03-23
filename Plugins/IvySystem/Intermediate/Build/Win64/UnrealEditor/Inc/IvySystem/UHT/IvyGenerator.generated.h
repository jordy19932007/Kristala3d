// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IvyGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IVYSYSTEM_IvyGenerator_generated_h
#error "IvyGenerator.generated.h already included, missing '#pragma once' in IvyGenerator.h"
#endif
#define IVYSYSTEM_IvyGenerator_generated_h

#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTendrilPointData_Statics; \
	IVYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> IVYSYSTEM_API UScriptStruct* StaticStruct<struct FTendrilPointData>();

#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTendrilData_Statics; \
	IVYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> IVYSYSTEM_API UScriptStruct* StaticStruct<struct FTendrilData>();

#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancingData_Statics; \
	IVYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> IVYSYSTEM_API UScriptStruct* StaticStruct<struct FInstancingData>();

#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshesData_Statics; \
	IVYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> IVYSYSTEM_API UScriptStruct* StaticStruct<struct FMeshesData>();

#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_SPARSE_DATA
#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanBakeMeshes); \
	DECLARE_FUNCTION(execBakeMeshes); \
	DECLARE_FUNCTION(execGenerateVariation);


#else
#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_ACCESSORS
#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIvyGenerator(); \
	friend struct Z_Construct_UClass_AIvyGenerator_Statics; \
public: \
	DECLARE_CLASS(AIvyGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IvySystem"), NO_API) \
	DECLARE_SERIALIZER(AIvyGenerator)


#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIvyGenerator(AIvyGenerator&&); \
	NO_API AIvyGenerator(const AIvyGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIvyGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIvyGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIvyGenerator) \
	NO_API virtual ~AIvyGenerator();


#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_114_PROLOG
#define FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_SPARSE_DATA \
	FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_ACCESSORS \
	FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_INCLASS_NO_PURE_DECLS \
	FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IVYSYSTEM_API UClass* StaticClass<class AIvyGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Kristala3d_Plugins_IvySystem_Source_IvySystem_Public_IvyGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
