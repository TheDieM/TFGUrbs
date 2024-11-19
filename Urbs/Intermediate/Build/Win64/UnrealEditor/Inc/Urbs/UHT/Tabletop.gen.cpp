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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Urbs();
URBS_API UClass* Z_Construct_UClass_ATabletop();
URBS_API UClass* Z_Construct_UClass_ATabletop_NoRegister();
// End Cross Module References

// Begin Class ATabletop Function GenerateVector
struct Z_Construct_UFunction_ATabletop_GenerateVector_Statics
{
	struct Tabletop_eventGenerateVector_Parms
	{
		int32 x;
		int32 y;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_x;
	static const UECodeGen_Private::FIntPropertyParams NewProp_y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATabletop_GenerateVector_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGenerateVector_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATabletop_GenerateVector_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGenerateVector_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATabletop_GenerateVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGenerateVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATabletop_GenerateVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GenerateVector_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GenerateVector_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GenerateVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GenerateVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_GenerateVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "GenerateVector", nullptr, nullptr, Z_Construct_UFunction_ATabletop_GenerateVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GenerateVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATabletop_GenerateVector_Statics::Tabletop_eventGenerateVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GenerateVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_GenerateVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATabletop_GenerateVector_Statics::Tabletop_eventGenerateVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATabletop_GenerateVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_GenerateVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execGenerateVector)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_x);
	P_GET_PROPERTY(FIntProperty,Z_Param_y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GenerateVector(Z_Param_x,Z_Param_y);
	P_NATIVE_END;
}
// End Class ATabletop Function GenerateVector

