// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferGenericComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferGenericComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferGenericComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferGenericComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferGenericComponent **********************************************
void URingBufferGenericComponent::StaticRegisterNativesURingBufferGenericComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferGenericComponent;
UClass* URingBufferGenericComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferGenericComponent;
	if (!Z_Registration_Info_UClass_URingBufferGenericComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferGenericComponent"),
			Z_Registration_Info_UClass_URingBufferGenericComponent.InnerSingleton,
			StaticRegisterNativesURingBufferGenericComponent,
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
	return Z_Registration_Info_UClass_URingBufferGenericComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferGenericComponent_NoRegister()
{
	return URingBufferGenericComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferGenericComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for GenericRingBuffer<N, char, uint32>.\n * - General-purpose ring buffer with template-based size and type.\n * - Copy-assignable, so clearing is done by reinitialization.\n * - Exposed to Blueprints via URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferGenericComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferGenericComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for GenericRingBuffer<N, char, uint32>.\n- General-purpose ring buffer with template-based size and type.\n- Copy-assignable, so clearing is done by reinitialization.\n- Exposed to Blueprints via URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferGenericComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferGenericComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferGenericComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferGenericComponent_Statics::ClassParams = {
	&URingBufferGenericComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferGenericComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferGenericComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferGenericComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferGenericComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferGenericComponent.OuterSingleton, Z_Construct_UClass_URingBufferGenericComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferGenericComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferGenericComponent);
URingBufferGenericComponent::~URingBufferGenericComponent() {}
// ********** End Class URingBufferGenericComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferGenericComponent, URingBufferGenericComponent::StaticClass, TEXT("URingBufferGenericComponent"), &Z_Registration_Info_UClass_URingBufferGenericComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferGenericComponent), 243645404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h__Script_RingBufferPlugin_2663708867(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
