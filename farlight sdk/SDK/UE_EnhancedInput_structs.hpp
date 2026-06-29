// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum EnhancedInput.EInputActionValueType
enum class EInputActionValueType : uint8_t
{
	Boolean = 0,
	Axis1D = 1,
	Axis2D = 2,
	Axis3D = 3,
	EInputActionValueType_MAX = 4
};

// Object: Enum EnhancedInput.EMappingQueryIssue
enum class EMappingQueryIssue : uint8_t
{
	NoIssue = 0,
	ReservedByAction = 1,
	HidesExistingMapping = 2,
	HiddenByExistingMapping = 4,
	CollisionWithMappingInSameContext = 8,
	ForcesTypePromotion = 16,
	ForcesTypeDemotion = 32,
	EMappingQueryIssue_MAX = 33
};

// Object: Enum EnhancedInput.EMappingQueryResult
enum class EMappingQueryResult : uint8_t
{
	Error_EnhancedInputNotEnabled = 0,
	Error_InputContextNotInActiveContexts = 1,
	Error_InvalidAction = 2,
	NotMappable = 3,
	MappingAvailable = 4,
	EMappingQueryResult_MAX = 5
};

// Object: Enum EnhancedInput.EInputAxisSwizzle
enum class EInputAxisSwizzle : uint8_t
{
	YXZ = 0,
	ZYX = 1,
	XZY = 2,
	YZX = 3,
	ZXY = 4,
	EInputAxisSwizzle_MAX = 5
};

// Object: Enum EnhancedInput.EFOVScalingType
enum class EFOVScalingType : uint8_t
{
	Standard = 0,
	UE4_BackCompat = 1,
	EFOVScalingType_MAX = 2
};

// Object: Enum EnhancedInput.EDeadZoneType
enum class EDeadZoneType : uint8_t
{
	Axial = 0,
	Radial = 1,
	EDeadZoneType_MAX = 2
};

// Object: Enum EnhancedInput.EModifierExecutionPhase
enum class EModifierExecutionPhase : uint8_t
{
	PerInput = 0,
	FinalValue = 1,
	NumPhases = 2,
	EModifierExecutionPhase_MAX = 3
};

// Object: Enum EnhancedInput.ETriggerTypeEx
enum class ETriggerTypeEx : uint8_t
{
	Explicit = 0,
	Implicit = 1,
	Blocker = 2,
	ETriggerTypeEx_MAX = 3
};

// Object: Enum EnhancedInput.ETriggerEvent
enum class ETriggerEvent : uint8_t
{
	None = 0,
	Started = 1,
	Ongoing = 2,
	Canceled = 3,
	Triggered = 4,
	Completed = 5,
	ETriggerEvent_MAX = 6
};

// Object: Enum EnhancedInput.ETriggerState
enum class ETriggerState : uint8_t
{
	None = 0,
	Ongoing = 1,
	Triggered = 2,
	ETriggerState_MAX = 3
};

// Object: ScriptStruct EnhancedInput.InputActionValue
// Size: 0x10 (Inherited: 0x0)
struct FInputActionValue
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct EnhancedInput.EnhancedActionKeyMapping
// Size: 0x48 (Inherited: 0x0)
struct FEnhancedActionKeyMapping
{
	struct UInputAction* Action; // 0x0(0x8)
	struct FKey Key; // 0x8(0x18)
	uint8_t bShouldBeIgnored : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct UInputTrigger*> Triggers; // 0x28(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x38(0x10)
};

// Object: ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
// Size: 0x18 (Inherited: 0x0)
struct FBlueprintEnhancedInputActionBinding
{
	struct UInputAction* InputAction; // 0x0(0x8)
	enum class ETriggerEvent TriggerEvent; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FName FunctionNameToBind; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct EnhancedInput.InputActionInstance
// Size: 0x88 (Inherited: 0x0)
struct FInputActionInstance
{
	struct UInputAction* SourceAction; // 0x0(0x8)
	struct FKey FromKey; // 0x8(0x18)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
	struct TArray<struct UInputTrigger*> Triggers; // 0x28(0x10)
	struct TArray<struct UInputModifier*> Modifiers; // 0x38(0x10)
	struct TArray<struct UInputModifier*> PerInputModifiers; // 0x48(0x10)
	struct TArray<struct UInputModifier*> FinalValueModifiers; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	float ElapsedProcessedTime; // 0x78(0x4)
	float ElapsedTriggeredTime; // 0x7C(0x4)
	enum class ETriggerEvent TriggerEvent; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
};

// Object: ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
// Size: 0x30 (Inherited: 0x0)
struct FBlueprintInputDebugKeyDelegateBinding
{
	struct FInputChord InputChord; // 0x0(0x20)
	uint8_t InputKeyEvent; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FName FunctionNameToBind; // 0x24(0x8)
	bool bExecuteWhenPaused; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct EnhancedInput.MappingQueryIssue
// Size: 0x18 (Inherited: 0x0)
struct FMappingQueryIssue
{
	enum class EMappingQueryIssue Issue; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UInputMappingContext* BlockingContext; // 0x8(0x8)
	struct UInputAction* BlockingAction; // 0x10(0x8)
};

} // namespace SDK
