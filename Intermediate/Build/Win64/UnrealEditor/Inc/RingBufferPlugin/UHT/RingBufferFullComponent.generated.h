// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferFullComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferFullComponent_generated_h
#error "RingBufferFullComponent.generated.h already included, missing '#pragma once' in RingBufferFullComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferFullComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferFullComponent *************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferFullComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferFullComponent(); \
	friend struct Z_Construct_UClass_URingBufferFullComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferFullComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferFullComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferFullComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferFullComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferFullComponent(URingBufferFullComponent&&) = delete; \
	URingBufferFullComponent(const URingBufferFullComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferFullComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferFullComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferFullComponent) \
	NO_API virtual ~URingBufferFullComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h_15_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferFullComponent;

// ********** End Class URingBufferFullComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferFullComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
