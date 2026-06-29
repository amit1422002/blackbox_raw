// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class BuildPatchServices.BuildPatchManifest
// Size: 0x120 (Inherited: 0x28)
struct UBuildPatchManifest : UObject
{
	uint8_t ManifestFileVersion; // 0x28(0x1)
	bool bIsFileData; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	uint32_t Appid; // 0x2C(0x4)
	struct FString AppName; // 0x30(0x10)
	struct FString BuildVersion; // 0x40(0x10)
	struct FString LaunchExe; // 0x50(0x10)
	struct FString LaunchCommand; // 0x60(0x10)
	struct TSet<struct FString> PrereqIds; // 0x70(0x50)
	struct FString PrereqName; // 0xC0(0x10)
	struct FString PrereqPath; // 0xD0(0x10)
	struct FString PrereqArgs; // 0xE0(0x10)
	struct TArray<struct FFileManifestData> FileManifestList; // 0xF0(0x10)
	struct TArray<struct FChunkInfoData> ChunkList; // 0x100(0x10)
	struct TArray<struct FCustomFieldData> CustomFields; // 0x110(0x10)
};

} // namespace SDK
