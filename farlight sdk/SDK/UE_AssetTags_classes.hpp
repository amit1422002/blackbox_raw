// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AssetTags.AssetTagsSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UAssetTagsSubsystem : UEngineSubsystem
{

	// Object: Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f3eeb0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FName> GetCollectionsContainingAssetPtr(struct UObject* AssetPtr);

	// Object: Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f3ef98
	// Params: [ Num(2) Size(0x60) ]
	struct TArray<struct FName> GetCollectionsContainingAssetData(struct FAssetData& AssetData);

	// Object: Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f3f0fc
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FName> GetCollectionsContainingAsset(struct FName AssetPathName);

	// Object: Function AssetTags.AssetTagsSubsystem.GetCollections
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f3f3d4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetCollections();

	// Object: Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f3f1e4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FAssetData> GetAssetsInCollection(struct FName Name);

	// Object: Function AssetTags.AssetTagsSubsystem.CollectionExists
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f3f470
	// Params: [ Num(2) Size(0x9) ]
	bool CollectionExists(struct FName Name);
};

} // namespace SDK
