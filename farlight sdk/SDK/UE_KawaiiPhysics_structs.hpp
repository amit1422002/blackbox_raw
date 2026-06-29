// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum KawaiiPhysics.EXPBDComplianceType
enum class EXPBDComplianceType : uint8_t
{
	Concrete = 0,
	Wood = 1,
	Leather = 2,
	Tendon = 3,
	Rubber = 4,
	Muscle = 5,
	Fat = 6,
	EXPBDComplianceType_MAX = 7
};

// Object: Enum KawaiiPhysics.EConstraintAdjustType
enum class EConstraintAdjustType : uint8_t
{
	CAT_Default = 0,
	CAT_OnlyAdjustByCollision = 1,
	CAT_All = 2,
	CAT_Max = 3
};

// Object: Enum KawaiiPhysics.EDefaultBoneType
enum class EDefaultBoneType : uint8_t
{
	DB_TypeDefault = 0,
	DB_Type0 = 1,
	DB_Type1 = 2,
	DB_Type2 = 3,
	DB_Type3 = 4,
	DB_Type4 = 5,
	DB_Type5 = 6,
	DB_Type6 = 7,
	DB_Max = 8
};

// Object: Enum KawaiiPhysics.EPhysicsSettingType
enum class EPhysicsSettingType : uint8_t
{
	PS_Default = 0,
	PS_Type1 = 1,
	PS_Type2 = 2,
	PS_Type3 = 3,
	PS_Type4 = 4,
	PS_Type5 = 5,
	PS_Type6 = 6,
	PS_Type7 = 7,
	PS_Type8 = 8,
	PS_Type9 = 9,
	PS_Max = 10
};

// Object: Enum KawaiiPhysics.EAngleLimitShape
enum class EAngleLimitShape : uint8_t
{
	AL_CircularCone = 0,
	AL_EllipsoidalCone = 1,
	AL_EllipsoidalConeKeepLargeAngle = 2,
	AL_MAX = 3
};

// Object: Enum KawaiiPhysics.ESimulateTransformSpace
enum class ESimulateTransformSpace : uint8_t
{
	STS_Actor = 0,
	STS_Component = 1,
	STS_MAX = 2
};

// Object: Enum KawaiiPhysics.ECollisionSourceType
enum class ECollisionSourceType : uint8_t
{
	AnimNode = 0,
	DataAsset = 1,
	PhysicsAsset = 2,
	ECollisionSourceType_MAX = 3
};

// Object: Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8_t
{
	None = 0,
	Spherical = 1,
	Capsule = 2,
	Box = 3,
	Planar = 4,
	ECollisionLimitType_MAX = 5
};

// Object: Enum KawaiiPhysics.EBoneCollisionType
enum class EBoneCollisionType : uint8_t
{
	Spherical = 0,
	Box = 1,
	EBoneCollisionType_MAX = 2
};

// Object: Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8_t
{
	X_Positive = 0,
	X_Negative = 1,
	Y_Positive = 2,
	Y_Negative = 3,
	Z_Positive = 4,
	Z_Negative = 5,
	EBoneForwardAxis_MAX = 6
};

// Object: Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EPlanarConstraint_MAX = 4
};

// Object: Enum KawaiiPhysics.EExternalForceCurveEvaluateType
enum class EExternalForceCurveEvaluateType : uint8_t
{
	Single = 0,
	Average = 1,
	Max = 2,
	Min = 3
};

// Object: Enum KawaiiPhysics.EExternalForceSpace
enum class EExternalForceSpace : uint8_t
{
	ComponentSpace = 0,
	WorldSpace = 1,
	BoneSpace = 2,
	EExternalForceSpace_MAX = 3
};

