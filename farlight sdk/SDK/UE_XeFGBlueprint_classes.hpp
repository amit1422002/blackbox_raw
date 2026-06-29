// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class XeFGBlueprint.XeFGBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXeFGBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function XeFGBlueprint.XeFGBlueprintLibrary.SetXeFGMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x397559c
	// Params: [ Num(1) Size(0x1) ]
	void SetXeFGMode(enum class EXeFGMode Mode);

	// Object: Function XeFGBlueprint.XeFGBlueprintLibrary.IsXeFGSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3975704
	// Params: [ Num(1) Size(0x1) ]
	bool IsXeFGSupported();

	// Object: Function XeFGBlueprint.XeFGBlueprintLibrary.IfRelaunchRequiredByXeFG
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3975564
	// Params: [ Num(1) Size(0x1) ]
	bool IfRelaunchRequiredByXeFG();

	// Object: Function XeFGBlueprint.XeFGBlueprintLibrary.GetXeFGMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3975634
	// Params: [ Num(1) Size(0x1) ]
	enum class EXeFGMode GetXeFGMode();

	// Object: Function XeFGBlueprint.XeFGBlueprintLibrary.GetSupportedXeFGModes
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3975668
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<enum class EXeFGMode> GetSupportedXeFGModes();
};

} // namespace SDK
