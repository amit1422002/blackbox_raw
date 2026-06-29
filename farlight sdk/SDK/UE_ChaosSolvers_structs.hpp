// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverBreakingFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// Object: ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverCollisionFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
};

// Object: ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverTrailingFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

} // namespace SDK
