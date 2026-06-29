// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class StreamlineReflexBlueprint.StreamlineLibraryReflex
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibraryReflex : UBlueprintFunctionLibrary
{

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.SetReflexMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38ece40
	// Params: [ Num(1) Size(0x1) ]
	void SetReflexMode(enum class EStreamlineReflexMode Mode);

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.QueryReflexSupport
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38eced8
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineFeatureSupport QueryReflexSupport();

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.IsReflexSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ecf0c
	// Params: [ Num(1) Size(0x1) ]
	bool IsReflexSupported();

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.IsReflexModeSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ecd60
	// Params: [ Num(2) Size(0x2) ]
	bool IsReflexModeSupported(enum class EStreamlineReflexMode ReflexMode);

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.GetSupportedReflexModes
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38eccc4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<enum class EStreamlineReflexMode> GetSupportedReflexModes();

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ecbf4
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderLatencyInMs();

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.GetReflexMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ece0c
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineReflexMode GetReflexMode();

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ecc5c
	// Params: [ Num(1) Size(0x4) ]
	float GetGameToRenderLatencyInMs();

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ecc28
	// Params: [ Num(1) Size(0x4) ]
	float GetGameLatencyInMs();

	// Object: Function StreamlineReflexBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ecc90
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineReflexMode GetDefaultReflexMode();
};

} // namespace SDK
