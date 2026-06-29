// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
	EComputeNTBsOptions_MAX = 5
};

// Object: ScriptStruct MeshDescription.ElementID
// Size: 0x4 (Inherited: 0x0)
struct FElementID
{
	int32_t IDValue; // 0x0(0x4)
};

// Object: ScriptStruct MeshDescription.PolygonGroupID
// Size: 0x4 (Inherited: 0x4)
struct FPolygonGroupID : FElementID
{
};

// Object: ScriptStruct MeshDescription.PolygonID
// Size: 0x4 (Inherited: 0x4)
struct FPolygonID : FElementID
{
};

// Object: ScriptStruct MeshDescription.VertexID
// Size: 0x4 (Inherited: 0x4)
struct FVertexID : FElementID
{
};

// Object: ScriptStruct MeshDescription.VertexInstanceID
// Size: 0x4 (Inherited: 0x4)
struct FVertexInstanceID : FElementID
{
};

// Object: ScriptStruct MeshDescription.EdgeID
// Size: 0x4 (Inherited: 0x4)
struct FEdgeID : FElementID
{
};

// Object: ScriptStruct MeshDescription.TriangleID
// Size: 0x4 (Inherited: 0x4)
struct FTriangleID : FElementID
{
};

} // namespace SDK
