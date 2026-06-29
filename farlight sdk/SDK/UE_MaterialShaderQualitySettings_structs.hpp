// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileCSMQuality_MAX = 4
};

// Object: ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x9 (Inherited: 0x0)
struct FMaterialQualityOverrides
{
	bool bDiscardQualityDuringCook; // 0x0(0x1)
	bool bEnableOverride; // 0x1(0x1)
	bool bForceFullyRough; // 0x2(0x1)
	bool bForceNonMetal; // 0x3(0x1)
	bool bForceDisableLMDirectionality; // 0x4(0x1)
	bool bForceLQReflections; // 0x5(0x1)
	bool bForceDisablePreintegratedGF; // 0x6(0x1)
	bool bDisableMaterialNormalCalculation; // 0x7(0x1)
	enum class EMobileCSMQuality MobileCSMQuality; // 0x8(0x1)
};

} // namespace SDK
