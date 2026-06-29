// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibraryDLSSG : UBlueprintFunctionLibrary
{

	// Object: Function StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38eb8d0
	// Params: [ Num(1) Size(0x1) ]
	void SetDLSSGMode(enum class EStreamlineDLSSGMode DLSSGMode);

	// Object: Function StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ebab0
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineFeatureSupport QueryDLSSGSupport();

	// Object: Function StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ebae4
	// Params: [ Num(1) Size(0x1) ]
	bool IsDLSSGSupported();

	// Object: Function StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38eba04
	// Params: [ Num(2) Size(0x2) ]
	bool IsDLSSGModeSupported(enum class EStreamlineDLSSGMode DLSSGMode);

	// Object: Function StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38eb968
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<enum class EStreamlineDLSSGMode> GetSupportedDLSSGModes();

	// Object: Function StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38eb89c
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineDLSSGMode GetDLSSGMode();

	// Object: Function StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x38eb770
	// Params: [ Num(2) Size(0x8) ]
	void GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented);

	// Object: Function StreamlineDLSSGBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38eb868
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineDLSSGMode GetDefaultDLSSGMode();
};

} // namespace SDK
