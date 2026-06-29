// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4
};

// Object: ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size: 0x60 (Inherited: 0x0)
struct FImageWriteOptions
{
	enum class EDesiredImageFormat Format; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FDelegate OnComplete; // 0x4(0x10)
	int32_t CompressionQuality; // 0x14(0x4)
	bool bOverwriteFile; // 0x18(0x1)
	bool bAsync; // 0x19(0x1)
	uint8_t Pad_0x1A[0x46]; // 0x1A(0x46)
};

} // namespace SDK
