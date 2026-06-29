// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct SpinePlugin.SpineEvent
// Size: 0x30 (Inherited: 0x0)
struct FSpineEvent
{
	struct FString Name; // 0x0(0x10)
	struct FString StringValue; // 0x10(0x10)
	int32_t IntValue; // 0x20(0x4)
	float FloatValue; // 0x24(0x4)
	float Time; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct SpinePlugin.SpineAnimationStateMixData
// Size: 0x28 (Inherited: 0x0)
struct FSpineAnimationStateMixData
{
	struct FString From; // 0x0(0x10)
	struct FString To; // 0x10(0x10)
	float Mix; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

} // namespace SDK
