// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class OodleHandlerComponent.OodleHandlerComponentFactory
// Size: 0x28 (Inherited: 0x28)
struct UOodleHandlerComponentFactory : UHandlerComponentFactory
{
};

// Object: Class OodleHandlerComponent.OodleTrainerCommandlet
// Size: 0x98 (Inherited: 0x80)
struct UOodleTrainerCommandlet : UCommandlet
{
	bool bCompressionTest; // 0x79(0x1)
	int32_t HashTableSize; // 0x7C(0x4)
	int32_t DictionarySize; // 0x80(0x4)
	int32_t DictionaryTrials; // 0x84(0x4)
	int32_t TrialRandomness; // 0x88(0x4)
	int32_t TrialGenerations; // 0x8C(0x4)
	bool bNoTrials; // 0x90(0x1)
	uint8_t Pad_0x96[0x2]; // 0x96(0x2)
};

} // namespace SDK
