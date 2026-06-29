// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject
{

	// Object: Function MRMesh.MeshReconstructorBase.StopReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8f5a044
	// Params: [ Num(0) Size(0x0) ]
	void StopReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.StartReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8f5a060
	// Params: [ Num(0) Size(0x0) ]
	void StartReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.PauseReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8f5a028
	// Params: [ Num(0) Size(0x0) ]
	void PauseReconstruction();

	// Object: Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f59fe8
	// Params: [ Num(1) Size(0x1) ]
	bool IsReconstructionStarted();

	// Object: Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f59fa8
	// Params: [ Num(1) Size(0x1) ]
	bool IsReconstructionPaused();

	// Object: Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// Flags: [Native|Public]
	// Offset: 0x8f59edc
	// Params: [ Num(0) Size(0x0) ]
	void DisconnectMRMesh();

	// Object: Function MRMesh.MeshReconstructorBase.ConnectMRMesh
	// Flags: [Native|Public]
	// Offset: 0x8f59ef8
	// Params: [ Num(1) Size(0x8) ]
	void ConnectMRMesh(struct UMRMeshComponent* Mesh);
};

// Object: Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x3C0 (Inherited: 0x350)
struct UMockDataMeshTrackerComponent : USceneComponent
{
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x348(0x10)
	bool ScanWorld; // 0x358(0x1)
	bool RequestNormals; // 0x359(0x1)
	bool RequestVertexConfidence; // 0x35A(0x1)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x35B(0x1)
	struct TArray<struct FColor> BlockVertexColors; // 0x360(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x370(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x380(0x10)
	float UpdateInterval; // 0x390(0x4)
	struct UMRMeshComponent* MRMesh; // 0x398(0x8)
	uint8_t Pad_0x3A0[0x20]; // 0x3A0(0x20)


	// Object: DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(5) Size(0x48) ]
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence);

	// Object: Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f5a5fc
	// Params: [ Num(1) Size(0x8) ]
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr);

	// Object: Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f5a6a4
	// Params: [ Num(1) Size(0x8) ]
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr);
};

// Object: Class MRMesh.MRMeshComponent
// Size: 0x670 (Inherited: 0x5F0)
struct UMRMeshComponent : UPrimitiveComponent
{
	uint8_t Pad_0x5F0[0x8]; // 0x5F0(0x8)
	struct UMaterialInterface* Material; // 0x5F8(0x8)
	bool bCreateMeshProxySections; // 0x600(0x1)
	bool bUpdateNavMeshOnMeshUpdate; // 0x601(0x1)
	bool bNeverCreateCollisionMesh; // 0x602(0x1)
	uint8_t Pad_0x603[0x5]; // 0x603(0x5)
	struct UBodySetup* CachedBodySetup; // 0x608(0x8)
	struct TArray<struct UBodySetup*> BodySetups; // 0x610(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x620(0x8)
	uint8_t Pad_0x628[0x48]; // 0x628(0x48)


	// Object: Function MRMesh.MRMeshComponent.IsConnected
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f5a9a0
	// Params: [ Num(1) Size(0x1) ]
	bool IsConnected();

	// Object: Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f5a98c
	// Params: [ Num(0) Size(0x0) ]
	void ForceNavMeshUpdate();

	// Object: Function MRMesh.MRMeshComponent.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f5a970
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

} // namespace SDK
