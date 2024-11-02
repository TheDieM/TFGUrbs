// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Urbs/UrbsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUrbsGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Urbs();
URBS_API UClass* Z_Construct_UClass_AUrbsGameMode();
URBS_API UClass* Z_Construct_UClass_AUrbsGameMode_NoRegister();
// End Cross Module References

// Begin Class AUrbsGameMode
void AUrbsGameMode::StaticRegisterNativesAUrbsGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUrbsGameMode);
UClass* Z_Construct_UClass_AUrbsGameMode_NoRegister()
{
	return AUrbsGameMode::StaticClass();
}
struct Z_Construct_UClass_AUrbsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UrbsGameMode.h" },
		{ "ModuleRelativePath", "UrbsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUrbsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUrbsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Urbs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUrbsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUrbsGameMode_Statics::ClassParams = {
	&AUrbsGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUrbsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUrbsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUrbsGameMode()
{
	if (!Z_Registration_Info_UClass_AUrbsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUrbsGameMode.OuterSingleton, Z_Construct_UClass_AUrbsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUrbsGameMode.OuterSingleton;
}
template<> URBS_API UClass* StaticClass<AUrbsGameMode>()
{
	return AUrbsGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUrbsGameMode);
AUrbsGameMode::~AUrbsGameMode() {}
// End Class AUrbsGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUrbsGameMode, AUrbsGameMode::StaticClass, TEXT("AUrbsGameMode"), &Z_Registration_Info_UClass_AUrbsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUrbsGameMode), 2012597067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsGameMode_h_4082774085(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_UrbsGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
