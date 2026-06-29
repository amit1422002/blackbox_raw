// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class CinematicCamera.CameraRig_Crane
// Size: 0x310 (Inherited: 0x2E0)
struct ACameraRig_Crane : AActor
{
	float CranePitch; // 0x2E0(0x4)
	float CraneYaw; // 0x2E4(0x4)
	float CraneArmLength; // 0x2E8(0x4)
	bool bLockMountPitch; // 0x2EC(0x1)
	bool bLockMountYaw; // 0x2ED(0x1)
	uint8_t Pad_0x2EE[0x2]; // 0x2EE(0x2)
	struct USceneComponent* TransformComponent; // 0x2F0(0x8)
	struct USceneComponent* CraneYawControl; // 0x2F8(0x8)
	struct USceneComponent* CranePitchControl; // 0x300(0x8)
	struct USceneComponent* CraneCameraMount; // 0x308(0x8)
};

// Object: Class CinematicCamera.CameraRig_Rail
// Size: 0x300 (Inherited: 0x2E0)
struct ACameraRig_Rail : AActor
{
	float CurrentPositionOnRail; // 0x2E0(0x4)
	bool bLockOrientationToRail; // 0x2E4(0x1)
	uint8_t Pad_0x2E5[0x3]; // 0x2E5(0x3)
	struct USceneComponent* TransformComponent; // 0x2E8(0x8)
	struct USplineComponent* RailSplineComponent; // 0x2F0(0x8)
	struct USceneComponent* RailCameraMount; // 0x2F8(0x8)


	// Object: Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x99a78d8
	// Params: [ Num(1) Size(0x8) ]
	struct USplineComponent* GetRailSplineComponent();
};

// Object: Class CinematicCamera.CineCameraActor
// Size: 0x970 (Inherited: 0x910)
struct ACineCameraActor : ACameraActor
{
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x910(0x50)
	uint8_t Pad_0x960[0x10]; // 0x960(0x10)


	// Object: Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a7c10
	// Params: [ Num(1) Size(0x8) ]
	struct UCineCameraComponent* GetCineCameraComponent();
};

// Object: Class CinematicCamera.CineCameraComponent
// Size: 0xAC0 (Inherited: 0x9C0)
struct UCineCameraComponent : UCameraComponent
{
	struct FCameraFilmbackSettings FilmbackSettings; // 0x9C0(0xC)
	struct FCameraFilmbackSettings Filmback; // 0x9CC(0xC)
	struct FCameraLensSettings LensSettings; // 0x9D8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x9F0(0x58)
	float CurrentFocalLength; // 0xA48(0x4)
	float CurrentAperture; // 0xA4C(0x4)
	float CurrentFocusDistance; // 0xA50(0x4)
	uint8_t Pad_0xA54[0xC]; // 0xA54(0xC)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xA60(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xA70(0x10)
	struct FString DefaultFilmbackPresetName; // 0xA80(0x10)
	struct FString DefaultFilmbackPreset; // 0xA90(0x10)
	struct FString DefaultLensPresetName; // 0xAA0(0x10)
	float DefaultLensFocalLength; // 0xAB0(0x4)
	float DefaultLensFStop; // 0xAB4(0x4)
	uint8_t Pad_0xAB8[0x8]; // 0xAB8(0x8)


	// Object: Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a8740
	// Params: [ Num(1) Size(0x10) ]
	void SetLensPresetByName(struct FString InPresetName);

	// Object: Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a8890
	// Params: [ Num(1) Size(0x10) ]
	void SetFilmbackPresetByName(struct FString InPresetName);

	// Object: Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x99a8b18
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentFocalLength(float& InFocalLength);

	// Object: Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a8ab0
	// Params: [ Num(1) Size(0x4) ]
	float GetVerticalFieldOfView();

	// Object: Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x99a8654
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy();

	// Object: Function CinematicCamera.CineCameraComponent.GetLensPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a87f4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLensPresetName();

	// Object: Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a8ae4
	// Params: [ Num(1) Size(0x4) ]
	float GetHorizontalFieldOfView();

	// Object: Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a8a14
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFilmbackPresetName();

	// Object: Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a8944
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultFilmbackPresetName();
};

} // namespace SDK
