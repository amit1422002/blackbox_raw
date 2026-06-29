// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class CascadeExtensionPlugin.AbstractParticleModule
// Size: 0x60 (Inherited: 0x30)
struct UAbstractParticleModule : UParticleModule
{
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x30(0x20)
	int32_t StartDelay; // 0x50(0x4)
	int32_t MaxDuration; // 0x54(0x4)
	int32_t LoopAfter; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: Class CascadeExtensionPlugin.ForcePointDataProvider
// Size: 0x28 (Inherited: 0x28)
struct IForcePointDataProvider : IInterface
{

	// Object: Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x37d0904
	// Params: [ Num(1) Size(0x20) ]
	struct FForcePoints GetForcePoints();
};

// Object: Class CascadeExtensionPlugin.MeshDataProvider
// Size: 0x28 (Inherited: 0x28)
struct IMeshDataProvider : IInterface
{

	// Object: Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x37d16a4
	// Params: [ Num(1) Size(0x20) ]
	struct FMeshTriangleData GetMeshTriangleData();

	// Object: Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x37d1668
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDataRevision();
};

// Object: Class CascadeExtensionPlugin.ParticleDataProvider
// Size: 0x28 (Inherited: 0x28)
struct IParticleDataProvider : IInterface
{

	// Object: Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x37d28b0
	// Params: [ Num(2) Size(0x88) ]
	struct FParticleProperties UpdateParticle(struct FParticleProperties currentParticleProperties);

	// Object: Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x37d298c
	// Params: [ Num(2) Size(0x88) ]
	struct FParticleProperties SpawnParticle(struct FParticleProperties currentParticleProperties);
};

// Object: Class CascadeExtensionPlugin.ParticleDecalComponent
// Size: 0x3B0 (Inherited: 0x390)
struct UParticleDecalComponent : UDecalComponent
{
	int32_t ModuleID; // 0x390(0x4)
	float TimeLeftUntilDestruction; // 0x394(0x4)
	struct FVector BaseScale; // 0x398(0xC)
	uint8_t Pad_0x3A4[0xC]; // 0x3A4(0xC)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleColorTexture
// Size: 0xB0 (Inherited: 0x60)
struct UParticleModuleColorTexture : UAbstractParticleModule
{
	struct UTexture2D* ColorIndexTexture; // 0x60(0x8)
	bool UpdateWithTick; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	struct FBox MapBounds; // 0x6C(0x1C)
	uint8_t ParticleAxisToTextureX; // 0x88(0x1)
	uint8_t ParticleAxisToTextureY; // 0x89(0x1)
	uint8_t Pad_0x8A[0x2]; // 0x8A(0x2)
	float Intensity; // 0x8C(0x4)
	bool UseTextureAlpha; // 0x90(0x1)
	uint8_t Pad_0x91[0x1F]; // 0x91(0x1F)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleCustomData
// Size: 0x70 (Inherited: 0x60)
struct UParticleModuleCustomData : UAbstractParticleModule
{
	struct FName DataProviderParameterName; // 0x60(0x8)
	bool UpdatedSpawnedParticles; // 0x68(0x1)
	bool UpdatedTickedParticles; // 0x69(0x1)
	bool UseLocationFromProvider; // 0x6A(0x1)
	bool UseVelocityFromProvider; // 0x6B(0x1)
	bool UseSizeFromProvider; // 0x6C(0x1)
	bool UseColorFromProvider; // 0x6D(0x1)
	bool UseRotationFromProvider; // 0x6E(0x1)
	bool UseRotationRateFromProvider; // 0x6F(0x1)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleDecalComponent
// Size: 0x120 (Inherited: 0x60)
struct UParticleModuleDecalComponent : UAbstractParticleModule
{
	struct TArray<struct UMaterialInterface*> DecalMaterials; // 0x60(0x10)
	struct FRawDistributionVector DecalScale; // 0x70(0x48)
	bool ScaleWithParticleSize; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct FRawDistributionVector DecalRotation; // 0xC0(0x48)
	bool RotateToParticleVelocity; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	int32_t SortOrder; // 0x10C(0x4)
	bool OptimizeDecalComponentUsage; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	struct FName MaterialColorParameter; // 0x114(0x8)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleForcePoints
// Size: 0x88 (Inherited: 0x60)
struct UParticleModuleForcePoints : UAbstractParticleModule
{
	float Intensity; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct TArray<struct FVector> Points; // 0x68(0x10)
	uint8_t SeparationDistanceWeight; // 0x78(0x1)
	uint8_t Pad_0x79[0x3]; // 0x79(0x3)
	float DistanceScale; // 0x7C(0x4)
	struct FName DynamicForcePointProviderName; // 0x80(0x8)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleLocationDonut
// Size: 0x78 (Inherited: 0x60)
struct UParticleModuleLocationDonut : UAbstractParticleModule
{
	struct FVector Center; // 0x60(0xC)
	float MinRadius; // 0x6C(0x4)
	float MaxRadius; // 0x70(0x4)
	bool SurfaceOnly; // 0x74(0x1)
	bool IsFlat; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleLocationHeightmap
// Size: 0xA8 (Inherited: 0x60)
struct UParticleModuleLocationHeightmap : UAbstractParticleModule
{
	struct UTexture2D* HeightmapTexture; // 0x60(0x8)
	bool UpdateWithTick; // 0x68(0x1)
	bool SmoothUpdate; // 0x69(0x1)
	uint8_t Pad_0x6A[0x2]; // 0x6A(0x2)
	struct FBox MapBounds; // 0x6C(0x1C)
	float Intensity; // 0x88(0x4)
	uint8_t Pad_0x8C[0x1C]; // 0x8C(0x1C)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleLocationJiggle
// Size: 0xA8 (Inherited: 0x60)
struct UParticleModuleLocationJiggle : UAbstractParticleModule
{
	struct FRawDistributionVector Intensity; // 0x60(0x48)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleLocationMesh
// Size: 0x150 (Inherited: 0x60)
struct UParticleModuleLocationMesh : UAbstractParticleModule
{
	struct UStaticMesh* SurfaceMesh; // 0x60(0x8)
	struct FName DynamicMeshParameterName; // 0x68(0x8)
	struct FTransform MeshTransform; // 0x70(0x30)
	bool EqualTriangeWeight; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct FRawDistributionFloat VelocityScale; // 0xA8(0x30)
	uint8_t Pad_0xD8[0x78]; // 0xD8(0x78)


