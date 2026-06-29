// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xE0 (Inherited: 0xD8)
struct UChaosDebugDrawComponent : UActorComponent
{
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
};

// Object: Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xE0 (Inherited: 0xD8)
struct UChaosEventListenerComponent : UActorComponent
{
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
};

// Object: Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x298 (Inherited: 0xE0)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent
{
	uint8_t Pad_0xE0[0x110]; // 0xE0(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1F0(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x240(0x50)
	uint8_t Pad_0x290[0x8]; // 0x290(0x8)
};

// Object: Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct IChaosNotifyHandlerInterface : IInterface
{
};

// Object: Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xa924b50
	// Params: [ Num(2) Size(0xF8) ]
	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};

// Object: Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject
{
};

// Object: Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x368 (Inherited: 0x2E0)
struct AChaosSolverActor : AActor
{
	float TimeStepMultiplier; // 0x2E0(0x4)
	int32_t CollisionIterations; // 0x2E4(0x4)
	int32_t PushOutIterations; // 0x2E8(0x4)
	int32_t PushOutPairIterations; // 0x2EC(0x4)
	float ClusterConnectionFactor; // 0x2F0(0x4)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2F4(0x1)
	bool DoGenerateCollisionData; // 0x2F5(0x1)
	uint8_t Pad_0x2F6[0x2]; // 0x2F6(0x2)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2F8(0x10)
	bool DoGenerateBreakingData; // 0x308(0x1)
	uint8_t Pad_0x309[0x3]; // 0x309(0x3)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x30C(0x10)
	bool DoGenerateTrailingData; // 0x31C(0x1)
	uint8_t Pad_0x31D[0x3]; // 0x31D(0x3)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x320(0x10)
	bool bHasFloor; // 0x330(0x1)
	uint8_t Pad_0x331[0x3]; // 0x331(0x3)
	float FloorHeight; // 0x334(0x4)
	float MassScale; // 0x338(0x4)
	bool bGenerateContactGraph; // 0x33C(0x1)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x33D(0x3)
	struct UBillboardComponent* SpriteComponent; // 0x340(0x8)
	uint8_t Pad_0x348[0x18]; // 0x348(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x360(0x8)


	// Object: Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xa9250d4
	// Params: [ Num(1) Size(0x1) ]
	void SetSolverActive(bool bActive);

	// Object: Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa92518c
	// Params: [ Num(0) Size(0x0) ]
	void SetAsCurrentWorldSolver();
};

// Object: Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

} // namespace SDK
