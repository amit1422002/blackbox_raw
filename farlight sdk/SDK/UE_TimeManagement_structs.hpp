// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5
};

// Object: Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3
};

// Object: Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3
};

// Object: ScriptStruct TimeManagement.TimedDataInputEvaluationData
// Size: 0x8 (Inherited: 0x0)
struct FTimedDataInputEvaluationData
{
	float DistanceToNewestSampleSeconds; // 0x0(0x4)
	float DistanceToOldestSampleSeconds; // 0x4(0x4)
};

// Object: ScriptStruct TimeManagement.TimedDataChannelSampleTime
// Size: 0x18 (Inherited: 0x0)
struct FTimedDataChannelSampleTime
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

} // namespace SDK
