// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f92c98
	// Params: [ Num(1) Size(0x8) ]
	void SetEyeTrackedPlayer(struct APlayerController* PlayerController);

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f92eb0
	// Params: [ Num(1) Size(0x1) ]
	bool IsStereoGazeDataAvailable();

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f92ee8
	// Params: [ Num(1) Size(0x1) ]
	bool IsEyeTrackerConnected();

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f92d30
	// Params: [ Num(2) Size(0x41) ]
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData);

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f92df0
	// Params: [ Num(2) Size(0x29) ]
	bool GetGazeData(struct FEyeTrackerGazeData& OutGazeData);
};

} // namespace SDK
