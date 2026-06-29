// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x2 (Inherited: 0x0)
struct FLevelSequenceCameraSettings
{
	bool bOverrideAspectRatioAxisConstraint; // 0x0(0x1)
	uint8_t AspectRatioAxisConstraint; // 0x1(0x1)
};

// Object: ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x1 (Inherited: 0x0)
struct FBoundActorProxy
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0xA0 (Inherited: 0x0)
struct FLevelSequenceBindingReferences
{
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50(0x50)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10 (Inherited: 0x0)
struct FLevelSequenceBindingReferenceArray
{
	struct TArray<struct FLevelSequenceBindingReference> References; // 0x0(0x10)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x40 (Inherited: 0x0)
struct FLevelSequenceBindingReference
{
	struct FString PackageName; // 0x0(0x10)
	struct FSoftObjectPath ExternalObjectPath; // 0x10(0x18)
	struct FString ObjectPath; // 0x28(0x10)
	uint32_t ReplayNetworkGUID; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50 (Inherited: 0x0)
struct FLevelSequenceObjectReferenceMap
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20 (Inherited: 0x0)
struct FLevelSequenceLegacyObjectReference
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38 (Inherited: 0x0)
struct FLevelSequenceObject
{
	struct TLazyObjectPtr<struct UObject> ObjectOrOwner; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ComponentName; // 0x20(0x10)
	struct TWeakObjectPtr<struct UObject> CachedComponent; // 0x30(0x8)
};

// Object: ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xB8 (Inherited: 0x0)
struct FLevelSequencePlayerSnapshot
{
	struct FString MasterName; // 0x0(0x10)
	struct FQualifiedFrameTime MasterTime; // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20(0x10)
	struct FString CurrentShotName; // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	struct FString SourceTimecode; // 0x60(0x10)
	struct TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70(0x28)
	struct FLevelSequenceSnapshotSettings Settings; // 0x98(0xC)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct ULevelSequence* ActiveShot; // 0xA8(0x8)
	struct FMovieSceneSequenceID ShotID; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0xC (Inherited: 0x0)
struct FLevelSequenceSnapshotSettings
{
	uint8_t ZeroPadAmount; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FFrameRate FrameRate; // 0x4(0x8)
};

} // namespace SDK
