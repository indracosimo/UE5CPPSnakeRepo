// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5CPPSnake/Game/MapRoom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapRoom() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_AMapRoom();
UE5CPPSNAKE_API UClass* Z_Construct_UClass_AMapRoom_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5CPPSnake();
// End Cross Module References

// Begin Class AMapRoom
void AMapRoom::StaticRegisterNativesAMapRoom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapRoom);
UClass* Z_Construct_UClass_AMapRoom_NoRegister()
{
	return AMapRoom::StaticClass();
}
struct Z_Construct_UClass_AMapRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Game/MapRoom.h" },
		{ "ModuleRelativePath", "Game/MapRoom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Walls_MetaData[] = {
		{ "Category", "MapRoom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//static mesh to use for walls\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/MapRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "static mesh to use for walls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "MapRoom" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//size of grid \n" },
#endif
		{ "ModuleRelativePath", "Game/MapRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "size of grid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomSize_MetaData[] = {
		{ "Category", "MapRoom" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Game/MapRoom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Walls;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RoomSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapRoom_Statics::NewProp_Walls = { "Walls", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapRoom, Walls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Walls_MetaData), NewProp_Walls_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapRoom_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapRoom, GridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMapRoom_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapRoom, RoomSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomSize_MetaData), NewProp_RoomSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapRoom_Statics::NewProp_Walls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapRoom_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapRoom_Statics::NewProp_RoomSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapRoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5CPPSnake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapRoom_Statics::ClassParams = {
	&AMapRoom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapRoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapRoom_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapRoom()
{
	if (!Z_Registration_Info_UClass_AMapRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapRoom.OuterSingleton, Z_Construct_UClass_AMapRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapRoom.OuterSingleton;
}
template<> UE5CPPSNAKE_API UClass* StaticClass<AMapRoom>()
{
	return AMapRoom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapRoom);
AMapRoom::~AMapRoom() {}
// End Class AMapRoom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_MapRoom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapRoom, AMapRoom::StaticClass, TEXT("AMapRoom"), &Z_Registration_Info_UClass_AMapRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapRoom), 2989025364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_MapRoom_h_2081902768(TEXT("/Script/UE5CPPSnake"),
	Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_MapRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_IndraCosimoBowen_Pao_source_repos_UE5CPPSnakeRepo_UE5CPPSnake_Source_UE5CPPSnake_Game_MapRoom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
