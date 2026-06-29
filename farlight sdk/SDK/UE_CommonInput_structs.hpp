// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8_t
{
	MouseAndKeyboard = 0,
	Gamepad = 1,
	Touch = 2,
	Count = 3,
	ECommonInputType_MAX = 4
};

// Object: ScriptStruct CommonInput.CommonInputPlatformBaseData
// Size: 0x48 (Inherited: 0x0)
struct FCommonInputPlatformBaseData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	bool bSupported; // 0x8(0x1)
	enum class ECommonInputType DefaultInputType; // 0x9(0x1)
	bool bSupportsMouseAndKeyboard; // 0xA(0x1)
	bool bSupportsGamepad; // 0xB(0x1)
	struct FName DefaultGamepadName; // 0xC(0x8)
	bool bCanChangeGamepadType; // 0x14(0x1)
	bool bSupportsTouch; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct TArray<struct TSoftClassPtr<struct UCommonInputBaseControllerData*>> ControllerData; // 0x18(0x10)
	struct TArray<struct UCommonInputBaseControllerData*> ControllerDataClasses; // 0x28(0x10)
	struct TArray<struct FCommonInputControllerSimpleData> ControllerSimpleData; // 0x38(0x10)
};

// Object: ScriptStruct CommonInput.CommonInputControllerSimpleData
// Size: 0x18 (Inherited: 0x0)
struct FCommonInputControllerSimpleData
{
	struct FName GamepadName; // 0x0(0x8)
	struct TArray<struct FInputDeviceIdentifierPair> GamepadHardwareIdMapping; // 0x8(0x10)
};

// Object: ScriptStruct CommonInput.InputDeviceIdentifierPair
// Size: 0x18 (Inherited: 0x0)
struct FInputDeviceIdentifierPair
{
	struct FName InputDeviceName; // 0x0(0x8)
	struct FString HardwareDeviceIdentifier; // 0x8(0x10)
};

// Object: ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
// Size: 0x130 (Inherited: 0x0)
struct FCommonInputKeySetBrushConfiguration
{
	struct TArray<struct FKey> Keys; // 0x0(0x10)
	struct FSlateBrush KeyBrush; // 0x10(0x120)
};

// Object: ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
// Size: 0x140 (Inherited: 0x0)
struct FCommonInputKeyBrushConfiguration
{
	struct FKey Key; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FSlateBrush KeyBrush; // 0x20(0x120)
};

} // namespace SDK
