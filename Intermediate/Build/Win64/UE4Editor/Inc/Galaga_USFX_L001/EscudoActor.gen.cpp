// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L001/EscudoActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoActor() {}
// Cross Module References
	GALAGA_USFX_L001_API UClass* Z_Construct_UClass_AEscudoActor_NoRegister();
	GALAGA_USFX_L001_API UClass* Z_Construct_UClass_AEscudoActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L001();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEscudoActor::StaticRegisterNativesAEscudoActor()
	{
	}
	UClass* Z_Construct_UClass_AEscudoActor_NoRegister()
	{
		return AEscudoActor::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaBarrera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaBarrera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscudoActor.h" },
		{ "ModuleRelativePath", "EscudoActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoActor_Statics::NewProp_mallaBarrera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscudoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudoActor_Statics::NewProp_mallaBarrera = { "mallaBarrera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudoActor, mallaBarrera), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudoActor_Statics::NewProp_mallaBarrera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoActor_Statics::NewProp_mallaBarrera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscudoActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudoActor_Statics::NewProp_mallaBarrera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudoActor_Statics::ClassParams = {
		&AEscudoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscudoActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscudoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudoActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudoActor, 3588104249);
	template<> GALAGA_USFX_L001_API UClass* StaticClass<AEscudoActor>()
	{
		return AEscudoActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudoActor(Z_Construct_UClass_AEscudoActor, &AEscudoActor::StaticClass, TEXT("/Script/Galaga_USFX_L001"), TEXT("AEscudoActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
