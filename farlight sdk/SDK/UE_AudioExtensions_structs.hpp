// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct AudioExtensions.SoundModulationParameter
// Size: 0x14 (Inherited: 0x0)
struct FSoundModulationParameter
{
	struct FName Control; // 0x0(0x8)
	float Value; // 0x8(0x4)
	uint8_t Pad_0xC[0x8]; // 0xC(0x8)
};

// Object: ScriptStruct AudioExtensions.SoundModulation
// Size: 0x10 (Inherited: 0x0)
struct FSoundModulation
{
	struct TArray<struct USoundModulationPluginSourceSettingsBase*> Settings; // 0x0(0x10)
};

} // namespace SDK
