// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2
};

// Object: ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
// Size: 0x10 (Inherited: 0x0)
struct FClothConstraintSetupNv
{
	float Stiffness; // 0x0(0x4)
	float StiffnessMultiplier; // 0x4(0x4)
	float StretchLimit; // 0x8(0x4)
	float CompressionLimit; // 0xC(0x4)
};

} // namespace SDK
