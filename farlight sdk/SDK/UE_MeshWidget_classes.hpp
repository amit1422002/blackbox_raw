// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MeshWidget.MeshWidgetUWidget
// Size: 0x150 (Inherited: 0x140)
struct UMeshWidgetUWidget : UWidget
{
	uint8_t Pad_0x140[0x10]; // 0x140(0x10)
};

// Object: Class MeshWidget.UIMeshWidget
// Size: 0x680 (Inherited: 0x150)
struct UUIMeshWidget : UMeshWidgetUWidget
{
	uint8_t Pad_0x150[0x8]; // 0x150(0x8)
	int32_t NumInstance; // 0x158(0x4)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
	struct TArray<struct FUIMeshInstanceData> InstanceDatas; // 0x160(0x10)
	struct FUIMeshCameraInfo CameraInfo; // 0x170(0x80)
	struct TArray<struct FUIMeshVertex> MeshVertices; // 0x1F0(0x10)
	struct TArray<uint16_t> MeshIndices; // 0x200(0x10)
	struct FSlateBrush Brush; // 0x210(0x120)
	struct FDelegate BrushDelegate; // 0x330(0x10)
	struct TArray<struct FUIMeshTransformInfo> MeshInfos; // 0x340(0x10)
	struct FSlateBrush PlaceHolderBrush; // 0x350(0x120)
	struct FSlateBrush DynamicDefaultBrush; // 0x470(0x120)
	uint8_t Filter; // 0x590(0x1)
	uint8_t Pad_0x591[0x7]; // 0x591(0x7)
	struct FMulticastInlineDelegate OnURLDownloadFinish; // 0x598(0x10)
	uint8_t Pad_0x5A8[0xD8]; // 0x5A8(0xD8)


	// Object: DelegateFunction MeshWidget.UIMeshWidget.URLDownloadFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void URLDownloadFinish__DelegateSignature(bool bSuccess);

	// Object: Function MeshWidget.UIMeshWidget.SetViewProjectionMatrix
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d42580
	// Params: [ Num(1) Size(0x40) ]
	void SetViewProjectionMatrix(struct FMatrix ViewProjectionMatrix);

	// Object: Function MeshWidget.UIMeshWidget.SetPlaceHolderBrushScalar
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d42d88
	// Params: [ Num(1) Size(0x50) ]
	void SetPlaceHolderBrushScalar(struct TMap<struct FName, float>& ScalarParameterValues);

	// Object: Function MeshWidget.UIMeshWidget.SetNearClip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d42784
	// Params: [ Num(1) Size(0x4) ]
	void SetNearClip(float NearClip);

	// Object: Function MeshWidget.UIMeshWidget.SetMeshTranslate
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d42adc
	// Params: [ Num(2) Size(0x10) ]
	void SetMeshTranslate(struct FVector InTranslate, int32_t GEN_PARAM_ARRAY_INDEX);

	// Object: Function MeshWidget.UIMeshWidget.SetMeshTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d428d4
	// Params: [ Num(2) Size(0x34) ]
	void SetMeshTransform(struct FTransform InMeshTransform, int32_t MeshId);

	// Object: Function MeshWidget.UIMeshWidget.SetMeshScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d42bc4
	// Params: [ Num(2) Size(0x10) ]
	void SetMeshScale(struct FVector InScale, int32_t GEN_PARAM_ARRAY_INDEX);

	// Object: Function MeshWidget.UIMeshWidget.SetMeshRotate
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d429f4
	// Params: [ Num(2) Size(0x10) ]
	void SetMeshRotate(struct FVector InRotate, int32_t GEN_PARAM_ARRAY_INDEX);

	// Object: Function MeshWidget.UIMeshWidget.SetInstanceData2
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d42398
	// Params: [ Num(2) Size(0x14) ]
	void SetInstanceData2(struct FVector4 InstanceData, int32_t GEN_PARAM_ARRAY_INDEX);

	// Object: Function MeshWidget.UIMeshWidget.SetInstanceData1
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d4248c
	// Params: [ Num(2) Size(0x14) ]
	void SetInstanceData1(struct FVector4 InstanceData, int32_t GEN_PARAM_ARRAY_INDEX);

	// Object: Function MeshWidget.UIMeshWidget.SetHalfFov
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d4282c
	// Params: [ Num(1) Size(0x4) ]
	void SetHalfFov(float HalfFov);

	// Object: Function MeshWidget.UIMeshWidget.SetCameraRotate
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d426dc
	// Params: [ Num(1) Size(0xC) ]
	void SetCameraRotate(struct FVector InCameraRotate);

	// Object: Function MeshWidget.UIMeshWidget.SetCameraPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d42634
	// Params: [ Num(1) Size(0xC) ]
	void SetCameraPosition(struct FVector InCameraPosition);