// Object: ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// Size: 0xCE0 (Inherited: 0xD0)
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase
{
	struct FBoneReference RootBone; // 0xD0(0x10)
	struct TArray<struct FBoneReference> ExcludeBones; // 0xE0(0x10)
	struct TArray<struct FKawaiiPhysicsRootBoneSetting> AdditionalRootBones; // 0xF0(0x10)
	uint8_t OverrideDefaultBoneType; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	float DummyBoneLength; // 0x104(0x4)
	uint8_t SimulateTransformSpace; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	struct FName MeshRootBoneName; // 0x10C(0x8)
	enum class EBoneForwardAxis BoneForwardAxis; // 0x114(0x1)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x118(0x24)
	uint8_t CurrentPhysicsSettingType; // 0x13C(0x1)
	uint8_t Pad_0x13D[0x3]; // 0x13D(0x3)
	struct TMap<uint8_t, struct FKawaiiPhysicsSettings> ExtraPhysicsSettings; // 0x140(0x50)
	struct TArray<struct FKawaiiBoneLimitAngleSettings> LimitAngleRotatorsOverride; // 0x190(0x10)
	bool bUsingPhysicsAssetToOverrideCollision; // 0x1A0(0x1)
	uint8_t Pad_0x1A1[0x7]; // 0x1A1(0x7)
	struct UPhysicsAsset* PhysicsAssetForOverrideCollision; // 0x1A8(0x8)
	float MinCalculateDeltaTime; // 0x1B0(0x4)
	bool OverrideMinCalculateDeltaTime; // 0x1B4(0x1)
	bool bUseCalculatedTransform; // 0x1B5(0x1)
	bool bUseIndependentPhysicsSetting; // 0x1B6(0x1)
	uint8_t Pad_0x1B7[0x1]; // 0x1B7(0x1)
	struct TMap<struct FName, struct FKawaiiBonePhysicsSettings> BoneIndependentPhysicsSettings; // 0x1B8(0x50)
	int32_t TargetFramerate; // 0x208(0x4)
	bool OverrideTargetFramerate; // 0x20C(0x1)
	uint8_t Pad_0x20D[0x3]; // 0x20D(0x3)
	int32_t WarmUpFrames; // 0x210(0x4)
	bool bUseWarmUpWhenResetDynamics; // 0x214(0x1)
	bool bNeedWarmUp; // 0x215(0x1)
	uint8_t Pad_0x216[0x2]; // 0x216(0x2)
	float TeleportDistanceThreshold; // 0x218(0x4)
	float TeleportRotationThreshold; // 0x21C(0x4)
	enum class EPlanarConstraint PlanarConstraint; // 0x220(0x1)
	uint8_t Pad_0x221[0x1]; // 0x221(0x1)
	bool ResetBoneTransformWhenBoneNotFound; // 0x222(0x1)
	uint8_t Pad_0x223[0x5]; // 0x223(0x5)
	struct UCurveFloat* DampingCurve; // 0x228(0x8)
	struct UCurveFloat* WorldDampingLocationCurve; // 0x230(0x8)
	struct UCurveFloat* WorldDampingRotationCurve; // 0x238(0x8)
	struct UCurveFloat* StiffnessCurve; // 0x240(0x8)
	struct UCurveFloat* RadiusCurve; // 0x248(0x8)
	struct UCurveFloat* LimitAngleCurve; // 0x250(0x8)
	struct FRuntimeFloatCurve DampingCurveData; // 0x258(0x88)
	struct FRuntimeFloatCurve StiffnessCurveData; // 0x2E0(0x88)
	struct FRuntimeFloatCurve WorldDampingLocationCurveData; // 0x368(0x88)
	struct FRuntimeFloatCurve WorldDampingRotationCurveData; // 0x3F0(0x88)
	struct FRuntimeFloatCurve RadiusCurveData; // 0x478(0x88)
	struct FRuntimeFloatCurve LimitAngleCurveData; // 0x500(0x88)
	struct FRuntimeFloatCurve LimitAngle2CurveData; // 0x588(0x88)
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x610(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x620(0x10)
	struct TArray<struct FBoxLimit> BoxLimits; // 0x630(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x640(0x10)
	struct UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset; // 0x650(0x8)
	struct UPhysicsAsset* PhysicsAssetForLimits; // 0x658(0x8)
	struct UPhysicsAsset* ParentMeshPhysicsAssetForLimits; // 0x660(0x8)
	struct TArray<struct FName> ParentMeshBonesForLimits; // 0x668(0x10)
	bool bEnableBoneLimitAntiPenetration; // 0x678(0x1)
	uint8_t Pad_0x679[0x3]; // 0x679(0x3)
	float DampingForMoveAlongLimit; // 0x67C(0x4)
	struct TArray<struct FSphericalLimit> SphericalLimitsData; // 0x680(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimitsData; // 0x690(0x10)
	struct TArray<struct FBoxLimit> BoxLimitsData; // 0x6A0(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimitsData; // 0x6B0(0x10)
	enum class EXPBDComplianceType BoneConstraintGlobalComplianceType; // 0x6C0(0x1)
	uint8_t Pad_0x6C1[0x3]; // 0x6C1(0x3)
	int32_t BoneConstraintIterationCountBeforeCollision; // 0x6C4(0x4)
	int32_t BoneConstraintIterationCountAfterCollision; // 0x6C8(0x4)
	bool bAutoAddChildDummyBoneConstraint; // 0x6CC(0x1)
	bool bUsingAxisYForUp; // 0x6CD(0x1)
	bool bEnableAdjustPoseByConstraint; // 0x6CE(0x1)
	uint8_t Pad_0x6CF[0x1]; // 0x6CF(0x1)
	float InterpSpeedForPitchUp; // 0x6D0(0x4)
	float InterpSpeedForPitchDown; // 0x6D4(0x4)
	float LocalAdditivePitchMax; // 0x6D8(0x4)
	uint8_t Pad_0x6DC[0x4]; // 0x6DC(0x4)
	struct FRuntimeFloatCurve LiftUpRateMappingCurveData; // 0x6E0(0x88)
	struct FRuntimeFloatCurve ChildOpposingRotatorCurveData; // 0x768(0x88)
	struct FRuntimeFloatCurve AngleToMaxAllowedPitchCurve; // 0x7F0(0x88)
	struct TArray<struct FModifyBoneConstraint> BoneConstraints; // 0x878(0x10)
	struct UKawaiiPhysicsBoneConstraintsDataAsset* BoneConstraintsDataAsset; // 0x888(0x8)
	struct TArray<struct FModifyBoneConstraint> BoneConstraintsData; // 0x890(0x10)
	struct TArray<struct FModifyBoneConstraint> MergedBoneConstraints; // 0x8A0(0x10)
	struct FVector Gravity; // 0x8B0(0xC)
	bool bEnableWind; // 0x8BC(0x1)
	uint8_t Pad_0x8BD[0x3]; // 0x8BD(0x3)
	float WindScale; // 0x8C0(0x4)
	uint8_t Pad_0x8C4[0x4]; // 0x8C4(0x4)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Basic> BasicExternalForces; // 0x8C8(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Curve> CurveExternalForces; // 0x8D8(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Gravity> GravityExternalForces; // 0x8E8(0x10)
	struct TArray<struct FKawaiiPhysics_ExternalForce_Wind> WindExternalForces; // 0x8F8(0x10)
	struct TArray<struct UKawaiiPhysics_CustomExternalForce*> CustomExternalForces; // 0x908(0x10)
	bool bAllowWorldCollision; // 0x918(0x1)
	bool bOverrideCollisionParams; // 0x919(0x1)
	uint8_t Pad_0x91A[0x6]; // 0x91A(0x6)
	struct FBodyInstance CollisionChannelSettings; // 0x920(0x130)
	bool bIgnoreSelfComponent; // 0xA50(0x1)
	uint8_t Pad_0xA51[0x7]; // 0xA51(0x7)
	struct TArray<struct FBoneReference> IgnoreBones; // 0xA58(0x10)
	struct TArray<struct FName> IgnoreBoneNamePrefix; // 0xA68(0x10)
	struct FGameplayTag KawaiiPhysicsTag; // 0xA78(0x8)
	struct TArray<struct FKawaiiPhysicsModifyBone> ModifyBones; // 0xA80(0x10)
	float DeltaTime; // 0xA90(0x4)
	uint8_t Pad_0xA94[0xC]; // 0xA94(0xC)
	struct FTransform PreSkelCompTransform; // 0xAA0(0x30)
	bool bInitPhysicsSettings; // 0xAD0(0x1)
	uint8_t Pad_0xAD1[0x20F]; // 0xAD1(0x20F)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// Size: 0x1C0 (Inherited: 0x0)
struct FKawaiiPhysicsModifyBone
{
	struct FBoneReference BoneRef; // 0x0(0x10)
	int32_t Index; // 0x10(0x4)
	int32_t ParentIndex; // 0x14(0x4)
	struct TArray<int32_t> ChildIndices; // 0x18(0x10)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x28(0x24)
	struct FVector Location; // 0x4C(0xC)
	struct FVector PrevLocation; // 0x58(0xC)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
	struct FQuat PrevRotation; // 0x70(0x10)
	struct FVector PoseLocation; // 0x80(0xC)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FQuat PoseRotation; // 0x90(0x10)
	uint8_t Pad_0xA0[0xD4]; // 0xA0(0xD4)
	struct FVector PoseScale; // 0x174(0xC)
	float LengthFromRoot; // 0x180(0x4)
	float LengthRateFromRoot; // 0x184(0x4)
	bool bDummy; // 0x188(0x1)
	bool bSkipSimulate; // 0x189(0x1)
	uint8_t Pad_0x18A[0x36]; // 0x18A(0x36)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// Size: 0x24 (Inherited: 0x0)
struct FKawaiiPhysicsSettings
{
	float Damping; // 0x0(0x4)
	float Stiffness; // 0x4(0x4)
	float WorldDampingLocation; // 0x8(0x4)
	float WorldDampingRotation; // 0xC(0x4)
	float Radius; // 0x10(0x4)
	float LimitAngle; // 0x14(0x4)
	uint8_t AngleLimitShape; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float LimitAngle2; // 0x1C(0x4)
	float BlendTime; // 0x20(0x4)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce
// Size: 0xA0 (Inherited: 0x0)
struct FKawaiiPhysics_ExternalForce
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	bool bIsEnabled; // 0x8(0x1)
	bool bDrawDebug; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct TArray<struct FBoneReference> ApplyBoneFilter; // 0x10(0x10)
	struct TArray<struct FBoneReference> IgnoreBoneFilter; // 0x20(0x10)
	enum class EExternalForceSpace ExternalForceSpace; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	struct FFloatInterval RandomForceScaleRange; // 0x34(0x8)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct UObject* ExternalOwner; // 0x40(0x8)
	bool bIsOneShot; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float RandomizedForceScale; // 0x4C(0x4)
	struct FVector Force; // 0x50(0xC)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FTransform ComponentTransform; // 0x60(0x30)
	bool bCanSelectForceSpace; // 0x90(0x1)
	uint8_t Pad_0x91[0xF]; // 0x91(0xF)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce_Wind
// Size: 0x130 (Inherited: 0xA0)
struct FKawaiiPhysics_ExternalForce_Wind : FKawaiiPhysics_ExternalForce
{
	struct FRuntimeFloatCurve ForceRateByBoneLengthRate; // 0x98(0x88)
	struct UWorld* World; // 0x120(0x8)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce_Gravity
// Size: 0x140 (Inherited: 0xA0)
struct FKawaiiPhysics_ExternalForce_Gravity : FKawaiiPhysics_ExternalForce
{
	struct FRuntimeFloatCurve ForceRateByBoneLengthRate; // 0x98(0x88)
	bool bUseCharacterGravityDirection; // 0x120(0x1)
	bool bUseCharacterGravityScale; // 0x121(0x1)
	struct FVector OverrideGravityDirection; // 0x124(0xC)
	bool bUseOverrideGravityDirection; // 0x130(0x1)
	uint8_t Pad_0x137[0x9]; // 0x137(0x9)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce_Curve
// Size: 0x2D0 (Inherited: 0xA0)
struct FKawaiiPhysics_ExternalForce_Curve : FKawaiiPhysics_ExternalForce
{
	struct FRuntimeVectorCurve ForceCurve; // 0x98(0x188)
	enum class EExternalForceCurveEvaluateType CurveEvaluateType; // 0x220(0x1)
	int32_t SubstepCount; // 0x224(0x4)
	float TimeScale; // 0x228(0x4)
	struct FRuntimeFloatCurve ForceRateByBoneLengthRate; // 0x230(0x88)
	float Time; // 0x2B8(0x4)
	float PrevTime; // 0x2BC(0x4)
	float MaxCurveTime; // 0x2C0(0x4)
	uint8_t Pad_0x2C5[0xB]; // 0x2C5(0xB)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce_Basic
// Size: 0x140 (Inherited: 0xA0)
struct FKawaiiPhysics_ExternalForce_Basic : FKawaiiPhysics_ExternalForce
{
	struct FVector ForceDir; // 0x94(0xC)
	struct FRuntimeFloatCurve ForceRateByBoneLengthRate; // 0xA0(0x88)
	float Interval; // 0x128(0x4)
	float Time; // 0x12C(0x4)
	float PrevTime; // 0x130(0x4)
};

// Object: ScriptStruct KawaiiPhysics.ModifyBoneConstraint
// Size: 0x90 (Inherited: 0x0)
struct FModifyBoneConstraint
{
	struct FBoneReference Bone1; // 0x0(0x10)
	struct FBoneReference Bone2; // 0x10(0x10)
	bool bOverrideCompliance; // 0x20(0x1)
	enum class EXPBDComplianceType ComplianceType; // 0x21(0x1)
	uint8_t ConstraintAdjustType; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	float DisSQThresholdForLiftUp; // 0x24(0x4)
	struct TSet<struct FName> SupportCollisionBoneNames; // 0x28(0x50)
	int32_t ModifyBoneIndex1; // 0x78(0x4)
	int32_t ModifyBoneIndex2; // 0x7C(0x4)
	float Length; // 0x80(0x4)
	bool bIsDummy; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	float Lambda; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct KawaiiPhysics.CollisionLimitBase
// Size: 0x60 (Inherited: 0x0)
struct FCollisionLimitBase
{
	struct FBoneReference DrivingBone; // 0x0(0x10)
	struct FVector OffsetLocation; // 0x10(0xC)
	struct FRotator OffsetRotation; // 0x1C(0xC)
	struct FVector Location; // 0x28(0xC)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
	struct FQuat Rotation; // 0x40(0x10)
	bool bEnable; // 0x50(0x1)
	enum class ECollisionSourceType SourceType; // 0x51(0x1)
	uint8_t Pad_0x52[0xE]; // 0x52(0xE)
};

// Object: ScriptStruct KawaiiPhysics.PlanarLimit
// Size: 0x70 (Inherited: 0x60)
struct FPlanarLimit : FCollisionLimitBase
{
	struct FPlane Plane; // 0x60(0x10)
};

// Object: ScriptStruct KawaiiPhysics.BoxLimit
// Size: 0x70 (Inherited: 0x60)
struct FBoxLimit : FCollisionLimitBase
{
	struct FVector Extent; // 0x5C(0xC)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct KawaiiPhysics.CapsuleLimit
// Size: 0x70 (Inherited: 0x60)
struct FCapsuleLimit : FCollisionLimitBase
{
	float Radius; // 0x5C(0x4)
	float Length; // 0x60(0x4)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct KawaiiPhysics.SphericalLimit
// Size: 0x70 (Inherited: 0x60)
struct FSphericalLimit : FCollisionLimitBase
{
	float Radius; // 0x5C(0x4)
	enum class ESphericalLimitType LimitType; // 0x60(0x1)
	uint8_t Pad_0x65[0xB]; // 0x65(0xB)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiBonePhysicsSettings
// Size: 0x28 (Inherited: 0x0)
struct FKawaiiBonePhysicsSettings
{
	struct FKawaiiPhysicsSettings PhysicsSetting; // 0x0(0x24)
	bool OverridePhysicsSetting; // 0x24(0x1)
	bool bEnablePhysicsInherit; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiBoneLimitAngleSettings
// Size: 0x1C (Inherited: 0x0)
struct FKawaiiBoneLimitAngleSettings
{
	struct FBoneReference BoneRef; // 0x0(0x10)
	struct FRotator LocalRotator; // 0x10(0xC)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysicsRootBoneSetting
// Size: 0x28 (Inherited: 0x0)
struct FKawaiiPhysicsRootBoneSetting
{
	struct FBoneReference RootBone; // 0x0(0x10)
	struct TArray<struct FBoneReference> OverrideExcludeBones; // 0x10(0x10)
	bool bUseOverrideExcludeBones; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct KawaiiPhysics.ParentMeshTransformData
// Size: 0x40 (Inherited: 0x0)
struct FParentMeshTransformData
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct KawaiiPhysics.RegexPatternBoneSet
// Size: 0x20 (Inherited: 0x0)
struct FRegexPatternBoneSet
{
	struct FString RegexPatternBone1; // 0x0(0x10)
	struct FString RegexPatternBone2; // 0x10(0x10)
};

// Object: ScriptStruct KawaiiPhysics.ModifyBoneConstraintData
// Size: 0x34 (Inherited: 0x0)
struct FModifyBoneConstraintData
{
	struct FName BoneName1; // 0x0(0x8)
	struct FName BoneName2; // 0x8(0x8)
	struct FBoneReference BoneReference1; // 0x10(0x10)
	struct FBoneReference BoneReference2; // 0x20(0x10)
	bool bOverrideCompliance; // 0x30(0x1)
	enum class EXPBDComplianceType ComplianceType; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
};

// Object: ScriptStruct KawaiiPhysics.CollisionLimitDataBase
// Size: 0x60 (Inherited: 0x0)
struct FCollisionLimitDataBase
{
	struct FBoneReference DrivingBoneReference; // 0x0(0x10)
	struct FName DrivingBoneName; // 0x10(0x8)
	struct FVector OffsetLocation; // 0x18(0xC)
	struct FRotator OffsetRotation; // 0x24(0xC)
	struct FVector Location; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FQuat Rotation; // 0x40(0x10)
	struct FGuid Guid; // 0x50(0x10)
};

// Object: ScriptStruct KawaiiPhysics.PlanarLimitData
// Size: 0x70 (Inherited: 0x60)
struct FPlanarLimitData : FCollisionLimitDataBase
{
	struct FPlane Plane; // 0x60(0x10)
};

// Object: ScriptStruct KawaiiPhysics.BoxLimitData
// Size: 0x70 (Inherited: 0x60)
struct FBoxLimitData : FCollisionLimitDataBase
{
	struct FVector Extent; // 0x60(0xC)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct KawaiiPhysics.CapsuleLimitData
// Size: 0x70 (Inherited: 0x60)
struct FCapsuleLimitData : FCollisionLimitDataBase
{
	float Radius; // 0x60(0x4)
	float Length; // 0x64(0x4)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct KawaiiPhysics.SphericalLimitData
// Size: 0x70 (Inherited: 0x60)
struct FSphericalLimitData : FCollisionLimitDataBase
{
	float Radius; // 0x60(0x4)
	enum class ESphericalLimitType LimitType; // 0x64(0x1)
	uint8_t Pad_0x65[0xB]; // 0x65(0xB)
};

// Object: ScriptStruct KawaiiPhysics.DefaultBoneParams
// Size: 0x30 (Inherited: 0x0)
struct FDefaultBoneParams
{
	struct FBoneReference KawaiiRootBone; // 0x0(0x10)
	struct TArray<struct FBoneReference> KawaiiExcludeBones; // 0x10(0x10)
	struct TArray<struct FKawaiiPhysicsRootBoneSetting> KawaiiAdditionalRootBones; // 0x20(0x10)
};

} // namespace SDK
