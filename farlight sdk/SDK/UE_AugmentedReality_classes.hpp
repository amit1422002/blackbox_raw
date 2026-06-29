// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f69510
	// Params: [ Num(1) Size(0x8) ]
	void UnpinComponent(struct USceneComponent* ComponentToUnpin);

	// Object: Function AugmentedReality.ARBlueprintLibrary.StopARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f6a60c
	// Params: [ Num(0) Size(0x0) ]
	void StopARSession();

	// Object: Function AugmentedReality.ARBlueprintLibrary.StartARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f6a634
	// Params: [ Num(1) Size(0x8) ]
	void StartARSession(struct UARSessionConfig* SessionConfig);

	// Object: Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f6a460
	// Params: [ Num(1) Size(0x30) ]
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform);

	// Object: Function AugmentedReality.ARBlueprintLibrary.RemovePin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f69478
	// Params: [ Num(1) Size(0x8) ]
	void RemovePin(struct UARPin* PinToRemove);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f695a8
	// Params: [ Num(4) Size(0x80) ]
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, struct FName DebugName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PinComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f69738
	// Params: [ Num(5) Size(0x58) ]
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName);

	// Object: Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f6a620
	// Params: [ Num(0) Size(0x0) ]
	void PauseARSession();

	// Object: Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f69e44
	// Params: [ Num(7) Size(0x30) ]
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);

	// Object: Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f6a174
	// Params: [ Num(6) Size(0x20) ]
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f69c2c
	// Params: [ Num(2) Size(0x2) ]
	bool IsSessionTypeSupported(enum class EARSessionType SessionType);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f68c1c
	// Params: [ Num(3) Size(0x3) ]
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature);

	// Object: Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f6a6cc
	// Params: [ Num(1) Size(0x1) ]
	bool IsARSupported();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f6904c
	// Params: [ Num(1) Size(0x1) ]
	enum class EARWorldMappingState GetWorldMappingStatus();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f69ddc
	// Params: [ Num(1) Size(0x1) ]
	enum class EARTrackingQualityReason GetTrackingQualityReason();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f69e10
	// Params: [ Num(1) Size(0x1) ]
	enum class EARTrackingQuality GetTrackingQuality();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f68ed0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType);

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f6a52c
	// Params: [ Num(1) Size(0x8) ]
	struct UARSessionConfig* GetSessionConfig();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f68fb0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetPointCloud();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f689d8
	// Params: [ Num(1) Size(0x8) ]
	struct UARTextureCameraImage* GetPersonSegmentationImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f689a4
	// Params: [ Num(1) Size(0x8) ]
	struct UARTextureCameraImage* GetPersonSegmentationDepthImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f698d0
	// Params: [ Num(1) Size(0x8) ]
	struct UARLightEstimate* GetCurrentLightEstimate();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f69d0c
	// Params: [ Num(1) Size(0x8) ]
	struct UARTextureCameraImage* GetCameraImage();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f69cd8
	// Params: [ Num(1) Size(0x8) ]
	struct UARTextureCameraDepth* GetCameraDepth();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f6a560
	// Params: [ Num(1) Size(0x18) ]
	struct FARSessionStatus GetARSessionStatus();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f68a0c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f692a4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f69340
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f69208
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f6916c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f68aa8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FARPose2D> GetAllTracked2DPoses();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f693dc
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARPin*> GetAllPins();

	// Object: Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f69d40
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries();

	// Object: Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f69a98
	// Params: [ Num(5) Size(0x28) ]
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds);

	// Object: Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f69904
	// Params: [ Num(5) Size(0x28) ]
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds);

	// Object: Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f68d08
	// Params: [ Num(5) Size(0x30) ]
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth);

	// Object: Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f69080
	// Params: [ Num(3) Size(0x19) ]
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent);
};

// Object: Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f6b638
	// Params: [ Num(2) Size(0x68) ]
	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f6b528
	// Params: [ Num(2) Size(0x61) ]
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f6b748
	// Params: [ Num(2) Size(0x90) ]
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f6b868
	// Params: [ Num(2) Size(0x90) ]
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult);

	// Object: Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f6b988
	// Params: [ Num(2) Size(0x64) ]
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult);
};

