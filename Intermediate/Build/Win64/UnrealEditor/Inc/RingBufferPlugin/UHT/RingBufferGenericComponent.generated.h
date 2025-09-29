// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferGenericComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferGenericComponent_generated_h
#error "RingBufferGenericComponent.generated.h already included, missing '#pragma once' in RingBufferGenericComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferGenericComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferGenericComponent **********************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferGenericComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferGenericComponent(); \
	friend struct Z_Construct_UClass_URingBufferGenericComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferGenericComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferGenericComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferGenericComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferGenericComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferGenericComponent(URingBufferGenericComponent&&) = delete; \
	URingBufferGenericComponent(const URingBufferGenericComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferGenericComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferGenericComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferGenericComponent) \
	NO_API virtual ~URingBufferGenericComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h_15_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferGenericComponent;

// ********** End Class URingBufferGenericComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferGenericComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
