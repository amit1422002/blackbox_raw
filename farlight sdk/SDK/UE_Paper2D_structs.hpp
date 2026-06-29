// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3
};

// Object: Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2
};

// Object: Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4
};

// Object: Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
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
	ESpritePivotMode_MAX = 10
};

// Object: Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5
};

// Object: Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3
};

// Object: Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3
};

// Object: ScriptStruct Paper2D.AssetMoveSerializeInfo
// Size: 0x30 (Inherited: 0x0)
struct FAssetMoveSerializeInfo
{
	struct FString OldAssetPath; // 0x0(0x10)
	struct TArray<struct FString> RefWidgetBlueprintNames; // 0x10(0x10)
	struct FString NewAssetPath; // 0x20(0x10)
};

// Object: ScriptStruct Paper2D.TextureToAlwaysPackFromDirectoryEntry
// Size: 0x38 (Inherited: 0x0)
struct FTextureToAlwaysPackFromDirectoryEntry
{
	struct FDirectoryPath DirectoryPath; // 0x0(0x10)
	struct TArray<struct FString> IgnorePaths; // 0x10(0x10)
	struct FSoftObjectPath SpriteAtlas; // 0x20(0x18)
};

// Object: ScriptStruct Paper2D.TextureToAlwaysPackFromBlueprintEntry
// Size: 0x30 (Inherited: 0x0)
struct FTextureToAlwaysPackFromBlueprintEntry
{
	struct FSoftClassPath WidgetBlueprint; // 0x0(0x18)
	struct FSoftObjectPath SpriteAtlas; // 0x18(0x18)
};

// Object: ScriptStruct Paper2D.TextureToAlwaysPackEntry
// Size: 0x40 (Inherited: 0x0)
struct FTextureToAlwaysPackEntry
{
	struct FSoftClassPath WidgetBlueprint; // 0x0(0x18)
	struct FSoftObjectPath SpriteAtlas; // 0x18(0x18)
	struct TArray<struct FSoftObjectPath> Textures; // 0x30(0x10)
};

// Object: ScriptStruct Paper2D.UIBlueprintCommonMapPath
// Size: 0x20 (Inherited: 0x0)
struct FUIBlueprintCommonMapPath
{
	struct FString SrcPath; // 0x0(0x10)
	struct FString DstPath; // 0x10(0x10)
};

// Object: ScriptStruct Paper2D.IntMargin
// Size: 0x10 (Inherited: 0x0)
struct FIntMargin
{
	int32_t Left; // 0x0(0x4)
	int32_t Top; // 0x4(0x4)
	int32_t Right; // 0x8(0x4)
	int32_t Bottom; // 0xC(0x4)
};

