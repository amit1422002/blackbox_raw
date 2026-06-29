// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum RuntimeGeometryUtils.EPrePooledDynamicMeshGeneratorType
enum class EPrePooledDynamicMeshGeneratorType : uint8_t
{
	NONE = 0,
	BOX = 1,
	QUAD = 2,
	QUADXZ = 3,
	EPrePooledDynamicMeshGeneratorType_MAX = 4
};

// Object: Enum RuntimeGeometryUtils.EDynamicMeshActorCollisionMode
enum class EDynamicMeshActorCollisionMode : uint8_t
{
	NoCollision = 0,
	ComplexAsSimple = 1,
	ComplexAsSimpleAsync = 2,
	SimpleConvexHull = 3,
	EDynamicMeshActorCollisionMode_MAX = 4
};

// Object: Enum RuntimeGeometryUtils.EDynamicMeshActorBooleanOperation
enum class EDynamicMeshActorBooleanOperation : uint8_t
{
	Union = 0,
	Subtraction = 1,
	Intersection = 2,
	EDynamicMeshActorBooleanOperation_MAX = 3
};

// Object: Enum RuntimeGeometryUtils.EDynamicMeshActorPrimitiveType
enum class EDynamicMeshActorPrimitiveType : uint8_t
{
	Sphere = 0,
	Box = 1,
	EDynamicMeshActorPrimitiveType_MAX = 2
};

// Object: Enum RuntimeGeometryUtils.EDynamicMeshActorSourceType
enum class EDynamicMeshActorSourceType : uint8_t
{
	Primitive = 0,
	ImportedMesh = 1,
	EDynamicMeshActorSourceType_MAX = 2
};

// Object: Enum RuntimeGeometryUtils.EDynamicMeshActorNormalsMode
enum class EDynamicMeshActorNormalsMode : uint8_t
{
	SplitNormals = 0,
	PerVertexNormals = 1,
	FaceNormals = 2,
	EDynamicMeshActorNormalsMode_MAX = 3
};

// Object: Enum RuntimeGeometryUtils.EDynamicMeshNormalsMode
enum class EDynamicMeshNormalsMode : uint8_t
{
	SplitNormals = 0,
	PerVertexNormals = 1,
	FaceNormals = 2,
	EDynamicMeshNormalsMode_MAX = 3
};

// Object: Enum RuntimeGeometryUtils.EDynamicMeshGeneratorType
enum class EDynamicMeshGeneratorType : uint8_t
{
	BOX = 0,
	QUAD = 1,
	EDynamicMeshGeneratorType_MAX = 2
};

// Object: Enum RuntimeGeometryUtils.EDynamicMeshWallMoveDirection
enum class EDynamicMeshWallMoveDirection : uint8_t
{
	Move_Both_Side = 0,
	Move_Positive_Side = 1,
	Move_MAX = 2
};

// Object: ScriptStruct RuntimeGeometryUtils.PrePooledDynamicMesh
// Size: 0x10 (Inherited: 0x0)
struct FPrePooledDynamicMesh
{
	struct FName MeshTag; // 0x0(0x8)
	enum class EPrePooledDynamicMeshGeneratorType GeneratorType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t Number; // 0xC(0x4)
};

} // namespace SDK
