// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferCacheComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferCacheComponent_generated_h
#error "RingBufferCacheComponent.generated.h already included, missing '#pragma once' in RingBufferCacheComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferCacheComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferCacheComponent ************************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferCacheComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferCacheComponent(); \
	friend struct Z_Construct_UClass_URingBufferCacheComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferCacheComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferCacheComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferCacheComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferCacheComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferCacheComponent(URingBufferCacheComponent&&) = delete; \
	URingBufferCacheComponent(const URingBufferCacheComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferCacheComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferCacheComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferCacheComponent) \
	NO_API virtual ~URingBufferCacheComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h_15_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferCacheComponent;

// ********** End Class URingBufferCacheComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferCacheComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
