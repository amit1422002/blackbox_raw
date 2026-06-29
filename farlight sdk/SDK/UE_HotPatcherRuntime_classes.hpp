// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class HotPatcherRuntime.FlibAssetManageHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibAssetManageHelper : UBlueprintFunctionLibrary
{

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.SaveStringToFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d03c18
	// Params: [ Num(3) Size(0x21) ]
	bool SaveStringToFile(struct FString InFile, struct FString inString);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.PackagePathToFilename
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d04e84
	// Params: [ Num(2) Size(0x20) ]
	struct FString PackagePathToFilename(struct FString InPackagePath);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.ModuleIsEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0373c
	// Params: [ Num(2) Size(0x11) ]
	bool ModuleIsEnabled(struct FString InModuleName);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.LongPackageNameToPackagePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d04c88
	// Params: [ Num(2) Size(0x20) ]
	struct FString LongPackageNameToPackagePath(struct FString InLongPackageName);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.LoadFileToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d03b08
	// Params: [ Num(3) Size(0x21) ]
	bool LoadFileToString(struct FString InFile, struct FString& OutString);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.GetSpecifyAssetDetail
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5d0457c
	// Params: [ Num(3) Size(0x29) ]
	bool GetSpecifyAssetDetail(struct FString InLongPackageName, struct FAssetDetail& OutAssetDetail);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.GetRedirectorList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5d04684
	// Params: [ Num(3) Size(0x21) ]
	bool GetRedirectorList(struct TArray<struct FString>& InFilterPackagePaths, struct TArray<struct FAssetDetail>& OutRedirector);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.GetPluginModuleAbsDir
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0351c
	// Params: [ Num(3) Size(0x21) ]
	bool GetPluginModuleAbsDir(struct FString InPluginModuleName, struct FString& OutPath);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.GetModuleNameByRelativePath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d037f4
	// Params: [ Num(3) Size(0x21) ]
	bool GetModuleNameByRelativePath(struct FString InRelativePath, struct FString& OutModuleName);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.GetEnableModuleAbsDir
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0362c
	// Params: [ Num(3) Size(0x21) ]
	bool GetEnableModuleAbsDir(struct FString InModuleName, struct FString& OutPath);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetReferenceEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5d047cc
	// Params: [ Num(4) Size(0x39) ]
	bool GetAssetReferenceEx(struct FAssetDetail& InAsset, struct TArray<enum class EAssetRegistryDependencyTypeEx>& SearchAssetDepTypes, struct TArray<struct FAssetDetail>& OutRefAsset);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetPackageGUID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d04b84
	// Params: [ Num(3) Size(0x19) ]
	bool GetAssetPackageGUID(struct FString InPackagePath, struct FName& OutGUID);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.GetAllEnabledModuleName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d03904
	// Params: [ Num(1) Size(0x50) ]
	void GetAllEnabledModuleName(struct TMap<struct FString, struct FString>& OutModules);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.FindFilesRecursive
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d03398
	// Params: [ Num(4) Size(0x22) ]
	bool FindFilesRecursive(struct FString InStartDir, struct TArray<struct FString>& OutFileList, bool InRecursive);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssetsWithIgnoreFilter
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5d04210
	// Params: [ Num(4) Size(0x40) ]
	void FilterNoRefAssetsWithIgnoreFilter(struct TArray<struct FAssetDetail>& InAssetsDetail, struct TArray<struct FString>& InIgnoreFilters, struct TArray<struct FAssetDetail>& OutHasRefAssetsDetail, struct TArray<struct FAssetDetail>& OutDontHasRefAssetsDetail);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssets
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5d0440c
	// Params: [ Num(3) Size(0x30) ]
	void FilterNoRefAssets(struct TArray<struct FAssetDetail>& InAssetsDetail, struct TArray<struct FAssetDetail>& OutHasRefAssetsDetail, struct TArray<struct FAssetDetail>& OutDontHasRefAssetsDetail);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.FilenameToPackagePath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d04d74
	// Params: [ Num(3) Size(0x21) ]
	bool FilenameToPackagePath(struct FString InAbsPath, struct FString& OutPackagePath);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.ExportCookPakCommandToFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d03d1c
	// Params: [ Num(3) Size(0x21) ]
	bool ExportCookPakCommandToFile(struct TArray<struct FString>& InCommand, struct FString InFile);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.ConvRelativeDirToAbsDir
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d039f8
	// Params: [ Num(3) Size(0x21) ]
	bool ConvRelativeDirToAbsDir(struct FString InRelativePath, struct FString& OutAbsPath);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.ConvLongPackageNameToCookedPath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d03e58
	// Params: [ Num(6) Size(0x51) ]
	bool ConvLongPackageNameToCookedPath(struct FString InProjectAbsDir, struct FString InPlatformName, struct FString InLongPackageName, struct TArray<struct FString>& OutCookedAssetPath, struct TArray<struct FString>& OutCookedAssetRelativePath);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetsDetailAsFAssetDepenInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5d040ac
	// Params: [ Num(3) Size(0x61) ]
	bool CombineAssetsDetailAsFAssetDepenInfo(struct TArray<struct FAssetDetail>& InAssetsDetailList, struct FAssetDependenciesInfo& OutAssetInfo);

	// Object: Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetDependencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5d04948
	// Params: [ Num(3) Size(0xF0) ]
	struct FAssetDependenciesInfo CombineAssetDependencies(struct FAssetDependenciesInfo& A, struct FAssetDependenciesInfo& B);
};

