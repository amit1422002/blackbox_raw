// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class DynamicAtlas.DynamicAtlas
// Size: 0xC8 (Inherited: 0x28)
struct UDynamicAtlas : UObject
{
	uint8_t Pad_0x28[0xA0]; // 0x28(0xA0)


	// Object: Function DynamicAtlas.DynamicAtlas.OnCanvasRenderTargetUpdate
	// Flags: [Final|Native|Private]
	// Offset: 0x38cea1c
	// Params: [ Num(3) Size(0x10) ]
	void OnCanvasRenderTargetUpdate(struct UCanvas* InCanvas, int32_t InWidth, int32_t InHeight);
};

// Object: Class DynamicAtlas.DynamicAtlasFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDynamicAtlasFunctionLibrary : UBlueprintFunctionLibrary
{
};

// Object: Class DynamicAtlas.DynamicAtlasLoader
// Size: 0x50 (Inherited: 0x28)
struct UDynamicAtlasLoader : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
};

// Object: Class DynamicAtlas.DynamicAtlasSettings
// Size: 0x88 (Inherited: 0x38)
struct UDynamicAtlasSettings : UDeveloperSettings
{
	bool bEnableDynamicAtlas; // 0x38(0x1)
	bool bEnableRuntimeDynamicAtlas; // 0x39(0x1)
	bool bEnableRenderTarget; // 0x3A(0x1)
	bool bClearWhenRemove; // 0x3B(0x1)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct TSoftObjectPtr<UCanvasRenderTarget2D>> DynamicAtlasSoftTemplateRenderTargets; // 0x40(0x10)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> DynamicAtlasSoftTemplateTextures; // 0x50(0x10)
	struct TSoftObjectPtr<UTexture2D> DynamicAtlasSoftTemplateClear; // 0x60(0x28)
};

// Object: Class DynamicAtlas.DynamicAtlasSubsystem
// Size: 0x200 (Inherited: 0x30)
struct UDynamicAtlasSubsystem : UWorldSubsystem
{
	struct TMap<enum class EDynamicAtlasGroup, struct UDynamicAtlas*> m_DynamicAtlas; // 0x30(0x50)
	struct TArray<struct UTexture*> AtlasTemplateRenderTargets; // 0x80(0x10)
	struct TMap<struct FString, struct UDynamicSprite*> DynamicSprites; // 0x90(0x50)
	uint8_t Pad_0xE0[0x50]; // 0xE0(0x50)
	struct TMap<int32_t, struct FString> HandleToPaths; // 0x130(0x50)
	struct TMap<struct UObject*, struct UDynamicAtlasLoader*> DynamicAtlasLoaders; // 0x180(0x50)
	uint8_t Pad_0x1D0[0x30]; // 0x1D0(0x30)
};

// Object: Class DynamicAtlas.DynamicAtlasTestMain
// Size: 0x318 (Inherited: 0x268)
struct UDynamicAtlasTestMain : UUserWidget
{
	struct UImage* Img_StaticTexture; // 0x268(0x8)
	struct UImage* Img_StaticTextureSame; // 0x270(0x8)
	struct UImage* Img_StaticSprite; // 0x278(0x8)
	struct UImage* Img_DynamicTexture; // 0x280(0x8)
	struct UImage* Img_DynamicSprite; // 0x288(0x8)
	struct UImage* Img_DynamicTextureBeyond; // 0x290(0x8)
	struct UImage* Img_DynamicTextureBig; // 0x298(0x8)
	struct UButton* BtnAdd; // 0x2A0(0x8)
	struct UButton* BtnRemove; // 0x2A8(0x8)
	struct FSoftObjectPath SoftTexturePath; // 0x2B0(0x18)
	struct FSoftObjectPath SoftSpritePath; // 0x2C8(0x18)
	struct TArray<struct FSoftObjectPath> SoftTexturePaths; // 0x2E0(0x10)
	struct TArray<struct UImage*> AddImageList; // 0x2F0(0x10)
	uint8_t Pad_0x300[0x18]; // 0x300(0x18)


	// Object: Function DynamicAtlas.DynamicAtlasTestMain.OnBtnRemoveClicked
	// Flags: [Final|Native|Private]
	// Offset: 0x38cf7b4
	// Params: [ Num(0) Size(0x0) ]
	void OnBtnRemoveClicked();

	// Object: Function DynamicAtlas.DynamicAtlasTestMain.OnBtnAddClicked
	// Flags: [Final|Native|Private]
	// Offset: 0x38cf7c8
	// Params: [ Num(0) Size(0x0) ]
	void OnBtnAddClicked();
};

// Object: Class DynamicAtlas.DynamicSprite
// Size: 0x48 (Inherited: 0x28)
struct UDynamicSprite : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UTexture* SourceTexture; // 0x30(0x8)
	struct FVector2D SourceUV; // 0x38(0x8)
	struct FVector2D SourceDimension; // 0x40(0x8)
};

} // namespace SDK
