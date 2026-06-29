// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class CableComponent.CableActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct ACableActor : AActor
{
	struct UCableComponent* CableComponent; // 0x2E0(0x8)
};

// Object: Class CableComponent.CableComponent
// Size: 0x790 (Inherited: 0x700)
struct UCableComponent : UMeshComponent
{
	bool bAttachStart; // 0x6F9(0x1)
	bool bAttachEnd; // 0x6FA(0x1)
	struct FComponentReference AttachEndTo; // 0x700(0x28)
	struct FName AttachEndToSocketName; // 0x728(0x8)
	struct FVector EndLocation; // 0x730(0xC)
	float CableLength; // 0x73C(0x4)
	int32_t NumSegments; // 0x740(0x4)
	float SubstepTime; // 0x744(0x4)
	int32_t SolverIterations; // 0x748(0x4)
	bool bEnableStiffness; // 0x74C(0x1)
	bool bUseSubstepping; // 0x74D(0x1)
	bool bSkipCableUpdateWhenNotVisible; // 0x74E(0x1)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x74F(0x1)
	bool bEnableCollision; // 0x750(0x1)
	uint8_t Pad_0x753[0x1]; // 0x753(0x1)
	float CollisionFriction; // 0x754(0x4)
	struct FVector CableForce; // 0x758(0xC)
	float CableGravityScale; // 0x764(0x4)
	float CableWidth; // 0x768(0x4)
	int32_t NumSides; // 0x76C(0x4)
	float TileMaterial; // 0x770(0x4)
	uint8_t Pad_0x774[0x1C]; // 0x774(0x1C)


	// Object: Function CableComponent.CableComponent.SetAttachEndToComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f43dbc
	// Params: [ Num(2) Size(0x10) ]
	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName);

	// Object: Function CableComponent.CableComponent.SetAttachEndTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f43c98
	// Params: [ Num(3) Size(0x18) ]
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName);

	// Object: Function CableComponent.CableComponent.GetCableParticleLocations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f43b70
	// Params: [ Num(1) Size(0x10) ]
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations);

	// Object: Function CableComponent.CableComponent.GetAttachedComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f43c30
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetAttachedComponent();

	// Object: Function CableComponent.CableComponent.GetAttachedActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f43c64
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetAttachedActor();
};

} // namespace SDK
