// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MotionWarping.AnimNotifyState_MotionWarping
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_MotionWarping : UAnimNotifyState
{
	struct URootMotionModifier* RootMotionModifier; // 0x30(0x8)


	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnWarpUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnWarpEnd(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnWarpBegin(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3215c98
	// Params: [ Num(2) Size(0x10) ]
	void OnRootMotionModifierUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3215bb4
	// Params: [ Num(2) Size(0x10) ]
	void OnRootMotionModifierDeactivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x3215d7c
	// Params: [ Num(2) Size(0x10) ]
	void OnRootMotionModifierActivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x3215e60
	// Params: [ Num(5) Size(0x20) ]
	struct URootMotionModifier* AddRootMotionModifier(struct UMotionWarpingComponent* MotionWarpingComp, struct UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// Object: Class MotionWarping.MotionWarpingUtilities
// Size: 0x28 (Inherited: 0x28)
struct UMotionWarpingUtilities : UBlueprintFunctionLibrary
{

	// Object: Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3216a98
	// Params: [ Num(2) Size(0x18) ]
	void GetMotionWarpingWindowsFromAnimation(struct UAnimSequenceBase* Animation, struct TArray<struct FMotionWarpingWindowData>& OutWindows);

	// Object: Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3216968
	// Params: [ Num(3) Size(0x20) ]
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(struct UAnimSequenceBase* Animation, struct FName WarpTargetName, struct TArray<struct FMotionWarpingWindowData>& OutWindows);

	// Object: Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3216b88
	// Params: [ Num(4) Size(0x40) ]
	struct FTransform ExtractRootMotionFromAnimation(struct UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// Object: Class MotionWarping.MotionWarpingComponent
// Size: 0x148 (Inherited: 0xD8)
struct UMotionWarpingComponent : UActorComponent
{
	bool bSearchForWindowsInAnimsWithinMontages; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct FMulticastInlineDelegate OnPreUpdate; // 0xE0(0x10)
	struct TWeakObjectPtr<struct ACharacter> CharacterOwner; // 0xF0(0x8)
	struct TArray<struct URootMotionModifier*> Modifiers; // 0xF8(0x10)
	struct TArray<struct FMotionWarpingTarget> WarpTargets; // 0x108(0x10)
	uint8_t Pad_0x118[0x30]; // 0x118(0x30)


	// Object: Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3216f5c
	// Params: [ Num(2) Size(0xC) ]
	int32_t RemoveWarpTarget(struct FName WarpTargetName);

	// Object: Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x321761c
	// Params: [ Num(0) Size(0x0) ]
	void DisableAllRootMotionModifiers();

	// Object: Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3217404
	// Params: [ Num(2) Size(0x40) ]
	void AddOrUpdateWarpTargetFromTransform(struct FName WarpTargetName, struct FTransform TargetTransform);

	// Object: Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x321700c
	// Params: [ Num(3) Size(0x20) ]
	void AddOrUpdateWarpTargetFromLocationAndRotation(struct FName WarpTargetName, struct FVector TargetLocation, struct FRotator TargetRotation);

	// Object: Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x321717c
	// Params: [ Num(2) Size(0x14) ]
	void AddOrUpdateWarpTargetFromLocation(struct FName WarpTargetName, struct FVector TargetLocation);

	// Object: Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3217298
	// Params: [ Num(4) Size(0x19) ]
	void AddOrUpdateWarpTargetFromComponent(struct FName WarpTargetName, struct USceneComponent* Component, struct FName BoneName, bool bFollowComponent);

	// Object: Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3217524
	// Params: [ Num(1) Size(0x34) ]
	void AddOrUpdateWarpTarget(struct FMotionWarpingTarget& WarpTarget);
};

// Object: Class MotionWarping.RootMotionModifier
// Size: 0xC0 (Inherited: 0x28)
struct URootMotionModifier : UObject
{
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; // 0x28(0x8)
	float StartTime; // 0x30(0x4)
	float EndTime; // 0x34(0x4)
	float PreviousPosition; // 0x38(0x4)
	float CurrentPosition; // 0x3C(0x4)
	float Weight; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
	struct FTransform StartTransform; // 0x50(0x30)
	float ActualStartTime; // 0x80(0x4)
	struct FDelegate OnActivateDelegate; // 0x84(0x10)
	struct FDelegate OnUpdateDelegate; // 0x94(0x10)
	struct FDelegate OnDeactivateDelegate; // 0xA4(0x10)
	enum class ERootMotionModifierState State; // 0xB4(0x1)
	uint8_t Pad_0xB5[0xB]; // 0xB5(0xB)
};

// Object: Class MotionWarping.RootMotionModifier_Warp
// Size: 0x1B0 (Inherited: 0xC0)
struct URootMotionModifier_Warp : URootMotionModifier
{
	struct FName WarpTargetName; // 0xB8(0x8)
	enum class EWarpPointAnimProvider WarpPointAnimProvider; // 0xC0(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	struct FTransform WarpPointAnimTransform; // 0xD0(0x30)
	struct FName WarpPointAnimBoneName; // 0x100(0x8)
	bool bWarpTranslation; // 0x108(0x1)
	bool bIgnoreZAxis; // 0x109(0x1)
	bool bOnlyZAxis; // 0x10A(0x1)
	enum class EAlphaBlendOption AddTranslationEasingFunc; // 0x10B(0x1)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct UCurveFloat* AddTranslationEasingCurve; // 0x110(0x8)
	bool bWarpRotation; // 0x118(0x1)
	enum class EMotionWarpRotationType RotationType; // 0x119(0x1)
	uint8_t Pad_0x11A[0x2]; // 0x11A(0x2)
	float WarpRotationTimeMultiplier; // 0x11C(0x4)
	struct FTransform CachedTargetTransform; // 0x120(0x30)
	uint8_t Pad_0x150[0x60]; // 0x150(0x60)
};

// Object: Class MotionWarping.RootMotionModifier_SimpleWarp
// Size: 0x1B0 (Inherited: 0x1B0)
struct URootMotionModifier_SimpleWarp : URootMotionModifier_Warp
{
};

// Object: Class MotionWarping.RootMotionModifier_Scale
// Size: 0xD0 (Inherited: 0xC0)
struct URootMotionModifier_Scale : URootMotionModifier
{
	struct FVector Scale; // 0xB8(0xC)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)


	// Object: Function MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3218284
	// Params: [ Num(6) Size(0x30) ]
	struct URootMotionModifier_Scale* AddRootMotionModifierScale(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FVector InScale);
};

// Object: Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// Size: 0x280 (Inherited: 0x1B0)
struct URootMotionModifier_AdjustmentBlendWarp : URootMotionModifier_Warp
{
	bool bWarpIKBones; // 0x1B0(0x1)
	uint8_t Pad_0x1B1[0x7]; // 0x1B1(0x7)
	struct TArray<struct FName> IKBones; // 0x1B8(0x10)
	uint8_t Pad_0x1C8[0x8]; // 0x1C8(0x8)
	struct FTransform CachedMeshTransform; // 0x1D0(0x30)
	struct FTransform CachedMeshRelativeTransform; // 0x200(0x30)
	struct FTransform CachedRootMotion; // 0x230(0x30)
	struct FAnimSequenceTrackContainer Result; // 0x260(0x20)


	// Object: Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.GetAdjustmentBlendIKBoneTransformAndAlpha
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3218970
	// Params: [ Num(4) Size(0x44) ]
	void GetAdjustmentBlendIKBoneTransformAndAlpha(struct ACharacter* Character, struct FName BoneName, struct FTransform& OutTransform, float& OutAlpha);

	// Object: Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.AddRootMotionModifierAdjustmentBlendWarp
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3218b0c
	// Params: [ Num(14) Size(0x88) ]
	struct URootMotionModifier_AdjustmentBlendWarp* AddRootMotionModifierAdjustmentBlendWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, struct TArray<struct FName>& InIKBones);
};

// Object: Class MotionWarping.RootMotionModifier_SkewWarp
// Size: 0x1E0 (Inherited: 0x1B0)
struct URootMotionModifier_SkewWarp : URootMotionModifier_Warp
{
	uint8_t Pad_0x1B0[0x1C]; // 0x1B0(0x1C)
	float MaxWarpDistance; // 0x1CC(0x4)
	float MaxWarpAngle; // 0x1D0(0x4)
	bool bClampByWarpDir2D; // 0x1D4(0x1)
	uint8_t Pad_0x1D5[0xB]; // 0x1D5(0xB)


	// Object: Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3219304
	// Params: [ Num(14) Size(0x78) ]
	struct URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
};

} // namespace SDK
