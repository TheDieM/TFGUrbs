// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Urbs/VillageHex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVillageHex() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Urbs();
URBS_API UClass* Z_Construct_UClass_AHex();
URBS_API UClass* Z_Construct_UClass_AVillageHex();
URBS_API UClass* Z_Construct_UClass_AVillageHex_NoRegister();
// End Cross Module References

// Begin Class AVillageHex
void AVillageHex::StaticRegisterNativesAVillageHex()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVillageHex);
UClass* Z_Construct_UClass_AVillageHex_NoRegister()
{
	return AVillageHex::StaticClass();
}
struct Z_Construct_UClass_AVillageHex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VillageHex.h" },
		{ "ModuleRelativePath", "VillageHex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VillageHexMesh_MetaData[] = {
		{ "Category", "VillageHex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VillageHex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VillageHexMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVillageHex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVillageHex_Statics::NewProp_VillageHexMesh = { "VillageHexMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVillageHex, VillageHexMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VillageHexMesh_MetaData), NewProp_VillageHexMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVillageHex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVillageHex_Statics::NewProp_VillageHexMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVillageHex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVillageHex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHex,
	(UObject* (*)())Z_Construct_UPackage__Script_Urbs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVillageHex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVillageHex_Statics::ClassParams = {
	&AVillageHex::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVillageHex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVillageHex_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVillageHex_Statics::Class_MetaDataParams), Z_Construct_UClass_AVillageHex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVillageHex()
{
	if (!Z_Registration_Info_UClass_AVillageHex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVillageHex.OuterSingleton, Z_Construct_UClass_AVillageHex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVillageHex.OuterSingleton;
}
template<> URBS_API UClass* StaticClass<AVillageHex>()
{
	return AVillageHex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVillageHex);
AVillageHex::~AVillageHex() {}
// End Class AVillageHex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_VillageHex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVillageHex, AVillageHex::StaticClass, TEXT("AVillageHex"), &Z_Registration_Info_UClass_AVillageHex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVillageHex), 2179201367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_VillageHex_h_2800120537(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_VillageHex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_VillageHex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
