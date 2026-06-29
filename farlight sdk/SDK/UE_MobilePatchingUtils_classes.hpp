// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MobilePatchingUtils.MobileInstalledContent
// Size: 0x48 (Inherited: 0x28)
struct UMobileInstalledContent : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)


	// Object: Function MobilePatchingUtils.MobileInstalledContent.Mount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f4e6b8
	// Params: [ Num(3) Size(0x19) ]
	bool Mount(int32_t PakOrder, struct FString MountPoint);

	// Object: Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4e7b8
	// Params: [ Num(1) Size(0x4) ]
	float GetInstalledContentSize();

	// Object: Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4e7ec
	// Params: [ Num(1) Size(0x4) ]
	float GetDiskFreeSpace();
};

// Object: Class MobilePatchingUtils.MobilePendingContent
// Size: 0x88 (Inherited: 0x48)
struct UMobilePendingContent : UMobileInstalledContent
{
	uint8_t Pad_0x48[0x40]; // 0x48(0x40)


	// Object: Function MobilePatchingUtils.MobilePendingContent.StartInstall
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f4ec10
	// Params: [ Num(2) Size(0x20) ]
	void StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed);

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4ee50
	// Params: [ Num(1) Size(0x4) ]
	float GetTotalDownloadedSize();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4ee84
	// Params: [ Num(1) Size(0x4) ]
	float GetRequiredDiskSpace();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4ed18
	// Params: [ Num(1) Size(0x4) ]
	float GetInstallProgress();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4ed4c
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDownloadStatusText();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4ee1c
	// Params: [ Num(1) Size(0x4) ]
	float GetDownloadSpeed();

	// Object: Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4eeb8
	// Params: [ Num(1) Size(0x4) ]
	float GetDownloadSize();
};

// Object: Class MobilePatchingUtils.MobilePatchingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMobilePatchingLibrary : UBlueprintFunctionLibrary
{

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5f4f518
	// Params: [ Num(5) Size(0x50) ]
	void RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed);

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4f4e0
	// Params: [ Num(1) Size(0x1) ]
	bool HasActiveWiFiConnection();

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4f358
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetSupportedPlatformNames();

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4f6f4
	// Params: [ Num(2) Size(0x18) ]
	struct UMobileInstalledContent* GetInstalledContent(struct FString InstallDirectory);

	// Object: Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5f4f444
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetActiveDeviceProfileName();
};

} // namespace SDK
