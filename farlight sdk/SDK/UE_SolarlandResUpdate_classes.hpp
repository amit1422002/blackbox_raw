// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SolarlandResUpdate.DownloadFileTask
// Size: 0xF8 (Inherited: 0x28)
struct UDownloadFileTask : UObject
{
	struct FMulticastInlineDelegate OnDownloadComplete; // 0x28(0x10)
	struct FMulticastInlineDelegate OnDownloadProgress; // 0x38(0x10)
	struct FMulticastInlineDelegate OnDownloadFailed; // 0x48(0x10)
	uint8_t Pad_0x58[0xA0]; // 0x58(0xA0)


	// Object: Function SolarlandResUpdate.DownloadFileTask.StartDownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84df95c
	// Params: [ Num(0) Size(0x0) ]
	void StartDownload();

	// Object: Function SolarlandResUpdate.DownloadFileTask.SetTaskComplete
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84df948
	// Params: [ Num(0) Size(0x0) ]
	void SetTaskComplete();

	// Object: Function SolarlandResUpdate.DownloadFileTask.SetSaveToFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84df6e8
	// Params: [ Num(1) Size(0x1) ]
	void SetSaveToFile(bool InSet);

	// Object: Function SolarlandResUpdate.DownloadFileTask.SetForceRedownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84df884
	// Params: [ Num(1) Size(0x1) ]
	void SetForceRedownload(bool inForceRedownload);

	// Object: Function SolarlandResUpdate.DownloadFileTask.SetForceCheckSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84df794
	// Params: [ Num(2) Size(0x8) ]
	void SetForceCheckSize(bool InIfForceCheckSize, int32_t InTotalSize);

	// Object: Function SolarlandResUpdate.DownloadFileTask.OnWriteFileComplete
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x84df59c
	// Params: [ Num(1) Size(0x1) ]
	void OnWriteFileComplete(bool bWriteResult);

	// Object: Function SolarlandResUpdate.DownloadFileTask.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84df64c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();

	// Object: Function SolarlandResUpdate.DownloadFileTask.CreateNoFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x84df970
	// Params: [ Num(3) Size(0x20) ]
	struct UDownloadFileTask* CreateNoFile(struct FString URL, bool bByChunk);

	// Object: Function SolarlandResUpdate.DownloadFileTask.Create
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x84dfa6c
	// Params: [ Num(7) Size(0x40) ]
	struct UDownloadFileTask* Create(struct FString URL, struct FString FileDirectory, struct FString Filename, bool bByChunk, bool bForceWrite, bool bAsyncWrite);

	// Object: Function SolarlandResUpdate.DownloadFileTask.CancelDownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84df934
	// Params: [ Num(0) Size(0x0) ]
	void CancelDownload();
};

// Object: Class SolarlandResUpdate.SolarlandResUpdater
// Size: 0x30 (Inherited: 0x28)
struct USolarlandResUpdater : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

} // namespace SDK
