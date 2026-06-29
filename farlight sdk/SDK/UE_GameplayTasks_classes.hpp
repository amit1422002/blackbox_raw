// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GameplayTasks.GameplayTasksComponent
// Size: 0x148 (Inherited: 0xD8)
struct UGameplayTasksComponent : UActorComponent
{
	uint8_t Pad_0xD8[0xC]; // 0xD8(0xC)
	uint8_t BitPad_0xE4_0 : 1; // 0xE4(0x1)
	uint8_t bIsNetDirty : 1; // 0xE4(0x1), Mask(0x2)
	uint8_t BitPad_0xE4_2 : 6; // 0xE4(0x1)
	uint8_t Pad_0xE5[0x3]; // 0xE5(0x3)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0xE8(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0xF8(0x10)
	uint8_t Pad_0x108[0x10]; // 0x108(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks; // 0x118(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks; // 0x128(0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x138(0x10)


	// Object: Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// Flags: [Final|Native|Public]
	// Offset: 0xa86626c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SimulatedTasks();

	// Object: Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa865ffc
	// Params: [ Num(6) Size(0x41) ]
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, uint8_t Priority, struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources);
};

// Object: Class GameplayTasks.GameplayTask
// Size: 0x60 (Inherited: 0x28)
struct UGameplayTask : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FName InstanceName; // 0x30(0x8)
	uint8_t Pad_0x38[0x2]; // 0x38(0x2)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x1D]; // 0x3B(0x1D)
	struct UGameplayTask* ChildTask; // 0x58(0x8)


	// Object: Function GameplayTasks.GameplayTask.ReadyForActivation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa8642fc
	// Params: [ Num(0) Size(0x0) ]
	void ReadyForActivation();

	// Object: DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void GenericGameplayTaskDelegate__DelegateSignature();

	// Object: Function GameplayTasks.GameplayTask.EndTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa8642e8
	// Params: [ Num(0) Size(0x0) ]
	void EndTask();
};

// Object: Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x60 (Inherited: 0x60)
struct UGameplayTask_ClaimResource : UGameplayTask
{

	// Object: Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa864658
	// Params: [ Num(5) Size(0x38) ]
	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, uint8_t Priority, struct FName TaskInstanceName);

	// Object: Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa864824
	// Params: [ Num(5) Size(0x30) ]
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct UGameplayTaskResource* ResourceClass, uint8_t Priority, struct FName TaskInstanceName);
};

// Object: Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xA0 (Inherited: 0x60)
struct UGameplayTask_SpawnActor : UGameplayTask
{
	struct FMulticastInlineDelegate Success; // 0x60(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x70(0x10)
	uint8_t Pad_0x80[0x18]; // 0x80(0x18)
	struct AActor* ClassToSpawn; // 0x98(0x8)


	// Object: Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa865018
	// Params: [ Num(6) Size(0x40) ]
	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority);

	// Object: Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa864e24
	// Params: [ Num(2) Size(0x10) ]
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor);

	// Object: Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa864f10
	// Params: [ Num(3) Size(0x11) ]
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor);
};

// Object: Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x90 (Inherited: 0x60)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask
{
	struct FMulticastInlineDelegate OnFinished; // 0x60(0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x78 (Inherited: 0x60)
struct UGameplayTask_WaitDelay : UGameplayTask
{
	struct FMulticastInlineDelegate OnFinish; // 0x60(0x10)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)


	// Object: Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8657d8
	// Params: [ Num(4) Size(0x20) ]
	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, uint8_t Priority);

	// Object: DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void TaskDelayDelegate__DelegateSignature();
};

// Object: Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IGameplayTaskOwnerInterface : IInterface
{
};

// Object: Class GameplayTasks.GameplayTaskResource
// Size: 0x30 (Inherited: 0x28)
struct UGameplayTaskResource : UObject
{
	int32_t ManualResourceID; // 0x28(0x4)
	int8_t AutoResourceID; // 0x2C(0x1)
	uint8_t bManuallySetID : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

} // namespace SDK
