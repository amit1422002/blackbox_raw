// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class Landscape.ControlPointMeshActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct AControlPointMeshActor : AActor
{
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x2E0(0x8)
};

// Object: Class Landscape.ControlPointMeshComponent
// Size: 0x8E0 (Inherited: 0x8E0)
struct UControlPointMeshComponent : UStaticMeshComponent
{
	float VirtualTextureMainPassMaxDrawDistance; // 0x8DC(0x4)
};

// Object: Class Landscape.LandscapeProxy
// Size: 0x618 (Inherited: 0x2E0)
struct ALandscapeProxy : AActor
{
	struct ULandscapeSplinesComponent* SplineComponent; // 0x2E0(0x8)
	struct FGuid LandscapeGuid; // 0x2E8(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x2F8(0x8)
	int32_t MaxLODLevel; // 0x300(0x4)
	float LODDistanceFactor; // 0x304(0x4)
	uint8_t LODFalloff; // 0x308(0x1)
	uint8_t Pad_0x309[0x3]; // 0x309(0x3)
	float ComponentScreenSizeToUseSubSections; // 0x30C(0x4)
	float LOD0ScreenSize; // 0x310(0x4)
	float LOD0DistributionSetting; // 0x314(0x4)
	float LODDistributionSetting; // 0x318(0x4)
	float TessellationComponentScreenSize; // 0x31C(0x4)
	bool UseTessellationComponentScreenSizeFalloff; // 0x320(0x1)
	uint8_t Pad_0x321[0x3]; // 0x321(0x3)
	float TessellationComponentScreenSizeFalloff; // 0x324(0x4)
	int32_t OccluderGeometryLOD; // 0x328(0x4)
	int32_t StaticLightingLOD; // 0x32C(0x4)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x330(0x8)
	float StreamingDistanceMultiplier; // 0x338(0x4)
	uint8_t Pad_0x33C[0x4]; // 0x33C(0x4)
	struct UMaterialInterface* LandscapeMaterial; // 0x340(0x8)
	uint8_t Pad_0x348[0x20]; // 0x348(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x368(0x8)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x370(0x10)
	bool bUseFixedMesh; // 0x380(0x1)
	bool bMeshHoles; // 0x381(0x1)
	uint8_t MeshHolesMaxLod; // 0x382(0x1)
	uint8_t Pad_0x383[0x5]; // 0x383(0x5)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x388(0x10)
	int32_t VirtualTextureNumLods; // 0x398(0x4)
	int32_t VirtualTextureLodBias; // 0x39C(0x4)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x3]; // 0x3A1(0x3)
	float NegativeZBoundsExtension; // 0x3A4(0x4)
	float PositiveZBoundsExtension; // 0x3A8(0x4)
	uint8_t Pad_0x3AC[0x4]; // 0x3AC(0x4)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x3B0(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x3C0(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x3D0(0x10)
	uint8_t Pad_0x3E0[0x64]; // 0x3E0(0x64)
	bool bHasLandscapeGrass; // 0x444(0x1)
	uint8_t Pad_0x445[0x3]; // 0x445(0x3)
	float StaticLightingResolution; // 0x448(0x4)
	float HQ_StaticLightingResolution; // 0x44C(0x4)
	uint8_t bCastStaticShadow : 1; // 0x450(0x1), Mask(0x1)
	uint8_t bCastShadowAsTwoSided : 1; // 0x450(0x1), Mask(0x2)
	uint8_t bCastFarShadow : 1; // 0x450(0x1), Mask(0x4)
	uint8_t bAffectDistanceFieldLighting : 1; // 0x450(0x1), Mask(0x8)
	uint8_t BitPad_0x450_4 : 4; // 0x450(0x1)
	struct FLightingChannels LightingChannels; // 0x451(0x1)
	uint8_t bUseMaterialPositionOffsetInStaticLighting : 1; // 0x452(0x1), Mask(0x1)
	uint8_t bRenderCustomDepth : 1; // 0x452(0x1), Mask(0x2)
	uint8_t BitPad_0x452_2 : 6; // 0x452(0x1)
	uint8_t Pad_0x453[0x1]; // 0x453(0x1)
	int32_t CustomDepthStencilValue; // 0x454(0x4)
	float LDMaxDrawDistance; // 0x458(0x4)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x45C(0x18)
	int32_t CollisionMipLevel; // 0x474(0x4)
	int32_t SimpleCollisionMipLevel; // 0x478(0x4)
	float CollisionThickness; // 0x47C(0x4)
	struct FBodyInstance BodyInstance; // 0x480(0x130)
	uint8_t bGenerateOverlapEvents : 1; // 0x5B0(0x1), Mask(0x1)
	uint8_t bBakeMaterialPositionOffsetIntoCollision : 1; // 0x5B0(0x1), Mask(0x2)
	uint8_t BitPad_0x5B0_2 : 6; // 0x5B0(0x1)
	uint8_t Pad_0x5B1[0x3]; // 0x5B1(0x3)
	int32_t ComponentSizeQuads; // 0x5B4(0x4)
	int32_t SubsectionSizeQuads; // 0x5B8(0x4)
	int32_t NumSubsections; // 0x5BC(0x4)
	uint8_t bUsedForNavigation : 1; // 0x5C0(0x1), Mask(0x1)
	uint8_t bFillCollisionUnderLandscapeForNavmesh : 1; // 0x5C0(0x1), Mask(0x2)
	uint8_t BitPad_0x5C0_2 : 6; // 0x5C0(0x1)
	bool bUseDynamicMaterialInstance; // 0x5C1(0x1)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x5C2(0x1)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x5C3(0x1)
	bool bHasLayersContent; // 0x5C4(0x1)
	uint8_t Pad_0x5C5[0x3]; // 0x5C5(0x3)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x5C8(0x50)


	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x96bb4b4
	// Params: [ Num(2) Size(0x18) ]
	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value);

	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x96bb59c
	// Params: [ Num(2) Size(0x10) ]
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value);

	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x96bb3cc
	// Params: [ Num(2) Size(0xC) ]
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value);

	// Object: Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x96bb9b8
	// Params: [ Num(1) Size(0x8) ]
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial);

	// Object: Function Landscape.LandscapeProxy.EditorApplySpline
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x96bb680
	// Params: [ Num(11) Size(0x30) ]
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer);

	// Object: Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x96bbb10
	// Params: [ Num(1) Size(0x1) ]
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);

	// Object: Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x96bba60
	// Params: [ Num(1) Size(0x4) ]
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);

	// Object: Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x96bbc78
	// Params: [ Num(1) Size(0x4) ]
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);

	// Object: Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x96bbd28
	// Params: [ Num(1) Size(0x4) ]
	void ChangeLODDistanceFactor(float InLODDistanceFactor);

	// Object: Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x96bbbc8
	// Params: [ Num(1) Size(0x4) ]
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// Object: Class Landscape.Landscape
// Size: 0x618 (Inherited: 0x618)
struct ALandscape : ALandscapeProxy
{
};