// Object: Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x58 (Inherited: 0x30)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase
{
	uint8_t Pad_0x30[0x28]; // 0x30(0x28)
};

// Object: Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x88 (Inherited: 0x58)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68(0x10)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)


	// Object: Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f6bf40
	// Params: [ Num(2) Size(0x10) ]
	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject);
};

// Object: Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0xA0 (Inherited: 0x58)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68(0x10)
	uint8_t Pad_0x78[0x28]; // 0x78(0x28)


	// Object: Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f6c37c
	// Params: [ Num(4) Size(0x28) ]
	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent);
};

// Object: Class AugmentedReality.ARLightEstimate
// Size: 0x28 (Inherited: 0x28)
struct UARLightEstimate : UObject
{
};

// Object: Class AugmentedReality.ARBasicLightEstimate
// Size: 0x40 (Inherited: 0x28)
struct UARBasicLightEstimate : UARLightEstimate
{
	float AmbientIntensityLumens; // 0x28(0x4)
	float AmbientColorTemperatureKelvin; // 0x2C(0x4)
	struct FLinearColor AmbientColor; // 0x30(0x10)


	// Object: Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6c9c8
	// Params: [ Num(1) Size(0x4) ]
	float GetAmbientIntensityLumens();

	// Object: Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6c994
	// Params: [ Num(1) Size(0x4) ]
	float GetAmbientColorTemperatureKelvin();

	// Object: Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6c95c
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetAmbientColor();
};

// Object: Class AugmentedReality.AROriginActor
// Size: 0x2E0 (Inherited: 0x2E0)
struct AAROriginActor : AActor
{
};

// Object: Class AugmentedReality.ARPin
// Size: 0xF0 (Inherited: 0x28)
struct UARPin : UObject
{
	struct UARTrackedGeometry* TrackedGeometry; // 0x28(0x8)
	struct USceneComponent* PinnedComponent; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x1F]; // 0xA1(0x1F)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x10]; // 0xE0(0x10)


	// Object: Function AugmentedReality.ARPin.GetTrackingState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6cfb4
	// Params: [ Num(1) Size(0x1) ]
	enum class EARTrackingState GetTrackingState();

	// Object: Function AugmentedReality.ARPin.GetTrackedGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6cf80
	// Params: [ Num(1) Size(0x8) ]
	struct UARTrackedGeometry* GetTrackedGeometry();

	// Object: Function AugmentedReality.ARPin.GetPinnedComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6cf4c
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetPinnedComponent();

	// Object: Function AugmentedReality.ARPin.GetLocalToWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6cfe8
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToWorldTransform();

	// Object: Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6d054
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToTrackingTransform();

	// Object: Function AugmentedReality.ARPin.GetDebugName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6cda4
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDebugName();

	// Object: Function AugmentedReality.ARPin.DebugDraw
	// Flags: [Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x8f6cdd8
	// Params: [ Num(4) Size(0x20) ]
	void DebugDraw(struct UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds);
};

// Object: Class AugmentedReality.ARSessionConfig
// Size: 0xA8 (Inherited: 0x30)
struct UARSessionConfig : UDataAsset
{
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30(0x1)
	bool bGenerateCollisionForMeshData; // 0x31(0x1)
	bool bGenerateNavMeshForMeshData; // 0x32(0x1)
	bool bUseMeshDataForOcclusion; // 0x33(0x1)
	bool bRenderMeshDataInWireframe; // 0x34(0x1)
	bool bTrackSceneObjects; // 0x35(0x1)
	bool bUsePersonSegmentationForOcclusion; // 0x36(0x1)
	enum class EARWorldAlignment WorldAlignment; // 0x37(0x1)
	enum class EARSessionType SessionType; // 0x38(0x1)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x39(0x1)
	bool bHorizontalPlaneDetection; // 0x3A(0x1)
	bool bVerticalPlaneDetection; // 0x3B(0x1)
	bool bEnableAutoFocus; // 0x3C(0x1)
	enum class EARLightEstimationMode LightEstimationMode; // 0x3D(0x1)
	enum class EARFrameSyncMode FrameSyncMode; // 0x3E(0x1)
	bool bEnableAutomaticCameraOverlay; // 0x3F(0x1)
	bool bEnableAutomaticCameraTracking; // 0x40(0x1)
	bool bResetCameraTracking; // 0x41(0x1)
	bool bResetTrackedObjects; // 0x42(0x1)
	uint8_t Pad_0x43[0x5]; // 0x43(0x5)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x58(0x4)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct TArray<uint8_t> WorldMapData; // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80(0xC)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x8C(0x1)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8D(0x1)
	uint8_t Pad_0x8E[0x2]; // 0x8E(0x2)
	struct TArray<uint8_t> SerializedARCandidateImageDatabase; // 0x90(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)


