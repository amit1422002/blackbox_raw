// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum HotPatcherRuntime.ETargetPlatform
enum class ETargetPlatform : uint8_t
{
	None = 0,
	AllPlatforms = 1,
	ETargetPlatform_MAX = 2
};

// Object: Enum HotPatcherRuntime.EMatchOperator
enum class EMatchOperator : uint8_t
{
	None = 0,
	GREAT_THAN = 1,
	LESS_THAN = 2,
	EQUAL = 3,
	EMatchOperator_MAX = 4
};

// Object: Enum HotPatcherRuntime.EMatchRule
enum class EMatchRule : uint8_t
{
	None = 0,
	MATCH = 1,
	IGNORE = 2,
	EMatchRule_MAX = 3
};

// Object: Enum HotPatcherRuntime.EMonolithicPathMode
enum class EMonolithicPathMode : uint8_t
{
	MountPath = 0,
	PackagePath = 1,
	EMonolithicPathMode_MAX = 2
};

// Object: Enum HotPatcherRuntime.EAssetRegistryRule
enum class EAssetRegistryRule : uint8_t
{
	PATCH = 0,
	PER_CHUNK = 1,
	CUSTOM = 2,
	EAssetRegistryRule_MAX = 3
};

// Object: Enum HotPatcherRuntime.EShaderLibNameRule
enum class EShaderLibNameRule : uint8_t
{
	VERSION_ID = 0,
	PROJECT_NAME = 1,
	CUSTOM = 2,
	EShaderLibNameRule_MAX = 3
};

// Object: Enum HotPatcherRuntime.EAssetRegistryDependencyTypeEx
enum class EAssetRegistryDependencyTypeEx : uint8_t
{
	None = 0,
	Soft = 1,
	Hard = 2,
	SearchableName = 3,
	SoftManage = 4,
	HardManage = 5,
	Packages = 6,
	Manage = 7,
	All = 8,
	EAssetRegistryDependencyTypeEx_MAX = 9
};

// Object: Enum HotPatcherRuntime.EPSOSaveMode
enum class EPSOSaveMode : uint8_t
{
	Incremental = 0,
	BoundPSOsOnly = 1,
	SortedBoundPSOs = 2,
	EPSOSaveMode_MAX = 3
};

// Object: Enum HotPatcherRuntime.ESearchCaseMode
enum class ESearchCaseMode : uint8_t
{
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCaseMode_MAX = 2
};

