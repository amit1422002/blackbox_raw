// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class DLSSBlueprint.DLSSLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDLSSLibrary : UBlueprintFunctionLibrary
{

	// Object: Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38e7384
	// Params: [ Num(1) Size(0x4) ]
	void SetDLSSSharpness(float Sharpness);

	// Object: Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38e751c
	// Params: [ Num(2) Size(0x9) ]
	void SetDLSSMode(struct UObject* WorldContextObject, enum class EUDLSSMode DLSSMode);

	// Object: Function DLSSBlueprint.DLSSLibrary.SetCurrentDesiredResolutionFraction
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38e7484
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentDesiredResolutionFraction(float Fraction);

	// Object: Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7fcc
	// Params: [ Num(1) Size(0x1) ]
	enum class EUDLSSSupport QueryDLSSSupport();

	// Object: Function DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7f98
	// Params: [ Num(1) Size(0x1) ]
	enum class EUDLSSSupport QueryDLSSRRSupport();

	// Object: Function DLSSBlueprint.DLSSLibrary.IsRayTracingAvailable
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e79a0
	// Params: [ Num(1) Size(0x1) ]
	bool IsRayTracingAvailable();

	// Object: Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e8038
	// Params: [ Num(1) Size(0x1) ]
	bool IsDLSSSupported();

	// Object: Function DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e8000
	// Params: [ Num(1) Size(0x1) ]
	bool IsDLSSRRSupported();

	// Object: Function DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7bf8
	// Params: [ Num(1) Size(0x1) ]
	bool IsDLSSRREnabled();

	// Object: Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7a74
	// Params: [ Num(2) Size(0x2) ]
	bool IsDLSSModeSupported(enum class EUDLSSMode DLSSMode);

	// Object: Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7cd0
	// Params: [ Num(1) Size(0x1) ]
	bool IsDLSSEnabled();

	// Object: Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7b20
	// Params: [ Num(1) Size(0x1) ]
	bool IsDLAAEnabled();

	// Object: Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e79d8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<enum class EUDLSSMode> GetSupportedDLSSModes();

	// Object: Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7350
	// Params: [ Num(1) Size(0x4) ]
	float GetDLSSSharpness();

	// Object: Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e75f4
	// Params: [ Num(2) Size(0x8) ]
	void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);

	// Object: Function DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7da8
	// Params: [ Num(2) Size(0x8) ]
	void GetDLSSRRMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);

	// Object: Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e76ec
	// Params: [ Num(8) Size(0x24) ]
	void GetDLSSModeInformation(enum class EUDLSSMode DLSSMode, struct FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);

	// Object: Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e741c
	// Params: [ Num(1) Size(0x1) ]
	enum class EUDLSSMode GetDLSSMode();

	// Object: Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e7ea0
	// Params: [ Num(2) Size(0x8) ]
	void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);

	// Object: Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38e731c
	// Params: [ Num(1) Size(0x1) ]
	enum class EUDLSSMode GetDefaultDLSSMode();

	// Object: Function DLSSBlueprint.DLSSLibrary.GetCurrentDesiredResolutionFraction
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38e7450
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentDesiredResolutionFraction();

	// Object: Function DLSSBlueprint.DLSSLibrary.EnableDLSSRR
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38e7c30
	// Params: [ Num(1) Size(0x1) ]
	void EnableDLSSRR(bool bEnabled);

	// Object: Function DLSSBlueprint.DLSSLibrary.EnableDLSS
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38e7d08
	// Params: [ Num(1) Size(0x1) ]
	void EnableDLSS(bool bEnabled);

	// Object: Function DLSSBlueprint.DLSSLibrary.EnableDLAA
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38e7b58
	// Params: [ Num(1) Size(0x1) ]
	void EnableDLAA(bool bEnabled);
};

} // namespace SDK
