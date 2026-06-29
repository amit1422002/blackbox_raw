// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f8c02c
	// Params: [ Num(1) Size(0x30) ]
	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8c3f0
	// Params: [ Num(2) Size(0xC) ]
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8c2b0
	// Params: [ Num(1) Size(0x1) ]
	void SetTrackingOrigin(uint8_t Origin);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8bdcc
	// Params: [ Num(1) Size(0x8) ]
	void SetSpectatorScreenTexture(struct UTexture* InTexture);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f8bba4
	// Params: [ Num(7) Size(0x23) ]
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8be64
	// Params: [ Num(1) Size(0x1) ]
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8c530
	// Params: [ Num(2) Size(0x8) ]
	void SetClippingPlanes(float Near, float Far);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8c604
	// Params: [ Num(2) Size(0x5) ]
	void ResetOrientationAndPosition(float Yaw, uint8_t options);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8befc
	// Params: [ Num(1) Size(0x1) ]
	bool IsSpectatorScreenModeControllable();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8c76c
	// Params: [ Num(1) Size(0x1) ]
	bool IsInLowPersistenceMode();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8d070
	// Params: [ Num(1) Size(0x1) ]
	bool IsHeadMountedDisplayEnabled();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8d038
	// Params: [ Num(1) Size(0x1) ]
	bool IsHeadMountedDisplayConnected();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f8b5c8
	// Params: [ Num(2) Size(0xD) ]
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8cdf4
	// Params: [ Num(1) Size(0x1) ]
	bool HasValidTrackingPosition();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8c348
	// Params: [ Num(2) Size(0xC) ]
	float GetWorldToMetersScale(struct UObject* WorldContext);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8bf34
	// Params: [ Num(2) Size(0x2) ]
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f8c1c4
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8ca00
	// Params: [ Num(11) Size(0x3C) ]
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8c27c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetTrackingOrigin();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8c4fc
	// Params: [ Num(1) Size(0x4) ]
	float GetScreenPercentage();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8c784
	// Params: [ Num(7) Size(0x2C) ]
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8c4c8
	// Params: [ Num(1) Size(0x4) ]
	float GetPixelDensity();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8ce2c
	// Params: [ Num(2) Size(0x18) ]
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8cdc0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumOfTrackingSensors();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8cf1c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetHMDWornState();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8cf50
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetHMDDeviceName();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f8b684
	// Params: [ Num(6) Size(0x34) ]
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f8b8a4
	// Params: [ Num(5) Size(0x2C) ]
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8ba84
	// Params: [ Num(3) Size(0x20) ]
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, enum class EXRTrackedDeviceType DeviceType);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8c6dc
	// Params: [ Num(1) Size(0x1) ]
	void EnableLowPersistenceMode(bool bEnable);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8cf84
	// Params: [ Num(2) Size(0x2) ]
	bool EnableHMD(bool bEnable);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f8c0f8
	// Params: [ Num(1) Size(0x30) ]
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform);
};

