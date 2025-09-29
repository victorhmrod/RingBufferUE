// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferFullComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferFullComponent() {}

// ********** Begin Cross Module References ********************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferFullComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferFullComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferFullComponent *************************************************
void URingBufferFullComponent::StaticRegisterNativesURingBufferFullComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferFullComponent;
UClass* URingBufferFullComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferFullComponent;
	if (!Z_Registration_Info_UClass_URingBufferFullComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferFullComponent"),
			Z_Registration_Info_UClass_URingBufferFullComponent.InnerSingleton,
			StaticRegisterNativesURingBufferFullComponent,
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
	return Z_Registration_Info_UClass_URingBufferFullComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferFullComponent_NoRegister()
{
	return URingBufferFullComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferFullComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper for FullRingBuffer<N, char, uint32>.\n * - Lock-free ring buffer with full capacity usage.\n * - Uses atomic indices for thread safety.\n * - Exposed to Blueprints via URingBufferBaseComponent.\n */" },
#endif
		{ "IncludePath", "Components/RingBufferFullComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferFullComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper for FullRingBuffer<N, char, uint32>.\n- Lock-free ring buffer with full capacity usage.\n- Uses atomic indices for thread safety.\n- Exposed to Blueprints via URingBufferBaseComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferFullComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URingBufferFullComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URingBufferBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferFullComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferFullComponent_Statics::ClassParams = {
	&URingBufferFullComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferFullComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferFullComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferFullComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferFullComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferFullComponent.OuterSingleton, Z_Construct_UClass_URingBufferFullComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferFullComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferFullComponent);
URingBufferFullComponent::~URingBufferFullComponent() {}
// ********** End Class URingBufferFullComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferFullComponent, URingBufferFullComponent::StaticClass, TEXT("URingBufferFullComponent"), &Z_Registration_Info_UClass_URingBufferFullComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferFullComponent), 770246585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h__Script_RingBufferPlugin_1296409254(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
