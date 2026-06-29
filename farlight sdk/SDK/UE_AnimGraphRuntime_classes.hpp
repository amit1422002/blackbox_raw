// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x330 (Inherited: 0x330)
struct UAnimSequencerInstance : UAnimInstance
{
};

// Object: Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : UAnimNotify
{
	struct FName NotifyName; // 0x38(0x8)
};

// Object: Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState
{
	struct FName NotifyName; // 0x2C(0x8)
};

// Object: Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x97caf2c
	// Params: [ Num(10) Size(0x60) ]
	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97c9ef0
	// Params: [ Num(0) Size(0x0) ]
	void K2_StartProfilingTimer();

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x97ca638
	// Params: [ Num(10) Size(0x30) ]
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x97ca514
	// Params: [ Num(4) Size(0x10) ]
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x97cace4
	// Params: [ Num(7) Size(0x90) ]
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97c9df4
	// Params: [ Num(3) Size(0x1C) ]
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x97caa00
	// Params: [ Num(11) Size(0x34) ]
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, uint8_t SocketSpaceA, struct FName SocketOrBoneNameB, uint8_t SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x97ca8d8
	// Params: [ Num(4) Size(0x24) ]
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x97c9f04
	// Params: [ Num(13) Size(0xFC) ]
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, uint8_t SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct FRuntimeFloatCurve& CustomCurve);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x97ca300
	// Params: [ Num(7) Size(0x50) ]
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);
};

// Object: Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xA8 (Inherited: 0x28)
struct UPlayMontageCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)
	uint8_t Pad_0x78[0x30]; // 0x78(0x30)


	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x97cb7c8
	// Params: [ Num(2) Size(0x28) ]
	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x97cb8c8
	// Params: [ Num(2) Size(0x28) ]
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// Flags: [Final|Native|Protected]
	// Offset: 0x97cb9c8
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// Flags: [Final|Native|Protected]
	// Offset: 0x97cbab8
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97cbba8
	// Params: [ Num(6) Size(0x28) ]
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);
};

// Object: Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x28 (Inherited: 0x28)
struct ISequencerAnimationSupport : IInterface
{
};

} // namespace SDK
