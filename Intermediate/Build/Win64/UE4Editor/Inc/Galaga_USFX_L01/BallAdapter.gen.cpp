// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/BallAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallAdapter() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABallAdapter_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABallAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIProjectilBall_NoRegister();
// End Cross Module References
	void ABallAdapter::StaticRegisterNativesABallAdapter()
	{
	}
	UClass* Z_Construct_UClass_ABallAdapter_NoRegister()
	{
		return ABallAdapter::StaticClass();
	}
	struct Z_Construct_UClass_ABallAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BallAdapter.h" },
		{ "ModuleRelativePath", "BallAdapter.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABallAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIProjectilBall_NoRegister, (int32)VTABLE_OFFSET(ABallAdapter, IIProjectilBall), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABallAdapter_Statics::ClassParams = {
		&ABallAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABallAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABallAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABallAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallAdapter, 1177703338);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ABallAdapter>()
	{
		return ABallAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallAdapter(Z_Construct_UClass_ABallAdapter, &ABallAdapter::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ABallAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
