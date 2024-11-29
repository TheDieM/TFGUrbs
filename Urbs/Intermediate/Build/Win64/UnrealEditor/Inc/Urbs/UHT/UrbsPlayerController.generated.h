// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UrbsPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef URBS_UrbsPlayerController_generated_h
#error "UrbsPlayerController.generated.h already included, missing '#pragma once' in UrbsPlayerController.h"
#endif
#define URBS_UrbsPlayerController_generated_h

#define FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUrbsPlayerController(); \
	friend struct Z_Construct_UClass_AUrbsPlayerController_Statics; \
public: \
	DECLARE_CLASS(AUrbsPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Urbs"), NO_API) \
	DECLARE_SERIALIZER(AUrbsPlayerController)


#define FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUrbsPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUrbsPlayerController(AUrbsPlayerController&&); \
	AUrbsPlayerController(const AUrbsPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUrbsPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUrbsPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUrbsPlayerController) \
	NO_API virtual ~AUrbsPlayerController();


#define FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsPlayerController_h_14_PROLOG
#define FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> URBS_API UClass* StaticClass<class AUrbsPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
