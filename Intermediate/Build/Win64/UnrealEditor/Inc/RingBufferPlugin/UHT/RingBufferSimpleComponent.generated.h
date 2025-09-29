// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferSimpleComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferSimpleComponent_generated_h
#error "RingBufferSimpleComponent.generated.h already included, missing '#pragma once' in RingBufferSimpleComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferSimpleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferSimpleComponent ***********************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferSimpleComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferSimpleComponent(); \
	friend struct Z_Construct_UClass_URingBufferSimpleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferSimpleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferSimpleComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferSimpleComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferSimpleComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferSimpleComponent(URingBufferSimpleComponent&&) = delete; \
	URingBufferSimpleComponent(const URingBufferSimpleComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferSimpleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferSimpleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferSimpleComponent) \
	NO_API virtual ~URingBufferSimpleComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h_14_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferSimpleComponent;

// ********** End Class URingBufferSimpleComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferSimpleComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
