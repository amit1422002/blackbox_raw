// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary
{

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x32a31e0
	// Params: [ Num(7) Size(0x40) ]
	void SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a3824
	// Params: [ Num(8) Size(0x60) ]
	void GetSectionFromStaticMesh(struct UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a3414
	// Params: [ Num(7) Size(0x60) ]
	void GetSectionFromProceduralMesh(struct UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x32a453c
	// Params: [ Num(6) Size(0x60) ]
	void GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a3da4
	// Params: [ Num(6) Size(0x3C) ]
	void CreateGridMeshWelded(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, float GridSpacing);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a3fdc
	// Params: [ Num(4) Size(0x20) ]
	void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<int32_t>& Triangles);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a3b10
	// Params: [ Num(7) Size(0x4C) ]
	void CreateGridMeshSplit(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector2D>& UV1s, float GridSpacing);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x32a36c4
	// Params: [ Num(4) Size(0x19) ]
	void CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a4158
	// Params: [ Num(5) Size(0x20) ]
	void ConvertQuadToTriangles(struct TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);

	// Object: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a430c
	// Params: [ Num(5) Size(0x50) ]
	void CalculateTangentsForMesh(struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FProcMeshTangent>& Tangents);
};

// Object: Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x770 (Inherited: 0x700)
struct UProceduralMeshComponent : UMeshComponent
{
	uint8_t Pad_0x700[0x8]; // 0x700(0x8)
	bool bUseComplexAsSimpleCollision; // 0x708(0x1)
	bool bUseAsyncCooking; // 0x709(0x1)
	uint8_t Pad_0x70A[0x6]; // 0x70A(0x6)
	struct UBodySetup* ProcMeshBodySetup; // 0x710(0x8)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x718(0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x728(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x738(0x1C)
	uint8_t Pad_0x754[0x4]; // 0x754(0x4)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x758(0x10)
	uint8_t Pad_0x768[0x8]; // 0x768(0x8)


	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a5348
	// Params: [ Num(9) Size(0x88) ]
	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a56e4
	// Params: [ Num(6) Size(0x58) ]
	void UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32a51a0
	// Params: [ Num(2) Size(0x5) ]
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32a50ec
	// Params: [ Num(2) Size(0x5) ]
	bool IsMeshSectionVisible(int32_t SectionIndex);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x32a50b8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumSections();

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a5980
	// Params: [ Num(11) Size(0x99) ]
	void CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x32a5dd0
	// Params: [ Num(8) Size(0x69) ]
	void CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32a52a0
	// Params: [ Num(1) Size(0x4) ]
	void ClearMeshSection(int32_t SectionIndex);

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32a4fa4
	// Params: [ Num(0) Size(0x0) ]
	void ClearCollisionConvexMeshes();

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32a528c
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllMeshSections();

	// Object: Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x32a4fb8
	// Params: [ Num(1) Size(0x10) ]
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts);
};

} // namespace SDK
