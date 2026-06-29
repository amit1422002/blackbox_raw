// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
	Runtime = 0,
	Editing = 1,
	Max = 2
};

// Object: Enum ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
	LocalSpace = 0,
	GlobalSpace = 1,
	Max = 2
};

// Object: Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
	Initial = 0,
	Current = 1,
	Max = 2
};

// Object: Enum ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8_t
{
	Plane = 0,
	Cylinder = 1,
	Sphere = 2,
	EControlRigClampSpatialMode_MAX = 3
};

// Object: Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
	LocalSpace = 0,
	GlobalSpace = 1,
	BaseSpace = 2,
	BaseJoint = 3,
	Max = 4
};

// Object: Enum ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8_t
{
	Points = 0,
	Lines = 1,
	LineStrip = 2,
	EControlRigDrawSettings_MAX = 3
};

// Object: Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
	Axes = 0,
	Max = 1
};

// Object: Enum ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInOut = 3,
	CubicEaseIn = 4,
	CubicEaseOut = 5,
	CubicEaseInOut = 6,
	QuarticEaseIn = 7,
	QuarticEaseOut = 8,
	QuarticEaseInOut = 9,
	QuinticEaseIn = 10,
	QuinticEaseOut = 11,
	QuinticEaseInOut = 12,
	SineEaseIn = 13,
	SineEaseOut = 14,
	SineEaseInOut = 15,
	CircularEaseIn = 16,
	CircularEaseOut = 17,
	CircularEaseInOut = 18,
	ExponentialEaseIn = 19,
	ExponentialEaseOut = 20,
	ExponentialEaseInOut = 21,
	ElasticEaseIn = 22,
	ElasticEaseOut = 23,
	ElasticEaseInOut = 24,
	BackEaseIn = 25,
	BackEaseOut = 26,
	BackEaseInOut = 27,
	BounceEaseIn = 28,
	BounceEaseOut = 29,
	BounceEaseInOut = 30,
	EControlRigAnimEasingType_MAX = 31
};

// Object: Enum ControlRig.EControlRigRotationOrder
enum class EControlRigRotationOrder : uint8_t
{
	XYZ = 0,
	XZY = 1,
	YXZ = 2,
	YZX = 3,
	ZXY = 4,
	ZYX = 5,
	EControlRigRotationOrder_MAX = 6
};

// Object: Enum ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
	Verlet = 0,
	SemiExplicitEuler = 1,
	ECRSimPointIntegrateType_MAX = 2
};

// Object: Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
	Distance = 0,
	DistanceFromA = 1,
	DistanceFromB = 2,
	Plane = 3,
	ECRSimConstraintType_MAX = 4
};

// Object: Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
	Direction = 0,
	ECRSimPointForceType_MAX = 1
};

// Object: Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
	Plane = 0,
	Sphere = 1,
	Cone = 2,
	ECRSimSoftCollisionType_MAX = 3
};

// Object: Enum ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
	Imported = 0,
	User = 1,
	ERigBoneType_MAX = 2
};

// Object: Enum ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	ERigControlAxis_MAX = 3
};

// Object: Enum ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
	Initial = 0,
	Current = 1,
	Minimum = 2,
	Maximum = 3,
	ERigControlValueType_MAX = 4
};

// Object: Enum ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
	Bool = 0,
	Float = 1,
	Vector2D = 2,
	Position = 3,
	Scale = 4,
	Rotator = 5,
	Transform = 6,
	TransformNoScale = 7,
	ERigControlType_MAX = 8
};

// Object: Enum ControlRig.ERigHierarchyImportMode
enum class ERigHierarchyImportMode : uint8_t
{
	Append = 0,
	Replace = 1,
	ReplaceLocalTransform = 2,
	ReplaceGlobalTransform = 3,
	Max = 4
};

// Object: Enum ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
	None = 0,
	Bone = 1,
	Space = 2,
	Control = 4,
	Curve = 8,
	All = 15,
	ERigElementType_MAX = 16
};

// Object: Enum ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
	Global = 0,
	Bone = 1,
	Control = 2,
	Space = 3,
	ERigSpaceType_MAX = 4
};

// Object: Enum ControlRig.EAimMode
enum class EAimMode : uint8_t
{
	AimAtTarget = 0,
	OrientToTarget = 1,
	MAX = 2
};

// Object: Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
	Override = 0,
	Additive = 1,
	Max = 2
};

// Object: Enum ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
	Point = 0,
	Vector = 1,
	Max = 2
};

// Object: Enum ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
	Point = 0,
	Axes = 1,
	Box = 2,
	Max = 3
};

// Object: Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
	Front = 0,
	Stretched = 1,
	EControlRigCurveAlignment_MAX = 2
};

// Object: Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
	Direction = 0,
	Location = 1,
	EControlRigVectorKind_MAX = 2
};

// Object: Enum ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
	OverrideLocal = 0,
	OverrideGlobal = 1,
	AdditiveLocal = 2,
	AdditiveGlobal = 3,
	Max = 4
};

// Object: Enum ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	Point = 0,
	Vector = 1,
	Max = 2
};

// Object: Enum ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
	Init = 0,
	Update = 1,
	Invalid = 2,
	EControlRigState_MAX = 3
};

// Object: ScriptStruct ControlRig.AnimationHierarchy
// Size: 0x88 (Inherited: 0x78)
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{
	struct TArray<struct FConstraintNodeData> UserData; // 0x78(0x10)
};

// Object: ScriptStruct ControlRig.ConstraintNodeData
// Size: 0xB0 (Inherited: 0x0)
struct FConstraintNodeData
{
	struct FTransform RelativeParent; // 0x0(0x30)
	struct FConstraintOffset ConstraintOffset; // 0x30(0x60)
	struct FName LinkedNode; // 0x90(0x8)
	struct TArray<struct FTransformConstraint> Constraints; // 0x98(0x10)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: ScriptStruct ControlRig.AnimNode_ControlRigBase
// Size: 0x170 (Inherited: 0x58)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{
	struct FPoseLink Source; // 0x58(0x10)
	struct TMap<struct FName, uint16_t> ControlRigBoneMapping; // 0x68(0x50)
	struct TMap<struct FName, uint16_t> ControlRigCurveMapping; // 0xB8(0x50)
	struct TMap<struct FName, uint16_t> InputToCurveMappingUIDs; // 0x108(0x50)
	struct TWeakObjectPtr<struct UNodeMappingContainer> NodeMappingContainer; // 0x158(0x8)
	struct FControlRigIOSettings InputSettings; // 0x160(0x2)
	struct FControlRigIOSettings OutputSettings; // 0x162(0x2)
	bool bExecute; // 0x164(0x1)
	uint8_t Pad_0x165[0xB]; // 0x165(0xB)
};

// Object: ScriptStruct ControlRig.ControlRigIOSettings
// Size: 0x2 (Inherited: 0x0)
struct FControlRigIOSettings
{
	bool bUpdatePose; // 0x0(0x1)
	bool bUpdateCurves; // 0x1(0x1)
};

// Object: ScriptStruct ControlRig.AnimNode_ControlRig
// Size: 0x368 (Inherited: 0x170)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{
	struct UControlRig* ControlRigClass; // 0x170(0x8)
	struct UControlRig* ControlRig; // 0x178(0x8)
	float Alpha; // 0x180(0x4)
	enum class EAnimAlphaInputType AlphaInputType; // 0x184(0x1)
	uint8_t bAlphaBoolEnabled : 1; // 0x185(0x1), Mask(0x1)
	uint8_t BitPad_0x185_1 : 7; // 0x185(0x1)
	uint8_t Pad_0x186[0x2]; // 0x186(0x2)
	struct FInputScaleBias AlphaScaleBias; // 0x188(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x190(0x48)
	struct FName AlphaCurveName; // 0x1D8(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x1E0(0x30)
	int32_t LODThreshold; // 0x210(0x4)
	uint8_t bUseOneMinusCurveValue : 1; // 0x214(0x1), Mask(0x1)
	uint8_t BitPad_0x214_1 : 7; // 0x214(0x1)
	uint8_t Pad_0x215[0x3]; // 0x215(0x3)
	struct TMap<struct FName, struct FName> InputMapping; // 0x218(0x50)
	struct TMap<struct FName, struct FName> OutputMapping; // 0x268(0x50)
	uint8_t Pad_0x2B8[0xB0]; // 0x2B8(0xB0)
};

// Object: ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// Size: 0x178 (Inherited: 0x170)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{
	struct TWeakObjectPtr<struct UControlRig> ControlRig; // 0x16C(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigBindingTemplate
// Size: 0xA8 (Inherited: 0xA8)
struct FControlRigBindingTemplate : FMovieSceneSpawnSectionTemplate
{
};