// Object: Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x2E0 (Inherited: 0x2E0)
struct ALandscapeBlueprintBrushBase : AActor
{

	// Object: Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x96b557c
	// Params: [ Num(0) Size(0x0) ]
	void RequestLandscapeUpdate();

	// Object: Function Landscape.LandscapeBlueprintBrushBase.Render
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(4) Size(0x20) ]
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName);

	// Object: Function Landscape.LandscapeBlueprintBrushBase.Initialize
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x40) ]
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize);

	// Object: Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void GetBlueprintRenderDependencies(struct TArray<struct UTexture2D*>& OutStreamableAssets);
};

// Object: Class Landscape.LandscapeComponent
// Size: 0x830 (Inherited: 0x5F0)
struct ULandscapeComponent : UPrimitiveComponent
{
	int32_t SectionBaseX; // 0x5F0(0x4)
	int32_t SectionBaseY; // 0x5F4(0x4)
	int32_t ComponentSizeQuads; // 0x5F8(0x4)
	int32_t SubsectionSizeQuads; // 0x5FC(0x4)
	int32_t NumSubsections; // 0x600(0x4)
	uint8_t Pad_0x604[0x4]; // 0x604(0x4)
	struct UMaterialInterface* OverrideMaterial; // 0x608(0x8)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x610(0x8)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x618(0x10)
	int32_t OverrideMaxLODLevel; // 0x628(0x4)
	uint8_t Pad_0x62C[0x4]; // 0x62C(0x4)
	struct TArray<struct UMaterialInstanceConstant*> RawStaticMeshMaterialInstances; // 0x630(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x640(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x650(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x660(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x670(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x680(0x8)
	uint8_t Pad_0x688[0x8]; // 0x688(0x8)
	struct FVector4 WeightmapScaleBias; // 0x690(0x10)
	float WeightmapSubsectionOffset; // 0x6A0(0x4)
	uint8_t Pad_0x6A4[0xC]; // 0x6A4(0xC)
	struct FVector4 HeightmapScaleBias; // 0x6B0(0x10)
	struct FBox CachedLocalBox; // 0x6C0(0x1C)
	struct TLazyObjectPtr<struct ULandscapeHeightfieldCollisionComponent> CollisionComponent; // 0x6DC(0x1C)
	struct UTexture2D* HeightmapTexture; // 0x6F8(0x8)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x700(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x710(0x10)
	struct TArray<struct UTexture2D*> MobileRawWeightmapTextures; // 0x720(0x10)
	struct FGuid MapBuildDataId; // 0x730(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x740(0x10)
	int32_t CollisionMipLevel; // 0x750(0x4)
	int32_t SimpleCollisionMipLevel; // 0x754(0x4)
	float NegativeZBoundsExtension; // 0x758(0x4)
	float PositiveZBoundsExtension; // 0x75C(0x4)
	float StaticLightingResolution; // 0x760(0x4)
	int32_t ForcedLOD; // 0x764(0x4)
	int32_t LODBias; // 0x768(0x4)
	struct FGuid StateId; // 0x76C(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x77C(0x10)
	uint8_t Pad_0x78C[0x4]; // 0x78C(0x4)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x790(0x8)
	uint8_t MobileBlendableLayerMask; // 0x798(0x1)
	uint8_t Pad_0x799[0x7]; // 0x799(0x7)
	struct UMaterialInterface* MobileMaterialInterface; // 0x7A0(0x8)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x7A8(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x7B8(0x10)
	uint8_t Pad_0x7C8[0x58]; // 0x7C8(0x58)
	struct TArray<uint16_t> GrassHeightData; // 0x820(0x10)


