// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class WinDualShock.WinDualShockFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWinDualShockFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockTriggerModeResistiveSection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df753c
	// Params: [ Num(5) Size(0x20) ]
	void SetDualShockTriggerModeResistiveSection(struct TArray<int32_t> ControllerId, enum class EWinDualShockTriggerType Trigger, float StartPos, float EndPos, float Strength);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockTriggerModePositionTriggeredVibration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df734c
	// Params: [ Num(5) Size(0x20) ]
	void SetDualShockTriggerModePositionTriggeredVibration(struct TArray<int32_t> ControllerId, enum class EWinDualShockTriggerType Trigger, float Frequency, float Amplitude, float StartPos);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockTriggerModeNoFeedback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df78dc
	// Params: [ Num(2) Size(0x11) ]
	void SetDualShockTriggerModeNoFeedback(struct TArray<int32_t> ControllerId, enum class EWinDualShockTriggerType Trigger);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockTriggerModeDualModeFeedback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df6e78
	// Params: [ Num(8) Size(0x2C) ]
	void SetDualShockTriggerModeDualModeFeedback(struct TArray<int32_t> ControllerId, enum class EWinDualShockTriggerType Trigger, float StartStrength, float EndStrength, float Boundary, float LowAmplitude, float HighAmplitude, float Frequency);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockTriggerModeConstantResistance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df772c
	// Params: [ Num(4) Size(0x1C) ]
	void SetDualShockTriggerModeConstantResistance(struct TArray<int32_t> ControllerId, enum class EWinDualShockTriggerType Trigger, float StartPos, float Strength);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockTriggerModeBilinearResistance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df7120
	// Params: [ Num(6) Size(0x24) ]
	void SetDualShockTriggerModeBilinearResistance(struct TArray<int32_t> ControllerId, enum class EWinDualShockTriggerType Trigger, float StartPos, float EndPos, float StartStrength, float EndStrength);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockTriggerModeAmplitudeCyclingVibration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df6c0c
	// Params: [ Num(7) Size(0x28) ]
	void SetDualShockTriggerModeAmplitudeCyclingVibration(struct TArray<int32_t> ControllerId, enum class EWinDualShockTriggerType Trigger, float StartPos, float EndPos, float LowAmplitude, float HighAmplitude, float Frequency);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockPlayerNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df6928
	// Params: [ Num(2) Size(0x14) ]
	void SetDualShockPlayerNumber(struct TArray<int32_t> ControllerId, int32_t PlayerNumber);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.SetDualShockLightColor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5df6a5c
	// Params: [ Num(4) Size(0x16) ]
	void SetDualShockLightColor(struct TArray<int32_t> ControllerId, struct FColor LightColor, enum class EWinDualShockLedBrightness LedBrightness, enum class EWinDualShockLedPulseOption LedPulseOption);

	// Object: Function WinDualShock.WinDualShockFunctionLibrary.GetConnectedControllers
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5df7a10
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetConnectedControllers();
};

} // namespace SDK
