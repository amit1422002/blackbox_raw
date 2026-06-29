// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AIModule.AIController
// Size: 0x400 (Inherited: 0x370)
struct AAIController : AController
{
	uint8_t Pad_0x370[0x38]; // 0x370(0x38)
	uint8_t bStartAILogicOnPossess : 1; // 0x3A8(0x1), Mask(0x1)
	uint8_t bStopAILogicOnUnposses : 1; // 0x3A8(0x1), Mask(0x2)
	uint8_t bLOSflag : 1; // 0x3A8(0x1), Mask(0x4)
	uint8_t bSkipExtraLOSChecks : 1; // 0x3A8(0x1), Mask(0x8)
	uint8_t bAllowStrafe : 1; // 0x3A8(0x1), Mask(0x10)
	uint8_t bWantsPlayerState : 1; // 0x3A8(0x1), Mask(0x20)
	uint8_t bSetControlRotationFromPawnOrientation : 1; // 0x3A8(0x1), Mask(0x40)
	uint8_t BitPad_0x3A8_7 : 1; // 0x3A8(0x1)
	uint8_t Pad_0x3A9[0x7]; // 0x3A9(0x7)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x3B0(0x8)
	struct UBrainComponent* BrainComponent; // 0x3B8(0x8)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x3C0(0x8)
	struct UPawnActionsComponent* ActionsComp; // 0x3C8(0x8)
	struct UBlackboardComponent* Blackboard; // 0x3D0(0x8)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x3D8(0x8)
	struct UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x3E0(0x8)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x3E8(0x10)
	uint8_t Pad_0x3F8[0x8]; // 0x3F8(0x8)


	// Object: Function AIModule.AIController.UseBlackboard
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa5d000
	// Params: [ Num(3) Size(0x11) ]
	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent);

	// Object: Function AIModule.AIController.UnclaimTaskResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5ceb0
	// Params: [ Num(1) Size(0x8) ]
	void UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass);

	// Object: Function AIModule.AIController.SetPathFollowingComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5ca54
	// Params: [ Num(1) Size(0x8) ]
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent);

	// Object: Function AIModule.AIController.SetMoveBlockDetection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5d1bc
	// Params: [ Num(1) Size(0x1) ]
	void SetMoveBlockDetection(bool bEnable);

	// Object: Function AIModule.AIController.RunBehaviorTree
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xaa5d100
	// Params: [ Num(2) Size(0x9) ]
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset);

	// Object: Function AIModule.AIController.OnUsingBlackBoard
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset);

	// Object: Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	// Flags: [Native|Public]
	// Offset: 0xaa5cb34
	// Params: [ Num(2) Size(0x4) ]
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased);

	// Object: Function AIModule.AIController.MoveToLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa5d310
	// Params: [ Num(9) Size(0x22) ]
	uint8_t MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath);

	// Object: Function AIModule.AIController.MoveToActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5d5c8
	// Params: [ Num(8) Size(0x1A) ]
	uint8_t MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath);

	// Object: Function AIModule.AIController.K2_SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5cc6c
	// Params: [ Num(1) Size(0x8) ]
	void K2_SetFocus(struct AActor* NewFocus);

	// Object: Function AIModule.AIController.K2_SetFocalPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xaa5cd14
	// Params: [ Num(1) Size(0xC) ]
	void K2_SetFocalPoint(struct FVector FP);

	// Object: Function AIModule.AIController.K2_ClearFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5cc24
	// Params: [ Num(0) Size(0x0) ]
	void K2_ClearFocus();

	// Object: Function AIModule.AIController.HasPartialPath
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5d2a4
	// Params: [ Num(1) Size(0x1) ]
	bool HasPartialPath();

	// Object: Function AIModule.AIController.GetPathFollowingComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5cb18
	// Params: [ Num(1) Size(0x8) ]
	struct UPathFollowingComponent* GetPathFollowingComponent();

	// Object: Function AIModule.AIController.GetMoveStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5d2dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetMoveStatus();

	// Object: Function AIModule.AIController.GetImmediateMoveDestination
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5d26c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetImmediateMoveDestination();

	// Object: Function AIModule.AIController.GetFocusActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5cc38
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetFocusActor();

	// Object: Function AIModule.AIController.GetFocalPointOnActor
	// Flags: [Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5cdbc
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetFocalPointOnActor(struct AActor* Actor);

	// Object: Function AIModule.AIController.GetFocalPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5ce78
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetFocalPoint();

	// Object: Function AIModule.AIController.GetAIPerceptionComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa5cafc
	// Params: [ Num(1) Size(0x8) ]
	struct UAIPerceptionComponent* GetAIPerceptionComponent();

	// Object: Function AIModule.AIController.ClaimTaskResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5cf58
	// Params: [ Num(1) Size(0x8) ]
	void ClaimTaskResource(struct UGameplayTaskResource* ResourceClass);
};

// Object: Class AIModule.BTNode
// Size: 0x58 (Inherited: 0x28)
struct UBTNode : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FString NodeName; // 0x30(0x10)
	struct UBehaviorTree* TreeAsset; // 0x40(0x8)
	struct UBTCompositeNode* ParentNode; // 0x48(0x8)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: Class AIModule.BTAuxiliaryNode
// Size: 0x58 (Inherited: 0x58)
struct UBTAuxiliaryNode : UBTNode
{
};

// Object: Class AIModule.BTDecorator
// Size: 0x60 (Inherited: 0x58)
struct UBTDecorator : UBTAuxiliaryNode
{
	uint8_t BitPad_0x58_0 : 7; // 0x58(0x1)
	uint8_t bInverseCondition : 1; // 0x58(0x1), Mask(0x80)
	uint8_t FlowAbortMode; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
};

// Object: Class AIModule.BTDecorator_BlackboardBase
// Size: 0x88 (Inherited: 0x60)
struct UBTDecorator_BlackboardBase : UBTDecorator
{
	struct FBlackboardKeySelector BlackboardKey; // 0x60(0x28)
};

// Object: Class AIModule.BTDecorator_Blackboard
// Size: 0xB8 (Inherited: 0x88)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase
{
	int32_t IntValue; // 0x88(0x4)
	float FloatValue; // 0x8C(0x4)
	struct FString StringValue; // 0x90(0x10)
	struct FString CachedDescription; // 0xA0(0x10)
	uint8_t OperationType; // 0xB0(0x1)
	uint8_t NotifyObserver; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
};

// Object: Class AIModule.BTDecorator_TimeLimit
// Size: 0x60 (Inherited: 0x60)
struct UBTDecorator_TimeLimit : UBTDecorator
{
	float TimeLimit; // 0x5C(0x4)
};

// Object: Class AIModule.AIPerceptionComponent
// Size: 0x1A8 (Inherited: 0xD8)
struct UAIPerceptionComponent : UActorComponent
{
	struct TArray<struct UAISenseConfig*> SensesConfig; // 0xD8(0x10)
	struct UAISense* DominantSense; // 0xE8(0x8)
	uint8_t Pad_0xF0[0x10]; // 0xF0(0x10)
	struct AAIController* AIOwner; // 0x100(0x8)
	uint8_t Pad_0x108[0x80]; // 0x108(0x80)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x188(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x198(0x10)


	// Object: Function AIModule.AIPerceptionComponent.SetSenseEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5ef40
	// Params: [ Num(2) Size(0x9) ]
	void SetSenseEnabled(struct UAISense* SenseClass, bool bEnable);

	// Object: Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5f520
	// Params: [ Num(0) Size(0x0) ]
	void RequestStimuliListenerUpdate();

	// Object: Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// Flags: [Final|Native|Public]
	// Offset: 0xaa5f534
	// Params: [ Num(2) Size(0x9) ]
	void OnOwnerEndPlay(struct AActor* Actor, uint8_t EndPlayReason);

	// Object: Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5f44c
	// Params: [ Num(1) Size(0x10) ]
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5f14c
	// Params: [ Num(2) Size(0x18) ]
	void GetPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5f24c
	// Params: [ Num(2) Size(0x18) ]
	void GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa5f34c
	// Params: [ Num(2) Size(0x18) ]
	void GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetActorsPerception
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa5f030
	// Params: [ Num(3) Size(0x29) ]
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info);

	// Object: Function AIModule.AIPerceptionComponent.ForgetAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5f50c
	// Params: [ Num(0) Size(0x0) ]
	void ForgetAll();
};

// Object: Class AIModule.AISubsystem
// Size: 0x40 (Inherited: 0x28)
struct UAISubsystem : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UAISystem* AISystem; // 0x38(0x8)
};

// Object: Class AIModule.AIPerceptionSystem
// Size: 0x140 (Inherited: 0x40)
struct UAIPerceptionSystem : UAISubsystem
{
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
	struct TArray<struct UAISense*> Senses; // 0x90(0x10)
	float PerceptionAgingRate; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x9C]; // 0xA4(0x9C)


	// Object: Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa604a0
	// Params: [ Num(2) Size(0x10) ]
	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent);

	// Object: Function AIModule.AIPerceptionSystem.ReportEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa60574
	// Params: [ Num(1) Size(0x8) ]
	void ReportEvent(struct UAISenseEvent* PerceptionEvent);

	// Object: Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa60378
	// Params: [ Num(4) Size(0x19) ]
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target);

	// Object: Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// Flags: [Final|Native|Protected]
	// Offset: 0xaa600e4
	// Params: [ Num(2) Size(0x9) ]
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, uint8_t EndPlayReason);

	// Object: Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa601cc
	// Params: [ Num(3) Size(0x50) ]
	struct UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus);
};

