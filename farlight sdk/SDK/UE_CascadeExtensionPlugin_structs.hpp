// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum CascadeExtensionPlugin.EDistanceWeight
enum class EDistanceWeight : uint8_t
{
	LINEAR = 0,
	INVERSE_LINEAR = 1,
	QUADRATIC = 2,
	INVERSE_QUAD = 3,
	W_Max = 4,
	EDistanceWeight_MAX = 5
};

// Object: Enum CascadeExtensionPlugin.ESpaceAxis
enum class ESpaceAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	Ax_Max = 3,
	ESpaceAxis_MAX = 4
};

// Object: ScriptStruct CascadeExtensionPlugin.ForcePoints
// Size: 0x20 (Inherited: 0x0)
struct FForcePoints
{
	float Intensity; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVector> PointLocations; // 0x8(0x10)
	uint8_t SeparationDistanceWeight; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float DistanceScale; // 0x1C(0x4)
};

// Object: ScriptStruct CascadeExtensionPlugin.MeshTriangleData
// Size: 0x20 (Inherited: 0x0)
struct FMeshTriangleData
{
	struct TArray<struct FVector> Vertices; // 0x0(0x10)
	struct TArray<struct FTriangleIndices> Indices; // 0x10(0x10)
};

// Object: ScriptStruct CascadeExtensionPlugin.TriangleIndices
// Size: 0xC (Inherited: 0x0)
struct FTriangleIndices
{
	int32_t v0; // 0x0(0x4)
	int32_t v1; // 0x4(0x4)
	int32_t v2; // 0x8(0x4)
};

// Object: ScriptStruct CascadeExtensionPlugin.ParticleProperties
// Size: 0x44 (Inherited: 0x0)
struct FParticleProperties
{
	int32_t ParticleId; // 0x0(0x4)
	float RelativeTime; // 0x4(0x4)
	struct FVector Location; // 0x8(0xC)
	struct FVector Velocity; // 0x14(0xC)
	struct FVector Size; // 0x20(0xC)
	struct FLinearColor Color; // 0x2C(0x10)
	float Rotation; // 0x3C(0x4)
	float RotationRate; // 0x40(0x4)
};

} // namespace SDK
