// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProject/FPSHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSHUD() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSHUD_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AFPSHUD::StaticRegisterNativesAFPSHUD()
	{
	}
	UClass* Z_Construct_UClass_AFPSHUD_NoRegister()
	{
		return AFPSHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPSHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPSHUD.h" },
		{ "ModuleRelativePath", "FPSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "FPSHUD" },
		{ "ModuleRelativePath", "FPSHUD.h" },
		{ "ToolTip", "This will be drawn at the center of the screen." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture = { UE4CodeGen_Private::EPropertyClass::Object, "CrosshairTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFPSHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSHUD_Statics::ClassParams = {
		&AFPSHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		Z_Construct_UClass_AFPSHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFPSHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSHUD, 1675622554);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSHUD(Z_Construct_UClass_AFPSHUD, &AFPSHUD::StaticClass, TEXT("/Script/FPSProject"), TEXT("AFPSHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
