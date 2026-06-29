// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class EditableMesh.EditableMeshAdapter
// Size: 0x28 (Inherited: 0x28)
struct UEditableMeshAdapter : UObject
{
};

// Object: Class EditableMesh.EditableGeometryCollectionAdapter
// Size: 0xD8 (Inherited: 0x28)
struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter
{
	struct UGeometryCollection* GeometryCollection; // 0x28(0x8)
	struct UGeometryCollection* OriginalGeometryCollection; // 0x30(0x8)
	int32_t GeometryCollectionLODIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0x9C]; // 0x3C(0x9C)
};

// Object: Class EditableMesh.EditableMesh
// Size: 0x678 (Inherited: 0x28)
struct UEditableMesh : UObject
{
	uint8_t Pad_0x28[0x390]; // 0x28(0x390)
	struct TArray<struct UEditableMeshAdapter*> Adapters; // 0x3B8(0x10)
	uint8_t Pad_0x3C8[0x8]; // 0x3C8(0x8)
	int32_t TextureCoordinateCount; // 0x3D0(0x4)
	uint8_t Pad_0x3D4[0x148]; // 0x3D4(0x148)
	int32_t PendingCompactCounter; // 0x51C(0x4)
	int32_t SubdivisionCount; // 0x520(0x4)
	uint8_t Pad_0x524[0x154]; // 0x524(0x154)


	// Object: Function EditableMesh.EditableMesh.WeldVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3278fd8
	// Params: [ Num(2) Size(0x14) ]
	void WeldVertices(struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID);

	// Object: Function EditableMesh.EditableMesh.TryToRemoveVertex
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a338
	// Params: [ Num(3) Size(0xC) ]
	void TryToRemoveVertex(struct FVertexID VertexID, bool& bOutWasVertexRemoved, struct FEdgeID& OutNewEdgeID);

	// Object: Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a488
	// Params: [ Num(3) Size(0xC) ]
	void TryToRemovePolygonEdge(struct FEdgeID EdgeID, bool& bOutWasEdgeRemoved, struct FPolygonID& OutNewPolygonID);

