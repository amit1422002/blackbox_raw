// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GooglePAD.GooglePADFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39789e4
	// Params: [ Num(1) Size(0x1) ]
	enum class EGooglePADErrorCode ShowCellularDataConfirmation();

	// Object: Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978a18
	// Params: [ Num(2) Size(0x11) ]
	enum class EGooglePADErrorCode RequestRemoval(struct FString Name);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3979194
	// Params: [ Num(2) Size(0x11) ]
	enum class EGooglePADErrorCode RequestInfo(struct TArray<struct FString> AssetPacks);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978ff8
	// Params: [ Num(2) Size(0x11) ]
	enum class EGooglePADErrorCode RequestDownload(struct TArray<struct FString> AssetPacks);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978cc4
	// Params: [ Num(1) Size(0x4) ]
	void ReleaseDownloadState(int32_t State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978798
	// Params: [ Num(1) Size(0x4) ]
	void ReleaseAssetPackLocation(int32_t Location);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978acc
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetTotalBytesToDownload(int32_t State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x39786f0
	// Params: [ Num(2) Size(0x5) ]
	enum class EGooglePADStorageMethod GetStorageMethod(int32_t Location);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3978930
	// Params: [ Num(2) Size(0x2) ]
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus& Status);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978c1c
	// Params: [ Num(2) Size(0x5) ]
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32_t State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3978d5c
	// Params: [ Num(3) Size(0x15) ]
	enum class EGooglePADErrorCode GetDownloadState(struct FString Name, int32_t& State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978b74
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetBytesDownloaded(int32_t State);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978610
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetAssetsPath(int32_t Location);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3978830
	// Params: [ Num(3) Size(0x15) ]
	enum class EGooglePADErrorCode GetAssetPackLocation(struct FString Name, int32_t& Location);

	// Object: Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3978e5c
	// Params: [ Num(2) Size(0x11) ]
	enum class EGooglePADErrorCode CancelDownload(struct TArray<struct FString> AssetPacks);
};

} // namespace SDK
