// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class InteractiveToolsFramework.InputBehavior
// Size: 0x30 (Inherited: 0x28)
struct UInputBehavior : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x70 (Inherited: 0x30)
struct UAnyButtonInputBehavior : UInputBehavior
{
	uint8_t Pad_0x30[0x40]; // 0x30(0x40)
};

// Object: Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveGizmoBuilder : UObject
{
};

// Object: Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder
{
};

// Object: Class InteractiveToolsFramework.InteractiveGizmo
// Size: 0x38 (Inherited: 0x28)
struct UInteractiveGizmo : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UInputBehaviorSet* InputBehaviors; // 0x30(0x8)
};

// Object: Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0xF0 (Inherited: 0x38)
struct UAxisAngleGizmo : UInteractiveGizmo
{
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bInInteraction; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	struct FVector RotationOrigin; // 0x8C(0xC)
	struct FVector RotationAxis; // 0x98(0xC)
	struct FVector RotationPlaneX; // 0xA4(0xC)
	struct FVector RotationPlaneY; // 0xB0(0xC)
	struct FVector InteractionStartPoint; // 0xBC(0xC)
	struct FVector InteractionCurPoint; // 0xC8(0xC)
	float InteractionStartAngle; // 0xD4(0x4)
	float InteractionCurAngle; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x14]; // 0xDC(0x14)
};

// Object: Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder
{
};

// Object: Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0xD8 (Inherited: 0x38)
struct UAxisPositionGizmo : UInteractiveGizmo
{
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x1)
	bool bInInteraction; // 0x89(0x1)
	uint8_t Pad_0x8A[0x2]; // 0x8A(0x2)
	struct FVector InteractionOrigin; // 0x8C(0xC)
	struct FVector InteractionAxis; // 0x98(0xC)
	struct FVector InteractionStartPoint; // 0xA4(0xC)
	struct FVector InteractionCurPoint; // 0xB0(0xC)
	float InteractionStartParameter; // 0xBC(0x4)
	float InteractionCurParameter; // 0xC0(0x4)
	float ParameterSign; // 0xC4(0x4)
	uint8_t Pad_0xC8[0x10]; // 0xC8(0x10)
};

// Object: Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoConstantAxisSource : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	struct FVector Direction; // 0x3C(0xC)
};

// Object: Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x60 (Inherited: 0x28)
struct UGizmoConstantFrameAxisSource : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	struct FVector Direction; // 0x3C(0xC)
	struct FVector TangentX; // 0x48(0xC)
	struct FVector TangentY; // 0x54(0xC)
};

// Object: Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoWorldAxisSource : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	int32_t AxisIndex; // 0x3C(0x4)
};

// Object: Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x40 (Inherited: 0x28)
struct UGizmoComponentAxisSource : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct USceneComponent* Component; // 0x30(0x8)
	int32_t AxisIndex; // 0x38(0x4)
	bool bLocalAxes; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0x60 (Inherited: 0x28)
struct UInteractiveToolPropertySet : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UInteractiveToolPropertySet* CachedProperties; // 0x38(0x8)
	bool bIsPropertySetEnabled; // 0x40(0x1)
	uint8_t Pad_0x41[0x1F]; // 0x41(0x1F)
};

// Object: Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0x78 (Inherited: 0x60)
struct UBrushBaseProperties : UInteractiveToolPropertySet
{
	float BrushSize; // 0x60(0x4)
	bool bSpecifyRadius; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	float BrushRadius; // 0x68(0x4)
	float BrushStrength; // 0x6C(0x4)
	float BrushFalloffAmount; // 0x70(0x4)
	bool bShowStrength; // 0x74(0x1)
	bool bShowFalloff; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
};

// Object: Class InteractiveToolsFramework.InteractiveTool
// Size: 0x80 (Inherited: 0x28)
struct UInteractiveTool : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
	struct UInputBehaviorSet* InputBehaviors; // 0x48(0x8)
	struct TArray<struct UObject*> ToolPropertyObjects; // 0x50(0x10)
	uint8_t Pad_0x60[0x20]; // 0x60(0x20)
};