	// Object: Function EditableMesh.EditableMesh.TriangulatePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3279404
	// Params: [ Num(2) Size(0x20) ]
	void TriangulatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FPolygonID>& OutNewTrianglePolygons);

	// Object: Function EditableMesh.EditableMesh.TessellatePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3278e7c
	// Params: [ Num(3) Size(0x28) ]
	void TessellatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID>& OutNewPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.StartModification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f8a8
	// Params: [ Num(2) Size(0x2) ]
	void StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange);

	// Object: Function EditableMesh.EditableMesh.SplitPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327b990
	// Params: [ Num(2) Size(0x20) ]
	void SplitPolygons(struct TArray<struct FPolygonToSplit>& PolygonsToSplit, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.SplitPolygonalMesh
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3278a88
	// Params: [ Num(4) Size(0x40) ]
	void SplitPolygonalMesh(struct FPlane& InPlane, struct TArray<struct FPolygonID>& PolygonIDs1, struct TArray<struct FPolygonID>& PolygonIDs2, struct TArray<struct FEdgeID>& BoundaryIDs);

	// Object: Function EditableMesh.EditableMesh.SplitEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327bc3c
	// Params: [ Num(3) Size(0x28) ]
	void SplitEdge(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FVertexID>& OutNewVertexIDs);

	// Object: Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327991c
	// Params: [ Num(2) Size(0x20) ]
	void SetVerticesCornerSharpness(struct TArray<struct FVertexID>& VertexIDs, struct TArray<float>& VerticesNewCornerSharpness);

	// Object: Function EditableMesh.EditableMesh.SetVerticesAttributes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a988
	// Params: [ Num(1) Size(0x10) ]
	void SetVerticesAttributes(struct TArray<struct FAttributesForVertex>& AttributesForVertices);

	// Object: Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a8a0
	// Params: [ Num(1) Size(0x10) ]
	void SetVertexInstancesAttributes(struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances);

	// Object: Function EditableMesh.EditableMesh.SetTextureCoordinateCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3278dd4
	// Params: [ Num(1) Size(0x4) ]
	void SetTextureCoordinateCount(int32_t NumTexCoords);

	// Object: Function EditableMesh.EditableMesh.SetSubdivisionCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327bf70
	// Params: [ Num(1) Size(0x4) ]
	void SetSubdivisionCount(int32_t NewSubdivisionCount);

	// Object: Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a6fc
	// Params: [ Num(1) Size(0x10) ]
	void SetPolygonsVertexAttributes(struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons);

	// Object: Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32795e0
	// Params: [ Num(2) Size(0x14) ]
	void SetEdgesHardnessAutomatically(struct TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);

	// Object: Function EditableMesh.EditableMesh.SetEdgesHardness
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32796e4
	// Params: [ Num(2) Size(0x20) ]
	void SetEdgesHardness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<bool>& EdgesNewIsHard);

	// Object: Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3279800
	// Params: [ Num(2) Size(0x20) ]
	void SetEdgesCreaseSharpness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<float>& EdgesNewCreaseSharpness);

	// Object: Function EditableMesh.EditableMesh.SetEdgesAttributes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a7b8
	// Params: [ Num(1) Size(0x10) ]
	void SetEdgesAttributes(struct TArray<struct FAttributesForEdge>& AttributesForEdges);

	// Object: Function EditableMesh.EditableMesh.SetAllowUndo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327e2fc
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowUndo(bool bInAllowUndo);

	// Object: Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327e230
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);

	// Object: Function EditableMesh.EditableMesh.SetAllowCompact
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327e130
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowCompact(bool bInAllowCompact);

	// Object: Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c018
	// Params: [ Num(2) Size(0x20) ]
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane& InPlane, struct TArray<struct FPolygonID>& OutPolygons);

	// Object: Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c240
	// Params: [ Num(3) Size(0x28) ]
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID>& OutPolygons);

	// Object: Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c124
	// Params: [ Num(2) Size(0x20) ]
	void SearchSpatialDatabaseForPolygonsInVolume(struct TArray<struct FPlane>& Planes, struct TArray<struct FPolygonID>& OutPolygons);

	// Object: Function EditableMesh.EditableMesh.RevertInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f67c
	// Params: [ Num(1) Size(0x8) ]
	struct UEditableMesh* RevertInstance();

	// Object: Function EditableMesh.EditableMesh.Revert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f6b0
	// Params: [ Num(0) Size(0x0) ]
	void Revert();

	// Object: Function EditableMesh.EditableMesh.RebuildRenderMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f990
	// Params: [ Num(0) Size(0x0) ]
	void RebuildRenderMesh();

	// Object: Function EditableMesh.EditableMesh.QuadrangulateMesh
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3278d14
	// Params: [ Num(1) Size(0x10) ]
	void QuadrangulateMesh(struct TArray<struct FPolygonID>& OutNewPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.PropagateInstanceChanges
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f668
	// Params: [ Num(0) Size(0x0) ]
	void PropagateInstanceChanges();

	// Object: Function EditableMesh.EditableMesh.MoveVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327beb0
	// Params: [ Num(1) Size(0x10) ]
	void MoveVertices(struct TArray<struct FVertexToMove>& VerticesToMove);

	// Object: Function EditableMesh.EditableMesh.MakeVertexID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x327dffc
	// Params: [ Num(2) Size(0x8) ]
	struct FVertexID MakeVertexID(int32_t VertexIndex);

	// Object: Function EditableMesh.EditableMesh.MakePolygonID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x327de10
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonID MakePolygonID(int32_t PolygonIndex);

	// Object: Function EditableMesh.EditableMesh.MakePolygonGroupID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x327deb4
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);

	// Object: Function EditableMesh.EditableMesh.MakeEdgeID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x327df58
	// Params: [ Num(2) Size(0x8) ]
	struct FEdgeID MakeEdgeID(int32_t EdgeIndex);

	// Object: Function EditableMesh.EditableMesh.IsValidVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f574
	// Params: [ Num(2) Size(0x5) ]
	bool IsValidVertex(struct FVertexID VertexID);

	// Object: Function EditableMesh.EditableMesh.IsValidPolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327ebc8
	// Params: [ Num(2) Size(0x5) ]
	bool IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID);

	// Object: Function EditableMesh.EditableMesh.IsValidPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e920
	// Params: [ Num(2) Size(0x5) ]
	bool IsValidPolygon(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.IsValidEdge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327ef68
	// Params: [ Num(2) Size(0x5) ]
	bool IsValidEdge(struct FEdgeID EdgeID);

	// Object: Function EditableMesh.EditableMesh.IsUndoAllowed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e3a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsUndoAllowed();

	// Object: Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e2e0
	// Params: [ Num(1) Size(0x1) ]
	bool IsSpatialDatabaseAllowed();

	// Object: Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327dd3c
	// Params: [ Num(1) Size(0x1) ]
	bool IsPreviewingSubdivisions();

	// Object: Function EditableMesh.EditableMesh.IsOrphanedVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f4b4
	// Params: [ Num(2) Size(0x5) ]
	bool IsOrphanedVertex(struct FVertexID VertexID);

	// Object: Function EditableMesh.EditableMesh.IsCompactAllowed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e1dc
	// Params: [ Num(1) Size(0x1) ]
	bool IsCompactAllowed();

	// Object: Function EditableMesh.EditableMesh.IsCommittedAsInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f788
	// Params: [ Num(1) Size(0x1) ]
	bool IsCommittedAsInstance();

	// Object: Function EditableMesh.EditableMesh.IsCommitted
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f7c0
	// Params: [ Num(1) Size(0x1) ]
	bool IsCommitted();

	// Object: Function EditableMesh.EditableMesh.IsBeingModified
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e3c4
	// Params: [ Num(1) Size(0x1) ]
	bool IsBeingModified();

	// Object: Function EditableMesh.EditableMesh.InvalidVertexID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x327e10c
	// Params: [ Num(1) Size(0x4) ]
	struct FVertexID InvalidVertexID();

	// Object: Function EditableMesh.EditableMesh.InvalidPolygonID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x327e0a0
	// Params: [ Num(1) Size(0x4) ]
	struct FPolygonID InvalidPolygonID();

	// Object: Function EditableMesh.EditableMesh.InvalidPolygonGroupID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x327e0c4
	// Params: [ Num(1) Size(0x4) ]
	struct FPolygonGroupID InvalidPolygonGroupID();

	// Object: Function EditableMesh.EditableMesh.InvalidEdgeID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x327e0e8
	// Params: [ Num(1) Size(0x4) ]
	struct FEdgeID InvalidEdgeID();

	// Object: Function EditableMesh.EditableMesh.InsetPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3279c38
	// Params: [ Num(6) Size(0x40) ]
	void InsetPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs);

	// Object: Function EditableMesh.EditableMesh.InsertEdgeLoop
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327bad4
	// Params: [ Num(3) Size(0x28) ]
	void InsertEdgeLoop(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.InitializeAdapters
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f9a4
	// Params: [ Num(0) Size(0x0) ]
	void InitializeAdapters();

	// Object: Function EditableMesh.EditableMesh.GetVertexPairEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d7b8
	// Params: [ Num(4) Size(0x10) ]
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed);

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f210
	// Params: [ Num(2) Size(0x8) ]
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID);

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f2cc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetVertexInstanceCount();

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327da18
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f154
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID);

	// Object: Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f05c
	// Params: [ Num(3) Size(0xC) ]
	struct FPolygonID GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber);

	// Object: Function EditableMesh.EditableMesh.GetVertexCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f634
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetVertexCount();

	// Object: Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327db24
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.GetVertexConnectedEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327dc30
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutConnectedEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f3f8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetVertexConnectedEdgeCount(struct FVertexID VertexID);

	// Object: Function EditableMesh.EditableMesh.GetVertexConnectedEdge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f300
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber);

	// Object: Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d90c
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs);

	// Object: Function EditableMesh.EditableMesh.GetTextureCoordinateCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327dda8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTextureCoordinateCount();

	// Object: Function EditableMesh.EditableMesh.GetSubdivisionLimitData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c6c4
	// Params: [ Num(1) Size(0x30) ]
	struct FSubdivisionLimitData GetSubdivisionLimitData();

	// Object: Function EditableMesh.EditableMesh.GetSubdivisionCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327dd74
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSubdivisionCount();

	// Object: Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e4fc
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e404
	// Params: [ Num(3) Size(0xC) ]
	struct FTriangleID GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d17c
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d070
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e5b8
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e7a8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e6b0
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexID GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327ce20
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d288
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327cf2c
	// Params: [ Num(4) Size(0x10) ]
	struct FEdgeID GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon);

	// Object: Function EditableMesh.EditableMesh.GetPolygonInGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327ea14
	// Params: [ Num(3) Size(0xC) ]
	struct FPolygonID GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber);

	// Object: Function EditableMesh.EditableMesh.GetPolygonGroupCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327ec88
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPolygonGroupCount();

	// Object: Function EditableMesh.EditableMesh.GetPolygonCountInGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327eb0c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID);

	// Object: Function EditableMesh.EditableMesh.GetPolygonCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e9e0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPolygonCount();

	// Object: Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327cd14
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutAdjacentPolygons);

	// Object: Function EditableMesh.EditableMesh.GetGroupForPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e864
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonGroupID GetGroupForPolygon(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327dddc
	// Params: [ Num(1) Size(0x4) ]
	struct FPolygonGroupID GetFirstValidPolygonGroup();

	// Object: Function EditableMesh.EditableMesh.GetEdgeVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d664
	// Params: [ Num(3) Size(0xC) ]
	void GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID& OutEdgeVertexID0, struct FVertexID& OutEdgeVertexID1);

	// Object: Function EditableMesh.EditableMesh.GetEdgeVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327ee70
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber);

	// Object: Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d344
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1);

	// Object: Function EditableMesh.EditableMesh.GetEdgeLoopElements
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d44c
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& EdgeLoopIDs);

	// Object: Function EditableMesh.EditableMesh.GetEdgeCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327f028
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetEdgeCount();

	// Object: Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327d558
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327edb4
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID);

	// Object: Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327ecbc
	// Params: [ Num(3) Size(0xC) ]
	struct FPolygonID GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber);

	// Object: Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3278c54
	// Params: [ Num(1) Size(0x10) ]
	void GeneratePolygonTangentsAndNormals(struct TArray<struct FPolygonID>& PolygonIDs);

	// Object: Function EditableMesh.EditableMesh.FlipPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3279520
	// Params: [ Num(1) Size(0x10) ]
	void FlipPolygons(struct TArray<struct FPolygonID>& PolygonIDs);

	// Object: Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327cc0c
	// Params: [ Num(3) Size(0xC) ]
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID);

	// Object: Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327cac0
	// Params: [ Num(4) Size(0x10) ]
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1);

	// Object: Function EditableMesh.EditableMesh.FindPolygonLoop
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c380
	// Params: [ Num(5) Size(0x48) ]
	void FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID>& OutFlippedEdgeIDs, struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID>& OutPolygonIDsToSplit);

	// Object: Function EditableMesh.EditableMesh.ExtrudePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a18c
	// Params: [ Num(4) Size(0x28) ]
	void ExtrudePolygons(struct TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons);

	// Object: Function EditableMesh.EditableMesh.ExtendVertices
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3279e74
	// Params: [ Num(4) Size(0x30) ]
	void ExtendVertices(struct TArray<struct FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID>& OutNewExtendedVertexIDs);

	// Object: Function EditableMesh.EditableMesh.ExtendEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a020
	// Params: [ Num(3) Size(0x28) ]
	void ExtendEdges(struct TArray<struct FEdgeID>& EdgeIDs, bool bWeldNeighbors, struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.EndModification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f7f8
	// Params: [ Num(1) Size(0x1) ]
	void EndModification(bool bFromUndo);

	// Object: Function EditableMesh.EditableMesh.DeleteVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327b40c
	// Params: [ Num(2) Size(0x11) ]
	void DeleteVertexInstances(struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);

	// Object: Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327b5d8
	// Params: [ Num(5) Size(0x8) ]
	void DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);

	// Object: Function EditableMesh.EditableMesh.DeletePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327aa70
	// Params: [ Num(5) Size(0x14) ]
	void DeletePolygons(struct TArray<struct FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);

	// Object: Function EditableMesh.EditableMesh.DeletePolygonGroups
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3279200
	// Params: [ Num(1) Size(0x10) ]
	void DeletePolygonGroups(struct TArray<struct FPolygonGroupID>& PolygonGroupIDs);

	// Object: Function EditableMesh.EditableMesh.DeleteOrphanVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327b518
	// Params: [ Num(1) Size(0x10) ]
	void DeleteOrphanVertices(struct TArray<struct FVertexID>& VertexIDsToDelete);

	// Object: Function EditableMesh.EditableMesh.DeleteEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327b300
	// Params: [ Num(2) Size(0x11) ]
	void DeleteEdges(struct TArray<struct FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices);

	// Object: Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327b7b4
	// Params: [ Num(5) Size(0x8) ]
	void DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);

	// Object: Function EditableMesh.EditableMesh.CreateVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327b0bc
	// Params: [ Num(2) Size(0x20) ]
	void CreateVertices(struct TArray<struct FVertexToCreate>& VerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs);

	// Object: Function EditableMesh.EditableMesh.CreateVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327af78
	// Params: [ Num(2) Size(0x20) ]
	void CreateVertexInstances(struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs);

	// Object: Function EditableMesh.EditableMesh.CreatePolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327ac64
	// Params: [ Num(3) Size(0x30) ]
	void CreatePolygons(struct TArray<struct FPolygonToCreate>& PolygonsToCreate, struct TArray<struct FPolygonID>& OutNewPolygonIDs, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.CreatePolygonGroups
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32792c0
	// Params: [ Num(2) Size(0x20) ]
	void CreatePolygonGroups(struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs);

	// Object: Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327bda4
	// Params: [ Num(2) Size(0x18) ]
	void CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.CreateEmptyVertexRange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327b200
	// Params: [ Num(2) Size(0x18) ]
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs);

	// Object: Function EditableMesh.EditableMesh.CreateEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327ae34
	// Params: [ Num(2) Size(0x20) ]
	void CreateEdges(struct TArray<struct FEdgeToCreate>& EdgesToCreate, struct TArray<struct FEdgeID>& OutNewEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c5a8
	// Params: [ Num(2) Size(0x20) ]
	void ComputePolygonsSharedEdges(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FEdgeID>& OutSharedEdgeIDs);

	// Object: Function EditableMesh.EditableMesh.ComputePolygonPlane
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c868
	// Params: [ Num(2) Size(0x20) ]
	struct FPlane ComputePolygonPlane(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.ComputePolygonNormal
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c7a8
	// Params: [ Num(2) Size(0x10) ]
	struct FVector ComputePolygonNormal(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.ComputePolygonCenter
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c928
	// Params: [ Num(2) Size(0x10) ]
	struct FVector ComputePolygonCenter(struct FPolygonID PolygonID);

	// Object: Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327c9e8
	// Params: [ Num(1) Size(0x1C) ]
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere();

	// Object: Function EditableMesh.EditableMesh.ComputeBoundingBox
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327ca54
	// Params: [ Num(1) Size(0x1C) ]
	struct FBox ComputeBoundingBox();

	// Object: Function EditableMesh.EditableMesh.CommitInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f6c4
	// Params: [ Num(2) Size(0x10) ]
	struct UEditableMesh* CommitInstance(struct UPrimitiveComponent* ComponentToInstanceTo);

	// Object: Function EditableMesh.EditableMesh.Commit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x327f774
	// Params: [ Num(0) Size(0x0) ]
	void Commit();

	// Object: Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x327a5d8
	// Params: [ Num(1) Size(0x10) ]
	void ChangePolygonsVertexInstances(struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);

	// Object: Function EditableMesh.EditableMesh.BevelPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3279a38
	// Params: [ Num(5) Size(0x38) ]
	void BevelPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs);

	// Object: Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32790f4
	// Params: [ Num(2) Size(0x11) ]
	void AssignPolygonsToPolygonGroups(struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);

	// Object: Function EditableMesh.EditableMesh.AnyChangesToUndo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x327e1f8
	// Params: [ Num(1) Size(0x1) ]
	bool AnyChangesToUndo();
};

// Object: Class EditableMesh.EditableMeshFactory
// Size: 0x28 (Inherited: 0x28)
struct UEditableMeshFactory : UObject
{

	// Object: Function EditableMesh.EditableMeshFactory.MakeEditableMesh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32842f4
	// Params: [ Num(3) Size(0x18) ]
	struct UEditableMesh* MakeEditableMesh(struct UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex);
};

// Object: Class EditableMesh.EditableStaticMeshAdapter
// Size: 0xE0 (Inherited: 0x28)
struct UEditableStaticMeshAdapter : UEditableMeshAdapter
{
	struct UStaticMesh* StaticMesh; // 0x28(0x8)
	struct UStaticMesh* OriginalStaticMesh; // 0x30(0x8)
	int32_t StaticMeshLODIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0xA4]; // 0x3C(0xA4)
};

} // namespace SDK
