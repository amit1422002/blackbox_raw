// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x28)
struct UGeometryCache : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x4)
	int32_t EndFrame; // 0x64(0x4)
};

// Object: Class GeometryCache.GeometryCacheActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct AGeometryCacheActor : AActor
{
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x2E0(0x8)


	// Object: Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2d6f0
	// Params: [ Num(1) Size(0x8) ]
	struct UGeometryCacheComponent* GetGeometryCacheComponent();
};

// Object: Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject
{
	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Object: Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase
{
	int32_t DummyProperty; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: Class GeometryCache.GeometryCacheComponent
// Size: 0x760 (Inherited: 0x700)
struct UGeometryCacheComponent : UMeshComponent
{
	struct UGeometryCache* GeometryCache; // 0x700(0x8)
	bool bRunning; // 0x708(0x1)
	bool bLooping; // 0x709(0x1)
	uint8_t Pad_0x70A[0x2]; // 0x70A(0x2)
	float StartTimeOffset; // 0x70C(0x4)
	float PlaybackSpeed; // 0x710(0x4)
	int32_t NumTracks; // 0x714(0x4)
	float ElapsedTime; // 0x718(0x4)
	uint8_t Pad_0x71C[0x30]; // 0x71C(0x30)
	float Duration; // 0x74C(0x4)
	bool bManualTick; // 0x750(0x1)
	uint8_t Pad_0x751[0xF]; // 0x751(0xF)


	// Object: Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2de5c
	// Params: [ Num(4) Size(0x7) ]
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);

	// Object: Function GeometryCache.GeometryCacheComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e478
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e0b4
	// Params: [ Num(1) Size(0x4) ]
	void SetStartTimeOffset(float NewStartTimeOffset);

	// Object: Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e244
	// Params: [ Num(1) Size(0x4) ]
	void SetPlaybackSpeed(float NewPlaybackSpeed);

	// Object: Function GeometryCache.GeometryCacheComponent.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e320
	// Params: [ Num(1) Size(0x1) ]
	void SetLooping(bool bNewLooping);

	// Object: Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e190
	// Params: [ Num(2) Size(0x9) ]
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache);

	// Object: Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e4a0
	// Params: [ Num(0) Size(0x0) ]
	void PlayReversedFromEnd();

	// Object: Function GeometryCache.GeometryCacheComponent.PlayReversed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e4b4
	// Params: [ Num(0) Size(0x0) ]
	void PlayReversed();

	// Object: Function GeometryCache.GeometryCacheComponent.PlayFromStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e4c8
	// Params: [ Num(0) Size(0x0) ]
	void PlayFromStart();

	// Object: Function GeometryCache.GeometryCacheComponent.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e4dc
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function GeometryCache.GeometryCacheComponent.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e2e48c
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2e408
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlayingReversed();

	// Object: Function GeometryCache.GeometryCacheComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2e440
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function GeometryCache.GeometryCacheComponent.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2e3d0
	// Params: [ Num(1) Size(0x1) ]
	bool IsLooping();

	// Object: Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2e15c
	// Params: [ Num(1) Size(0x4) ]
	float GetStartTimeOffset();

	// Object: Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2e2ec
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackSpeed();

	// Object: Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2e04c
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackDirection();

	// Object: Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2dfe4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumberOfFrames();

	// Object: Function GeometryCache.GeometryCacheComponent.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2e018
	// Params: [ Num(1) Size(0x4) ]
	float GetDuration();

	// Object: Function GeometryCache.GeometryCacheComponent.GetAnimationTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e2e080
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationTime();
};

// Object: Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : UObject
{
	float Duration; // 0x28(0x4)
	uint8_t Pad_0x2C[0x2C]; // 0x2C(0x2C)
};

// Object: Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x78 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack
{
	uint32_t NumMeshSamples; // 0x54(0x4)
	uint8_t Pad_0x5C[0x1C]; // 0x5C(0x1C)


	// Object: Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x5e2f08c
	// Params: [ Num(2) Size(0xAC) ]
	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// Object: Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xD0 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack
{
	struct UGeometryCacheCodecBase* Codec; // 0x58(0x8)
	uint8_t Pad_0x60[0x68]; // 0x60(0x68)
	float StartSampleTime; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
};

// Object: Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack
{
	uint8_t Pad_0x58[0xA8]; // 0x58(0xA8)


	// Object: Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x5e2f558
	// Params: [ Num(1) Size(0xA8) ]
	void SetMesh(struct FGeometryCacheMeshData& NewMeshData);
};

// Object: Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack
{
	uint8_t Pad_0x58[0xA8]; // 0x58(0xA8)


	// Object: Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x5e2f824
	// Params: [ Num(1) Size(0xA8) ]
	void SetMesh(struct FGeometryCacheMeshData& NewMeshData);
};

} // namespace SDK
