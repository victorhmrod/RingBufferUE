// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferSimpleComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferSimpleComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferSimpleComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferSimpleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferSimpleComponent ***********************************************
void URingBufferSimpleComponent::StaticRegisterNativesURingBufferSimpleComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferSimpleComponent;
UClass* URingBufferSimpleComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferSimpleComponent;
	if (!Z_Registration_Info_UClass_URingBufferSimpleComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferSimpleComponent"),
			Z_Registration_Info_UClass_URingBufferSimpleComponent.InnerSingleton,
			StaticRegisterNativesURingBufferSimpleComponent,
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
	return Z_Registration_Info_UClass_URingBufferSimpleComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferSimpleComponent_NoRegister()
{
	return URingBufferSimpleComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferSimpleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for third-party SimpleRingBuffer<N>.\n * Works byte-wise, higher-level Put/Get handled by URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferSimpleComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferSimpleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for third-party SimpleRingBuffer<N>.\nWorks byte-wise, higher-level Put/Get handled by URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferSimpleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferSimpleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferSimpleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferSimpleComponent_Statics::ClassParams = {
	&URingBufferSimpleComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferSimpleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferSimpleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferSimpleComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferSimpleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferSimpleComponent.OuterSingleton, Z_Construct_UClass_URingBufferSimpleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferSimpleComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferSimpleComponent);
URingBufferSimpleComponent::~URingBufferSimpleComponent() {}
// ********** End Class URingBufferSimpleComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferSimpleComponent, URingBufferSimpleComponent::StaticClass, TEXT("URingBufferSimpleComponent"), &Z_Registration_Info_UClass_URingBufferSimpleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferSimpleComponent), 3220069085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h__Script_RingBufferPlugin_4181402840(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