// Object: Class AIModule.AISense
// Size: 0x78 (Inherited: 0x28)
struct UAISense : UObject
{
	float DefaultExpirationAge; // 0x28(0x4)
	enum class EAISenseNotifyType NotifyType; // 0x2C(0x1)
	uint8_t bWantsNewPawnNotification : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t bAutoRegisterAllPawnsAsSources : 1; // 0x2D(0x1), Mask(0x2)
	uint8_t BitPad_0x2D_2 : 6; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x30(0x8)
	uint8_t Pad_0x38[0x40]; // 0x38(0x40)
};

// Object: Class AIModule.AISense_Hearing
// Size: 0xE0 (Inherited: 0x78)
struct UAISense_Hearing : UAISense
{
	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x78(0x10)
	float SpeedOfSoundSq; // 0x88(0x4)
	uint8_t Pad_0x8C[0x54]; // 0x8C(0x54)


	// Object: Function AIModule.AISense_Hearing.ReportNoiseEvent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xaa6470c
	// Params: [ Num(6) Size(0x2C) ]
	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag);
};

// Object: Class AIModule.AISenseConfig
// Size: 0x48 (Inherited: 0x28)
struct UAISenseConfig : UObject
{
	struct FColor DebugColor; // 0x28(0x4)
	float MaxAge; // 0x2C(0x4)
	uint8_t bStartsEnabled : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x17]; // 0x31(0x17)
};

// Object: Class AIModule.AISense_Sight
// Size: 0x168 (Inherited: 0x78)
struct UAISense_Sight : UAISense
{
	uint8_t Pad_0x78[0xC8]; // 0x78(0xC8)
	int32_t MaxTracesPerTick; // 0x140(0x4)
	int32_t MinQueriesPerTimeSliceCheck; // 0x144(0x4)
	double MaxTimeSlicePerTick; // 0x148(0x8)
	float HighImportanceQueryDistanceThreshold; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)
	float MaxQueryImportance; // 0x158(0x4)
	float SightLimitQueryImportance; // 0x15C(0x4)
	uint8_t Pad_0x160[0x8]; // 0x160(0x8)
};

// Object: Class AIModule.BTCompositeNode
// Size: 0x90 (Inherited: 0x58)
struct UBTCompositeNode : UBTNode
{
	struct TArray<struct FBTCompositeChild> Children; // 0x58(0x10)
	struct TArray<struct UBTService*> Services; // 0x68(0x10)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
	uint8_t bApplyDecoratorScope : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: Class AIModule.BTService
// Size: 0x68 (Inherited: 0x58)
struct UBTService : UBTAuxiliaryNode
{
	float Interval; // 0x58(0x4)
	float RandomDeviation; // 0x5C(0x4)
	uint8_t bCallTickOnSearchStart : 1; // 0x60(0x1), Mask(0x1)
	uint8_t bRestartTimerOnEachActivation : 1; // 0x60(0x1), Mask(0x2)
	uint8_t BitPad_0x60_2 : 6; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: Class AIModule.BTService_BlackboardBase
// Size: 0x90 (Inherited: 0x68)
struct UBTService_BlackboardBase : UBTService
{
	struct FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
};

// Object: Class AIModule.BTService_BlueprintBase
// Size: 0x90 (Inherited: 0x68)
struct UBTService_BlueprintBase : UBTService
{
	struct AAIController* AIOwner; // 0x68(0x8)
	struct AActor* ActorOwner; // 0x70(0x8)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
	uint8_t bShowPropertyDetails : 1; // 0x88(0x1), Mask(0x1)
	uint8_t bShowEventDetails : 1; // 0x88(0x1), Mask(0x2)
	uint8_t BitPad_0x88_2 : 6; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)


	// Object: Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveSearchStart(struct AActor* OwnerActor);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveDeactivation(struct AActor* OwnerActor);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveActivation
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveActivation(struct AActor* OwnerActor);

	// Object: Function AIModule.BTService_BlueprintBase.IsServiceActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa79ab0
	// Params: [ Num(1) Size(0x1) ]
	bool IsServiceActive();
};

// Object: Class AIModule.BTTaskNode
// Size: 0x70 (Inherited: 0x58)
struct UBTTaskNode : UBTNode
{
	struct TArray<struct UBTService*> Services; // 0x58(0x10)
	uint8_t bIgnoreRestartSelf : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: Class AIModule.BTTask_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
struct UBTTask_BlackboardBase : UBTTaskNode
{
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Object: Class AIModule.BTTask_MoveTo
// Size: 0xB0 (Inherited: 0x98)
struct UBTTask_MoveTo : UBTTask_BlackboardBase
{
	float AcceptableRadius; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct UNavigationQueryFilter* FilterClass; // 0xA0(0x8)
	float ObservedBlackboardValueTolerance; // 0xA8(0x4)
	uint8_t bObserveBlackboardValue : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t bAllowStrafe : 1; // 0xAC(0x1), Mask(0x2)
	uint8_t bAllowPartialPath : 1; // 0xAC(0x1), Mask(0x4)
	uint8_t bTrackMovingGoal : 1; // 0xAC(0x1), Mask(0x8)
	uint8_t bProjectGoalLocation : 1; // 0xAC(0x1), Mask(0x10)
	uint8_t bReachTestIncludesAgentRadius : 1; // 0xAC(0x1), Mask(0x20)
	uint8_t bReachTestIncludesGoalRadius : 1; // 0xAC(0x1), Mask(0x40)
	uint8_t bStopOnOverlap : 1; // 0xAC(0x1), Mask(0x80)
	uint8_t bStopOnOverlapNeedsUpdate : 1; // 0xAD(0x1), Mask(0x1)
	uint8_t BitPad_0xAD_1 : 7; // 0xAD(0x1)
	uint8_t Pad_0xAE[0x2]; // 0xAE(0x2)
};

// Object: Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x88 (Inherited: 0x70)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode
{
	struct FGameplayTag InjectionTag; // 0x6C(0x8)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x78(0x8)
	struct UBehaviorTree* BehaviorAsset; // 0x80(0x8)
};

// Object: Class AIModule.CrowdManager
// Size: 0xF0 (Inherited: 0x28)
struct UCrowdManager : UCrowdManagerBase
{
	struct ANavigationData* MyNavData; // 0x28(0x8)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40(0x10)
	int32_t MaxAgents; // 0x50(0x4)
	float MaxAgentRadius; // 0x54(0x4)
	int32_t MaxAvoidedAgents; // 0x58(0x4)
	int32_t MaxAvoidedWalls; // 0x5C(0x4)
	float NavmeshCheckInterval; // 0x60(0x4)
	float PathOptimizationInterval; // 0x64(0x4)
	float SeparationDirClamp; // 0x68(0x4)
	float PathOffsetRadiusMultiplier; // 0x6C(0x4)
	uint8_t BitPad_0x70_0 : 4; // 0x70(0x1)
	uint8_t bResolveCollisions : 1; // 0x70(0x1), Mask(0x10)
	uint8_t BitPad_0x70_5 : 3; // 0x70(0x1)
	uint8_t Pad_0x71[0x7F]; // 0x71(0x7F)
};

// Object: Class AIModule.EnvQueryContext
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext : UObject
{
};

// Object: Class AIModule.EnvQueryNode
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryNode : UObject
{
	int32_t VerNum; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class AIModule.EnvQueryGenerator
// Size: 0x50 (Inherited: 0x30)
struct UEnvQueryGenerator : UEnvQueryNode
{
	struct FString OptionName; // 0x30(0x10)
	struct UEnvQueryItemType* ItemType; // 0x40(0x8)
	uint8_t bAutoSortTests : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AIModule.EnvQueryTest
// Size: 0x1F8 (Inherited: 0x30)
struct UEnvQueryTest : UEnvQueryNode
{
	int32_t TestOrder; // 0x2C(0x4)
	uint8_t TestPurpose; // 0x30(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FString TestComment; // 0x38(0x10)
	uint8_t MultipleContextFilterOp; // 0x48(0x1)
	uint8_t MultipleContextScoreOp; // 0x49(0x1)
	uint8_t FilterType; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
	struct FAIDataProviderBoolValue BoolValue; // 0x50(0x38)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x88(0x38)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xC0(0x38)
	uint8_t Pad_0xF8[0x1]; // 0xF8(0x1)
	uint8_t ScoringEquation; // 0xF9(0x1)
	uint8_t ClampMinType; // 0xFA(0x1)
	uint8_t ClampMaxType; // 0xFB(0x1)
	enum class EEQSNormalizationType NormalizationType; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x100(0x38)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x138(0x38)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x170(0x38)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1A8(0x38)
	bool bDefineReferenceValue; // 0x1E0(0x1)
	uint8_t Pad_0x1E1[0xF]; // 0x1E1(0xF)
	uint8_t bWorkOnFloatValues : 1; // 0x1F0(0x1), Mask(0x1)
	uint8_t BitPad_0x1F0_1 : 7; // 0x1F0(0x1)
	uint8_t Pad_0x1F1[0x7]; // 0x1F1(0x7)
};

// Object: Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x278 (Inherited: 0x1F8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest
{
	uint8_t TestMode; // 0x1F1(0x1)
	struct UEnvQueryContext* Context; // 0x1F8(0x8)
	struct FAIDataProviderBoolValue PathFromContext; // 0x200(0x38)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x238(0x38)
	struct UNavigationQueryFilter* FilterClass; // 0x270(0x8)
};

// Object: Class AIModule.EnvQueryTest_Trace
// Size: 0x2D8 (Inherited: 0x1F8)
struct UEnvQueryTest_Trace : UEnvQueryTest
{
	struct FEnvTraceData TraceData; // 0x1F8(0x30)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x228(0x38)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x260(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x298(0x38)
	struct UEnvQueryContext* Context; // 0x2D0(0x8)
};

// Object: Class AIModule.PathFollowingComponent
// Size: 0x288 (Inherited: 0xD8)
struct UPathFollowingComponent : UActorComponent
{
	uint8_t Pad_0xD8[0x38]; // 0xD8(0x38)
	struct UNavMovementComponent* MovementComp; // 0x110(0x8)
	uint8_t Pad_0x118[0x10]; // 0x118(0x10)
	struct ANavigationData* MyNavData; // 0x128(0x8)
	uint8_t Pad_0x130[0x158]; // 0x130(0x158)


	// Object: Function AIModule.PathFollowingComponent.OnNavDataRegistered
	// Flags: [Final|Native|Protected]
	// Offset: 0xaa8ddb4
	// Params: [ Num(1) Size(0x8) ]
	void OnNavDataRegistered(struct ANavigationData* NavData);

	// Object: Function AIModule.PathFollowingComponent.OnActorBump
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xaa8dec8
	// Params: [ Num(4) Size(0xA4) ]
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit);

	// Object: Function AIModule.PathFollowingComponent.GetPathDestination
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa8de5c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPathDestination();

	// Object: Function AIModule.PathFollowingComponent.GetPathActionType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa8de94
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetPathActionType();
};

// Object: Class AIModule.CrowdFollowingComponent
// Size: 0x2C8 (Inherited: 0x288)
struct UCrowdFollowingComponent : UPathFollowingComponent
{
	uint8_t Pad_0x288[0x8]; // 0x288(0x8)
	struct UCharacterMovementComponent* CharacterMovement; // 0x290(0x8)
	struct FVector CrowdAgentMoveDirection; // 0x298(0xC)
	uint8_t Pad_0x2A4[0x24]; // 0x2A4(0x24)


	// Object: Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xaa7e884
	// Params: [ Num(1) Size(0x1) ]
	void SuspendCrowdSteering(bool bSuspend);
};

// Object: Class AIModule.NavLinkProxy
// Size: 0x330 (Inherited: 0x2E0)
struct ANavLinkProxy : AActor
{
	uint8_t Pad_0x2E0[0x10]; // 0x2E0(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x2F0(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x300(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x310(0x8)
	bool bSmartLinkIsRelevant; // 0x318(0x1)
	uint8_t Pad_0x319[0x7]; // 0x319(0x7)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x320(0x10)


	// Object: Function AIModule.NavLinkProxy.SetSmartLinkEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa8c628
	// Params: [ Num(1) Size(0x1) ]
	void SetSmartLinkEnabled(bool bEnabled);

	// Object: Function AIModule.NavLinkProxy.ResumePathFollowing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa8c710
	// Params: [ Num(1) Size(0x8) ]
	void ResumePathFollowing(struct AActor* Agent);

	// Object: Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination);

	// Object: Function AIModule.NavLinkProxy.IsSmartLinkEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa8c6d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsSmartLinkEnabled();

	// Object: Function AIModule.NavLinkProxy.HasMovingAgents
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa8c5f0
	// Params: [ Num(1) Size(0x1) ]
	bool HasMovingAgents();
};

// Object: Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68 (Inherited: 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0xaa5b254
	// Params: [ Num(2) Size(0x5) ]
	void OnMoveCompleted(struct FAIRequestID RequestID, uint8_t MovementResult);
};

// Object: Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	// Flags: [Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa5bad0
	// Params: [ Num(3) Size(0xA) ]
	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);

