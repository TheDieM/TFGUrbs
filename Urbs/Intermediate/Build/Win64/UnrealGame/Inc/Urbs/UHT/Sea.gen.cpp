// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Urbs/Sea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSea() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_Urbs();
URBS_API UClass* Z_Construct_UClass_AHex();
URBS_API UClass* Z_Construct_UClass_ASea();
URBS_API UClass* Z_Construct_UClass_ASea_NoRegister();
// End Cross Module References

// Begin Class ASea
void ASea::StaticRegisterNativesASea()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASea);
UClass* Z_Construct_UClass_ASea_NoRegister()
{
	return ASea::StaticClass();
}
struct Z_Construct_UClass_ASea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Sea.h" },
		{ "ModuleRelativePath", "Sea.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHex,
	(UObject* (*)())Z_Construct_UPackage__Script_Urbs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASea_Statics::ClassParams = {
	&ASea::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASea_Statics::Class_MetaDataParams), Z_Construct_UClass_ASea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASea()
{
	if (!Z_Registration_Info_UClass_ASea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASea.OuterSingleton, Z_Construct_UClass_ASea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASea.OuterSingleton;
}
template<> URBS_API UClass* StaticClass<ASea>()
{
	return ASea::StaticClass();
}
ASea::ASea() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASea);
ASea::~ASea() {}
// End Class ASea

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Sea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASea, ASea::StaticClass, TEXT("ASea"), &Z_Registration_Info_UClass_ASea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASea), 4243346388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Sea_h_2227948947(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Sea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Sea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
