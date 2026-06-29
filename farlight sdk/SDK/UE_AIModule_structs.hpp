// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6
};

// Object: Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6
};

// Object: Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2
};

// Object: Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	Lowest = 0,
	Low = 64,
	AutonomousAI = 127,
	High = 192,
	Ultimate = 254,
	EAITaskPriority_MAX = 255
};

// Object: Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7
};

// Object: Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4
};

// Object: Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5
};

// Object: Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6
};

// Object: Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5
};

// Object: Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5
};

// Object: Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3
};

// Object: Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Object: Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4
};

// Object: Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4
};

// Object: Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4
};

// Object: Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6
};

// Object: Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2
};

// Object: Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2
};

// Object: Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5
};

// Object: Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2
};

// Object: Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2
};

// Object: Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2
};

// Object: Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3
};

// Object: Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2
};

// Object: Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2
};

// Object: Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4
};

// Object: Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2
};

// Object: Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3
};

// Object: Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3
};

// Object: Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2
};

// Object: Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3
};

// Object: Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4
};

// Object: Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4
};

// Object: Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3
};

// Object: Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3
};

// Object: Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4
};

// Object: Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4
};

// Object: Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2
};

// Object: Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3
};

// Object: Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6
};

// Object: Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5
};

// Object: Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4
};

// Object: Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3
};

// Object: Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3
};

// Object: Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3
};

// Object: Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3
};

// Object: Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5
};

// Object: Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4
};

// Object: Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2
};

// Object: Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2
};

// Object: Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2
};

// Object: ScriptStruct AIModule.AIRequestID
// Size: 0x4 (Inherited: 0x0)
struct FAIRequestID
{
	uint32_t RequestID; // 0x0(0x4)
};

// Object: ScriptStruct AIModule.AIStimulus
// Size: 0x3C (Inherited: 0x0)
struct FAIStimulus
{
	float Age; // 0x0(0x4)
	float ExpirationAge; // 0x4(0x4)
	float Strength; // 0x8(0x4)
	struct FVector StimulusLocation; // 0xC(0xC)
	struct FVector ReceiverLocation; // 0x18(0xC)
	struct FName Tag; // 0x24(0x8)
	uint8_t Pad_0x2C[0xC]; // 0x2C(0xC)
	uint8_t BitPad_0x38_0 : 1; // 0x38(0x1)
	uint8_t bSuccessfullySensed : 1; // 0x38(0x1), Mask(0x2)
	uint8_t BitPad_0x38_2 : 6; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
};

// Object: ScriptStruct AIModule.AINoiseEvent
// Size: 0x30 (Inherited: 0x0)
struct FAINoiseEvent
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
	struct FVector NoiseLocation; // 0x4(0xC)
	float Loudness; // 0x10(0x4)
	float MaxRange; // 0x14(0x4)
	struct AActor* Instigator; // 0x18(0x8)
	struct FName Tag; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct AIModule.AITeamStimulusEvent
// Size: 0x38 (Inherited: 0x0)
struct FAITeamStimulusEvent
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
	struct AActor* Broadcaster; // 0x28(0x8)
	struct AActor* Enemy; // 0x30(0x8)
};

// Object: ScriptStruct AIModule.AIDataProviderValue
// Size: 0x20 (Inherited: 0x0)
struct FAIDataProviderValue
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct UAIDataProvider* DataBinding; // 0x10(0x8)
	struct FName DataField; // 0x18(0x8)
};