// Object: Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0x88 (Inherited: 0x80)
struct USingleSelectionTool : UInteractiveTool
{
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0xC0 (Inherited: 0x88)
struct UMeshSurfacePointTool : USingleSelectionTool
{
	uint8_t Pad_0x88[0x38]; // 0x88(0x38)
};

// Object: Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x1B8 (Inherited: 0xC0)
struct UBaseBrushTool : UMeshSurfacePointTool
{
	struct UBrushBaseProperties* BrushProperties; // 0xC0(0x8)
	bool bInBrushStroke; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x3]; // 0xC9(0x3)
	struct FBrushStampData LastBrushStamp; // 0xCC(0xA8)
	uint8_t Pad_0x174[0x14]; // 0x174(0x14)
	struct TSoftClassPtr<struct UBrushBaseProperties*> PropertyClass; // 0x188(0x28)
	struct UBrushStampIndicator* BrushStampIndicator; // 0x1B0(0x8)
};

// Object: Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size: 0x28 (Inherited: 0x28)
struct UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder
{
};

// Object: Class InteractiveToolsFramework.BrushStampIndicator
// Size: 0xB0 (Inherited: 0x38)
struct UBrushStampIndicator : UInteractiveGizmo
{
	float BrushRadius; // 0x38(0x4)
	float BrushFalloff; // 0x3C(0x4)
	struct FVector BrushPosition; // 0x40(0xC)
	struct FVector BrushNormal; // 0x4C(0xC)
	bool bDrawIndicatorLines; // 0x58(0x1)
	bool bDrawRadiusCircle; // 0x59(0x1)
	bool bDrawFalloffCircle; // 0x5A(0x1)
	uint8_t Pad_0x5B[0x1]; // 0x5B(0x1)
	int32_t SampleStepCount; // 0x5C(0x4)
	struct FLinearColor LineColor; // 0x60(0x10)
	float LineThickness; // 0x70(0x4)
	bool bDepthTested; // 0x74(0x1)
	bool bDrawSecondaryLines; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
	float SecondaryLineThickness; // 0x78(0x4)
	struct FLinearColor SecondaryLineColor; // 0x7C(0x10)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct UPrimitiveComponent* AttachedComponent; // 0x90(0x8)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)
};

// Object: Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x130 (Inherited: 0x70)
struct UClickDragInputBehavior : UAnyButtonInputBehavior
{
	uint8_t Pad_0x70[0xA0]; // 0x70(0xA0)
	bool bUpdateModifiersDuringDrag; // 0x110(0x1)
	uint8_t Pad_0x111[0x1F]; // 0x111(0x1F)
};

// Object: Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x270 (Inherited: 0x130)
struct ULocalClickDragInputBehavior : UClickDragInputBehavior
{
	uint8_t Pad_0x130[0x140]; // 0x130(0x140)
};

// Object: Class InteractiveToolsFramework.InteractiveToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UInteractiveToolBuilder : UObject
{
};

// Object: Class InteractiveToolsFramework.ClickDragToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct UClickDragToolBuilder : UInteractiveToolBuilder
{
};

// Object: Class InteractiveToolsFramework.ClickDragTool
// Size: 0x88 (Inherited: 0x80)
struct UClickDragTool : UInteractiveTool
{
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size: 0x2E0 (Inherited: 0x2E0)
struct AInternalToolFrameworkActor : AActor
{
};

// Object: Class InteractiveToolsFramework.GizmoActor
// Size: 0x2E0 (Inherited: 0x2E0)
struct AGizmoActor : AInternalToolFrameworkActor
{
};

// Object: Class InteractiveToolsFramework.GizmoBaseComponent
// Size: 0x610 (Inherited: 0x5F0)
struct UGizmoBaseComponent : UPrimitiveComponent
{
	struct FLinearColor Color; // 0x5F0(0x10)
	float HoverSizeMultiplier; // 0x600(0x4)
	float PixelHitDistanceThreshold; // 0x604(0x4)
	uint8_t Pad_0x608[0x8]; // 0x608(0x8)


