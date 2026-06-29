// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum Landscape.ELandscapeLayerPlatform
enum class ELandscapeLayerPlatform : uint8_t
{
	LSLP_Default = 0,
	LSLP_ALL = 1,
	LSLP_PCOnly = 2,
	LSLP_MobileOnly = 3,
	LSLP_MAX = 4
};

// Object: Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Object: Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Object: Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4
};

// Object: Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Object: Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Object: Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4
};

// Object: Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// Object: Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Object: Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Object: Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Object: Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Object: Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_HeightBlend_WeightAdd = 3,
	LB_MAX = 4
};

// Object: Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Object: Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// Object: ScriptStruct Landscape.LandscapeLayer
// Size: 0x88 (Inherited: 0x0)
struct FLandscapeLayer
{
	struct FGuid Guid; // 0x0(0x10)
	struct FName Name; // 0x10(0x8)
	bool bVisible; // 0x18(0x1)
	bool bLocked; // 0x19(0x1)
	uint8_t CookPlatform; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	float HeightmapAlpha; // 0x1C(0x4)
	float WeightmapAlpha; // 0x20(0x4)
	uint8_t BlendMode; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28(0x10)
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38(0x50)
};

// Object: ScriptStruct Landscape.LandscapeLayerBrush
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeLayerBrush
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeLayerComponentData
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeLayerComponentData
{
	struct FHeightmapData HeightmapData; // 0x0(0x8)
	struct FWeightmapData WeightmapData; // 0x8(0x30)
};

// Object: ScriptStruct Landscape.WeightmapData
// Size: 0x30 (Inherited: 0x0)
struct FWeightmapData
{
	struct TArray<struct UTexture2D*> Textures; // 0x0(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10(0x10)
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages; // 0x20(0x10)
};

