// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject
{
};

// Object: Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject
{
};

// Object: Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 (Inherited: 0x28)
struct UClothingAssetBase : UObject
{
	struct FString ImportedFilePath; // 0x28(0x10)
	struct FGuid AssetGuid; // 0x38(0x10)
};

// Object: Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactory : UObject
{
};

// Object: Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x30 (Inherited: 0x28)
struct UClothingSimulationInteractor : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)


	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9b0e008
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimDriveSpringStiffness(float InStiffness);

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9b0e0d4
	// Params: [ Num(0) Size(0x0) ]
	void PhysicsAssetUpdated();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9b0df50
	// Params: [ Num(1) Size(0xC) ]
	void EnableGravityOverride(struct FVector& InVector);

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9b0df34
	// Params: [ Num(0) Size(0x0) ]
	void DisableGravityOverride();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9b0e0b8
	// Params: [ Num(0) Size(0x0) ]
	void ClothConfigUpdated();
};

// Object: Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xE0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject
{
	struct TArray<struct FVector> Vertices; // 0x28(0x10)
	struct TArray<struct FVector> Normals; // 0x38(0x10)
	struct TArray<uint32_t> Indices; // 0x48(0x10)
	struct TArray<float> InverseMasses; // 0x58(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x4)
	int32_t MaxBoneWeights; // 0x7C(0x4)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
	uint8_t Pad_0x90[0x50]; // 0x90(0x50)
};

} // namespace SDK
