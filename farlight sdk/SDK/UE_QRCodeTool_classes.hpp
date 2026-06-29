// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class QRCodeTool.QRCodeWrapper
// Size: 0x28 (Inherited: 0x28)
struct UQRCodeWrapper : UObject
{

	// Object: Function QRCodeTool.QRCodeWrapper.TestAllDemo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3817938
	// Params: [ Num(0) Size(0x0) ]
	void TestAllDemo();

	// Object: Function QRCodeTool.QRCodeWrapper.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3817960
	// Params: [ Num(1) Size(0x8) ]
	struct UQRCodeWrapper* GetInstance();

	// Object: Function QRCodeTool.QRCodeWrapper.GenerateCompressedPNGData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x38176ac
	// Params: [ Num(4) Size(0x28) ]
	void GenerateCompressedPNGData(int32_t Width, int32_t Height, struct TArray<uint8_t>& InRawRGBA, struct TArray<uint8_t>& OutCompressedData);

	// Object: Function QRCodeTool.QRCodeWrapper.DestroyInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x381794c
	// Params: [ Num(0) Size(0x0) ]
	void DestroyInstance();

	// Object: Function QRCodeTool.QRCodeWrapper.ConvertStrToRawData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x381783c
	// Params: [ Num(2) Size(0x20) ]
	void ConvertStrToRawData(struct FString InStr, struct TArray<uint8_t>& OutRawData);
};

} // namespace SDK
