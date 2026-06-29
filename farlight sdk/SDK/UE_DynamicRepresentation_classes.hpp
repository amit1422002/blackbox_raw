// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class DynamicRepresentation.DynamicInstanceVisualizationStaticMeshComponent
// Size: 0x8E0 (Inherited: 0x8E0)
struct UDynamicInstanceVisualizationStaticMeshComponent : UStaticMeshComponent
{
};

// Object: Class DynamicRepresentation.DynamicInstanceVisualizationActor
// Size: 0x300 (Inherited: 0x2E0)
struct ADynamicInstanceVisualizationActor : AActor
{
	uint8_t Pad_0x2E0[0x8]; // 0x2E0(0x8)
	struct UDynamicRepresentationDefinition* Definition; // 0x2E8(0x8)
	struct UObject* CustomData; // 0x2F0(0x8)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x2F8(0x8)
};

// Object: Class DynamicRepresentation.DynamicInstanceVisualizationComponent
// Size: 0x610 (Inherited: 0x5F0)
struct UDynamicInstanceVisualizationComponent : UPrimitiveComponent
{
	struct UStaticMesh* StaticMesh; // 0x5F0(0x8)
	struct TArray<struct FTransform> InstanceTransforms; // 0x5F8(0x10)
	uint8_t Pad_0x608[0x8]; // 0x608(0x8)
};

// Object: Class DynamicRepresentation.PoolBase
// Size: 0x88 (Inherited: 0x28)
struct UPoolBase : UObject
{
	struct TArray<struct AActor*> AvailableActors; // 0x28(0x10)
	struct TSet<struct AActor*> InUseActors; // 0x38(0x50)
};

// Object: Class DynamicRepresentation.DynamicRepresentationActorPoolSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UDynamicRepresentationActorPoolSubsystem : UWorldSubsystem
{
	struct TMap<struct AActor*, struct UPoolBase*> ActorPools; // 0x30(0x50)
};

// Object: Class DynamicRepresentation.DynamicRepresentationDefinition
// Size: 0x58 (Inherited: 0x30)
struct UDynamicRepresentationDefinition : UPrimaryDataAsset
{
	struct FName Grid; // 0x30(0x8)
	struct AActor* Actor; // 0x38(0x8)
	struct TArray<struct UStaticMesh*> StaticMeshes; // 0x40(0x10)
	bool IsOnlyManager; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: Class DynamicRepresentation.DynamicRepresentationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDynamicRepresentationFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function DynamicRepresentation.DynamicRepresentationFunctionLibrary.DynamicRepresentationSpawnActor
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x38e0458
	// Params: [ Num(4) Size(0x41) ]
	bool DynamicRepresentationSpawnActor(struct UObject* WorldContextObject, struct UDynamicRepresentationDefinition* Definition, struct FTransform& Transform);
};

// Object: Class DynamicRepresentation.DynamicRepresentationInterface
// Size: 0x28 (Inherited: 0x28)
struct IDynamicRepresentationInterface : IInterface
{

	// Object: Function DynamicRepresentation.DynamicRepresentationInterface.StopRepresentationAnimation
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x38e07e0
	// Params: [ Num(1) Size(0x10) ]
	void StopRepresentationAnimation(struct FActorId& ActorId);

	// Object: Function DynamicRepresentation.DynamicRepresentationInterface.PlayRepresentationAnimation
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x38e08a0
	// Params: [ Num(2) Size(0x18) ]
	void PlayRepresentationAnimation(struct FActorId& ActorId, struct FName& Animation);

	// Object: Function DynamicRepresentation.DynamicRepresentationInterface.LodChanged
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x38e09ac
	// Params: [ Num(5) Size(0x28) ]
	void LodChanged(struct FActorId& ActorId, struct UDynamicRepresentationDefinition* InDefinition, enum class ESpatialLODLevel OldLOD, enum class ESpatialLODLevel NewLOD, struct UObject* InCustomData);

	// Object: Function DynamicRepresentation.DynamicRepresentationInterface.EndRelevance
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x38e0b6c
	// Params: [ Num(3) Size(0x20) ]
	void EndRelevance(struct FActorId& ActorId, struct UDynamicRepresentationDefinition* InDefinition, struct UObject* InCustomData);