// Begin Class ATabletop Function GetHeight
struct Z_Construct_UFunction_ATabletop_GetHeight_Statics
{
	struct Tabletop_eventGetHeight_Parms
	{
		FVector Vector;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATabletop_GetHeight_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGetHeight_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATabletop_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATabletop_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GetHeight_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "GetHeight", nullptr, nullptr, Z_Construct_UFunction_ATabletop_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATabletop_GetHeight_Statics::Tabletop_eventGetHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_GetHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATabletop_GetHeight_Statics::Tabletop_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATabletop_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execGetHeight)
{
	P_GET_STRUCT(FVector,Z_Param_Vector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHeight(Z_Param_Vector);
	P_NATIVE_END;
}
// End Class ATabletop Function GetHeight

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

// Begin Class ATabletop Function GetXCellCount
struct Z_Construct_UFunction_ATabletop_GetXCellCount_Statics
{
	struct Tabletop_eventGetXCellCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGetXCellCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "GetXCellCount", nullptr, nullptr, Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::Tabletop_eventGetXCellCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::Tabletop_eventGetXCellCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATabletop_GetXCellCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_GetXCellCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execGetXCellCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetXCellCount();
	P_NATIVE_END;
}
// End Class ATabletop Function GetXCellCount

// Begin Class ATabletop Function GetYCellCount
struct Z_Construct_UFunction_ATabletop_GetYCellCount_Statics
{
	struct Tabletop_eventGetYCellCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tabletop_eventGetYCellCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "GetYCellCount", nullptr, nullptr, Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::Tabletop_eventGetYCellCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::Tabletop_eventGetYCellCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATabletop_GetYCellCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_GetYCellCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execGetYCellCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetYCellCount();
	P_NATIVE_END;
}
// End Class ATabletop Function GetYCellCount

// Begin Class ATabletop Function isRandomizeLayout
struct Z_Construct_UFunction_ATabletop_isRandomizeLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATabletop_isRandomizeLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATabletop, nullptr, "isRandomizeLayout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATabletop_isRandomizeLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATabletop_isRandomizeLayout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATabletop_isRandomizeLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATabletop_isRandomizeLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATabletop::execisRandomizeLayout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->isRandomizeLayout();
	P_NATIVE_END;
}
// End Class ATabletop Function isRandomizeLayout

// Begin Class ATabletop
void ATabletop::StaticRegisterNativesATabletop()
{
	UClass* Class = ATabletop::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateVector", &ATabletop::execGenerateVector },
		{ "GetHeight", &ATabletop::execGetHeight },
		{ "GetTerraininHeight", &ATabletop::execGetTerraininHeight },
		{ "GetXCellCount", &ATabletop::execGetXCellCount },
		{ "GetYCellCount", &ATabletop::execGetYCellCount },
		{ "isRandomizeLayout", &ATabletop::execisRandomizeLayout },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gap_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainScale_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainAmplitude_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoulderScale_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoulderAmplitude_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainLevel_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomizeLayout_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerlinOffset_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomValue_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_seno_MetaData[] = {
		{ "Category", "Tabletop" },
		{ "ModuleRelativePath", "Tabletop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_XCellCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YCellCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MountainScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MountainAmplitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoulderScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoulderAmplitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MountainLevel;
	static void NewProp_RandomizeLayout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomizeLayout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_seno;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATabletop_GenerateVector, "GenerateVector" }, // 4203378869
		{ &Z_Construct_UFunction_ATabletop_GetHeight, "GetHeight" }, // 2193377475
		{ &Z_Construct_UFunction_ATabletop_GetTerraininHeight, "GetTerraininHeight" }, // 492090456
		{ &Z_Construct_UFunction_ATabletop_GetXCellCount, "GetXCellCount" }, // 2180871694
		{ &Z_Construct_UFunction_ATabletop_GetYCellCount, "GetYCellCount" }, // 2235712232
		{ &Z_Construct_UFunction_ATabletop_isRandomizeLayout, "isRandomizeLayout" }, // 2842016231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATabletop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_XCellCount = { "XCellCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, XCellCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XCellCount_MetaData), NewProp_XCellCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_YCellCount = { "YCellCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, YCellCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YCellCount_MetaData), NewProp_YCellCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_Gap = { "Gap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, Gap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gap_MetaData), NewProp_Gap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_MountainScale = { "MountainScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, MountainScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainScale_MetaData), NewProp_MountainScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_MountainAmplitude = { "MountainAmplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, MountainAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainAmplitude_MetaData), NewProp_MountainAmplitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_BoulderScale = { "BoulderScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, BoulderScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoulderScale_MetaData), NewProp_BoulderScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_BoulderAmplitude = { "BoulderAmplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, BoulderAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoulderAmplitude_MetaData), NewProp_BoulderAmplitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_MountainLevel = { "MountainLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, MountainLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainLevel_MetaData), NewProp_MountainLevel_MetaData) };
void Z_Construct_UClass_ATabletop_Statics::NewProp_RandomizeLayout_SetBit(void* Obj)
{
	((ATabletop*)Obj)->RandomizeLayout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_RandomizeLayout = { "RandomizeLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATabletop), &Z_Construct_UClass_ATabletop_Statics::NewProp_RandomizeLayout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomizeLayout_MetaData), NewProp_RandomizeLayout_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_PerlinOffset = { "PerlinOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, PerlinOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerlinOffset_MetaData), NewProp_PerlinOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_RandomValue = { "RandomValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, RandomValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomValue_MetaData), NewProp_RandomValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATabletop_Statics::NewProp_seno = { "seno", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATabletop, seno), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_seno_MetaData), NewProp_seno_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATabletop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_XCellCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_YCellCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_Gap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_MountainScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_MountainAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_BoulderScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_BoulderAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_MountainLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_RandomizeLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_PerlinOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_RandomValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATabletop_Statics::NewProp_seno,
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
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATabletop, ATabletop::StaticClass, TEXT("ATabletop"), &Z_Registration_Info_UClass_ATabletop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATabletop), 1987836239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_1656977966(TEXT("/Script/Urbs"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_TFGUrbs_Urbs_Source_Urbs_Tabletop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
