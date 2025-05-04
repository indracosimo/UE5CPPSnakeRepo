// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5CPPSnake/Game/CPP_AI_Pawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_AI_Pawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_ACPP_AI_Pawn();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_ACPP_AI_Pawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5CPPSnake();
// End Cross Module References

// Begin Class ACPP_AI_Pawn
void ACPP_AI_Pawn::StaticRegisterNativesACPP_AI_Pawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_AI_Pawn);
UClass* Z_Construct_UClass_ACPP_AI_Pawn_NoRegister()
{
	return ACPP_AI_Pawn::StaticClass();
}
struct Z_Construct_UClass_ACPP_AI_Pawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/CPP_AI_Pawn.h" },
		{ "ModuleRelativePath", "Game/CPP_AI_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
		{ "Category", "CPP_AI_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/CPP_AI_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "CPP_AI_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/CPP_AI_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "CPP_AI_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/CPP_AI_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "CPP_AI_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/CPP_AI_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "CPP_AI_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/CPP_AI_Pawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_AI_Pawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_AI_Pawn, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sphere_MetaData), NewProp_Sphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_AI_Pawn, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_AI_Pawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_AI_Pawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_AI_Pawn, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_AI_Pawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_Sphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_AI_Pawn_Statics::NewProp_Movement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_AI_Pawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_AI_Pawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5CPPSnake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_AI_Pawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_AI_Pawn_Statics::ClassParams = {
	&ACPP_AI_Pawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPP_AI_Pawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_AI_Pawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_AI_Pawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_AI_Pawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_AI_Pawn()
{
	if (!Z_Registration_Info_UClass_ACPP_AI_Pawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_AI_Pawn.OuterSingleton, Z_Construct_UClass_ACPP_AI_Pawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_AI_Pawn.OuterSingleton;
}
template<> UE5CPPSNAKE_API UClass* StaticClass<ACPP_AI_Pawn>()
{
	return ACPP_AI_Pawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_AI_Pawn);
ACPP_AI_Pawn::~ACPP_AI_Pawn() {}
// End Class ACPP_AI_Pawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_CPP_AI_Pawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_AI_Pawn, ACPP_AI_Pawn::StaticClass, TEXT("ACPP_AI_Pawn"), &Z_Registration_Info_UClass_ACPP_AI_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_AI_Pawn), 4246690530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_CPP_AI_Pawn_h_4033278392(TEXT("/Script/UE5CPPSnake"),
	Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_CPP_AI_Pawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ehren_OneDrive_Dokument_Indra_repos_Github_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_CPP_AI_Pawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
