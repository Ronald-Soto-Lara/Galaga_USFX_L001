// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L001/NaveCambita.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveCambita() {}
// Cross Module References
	GALAGA_USFX_L001_API UClass* Z_Construct_UClass_ANaveCambita_NoRegister();
	GALAGA_USFX_L001_API UClass* Z_Construct_UClass_ANaveCambita();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L001();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveCambita::StaticRegisterNativesANaveCambita()
	{
	}
	UClass* Z_Construct_UClass_ANaveCambita_NoRegister()
	{
		return ANaveCambita::StaticClass();
	}
	struct Z_Construct_UClass_ANaveCambita_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaNaveCambita_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaNaveCambita;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveCambita_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCambita_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveCambita.h" },
		{ "ModuleRelativePath", "NaveCambita.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCambita_Statics::NewProp_MallaNaveCambita_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveCambita.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveCambita_Statics::NewProp_MallaNaveCambita = { "MallaNaveCambita", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveCambita, MallaNaveCambita), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveCambita_Statics::NewProp_MallaNaveCambita_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCambita_Statics::NewProp_MallaNaveCambita_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveCambita_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveCambita_Statics::NewProp_MallaNaveCambita,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveCambita_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveCambita>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveCambita_Statics::ClassParams = {
		&ANaveCambita::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveCambita_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCambita_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveCambita_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCambita_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveCambita()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveCambita_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveCambita, 2833719829);
	template<> GALAGA_USFX_L001_API UClass* StaticClass<ANaveCambita>()
	{
		return ANaveCambita::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveCambita(Z_Construct_UClass_ANaveCambita, &ANaveCambita::StaticClass, TEXT("/Script/Galaga_USFX_L001"), TEXT("ANaveCambita"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveCambita);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
