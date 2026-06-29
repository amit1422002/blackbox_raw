// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class DataRegistry.DataRegistry
// Size: 0xC0 (Inherited: 0x28)
struct UDataRegistry : UObject
{
	struct FName RegistryType; // 0x28(0x8)
	struct FDataRegistryIdFormat IdFormat; // 0x30(0x8)
	struct UScriptStruct* ItemStruct; // 0x38(0x8)
	struct TArray<struct UDataRegistrySource*> DataSources; // 0x40(0x10)
	struct TArray<struct UDataRegistrySource*> RuntimeSources; // 0x50(0x10)
	float TimerUpdateFrequency; // 0x60(0x4)
	struct FDataRegistryCachePolicy DefaultCachePolicy; // 0x64(0x14)
	uint8_t Pad_0x78[0x48]; // 0x78(0x48)
};

// Object: Class DataRegistry.DataRegistrySettings
// Size: 0x50 (Inherited: 0x38)
struct UDataRegistrySettings : UDeveloperSettings
{
	struct TArray<struct FDirectoryPath> DirectoriesToScan; // 0x38(0x10)
	bool bInitializeAllLoadedRegistries; // 0x48(0x1)
	bool bIgnoreMissingCookedAssetRegistryData; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
};

// Object: Class DataRegistry.DataRegistrySource
// Size: 0x38 (Inherited: 0x28)
struct UDataRegistrySource : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UDataRegistrySource* ParentSource; // 0x30(0x8)
};

// Object: Class DataRegistry.MetaDataRegistrySource
// Size: 0x108 (Inherited: 0x38)
struct UMetaDataRegistrySource : UDataRegistrySource
{
	enum class EMetaDataRegistrySourceAssetUsage AssetUsage; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FAssetManagerSearchRules SearchRules; // 0x40(0x50)
	struct TMap<struct FName, struct UDataRegistrySource*> RuntimeChildren; // 0x90(0x50)
	uint8_t Pad_0xE0[0x28]; // 0xE0(0x28)
};

// Object: Class DataRegistry.DataRegistrySource_CurveTable
// Size: 0xA0 (Inherited: 0x38)
struct UDataRegistrySource_CurveTable : UDataRegistrySource
{
	struct TSoftObjectPtr<UCurveTable> SourceTable; // 0x38(0x28)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x60(0x8)
	struct UCurveTable* CachedTable; // 0x68(0x8)
	struct UCurveTable* PreloadTable; // 0x70(0x8)
	uint8_t Pad_0x78[0x28]; // 0x78(0x28)
};

// Object: Class DataRegistry.MetaDataRegistrySource_CurveTable
// Size: 0x118 (Inherited: 0x108)
struct UMetaDataRegistrySource_CurveTable : UMetaDataRegistrySource
{
	struct UDataRegistrySource_CurveTable* CreatedSource; // 0x108(0x8)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x110(0x8)
};

// Object: Class DataRegistry.DataRegistrySource_DataTable
// Size: 0xA0 (Inherited: 0x38)
struct UDataRegistrySource_DataTable : UDataRegistrySource
{
	struct TSoftObjectPtr<UDataTable> SourceTable; // 0x38(0x28)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x60(0x8)
	struct UDataTable* CachedTable; // 0x68(0x8)
	struct UDataTable* PreloadTable; // 0x70(0x8)
	uint8_t Pad_0x78[0x28]; // 0x78(0x28)
};

// Object: Class DataRegistry.MetaDataRegistrySource_DataTable
// Size: 0x118 (Inherited: 0x108)
struct UMetaDataRegistrySource_DataTable : UMetaDataRegistrySource
{
	struct UDataRegistrySource_DataTable* CreatedSource; // 0x108(0x8)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x110(0x8)
};

// Object: Class DataRegistry.DataRegistrySubsystem
// Size: 0xC8 (Inherited: 0x30)
struct UDataRegistrySubsystem : UEngineSubsystem
{
	uint8_t Pad_0x30[0x98]; // 0x30(0x98)


	// Object: Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3950fbc
	// Params: [ Num(3) Size(0x11) ]
	bool NotEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B);

	// Object: Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3950c58
	// Params: [ Num(3) Size(0x21) ]
	bool NotEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B);

	// Object: Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x395126c
	// Params: [ Num(2) Size(0x9) ]
	bool IsValidDataRegistryType(struct FDataRegistryType DataRegistryType);

	// Object: Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3950f10
	// Params: [ Num(2) Size(0x11) ]
	bool IsValidDataRegistryId(struct FDataRegistryId DataRegistryId);

	// Object: Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3943cfc
	// Params: [ Num(4) Size(0x39) ]
	bool GetCachedItemFromLookupBP(struct FDataRegistryId ItemID, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase& OutItem);

	// Object: Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x394366c
	// Params: [ Num(3) Size(0x19) ]
	bool GetCachedItemBP(struct FDataRegistryId ItemID, struct FTableRowBase& OutItem);

	// Object: Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x394399c
	// Params: [ Num(3) Size(0x20) ]
	void FindCachedItemBP(struct FDataRegistryId ItemID, enum class EDataRegistrySubsystemGetItemResult& OutResult, struct FTableRowBase& OutItem);

	// Object: Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3951318
	// Params: [ Num(5) Size(0x20) ]
	void EvaluateDataRegistryCurve(struct FDataRegistryId ItemID, float InputValue, float DefaultValue, enum class EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue);

	// Object: Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x39510a4
	// Params: [ Num(3) Size(0x11) ]
	bool EqualEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B);

	// Object: Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3950d44
	// Params: [ Num(3) Size(0x21) ]
	bool EqualEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B);

	// Object: Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x395118c
	// Params: [ Num(2) Size(0x18) ]
	struct FString Conv_DataRegistryTypeToString(struct FDataRegistryType DataRegistryType);

	// Object: Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3950e30
	// Params: [ Num(2) Size(0x20) ]
	struct FString Conv_DataRegistryIdToString(struct FDataRegistryId DataRegistryId);

	// Object: Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39514cc
	// Params: [ Num(3) Size(0x21) ]
	bool AcquireItemBP(struct FDataRegistryId ItemID, struct FDelegate AcquireCallback);
};

} // namespace SDK
