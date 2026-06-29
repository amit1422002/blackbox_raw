// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ImageWriteQueue.ImageWriteBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UImageWriteBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8cef73c
	// Params: [ Num(4) Size(0x81) ]
	void ExportToDisk(struct UTexture* Texture, struct FString Filename, struct FImageWriteOptions& options, bool LinearToGamma);
};

} // namespace SDK
