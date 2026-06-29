// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SolarlandCrashSightBridge.SolarCrashReportManager
// Size: 0x50 (Inherited: 0x28)
struct USolarCrashReportManager : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)


	// Object: Function SolarlandCrashSightBridge.SolarCrashReportManager.SetUserId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84eba98
	// Params: [ Num(1) Size(0x10) ]
	void SetUserId(struct FString InUserID);

	// Object: Function SolarlandCrashSightBridge.SolarCrashReportManager.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x84ebb4c
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function SolarlandCrashSightBridge.SolarCrashReportManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x84ebb74
	// Params: [ Num(1) Size(0x8) ]
	struct USolarCrashReportManager* GetInstance();

	// Object: Function SolarlandCrashSightBridge.SolarCrashReportManager.DestroyInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x84ebb60
	// Params: [ Num(0) Size(0x0) ]
	void DestroyInstance();
};

// Object: Class SolarlandCrashSightBridge.SolarCrashSettings
// Size: 0x120 (Inherited: 0x38)
struct USolarCrashSettings : UDeveloperSettings
{
	struct FString SolarCrashWindowsUploadUrl; // 0x38(0x10)
	struct FString SolarCrashWindowsUploadUrlDomestic; // 0x48(0x10)
	struct FString SolarCrashWindowsAppId; // 0x58(0x10)
	struct FString SolarCrashWindowsAppIdDomestic; // 0x68(0x10)
	struct FString SolarCrashAndroidUploadUrl; // 0x78(0x10)
	struct FString SolarCrashAndroidUploadUrlDomestic; // 0x88(0x10)
	struct FString SolarCrashIosUploadUrl; // 0x98(0x10)
	struct FString SolarCrashIosUploadUrlDomestic; // 0xA8(0x10)
	struct FString SolarCrashAndroidAppId; // 0xB8(0x10)
	struct FString SolarCrashAndroidAppIdDomestic; // 0xC8(0x10)
	struct FString SolarCrashIosAppId; // 0xD8(0x10)
	struct FString SolarCrashIosAppIdDomestic; // 0xE8(0x10)
	struct FString SolarCrashWindowsAppKey; // 0xF8(0x10)
	struct FString SolarCrashWindowsAppKeyDomestic; // 0x108(0x10)
	bool bUseCrashSightInWinPlatform; // 0x118(0x1)
	bool bOnlyUploadFirstCrash; // 0x119(0x1)
	bool bDebugMode; // 0x11A(0x1)
	uint8_t Pad_0x11B[0x5]; // 0x11B(0x5)
};

} // namespace SDK
