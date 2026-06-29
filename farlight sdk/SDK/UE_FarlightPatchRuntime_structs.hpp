// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct FarlightPatchRuntime.PakEntryInfo
// Size: 0x40 (Inherited: 0x0)
struct FPakEntryInfo
{
	struct FString Filename; // 0x0(0x10)
	struct FString MountPoint; // 0x10(0x10)
	int64_t Size; // 0x20(0x8)
	int64_t Offset; // 0x28(0x8)
	struct FString Hash; // 0x30(0x10)
};

} // namespace SDK
