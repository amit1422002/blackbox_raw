// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum StreamlineBlueprint.EStreamlineFeatureRequirementsFlags
enum class EStreamlineFeatureRequirementsFlags : uint8_t
{
	None = 0,
	D3D11Supported = 1,
	D3D12Supported = 2,
	VulkanSupported = 4,
	VSyncOffRequired = 8,
	HardwareSchedulingRequired = 16,
	EStreamlineFeatureRequirementsFlags_MAX = 17
};

// Object: Enum StreamlineBlueprint.EStreamlineFeatureSupport
enum class EStreamlineFeatureSupport : uint8_t
{
	Supported = 0,
	NotSupported = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedHardewareSchedulingDisabled = 5,
	NotSupportedByRHI = 6,
	NotSupportedByPlatformAtBuildTime = 7,
	NotSupportedIncompatibleAPICaptureToolActive = 8,
	EStreamlineFeatureSupport_MAX = 9
};

// Object: Enum StreamlineBlueprint.EStreamlineFeature
enum class EStreamlineFeature : uint8_t
{
	DLSSG = 0,
	Latewarp = 1,
	Reflex = 2,
	DeepDVC = 3,
	Count = 4,
	EStreamlineFeature_MAX = 5
};

// Object: ScriptStruct StreamlineBlueprint.StreamlineFeatureRequirements
// Size: 0x34 (Inherited: 0x0)
struct FStreamlineFeatureRequirements
{
	enum class EStreamlineFeatureSupport Support; // 0x0(0x1)
	enum class EStreamlineFeatureRequirementsFlags Requirements; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FStreamlineVersion RequiredOperatingSystemVersion; // 0x4(0xC)
	struct FStreamlineVersion DetectedOperatingSystemVersion; // 0x10(0xC)
	struct FStreamlineVersion RequiredDriverVersion; // 0x1C(0xC)
	struct FStreamlineVersion DetectedDriverVersion; // 0x28(0xC)
};

// Object: ScriptStruct StreamlineBlueprint.StreamlineVersion
// Size: 0xC (Inherited: 0x0)
struct FStreamlineVersion
{
	int32_t Major; // 0x0(0x4)
	int32_t Minor; // 0x4(0x4)
	int32_t Build; // 0x8(0x4)
};

} // namespace SDK
