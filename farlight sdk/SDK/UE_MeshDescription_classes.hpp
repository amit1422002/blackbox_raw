// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MeshDescription.MeshDescription
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescription : UObject
{
};

// Object: Class MeshDescription.MeshDescriptionBase
// Size: 0x390 (Inherited: 0x28)
struct UMeshDescriptionBase : UObject
{
	uint8_t Pad_0x28[0x368]; // 0x28(0x368)


	// Object: Function MeshDescription.MeshDescriptionBase.SetVertexPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9ab91ec
	// Params: [ Num(2) Size(0x10) ]
	void SetVertexPosition(struct FVertexID VertexID, struct FVector& Position);

	// Object: Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9ab715c
	// Params: [ Num(3) Size(0xC) ]
	void SetPolygonVertexInstance(struct FPolygonID PolygonID, int32_t PerimeterIndex, struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9ab7064
	// Params: [ Num(2) Size(0x8) ]
	void SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9ab6fb0
	// Params: [ Num(1) Size(0x4) ]
	void ReversePolygonFacing(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb88c
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewVertices(int32_t NumberOfNewVertices);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb588
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abaca8
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewTriangles(int32_t NumberOfNewTriangles);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9aba650
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewPolygons(int32_t NumberOfNewPolygons);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9ab9ff8
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);

	// Object: Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb160
	// Params: [ Num(1) Size(0x4) ]
	void ReserveNewEdges(int32_t NumberOfNewEdges);

	// Object: Function MeshDescription.MeshDescriptionBase.IsVertexValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9abb630
	// Params: [ Num(2) Size(0x5) ]
	bool IsVertexValid(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9cdc
	// Params: [ Num(2) Size(0x5) ]
	bool IsVertexOrphaned(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9abb208
	// Params: [ Num(2) Size(0x5) ]
	bool IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsTriangleValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9aba6f8
	// Params: [ Num(2) Size(0x5) ]
	bool IsTriangleValid(struct FTriangleID TriangleID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8300
	// Params: [ Num(2) Size(0x5) ]
	bool IsTrianglePartOfNgon(struct FTriangleID TriangleID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsPolygonValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9aba0a0
	// Params: [ Num(2) Size(0x5) ]
	bool IsPolygonValid(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9d9c
	// Params: [ Num(2) Size(0x5) ]
	bool IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsEmpty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9abb934
	// Params: [ Num(1) Size(0x1) ]
	bool IsEmpty();

	// Object: Function MeshDescription.MeshDescriptionBase.IsEdgeValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9abad50
	// Params: [ Num(2) Size(0x5) ]
	bool IsEdgeValid(struct FEdgeID EdgeID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8acc
	// Params: [ Num(3) Size(0x9) ]
	bool IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8bd8
	// Params: [ Num(2) Size(0x5) ]
	bool IsEdgeInternal(struct FEdgeID EdgeID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9900
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab92e8
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetVertexPosition(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9bd4
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9130
	// Params: [ Num(2) Size(0x8) ]
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9028
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7cd0
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7290
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8f1c
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8d54
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9738
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9570
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9ac8
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab93a8
	// Params: [ Num(2) Size(0x18) ]
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7ff0
	// Params: [ Num(2) Size(0x18) ]
	void GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID>& OutVertexIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab81f4
	// Params: [ Num(2) Size(0x18) ]
	void GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab80fc
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab83c0
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID TriangleID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab847c
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonID GetTrianglePolygon(struct FTriangleID TriangleID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7ee4
	// Params: [ Num(2) Size(0x18) ]
	void GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7dd8
	// Params: [ Num(2) Size(0x18) ]
	void GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7834
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutVertexIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab79fc
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7bc4
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7398
	// Params: [ Num(2) Size(0x8) ]
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7728
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab761c
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab6df0
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7454
	// Params: [ Num(2) Size(0x18) ]
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9844
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexVertexInstances(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8e60
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8c98
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab967c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexConnectedTriangles(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab94b4
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexConnectedPolygons(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab9a0c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumVertexConnectedEdges(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7940
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumPolygonVertices(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7b08
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumPolygonTriangles(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab7560
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumPolygonInternalEdges(struct FPolygonID PolygonID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab6d34
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8904
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab873c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID);

	// Object: Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8538
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OutVertexIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab8644
	// Params: [ Num(3) Size(0xC) ]
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber);

	// Object: Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab89c0
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ab87f8
	// Params: [ Num(2) Size(0x18) ]
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.Empty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb96c
	// Params: [ Num(0) Size(0x0) ]
	void Empty();

	// Object: Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9abb2c8
	// Params: [ Num(2) Size(0x18) ]
	void DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices);

	// Object: Function MeshDescription.MeshDescriptionBase.DeleteVertex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb6f0
	// Params: [ Num(1) Size(0x4) ]
	void DeleteVertex(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.DeleteTriangle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9aba7b8
	// Params: [ Num(4) Size(0x38) ]
	void DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr);

	// Object: Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9ab9e5c
	// Params: [ Num(1) Size(0x4) ]
	void DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.DeletePolygon
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9aba160
	// Params: [ Num(4) Size(0x38) ]
	void DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups);

	// Object: Function MeshDescription.MeshDescriptionBase.DeleteEdge
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9abae10
	// Params: [ Num(2) Size(0x18) ]
	void DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OrphanedVertices);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb7a4
	// Params: [ Num(1) Size(0x4) ]
	void CreateVertexWithID(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb3d4
	// Params: [ Num(2) Size(0x8) ]
	void CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb4cc
	// Params: [ Num(2) Size(0x8) ]
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID VertexID);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateVertex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb858
	// Params: [ Num(1) Size(0x4) ]
	struct FVertexID CreateVertex();

	// Object: Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9aba984
	// Params: [ Num(4) Size(0x28) ]
	void CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateTriangle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9abab30
	// Params: [ Num(4) Size(0x2C) ]
	struct FTriangleID CreateTriangle(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9aba32c
	// Params: [ Num(4) Size(0x28) ]
	void CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9ab9f10
	// Params: [ Num(1) Size(0x4) ]
	void CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID);

	// Object: Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9ab9fc4
	// Params: [ Num(1) Size(0x4) ]
	struct FPolygonGroupID CreatePolygonGroup();

	// Object: Function MeshDescription.MeshDescriptionBase.CreatePolygon
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9aba4d8
	// Params: [ Num(4) Size(0x2C) ]
	struct FPolygonID CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abaf1c
	// Params: [ Num(3) Size(0xC) ]
	void CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1);

	// Object: Function MeshDescription.MeshDescriptionBase.CreateEdge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9abb058
	// Params: [ Num(3) Size(0xC) ]
	struct FEdgeID CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1);

	// Object: Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9ab6efc
	// Params: [ Num(1) Size(0x4) ]
	void ComputePolygonTriangulation(struct FPolygonID PolygonID);
};

} // namespace SDK
