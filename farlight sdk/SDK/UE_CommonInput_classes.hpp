// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class CommonInput.CommonUIInputData
// Size: 0x48 (Inherited: 0x28)
struct UCommonUIInputData : UObject
{
	struct FDataTableRowHandle DefaultClickAction; // 0x28(0x10)
	struct FDataTableRowHandle DefaultBackAction; // 0x38(0x10)
};

// Object: Class CommonInput.CommonInputBaseControllerData
// Size: 0x100 (Inherited: 0x28)
struct UCommonInputBaseControllerData : UObject
{
	enum class ECommonInputType InputType; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FName GamepadName; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FText GamepadDisplayName; // 0x38(0x18)
	struct FText GamepadCategory; // 0x50(0x18)
	struct FText GamepadPlatformName; // 0x68(0x18)
	struct TArray<struct FInputDeviceIdentifierPair> GamepadHardwareIdMapping; // 0x80(0x10)
	struct TSoftObjectPtr<UTexture2D> ControllerTexture; // 0x90(0x28)
	struct TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture; // 0xB8(0x28)
	struct TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap; // 0xE0(0x10)
	struct TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets; // 0xF0(0x10)


	// Object: Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x36917b0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetRegisteredGamepads();
};

// Object: Class CommonInput.CommonInputSettings
// Size: 0x110 (Inherited: 0x28)
struct UCommonInputSettings : UObject
{
	struct TSoftClassPtr<struct UCommonUIInputData*> InputData; // 0x28(0x28)
	struct TMap<struct FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData; // 0x50(0x50)
	bool bEnableInputMethodThrashingProtection; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	int32_t InputMethodThrashingLimit; // 0xA4(0x4)
	double InputMethodThrashingWindowInSeconds; // 0xA8(0x8)
	double InputMethodThrashingCooldownInSeconds; // 0xB0(0x8)
	bool bAllowOutOfFocusDeviceInput; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct UCommonUIInputData* InputDataClass; // 0xC0(0x8)
	struct FCommonInputPlatformBaseData CurrentPlatform; // 0xC8(0x48)


	// Object: Function CommonInput.CommonInputSettings.GetRegisteredPlatforms
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x3691b44
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetRegisteredPlatforms();
};

// Object: Class CommonInput.CommonInputSubsystem
// Size: 0xF8 (Inherited: 0x30)
struct UCommonInputSubsystem : ULocalPlayerSubsystem
{
	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x50(0x10)
	int32_t NumberOfInputMethodChangesRecently; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	double LastInputMethodChangeTime; // 0x68(0x8)
	double LastTimeInputMethodThrashingBegan; // 0x70(0x8)
	enum class ECommonInputType LastInputType; // 0x78(0x1)
	enum class ECommonInputType CurrentInputType; // 0x79(0x1)
	uint8_t Pad_0x7A[0x2]; // 0x7A(0x2)
	struct FName GamepadInputType; // 0x7C(0x8)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct TMap<struct FName, enum class ECommonInputType> CurrentInputLocks; // 0x88(0x50)
	uint8_t Pad_0xD8[0x18]; // 0xD8(0x18)
	bool bIsGamepadSimulatedClick; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)


	// Object: Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3691f20
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldShowInputKeys();

	// Object: Function CommonInput.CommonInputSubsystem.SetGamepadInputType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3691f90
	// Params: [ Num(1) Size(0x8) ]
	void SetGamepadInputType(struct FName InGamepadInputType);

	// Object: Function CommonInput.CommonInputSubsystem.SetCurrentInputType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x369206c
	// Params: [ Num(2) Size(0x2) ]
	bool SetCurrentInputType(enum class ECommonInputType NewInputType);

	// Object: Function CommonInput.CommonInputSubsystem.SetCanChangeInputMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3691e70
	// Params: [ Num(1) Size(0x1) ]
	void SetCanChangeInputMethod(bool bCanChange);

	// Object: Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3691f58
	// Params: [ Num(1) Size(0x1) ]
	bool IsUsingPointerInput();

	// Object: Function CommonInput.CommonInputSubsystem.IsInputMethodActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3692188
	// Params: [ Num(2) Size(0x2) ]
	bool IsInputMethodActive(enum class ECommonInputType InputMethod);

	// Object: Function CommonInput.CommonInputSubsystem.GetDefaultInputType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3692120
	// Params: [ Num(1) Size(0x1) ]
	enum class ECommonInputType GetDefaultInputType();

	// Object: Function CommonInput.CommonInputSubsystem.GetCurrentInputType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3692154
	// Params: [ Num(1) Size(0x1) ]
	enum class ECommonInputType GetCurrentInputType();

	// Object: Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3692038
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCurrentGamepadName();
};

} // namespace SDK
