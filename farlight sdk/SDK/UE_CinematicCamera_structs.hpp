// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4
};

// Object: ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x50 (Inherited: 0x0)
struct FCameraLookatTrackingSettings
{
	uint8_t bEnableLookAtTracking : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bDrawDebugLookAtTrackingPosition : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float LookAtTrackingInterpSpeed; // 0x4(0x4)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x18(0x28)
	struct FVector RelativeOffset; // 0x40(0xC)
	uint8_t bAllowRoll : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x58 (Inherited: 0x0)
struct FCameraFocusSettings
{
	enum class ECameraFocusMethod FocusMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ManualFocusDistance; // 0x4(0x4)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8(0x38)
	uint8_t bDrawDebugFocusPlane : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FColor DebugFocusPlaneColor; // 0x44(0x4)
	uint8_t bSmoothFocusChanges : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float FocusSmoothingInterpSpeed; // 0x4C(0x4)
	float FocusOffset; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x38 (Inherited: 0x0)
struct FCameraTrackingFocusSettings
{
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x0(0x28)
	struct FVector RelativeOffset; // 0x28(0xC)
	uint8_t bDrawDebugTrackingFocusPoint : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x28 (Inherited: 0x0)
struct FNamedLensPreset
{
	struct FString Name; // 0x0(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x18)
};

// Object: ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x18 (Inherited: 0x0)
struct FCameraLensSettings
{
	float MinFocalLength; // 0x0(0x4)
	float MaxFocalLength; // 0x4(0x4)
	float MinFStop; // 0x8(0x4)
	float MaxFStop; // 0xC(0x4)
	float MinimumFocusDistance; // 0x10(0x4)
	int32_t DiaphragmBladeCount; // 0x14(0x4)
};

// Object: ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size: 0x20 (Inherited: 0x0)
struct FNamedFilmbackPreset
{
	struct FString Name; // 0x0(0x10)
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0xC (Inherited: 0x0)
struct FCameraFilmbackSettings
{
	float SensorWidth; // 0x0(0x4)
	float SensorHeight; // 0x4(0x4)
	float SensorAspectRatio; // 0x8(0x4)
};

} // namespace SDK
