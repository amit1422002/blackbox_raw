// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum MotionWarping.EWarpPointAnimProvider
enum class EWarpPointAnimProvider : uint8_t
{
	None = 0,
	Static = 1,
	Bone = 2,
	EWarpPointAnimProvider_MAX = 3
};

// Object: Enum MotionWarping.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8_t
{
	Default = 0,
	Facing = 1,
	EMotionWarpRotationType_MAX = 2
};

// Object: Enum MotionWarping.ERootMotionModifierState
enum class ERootMotionModifierState : uint8_t
{
	Waiting = 0,
	Active = 1,
	MarkedForRemoval = 2,
	Disabled = 3,
	ERootMotionModifierState_MAX = 4
};

// Object: ScriptStruct MotionWarping.MotionWarpingWindowData
// Size: 0x10 (Inherited: 0x0)
struct FMotionWarpingWindowData
{
	struct UAnimNotifyState_MotionWarping* AnimNotify; // 0x0(0x8)
	float StartTime; // 0x8(0x4)
	float EndTime; // 0xC(0x4)
};

// Object: ScriptStruct MotionWarping.MotionWarpingTarget
// Size: 0x34 (Inherited: 0x0)
struct FMotionWarpingTarget
{
	struct FName Name; // 0x0(0x8)
	struct FVector Location; // 0x8(0xC)
	struct FRotator Rotation; // 0x14(0xC)
	struct TWeakObjectPtr<struct USceneComponent> Component; // 0x20(0x8)
	struct FName BoneName; // 0x28(0x8)
	bool bFollowComponent; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
};

// Object: ScriptStruct MotionWarping.MotionWarpingUpdateContext
// Size: 0x1C (Inherited: 0x0)
struct FMotionWarpingUpdateContext
{
	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; // 0x0(0x8)
	float PreviousPosition; // 0x8(0x4)
	float CurrentPosition; // 0xC(0x4)
	float Weight; // 0x10(0x4)
	float PlayRate; // 0x14(0x4)
	float DeltaSeconds; // 0x18(0x4)
};

// Object: ScriptStruct MotionWarping.MotionDeltaTrackContainer
// Size: 0x10 (Inherited: 0x0)
struct FMotionDeltaTrackContainer
{
	struct TArray<struct FMotionDeltaTrack> Tracks; // 0x0(0x10)
};

// Object: ScriptStruct MotionWarping.MotionDeltaTrack
// Size: 0x48 (Inherited: 0x0)
struct FMotionDeltaTrack
{
	struct TArray<struct FTransform> BoneTransformTrack; // 0x0(0x10)
	struct TArray<struct FVector> DeltaTranslationTrack; // 0x10(0x10)
	struct TArray<struct FRotator> DeltaRotationTrack; // 0x20(0x10)
	struct FVector TotalTranslation; // 0x30(0xC)
	struct FRotator TotalRotation; // 0x3C(0xC)
};

} // namespace SDK
