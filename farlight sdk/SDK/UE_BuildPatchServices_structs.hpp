// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct BuildPatchServices.FileManifestData
// Size: 0x68 (Inherited: 0x0)
struct FFileManifestData
{
	struct FString Filename; // 0x0(0x10)
	struct FSHAHashData FileHash; // 0x10(0x14)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FChunkPartData> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x1)
	bool bIsCompressed; // 0x61(0x1)
	uint8_t Pad_0x62[0x6]; // 0x62(0x6)
};

// Object: ScriptStruct BuildPatchServices.ChunkPartData
// Size: 0x18 (Inherited: 0x0)
struct FChunkPartData
{
	struct FGuid Guid; // 0x0(0x10)
	uint32_t Offset; // 0x10(0x4)
	uint32_t Size; // 0x14(0x4)
};

// Object: ScriptStruct BuildPatchServices.SHAHashData
// Size: 0x14 (Inherited: 0x0)
struct FSHAHashData
{
	uint8_t Hash[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct BuildPatchServices.ChunkInfoData
// Size: 0x40 (Inherited: 0x0)
struct FChunkInfoData
{
	struct FGuid Guid; // 0x0(0x10)
	uint64_t Hash; // 0x10(0x8)
	struct FSHAHashData ShaHash; // 0x18(0x14)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t FileSize; // 0x30(0x8)
	uint8_t GroupNumber; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct BuildPatchServices.CustomFieldData
// Size: 0x20 (Inherited: 0x0)
struct FCustomFieldData
{
	struct FString Key; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

} // namespace SDK
