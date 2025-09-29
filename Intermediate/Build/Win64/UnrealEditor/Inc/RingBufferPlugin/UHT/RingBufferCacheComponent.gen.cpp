// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferCacheComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferCacheComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferCacheComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferCacheComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferCacheComponent ************************************************
void URingBufferCacheComponent::StaticRegisterNativesURingBufferCacheComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferCacheComponent;
UClass* URingBufferCacheComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferCacheComponent;
	if (!Z_Registration_Info_UClass_URingBufferCacheComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferCacheComponent"),
			Z_Registration_Info_UClass_URingBufferCacheComponent.InnerSingleton,
			StaticRegisterNativesURingBufferCacheComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URingBufferCacheComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferCacheComponent_NoRegister()
{
	return URingBufferCacheComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferCacheComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for CacheRingBuffer<N, char, uint32>.\n * - Optimized cache-friendly ring buffer.\n * - Single Producer / Single Consumer, lock-free.\n * - Exposed to Blueprints via URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferCacheComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferCacheComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for CacheRingBuffer<N, char, uint32>.\n- Optimized cache-friendly ring buffer.\n- Single Producer / Single Consumer, lock-free.\n- Exposed to Blueprints via URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferCacheComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferCacheComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferCacheComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferCacheComponent_Statics::ClassParams = {
	&URingBufferCacheComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferCacheComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferCacheComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferCacheComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferCacheComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferCacheComponent.OuterSingleton, Z_Construct_UClass_URingBufferCacheComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferCacheComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferCacheComponent);
URingBufferCacheComponent::~URingBufferCacheComponent() {}
// ********** End Class URingBufferCacheComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferCacheComponent, URingBufferCacheComponent::StaticClass, TEXT("URingBufferCacheComponent"), &Z_Registration_Info_UClass_URingBufferCacheComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferCacheComponent), 3122003072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h__Script_RingBufferPlugin_3407622255(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