// Object: Class HotPatcherRuntime.FlibPakHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibPakHelper : UBlueprintFunctionLibrary
{

	// Object: Function HotPatcherRuntime.FlibPakHelper.UnMountPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0d328
	// Params: [ Num(2) Size(0x11) ]
	bool UnMountPak(struct FString PakPath);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanPlatformDirectory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0cfbc
	// Params: [ Num(6) Size(0x29) ]
	bool ScanPlatformDirectory(struct FString InRelativePath, bool bIncludeFile, bool bIncludeDir, bool bRecursively, struct TArray<struct FString>& OutResault);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanExtenPakFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0cc18
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> ScanExtenPakFiles();

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesInDirectory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0cdf0
	// Params: [ Num(5) Size(0x39) ]
	bool ScanExtenFilesInDirectory(struct FString InRelativePath, struct FString InExtenPostfix, bool InRecursively, struct TArray<struct FString>& OutFiles);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanAllVersionDescribleFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0cd04
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> ScanAllVersionDescribleFiles();

	// Object: Function HotPatcherRuntime.FlibPakHelper.ReloadShaderbytecode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0c9ac
	// Params: [ Num(0) Size(0x0) ]
	void ReloadShaderbytecode();

	// Object: Function HotPatcherRuntime.FlibPakHelper.OpenPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0c9c0
	// Params: [ Num(2) Size(0x11) ]
	bool OpenPSO(struct FString Name);

	// Object: Function HotPatcherRuntime.FlibPakHelper.MountPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0d3e0
	// Params: [ Num(4) Size(0x29) ]
	bool MountPak(struct FString PakPath, int32_t PakOrder, struct FString InMountPoint);

	// Object: Function HotPatcherRuntime.FlibPakHelper.LoadShaderbytecode
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0c8a8
	// Params: [ Num(3) Size(0x21) ]
	bool LoadShaderbytecode(struct FString LibraryName, struct FString LibraryDir);

	// Object: Function HotPatcherRuntime.FlibPakHelper.LoadAssetRegistry
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0c700
	// Params: [ Num(3) Size(0x21) ]
	bool LoadAssetRegistry(struct FString LibraryName, struct FString LibraryDir);

	// Object: Function HotPatcherRuntime.FlibPakHelper.GetPakOrderByPakPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0ca78
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetPakOrderByPakPath(struct FString PakFile);

	// Object: Function HotPatcherRuntime.FlibPakHelper.GetAllMountedPaks
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0cb2c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetAllMountedPaks();

	// Object: Function HotPatcherRuntime.FlibPakHelper.ExecMountPak
	// Flags: [Final|Exec|Native|Static|Public]
	// Offset: 0x5d0d524
	// Params: [ Num(3) Size(0x28) ]
	void ExecMountPak(struct FString InPakPath, int32_t InPakOrder, struct FString InMountPoint);

	// Object: Function HotPatcherRuntime.FlibPakHelper.CreateFileByBytes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0d1d4
	// Params: [ Num(4) Size(0x25) ]
	bool CreateFileByBytes(struct FString InFile, struct TArray<uint8_t>& InBytes, int32_t InWriteFlag);

	// Object: Function HotPatcherRuntime.FlibPakHelper.CloseShaderbytecode
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0c804
	// Params: [ Num(1) Size(0x10) ]
	void CloseShaderbytecode(struct FString LibraryName);
};