	// Object: Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xaa5be80
	// Params: [ Num(8) Size(0x48) ]
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner);

	// Object: Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa5b670
	// Params: [ Num(2) Size(0x14) ]
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal);

	// Object: Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa5b750
	// Params: [ Num(2) Size(0x10) ]
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal);

	// Object: Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa5c0ac
	// Params: [ Num(4) Size(0x19) ]
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess);

	// Object: Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	// Flags: [Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa5bc00
	// Params: [ Num(3) Size(0xA) ]
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);

	// Object: Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa5b8cc
	// Params: [ Num(2) Size(0xD) ]
	bool IsValidAIRotation(struct FRotator Rotation);

	// Object: Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa5ba24
	// Params: [ Num(2) Size(0xD) ]
	bool IsValidAILocation(struct FVector Location);

	// Object: Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa5b978
	// Params: [ Num(2) Size(0xD) ]
	bool IsValidAIDirection(struct FVector DirectionVector);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa5b824
	// Params: [ Num(2) Size(0x10) ]
	struct UNavigationPath* GetCurrentPath(struct AController* Controller);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa5bd30
	// Params: [ Num(2) Size(0x10) ]
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetAIController
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa5bdd8
	// Params: [ Num(2) Size(0x10) ]
	struct AAIController* GetAIController(struct AActor* ControlledActor);

	// Object: Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xaa5c208
	// Params: [ Num(7) Size(0x38) ]
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// Object: Class AIModule.AIDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UAIDataProvider : UObject
{
};

// Object: Class AIModule.AIDataProvider_QueryParams
// Size: 0x40 (Inherited: 0x28)
struct UAIDataProvider_QueryParams : UAIDataProvider
{
	struct FName ParamName; // 0x28(0x8)
	float FloatValue; // 0x30(0x4)
	int32_t IntValue; // 0x34(0x4)
	bool BoolValue; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: Class AIModule.AIDataProvider_Random
// Size: 0x48 (Inherited: 0x40)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams
{
	float Min; // 0x3C(0x4)
	float Max; // 0x40(0x4)
	uint8_t bInteger : 1; // 0x44(0x1), Mask(0x1)
};

// Object: Class AIModule.AIHotSpotManager
// Size: 0x28 (Inherited: 0x28)
struct UAIHotSpotManager : UObject
{
};

// Object: Class AIModule.AIPerceptionListenerInterface
// Size: 0x28 (Inherited: 0x28)
struct IAIPerceptionListenerInterface : IInterface
{
};

// Object: Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xF0 (Inherited: 0xD8)
struct UAIPerceptionStimuliSourceComponent : UActorComponent
{
	uint8_t bAutoRegisterAsSource : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct TArray<struct UAISense*> RegisterAsSourceForSenses; // 0xE0(0x10)


	// Object: Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5fbec
	// Params: [ Num(1) Size(0x8) ]
	void UnregisterFromSense(struct UAISense* SenseClass);

	// Object: Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5fc94
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterFromPerceptionSystem();

	// Object: Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5fd50
	// Params: [ Num(0) Size(0x0) ]
	void RegisterWithPerceptionSystem();

	// Object: Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa5fca8
	// Params: [ Num(1) Size(0x8) ]
	void RegisterForSense(struct UAISense* SenseClass);
};

// Object: Class AIModule.AIResourceInterface
// Size: 0x28 (Inherited: 0x28)
struct IAIResourceInterface : IInterface
{
};

// Object: Class AIModule.AIResource_Movement
// Size: 0x30 (Inherited: 0x30)
struct UAIResource_Movement : UGameplayTaskResource
{
};

// Object: Class AIModule.AIResource_Logic
// Size: 0x30 (Inherited: 0x30)
struct UAIResource_Logic : UGameplayTaskResource
{
};

// Object: Class AIModule.AISense_Blueprint
// Size: 0xA0 (Inherited: 0x78)
struct UAISense_Blueprint : UAISense
{
	struct UUserDefinedStruct* ListenerDataType; // 0x78(0x8)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x80(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0x90(0x10)


	// Object: Function AIModule.AISense_Blueprint.OnUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess);

	// Object: Function AIModule.AISense_Blueprint.OnListenerUpdated
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent);

	// Object: Function AIModule.AISense_Blueprint.OnListenerUnregistered
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent);

	// Object: Function AIModule.AISense_Blueprint.OnListenerRegistered
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent);

	// Object: Function AIModule.AISense_Blueprint.K2_OnNewPawn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void K2_OnNewPawn(struct APawn* NewPawn);

	// Object: Function AIModule.AISense_Blueprint.GetAllListenerComponents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa636b8
	// Params: [ Num(1) Size(0x10) ]
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents);

	// Object: Function AIModule.AISense_Blueprint.GetAllListenerActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa63778
	// Params: [ Num(1) Size(0x10) ]
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors);
};

// Object: Class AIModule.AISense_Damage
// Size: 0x88 (Inherited: 0x78)
struct UAISense_Damage : UAISense
{
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x78(0x10)


	// Object: Function AIModule.AISense_Damage.ReportDamageEvent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xaa6411c
	// Params: [ Num(6) Size(0x34) ]
	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation);
};

// Object: Class AIModule.AISense_Prediction
// Size: 0x88 (Inherited: 0x78)
struct UAISense_Prediction : UAISense
{
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x78(0x10)


	// Object: Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa64c54
	// Params: [ Num(3) Size(0x14) ]
	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime);

	// Object: Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa64d68
	// Params: [ Num(3) Size(0x14) ]
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime);
};

// Object: Class AIModule.AISense_Team
// Size: 0x88 (Inherited: 0x78)
struct UAISense_Team : UAISense
{
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x78(0x10)
};

// Object: Class AIModule.AISense_Touch
// Size: 0x88 (Inherited: 0x78)
struct UAISense_Touch : UAISense
{
	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x78(0x10)
};

// Object: Class AIModule.AISenseBlueprintListener
// Size: 0x108 (Inherited: 0x108)
struct UAISenseBlueprintListener : UUserDefinedStruct
{
};

