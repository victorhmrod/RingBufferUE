// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferCoreComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferCoreComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferCoreComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferCoreComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferCoreComponent *************************************************
void URingBufferCoreComponent::StaticRegisterNativesURingBufferCoreComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferCoreComponent;
UClass* URingBufferCoreComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferCoreComponent;
	if (!Z_Registration_Info_UClass_URingBufferCoreComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferCoreComponent"),
			Z_Registration_Info_UClass_URingBufferCoreComponent.InnerSingleton,
			StaticRegisterNativesURingBufferCoreComponent,
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
	return Z_Registration_Info_UClass_URingBufferCoreComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferCoreComponent_NoRegister()
{
	return URingBufferCoreComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferCoreComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for Lomont::RingBuffer<N, char, uint32>.\n * - SPSC, lock-free (uses atomics).\n * - Not copy-assignable.\n * - Exposed to Blueprints via URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferCoreComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferCoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for Lomont::RingBuffer<N, char, uint32>.\n- SPSC, lock-free (uses atomics).\n- Not copy-assignable.\n- Exposed to Blueprints via URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferCoreComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferCoreComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferCoreComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferCoreComponent_Statics::ClassParams = {
	&URingBufferCoreComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferCoreComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferCoreComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferCoreComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferCoreComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferCoreComponent.OuterSingleton, Z_Construct_UClass_URingBufferCoreComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferCoreComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferCoreComponent);
URingBufferCoreComponent::~URingBufferCoreComponent() {}
// ********** End Class URingBufferCoreComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferCoreComponent, URingBufferCoreComponent::StaticClass, TEXT("URingBufferCoreComponent"), &Z_Registration_Info_UClass_URingBufferCoreComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferCoreComponent), 804138147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h__Script_RingBufferPlugin_2381134722(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