// Object: Class HotPatcherRuntime.FlibPatchParserHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibPatchParserHelper : UBlueprintFunctionLibrary
{

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.ReloadShaderbytecode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0dec8
	// Params: [ Num(0) Size(0x0) ]
	void ReloadShaderbytecode();

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.LoadShaderbytecode
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0ddc4
	// Params: [ Num(3) Size(0x21) ]
	bool LoadShaderbytecode(struct FString LibraryName, struct FString LibraryDir);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.HashStringWithSHA1
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0e464
	// Params: [ Num(2) Size(0x20) ]
	struct FString HashStringWithSHA1(struct FString inString);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0f520
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetProjectName();

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectIniFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0e154
	// Params: [ Num(3) Size(0x30) ]
	struct TArray<struct FString> GetProjectIniFiles(struct FString InProjectDir, struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectFilePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0f484
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetProjectFilePath();

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetPakFileInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0eae8
	// Params: [ Num(3) Size(0x39) ]
	bool GetPakFileInfo(struct FString InFile, struct FPakFileInfo& OutFileInfo);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetIniConfigs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0e2dc
	// Params: [ Num(3) Size(0x30) ]
	struct TArray<struct FString> GetIniConfigs(struct FString InSearchDir, struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetEngineConfigs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0e018
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FString> GetEngineConfigs(struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetEnabledPluginConfigs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0dedc
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FString> GetEnabledPluginConfigs(struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedShaderBytecodeFiles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0e550
	// Params: [ Num(7) Size(0x49) ]
	bool GetCookedShaderBytecodeFiles(struct FString InProjectAbsDir, struct FString InProjectName, struct FString InPlatformName, bool InGalobalBytecode, bool InProjectBytecode, struct TArray<struct FString>& OutFiles);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedGlobalShaderCacheFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0e960
	// Params: [ Num(3) Size(0x30) ]
	struct TArray<struct FString> GetCookedGlobalShaderCacheFiles(struct FString InProjectDir, struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedAssetRegistryFiles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0e7b8
	// Params: [ Num(5) Size(0x41) ]
	bool GetCookedAssetRegistryFiles(struct FString InProjectAbsDir, struct FString InProjectName, struct FString InPlatformName, struct FString& OutFiles);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetAvailableMaps
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0f5bc
	// Params: [ Num(5) Size(0x28) ]
	struct TArray<struct FString> GetAvailableMaps(struct FString GameName, bool IncludeEngineMaps, bool IncludePluginMaps, bool Sorted);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetAllExFilesByPlatform
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5d0ec0c
	// Params: [ Num(3) Size(0x48) ]
	struct FPlatformExternFiles GetAllExFilesByPlatform(struct FPlatformExternAssets& InPlatformConf, bool InGeneratedHash);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAssets
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d0f0ec
	// Params: [ Num(6) Size(0x191) ]
	bool DiffVersionAssets(struct FAssetDependenciesInfo& InNewVersion, struct FAssetDependenciesInfo& InBaseVersion, struct FAssetDependenciesInfo& OutAddAsset, struct FAssetDependenciesInfo& OutModifyAsset, struct FAssetDependenciesInfo& OutDeleteAsset);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAllPlatformExFiles
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5d0ee68
	// Params: [ Num(4) Size(0x281) ]
	bool DiffVersionAllPlatformExFiles(struct FHotPatcherVersion& InBaseVersion, struct FHotPatcherVersion& InNewVersion, struct TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff>& OutDiff);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.CloseShaderbytecode
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d0dd20
	// Params: [ Num(1) Size(0x10) ]
	void CloseShaderbytecode(struct FString LibraryName);
};

// Object: Class HotPatcherRuntime.FlibShaderPipelineCacheHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibShaderPipelineCacheHelper : UBlueprintFunctionLibrary
{

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d102b0
	// Params: [ Num(2) Size(0x2) ]
	bool SavePipelineFileCache(enum class EPSOSaveMode Mode);

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.LoadShaderPipelineCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d10410
	// Params: [ Num(2) Size(0x11) ]
	bool LoadShaderPipelineCache(struct FString Name);

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledUsePSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d10110
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnabledUsePSO();

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledSaveBoundPSOLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d100a0
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnabledSaveBoundPSOLog();

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledLogPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d100d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnabledLogPSO();

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableShaderPipelineCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d1035c
	// Params: [ Num(2) Size(0x2) ]
	bool EnableShaderPipelineCache(bool bEnable);

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableSaveBoundPSOLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d10148
	// Params: [ Num(2) Size(0x2) ]
	bool EnableSaveBoundPSOLog(bool bEnable);

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableLogPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5d101fc
	// Params: [ Num(2) Size(0x2) ]
	bool EnableLogPSO(bool bEnable);
};

// Object: Class HotPatcherRuntime.MountListener
// Size: 0x98 (Inherited: 0x28)
struct UMountListener : UObject
{
	struct FMulticastInlineDelegate OnMountPakDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate OnUnMountPakDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)


	// Object: Function HotPatcherRuntime.MountListener.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d169f0
	// Params: [ Num(0) Size(0x0) ]
	void Init();
};

// Object: Class HotPatcherRuntime.ScopedSlowTaskContext
// Size: 0x30 (Inherited: 0x28)
struct UScopedSlowTaskContext : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

} // namespace SDK
