// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum DynamicRepresentation.SpatialLODLevel
enum class ESpatialLODLevel : uint8_t
{
	None = 0,
	LOD0 = 1,
	LOD1 = 2,
	SpatialLODLevel_MAX = 3
};

// Object: ScriptStruct DynamicRepresentation.ActorRegistrationInfo
// Size: 0x80 (Inherited: 0x0)
struct FActorRegistrationInfo
{
	uint8_t Pad_0x0[0x80]; // 0x0(0x80)
};

// Object: ScriptStruct DynamicRepresentation.ActorStreamingData
// Size: 0x70 (Inherited: 0x0)
struct FActorStreamingData
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
	struct UDynamicRepresentationDefinition* Definition; // 0x48(0x8)
	struct UObject* CustomActorData; // 0x50(0x8)
	uint8_t Pad_0x58[0x18]; // 0x58(0x18)
};

// Object: ScriptStruct DynamicRepresentation.PlayerViewInfo
// Size: 0x18 (Inherited: 0x0)
struct FPlayerViewInfo
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct DynamicRepresentation.ActorIdManager
// Size: 0x18 (Inherited: 0x0)
struct FActorIdManager
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct DynamicRepresentation.ActorId
// Size: 0x10 (Inherited: 0x0)
struct FActorId
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct DynamicRepresentation.SpatialHashingSectorKey
// Size: 0x20 (Inherited: 0x0)
struct FSpatialHashingSectorKey
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct DynamicRepresentation.SpatialHashGridDesc
// Size: 0x20 (Inherited: 0x0)
struct FSpatialHashGridDesc
{
	struct FName GridName; // 0x0(0x8)
	float SectorSize; // 0x8(0x4)
	float MaxRange; // 0xC(0x4)
	float LODDistance; // 0x10(0x4)
	bool UseZCulling; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FColor DebuggingColor; // 0x18(0x4)
	bool UseZHash; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

} // namespace SDK
