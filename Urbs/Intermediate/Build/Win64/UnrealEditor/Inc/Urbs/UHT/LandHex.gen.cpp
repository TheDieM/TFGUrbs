// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Urbs/LandHex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandHex() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Urbs();
URBS_API UClass* Z_Construct_UClass_AHex();
URBS_API UClass* Z_Construct_UClass_ALandHex();
URBS_API UClass* Z_Construct_UClass_ALandHex_NoRegister();
// End Cross Module References

// Begin Class ALandHex Function OnSelected
struct Z_Construct_UFunction_ALandHex_OnSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LandHex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandHex_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandHex, nullptr, "OnSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandHex_OnSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandHex_OnSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALandHex_OnSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandHex_OnSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandHex::execOnSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelected();
	P_NATIVE_END;
}
// End Class ALandHex Function OnSelected

// Begin Class ALandHex
void ALandHex::StaticRegisterNativesALandHex()
{
	UClass* Class = ALandHex::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSelected", &ALandHex::execOnSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandHex);
UClass* Z_Construct_UClass_ALandHex_NoRegister()
{
	return ALandHex::StaticClass();
}
struct Z_Construct_UClass_ALandHex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LandHex.h" },
		{ "ModuleRelativePath", "LandHex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandHexMesh_MetaData[] = {
		{ "Category", "LandHex" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LandHex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandHexMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALandHex_OnSelected, "OnSelected" }, // 2771457574
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandHex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandHex_Statics::NewProp_LandHexMesh = { "LandHexMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandHex, LandHexMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandHexMesh_MetaData), NewProp_LandHexMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandHex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandHex_Statics::NewProp_LandHexMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandHex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALandHex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHex,
	(UObject* (*)())Z_Construct_UPackage__Script_Urbs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandHex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandHex_Statics::ClassParams = {
	&ALandHex::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALandHex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALandHex_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandHex_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandHex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandHex()
{
	if (!Z_Registration_Info_UClass_ALandHex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandHex.OuterSingleton, Z_Construct_UClass_ALandHex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandHex.OuterSingleton;
}
template<> URBS_API UClass* StaticClass<ALandHex>()
{
	return ALandHex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandHex);
ALandHex::~ALandHex() {}
// End Class ALandHex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_LandHex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandHex, ALandHex::StaticClass, TEXT("ALandHex"), &Z_Registration_Info_UClass_ALandHex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandHex), 2594475519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_LandHex_h_1895495538(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_LandHex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_LandHex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
