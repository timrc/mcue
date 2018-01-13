// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MCUE_MCUEProjectile_generated_h
#error "MCUEProjectile.generated.h already included, missing '#pragma once' in MCUEProjectile.h"
#endif
#define MCUE_MCUEProjectile_generated_h

#define MCUE_Source_MCUE_MCUEProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MCUE_Source_MCUE_MCUEProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MCUE_Source_MCUE_MCUEProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMCUEProjectile(); \
	friend MCUE_API class UClass* Z_Construct_UClass_AMCUEProjectile(); \
public: \
	DECLARE_CLASS(AMCUEProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCUE"), NO_API) \
	DECLARE_SERIALIZER(AMCUEProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MCUE_Source_MCUE_MCUEProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMCUEProjectile(); \
	friend MCUE_API class UClass* Z_Construct_UClass_AMCUEProjectile(); \
public: \
	DECLARE_CLASS(AMCUEProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCUE"), NO_API) \
	DECLARE_SERIALIZER(AMCUEProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MCUE_Source_MCUE_MCUEProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMCUEProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMCUEProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCUEProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCUEProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCUEProjectile(AMCUEProjectile&&); \
	NO_API AMCUEProjectile(const AMCUEProjectile&); \
public:


#define MCUE_Source_MCUE_MCUEProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCUEProjectile(AMCUEProjectile&&); \
	NO_API AMCUEProjectile(const AMCUEProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCUEProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCUEProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMCUEProjectile)


#define MCUE_Source_MCUE_MCUEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMCUEProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMCUEProjectile, ProjectileMovement); }


#define MCUE_Source_MCUE_MCUEProjectile_h_9_PROLOG
#define MCUE_Source_MCUE_MCUEProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCUE_Source_MCUE_MCUEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MCUE_Source_MCUE_MCUEProjectile_h_12_RPC_WRAPPERS \
	MCUE_Source_MCUE_MCUEProjectile_h_12_INCLASS \
	MCUE_Source_MCUE_MCUEProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MCUE_Source_MCUE_MCUEProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCUE_Source_MCUE_MCUEProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MCUE_Source_MCUE_MCUEProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MCUE_Source_MCUE_MCUEProjectile_h_12_INCLASS_NO_PURE_DECLS \
	MCUE_Source_MCUE_MCUEProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCUE_Source_MCUE_MCUEProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
