// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L001/EscudoEscena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoEscena() {}
// Cross Module References
	GALAGA_USFX_L001_API UClass* Z_Construct_UClass_UEscudoEscena_NoRegister();
	GALAGA_USFX_L001_API UClass* Z_Construct_UClass_UEscudoEscena();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L001();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEscudoEscena::execCrearBarrera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearBarrera();
		P_NATIVE_END;
	}
	void UEscudoEscena::StaticRegisterNativesUEscudoEscena()
	{
		UClass* Class = UEscudoEscena::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearBarrera", &UEscudoEscena::execCrearBarrera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEscudoEscena_CrearBarrera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEscudoEscena_CrearBarrera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Barrera" },
		{ "ModuleRelativePath", "EscudoEscena.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEscudoEscena_CrearBarrera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEscudoEscena, nullptr, "CrearBarrera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEscudoEscena_CrearBarrera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEscudoEscena_CrearBarrera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEscudoEscena_CrearBarrera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEscudoEscena_CrearBarrera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEscudoEscena_NoRegister()
	{
		return UEscudoEscena::StaticClass();
	}
	struct Z_Construct_UClass_UEscudoEscena_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarreraToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BarreraToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscudoEscena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L001,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEscudoEscena_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEscudoEscena_CrearBarrera, "CrearBarrera" }, // 480935540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscudoEscena_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "EscudoEscena.h" },
		{ "ModuleRelativePath", "EscudoEscena.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscudoEscena_Statics::NewProp_BarreraToSpawn_MetaData[] = {
		{ "Category", "EscudoEscena" },
		{ "ModuleRelativePath", "EscudoEscena.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEscudoEscena_Statics::NewProp_BarreraToSpawn = { "BarreraToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEscudoEscena, BarreraToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEscudoEscena_Statics::NewProp_BarreraToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEscudoEscena_Statics::NewProp_BarreraToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEscudoEscena_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEscudoEscena_Statics::NewProp_BarreraToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscudoEscena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscudoEscena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEscudoEscena_Statics::ClassParams = {
		&UEscudoEscena::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEscudoEscena_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEscudoEscena_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEscudoEscena_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscudoEscena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscudoEscena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEscudoEscena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEscudoEscena, 627429435);
	template<> GALAGA_USFX_L001_API UClass* StaticClass<UEscudoEscena>()
	{
		return UEscudoEscena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEscudoEscena(Z_Construct_UClass_UEscudoEscena, &UEscudoEscena::StaticClass, TEXT("/Script/Galaga_USFX_L001"), TEXT("UEscudoEscena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscudoEscena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
