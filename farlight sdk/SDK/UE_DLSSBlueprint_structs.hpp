// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum DLSSBlueprint.UDLSSMode
enum class EUDLSSMode : uint8_t
{
	Off = 0,
	Auto = 1,
	DLAA = 2,
	UltraQuality = 3,
	Quality = 4,
	Balanced = 5,
	Performance = 6,
	UltraPerformance = 7,
	UDLSSMode_MAX = 8
};

// Object: Enum DLSSBlueprint.UDLSSSupport
enum class EUDLSSSupport : uint8_t
{
	Supported = 0,
	NotSupported = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	NotSupportedIncompatibleAPICaptureToolActive = 6,
	UDLSSSupport_MAX = 7
};

} // namespace SDK
