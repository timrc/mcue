// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MCUE_Block_generated_h
#error "Block.generated.h already included, missing '#pragma once' in Block.h"
#endif
#define MCUE_Block_generated_h

#define MCUE_Source_MCUE_Block_h_13_RPC_WRAPPERS
#define MCUE_Source_MCUE_Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MCUE_Source_MCUE_Block_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend MCUE_API class UClass* Z_Construct_UClass_ABlock(); \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCUE"), NO_API) \
	DECLARE_SERIALIZER(ABlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCUE_Source_MCUE_Block_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend MCUE_API class UClass* Z_Construct_UClass_ABlock(); \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCUE"), NO_API) \
	DECLARE_SERIALIZER(ABlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCUE_Source_MCUE_Block_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public:


#define MCUE_Source_MCUE_Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlock)


#define MCUE_Source_MCUE_Block_h_13_PRIVATE_PROPERTY_OFFSET
#define MCUE_Source_MCUE_Block_h_10_PROLOG
#define MCUE_Source_MCUE_Block_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCUE_Source_MCUE_Block_h_13_PRIVATE_PROPERTY_OFFSET \
	MCUE_Source_MCUE_Block_h_13_RPC_WRAPPERS \
	MCUE_Source_MCUE_Block_h_13_INCLASS \
	MCUE_Source_MCUE_Block_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MCUE_Source_MCUE_Block_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCUE_Source_MCUE_Block_h_13_PRIVATE_PROPERTY_OFFSET \
	MCUE_Source_MCUE_Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MCUE_Source_MCUE_Block_h_13_INCLASS_NO_PURE_DECLS \
	MCUE_Source_MCUE_Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCUE_Source_MCUE_Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
