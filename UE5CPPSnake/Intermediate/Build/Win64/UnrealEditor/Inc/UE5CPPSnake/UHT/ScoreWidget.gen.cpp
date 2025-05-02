// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5CPPSnake/Game/ScoreWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreWidget() {}

// Begin Cross Module References
UE5CPPSNAKE_API UClass* Z_Construct_UClass_UScoreWidget();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_UScoreWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UE5CPPSnake();
// End Cross Module References

// Begin Class UScoreWidget Function SetHighScore
struct Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics
{
	struct ScoreWidget_eventSetHighScore_Parms
	{
		int32 score;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/ScoreWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreWidget_eventSetHighScore_Parms, score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::NewProp_score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreWidget, nullptr, "SetHighScore", nullptr, nullptr, Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::ScoreWidget_eventSetHighScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::ScoreWidget_eventSetHighScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScoreWidget_SetHighScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScoreWidget_SetHighScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScoreWidget::execSetHighScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_score);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighScore(Z_Param_score);
	P_NATIVE_END;
}
// End Class UScoreWidget Function SetHighScore

// Begin Class UScoreWidget
void UScoreWidget::StaticRegisterNativesUScoreWidget()
{
	UClass* Class = UScoreWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHighScore", &UScoreWidget::execSetHighScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScoreWidget);
UClass* Z_Construct_UClass_UScoreWidget_NoRegister()
{
	return UScoreWidget::StaticClass();
}
struct Z_Construct_UClass_UScoreWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Game/ScoreWidget.h" },
		{ "ModuleRelativePath", "Game/ScoreWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScoreWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/ScoreWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScoreWidget_SetHighScore, "SetHighScore" }, // 3113995910
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScoreWidget_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScoreWidget, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreText_MetaData), NewProp_ScoreText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScoreWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScoreWidget_Statics::NewProp_ScoreText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScoreWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5CPPSnake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScoreWidget_Statics::ClassParams = {
	&UScoreWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScoreWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScoreWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UScoreWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScoreWidget()
{
	if (!Z_Registration_Info_UClass_UScoreWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScoreWidget.OuterSingleton, Z_Construct_UClass_UScoreWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScoreWidget.OuterSingleton;
}
template<> UE5CPPSNAKE_API UClass* StaticClass<UScoreWidget>()
{
	return UScoreWidget::StaticClass();
}
UScoreWidget::UScoreWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreWidget);
UScoreWidget::~UScoreWidget() {}
// End Class UScoreWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_ScoreWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScoreWidget, UScoreWidget::StaticClass, TEXT("UScoreWidget"), &Z_Registration_Info_UClass_UScoreWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScoreWidget), 1111164380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_ScoreWidget_h_3591239677(TEXT("/Script/UE5CPPSnake"),
	Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_ScoreWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_ScoreWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
