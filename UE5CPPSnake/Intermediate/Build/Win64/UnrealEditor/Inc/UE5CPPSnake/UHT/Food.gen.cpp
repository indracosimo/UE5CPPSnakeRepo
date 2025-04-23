// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5CPPSnake/Game/Food.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFood() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_AFood();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_AFood_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5CPPSnake();
// End Cross Module References

// Begin Class AFood
void AFood::StaticRegisterNativesAFood()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFood);
UClass* Z_Construct_UClass_AFood_NoRegister()
{
	return AFood::StaticClass();
}
struct Z_Construct_UClass_AFood_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Game/Food.h" },
		{ "ModuleRelativePath", "Game/Food.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFood_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5CPPSnake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFood_Statics::ClassParams = {
	&AFood::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::Class_MetaDataParams), Z_Construct_UClass_AFood_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFood()
{
	if (!Z_Registration_Info_UClass_AFood.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFood.OuterSingleton, Z_Construct_UClass_AFood_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFood.OuterSingleton;
}
template<> UE5CPPSNAKE_API UClass* StaticClass<AFood>()
{
	return AFood::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFood);
AFood::~AFood() {}
// End Class AFood

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_Food_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFood, AFood::StaticClass, TEXT("AFood"), &Z_Registration_Info_UClass_AFood, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFood), 4030208133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_Food_h_591638284(TEXT("/Script/UE5CPPSnake"),
	Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_Food_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_Food_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
