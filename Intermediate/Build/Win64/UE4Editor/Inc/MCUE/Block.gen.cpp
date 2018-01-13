// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Block.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock() {}
// Cross Module References
	MCUE_API UClass* Z_Construct_UClass_ABlock_NoRegister();
	MCUE_API UClass* Z_Construct_UClass_ABlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MCUE();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABlock::StaticRegisterNativesABlock()
	{
	}
	UClass* Z_Construct_UClass_ABlock_NoRegister()
	{
		return ABlock::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_MCUE,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Block.h" },
				{ "ModuleRelativePath", "Block.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingStage_MetaData[] = {
				{ "Category", "Block" },
				{ "ModuleRelativePath", "Block.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakingStage = { UE4CodeGen_Private::EPropertyClass::Float, "BreakingStage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ABlock, BreakingStage), METADATA_PARAMS(NewProp_BreakingStage_MetaData, ARRAY_COUNT(NewProp_BreakingStage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resistance_MetaData[] = {
				{ "Category", "Block" },
				{ "ModuleRelativePath", "Block.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Resistance = { UE4CodeGen_Private::EPropertyClass::Float, "Resistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ABlock, Resistance), METADATA_PARAMS(NewProp_Resistance_MetaData, ARRAY_COUNT(NewProp_Resistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Block_MetaData[] = {
				{ "Category", "Block" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Block.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Block = { UE4CodeGen_Private::EPropertyClass::Object, "SM_Block", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000090009, 1, nullptr, STRUCT_OFFSET(ABlock, SM_Block), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SM_Block_MetaData, ARRAY_COUNT(NewProp_SM_Block_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BreakingStage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Resistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SM_Block,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABlock>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABlock::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlock, 2136275764);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock(Z_Construct_UClass_ABlock, &ABlock::StaticClass, TEXT("/Script/MCUE"), TEXT("ABlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
