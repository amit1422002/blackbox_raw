// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2
};

// Object: Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3
};

// Object: Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4
};

// Object: Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7,
	EMeshElementAttributeType_MAX = 8
};

// Object: Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2
};

// Object: Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3
};

// Object: ScriptStruct EditableMesh.AdaptorPolygon2Group
// Size: 0x48 (Inherited: 0x0)
struct FAdaptorPolygon2Group
{
	uint32_t RenderingSectionIndex; // 0x0(0x4)
	int32_t MaterialIndex; // 0x4(0x4)
	int32_t MaxTriangles; // 0x8(0x4)
	uint8_t Pad_0xC[0x3C]; // 0xC(0x3C)
};

// Object: ScriptStruct EditableMesh.AdaptorPolygon
// Size: 0x18 (Inherited: 0x0)
struct FAdaptorPolygon
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AdaptorTriangleID
// Size: 0x4 (Inherited: 0x4)
struct FAdaptorTriangleID : FElementID
{
};

// Object: ScriptStruct EditableMesh.PolygonGroupForPolygon
// Size: 0x8 (Inherited: 0x0)
struct FPolygonGroupForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	struct FPolygonGroupID PolygonGroupID; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.PolygonGroupToCreate
// Size: 0x18 (Inherited: 0x0)
struct FPolygonGroupToCreate
{
	struct FMeshElementAttributeList PolygonGroupAttributes; // 0x0(0x10)
	struct FPolygonGroupID OriginalPolygonGroupID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeList
// Size: 0x10 (Inherited: 0x0)
struct FMeshElementAttributeList
{
	struct TArray<struct FMeshElementAttributeData> Attributes; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeData
// Size: 0x60 (Inherited: 0x0)
struct FMeshElementAttributeData
{
	struct FName AttributeName; // 0x0(0x8)
	int32_t AttributeIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FMeshElementAttributeValue AttributeValue; // 0x10(0x50)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeValue
// Size: 0x50 (Inherited: 0x0)
struct FMeshElementAttributeValue
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct EditableMesh.VertexToMove
// Size: 0x10 (Inherited: 0x0)
struct FVertexToMove
{
	struct FVertexID VertexID; // 0x0(0x4)
	struct FVector NewVertexPosition; // 0x4(0xC)
};

// Object: ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// Size: 0x28 (Inherited: 0x0)
struct FChangeVertexInstancesForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8(0x10)
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18(0x10)
};

// Object: ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// Size: 0x10 (Inherited: 0x0)
struct FVertexInstancesForPolygonHole
{
	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.VertexIndexAndInstanceID
// Size: 0x8 (Inherited: 0x0)
struct FVertexIndexAndInstanceID
{
	int32_t ContourIndex; // 0x0(0x4)
	struct FVertexInstanceID VertexInstanceID; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.VertexAttributesForPolygon
// Size: 0x28 (Inherited: 0x0)
struct FVertexAttributesForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8(0x10)
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18(0x10)
};

// Object: ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// Size: 0x10 (Inherited: 0x0)
struct FVertexAttributesForPolygonHole
{
	struct TArray<struct FMeshElementAttributeList> VertexAttributeList; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForEdge
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForEdge
{
	struct FEdgeID EdgeID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList EdgeAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForVertexInstance
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForVertexInstance
{
	struct FVertexInstanceID VertexInstanceID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForVertex
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForVertex
{
	struct FVertexID VertexID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.PolygonToSplit
// Size: 0x18 (Inherited: 0x0)
struct FPolygonToSplit
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexPair> VertexPairsToSplitAt; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.VertexPair
// Size: 0x8 (Inherited: 0x0)
struct FVertexPair
{
	struct FVertexID VertexID0; // 0x0(0x4)
	struct FVertexID VertexID1; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.PolygonToCreate
// Size: 0x20 (Inherited: 0x0)
struct FPolygonToCreate
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexAndAttributes> PerimeterVertices; // 0x8(0x10)
	struct FPolygonID OriginalPolygonID; // 0x18(0x4)
	enum class EPolygonEdgeHardness PolygonEdgeHardness; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct EditableMesh.VertexAndAttributes
// Size: 0x18 (Inherited: 0x0)
struct FVertexAndAttributes
{
	struct FVertexInstanceID VertexInstanceID; // 0x0(0x4)
	struct FVertexID VertexID; // 0x4(0x4)
	struct FMeshElementAttributeList PolygonVertexAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.EdgeToCreate
// Size: 0x20 (Inherited: 0x0)
struct FEdgeToCreate
{
	struct FVertexID VertexID0; // 0x0(0x4)
	struct FVertexID VertexID1; // 0x4(0x4)
	struct FMeshElementAttributeList EdgeAttributes; // 0x8(0x10)
	struct FEdgeID OriginalEdgeID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct EditableMesh.VertexInstanceToCreate
// Size: 0x20 (Inherited: 0x0)
struct FVertexInstanceToCreate
{
	struct FVertexID VertexID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8(0x10)
	struct FVertexInstanceID OriginalVertexInstanceID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct EditableMesh.VertexToCreate
// Size: 0x18 (Inherited: 0x0)
struct FVertexToCreate
{
	struct FMeshElementAttributeList VertexAttributes; // 0x0(0x10)
	struct FVertexID OriginalVertexID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct EditableMesh.SubdivisionLimitData
// Size: 0x30 (Inherited: 0x0)
struct FSubdivisionLimitData
{
	struct TArray<struct FVector> VertexPositions; // 0x0(0x10)
	struct TArray<struct FSubdivisionLimitSection> Sections; // 0x10(0x10)
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges; // 0x20(0x10)
};

// Object: ScriptStruct EditableMesh.SubdividedWireEdge
// Size: 0xC (Inherited: 0x0)
struct FSubdividedWireEdge
{
	int32_t EdgeVertex0PositionIndex; // 0x0(0x4)
	int32_t EdgeVertex1PositionIndex; // 0x4(0x4)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct EditableMesh.SubdivisionLimitSection
// Size: 0x10 (Inherited: 0x0)
struct FSubdivisionLimitSection
{
	struct TArray<struct FSubdividedQuad> SubdividedQuads; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.SubdividedQuad
// Size: 0xD0 (Inherited: 0x0)
struct FSubdividedQuad
{
	struct FSubdividedQuadVertex QuadVertex0; // 0x0(0x34)
	struct FSubdividedQuadVertex QuadVertex1; // 0x34(0x34)
	struct FSubdividedQuadVertex QuadVertex2; // 0x68(0x34)
	struct FSubdividedQuadVertex QuadVertex3; // 0x9C(0x34)
};

// Object: ScriptStruct EditableMesh.SubdividedQuadVertex
// Size: 0x34 (Inherited: 0x0)
struct FSubdividedQuadVertex
{
	int32_t VertexPositionIndex; // 0x0(0x4)
	struct FVector2D TextureCoordinate0; // 0x4(0x8)
	struct FVector2D TextureCoordinate1; // 0xC(0x8)
	struct FColor VertexColor; // 0x14(0x4)
	struct FVector VertexNormal; // 0x18(0xC)
	struct FVector VertexTangent; // 0x24(0xC)
	float VertexBinormalSign; // 0x30(0x4)
};

// Object: ScriptStruct EditableMesh.RenderingPolygonGroup
// Size: 0x48 (Inherited: 0x0)
struct FRenderingPolygonGroup
{
	uint32_t RenderingSectionIndex; // 0x0(0x4)
	int32_t MaterialIndex; // 0x4(0x4)
	int32_t MaxTriangles; // 0x8(0x4)
	uint8_t Pad_0xC[0x3C]; // 0xC(0x3C)
};

// Object: ScriptStruct EditableMesh.RenderingPolygon
// Size: 0x18 (Inherited: 0x0)
struct FRenderingPolygon
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8(0x10)
};

} // namespace SDK
