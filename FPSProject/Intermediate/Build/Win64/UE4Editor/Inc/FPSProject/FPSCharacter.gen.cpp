// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProject/FPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump();
// End Cross Module References
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AFPSCharacter::execMoveForward },
			{ "MoveRight", &AFPSCharacter::execMoveRight },
			{ "StartJump", &AFPSCharacter::execStartJump },
			{ "StopJump", &AFPSCharacter::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics
	{
		struct FPSCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSCharacter_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "FUNCTION" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "MoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FPSCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics
	{
		struct FPSCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "MoveRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FPSCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_StartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "StartJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "StopJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_MoveForward, "MoveForward" }, // 2680276348
		{ &Z_Construct_UFunction_AFPSCharacter_MoveRight, "MoveRight" }, // 471249866
		{ &Z_Construct_UFunction_AFPSCharacter_StartJump, "StartJump" }, // 1458852191
		{ &Z_Construct_UFunction_AFPSCharacter_StopJump, "StopJump" }, // 1014306179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacter.h" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
		&AFPSCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 1320891529);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/FPSProject"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
