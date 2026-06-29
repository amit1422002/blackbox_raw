// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ImgMedia.ImgMediaSource
// Size: 0xB0 (Inherited: 0x88)
struct UImgMediaSource : UBaseMediaSource
{
	struct FFrameRate FrameRateOverride; // 0x88(0x8)
	struct FString ProxyOverride; // 0x90(0x10)
	struct FDirectoryPath SequencePath; // 0xA0(0x10)


	// Object: Function ImgMedia.ImgMediaSource.SetSequencePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e58674
	// Params: [ Num(1) Size(0x10) ]
	void SetSequencePath(struct FString Path);

	// Object: Function ImgMedia.ImgMediaSource.GetSequencePath
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e58728
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSequencePath();

	// Object: Function ImgMedia.ImgMediaSource.GetProxies
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e58814
	// Params: [ Num(1) Size(0x10) ]
	void GetProxies(struct TArray<struct FString>& OutProxies);
};

} // namespace SDK