// Object: ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderTypedValue : FAIDataProviderValue
{
	struct UObject* PropertyType; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue
{
	bool DefaultValue; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue
{
	float DefaultValue; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue
{
	int32_t DefaultValue; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderStructValue : FAIDataProviderValue
{
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
};

// Object: ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20 (Inherited: 0x0)
struct FActorPerceptionBlueprintInfo
{
	struct AActor* Target; // 0x0(0x8)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x8(0x10)
	uint8_t bIsHostile : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x4 (Inherited: 0x0)
struct FAISenseAffiliationFilter
{
	uint8_t bDetectEnemies : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bDetectNeutrals : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bDetectFriendlies : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct AIModule.AIDamageEvent
// Size: 0x30 (Inherited: 0x0)
struct FAIDamageEvent
{
	float amount; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
	struct FVector HitLocation; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct AActor* DamagedActor; // 0x20(0x8)
	struct AActor* Instigator; // 0x28(0x8)
};

// Object: ScriptStruct AIModule.AIPredictionEvent
// Size: 0x18 (Inherited: 0x0)
struct FAIPredictionEvent
{
	struct AActor* Requestor; // 0x0(0x8)
	struct AActor* PredictedActor; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct AIModule.AISightEvent
// Size: 0x18 (Inherited: 0x0)
struct FAISightEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AActor* SeenActor; // 0x8(0x8)
	struct AActor* Observer; // 0x10(0x8)
};

// Object: ScriptStruct AIModule.AITouchEvent
// Size: 0x20 (Inherited: 0x0)
struct FAITouchEvent
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct AActor* TouchReceiver; // 0x10(0x8)
	struct AActor* OtherActor; // 0x18(0x8)
};

// Object: ScriptStruct AIModule.IntervalCountdown
// Size: 0x8 (Inherited: 0x0)
struct FIntervalCountdown
{
	float Interval; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
};

// Object: ScriptStruct AIModule.AIMoveRequest
// Size: 0x40 (Inherited: 0x0)
struct FAIMoveRequest
{
	struct AActor* GoalActor; // 0x0(0x8)
	uint8_t Pad_0x8[0x38]; // 0x8(0x38)
};

// Object: ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size: 0x18 (Inherited: 0x0)
struct FBehaviorTreeTemplateInfo
{
	struct UBehaviorTree* Asset; // 0x0(0x8)
	struct UBTCompositeNode* Template; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28 (Inherited: 0x0)
struct FBlackboardKeySelector
{
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x0(0x10)
	struct FName SelectedKeyName; // 0x10(0x8)
	struct UBlackboardKeyType* SelectedKeyType; // 0x18(0x8)
	uint8_t SelectedKeyID; // 0x20(0x1)
	uint8_t bNoneIsAllowedValue : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
};

// Object: ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x0)
struct FBlackboardEntry
{
	struct FName EntryName; // 0x0(0x8)
	struct UBlackboardKeyType* KeyType; // 0x8(0x8)
	uint8_t bInstanceSynced : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct AIModule.BTCompositeChild
// Size: 0x30 (Inherited: 0x0)
struct FBTCompositeChild
{
	struct UBTCompositeNode* ChildComposite; // 0x0(0x8)
	struct UBTTaskNode* ChildTask; // 0x8(0x8)
	struct TArray<struct UBTDecorator*> Decorators; // 0x10(0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20(0x10)
};

// Object: ScriptStruct AIModule.BTDecoratorLogic
// Size: 0x4 (Inherited: 0x0)
struct FBTDecoratorLogic
{
	uint8_t Operation; // 0x0(0x1)
	uint8_t Pad_0x1[0x1]; // 0x1(0x1)
	uint16_t Number; // 0x2(0x2)
};

// Object: ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20 (Inherited: 0x0)
struct FCrowdAvoidanceSamplingPattern
{
	struct TArray<float> Angles; // 0x0(0x10)
	struct TArray<float> Radii; // 0x10(0x10)
};

// Object: ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1C (Inherited: 0x0)
struct FCrowdAvoidanceConfig
{
	float VelocityBias; // 0x0(0x4)
	float DesiredVelocityWeight; // 0x4(0x4)
	float CurrentVelocityWeight; // 0x8(0x4)
	float SideBiasWeight; // 0xC(0x4)
	float ImpactTimeWeight; // 0x10(0x4)
	float ImpactTimeRange; // 0x14(0x4)
	uint8_t CustomPatternIdx; // 0x18(0x1)
	uint8_t AdaptiveDivisions; // 0x19(0x1)
	uint8_t AdaptiveRings; // 0x1A(0x1)
	uint8_t AdaptiveDepth; // 0x1B(0x1)
};

// Object: ScriptStruct AIModule.EnvQueryInstanceCache
// Size: 0x178 (Inherited: 0x0)
struct FEnvQueryInstanceCache
{
	struct UEnvQuery* Template; // 0x0(0x8)
	uint8_t Pad_0x8[0x170]; // 0x8(0x170)
};

// Object: ScriptStruct AIModule.EnvQueryRequest
// Size: 0x68 (Inherited: 0x0)
struct FEnvQueryRequest
{
	struct UEnvQuery* QueryTemplate; // 0x0(0x8)
	struct UObject* Owner; // 0x8(0x8)
	struct UWorld* World; // 0x10(0x8)
	uint8_t Pad_0x18[0x50]; // 0x18(0x50)
};

// Object: ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size: 0x48 (Inherited: 0x0)
struct FEQSParametrizedQueryExecutionRequest
{
	struct UEnvQuery* QueryTemplate; // 0x0(0x8)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x8(0x10)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18(0x28)
	uint8_t RunMode; // 0x40(0x1)
	uint8_t bUseBBKeyForQueryTemplate : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
};

// Object: ScriptStruct AIModule.AIDynamicParam
// Size: 0x38 (Inherited: 0x0)
struct FAIDynamicParam
{
	struct FName ParamName; // 0x0(0x8)
	enum class EAIParamType ParamType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Value; // 0xC(0x4)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// Object: ScriptStruct AIModule.EnvQueryResult
// Size: 0x40 (Inherited: 0x0)
struct FEnvQueryResult
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct UEnvQueryItemType* ItemType; // 0x10(0x8)
	uint8_t Pad_0x18[0x14]; // 0x18(0x14)
	int32_t OptionIndex; // 0x2C(0x4)
	int32_t QueryID; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct AIModule.EnvOverlapData
// Size: 0x1C (Inherited: 0x0)
struct FEnvOverlapData
{
	float ExtentX; // 0x0(0x4)
	float ExtentY; // 0x4(0x4)
	float ExtentZ; // 0x8(0x4)
	struct FVector ShapeOffset; // 0xC(0xC)
	uint8_t OverlapChannel; // 0x18(0x1)
	uint8_t OverlapShape; // 0x19(0x1)
	uint8_t bOnlyBlockingHits : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t bOverlapComplex : 1; // 0x1A(0x1), Mask(0x2)
	uint8_t bSkipOverlapQuerier : 1; // 0x1A(0x1), Mask(0x4)
	uint8_t BitPad_0x1A_3 : 5; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x0)
struct FEnvTraceData
{
	int32_t VersionNum; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UNavigationQueryFilter* NavigationFilter; // 0x8(0x8)
	float ProjectDown; // 0x10(0x4)
	float ProjectUp; // 0x14(0x4)
	float ExtentX; // 0x18(0x4)
	float ExtentY; // 0x1C(0x4)
	float ExtentZ; // 0x20(0x4)
	float PostProjectionVerticalOffset; // 0x24(0x4)
	uint8_t TraceChannel; // 0x28(0x1)
	uint8_t SerializedChannel; // 0x29(0x1)
	uint8_t TraceShape; // 0x2A(0x1)
	uint8_t TraceMode; // 0x2B(0x1)
	uint8_t bTraceComplex : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t bOnlyBlockingHits : 1; // 0x2C(0x1), Mask(0x2)
	uint8_t bCanTraceOnNavMesh : 1; // 0x2C(0x1), Mask(0x4)
	uint8_t bCanTraceOnGeometry : 1; // 0x2C(0x1), Mask(0x8)
	uint8_t bCanDisableTrace : 1; // 0x2C(0x1), Mask(0x10)
	uint8_t bCanProjectDown : 1; // 0x2C(0x1), Mask(0x20)
	uint8_t BitPad_0x2C_6 : 2; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x0)
struct FEnvDirection
{
	struct UEnvQueryContext* LineFrom; // 0x0(0x8)
	struct UEnvQueryContext* LineTo; // 0x8(0x8)
	struct UEnvQueryContext* Rotation; // 0x10(0x8)
	uint8_t DirMode; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct AIModule.EnvNamedValue
// Size: 0x10 (Inherited: 0x0)
struct FEnvNamedValue
{
	struct FName ParamName; // 0x0(0x8)
	enum class EAIParamType ParamType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Value; // 0xC(0x4)
};

// Object: ScriptStruct AIModule.GenericTeamId
// Size: 0x1 (Inherited: 0x0)
struct FGenericTeamId
{
	uint8_t TeamID; // 0x0(0x1)
};

// Object: ScriptStruct AIModule.PawnActionStack
// Size: 0x8 (Inherited: 0x0)
struct FPawnActionStack
{
	struct UPawnAction* TopAction; // 0x0(0x8)
};

// Object: ScriptStruct AIModule.PawnActionEvent
// Size: 0x18 (Inherited: 0x0)
struct FPawnActionEvent
{
	struct UPawnAction* Action; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: AISenseBlueprintListener AIModule.Default__AISenseBlueprintListener
// Size: 0x0 (Inherited: 0x0)
struct FDefault__AISenseBlueprintListener
{
};

} // namespace SDK
