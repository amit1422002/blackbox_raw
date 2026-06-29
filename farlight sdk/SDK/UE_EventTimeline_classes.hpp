// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class EventTimeline.EventTimelineConfig
// Size: 0xD8 (Inherited: 0x28)
struct UEventTimelineConfig : UObject
{
	uint8_t Pad_0x28[0xB0]; // 0x28(0xB0)
};

// Object: Class EventTimeline.EventTimelineExecutorInterface
// Size: 0x28 (Inherited: 0x28)
struct IEventTimelineExecutorInterface : IInterface
{
};

// Object: Class EventTimeline.EventTimelineModeComponent
// Size: 0x1B8 (Inherited: 0xD8)
struct UEventTimelineModeComponent : UActorComponent
{
	uint8_t Pad_0xD8[0x68]; // 0xD8(0x68)
	struct TMap<struct FName, struct UObject*> ExecutorMap; // 0x140(0x50)
	uint8_t Pad_0x190[0x8]; // 0x190(0x8)
	struct FSoftObjectPath EventTimelineConfigPath; // 0x198(0x18)
	struct UEventTimelineConfig* EventTimelineConfig; // 0x1B0(0x8)


	// Object: Function EventTimeline.EventTimelineModeComponent.OnSetMatchState
	// Flags: [Final|Native|Private]
	// Offset: 0x5cd5cbc
	// Params: [ Num(1) Size(0x8) ]
	void OnSetMatchState(struct FName NewState);

	// Object: Function EventTimeline.EventTimelineModeComponent.GetTimelineComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5cd5a68
	// Params: [ Num(2) Size(0x10) ]
	struct UEventTimelineModeComponent* GetTimelineComponent(struct UObject* WorldContextObject);

	// Object: Function EventTimeline.EventTimelineModeComponent.GetEventExecutedCount
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5cd5b10
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetEventExecutedCount(struct FName& EventType);

	// Object: Function EventTimeline.EventTimelineModeComponent.CheckEventTimelineEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5cd5c84
	// Params: [ Num(1) Size(0x1) ]
	bool CheckEventTimelineEnabled();

	// Object: Function EventTimeline.EventTimelineModeComponent.BPGetEventExecutor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5cd5bcc
	// Params: [ Num(2) Size(0x18) ]
	struct TScriptInterface<IEventTimelineExecutorInterface> BPGetEventExecutor(struct FName EventType);
};

// Object: Class EventTimeline.EventTimelineSettings
// Size: 0x48 (Inherited: 0x38)
struct UEventTimelineSettings : UDeveloperSettings
{
	struct TArray<struct FSubclassOfEventTimelineExecutor> EventTimelineExecutors; // 0x38(0x10)
};

// Object: Class EventTimeline.RandomEventWidgetFormula
// Size: 0x28 (Inherited: 0x28)
struct URandomEventWidgetFormula : UObject
{

	// Object: Function EventTimeline.RandomEventWidgetFormula.GetRebuildWidget
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5cd6494
	// Params: [ Num(3) Size(0x10) ]
	int32_t GetRebuildWidget(struct FName& EventType, int32_t& RowWidget);
};

} // namespace SDK
