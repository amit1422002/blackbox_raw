// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class KawaiiPhysics.AnimNotify_KawaiiPhysicsAddExternalForce
// Size: 0xA0 (Inherited: 0x38)
struct UAnimNotify_KawaiiPhysicsAddExternalForce : UAnimNotify
{
	struct TArray<struct FKawaiiPhysics_ExternalForce_Basic> AdditionalExternalBasicForces; // 0x38(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Curve> AdditionalExternalCurveForces; // 0x48(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Gravity> AdditionalExternalGravityForces; // 0x58(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Wind> AdditionalExternalWindForces; // 0x68(0x10)
	struct FGameplayTagContainer FilterTags; // 0x78(0x20)
	bool bFilterExactMatch; // 0x98(0x1)
	bool bSupportChildComponent; // 0x99(0x1)
	uint8_t Pad_0x9A[0x6]; // 0x9A(0x6)
};

// Object: Class KawaiiPhysics.AnimNotifyState_KawaiiPhysicsAddExternalForce
// Size: 0x98 (Inherited: 0x30)
struct UAnimNotifyState_KawaiiPhysicsAddExternalForce : UAnimNotifyState
{
	struct TArray<struct FKawaiiPhysics_ExternalForce_Basic> AdditionalExternalBasicForces; // 0x30(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Curve> AdditionalExternalCurveForces; // 0x40(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Gravity> AdditionalExternalGravityForces; // 0x50(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Wind> AdditionalExternalWindForces; // 0x60(0x10)
	struct FGameplayTagContainer FilterTags; // 0x70(0x20)
	bool bFilterExactMatch; // 0x90(0x1)
	bool bSupportChildComponent; // 0x91(0x1)
	uint8_t Pad_0x92[0x6]; // 0x92(0x6)
};

// Object: Class KawaiiPhysics.KawaiiPhysicsBoneConstraintsDataAsset
// Size: 0x48 (Inherited: 0x30)
struct UKawaiiPhysicsBoneConstraintsDataAsset : UDataAsset
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct TArray<struct FModifyBoneConstraintData> BoneConstraintsData; // 0x38(0x10)
};

// Object: Class KawaiiPhysics.KawaiiPhysics_CustomExternalForce
// Size: 0x30 (Inherited: 0x28)
struct UKawaiiPhysics_CustomExternalForce : UObject
{
	bool bIsEnabled; // 0x28(0x1)
	bool bDrawDebug; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)


	// Object: Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.PreApply
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5c07ccc
	// Params: [ Num(2) Size(0xCE8) ]
	void PreApply(struct FAnimNode_KawaiiPhysics& Node, struct USkeletalMeshComponent* SkelComp);

	// Object: Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.IsDebugEnabled
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x5c07ac8
	// Params: [ Num(1) Size(0x1) ]
	bool IsDebugEnabled();

	// Object: Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.Apply
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x5c07b08
	// Params: [ Num(4) Size(0xD20) ]
	void Apply(struct FAnimNode_KawaiiPhysics& Node, int32_t ModifyBoneIndex, struct USkeletalMeshComponent* SkelComp, struct FTransform& BoneTransform);
};

// Object: Class KawaiiPhysics.KawaiiPhysicsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKawaiiPhysicsLibrary : UBlueprintFunctionLibrary
{

	// Object: Function KawaiiPhysics.KawaiiPhysicsLibrary.RemoveExternalForcesFromComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5c09698
	// Params: [ Num(6) Size(0x33) ]
	bool RemoveExternalForcesFromComponent(struct USkeletalMeshComponent* MeshComp, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bSupportChildComponent);

	// Object: Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalWindForcesToComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5c09884
	// Params: [ Num(8) Size(0x44) ]
	bool AddExternalWindForcesToComponent(struct USkeletalMeshComponent* MeshComp, struct TArray<struct FKawaiiPhysics_ExternalForce_Wind>& ExternalForces, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot, bool bSupportChildComponent);

	// Object: Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalGravityForcesToComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5c09b1c
	// Params: [ Num(8) Size(0x44) ]
	bool AddExternalGravityForcesToComponent(struct USkeletalMeshComponent* MeshComp, struct TArray<struct FKawaiiPhysics_ExternalForce_Gravity>& ExternalForces, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot, bool bSupportChildComponent);

	// Object: Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalCurveForcesToComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5c09db4
	// Params: [ Num(8) Size(0x44) ]
	bool AddExternalCurveForcesToComponent(struct USkeletalMeshComponent* MeshComp, struct TArray<struct FKawaiiPhysics_ExternalForce_Curve>& ExternalForces, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot, bool bSupportChildComponent);

	// Object: Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalBasicForcesToComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5c0a04c
	// Params: [ Num(8) Size(0x44) ]
	bool AddExternalBasicForcesToComponent(struct USkeletalMeshComponent* MeshComp, struct TArray<struct FKawaiiPhysics_ExternalForce_Basic>& ExternalForces, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot, bool bSupportChildComponent);
};

// Object: Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
// Size: 0x70 (Inherited: 0x30)
struct UKawaiiPhysicsLimitsDataAsset : UDataAsset
{
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x30(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x40(0x10)
	struct TArray<struct FBoxLimit> BoxLimits; // 0x50(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x60(0x10)
};

// Object: Class KawaiiPhysics.KawaiiPhysicsParamsInterface
// Size: 0x28 (Inherited: 0x28)
struct IKawaiiPhysicsParamsInterface : IInterface
{
};

} // namespace SDK