	// Object: Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e168
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldResetTrackedObjects();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e250
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldResetCameraTracking();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e3a8
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldRenderCameraOverlay();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e370
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldEnableCameraTracking();

	// Object: Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e338
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldEnableAutoFocus();

	// Object: Function AugmentedReality.ARSessionConfig.SetWorldMapData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6ddb4
	// Params: [ Num(1) Size(0x10) ]
	void SetWorldMapData(struct TArray<uint8_t> WorldMapData);

	// Object: Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6d854
	// Params: [ Num(1) Size(0x1) ]
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature);

	// Object: Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6e0b8
	// Params: [ Num(1) Size(0x1) ]
	void SetResetTrackedObjects(bool bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6e1a0
	// Params: [ Num(1) Size(0x1) ]
	void SetResetCameraTracking(bool bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6d930
	// Params: [ Num(1) Size(0x1) ]
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate);

	// Object: Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6da0c
	// Params: [ Num(1) Size(0x1) ]
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection);

	// Object: Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6e288
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableAutoFocus(bool bNewValue);

	// Object: Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6dae8
	// Params: [ Num(1) Size(0xC) ]
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat);

	// Object: Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f6dc78
	// Params: [ Num(1) Size(0x10) ]
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*>& InCandidateObjects);

	// Object: Function AugmentedReality.ARSessionConfig.GetWorldMapData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6deb0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint8_t> GetWorldMapData();

	// Object: Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e4b0
	// Params: [ Num(1) Size(0x1) ]
	enum class EARWorldAlignment GetWorldAlignment();

	// Object: Function AugmentedReality.ARSessionConfig.GetSessionType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e47c
	// Params: [ Num(1) Size(0x1) ]
	enum class EARSessionType GetSessionType();

	// Object: Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e448
	// Params: [ Num(1) Size(0x1) ]
	enum class EARPlaneDetectionMode GetPlaneDetectionMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6df60
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxNumSimultaneousImagesTracked();

	// Object: Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e414
	// Params: [ Num(1) Size(0x1) ]
	enum class EARLightEstimationMode GetLightEstimationMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e3e0
	// Params: [ Num(1) Size(0x1) ]
	enum class EARFrameSyncMode GetFrameSyncMode();

	// Object: Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6d9d8
	// Params: [ Num(1) Size(0x1) ]
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate();

	// Object: Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6dab4
	// Params: [ Num(1) Size(0x1) ]
	enum class EARFaceTrackingDirection GetFaceTrackingDirection();

	// Object: Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6df2c
	// Params: [ Num(1) Size(0x1) ]
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();

	// Object: Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6d8fc
	// Params: [ Num(1) Size(0x1) ]
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature();

	// Object: Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6db98
	// Params: [ Num(1) Size(0xC) ]
	struct FARVideoFormat GetDesiredVideoFormat();

	// Object: Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6dd38
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList();

	// Object: Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6e03c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UARCandidateImage*> GetCandidateImageList();

	// Object: Function AugmentedReality.ARSessionConfig.AddCandidateObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6dbd0
	// Params: [ Num(1) Size(0x8) ]
	void AddCandidateObject(struct UARCandidateObject* CandidateObject);

	// Object: Function AugmentedReality.ARSessionConfig.AddCandidateImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6df94
	// Params: [ Num(1) Size(0x8) ]
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage);
};

