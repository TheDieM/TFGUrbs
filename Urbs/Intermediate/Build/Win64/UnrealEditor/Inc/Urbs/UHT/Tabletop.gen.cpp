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

// Begin Class ATabletop Function DeleteMap
struct Z_Construct_UFunction_ATabletop_DeleteMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_DeleteMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "DeleteMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_DeleteMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_DeleteMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATabletop_DeleteMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_DeleteMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execDeleteMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteMap();
	P_NATIVE_END;
}
// End Class ATabletop Function DeleteMap

// Begin Class ATabletop Function GenerateMap
struct Z_Construct_UFunction_ATabletop_GenerateMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_GenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "GenerateMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GenerateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_GenerateMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATabletop_GenerateMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_GenerateMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execGenerateMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateMap();
	P_NATIVE_END;
}
// End Class ATabletop Function GenerateMap

// Begin Class ATabletop Function TestBP
struct Z_Construct_UFunction_ATabletop_TestBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_TestBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "TestBP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_TestBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_TestBP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATabletop_TestBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_TestBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execTestBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestBP();
	P_NATIVE_END;
}
// End Class ATabletop Function TestBP

// Begin Class ATabletop
void ATabletop::StaticRegisterNativesATabletop()
{
	UClass* Class = ATabletop::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteMap", &ATabletop::execDeleteMap },
		{ "GenerateMap", &ATabletop::execGenerateMap },
		{ "TestBP", &ATabletop::execTestBP },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XCellCount_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YCellCount_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isRandomizeLayout_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerlinOffset_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_XCellCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YCellCount;
	static void NewProp_isRandomizeLayout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isRandomizeLayout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATabletop_DeleteMap, "DeleteMap" }, // 3136786433
		{ &Z_Construct_UFunction_ATabletop_GenerateMap, "GenerateMap" }, // 2782059215
		{ &Z_Construct_UFunction_ATabletop_TestBP, "TestBP" }, // 2202315884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATabletop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_XCellCount = { "XCellCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, XCellCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XCellCount_MetaData), NewProp_XCellCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_YCellCount = { "YCellCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, YCellCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YCellCount_MetaData), NewProp_YCellCount_MetaData) };
void Z_Construct_UClass_ATabletop_Statics::NewProp_isRandomizeLayout_SetBit(void* Obj)
{
	((ATabletop*)Obj)->isRandomizeLayout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_isRandomizeLayout = { "isRandomizeLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATabletop), &Z_Construct_UClass_ATabletop_Statics::NewProp_isRandomizeLayout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isRandomizeLayout_MetaData), NewProp_isRandomizeLayout_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_PerlinOffset = { "PerlinOffset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, PerlinOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerlinOffset_MetaData), NewProp_PerlinOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATabletop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_XCellCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_YCellCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_isRandomizeLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_PerlinOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATabletop_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ATabletop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATabletop_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATabletop, ATabletop::StaticClass, TEXT("ATabletop"), &Z_Registration_Info_UClass_ATabletop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATabletop), 2342040616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_3822338747(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_adria_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
