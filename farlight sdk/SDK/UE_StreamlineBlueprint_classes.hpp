// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class StreamlineBlueprint.StreamlineLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibrary : UBlueprintFunctionLibrary
{

	// Object: Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e9c3c
	// Params: [ Num(2) Size(0x2) ]
	enum class EStreamlineFeatureSupport QueryStreamlineFeatureSupport(enum class EStreamlineFeature Feature);

	// Object: Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e9ce4
	// Params: [ Num(2) Size(0x2) ]
	bool IsStreamlineFeatureSupported(enum class EStreamlineFeature Feature);

	// Object: Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e9fb4
	// Params: [ Num(2) Size(0x38) ]
	struct FStreamlineFeatureRequirements GetStreamlineFeatureInformation(enum class EStreamlineFeature Feature);

	// Object: Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e9d90
	// Params: [ Num(6) Size(0x6) ]
	void BreakStreamlineFeatureRequirements(enum class EStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired);
};

} // namespace SDK
