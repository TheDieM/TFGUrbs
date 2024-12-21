// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tabletop.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef URBS_Tabletop_generated_h
#error "Tabletop.generated.h already included, missing '#pragma once' in Tabletop.h"
#endif
#define URBS_Tabletop_generated_h

#define FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestBP); \
	DECLARE_FUNCTION(execDeleteMap); \
	DECLARE_FUNCTION(execGenerateMap);


#define FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATabletop(); \
	friend struct Z_Construct_UClass_ATabletop_Statics; \
public: \
	DECLARE_CLASS(ATabletop, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Urbs"), NO_API) \
	DECLARE_SERIALIZER(ATabletop)


#define FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATabletop(ATabletop&&); \
	ATabletop(const ATabletop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATabletop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATabletop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATabletop) \
	NO_API virtual ~ATabletop();


#define FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_15_PROLOG
#define FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> URBS_API UClass* StaticClass<class ATabletop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
