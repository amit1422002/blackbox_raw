// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct ProtectBase.SShotImageInfo2
// Size: 0x90 (Inherited: 0x0)
struct FSShotImageInfo2
{
	struct FString UserId; // 0x0(0x10)
	struct FString PlayerID; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	int64_t ScreenshotTime; // 0x30(0x8)
	int32_t ImageSize; // 0x38(0x4)
	int32_t ImageWidth; // 0x3C(0x4)
	int32_t ImageHeight; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString ImageType; // 0x48(0x10)
	struct FString ImageBuffer; // 0x58(0x10)
	int32_t CaptureFlag; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FString CaptureType; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

} // namespace SDK