// Object: ScriptStruct Paper2D.PaperFlipbookKeyFrame
// Size: 0x10 (Inherited: 0x0)
struct FPaperFlipbookKeyFrame
{
	struct UPaperSprite* Sprite; // 0x0(0x8)
	int32_t FrameRun; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Paper2D.SpriteInstanceData
// Size: 0x50 (Inherited: 0x0)
struct FSpriteInstanceData
{
	struct FMatrix Transform; // 0x0(0x40)
	struct UPaperSprite* SourceSprite; // 0x40(0x8)
	struct FColor VertexColor; // 0x48(0x4)
	int32_t MaterialIndex; // 0x4C(0x4)
};

// Object: ScriptStruct Paper2D.PaperSpriteData
// Size: 0x38 (Inherited: 0x0)
struct FPaperSpriteData
{
	struct FVector2D SourceUV; // 0x0(0x8)
	struct FVector2D SourceDimension; // 0x8(0x8)
	struct FVector2D BakedSourceUV; // 0x10(0x8)
	struct FVector2D BakedSourceDimension; // 0x18(0x8)
	bool bBakedValid; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t AlternateMaterialSplitIndex; // 0x24(0x4)
	struct TArray<struct FVector4> BakedRenderData; // 0x28(0x10)
};

// Object: ScriptStruct Paper2D.PaperSpriteSocket
// Size: 0x40 (Inherited: 0x0)
struct FPaperSpriteSocket
{
	struct FTransform LocalTransform; // 0x0(0x30)
	struct FName SocketName; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct Paper2D.PaperSpriteAtlasSlot
// Size: 0x40 (Inherited: 0x0)
struct FPaperSpriteAtlasSlot
{
	struct TSoftObjectPtr<UPaperSpriteFrame> SpriteRef; // 0x0(0x28)
	int32_t AtlasIndex; // 0x28(0x4)
	int32_t X; // 0x2C(0x4)
	int32_t Y; // 0x30(0x4)
	int32_t Width; // 0x34(0x4)
	int32_t Height; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct Paper2D.WidgetBlueprintTextureToSpriteInfo
// Size: 0x10 (Inherited: 0x0)
struct FWidgetBlueprintTextureToSpriteInfo
{
	struct TArray<int32_t> MoveInfoIndexList; // 0x0(0x10)
};

// Object: ScriptStruct Paper2D.WidgetBlueprintTextureToSpriteEntry
// Size: 0x20 (Inherited: 0x0)
struct FWidgetBlueprintTextureToSpriteEntry
{
	struct FString OldAssetPath; // 0x0(0x10)
	struct FString NewAssetPath; // 0x10(0x10)
};

// Object: ScriptStruct Paper2D.PaperSpriteMoveInfo
// Size: 0x20 (Inherited: 0x0)
struct FPaperSpriteMoveInfo
{
	struct FString OldAssetPath; // 0x0(0x10)
	struct FString NewAssetPath; // 0x10(0x10)
};

// Object: ScriptStruct Paper2D.PaperTerrainMaterialRule
// Size: 0x38 (Inherited: 0x0)
struct FPaperTerrainMaterialRule
{
	struct UPaperSprite* StartCap; // 0x0(0x8)
	struct TArray<struct UPaperSprite*> Body; // 0x8(0x10)
	struct UPaperSprite* EndCap; // 0x18(0x8)
	float MinimumAngle; // 0x20(0x4)
	float MaximumAngle; // 0x24(0x4)
	bool bEnableCollision; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float CollisionOffset; // 0x2C(0x4)
	int32_t DrawOrder; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct Paper2D.PaperTileInfo
// Size: 0x10 (Inherited: 0x0)
struct FPaperTileInfo
{
	struct UPaperTileSet* TileSet; // 0x0(0x8)
	int32_t PackedTileIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Paper2D.PaperTileSetTerrain
// Size: 0x18 (Inherited: 0x0)
struct FPaperTileSetTerrain
{
	struct FString TerrainName; // 0x0(0x10)
	int32_t CenterTileIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Paper2D.PaperTileMetadata
// Size: 0x40 (Inherited: 0x0)
struct FPaperTileMetadata
{
	struct FName UserDataName; // 0x0(0x8)
	struct FSpriteGeometryCollection CollisionData; // 0x8(0x30)
	uint8_t TerrainMembership[0x4]; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x0)
struct FSpriteGeometryCollection
{
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x0(0x10)
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

// Object: ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x0)
struct FSpriteGeometryShape
{
	enum class ESpriteShapeType ShapeType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FVector2D> Vertices; // 0x8(0x10)
	struct FVector2D BoxSize; // 0x18(0x8)
	struct FVector2D BoxPosition; // 0x20(0x8)
	float Rotation; // 0x28(0x4)
	bool bNegativeWinding; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct Paper2D.SpriteDrawCallRecord
// Size: 0xD0 (Inherited: 0x0)
struct FSpriteDrawCallRecord
{
	struct FVector Destination; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UTexture* BaseTexture; // 0x10(0x8)
	uint8_t Pad_0x18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x4)
	uint8_t Pad_0x4C[0x84]; // 0x4C(0x84)
};

// Object: ScriptStruct Paper2D.SpriteAssetInitParameters
// Size: 0x40 (Inherited: 0x0)
struct FSpriteAssetInitParameters
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

} // namespace SDK
