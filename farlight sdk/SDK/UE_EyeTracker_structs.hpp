// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3
};

// Object: ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// Size: 0x40 (Inherited: 0x0)
struct FEyeTrackerStereoGazeData
{
	struct FVector LeftEyeOrigin; // 0x0(0xC)
	struct FVector LeftEyeDirection; // 0xC(0xC)
	struct FVector RightEyeOrigin; // 0x18(0xC)
	struct FVector RightEyeDirection; // 0x24(0xC)
	struct FVector FixationPoint; // 0x30(0xC)
	float ConfidenceValue; // 0x3C(0x4)
};

// Object: ScriptStruct EyeTracker.EyeTrackerGazeData
// Size: 0x28 (Inherited: 0x0)
struct FEyeTrackerGazeData
{
	struct FVector GazeOrigin; // 0x0(0xC)
	struct FVector GazeDirection; // 0xC(0xC)
	struct FVector FixationPoint; // 0x18(0xC)
	float ConfidenceValue; // 0x24(0x4)
};

} // namespace SDK
