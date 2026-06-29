// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8_t
{
	Angle = 0,
	Width = 1,
	EBrushFalloffMode_MAX = 2
};

// Object: Enum Landmass.EBrushBlendType
enum class EBrushBlendType : uint8_t
{
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3
};

// Object: ScriptStruct Landmass.LandmassBrushEffectsList
// Size: 0x60 (Inherited: 0x0)
struct FLandmassBrushEffectsList
{
	struct FBrushEffectBlurring Blurring; // 0x0(0x8)
	struct FBrushEffectCurlNoise CurlNoise; // 0x8(0x10)
	struct FBrushEffectDisplacement Displacement; // 0x18(0x28)
	struct FBrushEffectSmoothBlending SmoothBlending; // 0x40(0x8)
	struct FBrushEffectTerracing Terracing; // 0x48(0x14)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectTerracing
// Size: 0x14 (Inherited: 0x0)
struct FBrushEffectTerracing
{
	float TerraceAlpha; // 0x0(0x4)
	float TerraceSpacing; // 0x4(0x4)
	float TerraceSmoothness; // 0x8(0x4)
	float MaskLength; // 0xC(0x4)
	float MaskStartOffset; // 0x10(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectSmoothBlending
// Size: 0x8 (Inherited: 0x0)
struct FBrushEffectSmoothBlending
{
	float InnerSmoothDistance; // 0x0(0x4)
	float OuterSmoothDistance; // 0x4(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectDisplacement
// Size: 0x28 (Inherited: 0x0)
struct FBrushEffectDisplacement
{
	float DisplacementHeight; // 0x0(0x4)
	float DisplacementTiling; // 0x4(0x4)
	struct UTexture2D* Texture; // 0x8(0x8)
	float Midpoint; // 0x10(0x4)
	struct FLinearColor Channel; // 0x14(0x10)
	float WeightmapInfluence; // 0x24(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectCurlNoise
// Size: 0x10 (Inherited: 0x0)
struct FBrushEffectCurlNoise
{
	float Curl1Amount; // 0x0(0x4)
	float Curl2Amount; // 0x4(0x4)
	float Curl1Tiling; // 0x8(0x4)
	float Curl2Tiling; // 0xC(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectBlurring
// Size: 0x8 (Inherited: 0x0)
struct FBrushEffectBlurring
{
	bool bBlurShape; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Radius; // 0x4(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectCurves
// Size: 0x20 (Inherited: 0x0)
struct FBrushEffectCurves
{
	bool bUseCurveChannel; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UCurveFloat* ElevationCurveAsset; // 0x8(0x8)
	float ChannelEdgeOffset; // 0x10(0x4)
	float ChannelDepth; // 0x14(0x4)
	float CurveRampWidth; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Landmass.LandmassFalloffSettings
// Size: 0x14 (Inherited: 0x0)
struct FLandmassFalloffSettings
{
	enum class EBrushFalloffMode FalloffMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FalloffAngle; // 0x4(0x4)
	float FalloffWidth; // 0x8(0x4)
	float EdgeOffset; // 0xC(0x4)
	float ZOffset; // 0x10(0x4)
};

// Object: ScriptStruct Landmass.LandmassTerrainCarvingSettings
// Size: 0x80 (Inherited: 0x0)
struct FLandmassTerrainCarvingSettings
{
	enum class EBrushBlendType BlendMode; // 0x0(0x1)
	bool bInvertShape; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FLandmassFalloffSettings FalloffSettings; // 0x4(0x14)
	struct FLandmassBrushEffectsList Effects; // 0x18(0x60)
	int32_t Priority; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

} // namespace SDK
