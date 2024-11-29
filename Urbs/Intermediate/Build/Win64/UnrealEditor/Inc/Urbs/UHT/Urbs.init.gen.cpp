// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUrbs_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Urbs;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Urbs()
	{
		if (!Z_Registration_Info_UPackage__Script_Urbs.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Urbs",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9EC70240,
				0x80634659,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Urbs.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Urbs.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Urbs(Z_Construct_UPackage__Script_Urbs, TEXT("/Script/Urbs"), Z_Registration_Info_UPackage__Script_Urbs, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9EC70240, 0x80634659));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
