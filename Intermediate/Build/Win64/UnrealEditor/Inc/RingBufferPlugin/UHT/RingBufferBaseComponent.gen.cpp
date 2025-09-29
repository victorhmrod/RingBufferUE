// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RingBufferBaseComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRingBufferBaseComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent();
RINGBUFFERPLUGIN_API UClass* Z_Construct_UClass_URingBufferBaseComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RingBufferPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URingBufferBaseComponent Function AvailableToReadBytes *******************
struct Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics
{
	struct RingBufferBaseComponent_eventAvailableToReadBytes_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|State" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RingBufferBaseComponent_eventAvailableToReadBytes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "AvailableToReadBytes", Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::RingBufferBaseComponent_eventAvailableToReadBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::RingBufferBaseComponent_eventAvailableToReadBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execAvailableToReadBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AvailableToReadBytes();
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function AvailableToReadBytes *********************

// ********** Begin Class URingBufferBaseComponent Function AvailableToWriteBytes ******************
struct Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics
{
	struct RingBufferBaseComponent_eventAvailableToWriteBytes_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|State" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RingBufferBaseComponent_eventAvailableToWriteBytes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "AvailableToWriteBytes", Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::RingBufferBaseComponent_eventAvailableToWriteBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::RingBufferBaseComponent_eventAvailableToWriteBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execAvailableToWriteBytes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AvailableToWriteBytes();
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function AvailableToWriteBytes ********************

// ********** Begin Class URingBufferBaseComponent Function Clear **********************************
struct Z_Construct_UFunction_URingBufferBaseComponent_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|State" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function Clear ************************************

// ********** Begin Class URingBufferBaseComponent Function GetByte ********************************
struct Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics
{
	struct RingBufferBaseComponent_eventGetByte_Parms
	{
		uint8 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|Typed" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RingBufferBaseComponent_eventGetByte_Parms, OutValue), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RingBufferBaseComponent_eventGetByte_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RingBufferBaseComponent_eventGetByte_Parms), &Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "GetByte", Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::RingBufferBaseComponent_eventGetByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::RingBufferBaseComponent_eventGetByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_GetByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_GetByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execGetByte)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetByte(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function GetByte **********************************

// ********** Begin Class URingBufferBaseComponent Function GetFloat *******************************
struct Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics
{
	struct RingBufferBaseComponent_eventGetFloat_Parms
	{
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|Typed" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RingBufferBaseComponent_eventGetFloat_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RingBufferBaseComponent_eventGetFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RingBufferBaseComponent_eventGetFloat_Parms), &Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "GetFloat", Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::RingBufferBaseComponent_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::RingBufferBaseComponent_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execGetFloat)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFloat(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function GetFloat *********************************

// ********** Begin Class URingBufferBaseComponent Function GetInt *********************************
struct Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics
{
	struct RingBufferBaseComponent_eventGetInt_Parms
	{
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|Typed" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RingBufferBaseComponent_eventGetInt_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RingBufferBaseComponent_eventGetInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RingBufferBaseComponent_eventGetInt_Parms), &Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "GetInt", Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::RingBufferBaseComponent_eventGetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::RingBufferBaseComponent_eventGetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_GetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_GetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execGetInt)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInt(Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function GetInt ***********************************

// ********** Begin Class URingBufferBaseComponent Function IsEmpty ********************************
struct Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics
{
	struct RingBufferBaseComponent_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------- State API --------\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------- State API --------" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RingBufferBaseComponent_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RingBufferBaseComponent_eventIsEmpty_Parms), &Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "IsEmpty", Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::RingBufferBaseComponent_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::RingBufferBaseComponent_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function IsEmpty **********************************

// ********** Begin Class URingBufferBaseComponent Function IsFull *********************************
struct Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics
{
	struct RingBufferBaseComponent_eventIsFull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|State" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RingBufferBaseComponent_eventIsFull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RingBufferBaseComponent_eventIsFull_Parms), &Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "IsFull", Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::RingBufferBaseComponent_eventIsFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::RingBufferBaseComponent_eventIsFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_IsFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_IsFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execIsFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFull();
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function IsFull ***********************************

// ********** Begin Class URingBufferBaseComponent Function PutByte ********************************
struct Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics
{
	struct RingBufferBaseComponent_eventPutByte_Parms
	{
		uint8 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|Typed" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RingBufferBaseComponent_eventPutByte_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RingBufferBaseComponent_eventPutByte_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RingBufferBaseComponent_eventPutByte_Parms), &Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "PutByte", Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::RingBufferBaseComponent_eventPutByte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::RingBufferBaseComponent_eventPutByte_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_PutByte()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_PutByte_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execPutByte)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PutByte(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function PutByte **********************************

// ********** Begin Class URingBufferBaseComponent Function PutFloat *******************************
struct Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics
{
	struct RingBufferBaseComponent_eventPutFloat_Parms
	{
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|Typed" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RingBufferBaseComponent_eventPutFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RingBufferBaseComponent_eventPutFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RingBufferBaseComponent_eventPutFloat_Parms), &Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "PutFloat", Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::RingBufferBaseComponent_eventPutFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::RingBufferBaseComponent_eventPutFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_PutFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_PutFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execPutFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PutFloat(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function PutFloat *********************************

// ********** Begin Class URingBufferBaseComponent Function PutInt *********************************
struct Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics
{
	struct RingBufferBaseComponent_eventPutInt_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RingBuffer|Typed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------- Typed API for Blueprint --------\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------- Typed API for Blueprint --------" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RingBufferBaseComponent_eventPutInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RingBufferBaseComponent_eventPutInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RingBufferBaseComponent_eventPutInt_Parms), &Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URingBufferBaseComponent, nullptr, "PutInt", Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::RingBufferBaseComponent_eventPutInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::RingBufferBaseComponent_eventPutInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URingBufferBaseComponent_PutInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingBufferBaseComponent_PutInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URingBufferBaseComponent::execPutInt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PutInt(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URingBufferBaseComponent Function PutInt ***********************************

// ********** Begin Class URingBufferBaseComponent *************************************************
void URingBufferBaseComponent::StaticRegisterNativesURingBufferBaseComponent()
{
	UClass* Class = URingBufferBaseComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AvailableToReadBytes", &URingBufferBaseComponent::execAvailableToReadBytes },
		{ "AvailableToWriteBytes", &URingBufferBaseComponent::execAvailableToWriteBytes },
		{ "Clear", &URingBufferBaseComponent::execClear },
		{ "GetByte", &URingBufferBaseComponent::execGetByte },
		{ "GetFloat", &URingBufferBaseComponent::execGetFloat },
		{ "GetInt", &URingBufferBaseComponent::execGetInt },
		{ "IsEmpty", &URingBufferBaseComponent::execIsEmpty },
		{ "IsFull", &URingBufferBaseComponent::execIsFull },
		{ "PutByte", &URingBufferBaseComponent::execPutByte },
		{ "PutFloat", &URingBufferBaseComponent::execPutFloat },
		{ "PutInt", &URingBufferBaseComponent::execPutInt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URingBufferBaseComponent;
UClass* URingBufferBaseComponent::GetPrivateStaticClass()
{
	using TClass = URingBufferBaseComponent;
	if (!Z_Registration_Info_UClass_URingBufferBaseComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RingBufferBaseComponent"),
			Z_Registration_Info_UClass_URingBufferBaseComponent.InnerSingleton,
			StaticRegisterNativesURingBufferBaseComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URingBufferBaseComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URingBufferBaseComponent_NoRegister()
{
	return URingBufferBaseComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URingBufferBaseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base ring buffer component.\n * - Works with raw bytes internally.\n * - Exposes typed API for Blueprint: int32, float, byte.\n * - Subclasses must implement the byte-level ops (Put/Get/State).\n */" },
#endif
		{ "IncludePath", "Components/RingBufferBaseComponent.h" },
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base ring buffer component.\n- Works with raw bytes internally.\n- Exposes typed API for Blueprint: int32, float, byte.\n- Subclasses must implement the byte-level ops (Put/Get/State)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapacityBytes_MetaData[] = {
		{ "Category", "RingBuffer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Informational only when underlying buffer uses compile-time capacity. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/RingBufferBaseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Informational only when underlying buffer uses compile-time capacity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CapacityBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URingBufferBaseComponent_AvailableToReadBytes, "AvailableToReadBytes" }, // 1328225555
		{ &Z_Construct_UFunction_URingBufferBaseComponent_AvailableToWriteBytes, "AvailableToWriteBytes" }, // 4170600152
		{ &Z_Construct_UFunction_URingBufferBaseComponent_Clear, "Clear" }, // 2087863767
		{ &Z_Construct_UFunction_URingBufferBaseComponent_GetByte, "GetByte" }, // 2216387437
		{ &Z_Construct_UFunction_URingBufferBaseComponent_GetFloat, "GetFloat" }, // 1555782036
		{ &Z_Construct_UFunction_URingBufferBaseComponent_GetInt, "GetInt" }, // 836382686
		{ &Z_Construct_UFunction_URingBufferBaseComponent_IsEmpty, "IsEmpty" }, // 819424325
		{ &Z_Construct_UFunction_URingBufferBaseComponent_IsFull, "IsFull" }, // 3787616686
		{ &Z_Construct_UFunction_URingBufferBaseComponent_PutByte, "PutByte" }, // 3302412893
		{ &Z_Construct_UFunction_URingBufferBaseComponent_PutFloat, "PutFloat" }, // 2812535375
		{ &Z_Construct_UFunction_URingBufferBaseComponent_PutInt, "PutInt" }, // 2167418670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URingBufferBaseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URingBufferBaseComponent_Statics::NewProp_CapacityBytes = { "CapacityBytes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URingBufferBaseComponent, CapacityBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapacityBytes_MetaData), NewProp_CapacityBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URingBufferBaseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URingBufferBaseComponent_Statics::NewProp_CapacityBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferBaseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URingBufferBaseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RingBufferPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferBaseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URingBufferBaseComponent_Statics::ClassParams = {
	&URingBufferBaseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URingBufferBaseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferBaseComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URingBufferBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URingBufferBaseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URingBufferBaseComponent()
{
	if (!Z_Registration_Info_UClass_URingBufferBaseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingBufferBaseComponent.OuterSingleton, Z_Construct_UClass_URingBufferBaseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URingBufferBaseComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URingBufferBaseComponent);
URingBufferBaseComponent::~URingBufferBaseComponent() {}
// ********** End Class URingBufferBaseComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h__Script_RingBufferPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URingBufferBaseComponent, URingBufferBaseComponent::StaticClass, TEXT("URingBufferBaseComponent"), &Z_Registration_Info_UClass_URingBufferBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingBufferBaseComponent), 3193101764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h__Script_RingBufferPlugin_1701660661(TEXT("/Script/RingBufferPlugin"),
	Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h__Script_RingBufferPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AttachmentSystem_Plugins_RingBufferPlugin_Source_RingBufferPlugin_Public_Components_RingBufferBaseComponent_h__Script_RingBufferPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
