// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	CancelAbilityImmediately = 0,
	RemoveAbilityOnEnd = 1,
	DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	Source = 0,
	Target = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
	Authority = 0,
	NonAuthority = 1,
	Predicting = 2,
	Confirmed = 3,
	Rejected = 4,
	EGameplayAbilityActivationMode_MAX = 5
};

// Object: Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	GenericConfirm = 0,
	GenericCancel = 1,
	InputPressed = 2,
	InputReleased = 3,
	GenericSignalFromClient = 4,
	GenericSignalFromServer = 5,
	GameCustom1 = 6,
	GameCustom2 = 7,
	GameCustom3 = 8,
	GameCustom4 = 9,
	GameCustom5 = 10,
	GameCustom6 = 11,
	MAX = 12
};

// Object: Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
	Minimal = 0,
	Mixed = 1,
	Full = 2,
	EGameplayEffectReplicationMode_MAX = 3
};

// Object: Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
	WaitingOnGame = 1,
	WaitingOnUser = 2,
	WaitingOnAvatar = 4,
	EAbilityTaskWaitState_MAX = 5
};

// Object: Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	AlignFromTargetToSource = 0,
	AlignToTargetForward = 1,
	AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3
};

// Object: Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
	BothWait = 0,
	OnlyServerWait = 1,
	OnlyClientWait = 2,
	EAbilityTaskNetSyncType_MAX = 3
};

// Object: Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
	None = 0,
	GreaterThan = 1,
	LessThan = 2,
	GreaterThanOrEqualTo = 3,
	LessThanOrEqualTo = 4,
	NotEqualTo = 5,
	ExactlyEqualTo = 6,
	MAX = 7
};

// Object: Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
	Ability1 = 0,
	Ability2 = 1,
	Ability3 = 2,
	Ability4 = 3,
	Ability5 = 4,
	Ability6 = 5,
	Ability7 = 6,
	Ability8 = 7,
	Ability9 = 8,
	EGameplayAbilityInputBinds_MAX = 9
};

// Object: Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
	TDFS_Any = 0,
	TDFS_NoSelf = 1,
	TDFS_NoOthers = 2,
	TDFS_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	LiteralTransform = 0,
	ActorTransform = 1,
	SocketTransform = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
	Instant = 0,
	UserConfirmed = 1,
	Custom = 2,
	CustomMulti = 3,
	EGameplayTargetingConfirmation_MAX = 4
};

// Object: Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8_t
{
	Position = 0,
	CurrentSectionId = 1,
	ERepAnimPositionMethod_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
	GameplayEvent = 0,
	OwnedTagAdded = 1,
	OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	ReplicateNo = 0,
	ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	ClientOrServer = 0,
	ServerOnlyExecution = 1,
	ServerOnlyTermination = 2,
	ServerOnly = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	LocalPredicted = 0,
	LocalOnly = 1,
	ServerInitiated = 2,
	ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	NonInstanced = 0,
	InstancedPerActor = 1,
	InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
	CueParameters = 0,
	FromSpec = 1,
	EGameplayCuePayloadType_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	NeverReset = 0,
	ResetPeriod = 1,
	ExecuteAndResetPeriod = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	ClearEntireStack = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	ResetOnSuccessfulApplication = 0,
	NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh = 1,
	UpdateDurationAndKeepRemainTime = 2,
	EGameplayEffectStackingDurationPolicy_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
	Instant = 0,
	Infinite = 1,
	HasDuration = 2,
	EGameplayEffectDurationType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	CapturedAttributeBacked = 0,
	Transient = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2
};

// Object: Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	AttributeMagnitude = 0,
	AttributeBaseValue = 1,
	AttributeBonusMagnitude = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	ScalableFloat = 0,
	AttributeBased = 1,
	CustomCalculationClass = 2,
	SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4
};

// Object: Enum GameplayAbilities.ETagRequirementCheckRule
enum class ETagRequirementCheckRule : uint8_t
{
	HasAll = 0,
	HasAny = 1,
	ETagRequirementCheckRule_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2
};

// Object: Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
	OnActive = 0,
	WhileActive = 1,
	Executed = 2,
	Removed = 3,
	EGameplayCueEvent_MAX = 4
};

// Object: Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
	None = 0,
	AggregateBySource = 1,
	AggregateByTarget = 2,
	EGameplayEffectStackingType_MAX = 3
};

// Object: Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
	Additive = 0,
	Multiplicitive = 1,
	Division = 2,
	Override = 3,
	Max = 4
};

