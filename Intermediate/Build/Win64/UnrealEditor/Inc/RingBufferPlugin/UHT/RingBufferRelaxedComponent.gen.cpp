// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferRelaxedComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferRelaxedComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferRelaxedComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferRelaxedComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferRelaxedComponent **********************************************
void URingBufferRelaxedComponent::StaticRegisterNativesURingBufferRelaxedComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferRelaxedComponent;
UClass* URingBufferRelaxedComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferRelaxedComponent;
	if (!Z_Registration_Info_UClass_URingBufferRelaxedComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferRelaxedComponent"),
			Z_Registration_Info_UClass_URingBufferRelaxedComponent.InnerSingleton,
			StaticRegisterNativesURingBufferRelaxedComponent,
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
	return Z_Registration_Info_UClass_URingBufferRelaxedComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferRelaxedComponent_NoRegister()
{
	return URingBufferRelaxedComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferRelaxedComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for RelaxedRingBuffer<N, char, uint32, FastRingMod<N,uint32>>.\n * - Single Producer / Single Consumer, lock-free.\n * - Uses fast modular arithmetic (FastRingMod).\n * - Exposed to Blueprints through URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferRelaxedComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferRelaxedComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for RelaxedRingBuffer<N, char, uint32, FastRingMod<N,uint32>>.\n- Single Producer / Single Consumer, lock-free.\n- Uses fast modular arithmetic (FastRingMod).\n- Exposed to Blueprints through URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferRelaxedComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferRelaxedComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferRelaxedComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferRelaxedComponent_Statics::ClassParams = {
	&URingBufferRelaxedComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferRelaxedComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferRelaxedComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferRelaxedComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferRelaxedComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferRelaxedComponent.OuterSingleton, Z_Construct_UClass_URingBufferRelaxedComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferRelaxedComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferRelaxedComponent);
URingBufferRelaxedComponent::~URingBufferRelaxedComponent() {}
// ********** End Class URingBufferRelaxedComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferRelaxedComponent, URingBufferRelaxedComponent::StaticClass, TEXT("URingBufferRelaxedComponent"), &Z_Registration_Info_UClass_URingBufferRelaxedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferRelaxedComponent), 3013355015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h__Script_RingBufferPlugin_3497075383(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