// Object: Class AIModule.AISenseConfig_Blueprint
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Blueprint : UAISenseConfig
{
	struct UAISense_Blueprint* Implementation; // 0x48(0x8)
};

// Object: Class AIModule.AISenseConfig_Damage
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Damage : UAISenseConfig
{
	struct UAISense_Damage* Implementation; // 0x48(0x8)
};

// Object: Class AIModule.AISenseConfig_Hearing
// Size: 0x60 (Inherited: 0x48)
struct UAISenseConfig_Hearing : UAISenseConfig
{
	struct UAISense_Hearing* Implementation; // 0x48(0x8)
	float HearingRange; // 0x50(0x4)
	float LoSHearingRange; // 0x54(0x4)
	uint8_t bUseLoSHearing : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C(0x4)
};

// Object: Class AIModule.AISenseConfig_Prediction
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Prediction : UAISenseConfig
{
};

// Object: Class AIModule.AISenseConfig_Sight
// Size: 0x68 (Inherited: 0x48)
struct UAISenseConfig_Sight : UAISenseConfig
{
	struct UAISense_Sight* Implementation; // 0x48(0x8)
	float SightRadius; // 0x50(0x4)
	float LoseSightRadius; // 0x54(0x4)
	float PeripheralVisionAngleDegrees; // 0x58(0x4)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C(0x4)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: Class AIModule.AISenseConfig_Team
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Team : UAISenseConfig
{
};

// Object: Class AIModule.AISenseConfig_Touch
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Touch : UAISenseConfig
{
};

// Object: Class AIModule.AISenseEvent
// Size: 0x28 (Inherited: 0x28)
struct UAISenseEvent : UObject
{
};

// Object: Class AIModule.AISenseEvent_Damage
// Size: 0x58 (Inherited: 0x28)
struct UAISenseEvent_Damage : UAISenseEvent
{
	struct FAIDamageEvent Event; // 0x28(0x30)
};

// Object: Class AIModule.AISenseEvent_Hearing
// Size: 0x58 (Inherited: 0x28)
struct UAISenseEvent_Hearing : UAISenseEvent
{
	struct FAINoiseEvent Event; // 0x28(0x30)
};

// Object: Class AIModule.AISightTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct IAISightTargetInterface : IInterface
{
};

// Object: Class AIModule.AISystem
// Size: 0x130 (Inherited: 0x58)
struct UAISystem : UAISystemBase
{
	struct FSoftClassPath PerceptionSystemClassName; // 0x58(0x18)
	struct FSoftClassPath HotSpotManagerClassName; // 0x70(0x18)
	float AcceptanceRadius; // 0x88(0x4)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x8C(0x4)
	float PathfollowingNavLinkAcceptanceRadius; // 0x90(0x4)
	bool bFinishMoveOnGoalOverlap; // 0x94(0x1)
	bool bAcceptPartialPaths; // 0x95(0x1)
	bool bAllowStrafing; // 0x96(0x1)
	bool bEnableBTAITasks; // 0x97(0x1)
	bool bAllowControllersAsEQSQuerier; // 0x98(0x1)
	bool bEnableDebuggerPlugin; // 0x99(0x1)
	bool bForgetStaleActors; // 0x9A(0x1)
	uint8_t DefaultSightCollisionChannel; // 0x9B(0x1)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0xA0(0x8)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0xA8(0x8)
	struct UAIPerceptionSystem* PerceptionSystem; // 0xB0(0x8)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xB8(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0xC8(0x8)
	struct UNavLocalGridManager* NavLocalGrids; // 0xD0(0x8)
	uint8_t Pad_0xD8[0x58]; // 0xD8(0x58)


	// Object: Function AIModule.AISystem.AILoggingVerbose
	// Flags: [Exec|Native|Public]
	// Offset: 0xaa66d24
	// Params: [ Num(0) Size(0x0) ]
	void AILoggingVerbose();

	// Object: Function AIModule.AISystem.AIIgnorePlayers
	// Flags: [Exec|Native|Public]
	// Offset: 0xaa66d40
	// Params: [ Num(0) Size(0x0) ]
	void AIIgnorePlayers();
};

// Object: Class AIModule.AITask
// Size: 0x68 (Inherited: 0x60)
struct UAITask : UGameplayTask
{
	struct AAIController* OwnerController; // 0x60(0x8)
};

// Object: Class AIModule.AITask_LockLogic
// Size: 0x68 (Inherited: 0x68)
struct UAITask_LockLogic : UAITask
{
};

// Object: Class AIModule.AITask_MoveTo
// Size: 0x108 (Inherited: 0x68)
struct UAITask_MoveTo : UAITask
{
	struct FMulticastInlineDelegate OnRequestFailed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x78(0x10)
	struct FAIMoveRequest MoveRequest; // 0x88(0x40)
	uint8_t Pad_0xC8[0x40]; // 0xC8(0x40)


	// Object: Function AIModule.AITask_MoveTo.AIMoveTo
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xaa67424
	// Params: [ Num(11) Size(0x38) ]
	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, uint8_t StopOnOverlap, uint8_t AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, uint8_t ProjectGoalOnNavigation);
};

// Object: Class AIModule.AITask_RunEQS
// Size: 0xE0 (Inherited: 0x68)
struct UAITask_RunEQS : UAITask
{
	uint8_t Pad_0x68[0x78]; // 0x68(0x78)


	// Object: Function AIModule.AITask_RunEQS.RunEQS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa67b30
	// Params: [ Num(3) Size(0x18) ]
	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate);
};

// Object: Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x28)
struct UBehaviorTree : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UBTCompositeNode* RootNode; // 0x30(0x8)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x8)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x40(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x50(0x10)
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: Class AIModule.BrainComponent
// Size: 0x138 (Inherited: 0xD8)
struct UBrainComponent : UActorComponent
{
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
	struct UBlackboardComponent* BlackboardComp; // 0xE0(0x8)
	struct AAIController* AIOwner; // 0xE8(0x8)
	uint8_t Pad_0xF0[0x48]; // 0xF0(0x48)


	// Object: Function AIModule.BrainComponent.StopLogic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xaa70f38
	// Params: [ Num(1) Size(0x10) ]
	void StopLogic(struct FString Reason);

	// Object: Function AIModule.BrainComponent.StartLogic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xaa71010
	// Params: [ Num(0) Size(0x0) ]
	void StartLogic();

	// Object: Function AIModule.BrainComponent.RestartLogic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xaa70ff4
	// Params: [ Num(0) Size(0x0) ]
	void RestartLogic();

	// Object: Function AIModule.BrainComponent.IsRunning
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa70ef8
	// Params: [ Num(1) Size(0x1) ]
	bool IsRunning();

	// Object: Function AIModule.BrainComponent.IsPaused
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa70eb8
	// Params: [ Num(1) Size(0x1) ]
	bool IsPaused();
};

// Object: Class AIModule.BehaviorTreeComponent
// Size: 0x2C8 (Inherited: 0x138)
struct UBehaviorTreeComponent : UBrainComponent
{
	uint8_t Pad_0x138[0x20]; // 0x138(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x158(0x10)
	uint8_t Pad_0x168[0x148]; // 0x168(0x148)
	struct UBehaviorTree* DefaultBehaviorTreeAsset; // 0x2B0(0x8)
	uint8_t Pad_0x2B8[0x10]; // 0x2B8(0x10)


	// Object: Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xaa6881c
	// Params: [ Num(2) Size(0x10) ]
	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset);

	// Object: Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa68a38
	// Params: [ Num(2) Size(0xC) ]
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag);

	// Object: Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa68908
	// Params: [ Num(3) Size(0xD) ]
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// Object: Class AIModule.BehaviorTreeManager
// Size: 0x50 (Inherited: 0x28)
struct UBehaviorTreeManager : UObject
{
	int32_t MaxDebuggerSteps; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x40(0x10)
};

// Object: Class AIModule.BehaviorTreeTypes
// Size: 0x28 (Inherited: 0x28)
struct UBehaviorTreeTypes : UObject
{
};

// Object: Class AIModule.BlackboardAssetProvider
// Size: 0x28 (Inherited: 0x28)
struct IBlackboardAssetProvider : IInterface
{

	// Object: Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6d43c
	// Params: [ Num(1) Size(0x8) ]
	struct UBlackboardData* GetBlackboardAsset();
};

// Object: Class AIModule.BlackboardComponent
// Size: 0x1D8 (Inherited: 0xD8)
struct UBlackboardComponent : UActorComponent
{
	struct UBrainComponent* BrainComp; // 0xD8(0x8)
	struct UBlackboardData* DefaultBlackboardAsset; // 0xE0(0x8)
	struct UBlackboardData* BlackboardAsset; // 0xE8(0x8)
	uint8_t Pad_0xF0[0x20]; // 0xF0(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0x110(0x10)
	uint8_t Pad_0x120[0xB8]; // 0x120(0xB8)


