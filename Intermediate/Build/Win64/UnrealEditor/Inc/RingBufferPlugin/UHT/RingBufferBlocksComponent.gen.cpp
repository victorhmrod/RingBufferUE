// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferBlocksComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferBlocksComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBlocksComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBlocksComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferBlocksComponent ***********************************************
void URingBufferBlocksComponent::StaticRegisterNativesURingBufferBlocksComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferBlocksComponent;
UClass* URingBufferBlocksComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferBlocksComponent;
	if (!Z_Registration_Info_UClass_URingBufferBlocksComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferBlocksComponent"),
			Z_Registration_Info_UClass_URingBufferBlocksComponent.InnerSingleton,
			StaticRegisterNativesURingBufferBlocksComponent,
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
	return Z_Registration_Info_UClass_URingBufferBlocksComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferBlocksComponent_NoRegister()
{
	return URingBufferBlocksComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferBlocksComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for BlocksRingBuffer<N, char, uint32>.\n * - Block-oriented lock-free ring buffer.\n * - Single Producer / Single Consumer.\n * - Exposed to Blueprints via URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferBlocksComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBlocksComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for BlocksRingBuffer<N, char, uint32>.\n- Block-oriented lock-free ring buffer.\n- Single Producer / Single Consumer.\n- Exposed to Blueprints via URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferBlocksComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferBlocksComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferBlocksComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferBlocksComponent_Statics::ClassParams = {
	&URingBufferBlocksComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferBlocksComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferBlocksComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferBlocksComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferBlocksComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferBlocksComponent.OuterSingleton, Z_Construct_UClass_URingBufferBlocksComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferBlocksComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferBlocksComponent);
URingBufferBlocksComponent::~URingBufferBlocksComponent() {}
// ********** End Class URingBufferBlocksComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferBlocksComponent, URingBufferBlocksComponent::StaticClass, TEXT("URingBufferBlocksComponent"), &Z_Registration_Info_UClass_URingBufferBlocksComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferBlocksComponent), 1643691020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h__Script_RingBufferPlugin_2758317142(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
