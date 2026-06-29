// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0x90 (Inherited: 0x28)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
	struct FAppleImageUtilsImageConversionResult ConversionResult; // 0x68(0x20)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)


	// Object: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f38df0
	// Params: [ Num(6) Size(0x20) ]
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate);

	// Object: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f38c30
	// Params: [ Num(6) Size(0x20) ]
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate);

	// Object: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f391b0
	// Params: [ Num(7) Size(0x20) ]
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate);

	// Object: Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f38fb0
	// Params: [ Num(7) Size(0x20) ]
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate);
};

// Object: Class AppleImageUtils.AppleImageInterface
// Size: 0x28 (Inherited: 0x28)
struct IAppleImageInterface : IInterface
{
};

} // namespace SDK
