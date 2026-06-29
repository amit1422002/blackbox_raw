// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AssetRegistry.AssetRegistryImpl
// Size: 0x778 (Inherited: 0x28)
struct UAssetRegistryImpl : UObject
{
	uint8_t Pad_0x28[0x750]; // 0x28(0x750)
};

// Object: Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistryHelpers : UObject
{

	// Object: Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7a5c8
	// Params: [ Num(2) Size(0x68) ]
	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a79c10
	// Params: [ Num(3) Size(0x1E0) ]
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsValid
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7aad8
	// Params: [ Num(2) Size(0x51) ]
	bool IsValid(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsUAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7a9b0
	// Params: [ Num(2) Size(0x51) ]
	bool IsUAsset(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsRedirector
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7a888
	// Params: [ Num(2) Size(0x51) ]
	bool IsRedirector(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7a258
	// Params: [ Num(2) Size(0x51) ]
	bool IsAssetLoaded(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetTagValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a79f20
	// Params: [ Num(4) Size(0x69) ]
	bool GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, struct FString& OutTagValue);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetFullName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7a72c
	// Params: [ Num(2) Size(0x60) ]
	struct FString GetFullName(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7a0fc
	// Params: [ Num(2) Size(0x60) ]
	struct FString GetExportTextName(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7a4a4
	// Params: [ Num(2) Size(0x58) ]
	struct UObject* GetClass(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7ae20
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IAssetRegistry> GetAssetRegistry();

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7a380
	// Params: [ Num(2) Size(0x58) ]
	struct UObject* GetAsset(struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9a7ac00
	// Params: [ Num(3) Size(0x60) ]
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass);
};

// Object: Class AssetRegistry.AssetRegistry
// Size: 0x28 (Inherited: 0x28)
struct IAssetRegistry : IInterface
{

	// Object: Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7ba14
	// Params: [ Num(2) Size(0xF8) ]
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter);

	// Object: Function AssetRegistry.AssetRegistry.SearchAllAssets
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9a7b6ec
	// Params: [ Num(1) Size(0x1) ]
	void SearchAllAssets(bool bSynchronousSearch);

	// Object: Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a7b8dc
	// Params: [ Num(2) Size(0x11) ]
	void ScanPathsSynchronous(struct TArray<struct FString>& InPaths, bool bForceRescan);

	// Object: Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a7b540
	// Params: [ Num(1) Size(0x10) ]
	void ScanModifiedAssetFiles(struct TArray<struct FString>& InFilePaths);

	// Object: Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a7b7a4
	// Params: [ Num(2) Size(0x11) ]
	void ScanFilesSynchronous(struct TArray<struct FString>& InFilePaths, bool bForceRescan);

	// Object: Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7bc00
	// Params: [ Num(2) Size(0xF8) ]
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter);

	// Object: Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9a7b630
	// Params: [ Num(1) Size(0x10) ]
	void PrioritizeSearchPath(struct FString PathToPrioritize);

	// Object: Function AssetRegistry.AssetRegistry.K2_GetReferencers
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7c064
	// Params: [ Num(4) Size(0x21) ]
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers);

	// Object: Function AssetRegistry.AssetRegistry.K2_GetDependencies
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7c1d8
	// Params: [ Num(4) Size(0x21) ]
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies);

	// Object: Function AssetRegistry.AssetRegistry.IsLoadingAssets
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9a7b500
	// Params: [ Num(1) Size(0x1) ]
	bool IsLoadingAssets();

	// Object: Function AssetRegistry.AssetRegistry.HasAssets
	// Flags: [Native|Public|BlueprintCallable|Const]
	// Offset: 0x9a7cf0c
	// Params: [ Num(3) Size(0xA) ]
	bool HasAssets(struct FName PackagePath, bool bRecursive);

	// Object: Function AssetRegistry.AssetRegistry.GetSubPaths
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7bdec
	// Params: [ Num(3) Size(0x21) ]
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, bool bInRecurse);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByPath
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7cafc
	// Params: [ Num(5) Size(0x1B) ]
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7cd28
	// Params: [ Num(4) Size(0x1A) ]
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7c918
	// Params: [ Num(4) Size(0x1A) ]
	bool GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses);

	// Object: Function AssetRegistry.AssetRegistry.GetAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7c720
	// Params: [ Num(3) Size(0xF9) ]
	bool GetAssets(struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
	// Flags: [Native|Public|BlueprintCallable|Const]
	// Offset: 0x9a7c4f0
	// Params: [ Num(3) Size(0x60) ]
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAllCachedPaths
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7bf74
	// Params: [ Num(1) Size(0x10) ]
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList);

	// Object: Function AssetRegistry.AssetRegistry.GetAllAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9a7c34c
	// Params: [ Num(3) Size(0x12) ]
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
};

} // namespace SDK
