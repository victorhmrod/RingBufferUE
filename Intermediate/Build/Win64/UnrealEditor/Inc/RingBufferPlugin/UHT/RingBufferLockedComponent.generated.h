// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferLockedComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferLockedComponent_generated_h
#error "RingBufferLockedComponent.generated.h already included, missing '#pragma once' in RingBufferLockedComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferLockedComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferLockedComponent ***********************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferLockedComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferLockedComponent(); \
	friend struct Z_Construct_UClass_URingBufferLockedComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferLockedComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferLockedComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferLockedComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferLockedComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferLockedComponent(URingBufferLockedComponent&&) = delete; \
	URingBufferLockedComponent(const URingBufferLockedComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferLockedComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferLockedComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferLockedComponent) \
	NO_API virtual ~URingBufferLockedComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h_15_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferLockedComponent;

// ********** End Class URingBufferLockedComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferLockedComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
