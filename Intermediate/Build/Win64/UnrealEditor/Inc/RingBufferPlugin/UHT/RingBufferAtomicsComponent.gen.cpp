// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferAtomicsComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferAtomicsComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferAtomicsComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferAtomicsComponent_NoRegister();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferAtomicsComponent **********************************************
void URingBufferAtomicsComponent::StaticRegisterNativesURingBufferAtomicsComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferAtomicsComponent;
UClass* URingBufferAtomicsComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferAtomicsComponent;
	if (!Z_Registration_Info_UClass_URingBufferAtomicsComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferAtomicsComponent"),
			Z_Registration_Info_UClass_URingBufferAtomicsComponent.InnerSingleton,
			StaticRegisterNativesURingBufferAtomicsComponent,
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
	return Z_Registration_Info_UClass_URingBufferAtomicsComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferAtomicsComponent_NoRegister()
{
	return URingBufferAtomicsComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferAtomicsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for third-party AtomicsRingBuffer<N, char, uint32>.\n * - Single Producer / Single Consumer.\n * - Lock-free, uses std::atomic.\n * - Works byte-wise, high-level Put/Get handled by URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferAtomicsComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferAtomicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for third-party AtomicsRingBuffer<N, char, uint32>.\n- Single Producer / Single Consumer.\n- Lock-free, uses std::atomic.\n- Works byte-wise, high-level Put/Get handled by URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferAtomicsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferAtomicsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferAtomicsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferAtomicsComponent_Statics::ClassParams = {
	&URingBufferAtomicsComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferAtomicsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferAtomicsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferAtomicsComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferAtomicsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferAtomicsComponent.OuterSingleton, Z_Construct_UClass_URingBufferAtomicsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferAtomicsComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferAtomicsComponent);
URingBufferAtomicsComponent::~URingBufferAtomicsComponent() {}
// ********** End Class URingBufferAtomicsComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferAtomicsComponent, URingBufferAtomicsComponent::StaticClass, TEXT("URingBufferAtomicsComponent"), &Z_Registration_Info_UClass_URingBufferAtomicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferAtomicsComponent), 3715223242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h__Script_RingBufferPlugin_135960227(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
