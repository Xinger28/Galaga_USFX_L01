// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Galaga_USFX_L01GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_L01GameMode() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AGalaga_USFX_L01GameMode_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AGalaga_USFX_L01GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABallAdapter_NoRegister();
// End Cross Module References
	void AGalaga_USFX_L01GameMode::StaticRegisterNativesAGalaga_USFX_L01GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalaga_USFX_L01GameMode_NoRegister()
	{
		return AGalaga_USFX_L01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveJugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Adaptador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Adaptador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_USFX_L01GameMode.h" },
		{ "ModuleRelativePath", "Galaga_USFX_L01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_NaveJugador_MetaData[] = {
		{ "Category", "Game mode" },
		{ "ModuleRelativePath", "Galaga_USFX_L01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_NaveJugador = { "NaveJugador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_L01GameMode, NaveJugador), Z_Construct_UClass_AGalaga_USFX_L01Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_NaveJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_NaveJugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_Adaptador_MetaData[] = {
		{ "Category", "Game mode" },
		{ "ModuleRelativePath", "Galaga_USFX_L01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_Adaptador = { "Adaptador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_L01GameMode, Adaptador), Z_Construct_UClass_ABallAdapter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_Adaptador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_Adaptador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_NaveJugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::NewProp_Adaptador,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFX_L01GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::ClassParams = {
		&AGalaga_USFX_L01GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFX_L01GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_USFX_L01GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_USFX_L01GameMode, 2837955609);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AGalaga_USFX_L01GameMode>()
	{
		return AGalaga_USFX_L01GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_USFX_L01GameMode(Z_Construct_UClass_AGalaga_USFX_L01GameMode, &AGalaga_USFX_L01GameMode::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AGalaga_USFX_L01GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFX_L01GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
