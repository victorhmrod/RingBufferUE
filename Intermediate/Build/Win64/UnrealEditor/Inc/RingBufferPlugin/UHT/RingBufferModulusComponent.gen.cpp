// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferModulusComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferModulusComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferModulusComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferModulusComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferModulusComponent **********************************************
void URingBufferModulusComponent::StaticRegisterNativesURingBufferModulusComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferModulusComponent;
UClass* URingBufferModulusComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferModulusComponent;
	if (!Z_Registration_Info_UClass_URingBufferModulusComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferModulusComponent"),
			Z_Registration_Info_UClass_URingBufferModulusComponent.InnerSingleton,
			StaticRegisterNativesURingBufferModulusComponent,
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
	return Z_Registration_Info_UClass_URingBufferModulusComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferModulusComponent_NoRegister()
{
	return URingBufferModulusComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferModulusComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for ModulusRingBuffer<N, char, uint32>.\n * - Lock-free, modular arithmetic for index management.\n * - Single Producer / Single Consumer.\n * - Exposed to Blueprints via URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferModulusComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferModulusComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for ModulusRingBuffer<N, char, uint32>.\n- Lock-free, modular arithmetic for index management.\n- Single Producer / Single Consumer.\n- Exposed to Blueprints via URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferModulusComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferModulusComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferModulusComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferModulusComponent_Statics::ClassParams = {
	&URingBufferModulusComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferModulusComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferModulusComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferModulusComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferModulusComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferModulusComponent.OuterSingleton, Z_Construct_UClass_URingBufferModulusComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferModulusComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferModulusComponent);
URingBufferModulusComponent::~URingBufferModulusComponent() {}
// ********** End Class URingBufferModulusComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferModulusComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferModulusComponent, URingBufferModulusComponent::StaticClass, TEXT("URingBufferModulusComponent"), &Z_Registration_Info_UClass_URingBufferModulusComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferModulusComponent), 1740822053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferModulusComponent_h__Script_RingBufferPlugin_3247280329(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferModulusComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferModulusComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
