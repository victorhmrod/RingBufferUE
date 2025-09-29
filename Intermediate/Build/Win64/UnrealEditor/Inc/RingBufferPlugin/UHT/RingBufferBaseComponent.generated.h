// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RingBufferBaseComponent.h"

#ifdef RINGBUFFERPLUGIN_RingBufferBaseComponent_generated_h
#error "RingBufferBaseComponent.generated.h already included, missing '#pragma once' in RingBufferBaseComponent.h"
#endif
#define RINGBUFFERPLUGIN_RingBufferBaseComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URingBufferBaseComponent *************************************************
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execAvailableToWriteBytes); \
	DECLARE_FUNCTION(execAvailableToReadBytes); \
	DECLARE_FUNCTION(execIsFull); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execGetByte); \
	DECLARE_FUNCTION(execPutByte); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execPutFloat); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execPutInt);


RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent_NoRegister();

#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURingBufferBaseComponent(); \
	friend struct Z_Construct_UClass_URingBufferBaseComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URingBufferBaseComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RingBufferPlugin"), Z_Construct_UClass_URingBufferBaseComponent_NoRegister) \
	DECLARE_SERIALIZER(URingBufferBaseComponent)


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URingBufferBaseComponent(URingBufferBaseComponent&&) = delete; \
	URingBufferBaseComponent(const URingBufferBaseComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URingBufferBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URingBufferBaseComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URingBufferBaseComponent) \
	NO_API virtual ~URingBufferBaseComponent();


#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h_15_PROLOG
#define FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URingBufferBaseComponent;

// ********** End Class URingBufferBaseComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