	// Object: Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x96b603c
	// Params: [ Num(2) Size(0x10) ]
	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);

	// Object: Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x96b5e3c
	// Params: [ Num(3) Size(0x18) ]
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName);

	// Object: Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x96b5f3c
	// Params: [ Num(3) Size(0x1C) ]
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer);
};

// Object: Class Landscape.LandscapeGizmoActor
// Size: 0x2E0 (Inherited: 0x2E0)
struct ALandscapeGizmoActor : AActor
{
};

// Object: Class Landscape.LandscapeGizmoActiveActor
// Size: 0x330 (Inherited: 0x2E0)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor
{
	uint8_t Pad_0x2E0[0x50]; // 0x2E0(0x50)
};

// Object: Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x5F0 (Inherited: 0x5F0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent
{
};

// Object: Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject
{
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	uint8_t bEnableDensityScaling : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct UStaticMesh* GrassMesh; // 0x40(0x8)
	float GrassDensity; // 0x48(0x4)
	float PlacementJitter; // 0x4C(0x4)
	int32_t StartCullDistance; // 0x50(0x4)
	int32_t EndCullDistance; // 0x54(0x4)
	bool RandomRotation; // 0x58(0x1)
	bool AlignToSurface; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
};

// Object: Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x6D0 (Inherited: 0x5F0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent
{
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x5F0(0x10)
	int32_t SectionBaseX; // 0x600(0x4)
	int32_t SectionBaseY; // 0x604(0x4)
	int32_t CollisionSizeQuads; // 0x608(0x4)
	float CollisionScale; // 0x60C(0x4)
	int32_t SimpleCollisionSizeQuads; // 0x610(0x4)
	uint8_t Pad_0x614[0x4]; // 0x614(0x4)
	struct TArray<uint8_t> CollisionQuadFlags; // 0x618(0x10)
	struct FGuid HeightfieldGuid; // 0x628(0x10)
	struct FBox CachedLocalBox; // 0x638(0x1C)
	struct TLazyObjectPtr<struct ULandscapeComponent> RenderComponent; // 0x654(0x1C)
	uint8_t Pad_0x670[0x10]; // 0x670(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x680(0x10)
	uint8_t Pad_0x690[0x40]; // 0x690(0x40)


	// Object: Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x96b6e8c
	// Params: [ Num(1) Size(0x8) ]
	struct ULandscapeComponent* GetRenderComponent();
};