	// Object: Function AIModule.BlackboardComponent.SetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa6dc5c
	// Params: [ Num(2) Size(0x14) ]
	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6de44
	// Params: [ Num(2) Size(0x18) ]
	void SetValueAsString(struct FName& KeyName, struct FString StringValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa6db68
	// Params: [ Num(2) Size(0x14) ]
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6e464
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6dd50
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsName(struct FName& KeyName, struct FName NameValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6e188
	// Params: [ Num(2) Size(0xC) ]
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6e094
	// Params: [ Num(2) Size(0xC) ]
	void SetValueAsFloat(struct FName& KeyName, float FloatValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6e27c
	// Params: [ Num(2) Size(0x9) ]
	void SetValueAsEnum(struct FName& KeyName, uint8_t EnumValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6e370
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsClass(struct FName& KeyName, struct UObject* ClassValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6df98
	// Params: [ Num(2) Size(0x9) ]
	void SetValueAsBool(struct FName& KeyName, bool BoolValue);

	// Object: Function AIModule.BlackboardComponent.IsVectorValueSet
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6daa8
	// Params: [ Num(2) Size(0x9) ]
	bool IsVectorValueSet(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6e618
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetValueAsVector(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6e794
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetValueAsString(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6e558
	// Params: [ Num(2) Size(0x14) ]
	struct FRotator GetValueAsRotator(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6ec38
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetValueAsObject(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6e6d8
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetValueAsName(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6ea04
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetValueAsInt(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6e948
	// Params: [ Num(2) Size(0xC) ]
	float GetValueAsFloat(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6eac0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetValueAsEnum(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6eb7c
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetValueAsClass(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6e888
	// Params: [ Num(2) Size(0x9) ]
	bool GetValueAsBool(struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetRotationFromEntry
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6d888
	// Params: [ Num(3) Size(0x15) ]
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation);

	// Object: Function AIModule.BlackboardComponent.GetLocationFromEntry
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa6d998
	// Params: [ Num(3) Size(0x15) ]
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation);

	// Object: Function AIModule.BlackboardComponent.ClearValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa6d7d4
	// Params: [ Num(1) Size(0x8) ]
	void ClearValue(struct FName& KeyName);
};

// Object: Class AIModule.BlackboardData
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardData : UDataAsset
{
	struct UBlackboardData* Parent; // 0x30(0x8)
	struct TArray<struct FBlackboardEntry> Keys; // 0x38(0x10)
	uint8_t bHasSynchronizedKeys : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AIModule.BlackboardKeyType
// Size: 0x30 (Inherited: 0x28)
struct UBlackboardKeyType : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class AIModule.BlackboardKeyType_Bool
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Bool : UBlackboardKeyType
{
};

// Object: Class AIModule.BlackboardKeyType_Class
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Class : UBlackboardKeyType
{
	struct UObject* BaseClass; // 0x30(0x8)
};

// Object: Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType
{
	struct UEnum* EnumType; // 0x30(0x8)
	struct FString EnumName; // 0x38(0x10)
	uint8_t bIsEnumNameValid : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AIModule.BlackboardKeyType_Float
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Float : UBlackboardKeyType
{
};

// Object: Class AIModule.BlackboardKeyType_Int
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Int : UBlackboardKeyType
{
};

// Object: Class AIModule.BlackboardKeyType_Name
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Name : UBlackboardKeyType
{
};

// Object: Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x48 (Inherited: 0x30)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType
{
	struct FString EnumName; // 0x30(0x10)
	struct UEnum* EnumType; // 0x40(0x8)
};

// Object: Class AIModule.BlackboardKeyType_Object
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType
{
	struct UObject* BaseClass; // 0x30(0x8)
};

// Object: Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType
{
};

// Object: Class AIModule.BlackboardKeyType_String
// Size: 0x40 (Inherited: 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType
{
	struct FString StringValue; // 0x30(0x10)
};

// Object: Class AIModule.BlackboardKeyType_Vector
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType
{
};

// Object: Class AIModule.BTComposite_Selector
// Size: 0x90 (Inherited: 0x90)
struct UBTComposite_Selector : UBTCompositeNode
{
};

// Object: Class AIModule.BTComposite_Sequence
// Size: 0x90 (Inherited: 0x90)
struct UBTComposite_Sequence : UBTCompositeNode
{
};

// Object: Class AIModule.BTComposite_SimpleParallel
// Size: 0x90 (Inherited: 0x90)
struct UBTComposite_SimpleParallel : UBTCompositeNode
{
	uint8_t FinishMode; // 0x8C(0x1)
};

// Object: Class AIModule.BTDecorator_BlueprintBase
// Size: 0x98 (Inherited: 0x60)
struct UBTDecorator_BlueprintBase : UBTDecorator
{
	struct AAIController* AIOwner; // 0x60(0x8)
	struct AActor* ActorOwner; // 0x68(0x8)
	struct TArray<struct FName> ObservedKeyNames; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
	uint8_t bShowPropertyDetails : 1; // 0x90(0x1), Mask(0x1)
	uint8_t bCheckConditionOnlyBlackBoardChanges : 1; // 0x90(0x1), Mask(0x2)
	uint8_t bIsObservingBB : 1; // 0x90(0x1), Mask(0x4)
	uint8_t BitPad_0x90_3 : 5; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)


	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveObserverDeactivated(struct AActor* OwnerActor);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveObserverActivated(struct AActor* OwnerActor);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveExecutionStart(struct AActor* OwnerActor);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x11) ]
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, uint8_t NodeResult);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x9) ]
	void ReceiveExecutionFinish(struct AActor* OwnerActor, uint8_t NodeResult);

	// Object: Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x11) ]
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x9) ]
	bool PerformConditionCheck(struct AActor* OwnerActor);

	// Object: Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa72084
	// Params: [ Num(1) Size(0x1) ]
	bool IsDecoratorObserverActive();

	// Object: Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa720bc
	// Params: [ Num(1) Size(0x1) ]
	bool IsDecoratorExecutionActive();
};

// Object: Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xC0 (Inherited: 0x60)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator
{
	struct FBlackboardKeySelector ActorToCheck; // 0x60(0x28)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FGameplayTagContainer GameplayTags; // 0x90(0x20)
	struct FString CachedDescription; // 0xB0(0x10)
};

// Object: Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xB0 (Inherited: 0x60)
struct UBTDecorator_CompareBBEntries : UBTDecorator
{
	uint8_t Operator; // 0x5A(0x1)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x60(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x88(0x28)
};

// Object: Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xB8 (Inherited: 0xB8)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard
{
};

// Object: Class AIModule.BTDecorator_ConeCheck
// Size: 0xE0 (Inherited: 0x60)
struct UBTDecorator_ConeCheck : UBTDecorator
{
	float ConeHalfAngle; // 0x5C(0x4)
	struct FBlackboardKeySelector ConeOrigin; // 0x60(0x28)
	struct FBlackboardKeySelector ConeDirection; // 0x88(0x28)
	struct FBlackboardKeySelector Observed; // 0xB0(0x28)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: Class AIModule.BTDecorator_Cooldown
// Size: 0x60 (Inherited: 0x60)
struct UBTDecorator_Cooldown : UBTDecorator
{
	float CooldownTime; // 0x5C(0x4)
};

// Object: Class AIModule.BTDecorator_DoesPathExist
// Size: 0xC0 (Inherited: 0x60)
struct UBTDecorator_DoesPathExist : UBTDecorator
{
	struct FBlackboardKeySelector BlackboardKeyA; // 0x60(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x88(0x28)
	uint8_t bUseSelf : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t PathQueryType; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
	struct UNavigationQueryFilter* FilterClass; // 0xB8(0x8)
};

// Object: Class AIModule.BTDecorator_ForceSuccess
// Size: 0x60 (Inherited: 0x60)
struct UBTDecorator_ForceSuccess : UBTDecorator
{
};

// Object: Class AIModule.BTDecorator_IsAtLocation
// Size: 0xD0 (Inherited: 0x88)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase
{
	float AcceptableRadius; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x90(0x38)
	enum class EFAIDistanceType GeometricDistanceType; // 0xC8(0x1)
	uint8_t bUseParametrizedRadius : 1; // 0xC9(0x1), Mask(0x1)
	uint8_t bUseNavAgentGoalLocation : 1; // 0xC9(0x1), Mask(0x2)
	uint8_t bPathFindingBasedTest : 1; // 0xC9(0x1), Mask(0x4)
	uint8_t BitPad_0xC9_3 : 5; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x6]; // 0xCA(0x6)
};

// Object: Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x90 (Inherited: 0x88)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase
{
	struct UObject* TestClass; // 0x88(0x8)
};

// Object: Class AIModule.BTDecorator_KeepInCone
// Size: 0xB8 (Inherited: 0x60)
struct UBTDecorator_KeepInCone : UBTDecorator
{
	float ConeHalfAngle; // 0x5C(0x4)
	struct FBlackboardKeySelector ConeOrigin; // 0x60(0x28)
	struct FBlackboardKeySelector Observed; // 0x88(0x28)
	uint8_t bUseSelfAsOrigin : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t bUseSelfAsObserved : 1; // 0xB0(0x1), Mask(0x2)
	uint8_t BitPad_0xB4_2 : 6; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
};

// Object: Class AIModule.BTDecorator_Loop
// Size: 0x68 (Inherited: 0x60)
struct UBTDecorator_Loop : UBTDecorator
{
	int32_t NumLoops; // 0x5C(0x4)
	bool bInfiniteLoop; // 0x60(0x1)
	float InfiniteLoopTimeoutTime; // 0x64(0x4)
};

// Object: Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x60 (Inherited: 0x60)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator
{
};

// Object: Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x70 (Inherited: 0x60)
struct UBTDecorator_SetTagCooldown : UBTDecorator
{
	struct FGameplayTag CooldownTag; // 0x5C(0x8)
	float CooldownDuration; // 0x64(0x4)
	bool bAddToExistingDuration; // 0x68(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: Class AIModule.BTDecorator_TagCooldown
// Size: 0x70 (Inherited: 0x60)
struct UBTDecorator_TagCooldown : UBTDecorator
{
	struct FGameplayTag CooldownTag; // 0x5C(0x8)
	float CooldownDuration; // 0x64(0x4)
	bool bAddToExistingDuration; // 0x68(0x1)
	bool bActivatesCooldown; // 0x69(0x1)
	uint8_t Pad_0x6E[0x2]; // 0x6E(0x2)
};

// Object: Class AIModule.BTFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa76eb4
	// Params: [ Num(1) Size(0x8) ]
	void StopUsingExternalEvent(struct UBTNode* NodeOwner);

	// Object: Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa76f4c
	// Params: [ Num(2) Size(0x10) ]
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa77384
	// Params: [ Num(3) Size(0x3C) ]
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa77628
	// Params: [ Num(3) Size(0x40) ]
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa77128
	// Params: [ Num(3) Size(0x3C) ]
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa77e84
	// Params: [ Num(3) Size(0x38) ]
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa774d8
	// Params: [ Num(3) Size(0x38) ]
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa77a8c
	// Params: [ Num(3) Size(0x34) ]
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa77938
	// Params: [ Num(3) Size(0x34) ]
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa77be0
	// Params: [ Num(3) Size(0x31) ]
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, uint8_t Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa77d34
	// Params: [ Num(3) Size(0x38) ]
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa777dc
	// Params: [ Num(3) Size(0x31) ]
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value);

	// Object: Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa78cc8
	// Params: [ Num(2) Size(0x10) ]
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner);

	// Object: Function AIModule.BTFunctionLibrary.GetOwnerComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa78c20
	// Params: [ Num(2) Size(0x10) ]
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa780f0
	// Params: [ Num(3) Size(0x3C) ]
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa78324
	// Params: [ Num(3) Size(0x40) ]
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa77fd4
	// Params: [ Num(3) Size(0x3C) ]
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa78b08
	// Params: [ Num(3) Size(0x38) ]
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa7820c
	// Params: [ Num(3) Size(0x38) ]
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa786a8
	// Params: [ Num(3) Size(0x34) ]
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa78590
	// Params: [ Num(3) Size(0x34) ]
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa787c0
	// Params: [ Num(3) Size(0x31) ]
	uint8_t GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa788d8
	// Params: [ Num(3) Size(0x38) ]
	struct UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa78474
	// Params: [ Num(3) Size(0x31) ]
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa789f0
	// Params: [ Num(3) Size(0x38) ]
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa7727c
	// Params: [ Num(2) Size(0x30) ]
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.ClearBlackboardValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa77020
	// Params: [ Num(2) Size(0x30) ]
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key);
};

// Object: Class AIModule.BTService_DefaultFocus
// Size: 0x98 (Inherited: 0x90)
struct UBTService_DefaultFocus : UBTService_BlackboardBase
{
	uint8_t FocusPriority; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: Class AIModule.BTService_RunEQS
// Size: 0xE8 (Inherited: 0x90)
struct UBTService_RunEQS : UBTService_BlackboardBase
{
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x90(0x48)
	uint8_t Pad_0xD8[0x10]; // 0xD8(0x10)
};

// Object: Class AIModule.BTTask_BlueprintBase
// Size: 0xA8 (Inherited: 0x70)
struct UBTTask_BlueprintBase : UBTTaskNode
{
	struct AAIController* AIOwner; // 0x70(0x8)
	struct AActor* ActorOwner; // 0x78(0x8)
	struct FIntervalCountdown TickInterval; // 0x80(0x8)
	uint8_t Pad_0x88[0x18]; // 0x88(0x18)
	uint8_t bShowPropertyDetails : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)


	// Object: Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xaa7a61c
	// Params: [ Num(2) Size(0xC) ]
	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID);

	// Object: Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xaa7a704
	// Params: [ Num(1) Size(0x8) ]
	void SetFinishOnMessage(struct FName MessageName);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveExecute(struct AActor* OwnerActor);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveAbort(struct AActor* OwnerActor);

	// Object: Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa7a5e4
	// Params: [ Num(1) Size(0x1) ]
	bool IsTaskExecuting();

	// Object: Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa7a5ac
	// Params: [ Num(1) Size(0x1) ]
	bool IsTaskAborting();

	// Object: Function AIModule.BTTask_BlueprintBase.FinishExecute
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xaa7a7c0
	// Params: [ Num(1) Size(0x1) ]
	void FinishExecute(bool bSuccess);

	// Object: Function AIModule.BTTask_BlueprintBase.FinishAbort
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xaa7a7ac
	// Params: [ Num(0) Size(0x0) ]
	void FinishAbort();
};

// Object: Class AIModule.BTTask_FinishWithResult
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_FinishWithResult : UBTTaskNode
{
	uint8_t Result; // 0x69(0x1)
};

// Object: Class AIModule.BTTask_GameplayTaskBase
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_GameplayTaskBase : UBTTaskNode
{
	uint8_t bWaitForGameplayTask : 1; // 0x69(0x1), Mask(0x1)
};

// Object: Class AIModule.BTTask_MakeNoise
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_MakeNoise : UBTTaskNode
{
	float Loudnes; // 0x6C(0x4)
};

// Object: Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xB0 (Inherited: 0xB0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo
{
	uint8_t bDisablePathUpdateOnGoalLocationChange : 1; // 0xAE(0x1), Mask(0x1)
	uint8_t bProjectVectorGoalToNavigation : 1; // 0xAE(0x1), Mask(0x2)
	uint8_t bUpdatedDeprecatedProperties : 1; // 0xAE(0x1), Mask(0x4)
};

// Object: Class AIModule.BTTask_PawnActionBase
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_PawnActionBase : UBTTaskNode
{
};

// Object: Class AIModule.BTTask_PlayAnimation
// Size: 0xB0 (Inherited: 0x70)
struct UBTTask_PlayAnimation : UBTTaskNode
{
	struct UAnimationAsset* AnimationToPlay; // 0x70(0x8)
	uint8_t bLooping : 1; // 0x78(0x1), Mask(0x1)
	uint8_t bNonBlocking : 1; // 0x78(0x1), Mask(0x2)
	uint8_t BitPad_0x78_2 : 6; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x80(0x8)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x88(0x8)
	uint8_t Pad_0x90[0x20]; // 0x90(0x20)
};

// Object: Class AIModule.BTTask_PlaySound
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_PlaySound : UBTTaskNode
{
	struct USoundCue* SoundToPlay; // 0x70(0x8)
};

// Object: Class AIModule.BTTask_PushPawnAction
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase
{
	struct UPawnAction* Action; // 0x70(0x8)
};

// Object: Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xA0 (Inherited: 0x98)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase
{
	float Precision; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: Class AIModule.BTTask_RunBehavior
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_RunBehavior : UBTTaskNode
{
	struct UBehaviorTree* BehaviorAsset; // 0x70(0x8)
};

// Object: Class AIModule.BTTask_RunEQSQuery
// Size: 0x150 (Inherited: 0x98)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase
{
	struct UEnvQuery* QueryTemplate; // 0x98(0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xA0(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xB0(0x10)
	uint8_t RunMode; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xC8(0x28)
	bool bUseBBKey; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xF8(0x48)
	uint8_t Pad_0x140[0x10]; // 0x140(0x10)
};

// Object: Class AIModule.BTTask_SetTagCooldown
// Size: 0x80 (Inherited: 0x70)
struct UBTTask_SetTagCooldown : UBTTaskNode
{
	struct FGameplayTag CooldownTag; // 0x6C(0x8)
	bool bAddToExistingDuration; // 0x74(0x1)
	float CooldownDuration; // 0x78(0x4)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
};

// Object: Class AIModule.BTTask_Wait
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_Wait : UBTTaskNode
{
	float WaitTime; // 0x6C(0x4)
	float RandomDeviation; // 0x70(0x4)
};

// Object: Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xA0 (Inherited: 0x78)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait
{
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x28)
};

// Object: Class AIModule.CrowdAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct ICrowdAgentInterface : IInterface
{
};

// Object: Class AIModule.DetourCrowdAIController
// Size: 0x400 (Inherited: 0x400)
struct ADetourCrowdAIController : AAIController
{
};

// Object: Class AIModule.EnvQuery
// Size: 0x48 (Inherited: 0x30)
struct UEnvQuery : UDataAsset
{
	struct FName QueryName; // 0x30(0x8)
	struct TArray<struct UEnvQueryOption*> options; // 0x38(0x10)
};

// Object: Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)


	// Object: Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x1C) ]
	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation);

	// Object: Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x18) ]
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor);

	// Object: Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x20) ]
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet);

