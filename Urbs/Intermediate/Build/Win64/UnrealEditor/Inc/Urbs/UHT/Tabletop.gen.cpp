// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Urbs/Tabletop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTabletop() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Urbs();
URBS_API UClass* Z_Construct_UClass_ATabletop();
URBS_API UClass* Z_Construct_UClass_ATabletop_NoRegister();
// End Cross Module References

// Begin Class ATabletop Function GetTerraininHeight
struct Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics
{
	struct Tabletop_eventGetTerraininHeight_Parms
	{
		FVector2D Location;
		float Scale;
		float Amplitude;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGetTerraininHeight_Parms, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGetTerraininHeight_Parms, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGetTerraininHeight_Parms, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGetTerraininHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "GetTerraininHeight", nullptr, nullptr, Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::Tabletop_eventGetTerraininHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::Tabletop_eventGetTerraininHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATabletop_GetTerraininHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_GetTerraininHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execGetTerraininHeight)
{
	P_GET_STRUCT(FVector2D,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amplitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTerraininHeight(Z_Param_Location,Z_Param_Scale,Z_Param_Amplitude);
	P_NATIVE_END;
}
// End Class ATabletop Function GetTerraininHeight

// Begin Class ATabletop
void ATabletop::StaticRegisterNativesATabletop()
{
	UClass* Class = ATabletop::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTerraininHeight", &ATabletop::execGetTerraininHeight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATabletop);
UClass* Z_Construct_UClass_ATabletop_NoRegister()
{
	return ATabletop::StaticClass();
}
struct Z_Construct_UClass_ATabletop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tabletop.h" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATabletop_GetTerraininHeight, "GetTerraininHeight" }, // 492090456
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATabletop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATabletop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Urbs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATabletop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATabletop_Statics::ClassParams = {
	&ATabletop::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATabletop_Statics::Class_MetaDataParams), Z_Construct_UClass_ATabletop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATabletop()
{
	if (!Z_Registration_Info_UClass_ATabletop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATabletop.OuterSingleton, Z_Construct_UClass_ATabletop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATabletop.OuterSingleton;
}
template<> URBS_API UClass* StaticClass<ATabletop>()
{
	return ATabletop::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATabletop);
ATabletop::~ATabletop() {}
// End Class ATabletop

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATabletop, ATabletop::StaticClass, TEXT("ATabletop"), &Z_Registration_Info_UClass_ATabletop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATabletop), 2808377978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_1379333363(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
