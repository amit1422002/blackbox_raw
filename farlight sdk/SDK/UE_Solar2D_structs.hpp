// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum Solar2D.ESolarSpriteAtlasPadding
enum class ESolarSpriteAtlasPadding : uint8_t
{
	DilateBorder = 0,
	PadWithZero = 1,
	ESolarSpriteAtlasPadding_MAX = 2
};

// Object: Enum Solar2D.ESolarSpritePivotMode
enum class ESolarSpritePivotMode : uint8_t
{
	Top_Left = 0,
	Top_Center = 1,
	Top_Right = 2,
	Center_Left = 3,
	Center_Center = 4,
	Center_Right = 5,
	Bottom_Left = 6,
	Bottom_Center = 7,
	Bottom_Right = 8,
	Custom = 9,
	ESolarSpritePivotMode_MAX = 10
};

// Object: Enum Solar2D.ESolarSpritePolygonMode
enum class ESolarSpritePolygonMode : uint8_t
{
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESolarSpritePolygonMode_MAX = 5
};

// Object: Enum Solar2D.ESolarSpriteShapeType
enum class ESolarSpriteShapeType : uint8_t
{
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESolarSpriteShapeType_MAX = 3
};

// Object: Enum Solar2D.ESolarSpriteCollisionMode
enum class ESolarSpriteCollisionMode : uint8_t
{
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESolarSpriteCollisionMode_MAX = 3
};

// Object: ScriptStruct Solar2D.SolarSpriteSocket
// Size: 0x40 (Inherited: 0x0)
struct FSolarSpriteSocket
{
	struct FTransform LocalTransform; // 0x0(0x30)
	struct FName SocketName; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct Solar2D.SolarSpriteAtlasSlot
// Size: 0x40 (Inherited: 0x0)
struct FSolarSpriteAtlasSlot
{
	struct TSoftObjectPtr<USolarSprite> SpriteRef; // 0x0(0x28)
	int32_t AtlasIndex; // 0x28(0x4)
	int32_t X; // 0x2C(0x4)
	int32_t Y; // 0x30(0x4)
	int32_t Width; // 0x34(0x4)
	int32_t Height; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct Solar2D.AssetMoveSerializeInfoEx
// Size: 0x28 (Inherited: 0x0)
struct FAssetMoveSerializeInfoEx
{
	struct FString OldAssetPath; // 0x0(0x10)
	struct FString NewAssetPath; // 0x10(0x10)
	struct UTexture2D* RefTexture; // 0x20(0x8)
};

// Object: ScriptStruct Solar2D.SolarSpriteDrawCallRecord
// Size: 0xD0 (Inherited: 0x0)
struct FSolarSpriteDrawCallRecord
{
	struct FVector Destination; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UTexture* BaseTexture; // 0x10(0x8)
	uint8_t Pad_0x18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x4)
	uint8_t Pad_0x4C[0x84]; // 0x4C(0x84)
};

// Object: ScriptStruct Solar2D.SolarSpriteAssetInitParameters
// Size: 0x40 (Inherited: 0x0)
struct FSolarSpriteAssetInitParameters
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct Solar2D.SolarSpriteGeometryCollection
// Size: 0x30 (Inherited: 0x0)
struct FSolarSpriteGeometryCollection
{
	struct TArray<struct FSolarSpriteGeometryShape> Shapes; // 0x0(0x10)
	uint8_t GeometryType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t PixelsPerSubdivisionX; // 0x14(0x4)
	int32_t PixelsPerSubdivisionY; // 0x18(0x4)
	bool bAvoidVertexMerging; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float AlphaThreshold; // 0x20(0x4)
	float DetailAmount; // 0x24(0x4)
	float SimplifyEpsilon; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Solar2D.SolarSpriteGeometryShape
// Size: 0x30 (Inherited: 0x0)
struct FSolarSpriteGeometryShape
{
	enum class ESolarSpriteShapeType ShapeType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FVector2D> Vertices; // 0x8(0x10)
	struct FVector2D BoxSize; // 0x18(0x8)
	struct FVector2D BoxPosition; // 0x20(0x8)
	float Rotation; // 0x28(0x4)
	bool bNegativeWinding; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

} // namespace SDK