	// Object: Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x20) ]
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet);
};

// Object: Class AIModule.EnvQueryContext_Item
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext
{
};

// Object: Class AIModule.EnvQueryContext_Querier
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext
{
};

// Object: Class AIModule.EnvQueryDebugHelpers
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryDebugHelpers : UObject
{
};

// Object: Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xD0 (Inherited: 0x50)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator
{
	struct AActor* SearchedActorClass; // 0x50(0x8)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58(0x38)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x38)
	struct UEnvQueryContext* SearchCenter; // 0xC8(0x8)
};

// Object: Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator
{
	struct FText GeneratorsActionDescription; // 0x50(0x18)
	struct UEnvQueryContext* Context; // 0x68(0x8)
	struct UEnvQueryItemType* GeneratedItemType; // 0x70(0x8)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)


	// Object: Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa7fffc
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetQuerier();

	// Object: Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations);

	// Object: Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|Const]
	// Offset: 0xaa800d8
	// Params: [ Num(1) Size(0xC) ]
	void AddGeneratedVector(struct FVector GeneratedVector);

	// Object: Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xaa80030
	// Params: [ Num(1) Size(0x8) ]
	void AddGeneratedActor(struct AActor* GeneratedActor);
};

// Object: Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator
{
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x50(0x10)
	uint8_t bAllowDifferentItemTypes : 1; // 0x60(0x1), Mask(0x1)
	uint8_t bHasMatchingItemType : 1; // 0x60(0x1), Mask(0x2)
	uint8_t BitPad_0x60_2 : 6; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct UEnvQueryItemType* ForcedItemType; // 0x68(0x8)
};