// Object: Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x6B0 (Inherited: 0x5F0)
struct UMotionControllerComponent : UPrimitiveComponent
{
	int32_t PlayerIndex; // 0x5F0(0x4)
	enum class EControllerHand Hand; // 0x5F4(0x1)
	uint8_t Pad_0x5F5[0x3]; // 0x5F5(0x3)
	struct FName MotionSource; // 0x5F8(0x8)
	uint8_t bDisableLowLatencyUpdate : 1; // 0x600(0x1), Mask(0x1)
	uint8_t BitPad_0x600_1 : 7; // 0x600(0x1)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x601(0x1)
	bool bDisplayDeviceModel; // 0x602(0x1)
	uint8_t Pad_0x603[0x1]; // 0x603(0x1)
	struct FName DisplayModelSource; // 0x604(0x8)
	uint8_t Pad_0x60C[0x4]; // 0x60C(0x4)
	struct UStaticMesh* CustomDisplayMesh; // 0x610(0x8)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x618(0x10)
	uint8_t Pad_0x628[0x68]; // 0x628(0x68)
	struct UPrimitiveComponent* DisplayComponent; // 0x690(0x8)
	uint8_t Pad_0x698[0x18]; // 0x698(0x18)


	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f8e444
	// Params: [ Num(1) Size(0x1) ]
	void SetTrackingSource(enum class EControllerHand NewSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f8e368
	// Params: [ Num(1) Size(0x8) ]
	void SetTrackingMotionSource(struct FName NewSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f8e63c
	// Params: [ Num(1) Size(0x1) ]
	void SetShowDeviceModel(bool bShowControllerModel);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f8e594
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayModelSource(struct FName NewDisplayModelSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f8e4ec
	// Params: [ Num(1) Size(0x8) ]
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f8e2c0
	// Params: [ Num(1) Size(0x4) ]
	void SetAssociatedPlayerIndex(int32_t NewPlayer);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnMotionControllerUpdated();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.IsTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f8e6ec
	// Params: [ Num(1) Size(0x1) ]
	bool IsTracked();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f8e410
	// Params: [ Num(1) Size(0x1) ]
	enum class EControllerHand GetTrackingSource();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x8f8e1c4
	// Params: [ Num(3) Size(0x10) ]
	float GetParameterValue(struct FName InName, bool& bValueFound);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f8e0c4
	// Params: [ Num(3) Size(0x14) ]
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);
};

// Object: Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8f6ec
	// Params: [ Num(1) Size(0x1) ]
	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8f4ac
	// Params: [ Num(3) Size(0xD) ]
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8f598
	// Params: [ Num(3) Size(0x6) ]
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8f400
	// Params: [ Num(2) Size(0x9) ]
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8f78c
	// Params: [ Num(1) Size(0x1) ]
	bool IsMotionTrackedDeviceCountManagementNecessary();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8eccc
	// Params: [ Num(3) Size(0xD) ]
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8f684
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMotionTrackingEnabledControllerCount();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f8f6b8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaximumMotionTrackedControllerCount();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8edb8
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetActiveTrackingSystemName();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8edec
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> EnumerateMotionSources();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8f228
	// Params: [ Num(3) Size(0xD) ]
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8f314
	// Params: [ Num(3) Size(0x6) ]
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8f17c
	// Params: [ Num(2) Size(0x9) ]
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8efcc
	// Params: [ Num(2) Size(0xC) ]
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8f0a4
	// Params: [ Num(2) Size(0x5) ]
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8ee88
	// Params: [ Num(1) Size(0x4) ]
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8ef20
	// Params: [ Num(0) Size(0x0) ]
	void DisableMotionTrackingOfAllControllers();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f8ef34
	// Params: [ Num(1) Size(0x8) ]
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent);
};

// Object: Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x168 (Inherited: 0xD8)
struct UVRNotificationsComponent : UActorComponent
{
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xD8(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xE8(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0xF8(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0x108(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0x118(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x128(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x138(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x148(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x158(0x10)
};

// Object: Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f8ff70
	// Params: [ Num(7) Size(0x68) ]
	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId);

	// Object: Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f901a8
	// Params: [ Num(5) Size(0x58) ]
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform);
};

// Object: Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x60 (Inherited: 0x30)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnModelLoaded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
	struct UPrimitiveComponent* SpawnedComponent; // 0x58(0x8)


	// Object: Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f907bc
	// Params: [ Num(8) Size(0x70) ]
	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent);

	// Object: Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f905b4
	// Params: [ Num(6) Size(0x60) ]
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent);
};

// Object: Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f90dfc
	// Params: [ Num(0) Size(0x0) ]
	void ShowLoadingScreen();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f91008
	// Params: [ Num(5) Size(0x1E) ]
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f90de8
	// Params: [ Num(0) Size(0x0) ]
	void HideLoadingScreen();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f90ff4
	// Params: [ Num(0) Size(0x0) ]
	void ClearLoadingScreenSplashes();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f90e10
	// Params: [ Num(6) Size(0x35) ]
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd);
};

} // namespace SDK
