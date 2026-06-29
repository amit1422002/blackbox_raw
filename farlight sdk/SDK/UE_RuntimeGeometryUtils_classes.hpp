// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class RuntimeGeometryUtils.DynamicMesh3PoolSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UDynamicMesh3PoolSubsystem : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x50]; // 0x30(0x50)
};

// Object: Class RuntimeGeometryUtils.DynamicMeshBaseActor
// Size: 0x650 (Inherited: 0x2E0)
struct ADynamicMeshBaseActor : AActor
{
	enum class EDynamicMeshActorSourceType SourceType; // 0x2E0(0x1)
	enum class EDynamicMeshActorNormalsMode NormalsMode; // 0x2E1(0x1)
	uint8_t Pad_0x2E2[0x6]; // 0x2E2(0x6)
	struct UMaterialInterface* Material; // 0x2E8(0x8)
	bool bRegenerateOnTick; // 0x2F0(0x1)
	uint8_t Pad_0x2F1[0x7]; // 0x2F1(0x7)
	struct FString ImportPath; // 0x2F8(0x10)
	bool bReverseOrientation; // 0x308(0x1)
	bool bCenterPivot; // 0x309(0x1)
	uint8_t Pad_0x30A[0x2]; // 0x30A(0x2)
	float ImportScale; // 0x30C(0x4)
	enum class EDynamicMeshActorPrimitiveType PrimitiveType; // 0x310(0x1)
	uint8_t Pad_0x311[0x3]; // 0x311(0x3)
	int32_t TessellationLevel; // 0x314(0x4)
	float MinimumRadius; // 0x318(0x4)
	float BoxDepthRatio; // 0x31C(0x4)
	float VariableRadius; // 0x320(0x4)
	float PulseSpeed; // 0x324(0x4)
	uint8_t Pad_0x328[0x288]; // 0x328(0x288)
	bool bEnableSpatialQueries; // 0x5B0(0x1)
	bool bEnableInsideQueries; // 0x5B1(0x1)
	uint8_t Pad_0x5B2[0x96]; // 0x5B2(0x96)
	enum class EDynamicMeshActorCollisionMode CollisionMode; // 0x648(0x1)
	uint8_t Pad_0x649[0x7]; // 0x649(0x7)


	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.UnionWithMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c4672c
	// Params: [ Num(1) Size(0x8) ]
	void UnionWithMesh(struct ADynamicMeshBaseActor* OtherMesh);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.SubtractMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c467d4
	// Params: [ Num(1) Size(0x8) ]
	void SubtractMesh(struct ADynamicMeshBaseActor* OtherMesh);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.SolidifyMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c4659c
	// Params: [ Num(2) Size(0x8) ]
	void SolidifyMesh(int32_t VoxelResolution, float WindingThreshold);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.SimplifyMeshToTriCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c464f4
	// Params: [ Num(1) Size(0x4) ]
	void SimplifyMeshToTriCount(int32_t TargetTriangleCount);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.NearestPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5c46cc4
	// Params: [ Num(2) Size(0x18) ]
	struct FVector NearestPoint(struct FVector WorldPoint);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.IntersectWithMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c46684
	// Params: [ Num(1) Size(0x8) ]
	void IntersectWithMesh(struct ADynamicMeshBaseActor* OtherMesh);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.IntersectRay
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x5c46964
	// Params: [ Num(8) Size(0x3D) ]
	bool IntersectRay(struct FVector RayOrigin, struct FVector RayDirection, struct FVector& WorldHitPoint, float& HitDistance, int32_t& NearestTriangle, struct FVector& TriBaryCoords, float MaxDistance);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.ImportMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c46ffc
	// Params: [ Num(4) Size(0x13) ]
	bool ImportMesh(struct FString Path, bool bFlipOrientation, bool bRecomputeNormals);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.GetTriangleCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c464c0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTriangleCount();

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.DistanceToPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x5c46d78
	// Params: [ Num(5) Size(0x2C) ]
	float DistanceToPoint(struct FVector WorldPoint, struct FVector& NearestMeshWorldPoint, int32_t& NearestTriangle, struct FVector& TriBaryCoords);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.CopyFromMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c46f0c
	// Params: [ Num(2) Size(0x9) ]
	void CopyFromMesh(struct ADynamicMeshBaseActor* OtherMesh, bool bRecomputeNormals);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.ContainsPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5c46bd0
	// Params: [ Num(3) Size(0x11) ]
	bool ContainsPoint(struct FVector WorldPoint, float WindingThreshold);

	// Object: Function RuntimeGeometryUtils.DynamicMeshBaseActor.BooleanWithMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c4687c
	// Params: [ Num(2) Size(0x9) ]
	void BooleanWithMesh(struct ADynamicMeshBaseActor* OtherMesh, enum class EDynamicMeshActorBooleanOperation Operation);
};

