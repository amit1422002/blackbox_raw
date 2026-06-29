// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum AdaptiveUROManager.ETickOptimizeStrategy
enum class ETickOptimizeStrategy : uint8_t
{
	None = 0,
	URO = 1,
	TickInterval = 2,
	ETickOptimizeStrategy_MAX = 3
};

// Object: ScriptStruct AdaptiveUROManager.AdaptiveUROParameters
// Size: 0x28 (Inherited: 0x0)
struct FAdaptiveUROParameters
{
	enum class ETickOptimizeStrategy TickOptimizeStrategy; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FFrameBasedUROConfig> UROConfig; // 0x8(0x10)
	struct TArray<struct FFrameBasedUROConfig> UROConfig_ForPC; // 0x18(0x10)
};

// Object: ScriptStruct AdaptiveUROManager.FrameBasedUROConfig
// Size: 0x78 (Inherited: 0x0)
struct FFrameBasedUROConfig
{
	float FrameRate; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FUROConfig UROConfig; // 0x8(0x70)
};

// Object: ScriptStruct AdaptiveUROManager.UROConfig
// Size: 0x70 (Inherited: 0x0)
struct FUROConfig
{
	bool bShowUROConfigs; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t MaxEvalRateForInterpolation; // 0x4(0x4)
	int32_t BaseNonRenderedUpdateRate; // 0x8(0x4)
	bool bShouldUseLodMap; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct TArray<float> BaseVisibleDistanceFactorThresholds; // 0x10(0x10)
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x20(0x50)
};

} // namespace SDK
