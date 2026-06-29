// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0xAD0 (Inherited: 0xAA0)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0xAA0(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0xAB0(0x10)
	struct FGuid GenerationGuid; // 0xAC0(0x10)
};

// Object: Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary
{

	// Object: Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9666bb8
	// Params: [ Num(5) Size(0x24) ]
	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius);

	// Object: Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9666a88
	// Params: [ Num(4) Size(0x30) ]
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box);
};

// Object: Class Foliage.FoliageType
// Size: 0x3A8 (Inherited: 0x28)
struct UFoliageType : UObject
{
	struct FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x4)
	float DensityAdjustmentFactor; // 0x3C(0x4)
	float Radius; // 0x40(0x4)
	bool bSingleInstanceModeOverrideRadius; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	float SingleInstanceModeRadius; // 0x48(0x4)
	enum class EFoliageScaling Scaling; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	struct FFloatInterval ScaleX; // 0x50(0x8)
	struct FFloatInterval ScaleY; // 0x58(0x8)
	struct FFloatInterval ScaleZ; // 0x60(0x8)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68(0x30)
	uint8_t VertexColorMask; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	float VertexColorMaskThreshold; // 0x9C(0x4)
	uint8_t VertexColorMaskInvert : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	struct FFloatInterval ZOffset; // 0xA4(0x8)
	uint8_t AlignToNormal : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t BitPad_0xAC_1 : 7; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	float AlignMaxAngle; // 0xB0(0x4)
	uint8_t RandomYaw : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	float RandomPitchAngle; // 0xB8(0x4)
	struct FFloatInterval GroundSlopeAngle; // 0xBC(0x8)
	struct FFloatInterval Height; // 0xC4(0x8)
	bool UseCustomLODScale; // 0xCC(0x1)
	uint8_t Pad_0xCD[0x3]; // 0xCD(0x3)
	struct TArray<struct FName> LandscapeLayers; // 0xD0(0x10)
	float MinimumLayerWeight; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xE8(0x10)
	float MinimumExclusionLayerWeight; // 0xF8(0x4)
	struct FName LandscapeLayer; // 0xFC(0x8)
	uint8_t CollisionWithWorld : 1; // 0x104(0x1), Mask(0x1)
	uint8_t BitPad_0x104_1 : 7; // 0x104(0x1)
	uint8_t Pad_0x105[0x3]; // 0x105(0x3)
	struct FVector CollisionScale; // 0x108(0xC)
	struct FBoxSphereBounds MeshBounds; // 0x114(0x1C)
	struct FVector LowBoundOriginRadius; // 0x130(0xC)
	uint8_t Mobility; // 0x13C(0x1)
	uint8_t Pad_0x13D[0x3]; // 0x13D(0x3)
	struct FInt32Interval CullDistance; // 0x140(0x8)
	int32_t ComponentCullDistance; // 0x148(0x4)
	int32_t ZCullDistance; // 0x14C(0x4)
	uint8_t bEnableStaticLighting : 1; // 0x150(0x1), Mask(0x1)
	uint8_t CastShadow : 1; // 0x150(0x1), Mask(0x2)
	uint8_t CastFarShadow : 1; // 0x150(0x1), Mask(0x4)
	uint8_t bAffectDynamicIndirectLighting : 1; // 0x150(0x1), Mask(0x8)
	uint8_t bAffectDistanceFieldLighting : 1; // 0x150(0x1), Mask(0x10)
	uint8_t bCastDynamicShadow : 1; // 0x150(0x1), Mask(0x20)
	uint8_t bCastStaticShadow : 1; // 0x150(0x1), Mask(0x40)
	uint8_t bCastShadowAsTwoSided : 1; // 0x150(0x1), Mask(0x80)
	uint8_t bReceivesDecals : 1; // 0x151(0x1), Mask(0x1)
	uint8_t bOverrideLightMapRes : 1; // 0x151(0x1), Mask(0x2)
	uint8_t BitPad_0x151_2 : 6; // 0x151(0x1)
	uint8_t Pad_0x152[0x2]; // 0x152(0x2)
	int32_t OverriddenLightMapRes; // 0x154(0x4)
	uint8_t bOverrideLightMapRes_HQ : 1; // 0x158(0x1), Mask(0x1)
	uint8_t BitPad_0x158_1 : 7; // 0x158(0x1)
	uint8_t Pad_0x159[0x3]; // 0x159(0x3)
	int32_t OverriddenLightMapRes_HQ; // 0x15C(0x4)
	uint8_t bMinimizeLightmapRes : 1; // 0x160(0x1), Mask(0x1)
	uint8_t bForceGenLightmap : 1; // 0x160(0x1), Mask(0x2)
	uint8_t bForceNoLightmap : 1; // 0x160(0x1), Mask(0x4)
	uint8_t BitPad_0x160_3 : 5; // 0x160(0x1)
	enum class ELightmapType LightmapType; // 0x161(0x1)
	uint8_t bUseAsOccluder : 1; // 0x162(0x1), Mask(0x1)
	uint8_t BitPad_0x162_1 : 7; // 0x162(0x1)
	uint8_t Pad_0x163[0x5]; // 0x163(0x5)
	struct FBodyInstance BodyInstance; // 0x168(0x130)
	uint8_t CustomNavigableGeometry; // 0x298(0x1)
	struct FLightingChannels LightingChannels; // 0x299(0x1)
	uint8_t bRenderCustomDepth : 1; // 0x29A(0x1), Mask(0x1)
	uint8_t BitPad_0x29A_1 : 7; // 0x29A(0x1)
	uint8_t Pad_0x29B[0x1]; // 0x29B(0x1)
	int32_t CustomDepthStencilValue; // 0x29C(0x4)
	int32_t TranslucencySortPriority; // 0x2A0(0x4)
	uint8_t Pad_0x2A4[0x4]; // 0x2A4(0x4)
	struct TArray<struct FSelectInstanceInfo> SelectInstancesData; // 0x2A8(0x10)
	uint8_t Pad_0x2B8[0x8]; // 0x2B8(0x8)
	float CollisionRadius; // 0x2C0(0x4)
	float ShadeRadius; // 0x2C4(0x4)
	int32_t NumSteps; // 0x2C8(0x4)
	float InitialSeedDensity; // 0x2CC(0x4)
	float AverageSpreadDistance; // 0x2D0(0x4)
	float SpreadVariance; // 0x2D4(0x4)
	int32_t SeedsPerStep; // 0x2D8(0x4)
	int32_t DistributionSeed; // 0x2DC(0x4)
	float MaxInitialSeedOffset; // 0x2E0(0x4)
	bool bCanGrowInShade; // 0x2E4(0x1)
	bool bSpawnsInShade; // 0x2E5(0x1)
	uint8_t Pad_0x2E6[0x2]; // 0x2E6(0x2)
	float MaxInitialAge; // 0x2E8(0x4)
	float MaxAge; // 0x2EC(0x4)
	float OverlapPriority; // 0x2F0(0x4)
	struct FFloatInterval ProceduralScale; // 0x2F4(0x8)
	uint8_t Pad_0x2FC[0x4]; // 0x2FC(0x4)
	struct FRuntimeFloatCurve ScaleCurve; // 0x300(0x88)
	int32_t ChangeCount; // 0x388(0x4)
	uint8_t ReapplyDensity : 1; // 0x38C(0x1), Mask(0x1)
	uint8_t ReapplyRadius : 1; // 0x38C(0x1), Mask(0x2)
	uint8_t ReapplyAlignToNormal : 1; // 0x38C(0x1), Mask(0x4)
	uint8_t ReapplyRandomYaw : 1; // 0x38C(0x1), Mask(0x8)
	uint8_t ReapplyScaling : 1; // 0x38C(0x1), Mask(0x10)
	uint8_t ReapplyScaleX : 1; // 0x38C(0x1), Mask(0x20)
	uint8_t ReapplyScaleY : 1; // 0x38C(0x1), Mask(0x40)
	uint8_t ReapplyScaleZ : 1; // 0x38C(0x1), Mask(0x80)
	uint8_t ReapplyRandomPitchAngle : 1; // 0x38D(0x1), Mask(0x1)
	uint8_t ReapplyGroundSlope : 1; // 0x38D(0x1), Mask(0x2)
	uint8_t ReapplyHeight : 1; // 0x38D(0x1), Mask(0x4)
	uint8_t ReapplyLandscapeLayers : 1; // 0x38D(0x1), Mask(0x8)
	uint8_t ReapplyZOffset : 1; // 0x38D(0x1), Mask(0x10)
	uint8_t ReapplyCollisionWithWorld : 1; // 0x38D(0x1), Mask(0x20)
	uint8_t ReapplyVertexColorMask : 1; // 0x38D(0x1), Mask(0x40)
	uint8_t bEnableDensityScaling : 1; // 0x38D(0x1), Mask(0x80)
	uint8_t bEnableGlobalScreenSizeControl : 1; // 0x38E(0x1), Mask(0x1)
	uint8_t BitPad_0x38E_1 : 7; // 0x38E(0x1)
	uint8_t Pad_0x38F[0x1]; // 0x38F(0x1)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x390(0x10)
	int32_t VirtualTextureCullMips; // 0x3A0(0x4)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3A4(0x1)
	uint8_t Pad_0x3A5[0x3]; // 0x3A5(0x3)


	// Object: Function Foliage.FoliageType.SetCullDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9667324
	// Params: [ Num(2) Size(0x8) ]
	void SetCullDistance(float MinCullDistance, float MaxCullDistance);
};