// Object: Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x430 (Inherited: 0x3C8)
struct AARSharedWorldGameMode : AGameMode
{
	int32_t BufferSizePerChunk; // 0x3C4(0x4)
	uint8_t Pad_0x3CC[0x64]; // 0x3CC(0x64)


	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x8f701e8
	// Params: [ Num(1) Size(0x10) ]
	void SetPreviewImageData(struct TArray<uint8_t> ImageData);

	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x8f700d8
	// Params: [ Num(0) Size(0x0) ]
	void SetARWorldSharingIsReady();

	// Object: Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x8f700ec
	// Params: [ Num(1) Size(0x10) ]
	void SetARSharedWorldData(struct TArray<uint8_t> ARWorldData);

	// Object: Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x8f700a4
	// Params: [ Num(1) Size(0x8) ]
	struct AARSharedWorldGameState* GetARSharedWorldGameState();
};

// Object: Class AugmentedReality.ARSharedWorldGameState
// Size: 0x3A0 (Inherited: 0x368)
struct AARSharedWorldGameState : AGameState
{
	struct TArray<uint8_t> PreviewImageData; // 0x368(0x10)
	struct TArray<uint8_t> ARWorldData; // 0x378(0x10)
	int32_t PreviewImageBytesTotal; // 0x388(0x4)
	int32_t ARWorldBytesTotal; // 0x38C(0x4)
	int32_t PreviewImageBytesDelivered; // 0x390(0x4)
	int32_t ARWorldBytesDelivered; // 0x394(0x4)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)


	// Object: Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void K2_OnARWorldMapIsReady();
};

// Object: Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x698 (Inherited: 0x698)
struct AARSharedWorldPlayerController : APlayerController
{

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x8f70bec
	// Params: [ Num(0) Size(0x0) ]
	void ServerMarkReadyForReceiving();

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0x8f709b0
	// Params: [ Num(2) Size(0x18) ]
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<uint8_t> Buffer);

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0x8f70888
	// Params: [ Num(2) Size(0x18) ]
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<uint8_t> Buffer);

	// Object: Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	// Offset: 0x8f70ad8
	// Params: [ Num(2) Size(0x8) ]
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
};

// Object: Class AugmentedReality.ARSkyLight
// Size: 0x300 (Inherited: 0x2F0)
struct AARSkyLight : ASkyLight
{
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x2F0(0x8)
	uint8_t Pad_0x2F8[0x8]; // 0x2F8(0x8)


	// Object: Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f711fc
	// Params: [ Num(1) Size(0x8) ]
	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe);
};

// Object: Class AugmentedReality.ARTexture
// Size: 0xD8 (Inherited: 0xB8)
struct UARTexture : UTexture
{
	enum class EARTextureType TextureType; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x3]; // 0xB9(0x3)
	float Timestamp; // 0xBC(0x4)
	struct FGuid ExternalTextureGuid; // 0xC0(0x10)
	struct FVector2D Size; // 0xD0(0x8)
};

// Object: Class AugmentedReality.ARTextureCameraImage
// Size: 0xD8 (Inherited: 0xD8)
struct UARTextureCameraImage : UARTexture
{
};

// Object: Class AugmentedReality.ARTextureCameraDepth
// Size: 0xE0 (Inherited: 0xD8)
struct UARTextureCameraDepth : UARTexture
{
	enum class EARDepthQuality DepthQuality; // 0xD8(0x1)
	enum class EARDepthAccuracy DepthAccuracy; // 0xD9(0x1)
	bool bIsTemporallySmoothed; // 0xDA(0x1)
	uint8_t Pad_0xDB[0x5]; // 0xDB(0x5)
};

// Object: Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x130 (Inherited: 0x110)
struct UAREnvironmentCaptureProbeTexture : UTextureCube
{
	enum class EARTextureType TextureType; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	float Timestamp; // 0x114(0x4)
	struct FGuid ExternalTextureGuid; // 0x118(0x10)
	struct FVector2D Size; // 0x128(0x8)
};

// Object: Class AugmentedReality.ARTraceResultDummy
// Size: 0x28 (Inherited: 0x28)
struct UARTraceResultDummy : UObject
{
};

