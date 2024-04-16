// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L001/NaveAyuda.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAyuda() {}
// Cross Module References
	GALAGA_USFX_L001_API UClass* Z_Construct_UClass_ANaveAyuda_NoRegister();
	GALAGA_USFX_L001_API UClass* Z_Construct_UClass_ANaveAyuda();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L001();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveAyuda::StaticRegisterNativesANaveAyuda()
	{
	}
	UClass* Z_Construct_UClass_ANaveAyuda_NoRegister()
	{
		return ANaveAyuda::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAyuda_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaNaveAyuda_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaNaveAyuda;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAyuda_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAyuda_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAyuda.h" },
		{ "ModuleRelativePath", "NaveAyuda.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAyuda_Statics::NewProp_MallaNaveAyuda_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveAyuda.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveAyuda_Statics::NewProp_MallaNaveAyuda = { "MallaNaveAyuda", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAyuda, MallaNaveAyuda), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveAyuda_Statics::NewProp_MallaNaveAyuda_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAyuda_Statics::NewProp_MallaNaveAyuda_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAyuda_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAyuda_Statics::NewProp_MallaNaveAyuda,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAyuda_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAyuda>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAyuda_Statics::ClassParams = {
		&ANaveAyuda::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAyuda_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAyuda_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAyuda_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAyuda_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAyuda()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAyuda_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAyuda, 97817762);
	template<> GALAGA_USFX_L001_API UClass* StaticClass<ANaveAyuda>()
	{
		return ANaveAyuda::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAyuda(Z_Construct_UClass_ANaveAyuda, &ANaveAyuda::StaticClass, TEXT("/Script/Galaga_USFX_L001"), TEXT("ANaveAyuda"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAyuda);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
