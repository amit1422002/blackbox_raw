// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum CommonUI.ECommonNumericType
enum class ECommonNumericType : uint8_t
{
	Number = 0,
	Percentage = 1,
	Seconds = 2,
	Distance = 3,
	ECommonNumericType_MAX = 4
};

// Object: Enum CommonUI.ECommonInputMode
enum class ECommonInputMode : uint8_t
{
	Menu = 0,
	Game = 1,
	All = 2,
	MAX = 3
};

// Object: Enum CommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	IconOnly = 0,
	TextOnly = 1,
	IconAndText = 2,
	MAX = 3
};

// Object: Enum CommonUI.EInputActionState
enum class EInputActionState : uint8_t
{
	Enabled = 0,
	Disabled = 1,
	Hidden = 2,
	HiddenAndDisabled = 3,
	EInputActionState_MAX = 4
};

// Object: Enum CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{
	Linear = 0,
	QuadIn = 1,
	QuadOut = 2,
	QuadInOut = 3,
	CubicIn = 4,
	CubicOut = 5,
	CubicInOut = 6,
	ETransitionCurve_MAX = 7
};

// Object: Enum CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8_t
{
	FadeOnly = 0,
	Horizontal = 1,
	Vertical = 2,
	Zoom = 3,
	ECommonSwitcherTransition_MAX = 4
};

// Object: ScriptStruct CommonUI.CommonNumberFormattingOptions
// Size: 0x14 (Inherited: 0x0)
struct FCommonNumberFormattingOptions
{
	uint8_t RoundingMode; // 0x0(0x1)
	bool UseGrouping; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t MinimumIntegralDigits; // 0x4(0x4)
	int32_t MaximumIntegralDigits; // 0x8(0x4)
	int32_t MinimumFractionalDigits; // 0xC(0x4)
	int32_t MaximumFractionalDigits; // 0x10(0x4)
};

// Object: ScriptStruct CommonUI.CommonRegisteredTabInfo
// Size: 0x18 (Inherited: 0x0)
struct FCommonRegisteredTabInfo
{
	int32_t TabIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UCommonButtonBase* TabButton; // 0x8(0x8)
	struct UWidget* ContentInstance; // 0x10(0x8)
};

// Object: ScriptStruct CommonUI.CommonInputActionHandlerData
// Size: 0x20 (Inherited: 0x0)
struct FCommonInputActionHandlerData
{
	struct FDataTableRowHandle InputActionRow; // 0x0(0x10)
	enum class EInputActionState State; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
};

// Object: ScriptStruct CommonUI.CommonButtonStyleOptionalSlateSound
// Size: 0x20 (Inherited: 0x0)
struct FCommonButtonStyleOptionalSlateSound
{
	bool bHasSound; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FSlateSound Sound; // 0x8(0x18)
};

// Object: ScriptStruct CommonUI.CommonAnalogCursorSettings
// Size: 0x28 (Inherited: 0x0)
struct FCommonAnalogCursorSettings
{
	int32_t PreprocessorPriority; // 0x0(0x4)
	bool bEnableCursorAcceleration; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float CursorAcceleration; // 0x8(0x4)
	float CursorMaxSpeed; // 0xC(0x4)
	float CursorDeadZone; // 0x10(0x4)
	float CursorRadius; // 0x14(0x4)
	float HoverSlowdownFactor; // 0x18(0x4)
	float ScrollDeadZone; // 0x1C(0x4)
	float ScrollUpdatePeriod; // 0x20(0x4)
	float ScrollMultiplier; // 0x24(0x4)
};

// Object: ScriptStruct CommonUI.UIInputAction
// Size: 0x30 (Inherited: 0x0)
struct FUIInputAction
{
	struct FUIActionTag ActionTag; // 0x0(0x8)
	struct FText DefaultDisplayName; // 0x8(0x18)
	struct TArray<struct FUIActionKeyMapping> KeyMappings; // 0x20(0x10)
};

// Object: ScriptStruct CommonUI.UIActionKeyMapping
// Size: 0x20 (Inherited: 0x0)
struct FUIActionKeyMapping
{
	struct FKey Key; // 0x0(0x18)
	float HoldTime; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct CommonUI.UITag
// Size: 0x8 (Inherited: 0x8)
struct FUITag : FGameplayTag
{
};

// Object: ScriptStruct CommonUI.UIActionTag
// Size: 0x8 (Inherited: 0x8)
struct FUIActionTag : FUITag
{
};

// Object: ScriptStruct CommonUI.RichTextIconData
// Size: 0x50 (Inherited: 0x8)
struct FRichTextIconData : FTableRowBase
{
	struct FText DisplayName; // 0x8(0x18)
	struct TSoftObjectPtr<UObject> ResourceObject; // 0x20(0x28)
	struct FVector2D ImageSize; // 0x48(0x8)
};

// Object: ScriptStruct CommonUI.CommonInputActionDataBase
// Size: 0x450 (Inherited: 0x8)
struct FCommonInputActionDataBase : FTableRowBase
{
	struct FText DisplayName; // 0x8(0x18)
	struct FText HoldDisplayName; // 0x20(0x18)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FCommonInputTypeInfo KeyboardInputTypeInfo; // 0x40(0x140)
	struct FCommonInputTypeInfo DefaultGamepadInputTypeInfo; // 0x180(0x140)
	struct TMap<struct FName, struct FCommonInputTypeInfo> GamepadInputOverrides; // 0x2C0(0x50)
	struct FCommonInputTypeInfo TouchInputTypeInfo; // 0x310(0x140)
};

// Object: ScriptStruct CommonUI.CommonInputTypeInfo
// Size: 0x140 (Inherited: 0x0)
struct FCommonInputTypeInfo
{
	struct FKey Key; // 0x0(0x18)
	enum class EInputActionState OverrrideState; // 0x18(0x1)
	bool bActionRequiresHold; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	float HoldTime; // 0x1C(0x4)
	struct FSlateBrush OverrideBrush; // 0x20(0x120)
};

} // namespace SDK