// Object: Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator
{
	struct FEnvTraceData ProjectionData; // 0x50(0x30)
};

// Object: Class AIModule.EnvQueryGenerator_Cone
// Size: 0x170 (Inherited: 0x80)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x80(0x38)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xB8(0x38)
	struct FAIDataProviderFloatValue AngleStep; // 0xF0(0x38)
	struct FAIDataProviderFloatValue Range; // 0x128(0x38)
	struct UEnvQueryContext* CenterActor; // 0x160(0x8)
	uint8_t bIncludeContextLocation : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
};

// Object: Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x58 (Inherited: 0x50)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator
{
	struct UEnvQueryContext* QueryContext; // 0x50(0x8)
};

// Object: Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1D0 (Inherited: 0x80)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue InnerRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0xB8(0x38)
	struct FAIDataProviderIntValue NumberOfRings; // 0xF0(0x38)
	struct FAIDataProviderIntValue PointsPerRing; // 0x128(0x38)
	struct FEnvDirection ArcDirection; // 0x160(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x180(0x38)
	bool bUseSpiralPattern; // 0x1B8(0x1)
	uint8_t Pad_0x1B9[0x7]; // 0x1B9(0x7)
	struct UEnvQueryContext* Center; // 0x1C0(0x8)
	uint8_t bDefineArc : 1; // 0x1C8(0x1), Mask(0x1)
	uint8_t BitPad_0x1C8_1 : 7; // 0x1C8(0x1)
	uint8_t Pad_0x1C9[0x7]; // 0x1C9(0x7)
};

// Object: Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x210 (Inherited: 0x80)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue CircleRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8(0x38)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xF0(0x38)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
	struct FEnvDirection ArcDirection; // 0x130(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x150(0x38)
	float AngleRadians; // 0x188(0x4)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct UEnvQueryContext* CircleCenter; // 0x190(0x8)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198(0x1)
	uint8_t Pad_0x199[0x7]; // 0x199(0x7)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1A0(0x38)
	struct FEnvTraceData TraceData; // 0x1D8(0x30)
	uint8_t bDefineArc : 1; // 0x208(0x1), Mask(0x1)
	uint8_t BitPad_0x208_1 : 7; // 0x208(0x1)
	uint8_t Pad_0x209[0x7]; // 0x209(0x7)
};

// Object: Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xF8 (Inherited: 0x80)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue GridSize; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8(0x38)
	struct UEnvQueryContext* GenerateAround; // 0xF0(0x8)
};

// Object: Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x170 (Inherited: 0xF8)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid
{
	struct FAIDataProviderBoolValue PathToItem; // 0xF8(0x38)
	struct UNavigationQueryFilter* NavigationFilter; // 0x130(0x8)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138(0x38)
};

// Object: Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x78 (Inherited: 0x28)
struct UEnvQueryInstanceBlueprintWrapper : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	int32_t QueryID; // 0x30(0x4)
	uint8_t Pad_0x34[0x24]; // 0x34(0x24)
	struct UEnvQueryItemType* ItemType; // 0x58(0x8)
	int32_t OptionIndex; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68(0x10)


	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa843bc
	// Params: [ Num(2) Size(0xC) ]
	void SetNamedParam(struct FName ParamName, float Value);

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa844a4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetResultsAsLocations();

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa84540
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetResultsAsActors();

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xaa845dc
	// Params: [ Num(2) Size(0x11) ]
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations);

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xaa846a8
	// Params: [ Num(2) Size(0x11) ]
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors);

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa84774
	// Params: [ Num(2) Size(0x8) ]
	float GetItemScore(int32_t ItemIndex);

	// Object: DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x9) ]
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, uint8_t QueryStatus);
};

// Object: Class AIModule.EnvQueryItemType
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryItemType : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType
{
};

// Object: Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase
{
};

// Object: Class AIModule.EnvQueryItemType_Actor
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase
{
};

// Object: Class AIModule.EnvQueryItemType_Direction
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase
{
};

// Object: Class AIModule.EnvQueryItemType_Point
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase
{
};

// Object: Class AIModule.EnvQueryManager
// Size: 0x148 (Inherited: 0x40)
struct UEnvQueryManager : UAISubsystem
{
	uint8_t Pad_0x40[0x70]; // 0x40(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xB0(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xC0(0x10)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x54]; // 0xE0(0x54)
	float MaxAllowedTestingTime; // 0x134(0x4)
	bool bTestQueriesUsingBreadth; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	int32_t QueryCountWarningThreshold; // 0x13C(0x4)
	double QueryCountWarningInterval; // 0x140(0x8)


	// Object: Function AIModule.EnvQueryManager.RunEQSQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa85920
	// Params: [ Num(6) Size(0x30) ]
	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, uint8_t RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass);
};

// Object: Class AIModule.EnvQueryOption
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryOption : UObject
{
	struct UEnvQueryGenerator* Generator; // 0x28(0x8)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x30(0x10)
};

// Object: Class AIModule.EnvQueryTest_Distance
// Size: 0x200 (Inherited: 0x1F8)
struct UEnvQueryTest_Distance : UEnvQueryTest
{
	uint8_t TestMode; // 0x1F1(0x1)
	struct UEnvQueryContext* DistanceTo; // 0x1F8(0x8)
};

// Object: Class AIModule.EnvQueryTest_Dot
// Size: 0x240 (Inherited: 0x1F8)
struct UEnvQueryTest_Dot : UEnvQueryTest
{
	struct FEnvDirection LineA; // 0x1F8(0x20)
	struct FEnvDirection LineB; // 0x218(0x20)
	enum class EEnvTestDot TestMode; // 0x238(0x1)
	bool bAbsoluteValue; // 0x239(0x1)
	uint8_t Pad_0x23A[0x6]; // 0x23A(0x6)
};

// Object: Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x268 (Inherited: 0x1F8)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest
{
	struct FGameplayTagQuery TagQueryToMatch; // 0x1F8(0x48)
	bool bUpdatedToUseQuery; // 0x240(0x1)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x241(0x1)
	uint8_t Pad_0x242[0x6]; // 0x242(0x6)
	struct FGameplayTagContainer GameplayTags; // 0x248(0x20)
};

// Object: Class AIModule.EnvQueryTest_Overlap
// Size: 0x210 (Inherited: 0x1F8)
struct UEnvQueryTest_Overlap : UEnvQueryTest
{
	struct FEnvOverlapData OverlapData; // 0x1F4(0x1C)
};

// Object: Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x2B0 (Inherited: 0x278)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding
{
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x278(0x38)
};

// Object: Class AIModule.EnvQueryTest_Project
// Size: 0x228 (Inherited: 0x1F8)
struct UEnvQueryTest_Project : UEnvQueryTest
{
	struct FEnvTraceData ProjectionData; // 0x1F8(0x30)
};

// Object: Class AIModule.EnvQueryTest_Random
// Size: 0x1F8 (Inherited: 0x1F8)
struct UEnvQueryTest_Random : UEnvQueryTest
{
};

// Object: Class AIModule.EnvQueryTest_Volume
// Size: 0x210 (Inherited: 0x1F8)
struct UEnvQueryTest_Volume : UEnvQueryTest
{
	struct UEnvQueryContext* VolumeContext; // 0x1F8(0x8)
	struct AVolume* VolumeClass; // 0x200(0x8)
	uint8_t bDoComplexVolumeTest : 1; // 0x208(0x1), Mask(0x1)
	uint8_t BitPad_0x208_1 : 7; // 0x208(0x1)
	uint8_t Pad_0x209[0x7]; // 0x209(0x7)
};

// Object: Class AIModule.EnvQueryTypes
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryTypes : UObject
{
};

// Object: Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct IEQSQueryResultSourceInterface : IInterface
{
};

// Object: Class AIModule.EQSRenderingComponent
// Size: 0x630 (Inherited: 0x5F0)
struct UEQSRenderingComponent : UPrimitiveComponent
{
	uint8_t Pad_0x5F0[0x40]; // 0x5F0(0x40)
};

// Object: Class AIModule.EQSTestingPawn
// Size: 0x620 (Inherited: 0x590)
struct AEQSTestingPawn : ACharacter
{
	struct UEnvQuery* QueryTemplate; // 0x590(0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x598(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x5A8(0x10)
	float TimeLimitPerStep; // 0x5B8(0x4)
	int32_t StepToDebugDraw; // 0x5BC(0x4)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x5C0(0x1)
	uint8_t bDrawLabels : 1; // 0x5C1(0x1), Mask(0x1)
	uint8_t bDrawFailedItems : 1; // 0x5C1(0x1), Mask(0x2)
	uint8_t bReRunQueryOnlyOnFinishedMove : 1; // 0x5C1(0x1), Mask(0x4)
	uint8_t bShouldBeVisibleInGame : 1; // 0x5C1(0x1), Mask(0x8)
	uint8_t bTickDuringGame : 1; // 0x5C1(0x1), Mask(0x10)
	uint8_t BitPad_0x5C1_5 : 3; // 0x5C1(0x1)
	uint8_t QueryingMode; // 0x5C2(0x1)
	uint8_t Pad_0x5C3[0x5]; // 0x5C3(0x5)
	struct FNavAgentProperties NavAgentProperties; // 0x5C8(0x30)
	uint8_t Pad_0x5F8[0x28]; // 0x5F8(0x28)
};