// Object: Class Foliage.FoliageType_Actor
// Size: 0x3B8 (Inherited: 0x3A8)
struct UFoliageType_Actor : UFoliageType
{
	struct AActor* ActorClass; // 0x3A8(0x8)
	bool bShouldAttachToBaseComponent; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x7]; // 0x3B1(0x7)
};

// Object: Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x3D8 (Inherited: 0x3A8)
struct UFoliageType_InstancedStaticMesh : UFoliageType
{
	struct UStaticMesh* Mesh; // 0x3A8(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x3B0(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3C0(0x8)
	struct UStaticMesh* StaticMeshStaticLightingProxy; // 0x3C8(0x8)
	bool bUseLightmapPerPixelPerInstance; // 0x3D0(0x1)
	bool bShadowMapBakeOnly; // 0x3D1(0x1)
	uint8_t Pad_0x3D2[0x2]; // 0x3D2(0x2)
	int32_t OverrideCVarMinVertsToSplitNode; // 0x3D4(0x4)
};

// Object: Class Foliage.InstancedFoliageActor
// Size: 0x330 (Inherited: 0x2E0)
struct AInstancedFoliageActor : AActor
{
	uint8_t Pad_0x2E0[0x50]; // 0x2E0(0x50)
};

// Object: Class Foliage.InteractiveFoliageActor
// Size: 0x350 (Inherited: 0x2F0)
struct AInteractiveFoliageActor : AStaticMeshActor
{
	struct UCapsuleComponent* CapsuleComponent; // 0x2F0(0x8)
	struct FVector TouchingActorEntryPosition; // 0x2F8(0xC)
	struct FVector FoliageVelocity; // 0x304(0xC)
	struct FVector FoliageForce; // 0x310(0xC)
	struct FVector FoliagePosition; // 0x31C(0xC)
	float FoliageDamageImpulseScale; // 0x328(0x4)
	float FoliageTouchImpulseScale; // 0x32C(0x4)
	float FoliageStiffness; // 0x330(0x4)
	float FoliageStiffnessQuadratic; // 0x334(0x4)
	float FoliageDamping; // 0x338(0x4)
	float MaxDamageImpulse; // 0x33C(0x4)
	float MaxTouchImpulse; // 0x340(0x4)
	float MaxForce; // 0x344(0x4)
	float Mass; // 0x348(0x4)
	uint8_t Pad_0x34C[0x4]; // 0x34C(0x4)


