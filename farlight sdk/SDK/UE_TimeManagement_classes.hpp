// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x30 (Inherited: 0x28)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep
{
	struct FFrameRate FixedFrameRate; // 0x28(0x8)
};

// Object: Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0790
	// Params: [ Num(4) Size(0x20) ]
	struct FFrameTime TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0294
	// Params: [ Num(3) Size(0xC) ]
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e045c
	// Params: [ Num(3) Size(0xC) ]
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e062c
	// Params: [ Num(4) Size(0x20) ]
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0c04
	// Params: [ Num(3) Size(0x14) ]
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e01b0
	// Params: [ Num(3) Size(0xC) ]
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e08f4
	// Params: [ Num(3) Size(0x11) ]
	bool IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0a08
	// Params: [ Num(2) Size(0x9) ]
	bool IsValid_Framerate(struct FFrameRate& InFrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x96dff78
	// Params: [ Num(1) Size(0x8) ]
	struct FFrameRate GetTimecodeFrameRate();

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x96dffac
	// Params: [ Num(1) Size(0x14) ]
	struct FTimecode GetTimecode();

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e00cc
	// Params: [ Num(3) Size(0xC) ]
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0ac8
	// Params: [ Num(3) Size(0x28) ]
	struct FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0d00
	// Params: [ Num(2) Size(0x14) ]
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0dc0
	// Params: [ Num(2) Size(0xC) ]
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0018
	// Params: [ Num(2) Size(0x8) ]
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0378
	// Params: [ Num(3) Size(0xC) ]
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x96e0544
	// Params: [ Num(3) Size(0xC) ]
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B);
};

// Object: Class TimeManagement.TimeSynchronizationSource
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynchronizationSource : UObject
{
	bool bUseForSynchronization; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t FrameOffset; // 0x2C(0x4)
};

} // namespace SDK
