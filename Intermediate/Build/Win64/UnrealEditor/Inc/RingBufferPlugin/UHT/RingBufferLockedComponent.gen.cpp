// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferLockedComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferLockedComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferLockedComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferLockedComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferLockedComponent ***********************************************
void URingBufferLockedComponent::StaticRegisterNativesURingBufferLockedComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferLockedComponent;
UClass* URingBufferLockedComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferLockedComponent;
	if (!Z_Registration_Info_UClass_URingBufferLockedComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferLockedComponent"),
			Z_Registration_Info_UClass_URingBufferLockedComponent.InnerSingleton,
			StaticRegisterNativesURingBufferLockedComponent,
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
	return Z_Registration_Info_UClass_URingBufferLockedComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferLockedComponent_NoRegister()
{
	return URingBufferLockedComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferLockedComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for LockedRingBuffer<N, char, uint32>.\n * - Thread-safe using std::mutex.\n * - Copy-assignable, so clearing is done by reinitialization.\n * - Exposed to Blueprints via URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferLockedComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferLockedComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for LockedRingBuffer<N, char, uint32>.\n- Thread-safe using std::mutex.\n- Copy-assignable, so clearing is done by reinitialization.\n- Exposed to Blueprints via URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferLockedComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferLockedComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferLockedComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferLockedComponent_Statics::ClassParams = {
	&URingBufferLockedComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferLockedComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferLockedComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferLockedComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferLockedComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferLockedComponent.OuterSingleton, Z_Construct_UClass_URingBufferLockedComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferLockedComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferLockedComponent);
URingBufferLockedComponent::~URingBufferLockedComponent() {}
// ********** End Class URingBufferLockedComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferLockedComponent, URingBufferLockedComponent::StaticClass, TEXT("URingBufferLockedComponent"), &Z_Registration_Info_UClass_URingBufferLockedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferLockedComponent), 2145505366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h__Script_RingBufferPlugin_353716500(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