// Object: Class AIModule.GenericTeamAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct IGenericTeamAgentInterface : IInterface
{
};

// Object: Class AIModule.GridPathAIController
// Size: 0x400 (Inherited: 0x400)
struct AGridPathAIController : AAIController
{
};

// Object: Class AIModule.GridPathFollowingComponent
// Size: 0x2B8 (Inherited: 0x288)
struct UGridPathFollowingComponent : UPathFollowingComponent
{
	struct UNavLocalGridManager* GridManager; // 0x288(0x8)
	uint8_t Pad_0x290[0x28]; // 0x290(0x28)
};

// Object: Class AIModule.NavFilter_AIControllerDefault
// Size: 0x48 (Inherited: 0x48)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter
{
};

// Object: Class AIModule.NavLocalGridManager
// Size: 0x58 (Inherited: 0x28)
struct UNavLocalGridManager : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)


	// Object: Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa8d614
	// Params: [ Num(3) Size(0xD) ]
	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize);

	// Object: Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa8cd08
	// Params: [ Num(3) Size(0xD) ]
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);

	// Object: Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa8cb64
	// Params: [ Num(5) Size(0x31) ]
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints);

	// Object: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xaa8d290
	// Params: [ Num(6) Size(0x28) ]
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids);

	// Object: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa8d45c
	// Params: [ Num(6) Size(0x24) ]
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids);

	// Object: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa8ce24
	// Params: [ Num(8) Size(0x2C) ]
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids);

	// Object: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaa8d058
	// Params: [ Num(8) Size(0x3C) ]
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids);
};

// Object: Class AIModule.PathFollowingManager
// Size: 0x28 (Inherited: 0x28)
struct UPathFollowingManager : UObject
{
};

// Object: Class AIModule.PawnAction
// Size: 0x98 (Inherited: 0x28)
struct UPawnAction : UObject
{
	struct UPawnAction* ChildAction; // 0x28(0x8)
	struct UPawnAction* ParentAction; // 0x30(0x8)
	struct UPawnActionsComponent* OwnerComponent; // 0x38(0x8)
	struct UObject* Instigator; // 0x40(0x8)
	struct UBrainComponent* BrainComp; // 0x48(0x8)
	uint8_t Pad_0x50[0x30]; // 0x50(0x30)
	uint8_t bAllowNewSameClassInstance : 1; // 0x80(0x1), Mask(0x1)
	uint8_t bReplaceActiveSameClassInstance : 1; // 0x80(0x1), Mask(0x2)
	uint8_t bShouldPauseMovement : 1; // 0x80(0x1), Mask(0x4)
	uint8_t bAlwaysNotifyOnFinished : 1; // 0x80(0x1), Mask(0x8)
	uint8_t BitPad_0x80_4 : 4; // 0x80(0x1)
	uint8_t Pad_0x81[0x17]; // 0x81(0x17)


	// Object: Function AIModule.PawnAction.GetActionPriority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaa8e71c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetActionPriority();

	// Object: Function AIModule.PawnAction.Finish
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0xaa8e588
	// Params: [ Num(1) Size(0x1) ]
	void Finish(uint8_t WithResult);

	// Object: Function AIModule.PawnAction.CreateActionInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa8e638
	// Params: [ Num(3) Size(0x18) ]
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass);
};

// Object: Class AIModule.PawnAction_BlueprintBase
// Size: 0x98 (Inherited: 0x98)
struct UPawnAction_BlueprintBase : UPawnAction
{

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionTick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionStart
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ActionStart(struct APawn* ControlledPawn);

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionResume
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ActionResume(struct APawn* ControlledPawn);

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionPause
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void ActionPause(struct APawn* ControlledPawn);

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionFinished
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x9) ]
	void ActionFinished(struct APawn* ControlledPawn, uint8_t WithResult);
};

// Object: Class AIModule.PawnAction_Move
// Size: 0xE8 (Inherited: 0x98)
struct UPawnAction_Move : UPawnAction
{
	struct AActor* GoalActor; // 0x98(0x8)
	struct FVector GoalLocation; // 0xA0(0xC)
	float AcceptableRadius; // 0xAC(0x4)
	struct UNavigationQueryFilter* FilterClass; // 0xB0(0x8)
	uint8_t bAllowStrafe : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t bFinishOnOverlap : 1; // 0xB8(0x1), Mask(0x2)
	uint8_t bUsePathfinding : 1; // 0xB8(0x1), Mask(0x4)
	uint8_t bAllowPartialPath : 1; // 0xB8(0x1), Mask(0x8)
	uint8_t bProjectGoalToNavigation : 1; // 0xB8(0x1), Mask(0x10)
	uint8_t bUpdatePathToGoal : 1; // 0xB8(0x1), Mask(0x20)
	uint8_t bAbortChildActionOnPathChange : 1; // 0xB8(0x1), Mask(0x40)
	uint8_t BitPad_0xB8_7 : 1; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x2F]; // 0xB9(0x2F)
};

// Object: Class AIModule.PawnAction_Repeat
// Size: 0xB8 (Inherited: 0x98)
struct UPawnAction_Repeat : UPawnAction
{
	struct UPawnAction* ActionToRepeat; // 0x98(0x8)
	struct UPawnAction* RecentActionCopy; // 0xA0(0x8)
	uint8_t ChildFailureHandlingMode; // 0xA8(0x1)
	uint8_t Pad_0xA9[0xF]; // 0xA9(0xF)
};

// Object: Class AIModule.PawnAction_Sequence
// Size: 0xC0 (Inherited: 0x98)
struct UPawnAction_Sequence : UPawnAction
{
	struct TArray<struct UPawnAction*> ActionSequence; // 0x98(0x10)
	uint8_t ChildFailureHandlingMode; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct UPawnAction* RecentActionCopy; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
};

// Object: Class AIModule.PawnAction_Wait
// Size: 0xA8 (Inherited: 0x98)
struct UPawnAction_Wait : UPawnAction
{
	float TimeToWait; // 0x94(0x4)
	uint8_t Pad_0x9C[0xC]; // 0x9C(0xC)
};

// Object: Class AIModule.PawnActionsComponent
// Size: 0x110 (Inherited: 0xD8)
struct UPawnActionsComponent : UActorComponent
{
	struct APawn* ControlledPawn; // 0xD8(0x8)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xE0(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xF0(0x10)
	struct UPawnAction* CurrentAction; // 0x100(0x8)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)


	// Object: Function AIModule.PawnActionsComponent.K2_PushAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa8f8f8
	// Params: [ Num(4) Size(0x19) ]
	bool K2_PushAction(struct UPawnAction* NewAction, uint8_t Priority, struct UObject* Instigator);

	// Object: Function AIModule.PawnActionsComponent.K2_PerformAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaa8fa2c
	// Params: [ Num(4) Size(0x12) ]
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, uint8_t Priority);

	// Object: Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa8f798
	// Params: [ Num(2) Size(0x9) ]
	uint8_t K2_ForceAbortAction(struct UPawnAction* ActionToAbort);

	// Object: Function AIModule.PawnActionsComponent.K2_AbortAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xaa8f848
	// Params: [ Num(2) Size(0x9) ]
	uint8_t K2_AbortAction(struct UPawnAction* ActionToAbort);
};

// Object: Class AIModule.PawnSensingComponent
// Size: 0x120 (Inherited: 0xD8)
struct UPawnSensingComponent : UActorComponent
{
	float HearingThreshold; // 0xD8(0x4)
	float LOSHearingThreshold; // 0xDC(0x4)
	float SightRadius; // 0xE0(0x4)
	float SensingInterval; // 0xE4(0x4)
	float HearingMaxSoundAge; // 0xE8(0x4)
	uint8_t bEnableSensingUpdates : 1; // 0xEC(0x1), Mask(0x1)
	uint8_t bOnlySensePlayers : 1; // 0xEC(0x1), Mask(0x2)
	uint8_t bSeePawns : 1; // 0xEC(0x1), Mask(0x4)
	uint8_t bHearNoises : 1; // 0xEC(0x1), Mask(0x8)
	uint8_t BitPad_0xEC_4 : 4; // 0xEC(0x1)
	uint8_t Pad_0xED[0xB]; // 0xED(0xB)
	struct FMulticastInlineDelegate OnSeePawn; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnHearNoise; // 0x108(0x10)
	float PeripheralVisionAngle; // 0x118(0x4)
	float PeripheralVisionCosine; // 0x11C(0x4)


	// Object: Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xaa90084
	// Params: [ Num(1) Size(0x1) ]
	void SetSensingUpdatesEnabled(bool bEnabled);

	// Object: Function AIModule.PawnSensingComponent.SetSensingInterval
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xaa9013c
	// Params: [ Num(1) Size(0x4) ]
	void SetSensingInterval(float NewSensingInterval);

	// Object: Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xaa8ffd4
	// Params: [ Num(1) Size(0x4) ]
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);

	// Object: DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn);

	// Object: DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x18) ]
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume);

	// Object: Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa8ff9c
	// Params: [ Num(1) Size(0x4) ]
	float GetPeripheralVisionCosine();

	// Object: Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xaa8ffb8
	// Params: [ Num(1) Size(0x4) ]
	float GetPeripheralVisionAngle();
};

// Object: Class AIModule.VisualLoggerExtension
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerExtension : UObject
{
};

} // namespace SDK