// Object: ScriptStruct ControlRig.ControlRigComponentInstanceData
// Size: 0x60 (Inherited: 0x58)
struct FControlRigComponentInstanceData : FActorComponentInstanceData
{
	struct UControlRig* AnimControlRig; // 0x58(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigExecuteContext
// Size: 0x18 (Inherited: 0x10)
struct FControlRigExecuteContext : FRigVMExecuteContext
{
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigDrawContainer
// Size: 0x10 (Inherited: 0x0)
struct FControlRigDrawContainer
{
	struct TArray<struct FControlRigDrawInstruction> Instructions; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.ControlRigDrawInstruction
// Size: 0x70 (Inherited: 0x0)
struct FControlRigDrawInstruction
{
	struct FName Name; // 0x0(0x8)
	uint8_t PrimitiveType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FVector> Positions; // 0x10(0x10)
	struct FLinearColor Color; // 0x20(0x10)
	float Thickness; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
	struct FTransform Transform; // 0x40(0x30)
};

// Object: ScriptStruct ControlRig.ControlRigDrawInterface
// Size: 0x18 (Inherited: 0x10)
struct FControlRigDrawInterface : FControlRigDrawContainer
{
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigGizmoDefinition
// Size: 0x60 (Inherited: 0x0)
struct FControlRigGizmoDefinition
{
	struct FName GizmoName; // 0x0(0x8)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x8(0x28)
	struct FTransform Transform; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// Size: 0x840 (Inherited: 0x7A0)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x7A0[0xA0]; // 0x7A0(0xA0)
};

// Object: ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{
	struct FPoseLink InputPose; // 0x10(0x10)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.CRFourPointBezier
// Size: 0x30 (Inherited: 0x0)
struct FCRFourPointBezier
{
	struct FVector A; // 0x0(0xC)
	struct FVector B; // 0xC(0xC)
	struct FVector C; // 0x18(0xC)
	struct FVector D; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x0)
struct FControlRigSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds; // 0x0(0x10)
	struct TArray<struct FControlRigSequenceObjectReferences> References; // 0x10(0x10)
};

// Object: ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// Size: 0x10 (Inherited: 0x0)
struct FControlRigSequenceObjectReferences
{
	struct TArray<struct FControlRigSequenceObjectReference> Array; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.ControlRigSequenceObjectReference
// Size: 0x8 (Inherited: 0x0)
struct FControlRigSequenceObjectReference
{
	struct UControlRig* ControlRigClass; // 0x0(0x8)
};

// Object: ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
// Size: 0xCE0 (Inherited: 0xA40)
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy
{
	uint8_t Pad_0xA40[0x2A0]; // 0xA40(0x2A0)
};

// Object: ScriptStruct ControlRig.CRSimContainer
// Size: 0x18 (Inherited: 0x0)
struct FCRSimContainer
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float TimeStep; // 0x8(0x4)
	float AccumulatedTime; // 0xC(0x4)
	float TimeLeftForStep; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.CRSimLinearSpring
// Size: 0x10 (Inherited: 0x0)
struct FCRSimLinearSpring
{
	int32_t SubjectA; // 0x0(0x4)
	int32_t SubjectB; // 0x4(0x4)
	float Coefficient; // 0x8(0x4)
	float Equilibrium; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.CRSimPoint
// Size: 0x28 (Inherited: 0x0)
struct FCRSimPoint
{
	float Mass; // 0x0(0x4)
	float Size; // 0x4(0x4)
	float LinearDamping; // 0x8(0x4)
	float InheritMotion; // 0xC(0x4)
	struct FVector Position; // 0x10(0xC)
	struct FVector LinearVelocity; // 0x1C(0xC)
};

// Object: ScriptStruct ControlRig.CRSimPointConstraint
// Size: 0x24 (Inherited: 0x0)
struct FCRSimPointConstraint
{
	enum class ECRSimConstraintType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t SubjectA; // 0x4(0x4)
	int32_t SubjectB; // 0x8(0x4)
	struct FVector DataA; // 0xC(0xC)
	struct FVector DataB; // 0x18(0xC)
};

// Object: ScriptStruct ControlRig.CRSimPointContainer
// Size: 0x78 (Inherited: 0x18)
struct FCRSimPointContainer : FCRSimContainer
{
	struct TArray<struct FCRSimPoint> Points; // 0x18(0x10)
	struct TArray<struct FCRSimLinearSpring> Springs; // 0x28(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x38(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x48(0x10)
	struct TArray<struct FCRSimPointConstraint> Constraints; // 0x58(0x10)
	struct TArray<struct FCRSimPoint> PreviousStep; // 0x68(0x10)
};

// Object: ScriptStruct ControlRig.CRSimSoftCollision
// Size: 0x50 (Inherited: 0x0)
struct FCRSimSoftCollision
{
	struct FTransform Transform; // 0x0(0x30)
	enum class ECRSimSoftCollisionType ShapeType; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float MinimumDistance; // 0x34(0x4)
	float MaximumDistance; // 0x38(0x4)
	enum class EControlRigAnimEasingType FalloffType; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	float Coefficient; // 0x40(0x4)
	bool bInverted; // 0x44(0x1)
	uint8_t Pad_0x45[0xB]; // 0x45(0xB)
};

// Object: ScriptStruct ControlRig.CRSimPointForce
// Size: 0x18 (Inherited: 0x0)
struct FCRSimPointForce
{
	enum class ECRSimPointForceType ForceType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector Vector; // 0x4(0xC)
	float Coefficient; // 0x10(0x4)
	bool bNormalize; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// Size: 0xD8 (Inherited: 0x8)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{
	bool bAdditive; // 0x8(0x1)
	bool bApplyBoneFilter; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct FInputBlendPose BoneFilter; // 0x10(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x20(0xA0)
	struct FMovieSceneEvaluationOperand Operand; // 0xC0(0x14)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
};

// Object: ScriptStruct ControlRig.ChannelMapInfo
// Size: 0x8 (Inherited: 0x0)
struct FChannelMapInfo
{
	int32_t ControlIndex; // 0x0(0x4)
	int32_t ChannelIndex; // 0x4(0x4)
};

// Object: ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// Size: 0x78 (Inherited: 0x78)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{
};

// Object: ScriptStruct ControlRig.RigBoneHierarchy
// Size: 0x70 (Inherited: 0x0)
struct FRigBoneHierarchy
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FRigBone> Bones; // 0x8(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x18(0x50)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct ControlRig.RigElement
// Size: 0x18 (Inherited: 0x0)
struct FRigElement
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FName Name; // 0x8(0x8)
	int32_t Index; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigBone
// Size: 0xD0 (Inherited: 0x18)
struct FRigBone : FRigElement
{
	struct FName ParentName; // 0x14(0x8)
	int32_t ParentIndex; // 0x1C(0x4)
	struct FTransform InitialTransform; // 0x20(0x30)
	struct FTransform GlobalTransform; // 0x50(0x30)
	struct FTransform LocalTransform; // 0x80(0x30)
	struct TArray<int32_t> Dependents; // 0xB0(0x10)
	enum class ERigBoneType Type; // 0xC0(0x1)
	uint8_t Pad_0xC5[0xB]; // 0xC5(0xB)
};

// Object: ScriptStruct ControlRig.RigControlHierarchy
// Size: 0x68 (Inherited: 0x0)
struct FRigControlHierarchy
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FRigControl> Controls; // 0x8(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x18(0x50)
};

// Object: ScriptStruct ControlRig.RigControl
// Size: 0x170 (Inherited: 0x18)
struct FRigControl : FRigElement
{
	enum class ERigControlType ControlType; // 0x14(0x1)
	struct FName ParentName; // 0x18(0x8)
	int32_t ParentIndex; // 0x20(0x4)
	struct FName SpaceName; // 0x24(0x8)
	int32_t SpaceIndex; // 0x2C(0x4)
	struct FRigControlValue InitialValue; // 0x30(0x30)
	struct FRigControlValue Value; // 0x60(0x30)
	enum class ERigControlAxis PrimaryAxis; // 0x90(0x1)
	bool bIsCurve; // 0x91(0x1)
	bool bAnimatable; // 0x92(0x1)
	bool bLimitTranslation; // 0x93(0x1)
	bool bLimitRotation; // 0x94(0x1)
	bool bLimitScale; // 0x95(0x1)
	bool bDrawLimits; // 0x96(0x1)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
	struct FRigControlValue MinimumValue; // 0xA0(0x30)
	struct FRigControlValue MaximumValue; // 0xD0(0x30)
	bool bGizmoEnabled; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	struct FName GizmoName; // 0x104(0x8)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct FTransform GizmoTransform; // 0x110(0x30)
	struct FLinearColor GizmoColor; // 0x140(0x10)
	struct TArray<int32_t> Dependents; // 0x150(0x10)
	bool bIsTransientControl; // 0x160(0x1)
	uint8_t Pad_0x161[0xF]; // 0x161(0xF)
};

// Object: ScriptStruct ControlRig.RigControlValue
// Size: 0x30 (Inherited: 0x0)
struct FRigControlValue
{
	struct FTransform Storage; // 0x0(0x30)
};

// Object: ScriptStruct ControlRig.RigCurveContainer
// Size: 0x70 (Inherited: 0x0)
struct FRigCurveContainer
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FRigCurve> Curves; // 0x8(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x18(0x50)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct ControlRig.RigCurve
// Size: 0x18 (Inherited: 0x18)
struct FRigCurve : FRigElement
{
	float Value; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigHierarchyRef
// Size: 0x1 (Inherited: 0x0)
struct FRigHierarchyRef
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct ControlRig.RigHierarchyContainer
// Size: 0x1B0 (Inherited: 0x0)
struct FRigHierarchyContainer
{
	struct FRigBoneHierarchy BoneHierarchy; // 0x0(0x70)
	struct FRigSpaceHierarchy SpaceHierarchy; // 0x70(0x68)
	struct FRigControlHierarchy ControlHierarchy; // 0xD8(0x68)
	struct FRigCurveContainer CurveContainer; // 0x140(0x70)
};

// Object: ScriptStruct ControlRig.RigSpaceHierarchy
// Size: 0x68 (Inherited: 0x0)
struct FRigSpaceHierarchy
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FRigSpace> Spaces; // 0x8(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping; // 0x18(0x50)
};

// Object: ScriptStruct ControlRig.RigSpace
// Size: 0x90 (Inherited: 0x18)
struct FRigSpace : FRigElement
{
	enum class ERigSpaceType SpaceType; // 0x14(0x1)
	struct FName ParentName; // 0x18(0x8)
	int32_t ParentIndex; // 0x20(0x4)
	uint8_t Pad_0x25[0xB]; // 0x25(0xB)
	struct FTransform InitialTransform; // 0x30(0x30)
	struct FTransform LocalTransform; // 0x60(0x30)
};

// Object: ScriptStruct ControlRig.RigHierarchyCopyPasteContent
// Size: 0x40 (Inherited: 0x0)
struct FRigHierarchyCopyPasteContent
{
	struct TArray<enum class ERigElementType> Types; // 0x0(0x10)
	struct TArray<struct FString> Contents; // 0x10(0x10)
	struct TArray<struct FTransform> LocalTransforms; // 0x20(0x10)
	struct TArray<struct FTransform> GlobalTransforms; // 0x30(0x10)
};

// Object: ScriptStruct ControlRig.RigElementKey
// Size: 0xC (Inherited: 0x0)
struct FRigElementKey
{
	struct FName Name; // 0x0(0x8)
	enum class ERigElementType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit : FRigVMStruct
{
};

// Object: ScriptStruct ControlRig.RigUnitMutable
// Size: 0x20 (Inherited: 0x8)
struct FRigUnitMutable : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext; // 0x8(0x18)
};

// Object: ScriptStruct ControlRig.RigUnit_SimBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_SimBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// Size: 0x48 (Inherited: 0x8)
struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Minimum; // 0x14(0xC)
	struct FVector Maximum; // 0x20(0xC)
	struct FVector AccumulatedMinimum; // 0x2C(0xC)
	struct FVector AccumulatedMaximum; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	float Minimum; // 0xC(0x4)
	float Maximum; // 0x10(0x4)
	float AccumulatedMinimum; // 0x14(0x4)
	float AccumulatedMaximum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// Size: 0xE0 (Inherited: 0x8)
struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform TargetValue; // 0x10(0x30)
	struct FTransform InitialValue; // 0x40(0x30)
	float Blend; // 0x70(0x4)
	bool bIntegrateDeltaTime; // 0x74(0x1)
	uint8_t Pad_0x75[0xB]; // 0x75(0xB)
	struct FTransform Result; // 0x80(0x30)
	struct FTransform AccumulatedValue; // 0xB0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat TargetValue; // 0x10(0x10)
	struct FQuat InitialValue; // 0x20(0x10)
	float Blend; // 0x30(0x4)
	bool bIntegrateDeltaTime; // 0x34(0x1)
	uint8_t Pad_0x35[0xB]; // 0x35(0xB)
	struct FQuat Result; // 0x40(0x10)
	struct FQuat AccumulatedValue; // 0x50(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase
{
	struct FVector TargetValue; // 0x8(0xC)
	struct FVector InitialValue; // 0x14(0xC)
	float Blend; // 0x20(0x4)
	bool bIntegrateDeltaTime; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FVector Result; // 0x28(0xC)
	struct FVector AccumulatedValue; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase
{
	float TargetValue; // 0x8(0x4)
	float InitialValue; // 0xC(0x4)
	float Blend; // 0x10(0x4)
	bool bIntegrateDeltaTime; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float Result; // 0x18(0x4)
	float AccumulatedValue; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// Size: 0xE0 (Inherited: 0x8)
struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Multiplier; // 0x10(0x30)
	struct FTransform InitialValue; // 0x40(0x30)
	bool bFlipOrder; // 0x70(0x1)
	bool bIntegrateDeltaTime; // 0x71(0x1)
	uint8_t Pad_0x72[0xE]; // 0x72(0xE)
	struct FTransform Result; // 0x80(0x30)
	struct FTransform AccumulatedValue; // 0xB0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Multiplier; // 0x10(0x10)
	struct FQuat InitialValue; // 0x20(0x10)
	bool bFlipOrder; // 0x30(0x1)
	bool bIntegrateDeltaTime; // 0x31(0x1)
	uint8_t Pad_0x32[0xE]; // 0x32(0xE)
	struct FQuat Result; // 0x40(0x10)
	struct FQuat AccumulatedValue; // 0x50(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase
{
	struct FVector Multiplier; // 0x8(0xC)
	struct FVector InitialValue; // 0x14(0xC)
	bool bIntegrateDeltaTime; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Result; // 0x24(0xC)
	struct FVector AccumulatedValue; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase
{
	float Multiplier; // 0x8(0x4)
	float InitialValue; // 0xC(0x4)
	bool bIntegrateDeltaTime; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Result; // 0x14(0x4)
	float AccumulatedValue; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase
{
	struct FVector Increment; // 0x8(0xC)
	struct FVector InitialValue; // 0x14(0xC)
	bool bIntegrateDeltaTime; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Result; // 0x24(0xC)
	struct FVector AccumulatedValue; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase
{
	float Increment; // 0x8(0x4)
	float InitialValue; // 0xC(0x4)
	bool bIntegrateDeltaTime; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Result; // 0x14(0x4)
	float AccumulatedValue; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AddBoneTransform
// Size: 0x70 (Inherited: 0x20)
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{
	struct FName Bone; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform Transform; // 0x30(0x30)
	float Weight; // 0x60(0x4)
	bool bPostMultiply; // 0x64(0x1)
	bool bPropagateToChildren; // 0x65(0x1)
	uint8_t Pad_0x66[0x2]; // 0x66(0x2)
	int32_t CachedBoneIndex; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_AimBone
// Size: 0xE0 (Inherited: 0x20)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{
	struct FName Bone; // 0x20(0x8)
	struct FRigUnit_AimBone_Target Primary; // 0x28(0x28)
	struct FRigUnit_AimBone_Target Secondary; // 0x50(0x28)
	float Weight; // 0x78(0x4)
	bool bPropagateToChildren; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0x80(0x40)
	int32_t BoneIndex; // 0xC0(0x4)
	struct FName PrimaryCachedSpaceName; // 0xC4(0x8)
	int32_t PrimaryCachedSpaceIndex; // 0xCC(0x4)
	struct FName SecondaryCachedSpaceName; // 0xD0(0x8)
	int32_t SecondaryCachedSpaceIndex; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_AimBone_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_AimBone_Target
// Size: 0x28 (Inherited: 0x0)
struct FRigUnit_AimBone_Target
{
	float Weight; // 0x0(0x4)
	struct FVector Axis; // 0x4(0xC)
	struct FVector Target; // 0x10(0xC)
	enum class EControlRigVectorKind Kind; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FName Space; // 0x20(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_AimConstraint
// Size: 0x78 (Inherited: 0x20)
struct FRigUnit_AimConstraint : FRigUnitMutable
{
	struct FName Joint; // 0x20(0x8)
	enum class EAimMode AimMode; // 0x28(0x1)
	enum class EAimMode UpMode; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	struct FVector AimVector; // 0x2C(0xC)
	struct FVector UpVector; // 0x38(0xC)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct FAimTarget> AimTargets; // 0x48(0x10)
	struct TArray<struct FAimTarget> UpTargets; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
};

// Object: ScriptStruct ControlRig.AimTarget
// Size: 0x50 (Inherited: 0x0)
struct FAimTarget
{
	float Weight; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector AlignVector; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AlphaInterpVector
// Size: 0x88 (Inherited: 0x8)
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	float Scale; // 0x14(0x4)
	float Bias; // 0x18(0x4)
	bool bMapRange; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FInputRange InRange; // 0x20(0x8)
	struct FInputRange OutRange; // 0x28(0x8)
	bool bClampResult; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float ClampMin; // 0x34(0x4)
	float ClampMax; // 0x38(0x4)
	bool bInterpResult; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	float InterpSpeedIncreasing; // 0x40(0x4)
	float InterpSpeedDecreasing; // 0x44(0x4)
	struct FVector Result; // 0x48(0xC)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x54(0x30)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AlphaInterp
// Size: 0x78 (Inherited: 0x8)
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	float Scale; // 0xC(0x4)
	float Bias; // 0x10(0x4)
	bool bMapRange; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FInputRange InRange; // 0x18(0x8)
	struct FInputRange OutRange; // 0x20(0x8)
	bool bClampResult; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float ClampMin; // 0x2C(0x4)
	float ClampMax; // 0x30(0x4)
	bool bInterpResult; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	float InterpSpeedIncreasing; // 0x38(0x4)
	float InterpSpeedDecreasing; // 0x3C(0x4)
	float Result; // 0x40(0x4)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x44(0x30)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AnimBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_AnimBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_AnimEasing
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{
	float Value; // 0x8(0x4)
	enum class EControlRigAnimEasingType Type; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float SourceMinimum; // 0x10(0x4)
	float SourceMaximum; // 0x14(0x4)
	float TargetMinimum; // 0x18(0x4)
	float TargetMaximum; // 0x1C(0x4)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AnimEasingType
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{
	enum class EControlRigAnimEasingType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{
	float Value; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FRuntimeFloatCurve Curve; // 0x10(0x88)
	float SourceMinimum; // 0x98(0x4)
	float SourceMaximum; // 0x9C(0x4)
	float TargetMinimum; // 0xA0(0x4)
	float TargetMaximum; // 0xA4(0x4)
	float Result; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_AnimRichCurve
// Size: 0x90 (Inherited: 0x8)
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{
	struct FRuntimeFloatCurve Curve; // 0x8(0x88)
};

// Object: ScriptStruct ControlRig.RigUnit_ApplyFK
// Size: 0xB0 (Inherited: 0x20)
struct FRigUnit_ApplyFK : FRigUnitMutable
{
	struct FName Joint; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform Transform; // 0x30(0x30)
	struct FTransformFilter Filter; // 0x60(0x9)
	enum class EApplyTransformMode ApplyTransformMode; // 0x69(0x1)
	enum class ETransformSpaceMode ApplyTransformSpace; // 0x6A(0x1)
	uint8_t Pad_0x6B[0x5]; // 0x6B(0x5)
	struct FTransform BaseTransform; // 0x70(0x30)
	struct FName BaseJoint; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_BeginExecution
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_BeginExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext; // 0x8(0x18)
};

// Object: ScriptStruct ControlRig.RigUnit_BlendTransform
// Size: 0x80 (Inherited: 0x8)
struct FRigUnit_BlendTransform : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Source; // 0x10(0x30)
	struct TArray<struct FBlendTarget> Targets; // 0x40(0x10)
	struct FTransform Result; // 0x50(0x30)
};

// Object: ScriptStruct ControlRig.BlendTarget
// Size: 0x40 (Inherited: 0x0)
struct FBlendTarget
{
	struct FTransform Transform; // 0x0(0x30)
	float Weight; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_BoneHarmonics
// Size: 0xA0 (Inherited: 0x20)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x20(0x10)
	struct FVector WaveSpeed; // 0x30(0xC)
	struct FVector WaveFrequency; // 0x3C(0xC)
	struct FVector WaveAmplitude; // 0x48(0xC)
	struct FVector WaveOffset; // 0x54(0xC)
	struct FVector WaveNoise; // 0x60(0xC)
	enum class EControlRigAnimEasingType WaveEase; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	float WaveMinimum; // 0x70(0x4)
	float WaveMaximum; // 0x74(0x4)
	enum class EControlRigRotationOrder RotationOrder; // 0x78(0x1)
	bool bPropagateToChildren; // 0x79(0x1)
	uint8_t Pad_0x7A[0x6]; // 0x7A(0x6)
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0x80(0x20)
};

// Object: ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
// Size: 0x20 (Inherited: 0x0)
struct FRigUnit_BoneHarmonics_WorkData
{
	struct TArray<int32_t> BoneIndices; // 0x0(0x10)
	struct FVector WaveTime; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// Size: 0xC (Inherited: 0x0)
struct FRigUnit_BoneHarmonics_BoneTarget
{
	struct FName Bone; // 0x0(0x8)
	float Ratio; // 0x8(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ControlName
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_ControlName : FRigUnit
{
	struct FName Control; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SpaceName
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_SpaceName : FRigUnit
{
	struct FName Space; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_BoneName
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_BoneName : FRigUnit
{
	struct FName Bone; // 0x8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_CCDIK
// Size: 0xE0 (Inherited: 0x20)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x20(0x8)
	struct FName EffectorBone; // 0x28(0x8)
	struct FTransform EffectorTransform; // 0x30(0x30)
	float Precision; // 0x60(0x4)
	float Weight; // 0x64(0x4)
	int32_t MaxIterations; // 0x68(0x4)
	bool bStartFromTail; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	float BaseRotationLimit; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0x78(0x10)
	bool bPropagateToChildren; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FRigUnit_CCDIK_WorkData WorkData; // 0x90(0x48)
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
// Size: 0x48 (Inherited: 0x0)
struct FRigUnit_CCDIK_WorkData
{
	struct TArray<struct FCCDIKChainLink> Chain; // 0x0(0x10)
	struct TArray<int32_t> BoneIndices; // 0x10(0x10)
	struct TArray<int32_t> RotationLimitIndex; // 0x20(0x10)
	struct TArray<float> RotationLimitsPerBone; // 0x30(0x10)
	int32_t EffectorIndex; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
// Size: 0xC (Inherited: 0x0)
struct FRigUnit_CCDIK_RotationLimit
{
	struct FName Bone; // 0x0(0x8)
	float Limit; // 0x8(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics
// Size: 0x230 (Inherited: 0x20)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct FName ChainRoot; // 0x20(0x8)
	struct FVector Speed; // 0x28(0xC)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x34(0x28)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0x5C(0x40)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FRuntimeFloatCurve WaveCurve; // 0xA0(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x128(0x3C)
	bool bDrawDebug; // 0x164(0x1)
	uint8_t Pad_0x165[0xB]; // 0x165(0xB)
	struct FTransform DrawWorldOffset; // 0x170(0x30)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1A0(0x90)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
// Size: 0x90 (Inherited: 0x0)
struct FRigUnit_ChainHarmonics_WorkData
{
	struct FVector Time; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<int32_t> Bones; // 0x10(0x10)
	struct TArray<float> Ratio; // 0x20(0x10)
	struct TArray<struct FVector> LocalTip; // 0x30(0x10)
	struct TArray<struct FVector> PendulumTip; // 0x40(0x10)
	struct TArray<struct FVector> PendulumPosition; // 0x50(0x10)
	struct TArray<struct FVector> PendulumVelocity; // 0x60(0x10)
	struct TArray<struct FVector> HierarchyLine; // 0x70(0x10)
	struct TArray<struct FVector> VelocityLines; // 0x80(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// Size: 0x3C (Inherited: 0x0)
struct FRigUnit_ChainHarmonics_Pendulum
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float PendulumStiffness; // 0x4(0x4)
	struct FVector PendulumGravity; // 0x8(0xC)
	float PendulumBlend; // 0x14(0x4)
	float PendulumDrag; // 0x18(0x4)
	float PendulumMinimum; // 0x1C(0x4)
	float PendulumMaximum; // 0x20(0x4)
	enum class EControlRigAnimEasingType PendulumEase; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FVector UnwindAxis; // 0x28(0xC)
	float UnwindMinimum; // 0x34(0x4)
	float UnwindMaximum; // 0x38(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_ChainHarmonics_Wave
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector WaveFrequency; // 0x4(0xC)
	struct FVector WaveAmplitude; // 0x10(0xC)
	struct FVector WaveOffset; // 0x1C(0xC)
	struct FVector WaveNoise; // 0x28(0xC)
	float WaveMinimum; // 0x34(0x4)
	float WaveMaximum; // 0x38(0x4)
	enum class EControlRigAnimEasingType WaveEase; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// Size: 0x28 (Inherited: 0x0)
struct FRigUnit_ChainHarmonics_Reach
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector ReachTarget; // 0x4(0xC)
	struct FVector ReachAxis; // 0x10(0xC)
	float ReachMinimum; // 0x1C(0x4)
	float ReachMaximum; // 0x20(0x4)
	enum class EControlRigAnimEasingType ReachEase; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_Control
// Size: 0xD0 (Inherited: 0x8)
struct FRigUnit_Control : FRigUnit
{
	struct FEulerTransform Transform; // 0x8(0x24)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Base; // 0x30(0x30)
	struct FTransform InitTransform; // 0x60(0x30)
	struct FTransform Result; // 0x90(0x30)
	struct FTransformFilter Filter; // 0xC0(0x9)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// Size: 0x100 (Inherited: 0xD0)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{
	struct FTransform MeshTransform; // 0xD0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_ToSwingAndTwist : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	struct FVector TwistAxis; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat Swing; // 0x30(0x10)
	struct FQuat Twist; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_ConvertRotationToVector : FRigUnit
{
	struct FRotator Input; // 0x8(0xC)
	struct FVector Result; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{
	struct FVector Input; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{
	struct FVector Input; // 0x8(0xC)
	struct FRotator Result; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ConvertQuaternion : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	struct FRotator Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertRotation
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_ConvertRotation : FRigUnit
{
	struct FRotator Input; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_ConvertEulerTransform : FRigUnit
{
	struct FEulerTransform Input; // 0x8(0x24)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Result; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_ConvertTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_ConvertTransform : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Input; // 0x10(0x30)
	struct FEulerTransform Result; // 0x40(0x24)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_DebugBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_DebugBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_DebugBezier
// Size: 0xC0 (Inherited: 0x20)
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier Bezier; // 0x20(0x30)
	float MinimumU; // 0x50(0x4)
	float MaximumU; // 0x54(0x4)
	struct FLinearColor Color; // 0x58(0x10)
	float Thickness; // 0x68(0x4)
	int32_t Detail; // 0x6C(0x4)
	struct FName Space; // 0x70(0x8)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct FTransform WorldOffset; // 0x80(0x30)
	bool bEnabled; // 0xB0(0x1)
	uint8_t Pad_0xB1[0xF]; // 0xB1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugHierarchy
// Size: 0x80 (Inherited: 0x20)
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{
	uint8_t Mode; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float Scale; // 0x24(0x4)
	struct FLinearColor Color; // 0x28(0x10)
	float Thickness; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FTransform WorldOffset; // 0x40(0x30)
	bool bEnabled; // 0x70(0x1)
	uint8_t Pad_0x71[0xF]; // 0x71(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugLine
// Size: 0xA0 (Inherited: 0x20)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{
	struct FVector A; // 0x20(0xC)
	struct FVector B; // 0x2C(0xC)
	struct FLinearColor Color; // 0x38(0x10)
	float Thickness; // 0x48(0x4)
	struct FName Space; // 0x4C(0x8)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
	struct FTransform WorldOffset; // 0x60(0x30)
	bool bEnabled; // 0x90(0x1)
	uint8_t Pad_0x91[0xF]; // 0x91(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugLineStrip
// Size: 0x90 (Inherited: 0x20)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points; // 0x20(0x10)
	struct FLinearColor Color; // 0x30(0x10)
	float Thickness; // 0x40(0x4)
	struct FName Space; // 0x44(0x8)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FTransform WorldOffset; // 0x50(0x30)
	bool bEnabled; // 0x80(0x1)
	uint8_t Pad_0x81[0xF]; // 0x81(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugPointMutable
// Size: 0x90 (Inherited: 0x20)
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{
	struct FVector Vector; // 0x20(0xC)
	enum class ERigUnitDebugPointMode Mode; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct FLinearColor Color; // 0x30(0x10)
	float Scale; // 0x40(0x4)
	float Thickness; // 0x44(0x4)
	struct FName Space; // 0x48(0x8)
	struct FTransform WorldOffset; // 0x50(0x30)
	bool bEnabled; // 0x80(0x1)
	uint8_t Pad_0x81[0xF]; // 0x81(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugPoint
// Size: 0x80 (Inherited: 0x8)
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{
	struct FVector Vector; // 0x8(0xC)
	enum class ERigUnitDebugPointMode Mode; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FLinearColor Color; // 0x18(0x10)
	float Scale; // 0x28(0x4)
	float Thickness; // 0x2C(0x4)
	struct FName Space; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform WorldOffset; // 0x40(0x30)
	bool bEnabled; // 0x70(0x1)
	uint8_t Pad_0x71[0xF]; // 0x71(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugArc
// Size: 0xC0 (Inherited: 0x20)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform; // 0x20(0x30)
	struct FLinearColor Color; // 0x50(0x10)
	float Radius; // 0x60(0x4)
	float MinimumDegrees; // 0x64(0x4)
	float MaximumDegrees; // 0x68(0x4)
	float Thickness; // 0x6C(0x4)
	int32_t Detail; // 0x70(0x4)
	struct FName Space; // 0x74(0x8)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct FTransform WorldOffset; // 0x80(0x30)
	bool bEnabled; // 0xB0(0x1)
	uint8_t Pad_0xB1[0xF]; // 0xB1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugRectangle
// Size: 0xB0 (Inherited: 0x20)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform; // 0x20(0x30)
	struct FLinearColor Color; // 0x50(0x10)
	float Scale; // 0x60(0x4)
	float Thickness; // 0x64(0x4)
	struct FName Space; // 0x68(0x8)
	struct FTransform WorldOffset; // 0x70(0x30)
	bool bEnabled; // 0xA0(0x1)
	uint8_t Pad_0xA1[0xF]; // 0xA1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// Size: 0xB0 (Inherited: 0x20)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FTransform> Transforms; // 0x20(0x10)
	enum class ERigUnitDebugTransformMode Mode; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	struct FLinearColor Color; // 0x34(0x10)
	float Thickness; // 0x44(0x4)
	float Scale; // 0x48(0x4)
	struct FName Space; // 0x4C(0x8)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
	struct FTransform WorldOffset; // 0x60(0x30)
	bool bEnabled; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0x98(0x10)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
	struct TArray<struct FTransform> DrawTransforms; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// Size: 0xC0 (Inherited: 0x20)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform; // 0x20(0x30)
	enum class ERigUnitDebugTransformMode Mode; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	struct FLinearColor Color; // 0x54(0x10)
	float Thickness; // 0x64(0x4)
	float Scale; // 0x68(0x4)
	struct FName Space; // 0x6C(0x8)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
	struct FTransform WorldOffset; // 0x80(0x30)
	bool bEnabled; // 0xB0(0x1)
	uint8_t Pad_0xB1[0xF]; // 0xB1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DebugTransform
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	enum class ERigUnitDebugTransformMode Mode; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FLinearColor Color; // 0x44(0x10)
	float Thickness; // 0x54(0x4)
	float Scale; // 0x58(0x4)
	struct FName Space; // 0x5C(0x8)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
	struct FTransform WorldOffset; // 0x70(0x30)
	bool bEnabled; // 0xA0(0x1)
	uint8_t Pad_0xA1[0xF]; // 0xA1(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// Size: 0xD0 (Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	struct FTransform Delta; // 0x40(0x30)
	struct FTransform PreviousValue; // 0x70(0x30)
	struct FTransform Cache; // 0xA0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	struct FQuat Delta; // 0x20(0x10)
	struct FQuat PreviousValue; // 0x30(0x10)
	struct FQuat Cache; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Delta; // 0x14(0xC)
	struct FVector PreviousValue; // 0x20(0xC)
	struct FVector Cache; // 0x2C(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	float Delta; // 0xC(0x4)
	float PreviousValue; // 0x10(0x4)
	float Cache; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_DistributeRotation
// Size: 0x98 (Inherited: 0x20)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x20(0x8)
	struct FName EndBone; // 0x28(0x8)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations; // 0x30(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0x40(0x1)
	bool bPropagateToChildren; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
	struct FRigUnit_DistributeRotation_WorkData WorkData; // 0x48(0x50)
};

// Object: ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
// Size: 0x50 (Inherited: 0x0)
struct FRigUnit_DistributeRotation_WorkData
{
	struct TArray<int32_t> BoneIndices; // 0x0(0x10)
	struct TArray<int32_t> BoneRotationA; // 0x10(0x10)
	struct TArray<int32_t> BoneRotationB; // 0x20(0x10)
	struct TArray<float> BoneRotationT; // 0x30(0x10)
	struct TArray<struct FTransform> BoneLocalTransforms; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// Size: 0x20 (Inherited: 0x0)
struct FRigUnit_DistributeRotation_Rotation
{
	struct FQuat Rotation; // 0x0(0x10)
	float Ratio; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// Size: 0x60 (Inherited: 0x20)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{
	struct FName InstructionName; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform Transform; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// Size: 0x30 (Inherited: 0x20)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{
	struct FName InstructionName; // 0x20(0x8)
	float Thickness; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// Size: 0x38 (Inherited: 0x20)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{
	struct FName InstructionName; // 0x20(0x8)
	struct FLinearColor Color; // 0x28(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{
	struct FName InstructionName; // 0x8(0x8)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform Transform; // 0x20(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_FABRIK
// Size: 0xA0 (Inherited: 0x20)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x20(0x8)
	struct FName EffectorBone; // 0x28(0x8)
	struct FTransform EffectorTransform; // 0x30(0x30)
	float Precision; // 0x60(0x4)
	float Weight; // 0x64(0x4)
	bool bPropagateToChildren; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	int32_t MaxIterations; // 0x6C(0x4)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0x70(0x28)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
// Size: 0x28 (Inherited: 0x0)
struct FRigUnit_FABRIK_WorkData
{
	struct TArray<struct FFABRIKChainLink> Chain; // 0x0(0x10)
	struct TArray<int32_t> BoneIndices; // 0x10(0x10)
	int32_t EffectorIndex; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurve
// Size: 0x1B0 (Inherited: 0x20)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x20(0x8)
	struct FName EndBone; // 0x28(0x8)
	struct FCRFourPointBezier Bezier; // 0x30(0x30)
	enum class EControlRigCurveAlignment Alignment; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	float Minimum; // 0x64(0x4)
	float Maximum; // 0x68(0x4)
	int32_t SamplingPrecision; // 0x6C(0x4)
	struct FVector PrimaryAxis; // 0x70(0xC)
	struct FVector SecondaryAxis; // 0x7C(0xC)
	struct FVector PoleVectorPosition; // 0x88(0xC)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x98(0x10)
	enum class EControlRigAnimEasingType RotationEaseType; // 0xA8(0x1)
	bool bPropagateToChildren; // 0xA9(0x1)
	uint8_t Pad_0xAA[0x6]; // 0xAA(0x6)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0xB0(0x60)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x110(0x98)
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
// Size: 0x98 (Inherited: 0x0)
struct FRigUnit_FitChainToCurve_WorkData
{
	float ChainLength; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVector> BonePositions; // 0x8(0x10)
	struct TArray<float> BoneSegments; // 0x18(0x10)
	struct TArray<struct FVector> CurvePositions; // 0x28(0x10)
	struct TArray<float> CurveSegments; // 0x38(0x10)
	struct TArray<int32_t> BoneIndices; // 0x48(0x10)
	struct TArray<int32_t> BoneRotationA; // 0x58(0x10)
	struct TArray<int32_t> BoneRotationB; // 0x68(0x10)
	struct TArray<float> BoneRotationT; // 0x78(0x10)
	struct TArray<struct FTransform> BoneLocalTransforms; // 0x88(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// Size: 0x60 (Inherited: 0x0)
struct FRigUnit_FitChainToCurve_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	struct FLinearColor CurveColor; // 0x8(0x10)
	struct FLinearColor SegmentsColor; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform WorldOffset; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// Size: 0x20 (Inherited: 0x0)
struct FRigUnit_FitChainToCurve_Rotation
{
	struct FQuat Rotation; // 0x0(0x10)
	float Ratio; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MapRange_Float
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_MapRange_Float : FRigUnit
{
	float Value; // 0x8(0x4)
	float MinIn; // 0xC(0x4)
	float MaxIn; // 0x10(0x4)
	float MinOut; // 0x14(0x4)
	float MaxOut; // 0x18(0x4)
	float Result; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_Clamp_Float
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_Clamp_Float : FRigUnit
{
	float Value; // 0x8(0x4)
	float Min; // 0xC(0x4)
	float Max; // 0x10(0x4)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_BinaryFloatOp : FRigUnit
{
	float Argument0; // 0x8(0x4)
	float Argument1; // 0xC(0x4)
	float Result; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_GetBoneTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_GetBoneTransform : FRigUnit
{
	struct FName Bone; // 0x8(0x8)
	enum class EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	int32_t CachedBoneIndex; // 0x50(0x4)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_GetControlInitialTransform : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	enum class EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	int32_t CachedControlIndex; // 0x50(0x4)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlTransform
// Size: 0xC0 (Inherited: 0x8)
struct FRigUnit_GetControlTransform : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	enum class EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	struct FTransform Minimum; // 0x50(0x30)
	struct FTransform Maximum; // 0x80(0x30)
	int32_t CachedControlIndex; // 0xB0(0x4)
	uint8_t Pad_0xB4[0xC]; // 0xB4(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlRotator
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_GetControlRotator : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	enum class EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FRotator Rotator; // 0x14(0xC)
	struct FRotator Minimum; // 0x20(0xC)
	struct FRotator Maximum; // 0x2C(0xC)
	int32_t CachedControlIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlVector
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_GetControlVector : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	enum class EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector Vector; // 0x14(0xC)
	struct FVector Minimum; // 0x20(0xC)
	struct FVector Maximum; // 0x2C(0xC)
	int32_t CachedControlIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlVector2D
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_GetControlVector2D : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	struct FVector2D Vector; // 0x10(0x8)
	struct FVector2D Minimum; // 0x18(0x8)
	struct FVector2D Maximum; // 0x20(0x8)
	int32_t CachedControlIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlFloat
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_GetControlFloat : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	float FloatValue; // 0x10(0x4)
	float Minimum; // 0x14(0x4)
	float Maximum; // 0x18(0x4)
	int32_t CachedControlIndex; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetControlBool
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_GetControlBool : FRigUnit
{
	struct FName Control; // 0x8(0x8)
	bool BoolValue; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t CachedControlIndex; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetCurveValue
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_GetCurveValue : FRigUnit
{
	struct FName Curve; // 0x8(0x8)
	float Value; // 0x10(0x4)
	int32_t CachedCurveIndex; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetDeltaTime
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{
	float Result; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{
	struct FName Bone; // 0x8(0x8)
	enum class EBoneGetterSetterMode Space; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	int32_t CachedBoneIndex; // 0x50(0x4)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetJointTransform
// Size: 0xA0 (Inherited: 0x20)
struct FRigUnit_GetJointTransform : FRigUnitMutable
{
	struct FName Joint; // 0x20(0x8)
	enum class ETransformGetterType Type; // 0x28(0x1)
	enum class ETransformSpaceMode TransformSpace; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FTransform BaseTransform; // 0x30(0x30)
	struct FName BaseJoint; // 0x60(0x8)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FTransform Output; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{
	struct FName Bone; // 0x8(0x8)
	struct FName Space; // 0x10(0x8)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform Transform; // 0x20(0x30)
	int32_t CachedBoneIndex; // 0x50(0x4)
	int32_t CachedSpaceIndex; // 0x54(0x4)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_GetSpaceTransform : FRigUnit
{
	struct FName Space; // 0x8(0x8)
	enum class EBoneGetterSetterMode SpaceType; // 0x10(0x1)
	uint8_t Pad_0x11[0xF]; // 0x11(0xF)
	struct FTransform Transform; // 0x20(0x30)
	int32_t CachedSpaceIndex; // 0x50(0x4)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_GetWorldTime
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{
	float Year; // 0x8(0x4)
	float Month; // 0xC(0x4)
	float Day; // 0x10(0x4)
	float WeekDay; // 0x14(0x4)
	float Hours; // 0x18(0x4)
	float Minutes; // 0x1C(0x4)
	float Seconds; // 0x20(0x4)
	float OverallSeconds; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_HighlevelBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_HighlevelBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_KalmanTransform
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	int32_t BufferSize; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
	struct FTransform Result; // 0x50(0x30)
	struct TArray<struct FTransform> Buffer; // 0x80(0x10)
	int32_t LastInsertIndex; // 0x90(0x4)
	uint8_t Pad_0x94[0xC]; // 0x94(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_KalmanVector
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	int32_t BufferSize; // 0x14(0x4)
	struct FVector Result; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FVector> Buffer; // 0x28(0x10)
	int32_t LastInsertIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_KalmanFloat
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	int32_t BufferSize; // 0xC(0x4)
	float Result; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<float> Buffer; // 0x18(0x10)
	int32_t LastInsertIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathBase : FRigUnit
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{
	bool A; // 0x8(0x1)
	bool B; // 0x9(0x1)
	bool Result; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolEquals
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{
	bool A; // 0x8(0x1)
	bool B; // 0x9(0x1)
	bool Result; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{
	bool A; // 0x8(0x1)
	bool B; // 0x9(0x1)
	bool Result; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolOr
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolNand
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolAnd
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{
	bool Value; // 0x8(0x1)
	bool Result; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolNot
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolConstant
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{
	bool Value; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorLerp
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{
	struct FLinearColor A; // 0x8(0x10)
	struct FLinearColor B; // 0x18(0x10)
	float T; // 0x28(0x4)
	struct FLinearColor Result; // 0x2C(0x10)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{
	struct FLinearColor A; // 0x8(0x10)
	struct FLinearColor B; // 0x18(0x10)
	struct FLinearColor Result; // 0x28(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorMul
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorSub
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorAdd
// Size: 0x38 (Inherited: 0x38)
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathColorFromFloat
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{
	float Value; // 0x8(0x4)
	struct FLinearColor Result; // 0xC(0x10)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float C; // 0x10(0x4)
	float AlphaAngle; // 0x14(0x4)
	float BetaAngle; // 0x18(0x4)
	float GammaAngle; // 0x1C(0x4)
	bool bValid; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Result; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAtan
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAcos
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAsin
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatTan
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatCos
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSin
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatRad
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatDeg
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{
	bool Condition; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float IfTrue; // 0xC(0x4)
	float IfFalse; // 0x10(0x4)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float Tolerance; // 0x10(0x4)
	bool Result; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Tolerance; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatLess
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatGreater
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatEquals
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	bool Result; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatRemap
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float SourceMinimum; // 0xC(0x4)
	float SourceMaximum; // 0x10(0x4)
	float TargetMinimum; // 0x14(0x4)
	float TargetMaximum; // 0x18(0x4)
	bool bClamp; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatLerp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float T; // 0x10(0x4)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatClamp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	float Minimum; // 0xC(0x4)
	float Maximum; // 0x10(0x4)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSign
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatRound
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatCeil
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatFloor
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float Result; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatPow
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatMax
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatMin
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatMod
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatMul
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatSub
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatConstant
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{
	float Value; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// Size: 0x10 (Inherited: 0x10)
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// Size: 0x10 (Inherited: 0x8)
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{
	enum class EControlRigRotationOrder RotationOrder; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Input; // 0x10(0x10)
	struct FVector TwistAxis; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat Swing; // 0x30(0x10)
	struct FQuat Twist; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Quaternion; // 0x10(0x10)
	uint8_t Axis; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector Vector; // 0x20(0xC)
	struct FVector Result; // 0x2C(0xC)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	float Result; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{
	bool Condition; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FQuat IfTrue; // 0x10(0x10)
	struct FQuat IfFalse; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	bool Result; // 0x30(0x1)
	uint8_t Pad_0x31[0xF]; // 0x31(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	bool Result; // 0x30(0x1)
	uint8_t Pad_0x31[0xF]; // 0x31(0xF)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	float T; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
	struct FQuat Result; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat A; // 0x10(0x10)
	struct FQuat B; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// Size: 0x40 (Inherited: 0x40)
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	struct FRotator Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	enum class EControlRigRotationOrder RotationOrder; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	struct FVector Axis; // 0x20(0xC)
	float Angle; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{
	struct FRotator Rotator; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{
	struct FVector Euler; // 0x8(0xC)
	enum class EControlRigRotationOrder RotationOrder; // 0x14(0x1)
	uint8_t Pad_0x15[0xB]; // 0x15(0xB)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{
	struct FVector Axis; // 0x8(0xC)
	float Angle; // 0x14(0x4)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
// Size: 0xD0 (Inherited: 0x8)
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	uint8_t Axis; // 0x40(0x1)
	uint8_t Type; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
	float Minimum; // 0x44(0x4)
	float Maximum; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FTransform Space; // 0x50(0x30)
	bool bDrawDebug; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FLinearColor DebugColor; // 0x84(0x10)
	float DebugThickness; // 0x94(0x4)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
	struct FTransform Result; // 0xA0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
// Size: 0x90 (Inherited: 0x8)
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{
	struct FVector Location; // 0x8(0xC)
	struct FVector Rotation; // 0x14(0xC)
	enum class EControlRigRotationOrder RotationOrder; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Scale; // 0x24(0xC)
	struct FTransform Transform; // 0x30(0x30)
	struct FEulerTransform EulerTransform; // 0x60(0x24)
	uint8_t Pad_0x84[0xC]; // 0x84(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector Location; // 0x40(0xC)
	struct FVector Result; // 0x4C(0xC)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector Direction; // 0x40(0xC)
	struct FVector Result; // 0x4C(0xC)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{
	bool Condition; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FTransform IfTrue; // 0x10(0x30)
	struct FTransform IfFalse; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformLerp
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform A; // 0x10(0x30)
	struct FTransform B; // 0x40(0x30)
	float T; // 0x70(0x4)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
	struct FTransform Result; // 0x80(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	struct FTransform Result; // 0x40(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformInverse
// Size: 0x70 (Inherited: 0x70)
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Local; // 0x10(0x30)
	struct FTransform Parent; // 0x40(0x30)
	struct FTransform Global; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Global; // 0x10(0x30)
	struct FTransform Parent; // 0x40(0x30)
	struct FTransform Local; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform A; // 0x10(0x30)
	struct FTransform B; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformMul
// Size: 0xA0 (Inherited: 0xA0)
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	struct FEulerTransform Result; // 0x40(0x24)
	uint8_t Pad_0x64[0xC]; // 0x64(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{
	struct FEulerTransform EulerTransform; // 0x8(0x24)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Result; // 0x30(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorBase
// Size: 0x8 (Inherited: 0x8)
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
// Size: 0x80 (Inherited: 0x8)
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	uint8_t Axis; // 0x14(0x1)
	uint8_t Type; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float Minimum; // 0x18(0x4)
	float Maximum; // 0x1C(0x4)
	struct FTransform Space; // 0x20(0x30)
	bool bDrawDebug; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	struct FLinearColor DebugColor; // 0x54(0x10)
	float DebugThickness; // 0x64(0x4)
	struct FVector Result; // 0x68(0xC)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier; // 0x8(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// Size: 0x58 (Inherited: 0x8)
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier; // 0x8(0x30)
	float T; // 0x38(0x4)
	struct FVector Result; // 0x3C(0xC)
	struct FVector Tangent; // 0x48(0xC)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	bool Result; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorParallel
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	bool Result; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorAngle
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMirror
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Normal; // 0x14(0xC)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorClampLength
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float MinimumLength; // 0x14(0x4)
	float MaximumLength; // 0x18(0x4)
	struct FVector Result; // 0x1C(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorSetLength
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Length; // 0x14(0x4)
	struct FVector Result; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Result; // 0x14(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorUnit
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorDot
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorCross
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorDistance
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorLength
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Result; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorRad
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorDeg
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{
	bool Condition; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector IfTrue; // 0xC(0xC)
	struct FVector IfFalse; // 0x18(0xC)
	struct FVector Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float Tolerance; // 0x20(0x4)
	bool Result; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// Size: 0x20 (Inherited: 0x8)
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Tolerance; // 0x14(0x4)
	bool Result; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	bool Result; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorEquals
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	bool Result; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorRemap
// Size: 0x58 (Inherited: 0x8)
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector SourceMinimum; // 0x14(0xC)
	struct FVector SourceMaximum; // 0x20(0xC)
	struct FVector TargetMinimum; // 0x2C(0xC)
	struct FVector TargetMaximum; // 0x38(0xC)
	bool bClamp; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct FVector Result; // 0x48(0xC)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorLerp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{
	struct FVector A; // 0x8(0xC)
	struct FVector B; // 0x14(0xC)
	float T; // 0x20(0x4)
	struct FVector Result; // 0x24(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorClamp
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	struct FVector Minimum; // 0x14(0xC)
	struct FVector Maximum; // 0x20(0xC)
	struct FVector Result; // 0x2C(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorSign
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorRound
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorCeil
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorFloor
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorAbs
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorNegate
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMax
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMin
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMod
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorDiv
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorScale
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8(0xC)
	float Factor; // 0x14(0x4)
	struct FVector Result; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorMul
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorSub
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorAdd
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{
	float Value; // 0x8(0x4)
	struct FVector Result; // 0xC(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// Size: 0x50 (Inherited: 0x20)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x20(0x10)
	float Weight; // 0x30(0x4)
	float WeightMinimum; // 0x34(0x4)
	float WeightMaximum; // 0x38(0x4)
	enum class EControlRigModifyBoneMode Mode; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x40(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_ModifyBoneTransforms_WorkData
{
	struct TArray<int32_t> CachedBoneIndices; // 0x0(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_ModifyBoneTransforms_PerBone
{
	struct FName Bone; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_MultiFABRIK
// Size: 0xA8 (Inherited: 0x20)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{
	struct FName RootBone; // 0x20(0x8)
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x28(0x10)
	float Precision; // 0x38(0x4)
	bool bPropagateToChildren; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	int32_t MaxIterations; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FRigUnit_MultiFABRIK_WorkData WorkData; // 0x48(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
// Size: 0x60 (Inherited: 0x0)
struct FRigUnit_MultiFABRIK_WorkData
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
// Size: 0x14 (Inherited: 0x0)
struct FRigUnit_MultiFABRIK_EndEffector
{
	struct FName Bone; // 0x0(0x8)
	struct FVector Location; // 0x8(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_NoiseVector
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{
	struct FVector Position; // 0x8(0xC)
	struct FVector Speed; // 0x14(0xC)
	struct FVector Frequency; // 0x20(0xC)
	float Minimum; // 0x2C(0x4)
	float Maximum; // 0x30(0x4)
	struct FVector Result; // 0x34(0xC)
	struct FVector Time; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_NoiseFloat
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{
	float Value; // 0x8(0x4)
	float Speed; // 0xC(0x4)
	float Frequency; // 0x10(0x4)
	float Minimum; // 0x14(0x4)
	float Maximum; // 0x18(0x4)
	float Result; // 0x1C(0x4)
	float Time; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SimBaseMutable
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_PointSimulation
// Size: 0x1B0 (Inherited: 0x20)
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{
	struct TArray<struct FCRSimPoint> Points; // 0x20(0x10)
	struct TArray<struct FCRSimLinearSpring> Links; // 0x30(0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x40(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x50(0x10)
	float SimulatedStepsPerSecond; // 0x60(0x4)
	enum class ECRSimPointIntegrateType IntegratorType; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	float VerletBlend; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0x70(0x10)
	bool bLimitLocalPosition; // 0x80(0x1)
	bool bPropagateToChildren; // 0x81(0x1)
	uint8_t Pad_0x82[0x2]; // 0x82(0x2)
	struct FVector PrimaryAimAxis; // 0x84(0xC)
	struct FVector SecondaryAimAxis; // 0x90(0xC)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0xA0(0x50)
	struct FCRFourPointBezier Bezier; // 0xF0(0x30)
	struct FRigUnit_PointSimulation_WorkData WorkData; // 0x120(0x88)
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
// Size: 0x88 (Inherited: 0x0)
struct FRigUnit_PointSimulation_WorkData
{
	struct FCRSimPointContainer Simulation; // 0x0(0x78)
	struct TArray<int32_t> BoneIndices; // 0x78(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// Size: 0x50 (Inherited: 0x0)
struct FRigUnit_PointSimulation_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	float CollisionScale; // 0x8(0x4)
	bool bDrawPointsAsSpheres; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FLinearColor Color; // 0x10(0x10)
	struct FTransform WorldOffset; // 0x20(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// Size: 0x14 (Inherited: 0x0)
struct FRigUnit_PointSimulation_BoneTarget
{
	struct FName Bone; // 0x0(0x8)
	int32_t TranslationPoint; // 0x8(0x4)
	int32_t PrimaryAimPoint; // 0xC(0x4)
	int32_t SecondaryAimPoint; // 0x10(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// Size: 0x40 (Inherited: 0x20)
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{
	int32_t NumberOfMeasurements; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString Prefix; // 0x28(0x10)
	float AccumulatedTime; // 0x38(0x4)
	int32_t MeasurementsLeft; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// Size: 0x20 (Inherited: 0x20)
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{
};

// Object: ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_QuaternionToAngle : FRigUnit
{
	struct FVector Axis; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FQuat Argument; // 0x20(0x10)
	float Angle; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{
	struct FVector Axis; // 0x8(0xC)
	float Angle; // 0x14(0x4)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Argument; // 0x10(0x10)
	struct FVector Axis; // 0x20(0xC)
	float Angle; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Argument; // 0x10(0x10)
	struct FQuat Result; // 0x20(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_InverseQuaterion
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Argument0; // 0x10(0x10)
	struct FQuat Argument1; // 0x20(0x10)
	struct FQuat Result; // 0x30(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// Size: 0x40 (Inherited: 0x40)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_RandomVector
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_RandomVector : FRigUnit_MathBase
{
	int32_t Seed; // 0x8(0x4)
	float Minimum; // 0xC(0x4)
	float Maximum; // 0x10(0x4)
	float Duration; // 0x14(0x4)
	struct FVector Result; // 0x18(0xC)
	struct FVector LastResult; // 0x24(0xC)
	int32_t LastSeed; // 0x30(0x4)
	float TimeLeft; // 0x34(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_RandomFloat
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{
	int32_t Seed; // 0x8(0x4)
	float Minimum; // 0xC(0x4)
	float Maximum; // 0x10(0x4)
	float Duration; // 0x14(0x4)
	float Result; // 0x18(0x4)
	float LastResult; // 0x1C(0x4)
	int32_t LastSeed; // 0x20(0x4)
	float TimeLeft; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetBoneRotation
// Size: 0x50 (Inherited: 0x20)
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{
	struct FName Bone; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FQuat Rotation; // 0x30(0x10)
	enum class EBoneGetterSetterMode Space; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float Weight; // 0x44(0x4)
	bool bPropagateToChildren; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	int32_t CachedBoneIndex; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetBoneTransform
// Size: 0x70 (Inherited: 0x20)
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{
	struct FName Bone; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform Transform; // 0x30(0x30)
	enum class EBoneGetterSetterMode Space; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	float Weight; // 0x64(0x4)
	bool bPropagateToChildren; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	int32_t CachedBoneIndex; // 0x6C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// Size: 0x48 (Inherited: 0x20)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{
	struct FName Bone; // 0x20(0x8)
	struct FVector Translation; // 0x28(0xC)
	enum class EBoneGetterSetterMode Space; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	float Weight; // 0x38(0x4)
	bool bPropagateToChildren; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	int32_t CachedBoneIndex; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlColor
// Size: 0x40 (Inherited: 0x20)
struct FRigUnit_SetControlColor : FRigUnitMutable
{
	struct FName Control; // 0x20(0x8)
	struct FLinearColor Color; // 0x28(0x10)
	int32_t CachedControlIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlTransform
// Size: 0x70 (Inherited: 0x20)
struct FRigUnit_SetControlTransform : FRigUnitMutable
{
	struct FName Control; // 0x20(0x8)
	float Weight; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Transform; // 0x30(0x30)
	enum class EBoneGetterSetterMode Space; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	int32_t CachedControlIndex; // 0x64(0x4)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlRotator
// Size: 0x40 (Inherited: 0x20)
struct FRigUnit_SetControlRotator : FRigUnitMutable
{
	struct FName Control; // 0x20(0x8)
	float Weight; // 0x28(0x4)
	struct FRotator Rotator; // 0x2C(0xC)
	enum class EBoneGetterSetterMode Space; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t CachedControlIndex; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlVector
// Size: 0x40 (Inherited: 0x20)
struct FRigUnit_SetControlVector : FRigUnitMutable
{
	struct FName Control; // 0x20(0x8)
	float Weight; // 0x28(0x4)
	struct FVector Vector; // 0x2C(0xC)
	enum class EBoneGetterSetterMode Space; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t CachedControlIndex; // 0x3C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlVector2D
// Size: 0x38 (Inherited: 0x20)
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{
	struct FName Control; // 0x20(0x8)
	float Weight; // 0x28(0x4)
	struct FVector2D Vector; // 0x2C(0x8)
	int32_t CachedControlIndex; // 0x34(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlFloat
// Size: 0x38 (Inherited: 0x20)
struct FRigUnit_SetControlFloat : FRigUnitMutable
{
	struct FName Control; // 0x20(0x8)
	float Weight; // 0x28(0x4)
	float FloatValue; // 0x2C(0x4)
	int32_t CachedControlIndex; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetControlBool
// Size: 0x30 (Inherited: 0x20)
struct FRigUnit_SetControlBool : FRigUnitMutable
{
	struct FName Control; // 0x20(0x8)
	bool BoolValue; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t CachedControlIndex; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetCurveValue
// Size: 0x30 (Inherited: 0x20)
struct FRigUnit_SetCurveValue : FRigUnitMutable
{
	struct FName Curve; // 0x20(0x8)
	float Value; // 0x28(0x4)
	int32_t CachedCurveIndex; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// Size: 0x70 (Inherited: 0x20)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{
	struct FName Bone; // 0x20(0x8)
	struct FName Space; // 0x28(0x8)
	struct FTransform Transform; // 0x30(0x30)
	float Weight; // 0x60(0x4)
	bool bPropagateToChildren; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	int32_t CachedBoneIndex; // 0x68(0x4)
	int32_t CachedSpaceIndex; // 0x6C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// Size: 0x70 (Inherited: 0x20)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{
	struct FName Space; // 0x20(0x8)
	float Weight; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Transform; // 0x30(0x30)
	enum class EBoneGetterSetterMode SpaceType; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	int32_t CachedSpaceIndex; // 0x64(0x4)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_SlideChain
// Size: 0x80 (Inherited: 0x20)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x20(0x8)
	struct FName EndBone; // 0x28(0x8)
	float SlideAmount; // 0x30(0x4)
	bool bPropagateToChildren; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FRigUnit_SlideChain_WorkData WorkData; // 0x38(0x48)
};

// Object: ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
// Size: 0x48 (Inherited: 0x0)
struct FRigUnit_SlideChain_WorkData
{
	float ChainLength; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<float> BoneSegments; // 0x8(0x10)
	struct TArray<int32_t> BoneIndices; // 0x18(0x10)
	struct TArray<struct FTransform> Transforms; // 0x28(0x10)
	struct TArray<struct FTransform> BlendedTransforms; // 0x38(0x10)
};

// Object: ScriptStruct ControlRig.RigUnit_SpringIK
// Size: 0x180 (Inherited: 0x20)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x20(0x8)
	struct FName EndBone; // 0x28(0x8)
	float HierarchyStrength; // 0x30(0x4)
	float EffectorStrength; // 0x34(0x4)
	float EffectorRatio; // 0x38(0x4)
	float RootStrength; // 0x3C(0x4)
	float RootRatio; // 0x40(0x4)
	float Damping; // 0x44(0x4)
	struct FVector PoleVector; // 0x48(0xC)
	bool bFlipPolePlane; // 0x54(0x1)
	enum class EControlRigVectorKind PoleVectorKind; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	struct FName PoleVectorSpace; // 0x58(0x8)
	struct FVector PrimaryAxis; // 0x60(0xC)
	struct FVector SecondaryAxis; // 0x6C(0xC)
	bool bLiveSimulation; // 0x78(0x1)
	uint8_t Pad_0x79[0x3]; // 0x79(0x3)
	int32_t Iterations; // 0x7C(0x4)
	bool bLimitLocalPosition; // 0x80(0x1)
	bool bPropagateToChildren; // 0x81(0x1)
	uint8_t Pad_0x82[0xE]; // 0x82(0xE)
	struct FRigUnit_SpringIK_DebugSettings DebugSettings; // 0x90(0x50)
	struct FRigUnit_SpringIK_WorkData WorkData; // 0xE0(0xA0)
};

// Object: ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
// Size: 0xA0 (Inherited: 0x0)
struct FRigUnit_SpringIK_WorkData
{
	struct TArray<int32_t> BoneIndices; // 0x0(0x10)
	int32_t PoleVectorIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FTransform> Transforms; // 0x18(0x10)
	struct FCRSimPointContainer Simulation; // 0x28(0x78)
};

// Object: ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// Size: 0x50 (Inherited: 0x0)
struct FRigUnit_SpringIK_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	struct FLinearColor Color; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldOffset; // 0x20(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_Timeline
// Size: 0x18 (Inherited: 0x8)
struct FRigUnit_Timeline : FRigUnit_SimBase
{
	float Speed; // 0x8(0x4)
	float Time; // 0xC(0x4)
	float AccumulatedValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// Size: 0xB0 (Inherited: 0x8)
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	float SecondsAgo; // 0x40(0x4)
	int32_t BufferSize; // 0x44(0x4)
	float TimeRange; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FTransform Result; // 0x50(0x30)
	struct TArray<struct FTransform> Buffer; // 0x80(0x10)
	struct TArray<float> DeltaTimes; // 0x90(0x10)
	int32_t LastInsertIndex; // 0xA0(0x4)
	int32_t UpperBound; // 0xA4(0x4)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// Size: 0x58 (Inherited: 0x8)
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{
	struct FVector Value; // 0x8(0xC)
	float SecondsAgo; // 0x14(0x4)
	int32_t BufferSize; // 0x18(0x4)
	float TimeRange; // 0x1C(0x4)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FVector> Buffer; // 0x30(0x10)
	struct TArray<float> DeltaTimes; // 0x40(0x10)
	int32_t LastInsertIndex; // 0x50(0x4)
	int32_t UpperBound; // 0x54(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// Size: 0x48 (Inherited: 0x8)
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{
	float Value; // 0x8(0x4)
	float SecondsAgo; // 0xC(0x4)
	int32_t BufferSize; // 0x10(0x4)
	float TimeRange; // 0x14(0x4)
	float Result; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<float> Buffer; // 0x20(0x10)
	struct TArray<float> DeltaTimes; // 0x30(0x10)
	int32_t LastInsertIndex; // 0x40(0x4)
	int32_t UpperBound; // 0x44(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// Size: 0xA0 (Inherited: 0x8)
struct FRigUnit_BinaryTransformOp : FRigUnit
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Argument0; // 0x10(0x30)
	struct FTransform Argument1; // 0x40(0x30)
	struct FTransform Result; // 0x70(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// Size: 0xA0 (Inherited: 0xA0)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_MultiplyTransform
// Size: 0xA0 (Inherited: 0xA0)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_TransformConstraint
// Size: 0xE0 (Inherited: 0x20)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FName Bone; // 0x20(0x8)
	enum class ETransformSpaceMode BaseTransformSpace; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FTransform BaseTransform; // 0x30(0x30)
	struct FName BaseBone; // 0x60(0x8)
	struct TArray<struct FConstraintTarget> Targets; // 0x68(0x10)
	struct FRigUnit_TransformConstraint_WorkData WorkData; // 0x78(0x60)
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
};

// Object: ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
// Size: 0x60 (Inherited: 0x0)
struct FRigUnit_TransformConstraint_WorkData
{
	struct TArray<struct FConstraintData> ConstraintData; // 0x0(0x10)
	struct TMap<int32_t, int32_t> ConstraintDataToTargets; // 0x10(0x50)
};

// Object: ScriptStruct ControlRig.ConstraintTarget
// Size: 0x40 (Inherited: 0x0)
struct FConstraintTarget
{
	struct FTransform Transform; // 0x0(0x30)
	float Weight; // 0x30(0x4)
	bool bMaintainOffset; // 0x34(0x1)
	struct FTransformFilter Filter; // 0x35(0x9)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// Size: 0x1D0 (Inherited: 0x20)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{
	struct FName StartJoint; // 0x20(0x8)
	struct FName EndJoint; // 0x28(0x8)
	struct FVector PoleTarget; // 0x30(0xC)
	float Spin; // 0x3C(0x4)
	struct FTransform EndEffector; // 0x40(0x30)
	float IKBlend; // 0x70(0x4)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
	struct FTransform StartJointFKTransform; // 0x80(0x30)
	struct FTransform MidJointFKTransform; // 0xB0(0x30)
	struct FTransform EndJointFKTransform; // 0xE0(0x30)
	float PreviousFKIKBlend; // 0x110(0x4)
	uint8_t Pad_0x114[0xC]; // 0x114(0xC)
	struct FTransform StartJointIKTransform; // 0x120(0x30)
	struct FTransform MidJointIKTransform; // 0x150(0x30)
	struct FTransform EndJointIKTransform; // 0x180(0x30)
	int32_t StartJointIndex; // 0x1B0(0x4)
	int32_t MidJointIndex; // 0x1B4(0x4)
	int32_t EndJointIndex; // 0x1B8(0x4)
	float UpperLimbLength; // 0x1BC(0x4)
	float LowerLimbLength; // 0x1C0(0x4)
	uint8_t Pad_0x1C4[0xC]; // 0x1C4(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Size: 0xE0 (Inherited: 0x8)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Root; // 0x10(0x30)
	struct FVector PoleVector; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FTransform Effector; // 0x50(0x30)
	struct FVector PrimaryAxis; // 0x80(0xC)
	struct FVector SecondaryAxis; // 0x8C(0xC)
	float SecondaryAxisWeight; // 0x98(0x4)
	bool bEnableStretch; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
	float StretchStartRatio; // 0xA0(0x4)
	float StretchMaximumRatio; // 0xA4(0x4)
	float BoneALength; // 0xA8(0x4)
	float BoneBLength; // 0xAC(0x4)
	struct FTransform Elbow; // 0xB0(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Size: 0x50 (Inherited: 0x8)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{
	struct FVector Root; // 0x8(0xC)
	struct FVector PoleVector; // 0x14(0xC)
	struct FVector Effector; // 0x20(0xC)
	bool bEnableStretch; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float StretchStartRatio; // 0x30(0x4)
	float StretchMaximumRatio; // 0x34(0x4)
	float BoneALength; // 0x38(0x4)
	float BoneBLength; // 0x3C(0x4)
	struct FVector Elbow; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// Size: 0x110 (Inherited: 0x20)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{
	struct FName BoneA; // 0x20(0x8)
	struct FName BoneB; // 0x28(0x8)
	struct FName EffectorBone; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform Effector; // 0x40(0x30)
	struct FVector PrimaryAxis; // 0x70(0xC)
	struct FVector SecondaryAxis; // 0x7C(0xC)
	float SecondaryAxisWeight; // 0x88(0x4)
	struct FVector PoleVector; // 0x8C(0xC)
	enum class EControlRigVectorKind PoleVectorKind; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	struct FName PoleVectorSpace; // 0x9C(0x8)
	bool bEnableStretch; // 0xA4(0x1)
	uint8_t Pad_0xA5[0x3]; // 0xA5(0x3)
	float StretchStartRatio; // 0xA8(0x4)
	float StretchMaximumRatio; // 0xAC(0x4)
	float Weight; // 0xB0(0x4)
	float BoneALength; // 0xB4(0x4)
	float BoneBLength; // 0xB8(0x4)
	bool bPropagateToChildren; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0xC0(0x40)
	int32_t BoneAIndex; // 0x100(0x4)
	int32_t BoneBIndex; // 0x104(0x4)
	int32_t EffectorBoneIndex; // 0x108(0x4)
	int32_t PoleVectorSpaceIndex; // 0x10C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// Size: 0x40 (Inherited: 0x0)
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform WorldOffset; // 0x10(0x30)
};

// Object: ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// Size: 0x28 (Inherited: 0x8)
struct FRigUnit_Distance_VectorVector : FRigUnit
{
	struct FVector Argument0; // 0x8(0xC)
	struct FVector Argument1; // 0x14(0xC)
	float Result; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// Size: 0x30 (Inherited: 0x8)
struct FRigUnit_BinaryVectorOp : FRigUnit
{
	struct FVector Argument0; // 0x8(0xC)
	struct FVector Argument1; // 0x14(0xC)
	struct FVector Result; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Add_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// Size: 0x30 (Inherited: 0x30)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{
};

// Object: ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// Size: 0x70 (Inherited: 0x8)
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{
	struct FVector Target; // 0x8(0xC)
	float Strength; // 0x14(0x4)
	float Damp; // 0x18(0x4)
	float Blend; // 0x1C(0x4)
	struct FVector Position; // 0x20(0xC)
	struct FVector Velocity; // 0x2C(0xC)
	struct FVector Acceleration; // 0x38(0xC)
	struct FCRSimPoint Point; // 0x44(0x28)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// Size: 0x60 (Inherited: 0x8)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Value; // 0x10(0x30)
	bool bEnabled; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float Thickness; // 0x44(0x4)
	float Scale; // 0x48(0x4)
	struct FName BoneSpace; // 0x4C(0x8)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// Size: 0x40 (Inherited: 0x8)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FQuat Value; // 0x10(0x10)
	bool bEnabled; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float Thickness; // 0x24(0x4)
	float Scale; // 0x28(0x4)
	struct FName BoneSpace; // 0x2C(0x8)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct ControlRig.RigUnit_VisualDebugVector
// Size: 0x38 (Inherited: 0x8)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{
	struct FVector Value; // 0x8(0xC)
	bool bEnabled; // 0x14(0x1)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x4)
	float Scale; // 0x2C(0x4)
	struct FName BoneSpace; // 0x30(0x8)
};

// Object: ScriptStruct ControlRig.StructReference
// Size: 0x8 (Inherited: 0x0)
struct FStructReference
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

} // namespace SDK
