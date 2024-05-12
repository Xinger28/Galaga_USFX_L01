// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GALAGA_USFX_L01_GoldBall_generated_h
#error "GoldBall.generated.h already included, missing '#pragma once' in GoldBall.h"
#endif
#define GALAGA_USFX_L01_GoldBall_generated_h

#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_SPARSE_DATA
#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableCollision); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execCalculateReflectionVelocity); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableCollision); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execCalculateReflectionVelocity); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoldBall(); \
	friend struct Z_Construct_UClass_AGoldBall_Statics; \
public: \
	DECLARE_CLASS(AGoldBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L01"), NO_API) \
	DECLARE_SERIALIZER(AGoldBall)


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGoldBall(); \
	friend struct Z_Construct_UClass_AGoldBall_Statics; \
public: \
	DECLARE_CLASS(AGoldBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L01"), NO_API) \
	DECLARE_SERIALIZER(AGoldBall)


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoldBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoldBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoldBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoldBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoldBall(AGoldBall&&); \
	NO_API AGoldBall(const AGoldBall&); \
public:


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoldBall(AGoldBall&&); \
	NO_API AGoldBall(const AGoldBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoldBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoldBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoldBall)


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_PRIVATE_PROPERTY_OFFSET
#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_10_PROLOG
#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_SPARSE_DATA \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_RPC_WRAPPERS \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_INCLASS \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_SPARSE_DATA \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_L01_API UClass* StaticClass<class AGoldBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_L01_Source_Galaga_USFX_L01_GoldBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
