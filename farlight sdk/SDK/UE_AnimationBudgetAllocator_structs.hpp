// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum AnimationBudgetAllocator.ESkeletalMeshAnimDetailMode
enum class ESkeletalMeshAnimDetailMode : uint8_t
{
	SMADM_Low = 0,
	SMADM_Medium = 1,
	SMADM_High = 2,
	SMADM_MAX = 3
};

// Object: ScriptStruct AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
// Size: 0x54 (Inherited: 0x0)
struct FAnimationBudgetAllocatorParameters
{
	float BudgetInMs; // 0x0(0x4)
	float MinQuality; // 0x4(0x4)
	int32_t MaxTickRate; // 0x8(0x4)
	float WorkUnitSmoothingSpeed; // 0xC(0x4)
	float AlwaysTickFalloffAggression; // 0x10(0x4)
	float InterpolationFalloffAggression; // 0x14(0x4)
	int32_t InterpolationMaxRate; // 0x18(0x4)
	int32_t MaxInterpolatedComponents; // 0x1C(0x4)
	float InterpolationTickMultiplier; // 0x20(0x4)
	float InitialEstimatedWorkUnitTimeMs; // 0x24(0x4)
	int32_t MaxTickedOffsreenComponents; // 0x28(0x4)
	int32_t StateChangeThrottleInFrames; // 0x2C(0x4)
	float BudgetFactorBeforeReducedWork; // 0x30(0x4)
	float BudgetFactorBeforeReducedWorkEpsilon; // 0x34(0x4)
	float BudgetPressureSmoothingSpeed; // 0x38(0x4)
	int32_t ReducedWorkThrottleMinInFrames; // 0x3C(0x4)
	int32_t ReducedWorkThrottleMaxInFrames; // 0x40(0x4)
	float BudgetFactorBeforeAggressiveReducedWork; // 0x44(0x4)
	int32_t ReducedWorkThrottleMaxPerFrame; // 0x48(0x4)
	float BudgetPressureBeforeEmergencyReducedWork; // 0x4C(0x4)
	float AlwaysTickSignificanceThreshold; // 0x50(0x4)
};

} // namespace SDK