// Object: ScriptStruct HotPatcherRuntime.PakMountInfo
// Size: 0x18 (Inherited: 0x0)
struct FPakMountInfo
{
	struct FString Pak; // 0x0(0x10)
	int32_t PakOrder; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct HotPatcherRuntime.AssetDependenciesDetail
// Size: 0x60 (Inherited: 0x0)
struct FAssetDependenciesDetail
{
	struct FString ModuleCategory; // 0x0(0x10)
	struct TMap<struct FString, struct FAssetDetail> AssetDependencyDetails; // 0x10(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.AssetDetail
// Size: 0x18 (Inherited: 0x0)
struct FAssetDetail
{
	struct FName PackagePath; // 0x0(0x8)
	struct FName AssetType; // 0x8(0x8)
	struct FName Guid; // 0x10(0x8)
};

// Object: ScriptStruct HotPatcherRuntime.AssetDependenciesInfo
// Size: 0x50 (Inherited: 0x0)
struct FAssetDependenciesInfo
{
	struct TMap<struct FString, struct FAssetDependenciesDetail> AssetsDependenciesMap; // 0x0(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.BinariesPatchConfig
// Size: 0x50 (Inherited: 0x0)
struct FBinariesPatchConfig
{
	enum class EBinariesPatchFeature BinariesPatchType; // 0x0(0x1)
	uint8_t Pad_0x1[0x17]; // 0x1(0x17)
	struct FPakEncryptSettings EncryptSettings; // 0x18(0x18)
	struct TArray<struct FPlatformBasePak> BaseVersionPaks; // 0x30(0x10)
	struct TArray<struct FMatchRule> MatchRules; // 0x40(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.MatchRule
// Size: 0x28 (Inherited: 0x0)
struct FMatchRule
{
	enum class EMatchRule Rule; // 0x0(0x1)
	enum class EMatchOperator Operator; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float Size; // 0x4(0x4)
	struct TArray<struct FString> Formaters; // 0x8(0x10)
	struct TArray<struct FString> AssetTypes; // 0x18(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformBasePak
// Size: 0x18 (Inherited: 0x0)
struct FPlatformBasePak
{
	enum class ETargetPlatform Platform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FFilePath> Paks; // 0x8(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakEncryptSettings
// Size: 0x18 (Inherited: 0x0)
struct FPakEncryptSettings
{
	bool bUseDefaultCryptoIni; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FFilePath CryptoKeys; // 0x8(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.ChunkAssetDescribe
// Size: 0x148 (Inherited: 0x0)
struct FChunkAssetDescribe
{
	uint8_t Pad_0x0[0x148]; // 0x0(0x148)
};

// Object: ScriptStruct HotPatcherRuntime.ChunkPakCommand
// Size: 0x40 (Inherited: 0x0)
struct FChunkPakCommand
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct HotPatcherRuntime.ChunkInfo
// Size: 0x88 (Inherited: 0x0)
struct FChunkInfo
{
	struct FString ChunkName; // 0x0(0x10)
	bool bMonolithic; // 0x10(0x1)
	enum class EMonolithicPathMode MonolithicPathMode; // 0x11(0x1)
	bool bStorageUnrealPakList; // 0x12(0x1)
	bool bStorageIoStorePakList; // 0x13(0x1)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0x18(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0x28(0x10)
	bool bAnalysisFilterDependencies; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x40(0x10)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0x50(0x10)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x60(0x10)
	struct FPakInternalInfo InternalFiles; // 0x70(0x6)
	uint8_t Pad_0x76[0x12]; // 0x76(0x12)
};

// Object: ScriptStruct HotPatcherRuntime.PakInternalInfo
// Size: 0x6 (Inherited: 0x0)
struct FPakInternalInfo
{
	uint8_t Pad_0x0[0x3]; // 0x0(0x3)
	bool bIncludeEngineIni; // 0x3(0x1)
	bool bIncludePluginIni; // 0x4(0x1)
	bool bIncludeProjectIni; // 0x5(0x1)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformExternAssets
// Size: 0x28 (Inherited: 0x0)
struct FPlatformExternAssets
{
	enum class ETargetPlatform TargetPlatform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FExternFileInfo> AddExternFileToPak; // 0x8(0x10)
	struct TArray<struct FExternDirectoryInfo> AddExternDirectoryToPak; // 0x18(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.ExternDirectoryInfo
// Size: 0x20 (Inherited: 0x0)
struct FExternDirectoryInfo
{
	struct FDirectoryPath DirectoryPath; // 0x0(0x10)
	struct FString MountPoint; // 0x10(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.ExternFileInfo
// Size: 0x38 (Inherited: 0x0)
struct FExternFileInfo
{
	struct FFilePath FilePath; // 0x0(0x10)
	struct FString MountPath; // 0x10(0x10)
	struct FString FileHash; // 0x20(0x10)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct HotPatcherRuntime.PatcherSpecifyAsset
// Size: 0x30 (Inherited: 0x0)
struct FPatcherSpecifyAsset
{
	struct FSoftObjectPath Asset; // 0x0(0x18)
	bool bAnalysisAssetDependencies; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x20(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakFileProxy
// Size: 0x68 (Inherited: 0x0)
struct FPakFileProxy
{
	struct FString ChunkStoreName; // 0x0(0x10)
	enum class ETargetPlatform Platform; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString StorageDirectory; // 0x18(0x10)
	struct FString PakCommandSavePath; // 0x28(0x10)
	struct FString PakSavePath; // 0x38(0x10)
	struct TArray<struct FPakCommand> PakCommands; // 0x48(0x10)
	struct TArray<struct FString> IoStoreCommands; // 0x58(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakCommand
// Size: 0x58 (Inherited: 0x0)
struct FPakCommand
{
	struct FString ChunkName; // 0x0(0x10)
	struct FString MountPath; // 0x10(0x10)
	struct FString AssetPackage; // 0x20(0x10)
	struct TArray<struct FString> PakCommands; // 0x30(0x10)
	struct TArray<struct FString> IoStoreCommands; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: ScriptStruct HotPatcherRuntime.CookerConfig
// Size: 0x88 (Inherited: 0x0)
struct FCookerConfig
{
	struct FString EngineBin; // 0x0(0x10)
	struct FString ProjectPath; // 0x10(0x10)
	struct FString EngineParams; // 0x20(0x10)
	struct TArray<struct FString> CookPlatforms; // 0x30(0x10)
	bool bCookAllMap; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct TArray<struct FString> CookMaps; // 0x48(0x10)
	struct TArray<struct FString> CookFilter; // 0x58(0x10)
	struct TArray<struct FString> CookSettings; // 0x68(0x10)
	struct FString options; // 0x78(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PatcherEntitySettingBase
// Size: 0x8 (Inherited: 0x0)
struct FPatcherEntitySettingBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherSettingBase
// Size: 0x38 (Inherited: 0x8)
struct FHotPatcherSettingBase : FPatcherEntitySettingBase
{
	bool bStorageConfig; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FDirectoryPath SavePath; // 0x10(0x10)
	bool bStandaloneMode; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct FString> AdditionalCommandletArgs; // 0x28(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.ExportPatchSettings
// Size: 0x328 (Inherited: 0x38)
struct FExportPatchSettings : FHotPatcherSettingBase
{
	bool bByBaseVersion; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FFilePath BaseVersion; // 0x40(0x10)
	struct FString VersionId; // 0x50(0x10)
	bool bBinariesPatch; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct FBinariesPatchConfig BinariesPatchConfig; // 0x68(0x50)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0xB8(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0xC8(0x10)
	bool bForceSkipContent; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct TArray<struct FDirectoryPath> ForceSkipContentRules; // 0xE0(0x10)
	struct TArray<struct FSoftObjectPath> ForceSkipAssets; // 0xF0(0x10)
	bool bIncludeHasRefAssetsOnly; // 0x100(0x1)
	bool bAnalysisFilterDependencies; // 0x101(0x1)
	bool bAnalysisDiffAssetDependenciesOnly; // 0x102(0x1)
	uint8_t Pad_0x103[0x5]; // 0x103(0x5)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x108(0x10)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0x118(0x10)
	bool bRecursiveWidgetTree; // 0x128(0x1)
	bool bPackageTracker; // 0x129(0x1)
	uint8_t Pad_0x12A[0x4]; // 0x12A(0x4)
	bool bIncludeEngineIni; // 0x12E(0x1)
	bool bIncludePluginIni; // 0x12F(0x1)
	bool bIncludeProjectIni; // 0x130(0x1)
	bool bEnableExternFilesDiff; // 0x131(0x1)
	uint8_t Pad_0x132[0x6]; // 0x132(0x6)
	struct TArray<struct FString> IgnoreDeletionModulesAsset; // 0x138(0x10)
	uint8_t Pad_0x148[0x20]; // 0x148(0x20)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x168(0x10)
	uint8_t Pad_0x178[0x18]; // 0x178(0x18)
	bool bEnableChunk; // 0x190(0x1)
	bool bCreateDefaultChunk; // 0x191(0x1)
	uint8_t Pad_0x192[0x6]; // 0x192(0x6)
	struct TArray<struct FChunkInfo> ChunkInfos; // 0x198(0x10)
	bool bCookPatchAssets; // 0x1A8(0x1)
	uint8_t Pad_0x1A9[0x7]; // 0x1A9(0x7)
	struct FCookShaderOptions CookShaderOptions; // 0x1B0(0x28)
	struct FAssetRegistryOptions SerializeAssetRegistryOptions; // 0x1D8(0x30)
	struct FIoStoreSettings IoStoreSettings; // 0x208(0x80)
	struct FUnrealPakSettings UnrealPakSettings; // 0x288(0x28)
	struct TArray<struct FString> DefaultPakListOptions; // 0x2B0(0x10)
	struct TArray<struct FString> DefaultCommandletOptions; // 0x2C0(0x10)
	struct FPakEncryptSettings EncryptSettings; // 0x2D0(0x18)
	struct TArray<struct FReplaceText> ReplacePakListTexts; // 0x2E8(0x10)
	struct TArray<enum class ETargetPlatform> PakTargetPlatforms; // 0x2F8(0x10)
	bool bCustomPakNameRegular; // 0x308(0x1)
	uint8_t Pad_0x309[0x7]; // 0x309(0x7)
	struct FString PakNameRegular; // 0x310(0x10)
	bool bStorageNewRelease; // 0x320(0x1)
	bool bStoragePakFileInfo; // 0x321(0x1)
	bool bIgnoreDeleatedAssetsInfo; // 0x322(0x1)
	bool bStorageDeletedAssetsToNewReleaseJson; // 0x323(0x1)
	bool bStorageDiffAnalysisResults; // 0x324(0x1)
	bool bBackupMetadata; // 0x325(0x1)
	uint8_t Pad_0x326[0x1]; // 0x326(0x1)
	bool bEnableProfiling; // 0x327(0x1)
};

// Object: ScriptStruct HotPatcherRuntime.ReplaceText
// Size: 0x28 (Inherited: 0x0)
struct FReplaceText
{
	struct FString From; // 0x0(0x10)
	struct FString To; // 0x10(0x10)
	enum class ESearchCaseMode SearchCase; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct HotPatcherRuntime.UnrealPakSettings
// Size: 0x28 (Inherited: 0x0)
struct FUnrealPakSettings
{
	struct TArray<struct FString> UnrealPakListOptions; // 0x0(0x10)
	struct TArray<struct FString> UnrealCommandletOptions; // 0x10(0x10)
	bool bStoragePakList; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct HotPatcherRuntime.IoStoreSettings
// Size: 0x80 (Inherited: 0x0)
struct FIoStoreSettings
{
	bool bIoStore; // 0x0(0x1)
	bool bAllowBulkDataInIoStore; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<struct FString> IoStorePakListOptions; // 0x8(0x10)
	struct TArray<struct FString> IoStoreCommandletOptions; // 0x18(0x10)
	struct TMap<enum class ETargetPlatform, struct FIoStorePlatformContainers> PlatformContainers; // 0x28(0x50)
	bool bStoragePakList; // 0x78(0x1)
	bool bStorageBulkDataInfo; // 0x79(0x1)
	uint8_t Pad_0x7A[0x6]; // 0x7A(0x6)
};

// Object: ScriptStruct HotPatcherRuntime.IoStorePlatformContainers
// Size: 0x38 (Inherited: 0x0)
struct FIoStorePlatformContainers
{
	struct FDirectoryPath BasePackageStagedRootDir; // 0x0(0x10)
	bool bGenerateDiffPatch; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FFilePath GlobalContainersOverride; // 0x18(0x10)
	struct FFilePath PatchSourceOverride; // 0x28(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.AssetRegistryOptions
// Size: 0x30 (Inherited: 0x0)
struct FAssetRegistryOptions
{
	bool bSerializeAssetRegistry; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString AssetRegistryMountPointRegular; // 0x8(0x10)
	enum class EAssetRegistryRule AssetRegistryRule; // 0x18(0x1)
	bool bCustomAssetRegistryName; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct FString AssetRegistryNameRegular; // 0x20(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.CookShaderOptions
// Size: 0x28 (Inherited: 0x0)
struct FCookShaderOptions
{
	bool bSharedShaderLibrary; // 0x0(0x1)
	bool bNativeShader; // 0x1(0x1)
	uint8_t Pad_0x2[0x1]; // 0x2(0x1)
	enum class EShaderLibNameRule ShaderNameRule; // 0x3(0x1)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString CustomShaderName; // 0x8(0x10)
	struct FString ShderLibMountPointRegular; // 0x18(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.ExportReleaseSettings
// Size: 0x100 (Inherited: 0x38)
struct FExportReleaseSettings : FHotPatcherSettingBase
{
	struct FString VersionId; // 0x38(0x10)
	bool ByPakList; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TArray<struct FPlatformPakListFiles> PlatformsPakListFiles; // 0x50(0x10)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0x60(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0x70(0x10)
	bool bAnalysisFilterDependencies; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x88(0x10)
	bool bIncludeHasRefAssetsOnly; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x20]; // 0xB0(0x20)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0xD0(0x10)
	bool bBackupMetadata; // 0xE0(0x1)
	bool bBackupProjectConfig; // 0xE1(0x1)
	uint8_t Pad_0xE2[0x6]; // 0xE2(0x6)
	struct TArray<enum class ETargetPlatform> BackupMetadataPlatforms; // 0xE8(0x10)
	bool bNoShaderCompile; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformPakListFiles
// Size: 0x38 (Inherited: 0x0)
struct FPlatformPakListFiles
{
	enum class ETargetPlatform TargetPlatform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FFilePath> PakResponseFiles; // 0x8(0x10)
	struct TArray<struct FFilePath> PakFiles; // 0x18(0x10)
	struct FString AESKey; // 0x28(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherAssetDependency
// Size: 0x38 (Inherited: 0x0)
struct FHotPatcherAssetDependency
{
	struct FAssetDetail Asset; // 0x0(0x18)
	struct TArray<struct FAssetDetail> AssetReference; // 0x18(0x10)
	struct TArray<struct FAssetDetail> AssetDependency; // 0x28(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherVersion
// Size: 0x118 (Inherited: 0x0)
struct FHotPatcherVersion
{
	struct FString VersionId; // 0x0(0x10)
	struct FString BaseVersionId; // 0x10(0x10)
	struct FString Date; // 0x20(0x10)
	uint8_t Pad_0x30[0x48]; // 0x30(0x48)
	struct FAssetDependenciesInfo AssetInfo; // 0x78(0x50)
	struct TMap<enum class ETargetPlatform, struct FPlatformExternAssets> PlatformAssets; // 0xC8(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.PackageInfo
// Size: 0x20 (Inherited: 0x0)
struct FPackageInfo
{
	struct FString AssetName; // 0x0(0x10)
	struct FString AssetGuid; // 0x10(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakEncryptionKeys
// Size: 0x88 (Inherited: 0x0)
struct FPakEncryptionKeys
{
	struct FEncryptionKeyEntry EncryptionKey; // 0x0(0x30)
	struct TArray<struct FEncryptionKeyEntry> SecondaryEncryptionKeys; // 0x30(0x10)
	bool bEnablePakIndexEncryption; // 0x40(0x1)
	bool bEnablePakIniEncryption; // 0x41(0x1)
	bool bEnablePakUAssetEncryption; // 0x42(0x1)
	bool bEnablePakFullAssetEncryption; // 0x43(0x1)
	bool bDataCryptoRequired; // 0x44(0x1)
	bool PakEncryptionRequired; // 0x45(0x1)
	bool PakSigningRequired; // 0x46(0x1)
	bool bEnablePakSigning; // 0x47(0x1)
	struct FSignKeyEntry SigningKey; // 0x48(0x40)
};

// Object: ScriptStruct HotPatcherRuntime.SignKeyEntry
// Size: 0x40 (Inherited: 0x0)
struct FSignKeyEntry
{
	struct FSignKeyItem PublicKey; // 0x0(0x20)
	struct FSignKeyItem PrivateKey; // 0x20(0x20)
};

// Object: ScriptStruct HotPatcherRuntime.SignKeyItem
// Size: 0x20 (Inherited: 0x0)
struct FSignKeyItem
{
	struct FString Exponent; // 0x0(0x10)
	struct FString Modulus; // 0x10(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.EncryptionKeyEntry
// Size: 0x30 (Inherited: 0x0)
struct FEncryptionKeyEntry
{
	struct FString Name; // 0x0(0x10)
	struct FString Guid; // 0x10(0x10)
	struct FString Key; // 0x20(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakFilesMap
// Size: 0x50 (Inherited: 0x0)
struct FPakFilesMap
{
	struct TMap<struct FString, struct FPakFileArray> PakFilesMap; // 0x0(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.PakFileArray
// Size: 0x10 (Inherited: 0x0)
struct FPakFileArray
{
	struct TArray<struct FPakFileInfo> PakFileInfos; // 0x0(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakFileInfo
// Size: 0x28 (Inherited: 0x0)
struct FPakFileInfo
{
	struct FString Filename; // 0x0(0x10)
	struct FString Hash; // 0x10(0x10)
	int32_t FileSize; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct HotPatcherRuntime.PakVersion
// Size: 0x40 (Inherited: 0x0)
struct FPakVersion
{
	struct FString VersionId; // 0x0(0x10)
	struct FString BaseVersionId; // 0x10(0x10)
	struct FString Date; // 0x20(0x10)
	struct FString CheckCode; // 0x30(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PatchVersionAssetDiff
// Size: 0xF0 (Inherited: 0x0)
struct FPatchVersionAssetDiff
{
	struct FAssetDependenciesInfo AddAssetDependInfo; // 0x0(0x50)
	struct FAssetDependenciesInfo ModifyAssetDependInfo; // 0x50(0x50)
	struct FAssetDependenciesInfo DeleteAssetDependInfo; // 0xA0(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.PatchVersionDiff
// Size: 0x140 (Inherited: 0x0)
struct FPatchVersionDiff
{
	struct FPatchVersionAssetDiff AssetDiffInfo; // 0x0(0xF0)
	struct TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff> PlatformExternDiffInfo; // 0xF0(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.PatchVersionExternDiff
// Size: 0x38 (Inherited: 0x0)
struct FPatchVersionExternDiff
{
	enum class ETargetPlatform Platform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FExternFileInfo> AddExternalFiles; // 0x8(0x10)
	struct TArray<struct FExternFileInfo> ModifyExternalFiles; // 0x18(0x10)
	struct TArray<struct FExternFileInfo> DeleteExternalFiles; // 0x28(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformExternFiles
// Size: 0x18 (Inherited: 0x0)
struct FPlatformExternFiles
{
	enum class ETargetPlatform Platform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FExternFileInfo> ExternFiles; // 0x8(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherContext
// Size: 0x58 (Inherited: 0x0)
struct FHotPatcherContext
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
	struct UScopedSlowTaskContext* UnrealPakSlowTask; // 0x40(0x8)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherReleaseContext
// Size: 0x170 (Inherited: 0x58)
struct FHotPatcherReleaseContext : FHotPatcherContext
{
	struct FHotPatcherVersion NewReleaseVersion; // 0x58(0x118)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherPatchContext
// Size: 0x5E0 (Inherited: 0x58)
struct FHotPatcherPatchContext : FHotPatcherContext
{
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
	struct FHotPatcherVersion BaseVersion; // 0x60(0x118)
	struct FHotPatcherVersion CurrentVersion; // 0x178(0x118)
	struct FPatchVersionDiff VersionDiff; // 0x290(0x140)
	struct FHotPatcherVersion NewReleaseVersion; // 0x3D0(0x118)
	struct FChunkInfo NewVersionChunk; // 0x4E8(0x88)
	struct TArray<struct FChunkInfo> PakChunks; // 0x570(0x10)
	struct TArray<struct FPakCommand> AdditionalFileToPak; // 0x580(0x10)
	uint8_t Pad_0x590[0x50]; // 0x590(0x50)
};

} // namespace SDK
