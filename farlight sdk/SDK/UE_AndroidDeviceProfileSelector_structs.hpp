// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum AndroidDeviceProfileSelector.ECompareType
enum class ECompareType : uint8_t
{
	CMP_Equal = 0,
	CMP_Less = 1,
	CMP_LessEqual = 2,
	CMP_Greater = 3,
	CMP_GreaterEqual = 4,
	CMP_NotEqual = 5,
	CMP_Regex = 6,
	CMP_EqualIgnore = 7,
	CMP_LessIgnore = 8,
	CMP_LessEqualIgnore = 9,
	CMP_GreaterIgnore = 10,
	CMP_GreaterEqualIgnore = 11,
	CMP_NotEqualIgnore = 12,
	CMP_Hash = 13,
	CMP_MAX = 14
};

// Object: Enum AndroidDeviceProfileSelector.ESourceType
enum class ESourceType : uint8_t
{
	SRC_PreviousRegexMatch = 0,
	SRC_GpuFamily = 1,
	SRC_GlVersion = 2,
	SRC_AndroidVersion = 3,
	SRC_DeviceMake = 4,
	SRC_DeviceModel = 5,
	SRC_DeviceBuildNumber = 6,
	SRC_VulkanVersion = 7,
	SRC_UsingHoudini = 8,
	SRC_VulkanAvailable = 9,
	SRC_CommandLine = 10,
	SRC_Hardware = 11,
	SRC_Chipset = 12,
	SRC_MAX = 13
};

// Object: ScriptStruct AndroidDeviceProfileSelector.JavaSurfaceViewDevice
// Size: 0x20 (Inherited: 0x0)
struct FJavaSurfaceViewDevice
{
	struct FString Manufacturer; // 0x0(0x10)
	struct FString Model; // 0x10(0x10)
};

// Object: ScriptStruct AndroidDeviceProfileSelector.ProfileMatch
// Size: 0x20 (Inherited: 0x0)
struct FProfileMatch
{
	struct FString Profile; // 0x0(0x10)
	struct TArray<struct FProfileMatchItem> Match; // 0x10(0x10)
};

// Object: ScriptStruct AndroidDeviceProfileSelector.ProfileMatchItem
// Size: 0x18 (Inherited: 0x0)
struct FProfileMatchItem
{
	uint8_t SourceType; // 0x0(0x1)
	uint8_t CompareType; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FString MatchString; // 0x8(0x10)
};

} // namespace SDK
