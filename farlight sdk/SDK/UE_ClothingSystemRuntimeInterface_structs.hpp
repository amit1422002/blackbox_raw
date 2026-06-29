// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x40 (Inherited: 0x0)
struct FClothCollisionData
{
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x0(0x10)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10(0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20(0x10)
	struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30(0x10)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// Size: 0x30 (Inherited: 0x0)
struct FClothCollisionPrim_Box
{
	struct FVector LocalPosition; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat LocalRotation; // 0x10(0x10)
	struct FVector HalfExtents; // 0x20(0xC)
	int32_t BoneIndex; // 0x2C(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x28 (Inherited: 0x0)
struct FClothCollisionPrim_Convex
{
	struct TArray<struct FPlane> Planes; // 0x0(0x10)
	struct TArray<struct FVector> SurfacePoints; // 0x10(0x10)
	int32_t BoneIndex; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Size: 0x8 (Inherited: 0x0)
struct FClothCollisionPrim_SphereConnection
{
	int32_t SphereIndices[0x2]; // 0x0(0x8)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Size: 0x14 (Inherited: 0x0)
struct FClothCollisionPrim_Sphere
{
	int32_t BoneIndex; // 0x0(0x4)
	float Radius; // 0x4(0x4)
	struct FVector LocalPosition; // 0x8(0xC)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// Size: 0x4C (Inherited: 0x0)
struct FClothVertBoneData
{
	int32_t NumInfluences; // 0x0(0x4)
	uint16_t BoneIndices[0xC]; // 0x4(0x18)
	float BoneWeights[0xC]; // 0x1C(0x30)
};

} // namespace SDK
