// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRingBufferPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RingBufferPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RingBufferPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_RingBufferPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RingBufferPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x65DEAE21,
				0x37743563,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RingBufferPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RingBufferPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RingBufferPlugin(Z_Construct_UPackage__Script_RingBufferPlugin, TEXT("/Script/RingBufferPlugin"), Z_Registration_Info_UPackage__Script_RingBufferPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x65DEAE21, 0x37743563));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
