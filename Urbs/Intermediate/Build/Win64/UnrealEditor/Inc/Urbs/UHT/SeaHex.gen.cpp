// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Urbs/SeaHex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeaHex() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Urbs();
URBS_API UClass* Z_Construct_UClass_AHex();
URBS_API UClass* Z_Construct_UClass_ASeaHex();
URBS_API UClass* Z_Construct_UClass_ASeaHex_NoRegister();
// End Cross Module References

// Begin Class ASeaHex
void ASeaHex::StaticRegisterNativesASeaHex()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASeaHex);
UClass* Z_Construct_UClass_ASeaHex_NoRegister()
{
	return ASeaHex::StaticClass();
}
struct Z_Construct_UClass_ASeaHex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SeaHex.h" },
		{ "ModuleRelativePath", "SeaHex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaHexMesh_MetaData[] = {
		{ "Category", "SeaHex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeaHex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeaHexMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeaHex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeaHex_Statics::NewProp_SeaHexMesh = { "SeaHexMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASeaHex, SeaHexMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaHexMesh_MetaData), NewProp_SeaHexMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASeaHex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeaHex_Statics::NewProp_SeaHexMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASeaHex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASeaHex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHex,
	(UObject* (*)())Z_Construct_UPackage__Script_Urbs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASeaHex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASeaHex_Statics::ClassParams = {
	&ASeaHex::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASeaHex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASeaHex_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASeaHex_Statics::Class_MetaDataParams), Z_Construct_UClass_ASeaHex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASeaHex()
{
	if (!Z_Registration_Info_UClass_ASeaHex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASeaHex.OuterSingleton, Z_Construct_UClass_ASeaHex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASeaHex.OuterSingleton;
}
template<> URBS_API UClass* StaticClass<ASeaHex>()
{
	return ASeaHex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASeaHex);
ASeaHex::~ASeaHex() {}
// End Class ASeaHex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_SeaHex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASeaHex, ASeaHex::StaticClass, TEXT("ASeaHex"), &Z_Registration_Info_UClass_ASeaHex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASeaHex), 420141226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_SeaHex_h_394445212(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_SeaHex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_SeaHex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