// Object: Class RuntimeGeometryUtils.DynamicPMCActor
// Size: 0x658 (Inherited: 0x650)
struct ADynamicPMCActor : ADynamicMeshBaseActor
{
	struct UProceduralMeshComponent* MeshComponent; // 0x650(0x8)
};

// Object: Class RuntimeGeometryUtils.DynamicSDMCActor
// Size: 0x658 (Inherited: 0x650)
struct ADynamicSDMCActor : ADynamicMeshBaseActor
{
	struct USimpleDynamicMeshComponent* MeshComponent; // 0x650(0x8)
};

// Object: Class RuntimeGeometryUtils.DynamicSMCActor
// Size: 0x660 (Inherited: 0x650)
struct ADynamicSMCActor : ADynamicMeshBaseActor
{
	struct UStaticMeshComponent* MeshComponent; // 0x650(0x8)
	struct UStaticMesh* StaticMesh; // 0x658(0x8)
};

// Object: Class RuntimeGeometryUtils.SolarBaseDynamicMeshComponent
// Size: 0x920 (Inherited: 0x880)
struct USolarBaseDynamicMeshComponent : USimpleDynamicMeshComponent
{
	struct UMaterialInterface* Material; // 0x880(0x8)
	struct FName MeshTag; // 0x888(0x8)
	enum class EDynamicMeshNormalsMode NormalsMode; // 0x890(0x1)
	uint8_t CollisionType; // 0x891(0x1)
	bool bUseAsyncCooking; // 0x892(0x1)
	bool bEnableComplexCollision; // 0x893(0x1)
	bool bDeferCollisionUpdates; // 0x894(0x1)
	uint8_t Pad_0x895[0x3]; // 0x895(0x3)
	struct UBodySetup* MeshBodySetup; // 0x898(0x8)
	struct FKAggregateGeom AggGeom; // 0x8A0(0x58)
	uint8_t Pad_0x8F8[0x8]; // 0x8F8(0x8)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x900(0x10)
	uint8_t Pad_0x910[0x10]; // 0x910(0x10)


	// Object: Function RuntimeGeometryUtils.SolarBaseDynamicMeshComponent.UpdateMeshWithTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5c47b84
	// Params: [ Num(1) Size(0x8) ]
	void UpdateMeshWithTag(struct FName& NewTag);

	// Object: Function RuntimeGeometryUtils.SolarBaseDynamicMeshComponent.GetTriangleCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5c47c38
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTriangleCount();
};

// Object: Class RuntimeGeometryUtils.SolarSmokeWallDynamicMeshComponent
// Size: 0x920 (Inherited: 0x920)
struct USolarSmokeWallDynamicMeshComponent : USolarBaseDynamicMeshComponent
{
	float Thickness; // 0x914(0x4)
};

// Object: Class RuntimeGeometryUtils.SolarTrapGrenadeDynamicMeshComponent
// Size: 0x960 (Inherited: 0x920)
struct USolarTrapGrenadeDynamicMeshComponent : USolarBaseDynamicMeshComponent
{
	float TraceUpOffset; // 0x914(0x4)
	float TraceDownOffset; // 0x918(0x4)
	struct FVector BoxTessellationLevel; // 0x91C(0xC)
	struct FVector InitBoxExtends; // 0x928(0xC)
	int32_t TessellationDensity; // 0x934(0x4)
	bool EnableLineTraceOnClient; // 0x938(0x1)
	uint8_t Pad_0x945[0x1B]; // 0x945(0x1B)
};

// Object: Class RuntimeGeometryUtils.SolarWallDynamicMeshComponent
// Size: 0xA10 (Inherited: 0x920)
struct USolarWallDynamicMeshComponent : USolarBaseDynamicMeshComponent
{
	float TraceOffset; // 0x914(0x4)
	bool bNeedDrawDebugLine; // 0x918(0x1)
	bool bWave; // 0x919(0x1)
	float ZOffset; // 0x91C(0x4)
	uint8_t ForwardAxis; // 0x920(0x1)
	float TessellationDensity; // 0x924(0x4)
	struct FVector InitBoxExtends; // 0x928(0xC)
	struct FVector BoxOrigin; // 0x934(0xC)
	struct FVector BoxTessellationLevel; // 0x940(0xC)
	struct FVector MaxBoxExtend; // 0x94C(0xC)
	struct FVector BoxExtendSpeed; // 0x958(0xC)
	float StartTimeFromBeginPlay; // 0x964(0x4)
	enum class EDynamicMeshWallMoveDirection BoxMoveDirection; // 0x968(0x1)
	float ZDeltaScale; // 0x96C(0x4)
	enum class EDynamicMeshGeneratorType GeneratorType; // 0x970(0x1)
	uint8_t Pad_0x975[0x9B]; // 0x975(0x9B)
};

} // namespace SDK
