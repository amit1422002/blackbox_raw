// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class XeLLBlueprint.XeLLBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXeLLBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.SetXeLLMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3974200
	// Params: [ Num(1) Size(0x1) ]
	void SetXeLLMode(enum class EXeLLMode Mode);

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.SetFlashIndicatorEnabled
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x397412c
	// Params: [ Num(1) Size(0x1) ]
	void SetFlashIndicatorEnabled(bool bEnabled);

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.IsXeLLSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3974334
	// Params: [ Num(1) Size(0x1) ]
	bool IsXeLLSupported();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetXeLLMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x39741cc
	// Params: [ Num(1) Size(0x1) ]
	enum class EXeLLMode GetXeLLMode();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetSupportedXeLLModes
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3974298
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<enum class EXeLLMode> GetSupportedXeLLModes();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetSimulationLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3974024
	// Params: [ Num(1) Size(0x4) ]
	float GetSimulationLatencyInMs();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetRenderSubmitLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3973ff0
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderSubmitLatencyInMs();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetRenderLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3974058
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderLatencyInMs();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetPresentLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3973fbc
	// Params: [ Num(1) Size(0x4) ]
	float GetPresentLatencyInMs();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetLatencyMarkEnabled
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3973f50
	// Params: [ Num(1) Size(0x1) ]
	bool GetLatencyMarkEnabled();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetInputLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3973f88
	// Params: [ Num(1) Size(0x4) ]
	float GetInputLatencyInMs();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetGameToRenderLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x39740c0
	// Params: [ Num(1) Size(0x4) ]
	float GetGameToRenderLatencyInMs();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetGameLatencyInMs
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x397408c
	// Params: [ Num(1) Size(0x4) ]
	float GetGameLatencyInMs();

	// Object: Function XeLLBlueprint.XeLLBlueprintLibrary.GetFlashIndicatorEnabled
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x39740f4
	// Params: [ Num(1) Size(0x1) ]
	bool GetFlashIndicatorEnabled();
};

} // namespace SDK