// Object: Class AugmentedReality.ARTrackedGeometry
// Size: 0xF0 (Inherited: 0x28)
struct UARTrackedGeometry : UObject
{
	struct FGuid UniqueId; // 0x28(0x10)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xA0(0x1)
	uint8_t Pad_0xA1[0xF]; // 0xA1(0xF)
	struct UMRMeshComponent* UnderlyingMesh; // 0xB0(0x8)
	enum class EARObjectClassification ObjectClassification; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x17]; // 0xB9(0x17)
	int32_t LastUpdateFrameNumber; // 0xD0(0x4)
	uint8_t Pad_0xD4[0xC]; // 0xD4(0xC)
	struct FName DebugName; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)


	// Object: Function AugmentedReality.ARTrackedGeometry.IsTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f72260
	// Params: [ Num(1) Size(0x1) ]
	bool IsTracked();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f72190
	// Params: [ Num(1) Size(0x8) ]
	struct UMRMeshComponent* GetUnderlyingMesh();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f72298
	// Params: [ Num(1) Size(0x1) ]
	enum class EARTrackingState GetTrackingState();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f72174
	// Params: [ Num(1) Size(0x1) ]
	enum class EARObjectClassification GetObjectClassification();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f72338
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToWorldTransform();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f722cc
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetLocalToTrackingTransform();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f721c4
	// Params: [ Num(1) Size(0x4) ]
	float GetLastUpdateTimestamp();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f721f8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLastUpdateFrameNumber();

	// Object: Function AugmentedReality.ARTrackedGeometry.GetDebugName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f7222c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDebugName();
};

// Object: Class AugmentedReality.ARPlaneGeometry
// Size: 0x120 (Inherited: 0xF0)
struct UARPlaneGeometry : UARTrackedGeometry
{
	enum class EARPlaneOrientation Orientation; // 0xE8(0x1)
	struct FVector Center; // 0xEC(0xC)
	struct FVector Extent; // 0xF8(0xC)
	uint8_t Pad_0x109[0xF]; // 0x109(0xF)
	struct UARPlaneGeometry* SubsumedBy; // 0x118(0x8)


	// Object: Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f72830
	// Params: [ Num(1) Size(0x8) ]
	struct UARPlaneGeometry* GetSubsumedBy();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f72814
	// Params: [ Num(1) Size(0x1) ]
	enum class EARPlaneOrientation GetOrientation();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetExtent
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f72920
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetExtent();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetCenter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f72944
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCenter();

	// Object: Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f7284c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};

// Object: Class AugmentedReality.ARTrackedPoint
// Size: 0xF0 (Inherited: 0xF0)
struct UARTrackedPoint : UARTrackedGeometry
{
};

// Object: Class AugmentedReality.ARTrackedImage
// Size: 0x100 (Inherited: 0xF0)
struct UARTrackedImage : UARTrackedGeometry
{
	struct UARCandidateImage* DetectedImage; // 0xE8(0x8)
	struct FVector2D EstimatedSize; // 0xF0(0x8)


	// Object: Function AugmentedReality.ARTrackedImage.GetEstimateSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f730ac
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetEstimateSize();

	// Object: Function AugmentedReality.ARTrackedImage.GetDetectedImage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f730e0
	// Params: [ Num(1) Size(0x8) ]
	struct UARCandidateImage* GetDetectedImage();
};

// Object: Class AugmentedReality.ARTrackedQRCode
// Size: 0x110 (Inherited: 0x100)
struct UARTrackedQRCode : UARTrackedImage
{
	struct FString QRCode; // 0xF8(0x10)
	int32_t Version; // 0x108(0x4)
};

// Object: Class AugmentedReality.ARFaceGeometry
// Size: 0x1E0 (Inherited: 0xF0)
struct UARFaceGeometry : UARTrackedGeometry
{
	struct FVector LookAtTarget; // 0xE8(0xC)
	bool bIsTracked; // 0xF4(0x1)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0xF8(0x50)
	uint8_t Pad_0x14D[0x93]; // 0x14D(0x93)


	// Object: Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f7368c
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye);

	// Object: Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f7374c
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye);

	// Object: Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f738e8
	// Params: [ Num(2) Size(0x8) ]
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape);

	// Object: Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f73808
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes();
};

