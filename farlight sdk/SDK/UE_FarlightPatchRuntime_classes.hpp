// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class FarlightPatchRuntime.PakHelper
// Size: 0x28 (Inherited: 0x28)
struct UPakHelper : UObject
{

	// Object: Function FarlightPatchRuntime.PakHelper.UpdateConfigValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdbf68
	// Params: [ Num(5) Size(0x41) ]
	bool UpdateConfigValue(struct FString StrippedConfigFileName, struct FString Section, struct FString Key, struct FString NewValue);

	// Object: Function FarlightPatchRuntime.PakHelper.SetSkipDelBroad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdbb2c
	// Params: [ Num(1) Size(0x1) ]
	void SetSkipDelBroad(bool bInSkipDelBroad);

	// Object: Function FarlightPatchRuntime.PakHelper.ReloadRedirectSettingsFromIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdbcb8
	// Params: [ Num(1) Size(0x10) ]
	void ReloadRedirectSettingsFromIni(struct FString IniPath);

	// Object: Function FarlightPatchRuntime.PakHelper.ReloadIniFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdc104
	// Params: [ Num(3) Size(0x21) ]
	bool ReloadIniFile(struct FString StrippedConfigFileName, struct FString FilePath);

	// Object: Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdbd5c
	// Params: [ Num(0) Size(0x0) ]
	void ReloadGameUserSettings();

	// Object: Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdbd70
	// Params: [ Num(0) Size(0x0) ]
	void ReloadDeviceProfiles();

	// Object: Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdbd84
	// Params: [ Num(0) Size(0x0) ]
	void ReloadCVarSettingsFromIni();

	// Object: Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5cdc208
	// Params: [ Num(3) Size(0x21) ]
	void OpenShaderPatchLibrary(struct FString ShaderPatchLibraryName, struct FString LibraryDir, bool& bShaderPatchLibUnique);

	// Object: Function FarlightPatchRuntime.PakHelper.MountPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdc3e0
	// Params: [ Num(3) Size(0x15) ]
	bool MountPak(struct FString InPakFilename, int32_t PakOrder);

	// Object: Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdbbcc
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetStrippedConfigFileName(struct FString IniName);

	// Object: Function FarlightPatchRuntime.PakHelper.GetProjectName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdc344
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetProjectName();

	// Object: Function FarlightPatchRuntime.PakHelper.CreatePakWriter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdc4d8
	// Params: [ Num(3) Size(0x28) ]
	struct UPakWriter* CreatePakWriter(struct FString InFilename, struct FString InMountPoint);

	// Object: Function FarlightPatchRuntime.PakHelper.CreatePakReader
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdc5d8
	// Params: [ Num(3) Size(0x20) ]
	struct UPakReader* CreatePakReader(struct FString InFilename, bool bLoadIndex);

	// Object: Function FarlightPatchRuntime.PakHelper.ClearPakFileCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5cdbb18
	// Params: [ Num(0) Size(0x0) ]
	void ClearPakFileCache();

	// Object: Function FarlightPatchRuntime.PakHelper.AddConfigValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5cdbd98
	// Params: [ Num(5) Size(0x41) ]
	bool AddConfigValue(struct FString StrippedConfigFileName, struct FString Section, struct FString Key, struct TArray<struct FString>& NewValue);
};

// Object: Class FarlightPatchRuntime.PakReader
// Size: 0x50 (Inherited: 0x28)
struct UPakReader : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)


	// Object: Function FarlightPatchRuntime.PakReader.GetTotalSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5cdceb4
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetTotalSize();

	// Object: Function FarlightPatchRuntime.PakReader.GetPakIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5cdced0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FPakEntryInfo> GetPakIndex();

	// Object: Function FarlightPatchRuntime.PakReader.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5cdcfec
	// Params: [ Num(0) Size(0x0) ]
	void Close();
};

// Object: Class FarlightPatchRuntime.PakWriter
// Size: 0xC0 (Inherited: 0x28)
struct UPakWriter : UObject
{
	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
};

} // namespace SDK
