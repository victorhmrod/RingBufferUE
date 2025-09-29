// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferRelaxedComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferRelaxedComponent_generated_h
#error "RingBufferRelaxedComponent.generated.h already included, missing '#pragma once' in RingBufferRelaxedComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferRelaxedComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferRelaxedComponent **********************************************
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferRelaxedComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferRelaxedComponent(); \
	friend struct Z_Construct_UClass_URingBufferRelaxedComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferRelaxedComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferRelaxedComponent, URingBufferBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferRelaxedComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferRelaxedComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferRelaxedComponent(URingBufferRelaxedComponent&&) = delete; \
	URingBufferRelaxedComponent(const URingBufferRelaxedComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferRelaxedComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferRelaxedComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URingBufferRelaxedComponent) \
	NO_API virtual ~URingBufferRelaxedComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h_17_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferRelaxedComponent;

// ********** End Class URingBufferRelaxedComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferRelaxedComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
