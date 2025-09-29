// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferBlocksComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferBlocksComponent_generated_h
#error "RingBufferBlocksComponent.generated.h already included, missing '#pragma once' in RingBufferBlocksComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferBlocksComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferBlocksComponent ***********************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBlocksComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferBlocksComponent(); \
	friend struct Z_Construct_UClass_URingBufferBlocksComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBlocksComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferBlocksComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferBlocksComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferBlocksComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferBlocksComponent(URingBufferBlocksComponent&&) = delete; \
	URingBufferBlocksComponent(const URingBufferBlocksComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferBlocksComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferBlocksComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferBlocksComponent) \
	NO_API virtual ~URingBufferBlocksComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h_15_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferBlocksComponent;

// ********** End Class URingBufferBlocksComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBlocksComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
