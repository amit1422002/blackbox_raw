// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibraryDeepDVC : UBlueprintFunctionLibrary
{

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCSaturationBoost
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38ee644
	// Params: [ Num(1) Size(0x4) ]
	void SetDeepDVCSaturationBoost(float Intensity);

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38ee810
	// Params: [ Num(1) Size(0x1) ]
	void SetDeepDVCMode(enum class EStreamlineDeepDVCMode DeepDVCMode);

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCIntensity
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38ee710
	// Params: [ Num(1) Size(0x4) ]
	void SetDeepDVCIntensity(float Intensity);

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.QueryDeepDVCSupport
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ee9f0
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineFeatureSupport QueryDeepDVCSupport();

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38eea24
	// Params: [ Num(1) Size(0x1) ]
	bool IsDeepDVCSupported();

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCModeSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ee944
	// Params: [ Num(2) Size(0x2) ]
	bool IsDeepDVCModeSupported(enum class EStreamlineDeepDVCMode DeepDVCMode);

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetSupportedDeepDVCModes
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ee8a8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<enum class EStreamlineDeepDVCMode> GetSupportedDeepDVCModes();

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDefaultDeepDVCMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ee7a8
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineDeepDVCMode GetDefaultDeepDVCMode();

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCSaturationBoost
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ee610
	// Params: [ Num(1) Size(0x4) ]
	float GetDeepDVCSaturationBoost();

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ee7dc
	// Params: [ Num(1) Size(0x1) ]
	enum class EStreamlineDeepDVCMode GetDeepDVCMode();

	// Object: Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCIntensity
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38ee6dc
	// Params: [ Num(1) Size(0x4) ]
	float GetDeepDVCIntensity();
};

} // namespace SDK