	// Object: Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	// Flags: [Final|Native|Public]
	// Offset: 0xa985418
	// Params: [ Num(1) Size(0x1) ]
	void UpdateWorldLocalState(bool bWorldIn);

	// Object: Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	// Flags: [Final|Native|Public]
	// Offset: 0xa9854d0
	// Params: [ Num(1) Size(0x1) ]
	void UpdateHoverState(bool bHoveringIn);
};

// Object: Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x630 (Inherited: 0x610)
struct UGizmoArrowComponent : UGizmoBaseComponent
{
	struct FVector Direction; // 0x610(0xC)
	float Gap; // 0x61C(0x4)
	float Length; // 0x620(0x4)
	float Thickness; // 0x624(0x4)
	uint8_t Pad_0x628[0x8]; // 0x628(0x8)
};

// Object: Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x650 (Inherited: 0x610)
struct UGizmoBoxComponent : UGizmoBaseComponent
{
	struct FVector Origin; // 0x610(0xC)
	uint8_t Pad_0x61C[0x4]; // 0x61C(0x4)
	struct FQuat Rotation; // 0x620(0x10)
	struct FVector Dimensions; // 0x630(0xC)
	float LineThickness; // 0x63C(0x4)
	bool bRemoveHiddenLines; // 0x640(0x1)
	bool bEnableAxisFlip; // 0x641(0x1)
	uint8_t Pad_0x642[0xE]; // 0x642(0xE)
};

// Object: Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x630 (Inherited: 0x610)
struct UGizmoCircleComponent : UGizmoBaseComponent
{
	struct FVector Normal; // 0x610(0xC)
	float Radius; // 0x61C(0x4)
	float Thickness; // 0x620(0x4)
	int32_t NumSides; // 0x624(0x4)
	bool bViewAligned; // 0x628(0x1)
	bool bOnlyAllowFrontFacingHits; // 0x629(0x1)
	uint8_t Pad_0x62A[0x6]; // 0x62A(0x6)
};

// Object: Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x28 (Inherited: 0x28)
struct IGizmoTransformSource : IInterface
{

	// Object: Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xa985d38
	// Params: [ Num(1) Size(0x30) ]
	void SetTransform(struct FTransform& NewTransform);

	// Object: Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0xa985e1c
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetTransform();
};

// Object: Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x28 (Inherited: 0x28)
struct IGizmoAxisSource : IInterface
{

	// Object: Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	// Flags: [Native|Public|Const]
	// Offset: 0xa986358
	// Params: [ Num(1) Size(0x1) ]
	bool HasTangentVectors();

	// Object: Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	// Flags: [Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0xa986258
	// Params: [ Num(2) Size(0x18) ]
	void GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut);

	// Object: Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0xa9863d8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetOrigin();

	// Object: Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0xa986398
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetDirection();
};

// Object: Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x28 (Inherited: 0x28)
struct IGizmoClickTarget : IInterface
{

	// Object: Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	// Flags: [Native|Public|Const]
	// Offset: 0xa9867bc
	// Params: [ Num(1) Size(0x1) ]
	void UpdateHoverState(bool bHovering);
};

// Object: Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x28 (Inherited: 0x28)
struct IGizmoStateTarget : IInterface
{

	// Object: Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	// Flags: [Native|Public]
	// Offset: 0xa986b58
	// Params: [ Num(0) Size(0x0) ]
	void EndUpdate();

	// Object: Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	// Flags: [Native|Public]
	// Offset: 0xa986b74
	// Params: [ Num(0) Size(0x0) ]
	void BeginUpdate();
};

// Object: Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x28 (Inherited: 0x28)
struct IGizmoFloatParameterSource : IInterface
{

	// Object: Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	// Flags: [Native|Public]
	// Offset: 0xa986ec4
	// Params: [ Num(1) Size(0x4) ]
	void SetParameter(float NewValue);

	// Object: Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	// Flags: [Native|Public|Const]
	// Offset: 0xa986f90
	// Params: [ Num(1) Size(0x4) ]
	float GetParameter();

