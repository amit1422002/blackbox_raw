// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5
};

// Object: Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5
};

// Object: Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5
};

// Object: Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4
};

// Object: Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3
};

// Object: ScriptStruct Foliage.FoliageVertexColorChannelMask
// Size: 0xC (Inherited: 0x0)
struct FFoliageVertexColorChannelMask
{
	uint8_t UseMask : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MaskThreshold; // 0x4(0x4)
	uint8_t InvertMask : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Foliage.SelectInstanceInfo
// Size: 0x50 (Inherited: 0x0)
struct FSelectInstanceInfo
{
	int32_t instanceID; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FTransform Transform; // 0x10(0x30)
	struct TArray<float> CustomData; // 0x40(0x10)
};

// Object: ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x0)
struct FFoliageTypeObject
{
	struct UObject* FoliageTypeObject; // 0x0(0x8)
	struct UFoliageType* TypeInstance; // 0x8(0x8)
	bool bIsAsset; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x18(0x8)
};

// Object: ScriptStruct Foliage.ProceduralFoliageInstance
// Size: 0x60 (Inherited: 0x0)
struct FProceduralFoliageInstance
{
	struct FVector Location; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Normal; // 0x20(0xC)
	float Age; // 0x2C(0x4)
	float Scale; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UFoliageType* Type; // 0x38(0x8)
	uint8_t Pad_0x40[0x20]; // 0x40(0x20)
};

} // namespace SDK
