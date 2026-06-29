// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ImgMediaFactory.ImgMediaSettings
// Size: 0x68 (Inherited: 0x28)
struct UImgMediaSettings : UObject
{
	struct FFrameRate DefaultFrameRate; // 0x28(0x8)
	float CacheBehindPercentage; // 0x30(0x4)
	float CacheSizeGB; // 0x34(0x4)
	int32_t CacheThreads; // 0x38(0x4)
	int32_t CacheThreadStackSizeKB; // 0x3C(0x4)
	float GlobalCacheSizeGB; // 0x40(0x4)
	bool UseGlobalCache; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	uint32_t ExrDecoderThreads; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FString DefaultProxy; // 0x50(0x10)
	bool UseDefaultProxy; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

} // namespace SDK
