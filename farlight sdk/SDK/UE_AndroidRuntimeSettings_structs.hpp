// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum AndroidRuntimeSettings.EClangSanitizer
enum class EClangSanitizer : uint8_t
{
	None = 0,
	Address = 1,
	HwAddress = 2,
	UndefinedBehavior = 3,
	UndefinedBehaviorMinimal = 4,
	EClangSanitizer_MAX = 5
};

// Object: Enum AndroidRuntimeSettings.EAndroidGraphicsDebugger
enum class EAndroidGraphicsDebugger : uint8_t
{
	None = 0,
	Mali = 1,
	Adreno = 2,
	EAndroidGraphicsDebugger_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EGoogleVRCaps
enum class EGoogleVRCaps : uint8_t
{
	Cardboard = 0,
	Daydream33 = 1,
	Daydream63 = 2,
	Daydream66 = 3,
	EGoogleVRCaps_MAX = 4
};

// Object: Enum AndroidRuntimeSettings.EGoogleVRMode
enum class EGoogleVRMode : uint8_t
{
	Cardboard = 0,
	Daydream = 1,
	DaydreamAndCardboard = 2,
	EGoogleVRMode_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EAndroidAudio
enum class EAndroidAudio : uint8_t
{
	Default = 0,
	OGG = 1,
	ADPCM = 2,
	EAndroidAudio_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EOculusMobileDevice
enum class EOculusMobileDevice : uint8_t
{
	GearGo = 0,
	Quest = 1,
	EOculusMobileDevice_MAX = 2
};

// Object: Enum AndroidRuntimeSettings.EAndroidInstallLocation
enum class EAndroidInstallLocation : uint8_t
{
	InternalOnly = 0,
	PreferExternal = 1,
	Auto = 2,
	EAndroidInstallLocation_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EAndroidDepthBufferPreference
enum class EAndroidDepthBufferPreference : uint8_t
{
	Default = 0,
	Bits16 = 16,
	Bits24 = 24,
	Bits32 = 32,
	EAndroidDepthBufferPreference_MAX = 33
};

// Object: Enum AndroidRuntimeSettings.EAndroidScreenOrientation
enum class EAndroidScreenOrientation : uint8_t
{
	Portrait = 0,
	ReversePortrait = 1,
	SensorPortrait = 2,
	Landscape = 3,
	ReverseLandscape = 4,
	SensorLandscape = 5,
	Sensor = 6,
	FullSensor = 7,
	EAndroidScreenOrientation_MAX = 8
};

// Object: ScriptStruct AndroidRuntimeSettings.GooglePlayLeaderboardMapping
// Size: 0x20 (Inherited: 0x0)
struct FGooglePlayLeaderboardMapping
{
	struct FString Name; // 0x0(0x10)
	struct FString LeaderboardID; // 0x10(0x10)
};

// Object: ScriptStruct AndroidRuntimeSettings.GooglePlayAchievementMapping
// Size: 0x20 (Inherited: 0x0)
struct FGooglePlayAchievementMapping
{
	struct FString Name; // 0x0(0x10)
	struct FString AchievementID; // 0x10(0x10)
};

} // namespace SDK
