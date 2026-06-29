// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum MeshWidget.EUIMeshTransform
enum class EUIMeshTransform : uint8_t
{
	Perspective = 0,
	Orthographic = 1,
	EUIMeshTransform_MAX = 2
};

// Object: ScriptStruct MeshWidget.UIMeshTransformInfo
// Size: 0x60 (Inherited: 0x0)
struct FUIMeshTransformInfo
{
	struct FTransform MeshTransform; // 0x0(0x30)
	struct FVector MeshScale; // 0x30(0xC)
	struct FVector MeshTranslate; // 0x3C(0xC)
	struct FVector MeshRotate; // 0x48(0xC)
	bool bDirty; // 0x54(0x1)
	uint8_t Pad_0x55[0xB]; // 0x55(0xB)
};

// Object: ScriptStruct MeshWidget.UIMeshVertex
// Size: 0x20 (Inherited: 0x0)
struct FUIMeshVertex
{
	struct FVector Position; // 0x0(0xC)
	struct FColor Color; // 0xC(0x4)
	struct FVector2D UV0; // 0x10(0x8)
	struct FVector2D UV1; // 0x18(0x8)
};

// Object: ScriptStruct MeshWidget.UIMeshCameraInfo
// Size: 0x80 (Inherited: 0x0)
struct FUIMeshCameraInfo
{
	enum class EUIMeshTransform TransformType; // 0x0(0x1)
	bool bUseWorldMeshTransform; // 0x1(0x1)
	bool bUseCustomCameraParam; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float HalfFov; // 0x4(0x4)
	float NearClip; // 0x8(0x4)
	struct FVector CameraRotate; // 0xC(0xC)
	struct FVector CameraPosition; // 0x18(0xC)
	bool bDirty; // 0x24(0x1)
	uint8_t Pad_0x25[0x5B]; // 0x25(0x5B)
};

// Object: ScriptStruct MeshWidget.UIMeshInstanceData
// Size: 0x20 (Inherited: 0x0)
struct FUIMeshInstanceData
{
	struct FVector4 InstanceData1; // 0x0(0x10)
	struct FVector4 InstanceData2; // 0x10(0x10)
};

// Object: ScriptStruct MeshWidget.VertexCluster
// Size: 0x90 (Inherited: 0x0)
struct FVertexCluster
{
	int32_t ClusterNum; // 0x0(0x4)
	struct FVector2D Center; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<int32_t, struct FCoefficent> ClusterSlope; // 0x10(0x50)
	struct FTransform ClusterTransform; // 0x60(0x30)
};

// Object: ScriptStruct MeshWidget.Coefficent
// Size: 0x8 (Inherited: 0x0)
struct FCoefficent
{
	float A; // 0x0(0x4)
	bool bIsNearlyInf; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

} // namespace SDK
