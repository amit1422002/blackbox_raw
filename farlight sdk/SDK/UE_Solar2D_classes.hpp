// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class Solar2D.SolarRuntimeSettings
// Size: 0x30 (Inherited: 0x28)
struct USolarRuntimeSettings : UObject
{
	bool bEnableSpriteAtlasGroups; // 0x28(0x1)
	bool bEnableTerrainSplineEditing; // 0x29(0x1)
	bool bResizeSpriteDataToMatchTextures; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
};

// Object: Class Solar2D.SolarSprite
// Size: 0xA8 (Inherited: 0x28)
struct USolarSprite : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FVector2D BakedSourceUV; // 0x48(0x8)
	struct FVector2D BakedSourceDimension; // 0x50(0x8)
	struct UTexture2D* BakedSourceTexture; // 0x58(0x8)
	struct UMaterialInterface* DefaultMaterial; // 0x60(0x8)
	struct UMaterialInterface* AlternateMaterial; // 0x68(0x8)
	struct TArray<struct FSolarSpriteSocket> Sockets; // 0x70(0x10)
	uint8_t SpriteCollisionDomain; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	float PixelsPerUnrealUnit; // 0x84(0x4)
	struct UBodySetup* BodySetup; // 0x88(0x8)
	int32_t AlternateMaterialSplitIndex; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TArray<struct FVector4> BakedRenderData; // 0x98(0x10)
};

// Object: Class Solar2D.SolarSpriteAtlas
// Size: 0x28 (Inherited: 0x28)
struct USolarSpriteAtlas : UObject
{
};

// Object: Class Solar2D.SolarSpriteAtlasManager
// Size: 0x28 (Inherited: 0x28)
struct USolarSpriteAtlasManager : UObject
{
};

// Object: Class Solar2D.SolarSpriteBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarSpriteBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function Solar2D.SolarSpriteBlueprintLibrary.MakeBrushFromSprite
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5cc3dc4
	// Params: [ Num(4) Size(0x130) ]
	struct FSlateBrush MakeBrushFromSprite(struct USolarSprite* Sprite, int32_t Width, int32_t Height);
};

// Object: Class Solar2D.SolarSpriteComponent
// Size: 0x720 (Inherited: 0x700)
struct USolarSpriteComponent : UMeshComponent
{
	struct USolarSprite* SourceSprite; // 0x700(0x8)
	struct UMaterialInterface* MaterialOverride; // 0x708(0x8)
	struct FLinearColor SpriteColor; // 0x710(0x10)


	// Object: Function Solar2D.SolarSpriteComponent.SetSpriteColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5cc4234
	// Params: [ Num(1) Size(0x10) ]
	void SetSpriteColor(struct FLinearColor NewColor);

	// Object: Function Solar2D.SolarSpriteComponent.SetSprite
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x5cc4318
	// Params: [ Num(2) Size(0x9) ]
	bool SetSprite(struct USolarSprite* NewSprite);

	// Object: Function Solar2D.SolarSpriteComponent.GetSprite
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5cc42dc
	// Params: [ Num(1) Size(0x8) ]
	struct USolarSprite* GetSprite();
};

} // namespace SDK
