// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SGSRSpatialUpscaling.SGSR_Settings
// Size: 0x30 (Inherited: 0x28)
struct USGSR_Settings : UObject
{
	uint8_t bHalfPrecision : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Target; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

} // namespace SDK
