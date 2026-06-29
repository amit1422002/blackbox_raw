// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum UIExtension.EUIExtensionAction
enum class EUIExtensionAction : uint8_t
{
	Added = 0,
	Removed = 1,
	EUIExtensionAction_MAX = 2
};

// Object: Enum UIExtension.EUIExtensionPointMatch
enum class EUIExtensionPointMatch : uint8_t
{
	ExactMatch = 0,
	PartialMatch = 1,
	EUIExtensionPointMatch_MAX = 2
};

// Object: ScriptStruct UIExtension.UIExtensionRequest
// Size: 0x38 (Inherited: 0x0)
struct FUIExtensionRequest
{
	struct FUIExtensionHandle ExtensionHandle; // 0x0(0x18)
	struct FGameplayTag ExtensionPointTag; // 0x18(0x8)
	int32_t Priority; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UObject* Data; // 0x28(0x8)
	struct UObject* ContextObject; // 0x30(0x8)
};

// Object: ScriptStruct UIExtension.UIExtensionHandle
// Size: 0x18 (Inherited: 0x0)
struct FUIExtensionHandle
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct UIExtension.UIExtensionPointHandle
// Size: 0x18 (Inherited: 0x0)
struct FUIExtensionPointHandle
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

} // namespace SDK
