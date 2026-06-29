// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class StaticMeshDescription.StaticMeshDescription
// Size: 0x390 (Inherited: 0x390)
struct UStaticMeshDescription : UMeshDescriptionBase
{

	// Object: Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9ac7984
	// Params: [ Num(3) Size(0x10) ]
	void SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex);

	// Object: Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9ac7560
	// Params: [ Num(2) Size(0xC) ]
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName& SlotName);

	// Object: Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9ac7ab4
	// Params: [ Num(3) Size(0x10) ]
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex);

	// Object: Function StaticMeshDescription.StaticMeshDescription.CreateCube
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9ac7660
	// Params: [ Num(9) Size(0x34) ]
	void CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID& PolygonID_PlusX, struct FPolygonID& PolygonID_MinusX, struct FPolygonID& PolygonID_PlusY, struct FPolygonID& PolygonID_MinusY, struct FPolygonID& PolygonID_PlusZ, struct FPolygonID& PolygonID_MinusZ);
};

} // namespace SDK
