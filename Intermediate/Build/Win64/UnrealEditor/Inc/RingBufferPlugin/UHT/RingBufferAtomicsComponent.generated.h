// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferAtomicsComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferAtomicsComponent_generated_h
#error "RingBufferAtomicsComponent.generated.h already included, missing '#pragma once' in RingBufferAtomicsComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferAtomicsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferAtomicsComponent **********************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferAtomicsComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferAtomicsComponent(); \
	friend struct Z_Construct_UClass_URingBufferAtomicsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferAtomicsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferAtomicsComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferAtomicsComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferAtomicsComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferAtomicsComponent(URingBufferAtomicsComponent&&) = delete; \
	URingBufferAtomicsComponent(const URingBufferAtomicsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferAtomicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferAtomicsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferAtomicsComponent) \
	NO_API virtual ~URingBufferAtomicsComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h_14_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferAtomicsComponent;

// ********** End Class URingBufferAtomicsComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferAtomicsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
