// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5CPPSnake/Game/CPP_Snake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Snake() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_ACPP_Snake();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_ACPP_Snake_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5CPPSnake();
// End Cross Module References

// Begin Class ACPP_Snake
void ACPP_Snake::StaticRegisterNativesACPP_Snake()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Snake);
UClass* Z_Construct_UClass_ACPP_Snake_NoRegister()
{
	return ACPP_Snake::StaticClass();
}
struct Z_Construct_UClass_ACPP_Snake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/CPP_Snake.h" },
		{ "ModuleRelativePath", "Game/CPP_Snake.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Snake>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_Snake_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5CPPSnake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Snake_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Snake_Statics::ClassParams = {
	&ACPP_Snake::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Snake_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_Snake_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_Snake()
{
	if (!Z_Registration_Info_UClass_ACPP_Snake.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Snake.OuterSingleton, Z_Construct_UClass_ACPP_Snake_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_Snake.OuterSingleton;
}
template<> UE5CPPSNAKE_API UClass* StaticClass<ACPP_Snake>()
{
	return ACPP_Snake::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Snake);
ACPP_Snake::~ACPP_Snake() {}
// End Class ACPP_Snake

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_CPP_Snake_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Snake, ACPP_Snake::StaticClass, TEXT("ACPP_Snake"), &Z_Registration_Info_UClass_ACPP_Snake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Snake), 872363834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_CPP_Snake_h_3525803875(TEXT("/Script/UE5CPPSnake"),
	Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_CPP_Snake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_CPP_Snake_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