	// Object: Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	// Flags: [Native|Public]
	// Offset: 0xa986ea8
	// Params: [ Num(0) Size(0x0) ]
	void EndModify();

	// Object: Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	// Flags: [Native|Public]
	// Offset: 0xa986f74
	// Params: [ Num(0) Size(0x0) ]
	void BeginModify();
};

// Object: Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x28 (Inherited: 0x28)
struct IGizmoVec2ParameterSource : IInterface
{

	// Object: Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xa987380
	// Params: [ Num(1) Size(0x8) ]
	void SetParameter(struct FVector2D& NewValue);

	// Object: Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0xa987454
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetParameter();

	// Object: Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	// Flags: [Native|Public]
	// Offset: 0xa987364
	// Params: [ Num(0) Size(0x0) ]
	void EndModify();

	// Object: Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	// Flags: [Native|Public]
	// Offset: 0xa987438
	// Params: [ Num(0) Size(0x0) ]
	void BeginModify();
};

// Object: Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x640 (Inherited: 0x610)
struct UGizmoLineHandleComponent : UGizmoBaseComponent
{
	struct FVector Normal; // 0x610(0xC)
	float HandleSize; // 0x61C(0x4)
	float Thickness; // 0x620(0x4)
	struct FVector Direction; // 0x624(0xC)
	float Length; // 0x630(0x4)
	bool bImageScale; // 0x634(0x1)
	uint8_t Pad_0x635[0xB]; // 0x635(0xB)
};

// Object: Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x640 (Inherited: 0x610)
struct UGizmoRectangleComponent : UGizmoBaseComponent
{
	struct FVector DirectionX; // 0x610(0xC)
	struct FVector DirectionY; // 0x61C(0xC)
	float OffsetX; // 0x628(0x4)
	float OffsetY; // 0x62C(0x4)
	float LengthX; // 0x630(0x4)
	float LengthY; // 0x634(0x4)
	float Thickness; // 0x638(0x4)
	uint8_t SegmentFlags; // 0x63C(0x1)
	uint8_t Pad_0x63D[0x3]; // 0x63D(0x3)
};

// Object: Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0xB0 (Inherited: 0x28)
struct UGizmoLambdaHitTarget : UObject
{
	uint8_t Pad_0x28[0x88]; // 0x28(0x88)
};

// Object: Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x80 (Inherited: 0x28)
struct UGizmoComponentHitTarget : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UPrimitiveComponent* Component; // 0x30(0x8)
	uint8_t Pad_0x38[0x48]; // 0x38(0x48)
};

// Object: Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x38 (Inherited: 0x28)
struct UInputBehaviorSet : UObject
{
	struct TArray<struct FBehaviorInfo> Behaviors; // 0x28(0x10)
};

// Object: Class InteractiveToolsFramework.InputBehaviorSource
// Size: 0x28 (Inherited: 0x28)
struct IInputBehaviorSource : IInterface
{
};

// Object: Class InteractiveToolsFramework.InputRouter
// Size: 0xB0 (Inherited: 0x28)
struct UInputRouter : UObject
{
	bool bAutoInvalidateOnHover; // 0x28(0x1)
	bool bAutoInvalidateOnCapture; // 0x29(0x1)
	uint8_t Pad_0x2A[0xE]; // 0x2A(0xE)
	struct UInputBehaviorSet* ActiveInputBehaviors; // 0x38(0x8)
	uint8_t Pad_0x40[0x70]; // 0x40(0x70)
};

// Object: Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x30 (Inherited: 0x28)
struct UInteractionMechanic : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0xB8 (Inherited: 0x28)
struct UInteractiveGizmoManager : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x30(0x10)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58(0x50)
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)
};

// Object: Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x28 (Inherited: 0x28)
struct IToolContextTransactionProvider : IInterface
{
};

// Object: Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x138 (Inherited: 0x28)
struct UInteractiveToolManager : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UInteractiveTool* ActiveLeftTool; // 0x30(0x8)
	struct UInteractiveTool* ActiveRightTool; // 0x38(0x8)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; // 0x90(0x50)
	uint8_t Pad_0xE0[0x58]; // 0xE0(0x58)
};

