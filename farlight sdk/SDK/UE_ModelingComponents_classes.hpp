// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ModelingComponents.BaseDynamicMeshComponent
// Size: 0x750 (Inherited: 0x700)
struct UBaseDynamicMeshComponent : UMeshComponent
{
	uint8_t Pad_0x700[0x50]; // 0x700(0x50)
};

// Object: Class ModelingComponents.SimpleDynamicMeshComponent
// Size: 0x880 (Inherited: 0x750)
struct USimpleDynamicMeshComponent : UBaseDynamicMeshComponent
{
	enum class EDynamicMeshTangentCalcType TangentsType; // 0x741(0x1)
	bool bInvalidateProxyOnChange; // 0x742(0x1)
	uint8_t Pad_0x752[0x26]; // 0x752(0x26)
	bool bExplicitShowWireframe; // 0x778(0x1)
	uint8_t Pad_0x779[0x47]; // 0x779(0x47)
	bool bDrawOnTop; // 0x7C0(0x1)
	uint8_t Pad_0x7C1[0xBF]; // 0x7C1(0xBF)
};

// Object: Class ModelingComponents.CollectSurfacePathMechanic
// Size: 0x540 (Inherited: 0x30)
struct UCollectSurfacePathMechanic : UInteractionMechanic
{
	uint8_t Pad_0x30[0x510]; // 0x30(0x510)
};

// Object: Class ModelingComponents.ConstructionPlaneMechanic
// Size: 0xF0 (Inherited: 0x30)
struct UConstructionPlaneMechanic : UInteractionMechanic
{
	uint8_t Pad_0x30[0x98]; // 0x30(0x98)
	struct UTransformGizmo* PlaneTransformGizmo; // 0xC8(0x8)
	struct UTransformProxy* PlaneTransformProxy; // 0xD0(0x8)
	uint8_t Pad_0xD8[0x10]; // 0xD8(0x10)
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior; // 0xE8(0x8)
};

// Object: Class ModelingComponents.DynamicMeshReplacementChangeTarget
// Size: 0x58 (Inherited: 0x28)
struct UDynamicMeshReplacementChangeTarget : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
};

// Object: Class ModelingComponents.LineSetComponent
// Size: 0x760 (Inherited: 0x700)
struct ULineSetComponent : UMeshComponent
{
	struct UMaterialInterface* LineMaterial; // 0x700(0x8)
	struct FBoxSphereBounds Bounds; // 0x708(0x1C)
	bool bBoundsDirty; // 0x724(0x1)
	uint8_t Pad_0x725[0x3B]; // 0x725(0x3B)
};

// Object: Class ModelingComponents.MeshCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct IMeshCommandChangeTarget : IInterface
{
};

// Object: Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// Size: 0x90 (Inherited: 0x28)
struct UMeshOpPreviewWithBackgroundCompute : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
	struct UPreviewMesh* PreviewMesh; // 0x58(0x8)
	struct TArray<struct UMaterialInterface*> StandardMaterials; // 0x60(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x70(0x8)
	struct UMaterialInterface* WorkingMaterial; // 0x78(0x8)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class ModelingComponents.MeshReplacementCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct IMeshReplacementCommandChangeTarget : IInterface
{
};

// Object: Class ModelingComponents.MeshVertexCommandChangeTarget
// Size: 0x28 (Inherited: 0x28)
struct IMeshVertexCommandChangeTarget : IInterface
{
};

// Object: Class ModelingComponents.MultiTransformer
// Size: 0x140 (Inherited: 0x28)
struct UMultiTransformer : UObject
{
	uint8_t Pad_0x28[0xB0]; // 0x28(0xB0)
	struct UTransformGizmo* TransformGizmo; // 0xD8(0x8)
	struct UTransformProxy* TransformProxy; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x58]; // 0xE8(0x58)
};

// Object: Class ModelingComponents.OctreeDynamicMeshComponent
// Size: 0x860 (Inherited: 0x750)
struct UOctreeDynamicMeshComponent : UBaseDynamicMeshComponent
{
	uint8_t Pad_0x750[0x10]; // 0x750(0x10)
	bool bExplicitShowWireframe; // 0x760(0x1)
	uint8_t Pad_0x761[0xFF]; // 0x761(0xFF)
};

// Object: Class ModelingComponents.PlaneDistanceFromHitMechanic
// Size: 0x420 (Inherited: 0x30)
struct UPlaneDistanceFromHitMechanic : UInteractionMechanic
{
	uint8_t Pad_0x30[0x3F0]; // 0x30(0x3F0)
};

// Object: Class ModelingComponents.PointSetComponent
// Size: 0x760 (Inherited: 0x700)
struct UPointSetComponent : UMeshComponent
{
	struct UMaterialInterface* PointMaterial; // 0x700(0x8)
	struct FBoxSphereBounds Bounds; // 0x708(0x1C)
	bool bBoundsDirty; // 0x724(0x1)
	uint8_t Pad_0x725[0x3B]; // 0x725(0x3B)
};

// Object: Class ModelingComponents.PreviewMesh
// Size: 0xE0 (Inherited: 0x28)
struct UPreviewMesh : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	bool bBuildSpatialDataStructure; // 0x40(0x1)
	bool bDrawOnTop; // 0x41(0x1)
	uint8_t Pad_0x42[0xE]; // 0x42(0xE)
	struct USimpleDynamicMeshComponent* DynamicMeshComponent; // 0x50(0x8)
	uint8_t Pad_0x58[0x88]; // 0x58(0x88)
};

// Object: Class ModelingComponents.PolyEditPreviewMesh
// Size: 0x478 (Inherited: 0xE0)
struct UPolyEditPreviewMesh : UPreviewMesh
{
	uint8_t Pad_0xE0[0x398]; // 0xE0(0x398)
};

// Object: Class ModelingComponents.PolygonSelectionMechanicProperties
// Size: 0x68 (Inherited: 0x60)
struct UPolygonSelectionMechanicProperties : UInteractiveToolPropertySet
{
	bool bSelectFaces; // 0x60(0x1)
	bool bSelectEdges; // 0x61(0x1)
	bool bSelectVertices; // 0x62(0x1)
	uint8_t Pad_0x63[0x5]; // 0x63(0x5)
};

// Object: Class ModelingComponents.PolygonSelectionMechanic
// Size: 0x590 (Inherited: 0x30)
struct UPolygonSelectionMechanic : UInteractionMechanic
{
	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
	struct UPolygonSelectionMechanicProperties* Properties; // 0x50(0x8)
	uint8_t Pad_0x58[0x538]; // 0x58(0x538)
};

// Object: Class ModelingComponents.PreviewMeshActor
// Size: 0x2E0 (Inherited: 0x2E0)
struct APreviewMeshActor : AInternalToolFrameworkActor
{
};

// Object: Class ModelingComponents.SpatialCurveDistanceMechanic
// Size: 0x400 (Inherited: 0x30)
struct USpatialCurveDistanceMechanic : UInteractionMechanic
{
	uint8_t Pad_0x30[0x3D0]; // 0x30(0x3D0)
};

} // namespace SDK