	// Object: Function MeshWidget.UIMeshWidget.SetBrushScalar
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d42e70
	// Params: [ Num(1) Size(0x50) ]
	void SetBrushScalar(struct TMap<struct FName, float>& ScalarParameterValues);

	// Object: Function MeshWidget.UIMeshWidget.SetBrushMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d42f58
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushMaterial(struct UMaterialInterface* Material);

	// Object: Function MeshWidget.UIMeshWidget.SetBrushFromTextureDynamic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d42294
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTextureDynamic(struct UTexture2D* Texture, bool bMatchSize);

	// Object: Function MeshWidget.UIMeshWidget.SetBrushByTexture2D
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d42cac
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushByTexture2D(struct UTexture2D* NewTexture);

	// Object: Function MeshWidget.UIMeshWidget.ResetToPlaceholder
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d42384
	// Params: [ Num(0) Size(0x0) ]
	void ResetToPlaceholder();

	// Object: Function MeshWidget.UIMeshWidget.OnGetTextureFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d4206c
	// Params: [ Num(2) Size(0x18) ]
	void OnGetTextureFinished(struct FString FilePath, struct UTexture2D* Texture);

	// Object: Function MeshWidget.UIMeshWidget.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d42d54
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();

	// Object: Function MeshWidget.UIMeshWidget.DownloadImage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5d42160
	// Params: [ Num(2) Size(0x20) ]
	void DownloadImage(struct FString InNecessaryURL, struct TArray<struct FString>& InBaseCDNUrlList);
};

// Object: Class MeshWidget.GeometryBasedRectangleUIMeshWidget
// Size: 0x6F0 (Inherited: 0x680)
struct UGeometryBasedRectangleUIMeshWidget : UUIMeshWidget
{
	bool bKeepSlope; // 0x680(0x1)
	bool bKeepVertexDistance; // 0x681(0x1)
	uint8_t Pad_0x682[0x2]; // 0x682(0x2)
	struct FVector2D BoundingBox; // 0x684(0x8)
	uint8_t Pad_0x68C[0x4]; // 0x68C(0x4)
	struct TArray<struct FVertexCluster> MeshVertexClusters; // 0x690(0x10)
	uint8_t Pad_0x6A0[0x50]; // 0x6A0(0x50)
};

// Object: Class MeshWidget.ParticleWidget
// Size: 0x190 (Inherited: 0x150)
struct UParticleWidget : UMeshWidgetUWidget
{
	struct USlateVectorArtData* TrailMeshAsset; // 0x150(0x8)
	int32_t MaxParticleCount; // 0x158(0x4)
	uint8_t Pad_0x15C[0x34]; // 0x15C(0x34)
};

// Object: Class MeshWidget.MeshRectangleWidget
// Size: 0x1C0 (Inherited: 0x150)
struct UMeshRectangleWidget : UMeshWidgetUWidget
{
	struct UMaterialInterface* BaseMaterial; // 0x150(0x8)
	int32_t NumFloat4PerInstance; // 0x158(0x4)
	bool bMultiElementBatch; // 0x15C(0x1)
	bool bInstancesHittestable; // 0x15D(0x1)
	uint8_t Pad_0x15E[0x2]; // 0x15E(0x2)
	struct FMulticastInlineDelegate OnClicked; // 0x160(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x170(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x180(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x190(0x10)
	uint8_t Pad_0x1A0[0x20]; // 0x1A0(0x20)


	// Object: Function MeshWidget.MeshRectangleWidget.SetInstancesHittestability
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d4158c
	// Params: [ Num(1) Size(0x1) ]
	void SetInstancesHittestability(bool InValue);

	// Object: Function MeshWidget.MeshRectangleWidget.SetInstanceNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d414d0
	// Params: [ Num(1) Size(0x4) ]
	void SetInstanceNum(int32_t NewNum);

	// Object: Function MeshWidget.MeshRectangleWidget.ModifyInstanceNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d41428
	// Params: [ Num(1) Size(0x4) ]
	void ModifyInstanceNum(int32_t dNum);

	// Object: Function MeshWidget.MeshRectangleWidget.InitUnitTestProvider
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d41578
	// Params: [ Num(0) Size(0x0) ]
	void InitUnitTestProvider();
};

// Object: Class MeshWidget.TextMeshWidget
// Size: 0x180 (Inherited: 0x150)
struct UTextMeshWidget : UMeshWidgetUWidget
{
	struct UMaterialInterface* BaseMaterial; // 0x150(0x8)
	uint8_t Pad_0x158[0x28]; // 0x158(0x28)
};

// Object: Class MeshWidget.ProgressBarMeshWidget
// Size: 0x180 (Inherited: 0x150)
struct UProgressBarMeshWidget : UMeshWidgetUWidget
{
	struct UMaterialInterface* BaseMaterial; // 0x150(0x8)
	uint8_t Pad_0x158[0x28]; // 0x158(0x28)
};

} // namespace SDK
