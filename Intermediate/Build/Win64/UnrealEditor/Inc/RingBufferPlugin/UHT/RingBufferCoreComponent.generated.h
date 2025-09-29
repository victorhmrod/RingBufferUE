// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferCoreComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferCoreComponent_generated_h
#error "RingBufferCoreComponent.generated.h already included, missing '#pragma once' in RingBufferCoreComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferCoreComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferCoreComponent *************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferCoreComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferCoreComponent(); \
	friend struct Z_Construct_UClass_URingBufferCoreComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferCoreComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferCoreComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferCoreComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferCoreComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferCoreComponent(URingBufferCoreComponent&&) = delete; \
	URingBufferCoreComponent(const URingBufferCoreComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferCoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferCoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferCoreComponent) \
	NO_API virtual ~URingBufferCoreComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h_15_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferCoreComponent;

// ********** End Class URingBufferCoreComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCoreComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
