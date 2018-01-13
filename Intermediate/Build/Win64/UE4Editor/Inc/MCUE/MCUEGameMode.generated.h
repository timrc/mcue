// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MCUE_MCUEGameMode_generated_h
#error "MCUEGameMode.generated.h already included, missing '#pragma once' in MCUEGameMode.h"
#endif
#define MCUE_MCUEGameMode_generated_h

#define MCUE_Source_MCUE_MCUEGameMode_h_12_RPC_WRAPPERS
#define MCUE_Source_MCUE_MCUEGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MCUE_Source_MCUE_MCUEGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMCUEGameMode(); \
	friend MCUE_API class UClass* Z_Construct_UClass_AMCUEGameMode(); \
public: \
	DECLARE_CLASS(AMCUEGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MCUE"), MCUE_API) \
	DECLARE_SERIALIZER(AMCUEGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCUE_Source_MCUE_MCUEGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMCUEGameMode(); \
	friend MCUE_API class UClass* Z_Construct_UClass_AMCUEGameMode(); \
public: \
	DECLARE_CLASS(AMCUEGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MCUE"), MCUE_API) \
	DECLARE_SERIALIZER(AMCUEGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCUE_Source_MCUE_MCUEGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MCUE_API AMCUEGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMCUEGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MCUE_API, AMCUEGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCUEGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MCUE_API AMCUEGameMode(AMCUEGameMode&&); \
	MCUE_API AMCUEGameMode(const AMCUEGameMode&); \
public:


#define MCUE_Source_MCUE_MCUEGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MCUE_API AMCUEGameMode(AMCUEGameMode&&); \
	MCUE_API AMCUEGameMode(const AMCUEGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MCUE_API, AMCUEGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCUEGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMCUEGameMode)


#define MCUE_Source_MCUE_MCUEGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define MCUE_Source_MCUE_MCUEGameMode_h_9_PROLOG
#define MCUE_Source_MCUE_MCUEGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCUE_Source_MCUE_MCUEGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	MCUE_Source_MCUE_MCUEGameMode_h_12_RPC_WRAPPERS \
	MCUE_Source_MCUE_MCUEGameMode_h_12_INCLASS \
	MCUE_Source_MCUE_MCUEGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MCUE_Source_MCUE_MCUEGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCUE_Source_MCUE_MCUEGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	MCUE_Source_MCUE_MCUEGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MCUE_Source_MCUE_MCUEGameMode_h_12_INCLASS_NO_PURE_DECLS \
	MCUE_Source_MCUE_MCUEGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCUE_Source_MCUE_MCUEGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
