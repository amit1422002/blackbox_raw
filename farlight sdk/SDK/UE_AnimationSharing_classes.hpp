// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AnimationSharing.AnimSharingStateInstance
// Size: 0x350 (Inherited: 0x330)
struct UAnimSharingStateInstance : UAnimInstance
{
	struct UAnimSequence* AnimationToPlay; // 0x328(0x8)
	float PermutationTimeOffset; // 0x330(0x4)
	float PlayRate; // 0x334(0x4)
	bool bStateBool; // 0x338(0x1)
	struct UAnimSharingInstance* Instance; // 0x340(0x8)
	uint8_t Pad_0x349[0x7]; // 0x349(0x7)


	// Object: Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x5e0d91c
	// Params: [ Num(1) Size(0x10) ]
	void GetInstancedActors(struct TArray<struct AActor*>& Actors);
};

// Object: Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x340 (Inherited: 0x330)
struct UAnimSharingTransitionInstance : UAnimInstance
{
	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x328(0x8)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x330(0x8)
	float BlendTime; // 0x338(0x4)
	bool bBlendBool; // 0x33C(0x1)
};

// Object: Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x340 (Inherited: 0x330)
struct UAnimSharingAdditiveInstance : UAnimInstance
{
	struct TWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; // 0x328(0x8)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x330(0x8)
	float Alpha; // 0x338(0x4)
	bool bStateBool; // 0x33C(0x1)
};

// Object: Class AnimationSharing.AnimSharingInstance
// Size: 0x138 (Inherited: 0x28)
struct UAnimSharingInstance : UObject
{
	struct TArray<struct AActor*> RegisteredActors; // 0x28(0x10)
	uint8_t Pad_0x38[0x70]; // 0x38(0x70)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0xA8(0x8)
	uint8_t Pad_0xB0[0x38]; // 0xB0(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xE8(0x10)
	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
	struct UEnum* StateEnum; // 0x108(0x8)
	struct AActor* SharingActor; // 0x110(0x8)
	uint8_t Pad_0x118[0x20]; // 0x118(0x20)
};

// Object: Class AnimationSharing.AnimationSharingManager
// Size: 0x88 (Inherited: 0x28)
struct UAnimationSharingManager : UObject
{
	struct TArray<struct USkeleton*> Skeletons; // 0x28(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x38(0x10)
	uint8_t Pad_0x48[0x40]; // 0x48(0x40)


	// Object: Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e0e690
	// Params: [ Num(2) Size(0x10) ]
	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton);

	// Object: Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5e0e85c
	// Params: [ Num(2) Size(0x10) ]
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject);

	// Object: Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5e0e774
	// Params: [ Num(3) Size(0x11) ]
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup);

	// Object: Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5e0e658
	// Params: [ Num(1) Size(0x1) ]
	bool AnimationSharingEnabled();
};

// Object: Class AnimationSharing.AnimationSharingSetup
// Size: 0x48 (Inherited: 0x28)
struct UAnimationSharingSetup : UObject
{
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x38(0x10)
};

// Object: Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x50 (Inherited: 0x28)
struct UAnimationSharingStateProcessor : UObject
{
	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28(0x28)


	// Object: Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5e0f3cc
	// Params: [ Num(5) Size(0x13) ]
	void ProcessActorState(int32_t& OutState, struct AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess);

	// Object: Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x5e0f390
	// Params: [ Num(1) Size(0x8) ]
	struct UEnum* GetAnimationStateEnum();
};

} // namespace SDK
