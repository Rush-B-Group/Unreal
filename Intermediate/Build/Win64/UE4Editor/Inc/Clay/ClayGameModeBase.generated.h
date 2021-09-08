// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLAY_ClayGameModeBase_generated_h
#error "ClayGameModeBase.generated.h already included, missing '#pragma once' in ClayGameModeBase.h"
#endif
#define CLAY_ClayGameModeBase_generated_h

#define Clay_Source_Clay_ClayGameModeBase_h_15_SPARSE_DATA
#define Clay_Source_Clay_ClayGameModeBase_h_15_RPC_WRAPPERS
#define Clay_Source_Clay_ClayGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Clay_Source_Clay_ClayGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClayGameModeBase(); \
	friend struct Z_Construct_UClass_AClayGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AClayGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clay"), NO_API) \
	DECLARE_SERIALIZER(AClayGameModeBase)


#define Clay_Source_Clay_ClayGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAClayGameModeBase(); \
	friend struct Z_Construct_UClass_AClayGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AClayGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clay"), NO_API) \
	DECLARE_SERIALIZER(AClayGameModeBase)


#define Clay_Source_Clay_ClayGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClayGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClayGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClayGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClayGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClayGameModeBase(AClayGameModeBase&&); \
	NO_API AClayGameModeBase(const AClayGameModeBase&); \
public:


#define Clay_Source_Clay_ClayGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClayGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClayGameModeBase(AClayGameModeBase&&); \
	NO_API AClayGameModeBase(const AClayGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClayGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClayGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClayGameModeBase)


#define Clay_Source_Clay_ClayGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Clay_Source_Clay_ClayGameModeBase_h_12_PROLOG
#define Clay_Source_Clay_ClayGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Clay_Source_Clay_ClayGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Clay_Source_Clay_ClayGameModeBase_h_15_SPARSE_DATA \
	Clay_Source_Clay_ClayGameModeBase_h_15_RPC_WRAPPERS \
	Clay_Source_Clay_ClayGameModeBase_h_15_INCLASS \
	Clay_Source_Clay_ClayGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Clay_Source_Clay_ClayGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Clay_Source_Clay_ClayGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Clay_Source_Clay_ClayGameModeBase_h_15_SPARSE_DATA \
	Clay_Source_Clay_ClayGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Clay_Source_Clay_ClayGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Clay_Source_Clay_ClayGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLAY_API UClass* StaticClass<class AClayGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Clay_Source_Clay_ClayGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