// Object: Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject
{
	struct TLazyObjectPtr<struct ALandscape> LandscapeActor; // 0x28(0x1C)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x4)
	int32_t SubsectionSizeQuads; // 0x58(0x4)
	int32_t ComponentNumSubsections; // 0x5C(0x4)
	struct FVector DrawScale; // 0x60(0xC)
	uint8_t Pad_0x6C[0xA4]; // 0x6C(0xA4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	uint8_t Pad_0x120[0xF0]; // 0x120(0xF0)
};

// Object: Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject
{
	uint8_t Pad_0x28[0x58]; // 0x28(0x58)
};

// Object: Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject
{
	struct FName LayerName; // 0x28(0x8)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x8)
	float Hardness; // 0x38(0x4)
	uint8_t LimitPlatform; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FLinearColor LayerUsageDebugColor; // 0x40(0x10)
};

// Object: Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x468 (Inherited: 0x450)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
{
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x450(0x10)
	uint8_t bIsLayerThumbnail : 1; // 0x460(0x1), Mask(0x1)
	uint8_t bDisableTessellation : 1; // 0x460(0x1), Mask(0x2)
	uint8_t bMobile : 1; // 0x460(0x1), Mask(0x4)
	uint8_t bEditorToolUsage : 1; // 0x460(0x1), Mask(0x8)
	uint8_t BitPad_0x460_4 : 4; // 0x460(0x1)
	uint8_t Pad_0x461[0x7]; // 0x461(0x7)
};

// Object: Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x6F0 (Inherited: 0x6D0)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
{
	struct FGuid MeshGuid; // 0x6D0(0x10)
	uint8_t Pad_0x6E0[0x10]; // 0x6E0(0x10)
};

// Object: Class Landscape.LandscapeMeshProxyActor
// Size: 0x2E8 (Inherited: 0x2E0)
struct ALandscapeMeshProxyActor : AActor
{
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x2E0(0x8)
};

// Object: Class Landscape.LandscapeMeshProxyComponent
// Size: 0x910 (Inherited: 0x8E0)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent
{
	struct FGuid LandscapeGuid; // 0x8DC(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x8F0(0x10)
	int8_t ProxyLOD; // 0x900(0x1)
	uint8_t Pad_0x901[0xF]; // 0x901(0xF)
};

// Object: Class Landscape.LandscapeSettings
// Size: 0x50 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings
{
	int32_t MaxNumberOfLayers; // 0x38(0x4)
	bool bForceFourLayers; // 0x3C(0x1)
	bool bPrintLayerInfos; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct TArray<struct FLandscapeSplineSegmentSurfaceName> LandscapeSplineSegmentSurfaces; // 0x40(0x10)
};