// Object: Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x28 (Inherited: 0x28)
struct IToolFrameworkComponent : IInterface
{
};

// Object: Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0x98 (Inherited: 0x28)
struct UInteractiveToolsContext : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
	struct UInputRouter* InputRouter; // 0x58(0x8)
	struct UInteractiveToolManager* ToolManager; // 0x60(0x8)
	struct UInteractiveGizmoManager* GizmoManager; // 0x68(0x8)
	struct TSoftClassPtr<struct UInteractiveToolManager*> ToolManagerClass; // 0x70(0x28)
};

// Object: Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x2F8 (Inherited: 0x2E0)
struct AIntervalGizmoActor : AGizmoActor
{
	struct UGizmoLineHandleComponent* UpIntervalComponent; // 0x2E0(0x8)
	struct UGizmoLineHandleComponent* DownIntervalComponent; // 0x2E8(0x8)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x2F0(0x8)
};

// Object: Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0xC0 (Inherited: 0x28)
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder
{
	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
};

// Object: Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x130 (Inherited: 0x38)
struct UIntervalGizmo : UInteractiveGizmo
{
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x38(0x8)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	struct UTransformProxy* TransformProxy; // 0x50(0x8)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x58(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x68(0x10)
	uint8_t Pad_0x78[0x18]; // 0x78(0x18)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x90(0x8)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x98(0x8)
	uint8_t Pad_0xA0[0x90]; // 0xA0(0x90)
};

// Object: Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseFloatParameterSource : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource
{
	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48(0x10)
	float MinParameter; // 0x58(0x4)
	float MaxParameter; // 0x5C(0x4)
};

// Object: Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0x110 (Inherited: 0x30)
struct UKeyAsModifierInputBehavior : UInputBehavior
{
	uint8_t Pad_0x30[0xE0]; // 0x30(0xE0)
};

// Object: Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x30 (Inherited: 0x28)
struct UMeshSurfacePointToolBuilder : UInteractiveToolBuilder
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0x98 (Inherited: 0x30)
struct UMouseHoverBehavior : UInputBehavior
{
	uint8_t Pad_0x30[0x68]; // 0x30(0x68)
};

// Object: Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x120 (Inherited: 0x70)
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior
{
	uint8_t Pad_0x70[0xB0]; // 0x70(0xB0)
};

