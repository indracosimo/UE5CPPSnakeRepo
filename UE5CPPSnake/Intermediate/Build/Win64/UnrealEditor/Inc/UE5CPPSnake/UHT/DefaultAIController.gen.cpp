// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5CPPSnake/Game/DefaultAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_ADefaultAIController();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_ADefaultAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5CPPSnake();
// End Cross Module References

// Begin Class ADefaultAIController
void ADefaultAIController::StaticRegisterNativesADefaultAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultAIController);
UClass* Z_Construct_UClass_ADefaultAIController_NoRegister()
{
	return ADefaultAIController::StaticClass();
}
struct Z_Construct_UClass_ADefaultAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Game/DefaultAIController.h" },
		{ "ModuleRelativePath", "Game/DefaultAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Game/DefaultAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultAIController_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultAIController, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultAIController_Statics::NewProp_SearchRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefaultAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5CPPSnake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultAIController_Statics::ClassParams = {
	&ADefaultAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADefaultAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultAIController()
{
	if (!Z_Registration_Info_UClass_ADefaultAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultAIController.OuterSingleton, Z_Construct_UClass_ADefaultAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultAIController.OuterSingleton;
}
template<> UE5CPPSNAKE_API UClass* StaticClass<ADefaultAIController>()
{
	return ADefaultAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultAIController);
ADefaultAIController::~ADefaultAIController() {}
// End Class ADefaultAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_DefaultAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultAIController, ADefaultAIController::StaticClass, TEXT("ADefaultAIController"), &Z_Registration_Info_UClass_ADefaultAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultAIController), 3408303049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_DefaultAIController_h_2015138129(TEXT("/Script/UE5CPPSnake"),
	Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_DefaultAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_DefaultAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
