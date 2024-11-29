// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Urbs/MountainHex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMountainHex() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Urbs();
URBS_API UClass* Z_Construct_UClass_AMountainHex();
URBS_API UClass* Z_Construct_UClass_AMountainHex_NoRegister();
// End Cross Module References

// Begin Class AMountainHex
void AMountainHex::StaticRegisterNativesAMountainHex()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMountainHex);
UClass* Z_Construct_UClass_AMountainHex_NoRegister()
{
	return AMountainHex::StaticClass();
}
struct Z_Construct_UClass_AMountainHex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MountainHex.h" },
		{ "ModuleRelativePath", "MountainHex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainHexMesh_MetaData[] = {
		{ "Category", "MountainHex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MountainHex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MountainHexMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMountainHex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMountainHex_Statics::NewProp_MountainHexMesh = { "MountainHexMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMountainHex, MountainHexMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainHexMesh_MetaData), NewProp_MountainHexMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMountainHex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMountainHex_Statics::NewProp_MountainHexMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMountainHex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMountainHex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Urbs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMountainHex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMountainHex_Statics::ClassParams = {
	&AMountainHex::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMountainHex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMountainHex_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMountainHex_Statics::Class_MetaDataParams), Z_Construct_UClass_AMountainHex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMountainHex()
{
	if (!Z_Registration_Info_UClass_AMountainHex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMountainHex.OuterSingleton, Z_Construct_UClass_AMountainHex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMountainHex.OuterSingleton;
}
template<> URBS_API UClass* StaticClass<AMountainHex>()
{
	return AMountainHex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMountainHex);
AMountainHex::~AMountainHex() {}
// End Class AMountainHex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_MountainHex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMountainHex, AMountainHex::StaticClass, TEXT("AMountainHex"), &Z_Registration_Info_UClass_AMountainHex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMountainHex), 2490577300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_MountainHex_h_2448433317(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_MountainHex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_MountainHex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