// Object: Class Landscape.LandscapeSplinesComponent
// Size: 0x620 (Inherited: 0x5F0)
struct ULandscapeSplinesComponent : UPrimitiveComponent
{
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x5F0(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x600(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x610(0x10)


	// Object: Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x96bf060
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents();
};

// Object: Class Landscape.LandscapeSplineControlPoint
// Size: 0xA8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject
{
	struct FVector Location; // 0x28(0xC)
	struct FRotator Rotation; // 0x34(0xC)
	float Width; // 0x40(0x4)
	float LayerWidthRatio; // 0x44(0x4)
	float SideFalloff; // 0x48(0x4)
	float LeftSideFalloffFactor; // 0x4C(0x4)
	float RightSideFalloffFactor; // 0x50(0x4)
	float LeftSideLayerFalloffFactor; // 0x54(0x4)
	float RightSideLayerFalloffFactor; // 0x58(0x4)
	float EndFalloff; // 0x5C(0x4)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1C)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xA0(0x8)
};

// Object: Class Landscape.LandscapeSplineSegment
// Size: 0xB8 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject
{
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	uint8_t SurfaceType; // 0x58(0x1)
	uint8_t bBranchTrunk : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
	struct FInterpCurveVector SplineInfo; // 0x60(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1C)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xA8(0x10)
};

// Object: Class Landscape.LandscapeStaticMeshCollisionComponent
// Size: 0x820 (Inherited: 0x6D0)
struct ULandscapeStaticMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
{
	uint8_t Pad_0x6D0[0x10]; // 0x6D0(0x10)
	struct UBodySetup* BodySetup; // 0x6E0(0x8)
	struct FBodyInstance AttachBodyInstance; // 0x6E8(0x130)
	uint8_t Pad_0x818[0x8]; // 0x818(0x8)
};

// Object: Class Landscape.LandscapeStreamingProxy
// Size: 0x638 (Inherited: 0x618)
struct ALandscapeStreamingProxy : ALandscapeProxy
{
	struct TLazyObjectPtr<struct ALandscape> LandscapeActor; // 0x618(0x1C)
	uint8_t Pad_0x634[0x4]; // 0x634(0x4)
};

// Object: Class Landscape.LandscapeSubsystem
// Size: 0x98 (Inherited: 0x30)
struct ULandscapeSubsystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0x68]; // 0x30(0x68)
};

// Object: Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject
{
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput
{
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression
{
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression
{
	uint8_t MappingType; // 0x39(0x1)
	uint8_t CustomUVType; // 0x3A(0x1)
	float MappingScale; // 0x3C(0x4)
	float MappingRotation; // 0x40(0x4)
	float MappingPanU; // 0x44(0x4)
	float MappingPanV; // 0x48(0x4)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression
{
	struct FName ParameterName; // 0x3C(0x8)
	float PreviewWeight; // 0x44(0x4)
	struct FGuid ExpressionGUID; // 0x48(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x80 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression
{
	struct FExpressionInput LayerUsed; // 0x3C(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FExpressionInput LayerNotUsed; // 0x50(0xC)
	uint8_t Pad_0x5C[0x8]; // 0x5C(0x8)
	struct FName ParameterName; // 0x64(0x8)
	uint8_t PreviewUsed : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct FGuid ExpressionGUID; // 0x70(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
{
	struct FExpressionInput Base; // 0x3C(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FExpressionInput Layer; // 0x50(0xC)
	uint8_t Pad_0x5C[0x8]; // 0x5C(0x8)
	struct FName ParameterName; // 0x64(0x8)
	float PreviewWeight; // 0x6C(0x4)
	struct FVector ConstBase; // 0x70(0xC)
	struct FGuid ExpressionGUID; // 0x7C(0x10)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression
{
	struct FGuid ExpressionGUID; // 0x3C(0x10)
};

} // namespace SDK