	// Object: Function DynamicRepresentation.DynamicRepresentationInterface.BeginRelevance
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x38e0ca8
	// Params: [ Num(4) Size(0x28) ]
	void BeginRelevance(struct FActorId& ActorId, struct UDynamicRepresentationDefinition* InDefinition, enum class ESpatialLODLevel LOD, struct UObject* InCustomData);
};

// Object: Class DynamicRepresentation.DynamicRepresentationAnimationState
// Size: 0x28 (Inherited: 0x28)
struct IDynamicRepresentationAnimationState : IInterface
{

	// Object: Function DynamicRepresentation.DynamicRepresentationAnimationState.GetState
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x38e1968
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetState(struct FActorId& ActorId);
};

// Object: Class DynamicRepresentation.DynamicRepresentationSkeletalMeshComponentUtility
// Size: 0xDE0 (Inherited: 0xDE0)
struct UDynamicRepresentationSkeletalMeshComponentUtility : USkeletalMeshComponentBudgeted
{
};

// Object: Class DynamicRepresentation.DynamicRepresentationComponent
// Size: 0x350 (Inherited: 0x350)
struct UDynamicRepresentationComponent : USceneComponent
{
};

// Object: Class DynamicRepresentation.DynamicRepresentationSceneComponent
// Size: 0x370 (Inherited: 0x350)
struct UDynamicRepresentationSceneComponent : UDynamicRepresentationComponent
{
	struct UDynamicRepresentationDefinition* Definition; // 0x348(0x8)
	bool UseActorLocation; // 0x350(0x1)
	uint8_t Pad_0x359[0x17]; // 0x359(0x17)


	// Object: Function DynamicRepresentation.DynamicRepresentationSceneComponent.StopAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38e2090
	// Params: [ Num(0) Size(0x0) ]
	void StopAnimation();

	// Object: Function DynamicRepresentation.DynamicRepresentationSceneComponent.PlayAnimation
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x38e20a4
	// Params: [ Num(1) Size(0x8) ]
	void PlayAnimation(struct FName& Animation);

	// Object: Function DynamicRepresentation.DynamicRepresentationSceneComponent.GetVisualizationActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x38e2158
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetVisualizationActor();
};

// Object: Class DynamicRepresentation.DynamicRepresentationSettings
// Size: 0x50 (Inherited: 0x38)
struct UDynamicRepresentationSettings : UDeveloperSettings
{
	struct TArray<struct FSpatialHashGridDesc> Grids; // 0x38(0x10)
	int32_t MaxSpawnPerTick; // 0x48(0x4)
	int32_t MaxDespawnPerTick; // 0x4C(0x4)
};

// Object: Class DynamicRepresentation.DynamicRepresentationSubsystem
// Size: 0x200 (Inherited: 0x40)
struct UDynamicRepresentationSubsystem : UTickableWorldSubsystem
{
	uint8_t Pad_0x40[0x130]; // 0x40(0x130)
	struct AVisualizationSceneHelperActor* VisualizationSceneHelperActor; // 0x170(0x8)
	uint8_t Pad_0x178[0x88]; // 0x178(0x88)
};

// Object: Class DynamicRepresentation.SimpleAssetsStreamingDataAsset
// Size: 0x40 (Inherited: 0x30)
struct USimpleAssetsStreamingDataAsset : UPrimaryDataAsset
{
	struct TArray<struct TSoftObjectPtr<UObject>> Assets; // 0x30(0x10)
};

// Object: Class DynamicRepresentation.SimpleAssetsStreamingSubsystemInterface
// Size: 0x28 (Inherited: 0x28)
struct ISimpleAssetsStreamingSubsystemInterface : IInterface
{
};

// Object: Class DynamicRepresentation.SimpleAssetsStreamingSubsystem
// Size: 0x70 (Inherited: 0x40)
struct USimpleAssetsStreamingSubsystem : UTickableWorldSubsystem
{
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	struct TArray<struct UObject*> AssetsHolder; // 0x50(0x10)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
};

// Object: Class DynamicRepresentation.VisualizationSceneHelperActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct AVisualizationSceneHelperActor : AActor
{
	struct UDynamicInstanceVisualizationComponent* VisualizationComponent; // 0x2E0(0x8)
};

} // namespace SDK