// Object: Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0x90 (Inherited: 0x80)
struct UMultiSelectionTool : UInteractiveTool
{
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource
{
	float Value; // 0x48(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0x4C(0x8)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseVec2ParameterSource : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x60 (Inherited: 0x48)
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource
{
	struct FVector2D Value; // 0x48(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0x50(0x10)
};

// Object: Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x110 (Inherited: 0x48)
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource
{
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0(0x10)
	float Parameter; // 0xB0(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0xB4(0x8)
	struct FVector CurTranslationAxis; // 0xBC(0xC)
	struct FVector CurTranslationOrigin; // 0xC8(0xC)
	uint8_t Pad_0xD4[0xC]; // 0xD4(0xC)
	struct FTransform InitialTransform; // 0xE0(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x130 (Inherited: 0x48)
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource
{
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0(0x10)
	struct FVector2D Parameter; // 0xB0(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0xB8(0x10)
	struct FVector CurTranslationOrigin; // 0xC8(0xC)
	struct FVector CurTranslationNormal; // 0xD4(0xC)
	struct FVector CurTranslationAxisX; // 0xE0(0xC)
	struct FVector CurTranslationAxisY; // 0xEC(0xC)
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0xC0 (Inherited: 0x48)
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource
{
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float Angle; // 0x68(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0x6C(0x8)
	struct FVector CurRotationAxis; // 0x74(0xC)
	struct FVector CurRotationOrigin; // 0x80(0xC)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FTransform InitialTransform; // 0x90(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0xF0 (Inherited: 0x48)
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource
{
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x4)
	struct FVector2D Parameter; // 0x6C(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0x74(0x10)
	struct FVector CurScaleOrigin; // 0x84(0xC)
	struct FVector CurScaleNormal; // 0x90(0xC)
	struct FVector CurScaleAxisX; // 0x9C(0xC)
	struct FVector CurScaleAxisY; // 0xA8(0xC)
	uint8_t Pad_0xB4[0xC]; // 0xB4(0xC)
	struct FTransform InitialTransform; // 0xC0(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0xC0 (Inherited: 0x48)
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource
{
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x4)
	float Parameter; // 0x6C(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0x70(0x8)
	struct FVector CurScaleAxis; // 0x78(0xC)
	struct FVector CurScaleOrigin; // 0x84(0xC)
	struct FTransform InitialTransform; // 0x90(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x130 (Inherited: 0x48)
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource
{
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0(0x10)
	float ScaleMultiplier; // 0xB0(0x4)
	struct FVector2D Parameter; // 0xB4(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0xBC(0x10)
	struct FVector CurScaleOrigin; // 0xCC(0xC)
	struct FVector CurScaleNormal; // 0xD8(0xC)
	struct FVector CurScaleAxisX; // 0xE4(0xC)
	struct FVector CurScaleAxisY; // 0xF0(0xC)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Object: Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x28 (Inherited: 0x28)
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder
{
};

// Object: Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x100 (Inherited: 0x38)
struct UPlanePositionGizmo : UInteractiveGizmo
{
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48(0x10)
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x1)
	bool bFlipX; // 0x89(0x1)
	bool bFlipY; // 0x8A(0x1)
	bool bInInteraction; // 0x8B(0x1)
	struct FVector InteractionOrigin; // 0x8C(0xC)
	struct FVector InteractionNormal; // 0x98(0xC)
	struct FVector InteractionAxisX; // 0xA4(0xC)
	struct FVector InteractionAxisY; // 0xB0(0xC)
	struct FVector InteractionStartPoint; // 0xBC(0xC)
	struct FVector InteractionCurPoint; // 0xC8(0xC)
	struct FVector2D InteractionStartParameter; // 0xD4(0x8)
	struct FVector2D InteractionCurParameter; // 0xDC(0x8)
	struct FVector2D ParameterSigns; // 0xE4(0x8)
	uint8_t Pad_0xEC[0x14]; // 0xEC(0x14)
};

// Object: Class InteractiveToolsFramework.SelectionSet
// Size: 0x40 (Inherited: 0x28)
struct USelectionSet : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x80 (Inherited: 0x40)
struct UMeshSelectionSet : USelectionSet
{
	struct TArray<int32_t> Vertices; // 0x40(0x10)
	struct TArray<int32_t> Edges; // 0x50(0x10)
	struct TArray<int32_t> Faces; // 0x60(0x10)
	struct TArray<int32_t> Groups; // 0x70(0x10)
};

// Object: Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x120 (Inherited: 0x70)
struct USingleClickInputBehavior : UAnyButtonInputBehavior
{
	uint8_t Pad_0x70[0x40]; // 0x70(0x40)
	bool HitTestOnRelease; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x6F]; // 0xB1(0x6F)
};

// Object: Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x28 (Inherited: 0x28)
struct USingleClickToolBuilder : UInteractiveToolBuilder
{
};

// Object: Class InteractiveToolsFramework.SingleClickTool
// Size: 0x88 (Inherited: 0x80)
struct USingleClickTool : UInteractiveTool
{
	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x30 (Inherited: 0x28)
struct UGizmoNilStateTarget : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0xB0 (Inherited: 0x28)
struct UGizmoLambdaStateTarget : UObject
{
	uint8_t Pad_0x28[0x88]; // 0x28(0x88)
};

// Object: Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x58 (Inherited: 0x28)
struct UGizmoObjectModifyStateTarget : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0xE0 (Inherited: 0x28)
struct UGizmoTransformChangeStateTarget : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50(0x10)
	uint8_t Pad_0x60[0x80]; // 0x60(0x80)
};

// Object: Class InteractiveToolsFramework.TransformGizmoActor
// Size: 0x360 (Inherited: 0x2E0)
struct ATransformGizmoActor : AGizmoActor
{
	struct UPrimitiveComponent* TranslateX; // 0x2E0(0x8)
	struct UPrimitiveComponent* TranslateY; // 0x2E8(0x8)
	struct UPrimitiveComponent* TranslateZ; // 0x2F0(0x8)
	struct UPrimitiveComponent* TranslateYZ; // 0x2F8(0x8)
	struct UPrimitiveComponent* TranslateXZ; // 0x300(0x8)
	struct UPrimitiveComponent* TranslateXY; // 0x308(0x8)
	struct UPrimitiveComponent* RotateX; // 0x310(0x8)
	struct UPrimitiveComponent* RotateY; // 0x318(0x8)
	struct UPrimitiveComponent* RotateZ; // 0x320(0x8)
	struct UPrimitiveComponent* UniformScale; // 0x328(0x8)
	struct UPrimitiveComponent* AxisScaleX; // 0x330(0x8)
	struct UPrimitiveComponent* AxisScaleY; // 0x338(0x8)
	struct UPrimitiveComponent* AxisScaleZ; // 0x340(0x8)
	struct UPrimitiveComponent* PlaneScaleYZ; // 0x348(0x8)
	struct UPrimitiveComponent* PlaneScaleXZ; // 0x350(0x8)
	struct UPrimitiveComponent* PlaneScaleXY; // 0x358(0x8)
};

// Object: Class InteractiveToolsFramework.TransformGizmoBuilder
// Size: 0xC0 (Inherited: 0x28)
struct UTransformGizmoBuilder : UInteractiveGizmoBuilder
{
	uint8_t Pad_0x28[0x98]; // 0x28(0x98)
};

// Object: Class InteractiveToolsFramework.TransformGizmo
// Size: 0x180 (Inherited: 0x38)
struct UTransformGizmo : UInteractiveGizmo
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct UTransformProxy* ActiveTarget; // 0x40(0x8)
	bool bSnapToWorldGrid; // 0x48(0x1)
	bool bUseContextCoordinateSystem; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x4C(0x4)
	uint8_t Pad_0x50[0x90]; // 0x50(0x90)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0xE0(0x10)
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents; // 0xF0(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x100(0x10)
	uint8_t Pad_0x110[0x10]; // 0x110(0x10)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x120(0x8)
	struct UGizmoComponentAxisSource* AxisXSource; // 0x128(0x8)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x130(0x8)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x138(0x8)
	struct UGizmoComponentAxisSource* UnitAxisXSource; // 0x140(0x8)
	struct UGizmoComponentAxisSource* UnitAxisYSource; // 0x148(0x8)
	struct UGizmoComponentAxisSource* UnitAxisZSource; // 0x150(0x8)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x158(0x8)
	struct UGizmoScaledTransformSource* ScaledTransformSource; // 0x160(0x8)
	uint8_t Pad_0x168[0x18]; // 0x168(0x18)
};

// Object: Class InteractiveToolsFramework.TransformProxy
// Size: 0xF0 (Inherited: 0x28)
struct UTransformProxy : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
	bool bRotatePerObject; // 0x70(0x1)
	bool bSetPivotMode; // 0x71(0x1)
	uint8_t Pad_0x72[0x1E]; // 0x72(0x1E)
	struct FTransform SharedTransform; // 0x90(0x30)
	struct FTransform InitialSharedTransform; // 0xC0(0x30)
};

// Object: Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x48 (Inherited: 0x28)
struct UGizmoBaseTransformSource : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x58 (Inherited: 0x48)
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource
{
	struct USceneComponent* Component; // 0x48(0x8)
	bool bModifyComponentOnTransform; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0xE0 (Inherited: 0x48)
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource
{
	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48(0x10)
	uint8_t Pad_0x58[0x88]; // 0x58(0x88)
};

// Object: Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x50 (Inherited: 0x48)
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource
{
	struct UTransformProxy* Proxy; // 0x48(0x8)
};

} // namespace SDK
