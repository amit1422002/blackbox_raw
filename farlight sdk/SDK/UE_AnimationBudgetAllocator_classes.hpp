// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x3012200
	// Params: [ Num(2) Size(0x5C) ]
	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters);

	// Object: Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x3012360
	// Params: [ Num(2) Size(0x9) ]
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled);
};

// Object: Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xDE0 (Inherited: 0xDB0)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent
{
	uint8_t AnimDetailMode; // 0xDB0(0x1)
	uint8_t Pad_0xDB1[0x27]; // 0xDB1(0x27)
	uint8_t bAutoRegisterWithBudgetAllocator : 1; // 0xDD8(0x1), Mask(0x1)
	uint8_t bAutoCalculateSignificance : 1; // 0xDD8(0x1), Mask(0x2)
	uint8_t bShouldUseActorRenderedFlag : 1; // 0xDD8(0x1), Mask(0x4)
	uint8_t BitPad_0xDD8_3 : 5; // 0xDD8(0x1)
	uint8_t Pad_0xDD9[0x7]; // 0xDD9(0x7)


	// Object: Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3012758
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};

} // namespace SDK