	// Object: Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed
	// Flags: [Final|Native|Private]
	// Offset: 0x37d5f80
	// Params: [ Num(1) Size(0x8) ]
	void OnCachedActorDestroyed(struct AActor* DestroyedActor);
};

// Object: Class CascadeExtensionPlugin.ParticleModuleLocationSpiral
// Size: 0x120 (Inherited: 0x60)
struct UParticleModuleLocationSpiral : UAbstractParticleModule
{
	struct FRawDistributionVector StartLocation; // 0x60(0x48)
	struct FRawDistributionFloat Radius; // 0xA8(0x30)
	float DeltaAngle; // 0xD8(0x4)
	float EllipseA; // 0xDC(0x4)
	float EllipseB; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct FRawDistributionFloat DiscHeight; // 0xE8(0x30)
	float FalloffFactor; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleSizeBySpeedOverTime
// Size: 0xC8 (Inherited: 0x60)
struct UParticleModuleSizeBySpeedOverTime : UAbstractParticleModule
{
	struct FRawDistributionVector Size; // 0x60(0x48)
	bool InvertSpeed; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x3]; // 0xA9(0x3)
	struct FVector MaxSize; // 0xAC(0xC)
	struct FVector MinSize; // 0xB8(0xC)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleSortOrder
// Size: 0x68 (Inherited: 0x60)
struct UParticleModuleSortOrder : UAbstractParticleModule
{
	int32_t SortOrder; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleSwarmMovement
// Size: 0xA0 (Inherited: 0x60)
struct UParticleModuleSwarmMovement : UAbstractParticleModule
{
	float PerceptionRadius; // 0x60(0x4)
	float MaxAcceleration; // 0x64(0x4)
	float MaxVelocity; // 0x68(0x4)
	float SeparationWeight; // 0x6C(0x4)
	float AlignmentWeight; // 0x70(0x4)
	float CohesionWeight; // 0x74(0x4)
	float BlindspotAngleDeg; // 0x78(0x4)
	uint8_t SeparationDistanceWeight; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	struct TArray<struct FVector> SteeringTargets; // 0x80(0x10)
	float SteeringWeight; // 0x90(0x4)
	uint8_t SteeringTargetDistanceWeight; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	struct FName DynamicSteeringPointProviderName; // 0x98(0x8)
};

// Object: Class CascadeExtensionPlugin.ParticleModuleVelocityTurbulence
// Size: 0x80 (Inherited: 0x60)
struct UParticleModuleVelocityTurbulence : UAbstractParticleModule
{
	struct FVector Intensity; // 0x60(0xC)
	float LengthScale; // 0x6C(0x4)
	float Tightness; // 0x70(0x4)
	float MaxAcceleration; // 0x74(0x4)
	float MaxVelocity; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

} // namespace SDK