// Object: ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 (Inherited: 0x0)
struct FWeightmapLayerAllocationInfo
{
	struct ULandscapeLayerInfoObject* LayerInfo; // 0x0(0x8)
	uint8_t WeightmapTextureIndex; // 0x8(0x1)
	uint8_t WeightmapTextureChannel; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct Landscape.HeightmapData
// Size: 0x8 (Inherited: 0x0)
struct FHeightmapData
{
	struct UTexture2D* Texture; // 0x0(0x8)
};

// Object: ScriptStruct Landscape.LandscapeComponentMaterialOverride
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeComponentMaterialOverride
{
	struct FPerPlatformInt LODIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeEditToolRenderData
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeEditToolRenderData
{
	struct UMaterialInterface* ToolMaterial; // 0x0(0x8)
	struct UMaterialInterface* GizmoMaterial; // 0x8(0x8)
	int32_t SelectedType; // 0x10(0x4)
	int32_t DebugChannelR; // 0x14(0x4)
	int32_t DebugChannelG; // 0x18(0x4)
	int32_t DebugChannelB; // 0x1C(0x4)
	struct UTexture2D* DataTexture; // 0x20(0x8)
	struct UTexture2D* LayerContributionTexture; // 0x28(0x8)
	struct UTexture2D* DirtyTexture; // 0x30(0x8)
};

// Object: ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 (Inherited: 0x0)
struct FGizmoSelectData
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct Landscape.GrassVariety
// Size: 0x50 (Inherited: 0x0)
struct FGrassVariety
{
	struct UStaticMesh* GrassMesh; // 0x0(0x8)
	struct FPerPlatformFloat GrassDensity; // 0x8(0x4)
	bool bUseGrid; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float PlacementJitter; // 0x10(0x4)
	struct FPerPlatformInt StartCullDistance; // 0x14(0x4)
	struct FPerPlatformInt EndCullDistance; // 0x18(0x4)
	int32_t MinLOD; // 0x1C(0x4)
	enum class EGrassScaling Scaling; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FFloatInterval ScaleX; // 0x24(0x8)
	struct FFloatInterval ScaleY; // 0x2C(0x8)
	struct FFloatInterval ScaleZ; // 0x34(0x8)
	bool RandomRotation; // 0x3C(0x1)
	bool AlignToSurface; // 0x3D(0x1)
	bool bUseLandscapeLightmap; // 0x3E(0x1)
	struct FLightingChannels LightingChannels; // 0x3F(0x1)
	bool bReceivesDecals; // 0x40(0x1)
	bool bCastDynamicShadow; // 0x41(0x1)
	bool bKeepInstanceBufferCPUCopy; // 0x42(0x1)
	bool bUseLightmapPerPixelPerInstance; // 0x43(0x1)
	bool bShadowMapBakeOnly; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	int32_t OverrideCVarMinVertsToSplitNode; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeInfoLayerSettings
{
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
	struct FName LayerName; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
// Size: 0xC (Inherited: 0x0)
struct FLandscapeMaterialTextureStreamingInfo
{
	struct FName TextureName; // 0x0(0x8)
	float TexelFactor; // 0x8(0x4)
};

// Object: ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeProxyMaterialOverride
{
	struct FPerPlatformInt LODIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeImportLayerInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x8 (Inherited: 0x0)
struct FLandscapeLayerStruct
{
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
};

// Object: ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeEditorLayerSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineSegmentSurfaceName
// Size: 0xC (Inherited: 0x0)
struct FLandscapeSplineSegmentSurfaceName
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeSplineConnection
{
	struct ULandscapeSplineSegment* Segment; // 0x0(0x8)
	uint8_t End : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x1 (Inherited: 0x0)
struct FForeignWorldSplineData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x1 (Inherited: 0x0)
struct FForeignSplineSegmentData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.ForeignControlPointData
// Size: 0x1 (Inherited: 0x0)
struct FForeignControlPointData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeSplineMeshEntry
{
	struct UStaticMesh* Mesh; // 0x0(0x8)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x8(0x10)
	uint8_t bCenterH : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FVector2D CenterAdjust; // 0x1C(0x8)
	uint8_t bScaleToWidth : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FVector Scale; // 0x28(0xC)
	uint8_t Orientation; // 0x34(0x1)
	uint8_t ForwardAxis; // 0x35(0x1)
	uint8_t UpAxis; // 0x36(0x1)
	uint8_t Pad_0x37[0x1]; // 0x37(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 (Inherited: 0x0)
struct FLandscapeSplineSegmentConnection
{
	struct ULandscapeSplineControlPoint* ControlPoint; // 0x0(0x8)
	float TangentLen; // 0x8(0x4)
	struct FName SocketName; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0x70 (Inherited: 0x0)
struct FLandscapeSplineInterpPoint
{
	struct FVector Center; // 0x0(0xC)
	struct FVector Left; // 0xC(0xC)
	struct FVector Right; // 0x18(0xC)
	struct FVector FalloffLeft; // 0x24(0xC)
	struct FVector FalloffRight; // 0x30(0xC)
	struct FVector LayerLeft; // 0x3C(0xC)
	struct FVector LayerRight; // 0x48(0xC)
	struct FVector LayerFalloffLeft; // 0x54(0xC)
	struct FVector LayerFalloffRight; // 0x60(0xC)
	float StartEndFalloff; // 0x6C(0x4)
};

// Object: ScriptStruct Landscape.GrassInput
// Size: 0x28 (Inherited: 0x0)
struct FGrassInput
{
	struct FName Name; // 0x0(0x8)
	struct ULandscapeGrassType* GrassType; // 0x8(0x8)
	struct FExpressionInput Input; // 0x10(0xC)
	uint8_t Pad_0x1C[0xC]; // 0x1C(0xC)
};

// Object: ScriptStruct Landscape.LayerBlendInput
// Size: 0x5C (Inherited: 0x0)
struct FLayerBlendInput
{
	struct FName LayerName; // 0x0(0x8)
	uint8_t BlendType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FExpressionInput LayerInput; // 0xC(0xC)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FExpressionInput HeightInput; // 0x20(0xC)
	uint8_t Pad_0x2C[0x8]; // 0x2C(0x8)
	struct FExpressionInput WeightInput; // 0x34(0xC)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	float PreviewWeight; // 0x48(0x4)
	struct FVector ConstLayerInput; // 0x4C(0xC)
	float ConstHeightInput; // 0x58(0x4)
};

} // namespace SDK
