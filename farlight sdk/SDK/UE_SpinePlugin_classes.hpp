// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SpinePlugin.SpineAtlasAsset
// Size: 0x60 (Inherited: 0x30)
struct USpineAtlasAsset : UPrimaryDataAsset
{
	struct TArray<struct UTexture2D*> atlasPages; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	struct FString RawData; // 0x48(0x10)
	struct FName atlasFileName; // 0x58(0x8)
};

// Object: Class SpinePlugin.SpineBoneDriverComponent
// Size: 0x370 (Inherited: 0x350)
struct USpineBoneDriverComponent : USceneComponent
{
	struct AActor* Target; // 0x348(0x8)
	struct FString BoneName; // 0x350(0x10)
	bool UseComponentTransform; // 0x360(0x1)
	bool UsePosition; // 0x361(0x1)
	bool UseRotation; // 0x362(0x1)
	bool UseScale; // 0x363(0x1)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)


	// Object: Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
	// Flags: [Final|Native|Protected]
	// Offset: 0x5db1d30
	// Params: [ Num(1) Size(0x8) ]
	void BeforeUpdateWorldTransform(struct USpineSkeletonComponent* Skeleton);
};

// Object: Class SpinePlugin.SpineBoneFollowerComponent
// Size: 0x370 (Inherited: 0x350)
struct USpineBoneFollowerComponent : USceneComponent
{
	struct AActor* Target; // 0x348(0x8)
	struct FString BoneName; // 0x350(0x10)
	bool UseComponentTransform; // 0x360(0x1)
	bool UsePosition; // 0x361(0x1)
	bool UseRotation; // 0x362(0x1)
	bool UseScale; // 0x363(0x1)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)
};