	// Object: Function Foliage.InteractiveFoliageActor.CapsuleTouched
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x9668000
	// Params: [ Num(6) Size(0xA8) ]
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo);
};

// Object: Class Foliage.InteractiveFoliageComponent
// Size: 0x8F0 (Inherited: 0x8E0)
struct UInteractiveFoliageComponent : UStaticMeshComponent
{
	uint8_t Pad_0x8E0[0x10]; // 0x8E0(0x10)
};

// Object: Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x320 (Inherited: 0x318)
struct AProceduralFoliageBlockingVolume : AVolume
{
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x318(0x8)
};

// Object: Class Foliage.ProceduralFoliageComponent
// Size: 0x100 (Inherited: 0xD8)
struct UProceduralFoliageComponent : UActorComponent
{
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xD8(0x8)
	float TileOverlap; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct AVolume* SpawningVolume; // 0xE8(0x8)
	struct FGuid ProceduralGuid; // 0xF0(0x10)
};

// Object: Class Foliage.ProceduralFoliageSpawner
// Size: 0x78 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject
{
	int32_t RandomSeed; // 0x28(0x4)
	float TileSize; // 0x2C(0x4)
	int32_t NumUniqueTiles; // 0x30(0x4)
	float MinimumQuadTreeSize; // 0x34(0x4)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)


	// Object: Function Foliage.ProceduralFoliageSpawner.Simulate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9668cbc
	// Params: [ Num(1) Size(0x4) ]
	void Simulate(int32_t NumSteps);
};

// Object: Class Foliage.ProceduralFoliageTile
// Size: 0x168 (Inherited: 0x28)
struct UProceduralFoliageTile : UObject
{
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x8)
	uint8_t Pad_0x30[0xA0]; // 0x30(0xA0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x88]; // 0xE0(0x88)
};

// Object: Class Foliage.ProceduralFoliageVolume
// Size: 0x320 (Inherited: 0x318)
struct AProceduralFoliageVolume : AVolume
{
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x318(0x8)
};

} // namespace SDK
