// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AutoTexAtlasPlugin.AutoPluginFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAutoPluginFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AutoTexAtlasPlugin.AutoPluginFunctionLibrary.DrawSlateTexture9Slice
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5cc8440
	// Params: [ Num(18) Size(0x59) ]
	void DrawSlateTexture9Slice(struct AHUD* Target, struct UAutoSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, float MarginLeft, float MarginTop, float MarginRight, float MarginBottom, float OriginalWidth, float OriginalHeight, struct FLinearColor Tint, uint8_t BlendMode);

	// Object: Function AutoTexAtlasPlugin.AutoPluginFunctionLibrary.DrawSlateTexture
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5cc8920
	// Params: [ Num(18) Size(0x5A) ]
	void DrawSlateTexture(struct AHUD* Target, struct UAutoSlateTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, struct FLinearColor Tint, uint8_t BlendMode, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot, bool bFlipX, bool bFlipY);

	// Object: Function AutoTexAtlasPlugin.AutoPluginFunctionLibrary.CopyBrushWithSlateTexture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x5cc8038
	// Params: [ Num(3) Size(0x250) ]
	struct FSlateBrush CopyBrushWithSlateTexture(struct UAutoSlateTexture* Texture, struct FSlateBrush& SourceBrush);
};

// Object: Class AutoTexAtlasPlugin.AutoSlateTexture
// Size: 0x48 (Inherited: 0x28)
struct UAutoSlateTexture : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UTexture* AtlasTexture; // 0x30(0x8)
	struct FVector2D StartUV; // 0x38(0x8)
	struct FVector2D SizeUV; // 0x40(0x8)


	// Object: Function AutoTexAtlasPlugin.AutoSlateTexture.GetDimensions
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5cc9198
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDimensions();

	// Object: Function AutoTexAtlasPlugin.AutoSlateTexture.CreateRegion
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5cc90dc
	// Params: [ Num(2) Size(0x18) ]
	struct UAutoSlateTexture* CreateRegion(struct FMargin& Margin);
};

} // namespace SDK