// Object: Class SpinePlugin.TrackEntry
// Size: 0x90 (Inherited: 0x28)
struct UTrackEntry : UObject
{
	struct FMulticastInlineDelegate animationStart; // 0x28(0x10)
	struct FMulticastInlineDelegate AnimationInterrupt; // 0x38(0x10)
	struct FMulticastInlineDelegate AnimationEvent; // 0x48(0x10)
	struct FMulticastInlineDelegate AnimationComplete; // 0x58(0x10)
	struct FMulticastInlineDelegate animationEnd; // 0x68(0x10)
	struct FMulticastInlineDelegate AnimationDispose; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)


	// Object: Function SpinePlugin.TrackEntry.SetTrackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2cb4
	// Params: [ Num(1) Size(0x4) ]
	void SetTrackTime(float trackTime);

	// Object: Function SpinePlugin.TrackEntry.SetTrackEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2bc4
	// Params: [ Num(1) Size(0x4) ]
	void SetTrackEnd(float trackEnd);

	// Object: Function SpinePlugin.TrackEntry.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2ad4
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.TrackEntry.SetMixTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db28f4
	// Params: [ Num(1) Size(0x4) ]
	void SetMixTime(float mixTime);

	// Object: Function SpinePlugin.TrackEntry.SetMixDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2804
	// Params: [ Num(1) Size(0x4) ]
	void SetMixDuration(float mixDuration);

	// Object: Function SpinePlugin.TrackEntry.SetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3434
	// Params: [ Num(1) Size(0x1) ]
	void SetLoop(bool Loop);

	// Object: Function SpinePlugin.TrackEntry.SetEventThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3344
	// Params: [ Num(1) Size(0x4) ]
	void SetEventThreshold(float eventThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3164
	// Params: [ Num(1) Size(0x4) ]
	void SetDrawOrderThreshold(float drawOrderThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2da4
	// Params: [ Num(1) Size(0x4) ]
	void SetDelay(float Delay);

	// Object: Function SpinePlugin.TrackEntry.SetAttachmentThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3254
	// Params: [ Num(1) Size(0x4) ]
	void SetAttachmentThreshold(float attachmentThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3074
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationStart(float animationStart);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationLast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2e94
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationLast(float animationLast);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2f84
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationEnd(float animationEnd);

	// Object: Function SpinePlugin.TrackEntry.SetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db29e4
	// Params: [ Num(1) Size(0x4) ]
	void SetAlpha(float Alpha);

	// Object: Function SpinePlugin.TrackEntry.isValidAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db25ec
	// Params: [ Num(1) Size(0x1) ]
	bool isValidAnimation();

	// Object: Function SpinePlugin.TrackEntry.GetTrackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2d60
	// Params: [ Num(1) Size(0x4) ]
	float GetTrackTime();

	// Object: Function SpinePlugin.TrackEntry.GetTrackIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3528
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTrackIndex();

	// Object: Function SpinePlugin.TrackEntry.GetTrackEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2c70
	// Params: [ Num(1) Size(0x4) ]
	float GetTrackEnd();

	// Object: Function SpinePlugin.TrackEntry.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2b80
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.TrackEntry.GetMixTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db29a0
	// Params: [ Num(1) Size(0x4) ]
	float GetMixTime();

	// Object: Function SpinePlugin.TrackEntry.GetMixDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db28b0
	// Params: [ Num(1) Size(0x4) ]
	float GetMixDuration();

	// Object: Function SpinePlugin.TrackEntry.GetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db34e8
	// Params: [ Num(1) Size(0x1) ]
	bool GetLoop();

	// Object: Function SpinePlugin.TrackEntry.GetEventThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db33f0
	// Params: [ Num(1) Size(0x4) ]
	float GetEventThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3210
	// Params: [ Num(1) Size(0x4) ]
	float GetDrawOrderThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2e50
	// Params: [ Num(1) Size(0x4) ]
	float GetDelay();

	// Object: Function SpinePlugin.TrackEntry.GetAttachmentThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3300
	// Params: [ Num(1) Size(0x4) ]
	float GetAttachmentThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3120
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationStart();

	// Object: Function SpinePlugin.TrackEntry.getAnimationName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2658
	// Params: [ Num(1) Size(0x10) ]
	struct FString getAnimationName();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationLast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2f40
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationLast();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db3030
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationEnd();

	// Object: Function SpinePlugin.TrackEntry.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2610
	// Params: [ Num(1) Size(0x4) ]
	float getAnimationDuration();

	// Object: Function SpinePlugin.TrackEntry.GetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db2a90
	// Params: [ Num(1) Size(0x4) ]
	float GetAlpha();
};

// Object: Class SpinePlugin.SpineSkeletonComponent
// Size: 0x130 (Inherited: 0xD8)
struct USpineSkeletonComponent : UActorComponent
{
	struct USpineAtlasAsset* Atlas; // 0xD8(0x8)
	struct USpineSkeletonDataAsset* SkeletonData; // 0xE0(0x8)
	struct FMulticastInlineDelegate BeforeUpdateWorldTransform; // 0xE8(0x10)
	struct FMulticastInlineDelegate AfterUpdateWorldTransform; // 0xF8(0x10)
	uint8_t Pad_0x108[0x28]; // 0x108(0x28)


	// Object: Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5964
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWorldTransform();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5950
	// Params: [ Num(0) Size(0x0) ]
	void SetToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5928
	// Params: [ Num(0) Size(0x0) ]
	void SetSlotsToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSlotColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5db5248
	// Params: [ Num(2) Size(0x14) ]
	void SetSlotColor(struct FString SlotName, struct FColor Color);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5db5f04
	// Params: [ Num(2) Size(0x11) ]
	bool SetSkins(struct TArray<struct FString>& SkinNames);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5df4
	// Params: [ Num(2) Size(0x11) ]
	bool SetSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db57a4
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleY(float ScaleY);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5880
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleX(float ScaleX);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x5db5978
	// Params: [ Num(2) Size(0x1C) ]
	void SetBoneWorldPosition(struct FString BoneName, struct FVector& Position);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db593c
	// Params: [ Num(0) Size(0x0) ]
	void SetBonesToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetAttachment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5b40
	// Params: [ Num(3) Size(0x21) ]
	bool SetAttachment(struct FString SlotName, struct FString attachmentName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5380
	// Params: [ Num(2) Size(0x11) ]
	bool HasSlot(struct FString SlotName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5ce4
	// Params: [ Num(2) Size(0x11) ]
	bool HasSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasBone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5578
	// Params: [ Num(2) Size(0x11) ]
	bool HasBone(struct FString BoneName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5050
	// Params: [ Num(2) Size(0x11) ]
	bool HasAnimation(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetSlots
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5db5490
	// Params: [ Num(1) Size(0x10) ]
	void GetSlots(struct TArray<struct FString>& Slots);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5db5ff8
	// Params: [ Num(1) Size(0x10) ]
	void GetSkins(struct TArray<struct FString>& Skins);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db5770
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleY();

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db584c
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleX();

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5db5a74
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetBoneWorldTransform(struct FString BoneName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetBones
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5db5688
	// Params: [ Num(1) Size(0x10) ]
	void GetBones(struct TArray<struct FString>& Bones);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetAnimations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5db5160
	// Params: [ Num(1) Size(0x10) ]
	void GetAnimations(struct TArray<struct FString>& Animations);

	// Object: Function SpinePlugin.SpineSkeletonComponent.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db4f44
	// Params: [ Num(2) Size(0x14) ]
	float getAnimationDuration(struct FString AnimationName);
};

// Object: Class SpinePlugin.SpineSkeletonAnimationComponent
// Size: 0x230 (Inherited: 0x130)
struct USpineSkeletonAnimationComponent : USpineSkeletonComponent
{
	struct FMulticastInlineDelegate animationStart; // 0x130(0x10)
	struct FMulticastInlineDelegate AnimationInterrupt; // 0x140(0x10)
	struct FMulticastInlineDelegate AnimationEvent; // 0x150(0x10)
	struct FMulticastInlineDelegate AnimationComplete; // 0x160(0x10)
	struct FMulticastInlineDelegate animationEnd; // 0x170(0x10)
	struct FMulticastInlineDelegate AnimationDispose; // 0x180(0x10)
	struct FString PreviewAnimation; // 0x190(0x10)
	struct FString PreviewSkin; // 0x1A0(0x10)
	uint8_t Pad_0x1B0[0x8]; // 0x1B0(0x8)
	struct TSet<struct UTrackEntry*> trackEntries; // 0x1B8(0x50)
	bool bAutoPlaying; // 0x208(0x1)
	uint8_t Pad_0x209[0x27]; // 0x209(0x27)


	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db4754
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db47fc
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db42b0
	// Params: [ Num(3) Size(0x10) ]
	struct UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db48ec
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoPlay(bool bInAutoPlays);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db4580
	// Params: [ Num(4) Size(0x28) ]
	struct UTrackEntry* SetAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db4720
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db40d4
	// Params: [ Num(2) Size(0x10) ]
	struct UTrackEntry* GetCurrent(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db40c0
	// Params: [ Num(0) Size(0x0) ]
	void ClearTracks();

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db4018
	// Params: [ Num(1) Size(0x4) ]
	void ClearTrack(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db4184
	// Params: [ Num(4) Size(0x18) ]
	struct UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db43a0
	// Params: [ Num(5) Size(0x28) ]
	struct UTrackEntry* AddAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop, float Delay);
};

// Object: Class SpinePlugin.SpineSkeletonDataAsset
// Size: 0xF8 (Inherited: 0x28)
struct USpineSkeletonDataAsset : UObject
{
	float DefaultMix; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FSpineAnimationStateMixData> MixData; // 0x30(0x10)
	struct TArray<struct FString> Bones; // 0x40(0x10)
	struct TArray<struct FString> Slots; // 0x50(0x10)
	struct TArray<struct FString> Skins; // 0x60(0x10)
	struct TArray<struct FString> Animations; // 0x70(0x10)
	struct TArray<struct FString> Events; // 0x80(0x10)
	struct TArray<uint8_t> RawData; // 0x90(0x10)
	struct FName skeletonDataFileName; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x50]; // 0xA8(0x50)
};

// Object: Class SpinePlugin.SpineSkeletonRendererComponent
// Size: 0xA30 (Inherited: 0x770)
struct USpineSkeletonRendererComponent : UProceduralMeshComponent
{
	struct UMaterialInterface* NormalBlendMaterial; // 0x768(0x8)
	struct UMaterialInterface* AdditiveBlendMaterial; // 0x770(0x8)
	struct UMaterialInterface* MultiplyBlendMaterial; // 0x778(0x8)
	struct UMaterialInterface* ScreenBlendMaterial; // 0x780(0x8)
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // 0x788(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // 0x798(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // 0x7A8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // 0x7B8(0x10)
	float DepthOffset; // 0x7C8(0x4)
	struct FName TextureParameterName; // 0x7CC(0x8)
	struct FLinearColor Color; // 0x7D4(0x10)
	bool bCreateCollision; // 0x7E4(0x1)
	uint8_t Pad_0x7ED[0x1EB]; // 0x7ED(0x1EB)
	struct TArray<struct FVector> Vertices; // 0x9D8(0x10)
	struct TArray<int32_t> Indices; // 0x9E8(0x10)
	struct TArray<struct FVector> Normals; // 0x9F8(0x10)
	struct TArray<struct FVector2D> UVs; // 0xA08(0x10)
	struct TArray<struct FColor> Colors; // 0xA18(0x10)
	uint8_t Pad_0xA28[0x8]; // 0xA28(0x8)
};

// Object: Class SpinePlugin.SpineWidget
// Size: 0x750 (Inherited: 0x140)
struct USpineWidget : UWidget
{
	struct FString InitialSkin; // 0x140(0x10)
	struct USpineAtlasAsset* Atlas; // 0x150(0x8)
	struct USpineSkeletonDataAsset* SkeletonData; // 0x158(0x8)
	struct UMaterialInterface* NormalBlendMaterial; // 0x160(0x8)
	struct UMaterialInterface* AdditiveBlendMaterial; // 0x168(0x8)
	struct UMaterialInterface* MultiplyBlendMaterial; // 0x170(0x8)
	struct UMaterialInterface* ScreenBlendMaterial; // 0x178(0x8)
	struct FName TextureParameterName; // 0x180(0x8)
	float DepthOffset; // 0x188(0x4)
	struct FLinearColor Color; // 0x18C(0x10)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)
	struct FSlateBrush Brush; // 0x1A0(0x120)
	struct FMulticastInlineDelegate BeforeUpdateWorldTransform; // 0x2C0(0x10)
	struct FMulticastInlineDelegate AfterUpdateWorldTransform; // 0x2D0(0x10)
	struct FMulticastInlineDelegate animationStart; // 0x2E0(0x10)
	struct FMulticastInlineDelegate AnimationInterrupt; // 0x2F0(0x10)
	struct FMulticastInlineDelegate AnimationEvent; // 0x300(0x10)
	struct FMulticastInlineDelegate AnimationComplete; // 0x310(0x10)
	struct FMulticastInlineDelegate animationEnd; // 0x320(0x10)
	struct FMulticastInlineDelegate AnimationDispose; // 0x330(0x10)
	uint8_t Pad_0x340[0x40]; // 0x340(0x40)
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // 0x380(0x10)
	uint8_t Pad_0x390[0x50]; // 0x390(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // 0x3E0(0x10)
	uint8_t Pad_0x3F0[0x50]; // 0x3F0(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // 0x440(0x10)
	uint8_t Pad_0x450[0x50]; // 0x450(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // 0x4A0(0x10)
	uint8_t Pad_0x4B0[0x240]; // 0x4B0(0x240)
	struct TSet<struct UTrackEntry*> trackEntries; // 0x6F0(0x50)
	bool bAutoPlaying; // 0x740(0x1)
	uint8_t Pad_0x741[0xF]; // 0x741(0xF)


	// Object: Function SpinePlugin.SpineWidget.UpdateWorldTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db8290
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWorldTransform();

	// Object: Function SpinePlugin.SpineWidget.Tick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db6e68
	// Params: [ Num(2) Size(0x5) ]
	void Tick(float DeltaTime, bool CallDelegates);

	// Object: Function SpinePlugin.SpineWidget.SetToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db827c
	// Params: [ Num(0) Size(0x0) ]
	void SetToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db7694
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db8254
	// Params: [ Num(0) Size(0x0) ]
	void SetSlotsToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5db8558
	// Params: [ Num(2) Size(0x11) ]
	bool SetSkins(struct TArray<struct FString>& SkinNames);

	// Object: Function SpinePlugin.SpineWidget.SetSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db864c
	// Params: [ Num(2) Size(0x11) ]
	bool SetSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineWidget.SetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db80d0
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleY(float ScaleY);

	// Object: Function SpinePlugin.SpineWidget.SetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db81ac
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleX(float ScaleX);

	// Object: Function SpinePlugin.SpineWidget.SetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db773c
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);

	// Object: Function SpinePlugin.SpineWidget.SetEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db71f0
	// Params: [ Num(3) Size(0x10) ]
	struct UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);

	// Object: Function SpinePlugin.SpineWidget.SetBonesToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db8268
	// Params: [ Num(0) Size(0x0) ]
	void SetBonesToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetAutoPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db782c
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoPlay(bool bInAutoPlays);

	// Object: Function SpinePlugin.SpineWidget.SetAttachment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db82a4
	// Params: [ Num(3) Size(0x21) ]
	bool SetAttachment(struct FString SlotName, struct FString attachmentName);

	// Object: Function SpinePlugin.SpineWidget.SetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db74c0
	// Params: [ Num(4) Size(0x28) ]
	struct UTrackEntry* SetAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop);

	// Object: Function SpinePlugin.SpineWidget.HasSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db7be0
	// Params: [ Num(2) Size(0x11) ]
	bool HasSlot(struct FString SlotName);

	// Object: Function SpinePlugin.SpineWidget.HasSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db8448
	// Params: [ Num(2) Size(0x11) ]
	bool HasSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineWidget.HasBone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db7ea4
	// Params: [ Num(2) Size(0x11) ]
	bool HasBone(struct FString BoneName);

	// Object: Function SpinePlugin.SpineWidget.HasAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db79e8
	// Params: [ Num(2) Size(0x11) ]
	bool HasAnimation(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineWidget.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db7660
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.SpineWidget.GetSlots
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5db7cf0
	// Params: [ Num(1) Size(0x10) ]
	void GetSlots(struct TArray<struct FString>& Slots);

	// Object: Function SpinePlugin.SpineWidget.GetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5db875c
	// Params: [ Num(1) Size(0x10) ]
	void GetSkins(struct TArray<struct FString>& Skins);

	// Object: Function SpinePlugin.SpineWidget.GetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db809c
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleY();

	// Object: Function SpinePlugin.SpineWidget.GetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db8178
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleX();

	// Object: Function SpinePlugin.SpineWidget.GetCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db7014
	// Params: [ Num(2) Size(0x10) ]
	struct UTrackEntry* GetCurrent(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineWidget.GetBoneTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5db7dd8
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetBoneTransform(struct FString BoneName);

	// Object: Function SpinePlugin.SpineWidget.GetBones
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5db7fb4
	// Params: [ Num(1) Size(0x10) ]
	void GetBones(struct TArray<struct FString>& Bones);

	// Object: Function SpinePlugin.SpineWidget.GetAnimations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5db7af8
	// Params: [ Num(1) Size(0x10) ]
	void GetAnimations(struct TArray<struct FString>& Animations);

	// Object: Function SpinePlugin.SpineWidget.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db78dc
	// Params: [ Num(2) Size(0x14) ]
	float getAnimationDuration(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineWidget.ClearTracks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db7000
	// Params: [ Num(0) Size(0x0) ]
	void ClearTracks();

	// Object: Function SpinePlugin.SpineWidget.ClearTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db6f58
	// Params: [ Num(1) Size(0x4) ]
	void ClearTrack(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineWidget.AddEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db70c4
	// Params: [ Num(4) Size(0x18) ]
	struct UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);

	// Object: Function SpinePlugin.SpineWidget.AddAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5db72e0
	// Params: [ Num(5) Size(0x28) ]
	struct UTrackEntry* AddAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop, float Delay);
};

} // namespace SDK