// Object: Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
	Channel0 = 0,
	Channel1 = 1,
	Channel2 = 2,
	Channel3 = 3,
	Channel4 = 4,
	Channel5 = 5,
	Channel6 = 6,
	Channel7 = 7,
	Channel8 = 8,
	Channel9 = 9,
	Channel_MAX = 10,
	EGameplayModEvaluationChannel_MAX = 11
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayEffect
// Size: 0x370 (Inherited: 0xC)
struct FActiveGameplayEffect : FFastArraySerializerItem
{
	uint8_t Pad_0xC[0xC]; // 0xC(0xC)
	struct FGameplayEffectSpec Spec; // 0x18(0x298)
	struct FPredictionKey PredictionKey; // 0x2B0(0x18)
	float StartServerWorldTime; // 0x2C8(0x4)
	float CachedStartServerWorldTime; // 0x2CC(0x4)
	float StartWorldTime; // 0x2D0(0x4)
	bool bIsInhibited; // 0x2D4(0x1)
	uint8_t Pad_0x2D5[0x9B]; // 0x2D5(0x9B)
};

// Object: ScriptStruct GameplayAbilities.PredictionKey
// Size: 0x18 (Inherited: 0x0)
struct FPredictionKey
{
	int16_t Current; // 0x0(0x2)
	int16_t Base; // 0x2(0x2)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UPackageMap* PredictiveConnection; // 0x8(0x8)
	bool bIsStale; // 0x10(0x1)
	bool bIsServerInitiated; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectSpec
// Size: 0x298 (Inherited: 0x0)
struct FGameplayEffectSpec
{
	struct UGameplayEffect* Def; // 0x0(0x8)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8(0x10)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18(0x28)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x4)
	float Period; // 0x54(0x4)
	float ChanceToApplyToTarget; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FTagContainerAggregator CapturedSourceTags; // 0x60(0x88)
	struct FTagContainerAggregator CapturedTargetTags; // 0xE8(0x88)
	struct FGameplayTagContainer DynamicGrantedTags; // 0x170(0x20)
	struct FGameplayTagContainer DynamicAssetTags; // 0x190(0x20)
	struct TArray<struct FModifierSpec> Modifiers; // 0x1B0(0x10)
	int32_t StackCount; // 0x1C0(0x4)
	uint8_t bCompletedSourceAttributeCapture : 1; // 0x1C4(0x1), Mask(0x1)
	uint8_t bCompletedTargetAttributeCapture : 1; // 0x1C4(0x1), Mask(0x2)
	uint8_t bDurationLocked : 1; // 0x1C4(0x1), Mask(0x4)
	uint8_t BitPad_0x1C4_3 : 5; // 0x1C4(0x1)
	uint8_t Pad_0x1C5[0x3]; // 0x1C5(0x3)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x1C8(0x10)
	uint8_t Pad_0x1D8[0xA0]; // 0x1D8(0xA0)
	struct FGameplayEffectContextHandle EffectContext; // 0x278(0x18)
	float Level; // 0x290(0x4)
	uint8_t Pad_0x294[0x4]; // 0x294(0x4)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// Size: 0x18 (Inherited: 0x0)
struct FGameplayEffectContextHandle
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// Size: 0x90 (Inherited: 0x0)
struct FGameplayAbilitySpecDef
{
	struct UGameplayAbility* Ability; // 0x0(0x8)
	struct FScalableFloat LevelScalableFloat; // 0x8(0x20)
	int32_t InputID; // 0x28(0x4)
	enum class EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct UObject* SourceObject; // 0x30(0x8)
	uint8_t Pad_0x38[0x50]; // 0x38(0x50)
	struct FGameplayAbilitySpecHandle AssignedHandle; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// Size: 0x4 (Inherited: 0x0)
struct FGameplayAbilitySpecHandle
{
	int32_t Handle; // 0x0(0x4)
};

// Object: ScriptStruct GameplayAbilities.ScalableFloat
// Size: 0x20 (Inherited: 0x0)
struct FScalableFloat
{
	float Value; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FCurveTableRowHandle Curve; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct GameplayAbilities.ModifierSpec
// Size: 0x4 (Inherited: 0x0)
struct FModifierSpec
{
	float EvaluatedMagnitude; // 0x0(0x4)
};

// Object: ScriptStruct GameplayAbilities.TagContainerAggregator
// Size: 0x88 (Inherited: 0x0)
struct FTagContainerAggregator
{
	struct FGameplayTagContainer CapturedActorTags; // 0x0(0x20)
	struct FGameplayTagContainer CapturedSpecTags; // 0x20(0x20)
	struct FGameplayTagContainer ScopedTags; // 0x40(0x20)
	uint8_t Pad_0x60[0x28]; // 0x60(0x28)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// Size: 0x28 (Inherited: 0x0)
struct FGameplayEffectAttributeCaptureSpecContainer
{
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x0(0x10)
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10(0x10)
	bool bHasNonSnapshottedAttributes; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// Size: 0x50 (Inherited: 0x0)
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x0(0x40)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// Size: 0x40 (Inherited: 0x0)
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute AttributeToCapture; // 0x0(0x38)
	enum class EGameplayEffectAttributeCaptureSource AttributeSource; // 0x38(0x1)
	bool bSnapshot; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
};

// Object: ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x38 (Inherited: 0x0)
struct FGameplayAttribute
{
	struct FString AttributeName; // 0x0(0x10)
	struct TFieldPath<FProperty> Attribute; // 0x10(0x20)
	struct UStruct* AttributeOwner; // 0x30(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// Size: 0x40 (Inherited: 0x0)
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute Attribute; // 0x0(0x38)
	float TotalMagnitude; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// Size: 0x8 (Inherited: 0x0)
struct FActiveGameplayEffectHandle
{
	int32_t Handle; // 0x0(0x4)
	bool bPassedFiltersAndWasExecuted; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// Size: 0x10 (Inherited: 0x0)
struct FGameplayEffectSpecHandle
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// Size: 0x20 (Inherited: 0x0)
struct FGameplayEffectRemovalInfo
{
	bool bPrematureRemoval; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t StackCount; // 0x4(0x4)
	struct FGameplayEffectContextHandle EffectContext; // 0x8(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayEventData
// Size: 0xB0 (Inherited: 0x0)
struct FGameplayEventData
{
	struct FGameplayTag EventTag; // 0x0(0x8)
	struct AActor* Instigator; // 0x8(0x8)
	struct AActor* Target; // 0x10(0x8)
	struct UObject* OptionalObject; // 0x18(0x8)
	struct UObject* OptionalObject2; // 0x20(0x8)
	struct FGameplayEffectContextHandle ContextHandle; // 0x28(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x40(0x20)
	struct FGameplayTagContainer TargetTags; // 0x60(0x20)
	float EventMagnitude; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x88(0x28)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// Size: 0x28 (Inherited: 0x0)
struct FGameplayAbilityTargetDataHandle
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// Size: 0x20 (Inherited: 0x0)
struct FGameplayAbilityActivationInfo
{
	uint8_t ActivationMode; // 0x0(0x1)
	uint8_t bCanBeEndedByOtherInstance : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bEndedByInstancedRetrigger : 1; // 0x1(0x1), Mask(0x2)
	uint8_t BitPad_0x1_2 : 6; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FPredictionKey PredictionKeyWhenActivated; // 0x8(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectQuery
// Size: 0x150 (Inherited: 0x0)
struct FGameplayEffectQuery
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct FDelegate CustomMatchDelegate_BP; // 0x10(0x10)
	struct FGameplayTagQuery OwningTagQuery; // 0x20(0x48)
	struct FGameplayTagQuery EffectTagQuery; // 0x68(0x48)
	struct FGameplayTagQuery SourceTagQuery; // 0xB0(0x48)
	struct FGameplayAttribute ModifyingAttribute; // 0xF8(0x38)
	struct UObject* EffectSource; // 0x130(0x8)
	struct UGameplayEffect* EffectDefinition; // 0x138(0x8)
	uint8_t Pad_0x140[0x10]; // 0x140(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueParameters
// Size: 0xD0 (Inherited: 0x0)
struct FGameplayCueParameters
{
	float NormalizedMagnitude; // 0x0(0x4)
	float RawMagnitude; // 0x4(0x4)
	struct FGameplayEffectContextHandle EffectContext; // 0x8(0x18)
	struct FGameplayTag MatchedTagName; // 0x20(0x8)
	struct FGameplayTag OriginalTag; // 0x28(0x8)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	struct FVector_NetQuantize10 Location; // 0x70(0xC)
	struct FVector_NetQuantizeNormal Normal; // 0x7C(0xC)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x88(0x8)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x90(0x8)
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x98(0x8)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysicalMaterial; // 0xA0(0x8)
	int32_t GameplayEffectLevel; // 0xA8(0x4)
	int32_t AbilityLevel; // 0xAC(0x4)
	struct TWeakObjectPtr<struct USceneComponent> TargetAttachComponent; // 0xB0(0x8)
	struct TArray<struct AActor*> RelatedActorArray; // 0xB8(0x10)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// Size: 0x78 (Inherited: 0x0)
struct FGameplayEffectSpecForRPC
{
	struct UGameplayEffect* Def; // 0x0(0x8)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8(0x10)
	struct FGameplayEffectContextHandle EffectContext; // 0x18(0x18)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	float Level; // 0x70(0x4)
	float AbilityLevel; // 0x74(0x4)
};

// Object: ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// Size: 0x50 (Inherited: 0x0)
struct FServerAbilityRPCBatch
{
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FPredictionKey PredictionKey; // 0x8(0x18)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x20(0x28)
	bool InputPressed; // 0x48(0x1)
	bool Ended; // 0x49(0x1)
	bool Started; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
};

// Object: ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// Size: 0x118 (Inherited: 0x108)
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{
	struct TArray<struct FReplicatedPredictionKeyItem> PredictionKeys; // 0x108(0x10)
};

// Object: ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// Size: 0x28 (Inherited: 0xC)
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
};

// Object: ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// Size: 0x60 (Inherited: 0x0)
struct FMinimalReplicationTagCountMap
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x8)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// Size: 0x128 (Inherited: 0x108)
struct FActiveGameplayCueContainer : FFastArraySerializer
{
	struct TArray<struct FActiveGameplayCue> GameplayCues; // 0x108(0x10)
	uint8_t Pad_0x118[0x8]; // 0x118(0x8)
	struct UAbilitySystemComponent* Owner; // 0x120(0x8)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayCue
// Size: 0x108 (Inherited: 0xC)
struct FActiveGameplayCue : FFastArraySerializerItem
{
	struct FGameplayTag GameplayCueTag; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	struct FGameplayCueParameters Parameters; // 0x30(0xD0)
	bool bPredictivelyRemoved; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// Size: 0x488 (Inherited: 0x108)
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{
	uint8_t Pad_0x108[0x38]; // 0x108(0x38)
	struct TArray<struct FActiveGameplayEffect> GameplayEffects_Internal; // 0x140(0x10)
	uint8_t Pad_0x150[0x310]; // 0x150(0x310)
	struct TArray<struct UGameplayEffect*> ApplicationImmunityQueryEffects; // 0x460(0x10)
	uint8_t Pad_0x470[0x18]; // 0x470(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// Size: 0x38 (Inherited: 0x0)
struct FGameplayAbilityLocalAnimMontage
{
	uint8_t AnimInstanceID; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UAnimMontage* AnimMontage; // 0x8(0x8)
	bool PlayBit; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	struct UGameplayAbility* AnimatingAbility; // 0x30(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontageContainer
// Size: 0x120 (Inherited: 0x108)
struct FGameplayAbilityRepAnimMontageContainer : FFastArraySerializer
{
	struct TArray<struct FGameplayAbilityRepAnimMontage> AbilityMontages; // 0x108(0x10)
	struct UAbilitySystemComponent* Owner; // 0x118(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// Size: 0x48 (Inherited: 0x0)
struct FGameplayAbilityRepAnimMontage
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
	uint8_t AnimInstanceID; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct UAnimMontage* AnimMontage; // 0x10(0x8)
	float PlayRate; // 0x18(0x4)
	float Position; // 0x1C(0x4)
	float BlendTime; // 0x20(0x4)
	uint8_t NextSectionID; // 0x24(0x1)
	uint8_t bRepPosition : 1; // 0x25(0x1), Mask(0x1)
	uint8_t IsStopped : 1; // 0x25(0x1), Mask(0x2)
	uint8_t ForcePlayBit : 1; // 0x25(0x1), Mask(0x4)
	uint8_t SkipPositionCorrection : 1; // 0x25(0x1), Mask(0x8)
	uint8_t bSkipPlayRate : 1; // 0x25(0x1), Mask(0x10)
	uint8_t bBlockNotifies : 1; // 0x25(0x1), Mask(0x20)
	uint8_t bRootMotionDisabled : 1; // 0x25(0x1), Mask(0x40)
	uint8_t BitPad_0x25_7 : 1; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	struct FPredictionKey PredictionKey; // 0x28(0x18)
	uint8_t SectionIdToPlay; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// Size: 0x120 (Inherited: 0x108)
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{
	struct TArray<struct FGameplayAbilitySpec> Items; // 0x108(0x10)
	struct UAbilitySystemComponent* Owner; // 0x118(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpec
// Size: 0xD0 (Inherited: 0xC)
struct FGameplayAbilitySpec : FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle Handle; // 0xC(0x4)
	struct UGameplayAbility* Ability; // 0x10(0x8)
	int32_t Level; // 0x18(0x4)
	int32_t InputID; // 0x1C(0x4)
	struct UObject* SourceObject; // 0x20(0x8)
	uint8_t ActiveCount; // 0x28(0x1)
	uint8_t InputPressed : 1; // 0x29(0x1), Mask(0x1)
	uint8_t RemoveAfterActivation : 1; // 0x29(0x1), Mask(0x2)
	uint8_t PendingRemove : 1; // 0x29(0x1), Mask(0x4)
	uint8_t bActivateOnce : 1; // 0x29(0x1), Mask(0x8)
	uint8_t BitPad_0x29_4 : 4; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FGameplayAbilityActivationInfo ActivationInfo; // 0x30(0x20)
	struct TArray<struct UGameplayAbility*> NonReplicatedInstances; // 0x50(0x10)
	struct TArray<struct UGameplayAbility*> ReplicatedInstances; // 0x60(0x10)
	struct FActiveGameplayEffectHandle GameplayEffectHandle; // 0x70(0x8)
	uint8_t Pad_0x78[0x50]; // 0x78(0x50)
	int32_t ClientCachedLevel; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
};

// Object: ScriptStruct GameplayAbilities.AttributeDefaults
// Size: 0x10 (Inherited: 0x0)
struct FAttributeDefaults
{
	struct UAttributeSet* Attributes; // 0x0(0x8)
	struct UDataTable* DefaultStartingTable; // 0x8(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagRequirements
// Size: 0x50 (Inherited: 0x0)
struct FGameplayTagRequirements
{
	enum class ETagRequirementCheckRule RequireTagCheckRule; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FGameplayTagContainer RequireTags; // 0x8(0x20)
	enum class ETagRequirementCheckRule IgnoreTagCheckRule; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FGameplayTagContainer IgnoreTags; // 0x30(0x20)
};

// Object: ScriptStruct GameplayAbilities.AbilityEndedData
// Size: 0x10 (Inherited: 0x0)
struct FAbilityEndedData
{
	struct UGameplayAbility* AbilityThatEnded; // 0x0(0x8)
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x8(0x4)
	bool bReplicateEndAbility; // 0xC(0x1)
	bool bWasCancelled; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
};

// Object: ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
// Size: 0x10 (Inherited: 0x0)
struct FNetSerializeScriptStructCache
{
	struct TArray<struct UScriptStruct*> ScriptStructs; // 0x0(0x10)
};

// Object: ScriptStruct GameplayAbilities.AttributeMetaData
// Size: 0x30 (Inherited: 0x8)
struct FAttributeMetaData : FTableRowBase
{
	float BaseValue; // 0x8(0x4)
	float MinValue; // 0xC(0x4)
	float MaxValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString DerivedAttributeInfo; // 0x18(0x10)
	bool bCanStack; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayAttributeData
// Size: 0x10 (Inherited: 0x0)
struct FGameplayAttributeData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float BaseValue; // 0x8(0x4)
	float CurrentValue; // 0xC(0x4)
};

// Object: ScriptStruct GameplayAbilities.AbilityTriggerData
// Size: 0xC (Inherited: 0x0)
struct FAbilityTriggerData
{
	struct FGameplayTag TriggerTag; // 0x0(0x8)
	uint8_t TriggerSource; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// Size: 0x10 (Inherited: 0x0)
struct FGameplayAbilityBindInfo
{
	uint8_t Command; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGameplayAbility* GameplayAbilityClass; // 0x8(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// Size: 0x10 (Inherited: 0x0)
struct FGameplayTargetDataFilterHandle
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// Size: 0x28 (Inherited: 0x0)
struct FGameplayTargetDataFilter
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AActor* SelfActor; // 0x8(0x8)
	uint8_t SelfFilter; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct AActor* RequiredActorClass; // 0x18(0x8)
	bool bReverseFilter; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// Size: 0x8 (Inherited: 0x0)
struct FGameplayAbilityTargetData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// Size: 0x98 (Inherited: 0x8)
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{
	struct FHitResult HitResult; // 0x8(0x88)
	bool bHitReplaced; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Size: 0x80 (Inherited: 0x8)
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x60)
	struct TArray<struct TWeakObjectPtr<struct AActor>> TargetActorArray; // 0x70(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// Size: 0x60 (Inherited: 0x0)
struct FGameplayAbilityTargetingLocationInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint8_t LocationType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FTransform LiteralTransform; // 0x10(0x30)
	struct AActor* SourceActor; // 0x40(0x8)
	struct UMeshComponent* SourceComponent; // 0x48(0x8)
	struct UGameplayAbility* SourceAbility; // 0x50(0x8)
	struct FName SourceSocketName; // 0x58(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// Size: 0xD0 (Inherited: 0x8)
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x60)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation; // 0x70(0x60)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// Size: 0x8 (Inherited: 0x0)
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x0(0x4)
	int32_t PredictionKeyAtCreation; // 0x4(0x4)
};

// Object: ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// Size: 0x18 (Inherited: 0x0)
struct FAbilityTaskDebugMessage
{
	struct UGameplayTask* FromTask; // 0x0(0x8)
	struct FString Message; // 0x8(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// Size: 0x48 (Inherited: 0x0)
struct FGameplayAbilityActorInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TWeakObjectPtr<struct AActor> OwnerActor; // 0x8(0x8)
	struct TWeakObjectPtr<struct AActor> AvatarActor; // 0x10(0x8)
	struct TWeakObjectPtr<struct APlayerController> PlayerController; // 0x18(0x8)
	struct TWeakObjectPtr<struct UAbilitySystemComponent> AbilitySystemComponent; // 0x20(0x8)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; // 0x28(0x8)
	struct TWeakObjectPtr<struct UAnimInstance> AnimInstance; // 0x30(0x8)
	struct TWeakObjectPtr<struct UMovementComponent> MovementComponent; // 0x38(0x8)
	struct FName AffectedAnimInstanceTag; // 0x40(0x8)
};

// Object: ScriptStruct GameplayAbilities.WorldReticleParameters
// Size: 0xC (Inherited: 0x0)
struct FWorldReticleParameters
{
	struct FVector AOEScale; // 0x0(0xC)
};

// Object: ScriptStruct GameplayAbilities.PreallocationInfo
// Size: 0x68 (Inherited: 0x0)
struct FPreallocationInfo
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
	struct TArray<struct AGameplayCueNotify_Actor*> ClassesNeedingPreallocation; // 0x50(0x10)
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// Size: 0x188 (Inherited: 0x0)
struct FGameplayCuePendingExecute
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	enum class EGameplayCuePayloadType PayloadType; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct UAbilitySystemComponent* OwningComponent; // 0x38(0x8)
	struct FGameplayEffectSpecForRPC FromSpec; // 0x40(0x78)
	struct FGameplayCueParameters CueParameters; // 0xB8(0xD0)
};

// Object: ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// Size: 0x1C0 (Inherited: 0x0)
struct FMinimalGameplayCueReplicationProxy
{
	uint8_t Pad_0x0[0x1B0]; // 0x0(0x1B0)
	struct UAbilitySystemComponent* Owner; // 0x1B0(0x8)
	uint8_t Pad_0x1B8[0x8]; // 0x1B8(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x8 (Inherited: 0x0)
struct FGameplayCueTag
{
	struct FGameplayTag GameplayCueTag; // 0x0(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// Size: 0x50 (Inherited: 0x0)
struct FGameplayCueObjectLibrary
{
	struct TArray<struct FString> Paths; // 0x0(0x10)
	uint8_t Pad_0x10[0x20]; // 0x10(0x20)
	struct UObjectLibrary* ActorObjectLibrary; // 0x30(0x8)
	struct UObjectLibrary* StaticObjectLibrary; // 0x38(0x8)
	struct UGameplayCueSet* CueSet; // 0x40(0x8)
	uint8_t Pad_0x48[0x4]; // 0x48(0x4)
	bool bShouldSyncScan; // 0x4C(0x1)
	bool bShouldAsyncLoad; // 0x4D(0x1)
	bool bShouldSyncLoad; // 0x4E(0x1)
	bool bHasBeenInitialized; // 0x4F(0x1)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueNotifyData
// Size: 0x30 (Inherited: 0x0)
struct FGameplayCueNotifyData
{
	struct FGameplayTag GameplayCueTag; // 0x0(0x8)
	struct FSoftObjectPath GameplayCueNotifyObj; // 0x8(0x18)
	struct UObject* LoadedGameplayCueClass; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// Size: 0x80 (Inherited: 0x0)
struct FGameplayCueTranslationManager
{
	struct TArray<struct FGameplayCueTranslatorNode> TranslationLUT; // 0x0(0x10)
	struct TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x10(0x50)
	struct UGameplayTagsManager* TagManager; // 0x60(0x8)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// Size: 0x4 (Inherited: 0x0)
struct FGameplayCueTranslatorNodeIndex
{
	int32_t Index; // 0x0(0x4)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// Size: 0x78 (Inherited: 0x0)
struct FGameplayCueTranslatorNode
{
	struct TArray<struct FGameplayCueTranslationLink> Links; // 0x0(0x10)
	struct FGameplayCueTranslatorNodeIndex CachedIndex; // 0x10(0x4)
	struct FGameplayTag CachedGameplayTag; // 0x14(0x8)
	struct FName CachedGameplayTagName; // 0x1C(0x8)
	uint8_t Pad_0x24[0x54]; // 0x24(0x54)
};

// Object: ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// Size: 0x18 (Inherited: 0x0)
struct FGameplayCueTranslationLink
{
	struct UGameplayCueTranslator* RulesCDO; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// Size: 0x88 (Inherited: 0x0)
struct FActiveGameplayEffectQuery
{
	uint8_t Pad_0x0[0x88]; // 0x0(0x88)
};

// Object: ScriptStruct GameplayAbilities.InheritedTagContainer
// Size: 0x60 (Inherited: 0x0)
struct FInheritedTagContainer
{
	struct FGameplayTagContainer CombinedTags; // 0x0(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectCue
// Size: 0x60 (Inherited: 0x0)
struct FGameplayEffectCue
{
	struct FGameplayAttribute MagnitudeAttribute; // 0x0(0x38)
	float MinLevel; // 0x38(0x4)
	float MaxLevel; // 0x3C(0x4)
	struct FGameplayTagContainer GameplayCueTags; // 0x40(0x20)
};

// Object: ScriptStruct GameplayAbilities.GameplayModifierInfo
// Size: 0x2B0 (Inherited: 0x0)
struct FGameplayModifierInfo
{
	struct FGameplayAttribute Attribute; // 0x0(0x38)
	uint8_t ModifierOp; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FScalableFloat Magnitude; // 0x40(0x20)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x60(0x1A8)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x208(0x1)
	uint8_t Pad_0x209[0x7]; // 0x209(0x7)
	struct FGameplayTagRequirements SourceTags; // 0x210(0x50)
	struct FGameplayTagRequirements TargetTags; // 0x260(0x50)
};

// Object: ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x1 (Inherited: 0x0)
struct FGameplayModEvaluationChannelSettings
{
	enum class EGameplayModEvaluationChannel Channel; // 0x0(0x1)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x1A8 (Inherited: 0x0)
struct FGameplayEffectModifierMagnitude
{
	enum class EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FScalableFloat ScalableFloatMagnitude; // 0x8(0x20)
	struct FAttributeBasedFloat AttributeBasedMagnitude; // 0x28(0xF8)
	struct FCustomCalculationBasedFloat CustomMagnitude; // 0x120(0x78)
	struct FSetByCallerFloat SetByCallerMagnitude; // 0x198(0x10)
};

// Object: ScriptStruct GameplayAbilities.SetByCallerFloat
// Size: 0x10 (Inherited: 0x0)
struct FSetByCallerFloat
{
	struct FName DataName; // 0x0(0x8)
	struct FGameplayTag DataTag; // 0x8(0x8)
};

// Object: ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// Size: 0x78 (Inherited: 0x0)
struct FCustomCalculationBasedFloat
{
	struct UGameplayModMagnitudeCalculation* CalculationClassMagnitude; // 0x0(0x8)
	struct FScalableFloat Coefficient; // 0x8(0x20)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x28(0x20)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x48(0x20)
	struct FCurveTableRowHandle FinalLookupCurve; // 0x68(0x10)
};

// Object: ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0xF8 (Inherited: 0x0)
struct FAttributeBasedFloat
{
	struct FScalableFloat Coefficient; // 0x0(0x20)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x20(0x20)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x40(0x20)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x60(0x40)
	struct FCurveTableRowHandle AttributeCurve; // 0xA0(0x10)
	enum class EAttributeBasedFloatCalculationType AttributeCalculationType; // 0xB0(0x1)
	enum class EGameplayModEvaluationChannel FinalChannel; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
	struct FGameplayTagContainer SourceTagFilter; // 0xB8(0x20)
	struct FGameplayTagContainer TargetTagFilter; // 0xD8(0x20)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 (Inherited: 0x0)
struct FGameplayEffectExecutionDefinition
{
	struct UGameplayEffectExecutionCalculation* CalculationClass; // 0x0(0x8)
	struct FGameplayTagContainer PassedInTags; // 0x8(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x28(0x10)
	struct TArray<struct UGameplayEffect*> ConditionalGameplayEffectClasses; // 0x38(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x48(0x10)
};

// Object: ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// Size: 0x28 (Inherited: 0x0)
struct FConditionalGameplayEffect
{
	struct UGameplayEffect* EffectClass; // 0x0(0x8)
	struct FGameplayTagContainer RequiredSourceTags; // 0x8(0x20)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x2A0 (Inherited: 0x0)
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x0(0x40)
	struct FGameplayTag TransientAggregatorIdentifier; // 0x40(0x8)
	enum class EGameplayEffectScopedModifierAggregatorType AggregatorType; // 0x48(0x1)
	uint8_t ModifierOp; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x50(0x1A8)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x1F8(0x1)
	uint8_t Pad_0x1F9[0x7]; // 0x1F9(0x7)
	struct FGameplayTagRequirements SourceTags; // 0x200(0x50)
	struct FGameplayTagRequirements TargetTags; // 0x250(0x50)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// Size: 0x18 (Inherited: 0x0)
struct FGameplayEffectCustomExecutionOutput
{
	struct TArray<struct FGameplayModifierEvaluatedData> OutputModifiers; // 0x0(0x10)
	uint8_t bTriggerConditionalGameplayEffects : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bHandledStackCountManually : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bHandledGameplayCuesManually : 1; // 0x10(0x1), Mask(0x4)
	uint8_t BitPad_0x10_3 : 5; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// Size: 0x50 (Inherited: 0x0)
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute Attribute; // 0x0(0x38)
	uint8_t ModifierOp; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float Magnitude; // 0x3C(0x4)
	struct FActiveGameplayEffectHandle Handle; // 0x40(0x8)
	bool IsValid; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// Size: 0xF8 (Inherited: 0x0)
struct FGameplayEffectCustomExecutionParameters
{
	uint8_t Pad_0x0[0xF8]; // 0x0(0xF8)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagBlueprintPropertyMap
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings; // 0x10(0x10)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
// Size: 0x48 (Inherited: 0x0)
struct FGameplayTagBlueprintPropertyMapping
{
	struct FGameplayTag TagToMap; // 0x0(0x8)
	struct TFieldPath<FProperty> PropertyToEdit; // 0x8(0x20)
	struct FName PropertyName; // 0x28(0x8)
	struct FGuid PropertyGuid; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: ScriptStruct GameplayAbilities.GameplayEffectContext
// Size: 0x70 (Inherited: 0x0)
struct FGameplayEffectContext
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x8(0x8)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x10(0x8)
	struct TWeakObjectPtr<struct UGameplayAbility> AbilityCDO; // 0x18(0x8)
	struct TWeakObjectPtr<struct UGameplayAbility> AbilityInstanceNotReplicated; // 0x20(0x8)
	int32_t AbilityLevel; // 0x28(0x4)
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x2C(0x8)
	struct TWeakObjectPtr<struct UAbilitySystemComponent> InstigatorAbilitySystemComponent; // 0x34(0x8)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct TWeakObjectPtr<struct AActor>> Actors; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0xC)
	uint8_t bHasWorldOrigin : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t bReplicateSourceObject : 1; // 0x6C(0x1), Mask(0x2)
	uint8_t BitPad_0x6C_2 : 6; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// Size: 0x50 (Inherited: 0x0)
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair Positive; // 0x0(0x28)
	struct FGameplayTagReponsePair Negative; // 0x28(0x28)
};

// Object: ScriptStruct GameplayAbilities.GameplayTagReponsePair
// Size: 0x28 (Inherited: 0x0)
struct FGameplayTagReponsePair
{
	struct FGameplayTag Tag; // 0x0(0x8)
	struct UGameplayEffect* ResponseGameplayEffect; // 0x8(0x8)
	struct TArray<struct UGameplayEffect*> ResponseGameplayEffects; // 0x10(0x10)
	int32_t SoftCountCap; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

} // namespace SDK