// Object: Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x100 (Inherited: 0xF0)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry
{
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xF8(0x8)


	// Object: Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f73e9c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetExtent();

	// Object: Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8f73e68
	// Params: [ Num(1) Size(0x8) ]
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// Object: Class AugmentedReality.ARTrackedObject
// Size: 0xF0 (Inherited: 0xF0)
struct UARTrackedObject : UARTrackedGeometry
{
	struct UARCandidateObject* DetectedObject; // 0xE8(0x8)


	// Object: Function AugmentedReality.ARTrackedObject.GetDetectedObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f741b4
	// Params: [ Num(1) Size(0x8) ]
	struct UARCandidateObject* GetDetectedObject();
};

// Object: Class AugmentedReality.ARTrackedPose
// Size: 0x140 (Inherited: 0xF0)
struct UARTrackedPose : UARTrackedGeometry
{
	uint8_t Pad_0xF0[0x50]; // 0xF0(0x50)


	// Object: Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f745f4
	// Params: [ Num(1) Size(0x50) ]
	struct FARPose3D GetTrackedPoseData();
};

// Object: Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x228 (Inherited: 0xD8)
struct UARTrackableNotifyComponent : UActorComponent
{
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xD8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xE8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0x108(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x118(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x128(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x138(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x148(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x158(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x168(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x178(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x188(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x198(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x1A8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x1B8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1C8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1D8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1E8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1F8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x208(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x218(0x10)
};

// Object: Class AugmentedReality.ARTypesDummyClass
// Size: 0x28 (Inherited: 0x28)
struct UARTypesDummyClass : UObject
{
};

// Object: Class AugmentedReality.ARCandidateImage
// Size: 0x58 (Inherited: 0x30)
struct UARCandidateImage : UDataAsset
{
	struct UTexture2D* CandidateTexture; // 0x30(0x8)
	struct FString FriendlyName; // 0x38(0x10)
	float Width; // 0x48(0x4)
	float Height; // 0x4C(0x4)
	enum class EARCandidateImageOrientation Orientation; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)


	// Object: Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f757a8
	// Params: [ Num(1) Size(0x4) ]
	float GetPhysicalWidth();

	// Object: Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f7578c
	// Params: [ Num(1) Size(0x4) ]
	float GetPhysicalHeight();

	// Object: Function AugmentedReality.ARCandidateImage.GetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f75770
	// Params: [ Num(1) Size(0x1) ]
	enum class EARCandidateImageOrientation GetOrientation();

	// Object: Function AugmentedReality.ARCandidateImage.GetFriendlyName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f757c4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFriendlyName();

	// Object: Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f75840
	// Params: [ Num(1) Size(0x8) ]
	struct UTexture2D* GetCandidateTexture();
};

// Object: Class AugmentedReality.ARCandidateObject
// Size: 0x70 (Inherited: 0x30)
struct UARCandidateObject : UDataAsset
{
	struct TArray<uint8_t> CandidateObjectData; // 0x30(0x10)
	struct FString FriendlyName; // 0x40(0x10)
	struct FBox BoundingBox; // 0x50(0x1C)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)


	// Object: Function AugmentedReality.ARCandidateObject.SetFriendlyName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f75d08
	// Params: [ Num(1) Size(0x10) ]
	void SetFriendlyName(struct FString NewName);

	// Object: Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f75e80
	// Params: [ Num(1) Size(0x10) ]
	void SetCandidateObjectData(struct TArray<uint8_t>& InCandidateObject);

	// Object: Function AugmentedReality.ARCandidateObject.SetBoundingBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f75c2c
	// Params: [ Num(1) Size(0x1C) ]
	void SetBoundingBox(struct FBox& InBoundingBox);

	// Object: Function AugmentedReality.ARCandidateObject.GetFriendlyName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f75e04
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFriendlyName();

	// Object: Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f75f9c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint8_t> GetCandidateObjectData();

	// Object: Function AugmentedReality.ARCandidateObject.GetBoundingBox
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f75ce4
	// Params: [ Num(1) Size(0x1C) ]
	struct FBox GetBoundingBox();
};

} // namespace SDK
