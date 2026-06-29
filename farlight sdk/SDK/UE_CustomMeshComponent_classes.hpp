// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class CustomMeshComponent.CustomMeshComponent
// Size: 0x710 (Inherited: 0x700)
struct UCustomMeshComponent : UMeshComponent
{
	uint8_t Pad_0x700[0x10]; // 0x700(0x10)


	// Object: Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f462a0
	// Params: [ Num(2) Size(0x11) ]
	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles);

	// Object: Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f461cc
	// Params: [ Num(0) Size(0x0) ]
	void ClearCustomMeshTriangles();

	// Object: Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f461e0
	// Params: [ Num(1) Size(0x10) ]
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles);
};

} // namespace SDK
