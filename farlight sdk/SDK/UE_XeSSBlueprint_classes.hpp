// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class XeSSBlueprint.XeSSBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXeSSBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3972cec
	// Params: [ Num(1) Size(0x1) ]
	void SetXeSSQualityMode(enum class EXeSSQualityMode QualityMode);

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3972ef8
	// Params: [ Num(1) Size(0x1) ]
	bool IsXeSSSupported();

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3972bf4
	// Params: [ Num(3) Size(0x9) ]
	bool GetXeSSQualityModeInformation(enum class EXeSSQualityMode QualityMode, float& ScreenPercentage);

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3972e28
	// Params: [ Num(1) Size(0x1) ]
	enum class EXeSSQualityMode GetXeSSQualityMode();

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3972e5c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<enum class EXeSSQualityMode> GetSupportedXeSSQualityModes();

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3972d84
	// Params: [ Num(2) Size(0x9) ]
	enum class EXeSSQualityMode GetDefaultXeSSQualityMode(struct FIntPoint ScreenResolution);
};

} // namespace SDK
