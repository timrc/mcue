// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MCUE_MCUECharacter_generated_h
#error "MCUECharacter.generated.h already included, missing '#pragma once' in MCUECharacter.h"
#endif
#define MCUE_MCUECharacter_generated_h

#define MCUE_Source_MCUE_MCUECharacter_h_16_RPC_WRAPPERS
#define MCUE_Source_MCUE_MCUECharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MCUE_Source_MCUE_MCUECharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMCUECharacter(); \
	friend MCUE_API class UClass* Z_Construct_UClass_AMCUECharacter(); \
public: \
	DECLARE_CLASS(AMCUECharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCUE"), NO_API) \
	DECLARE_SERIALIZER(AMCUECharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCUE_Source_MCUE_MCUECharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMCUECharacter(); \
	friend MCUE_API class UClass* Z_Construct_UClass_AMCUECharacter(); \
public: \
	DECLARE_CLASS(AMCUECharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCUE"), NO_API) \
	DECLARE_SERIALIZER(AMCUECharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCUE_Source_MCUE_MCUECharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMCUECharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMCUECharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCUECharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCUECharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCUECharacter(AMCUECharacter&&); \
	NO_API AMCUECharacter(const AMCUECharacter&); \
public:


#define MCUE_Source_MCUE_MCUECharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCUECharacter(AMCUECharacter&&); \
	NO_API AMCUECharacter(const AMCUECharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCUECharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCUECharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMCUECharacter)


#define MCUE_Source_MCUE_MCUECharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMCUECharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_WieldedItem() { return STRUCT_OFFSET(AMCUECharacter, FP_WieldedItem); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMCUECharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMCUECharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMCUECharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMCUECharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMCUECharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMCUECharacter, L_MotionController); }


#define MCUE_Source_MCUE_MCUECharacter_h_13_PROLOG
#define MCUE_Source_MCUE_MCUECharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCUE_Source_MCUE_MCUECharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MCUE_Source_MCUE_MCUECharacter_h_16_RPC_WRAPPERS \
	MCUE_Source_MCUE_MCUECharacter_h_16_INCLASS \
	MCUE_Source_MCUE_MCUECharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MCUE_Source_MCUE_MCUECharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCUE_Source_MCUE_MCUECharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MCUE_Source_MCUE_MCUECharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MCUE_Source_MCUE_MCUECharacter_h_16_INCLASS_NO_PURE_DECLS \
	MCUE_Source_MCUE_MCUECharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCUE_Source_MCUE_MCUECharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
