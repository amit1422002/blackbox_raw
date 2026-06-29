// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class EnhancedInput.EnhancedInputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UEnhancedInputActionDelegateBinding : UInputDelegateBinding
{
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Object: Class EnhancedInput.EnhancedInputActionValueBinding
// Size: 0x38 (Inherited: 0x28)
struct UEnhancedInputActionValueBinding : UInputDelegateBinding
{
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings; // 0x28(0x10)
};

// Object: Class EnhancedInput.EnhancedInputComponent
// Size: 0x190 (Inherited: 0x160)
struct UEnhancedInputComponent : UInputComponent
{
	uint8_t Pad_0x160[0x30]; // 0x160(0x30)


	// Object: Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37b059c
	// Params: [ Num(2) Size(0x18) ]
	struct FInputActionValue GetBoundActionValue(struct UInputAction* Action);
};

// Object: Class EnhancedInput.EnhancedInputLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEnhancedInputLibrary : UBlueprintFunctionLibrary
{

	// Object: Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x37b1034
	// Params: [ Num(2) Size(0x9) ]
	void RequestRebuildControlMappingsUsingContext(struct UInputMappingContext* Context, bool bForceImmediately);

	// Object: Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x37b0d04
	// Params: [ Num(5) Size(0x2C) ]
	struct FInputActionValue MakeInputActionValue(float X, float Y, float Z, struct FInputActionValue& MatchValueType);

	// Object: Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x37b0c14
	// Params: [ Num(3) Size(0x20) ]
	struct FInputActionValue GetBoundActionValue(struct AActor* Actor, struct UInputAction* Action);

	// Object: Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x37b0b50
	// Params: [ Num(2) Size(0x11) ]
	bool Conv_InputActionValueToBool(struct FInputActionValue InValue);

	// Object: Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x37b090c
	// Params: [ Num(2) Size(0x1C) ]
	struct FVector Conv_InputActionValueToAxis3D(struct FInputActionValue ActionValue);

	// Object: Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x37b09d0
	// Params: [ Num(2) Size(0x18) ]
	struct FVector2D Conv_InputActionValueToAxis2D(struct FInputActionValue InValue);

	// Object: Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x37b0a90
	// Params: [ Num(2) Size(0x14) ]
	float Conv_InputActionValueToAxis1D(struct FInputActionValue InValue);

	// Object: Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x37b0e98
	// Params: [ Num(4) Size(0x1C) ]
	void BreakInputActionValue(struct FInputActionValue InActionValue, float& X, float& Y, float& Z);
};

// Object: Class EnhancedInput.EnhancedInputSubsystemInterface
// Size: 0x28 (Inherited: 0x28)
struct IEnhancedInputSubsystemInterface : IInterface
{

	// Object: Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x37b1ec8
	// Params: [ Num(1) Size(0x1) ]
	void RequestRebuildControlMappings(bool bForceImmediately);

	// Object: Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x37b1f80
	// Params: [ Num(1) Size(0x8) ]
	void RemoveMappingContext(struct UInputMappingContext* MappingContext);

	// Object: Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37b1904
	// Params: [ Num(7) Size(0x4A) ]
	enum class EMappingQueryResult QueryMapKeyInContextSet(struct TArray<struct UInputMappingContext*>& PrioritizedActiveContexts, struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues);

	// Object: Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37b1c14
	// Params: [ Num(6) Size(0x3A) ]
	enum class EMappingQueryResult QueryMapKeyInActiveContextSet(struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues);

	// Object: Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37b1668
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FKey> QueryKeysMappedToAction(struct UInputAction* Action);

	// Object: Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37b1848
	// Params: [ Num(2) Size(0x9) ]
	bool HasMappingContext(struct UInputMappingContext* MappingContext);

	// Object: Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x37b2120
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllMappings();

	// Object: Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x37b2030
	// Params: [ Num(2) Size(0xC) ]
	void AddMappingContext(struct UInputMappingContext* MappingContext, int32_t Priority);
};

// Object: Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
// Size: 0xE0 (Inherited: 0x30)
struct UEnhancedInputLocalPlayerSubsystem : ULocalPlayerSubsystem
{
	uint8_t Pad_0x30[0xB0]; // 0x30(0xB0)
};

// Object: Class EnhancedInput.EnhancedInputEngineSubsystem
// Size: 0xE8 (Inherited: 0x30)
struct UEnhancedInputEngineSubsystem : UEngineSubsystem
{
	uint8_t Pad_0x30[0xB0]; // 0x30(0xB0)
	struct UEnhancedPlayerInput* PlayerInput; // 0xE0(0x8)
};

// Object: Class EnhancedInput.EnhancedPlayerInput
// Size: 0x608 (Inherited: 0x3A8)
struct UEnhancedPlayerInput : UPlayerInput
{
	struct TMap<struct UInputMappingContext*, int32_t> AppliedInputContexts; // 0x3A8(0x50)
	struct TArray<struct FEnhancedActionKeyMapping> EnhancedActionMappings; // 0x3F8(0x10)
	uint8_t Pad_0x408[0x50]; // 0x408(0x50)
	struct TMap<struct UInputAction*, struct FInputActionInstance> ActionInstanceData; // 0x458(0x50)
	uint8_t Pad_0x4A8[0x160]; // 0x4A8(0x160)
};

// Object: Class EnhancedInput.InputAction
// Size: 0x58 (Inherited: 0x30)
struct UInputAction : UDataAsset
{
	bool bConsumeInput; // 0x30(0x1)
	bool bTriggerWhenPaused; // 0x31(0x1)
	bool bReserveAllMappings; // 0x32(0x1)
	enum class EInputActionValueType ValueType; // 0x33(0x1)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct UInputTrigger*> Triggers; // 0x38(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x48(0x10)
};

// Object: Class EnhancedInput.InputDebugKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputDebugKeyDelegateBinding : UInputDelegateBinding
{
	struct TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings; // 0x28(0x10)
};

// Object: Class EnhancedInput.InputMappingContext
// Size: 0x58 (Inherited: 0x30)
struct UInputMappingContext : UDataAsset
{
	struct TArray<struct FEnhancedActionKeyMapping> Mappings; // 0x30(0x10)
	struct FText ContextDescription; // 0x40(0x18)


	// Object: Function EnhancedInput.InputMappingContext.UnmapKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37b351c
	// Params: [ Num(2) Size(0x20) ]
	void UnmapKey(struct UInputAction* Action, struct FKey Key);

	// Object: Function EnhancedInput.InputMappingContext.UnmapAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37b3460
	// Params: [ Num(0) Size(0x0) ]
	void UnmapAll();

	// Object: Function EnhancedInput.InputMappingContext.UnmapAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37b3474
	// Params: [ Num(1) Size(0x8) ]
	void UnmapAction(struct UInputAction* Action);

	// Object: Function EnhancedInput.InputMappingContext.MapKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37b36e0
	// Params: [ Num(3) Size(0x68) ]
	struct FEnhancedActionKeyMapping MapKey(struct UInputAction* Action, struct FKey ToKey);
};

// Object: Class EnhancedInput.InputModifier
// Size: 0x28 (Inherited: 0x28)
struct UInputModifier : UObject
{

	// Object: Function EnhancedInput.InputModifier.ModifyRaw
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x37b433c
	// Params: [ Num(4) Size(0x2C) ]
	struct FInputActionValue ModifyRaw(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue CurrentValue, float DeltaTime);

	// Object: Function EnhancedInput.InputModifier.GetVisualizationColor
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	// Offset: 0x37b41d4
	// Params: [ Num(3) Size(0x30) ]
	struct FLinearColor GetVisualizationColor(struct FInputActionValue SampleValue, struct FInputActionValue FinalValue);

	// Object: Function EnhancedInput.InputModifier.GetExecutionPhase
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x37b4300
	// Params: [ Num(1) Size(0x1) ]
	enum class EModifierExecutionPhase GetExecutionPhase();
};

// Object: Class EnhancedInput.InputModifierDeadZone
// Size: 0x38 (Inherited: 0x28)
struct UInputModifierDeadZone : UInputModifier
{
	float LowerThreshold; // 0x28(0x4)
	float UpperThreshold; // 0x2C(0x4)
	enum class EDeadZoneType Type; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: Class EnhancedInput.InputModifierScalar
// Size: 0x38 (Inherited: 0x28)
struct UInputModifierScalar : UInputModifier
{
	struct FVector Scalar; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: Class EnhancedInput.InputModifierNegate
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierNegate : UInputModifier
{
	bool bX; // 0x28(0x1)
	bool bY; // 0x29(0x1)
	bool bZ; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
};

// Object: Class EnhancedInput.InputModifierSmooth
// Size: 0x48 (Inherited: 0x28)
struct UInputModifierSmooth : UInputModifier
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: Class EnhancedInput.InputModifierResponseCurveExponential
// Size: 0x38 (Inherited: 0x28)
struct UInputModifierResponseCurveExponential : UInputModifier
{
	struct FVector CurveExponent; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: Class EnhancedInput.InputModifierResponseCurveUser
// Size: 0x40 (Inherited: 0x28)
struct UInputModifierResponseCurveUser : UInputModifier
{
	struct UCurveFloat* ResponseX; // 0x28(0x8)
	struct UCurveFloat* ResponseY; // 0x30(0x8)
	struct UCurveFloat* ResponseZ; // 0x38(0x8)
};

// Object: Class EnhancedInput.InputModifierFOVScaling
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierFOVScaling : UInputModifier
{
	float FOVScale; // 0x28(0x4)
	enum class EFOVScalingType FOVScalingType; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: Class EnhancedInput.InputModifierToWorldSpace
// Size: 0x28 (Inherited: 0x28)
struct UInputModifierToWorldSpace : UInputModifier
{
};

// Object: Class EnhancedInput.InputModifierSwizzleAxis
// Size: 0x30 (Inherited: 0x28)
struct UInputModifierSwizzleAxis : UInputModifier
{
	enum class EInputAxisSwizzle Order; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: Class EnhancedInput.InputModifierCollection
// Size: 0x40 (Inherited: 0x28)
struct UInputModifierCollection : UInputModifier
{
	struct TArray<struct UInputModifier*> Modifiers; // 0x28(0x10)
	bool bPermitValueTypeModification; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: Class EnhancedInput.InputTrigger
// Size: 0x40 (Inherited: 0x28)
struct UInputTrigger : UObject
{
	float ActuationThreshold; // 0x28(0x4)
	struct FInputActionValue LastValue; // 0x2C(0x10)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)


	// Object: Function EnhancedInput.InputTrigger.UpdateState
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x37b5a48
	// Params: [ Num(4) Size(0x1D) ]
	enum class ETriggerState UpdateState(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue ModifiedValue, float DeltaTime);

	// Object: Function EnhancedInput.InputTrigger.IsActuated
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37b5bd4
	// Params: [ Num(2) Size(0x11) ]
	bool IsActuated(struct FInputActionValue& ForValue);

	// Object: Function EnhancedInput.InputTrigger.GetTriggerType
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x37b5b98
	// Params: [ Num(1) Size(0x1) ]
	enum class ETriggerTypeEx GetTriggerType();
};

// Object: Class EnhancedInput.InputTriggerTimedBase
// Size: 0x48 (Inherited: 0x40)
struct UInputTriggerTimedBase : UInputTrigger
{
	float HeldDuration; // 0x3C(0x4)
	bool bAffectedByTimeDilation; // 0x40(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
};

// Object: Class EnhancedInput.InputTriggerDown
// Size: 0x40 (Inherited: 0x40)
struct UInputTriggerDown : UInputTrigger
{
};

// Object: Class EnhancedInput.InputTriggerPressed
// Size: 0x40 (Inherited: 0x40)
struct UInputTriggerPressed : UInputTrigger
{
};

// Object: Class EnhancedInput.InputTriggerReleased
// Size: 0x40 (Inherited: 0x40)
struct UInputTriggerReleased : UInputTrigger
{
};

// Object: Class EnhancedInput.InputTriggerHold
// Size: 0x50 (Inherited: 0x48)
struct UInputTriggerHold : UInputTriggerTimedBase
{
	float HoldTimeThreshold; // 0x44(0x4)
	bool bIsOneShot; // 0x48(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: Class EnhancedInput.InputTriggerHoldAndRelease
// Size: 0x48 (Inherited: 0x48)
struct UInputTriggerHoldAndRelease : UInputTriggerTimedBase
{
	float HoldTimeThreshold; // 0x44(0x4)
};

// Object: Class EnhancedInput.InputTriggerTap
// Size: 0x48 (Inherited: 0x48)
struct UInputTriggerTap : UInputTriggerTimedBase
{
	float TapReleaseTimeThreshold; // 0x44(0x4)
};

// Object: Class EnhancedInput.InputTriggerPulse
// Size: 0x58 (Inherited: 0x48)
struct UInputTriggerPulse : UInputTriggerTimedBase
{
	bool bTriggerOnStart; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float Interval; // 0x4C(0x4)
	int32_t TriggerLimit; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: Class EnhancedInput.InputTriggerChordAction
// Size: 0x48 (Inherited: 0x40)
struct UInputTriggerChordAction : UInputTrigger
{
	struct UInputAction* ChordAction; // 0x40(0x8)
};

// Object: Class EnhancedInput.InputTriggerChordBlocker
// Size: 0x50 (Inherited: 0x48)
struct UInputTriggerChordBlocker : UInputTriggerChordAction
{
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
};

} // namespace SDK
