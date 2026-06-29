// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct EventTimeline.EventTimelineConfigData
// Size: 0x10 (Inherited: 0x0)
struct FEventTimelineConfigData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float StartTime; // 0x8(0x4)
	float RandomDelayTime; // 0xC(0x4)
};

// Object: ScriptStruct EventTimeline.EventTimelineConfigRandomData
// Size: 0x78 (Inherited: 0x10)
struct FEventTimelineConfigRandomData : FEventTimelineConfigData
{
	struct FSoftClassPath RandomWidgetFormula; // 0x10(0x18)
	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
};

// Object: ScriptStruct EventTimeline.EventTimelineConfigRandomDataEvent
// Size: 0x18 (Inherited: 0x0)
struct FEventTimelineConfigRandomDataEvent
{
	int32_t Widget; // 0x0(0x4)
	uint8_t Pad_0x4[0x14]; // 0x4(0x14)
};

// Object: ScriptStruct EventTimeline.EventTimelineConfigNormalData
// Size: 0x20 (Inherited: 0x10)
struct FEventTimelineConfigNormalData : FEventTimelineConfigData
{
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct EventTimeline.EventTimelineExecutorData
// Size: 0x10 (Inherited: 0x0)
struct FEventTimelineExecutorData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float StartTime; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct EventTimeline.EventTimelineInitializeData
// Size: 0x20 (Inherited: 0x0)
struct FEventTimelineInitializeData
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct EventTimeline.SubclassOfEventTimelineExecutor
// Size: 0x20 (Inherited: 0x0)
struct FSubclassOfEventTimelineExecutor
{
	struct FName ExecutorType; // 0x0(0x8)
	struct FSoftClassPath ExecutorClass; // 0x8(0x18)
};

} // namespace SDK
