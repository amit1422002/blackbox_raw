// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class NPSDK.NPSDK
// Size: 0x48 (Inherited: 0x28)
struct UNPSDK : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)


	// Object: Function NPSDK.NPSDK.OnRecvTokResultNotify
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x382d40c
	// Params: [ Num(1) Size(0x10) ]
	void OnRecvTokResultNotify(struct FString Data);

	// Object: Function NPSDK.NPSDK.OnRecvConfigNotify
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x382d4c0
	// Params: [ Num(1) Size(0x10) ]
	void OnRecvConfigNotify(struct FString Data);

	// Object: Function NPSDK.NPSDK.NPHtpSetRoleInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382d660
	// Params: [ Num(8) Size(0x6C) ]
	int32_t NPHtpSetRoleInfo(struct FString BusinessId, struct FString RoleId, struct FString RoleName, struct FString RoleAccount, struct FString RoleServer, int32_t ServerID, struct FString GameJson);

	// Object: Function NPSDK.NPSDK.NPHtpInit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382d8d0
	// Params: [ Num(5) Size(0x3C) ]
	int32_t NPHtpInit(struct FString ProductID, struct FString GameKey, int32_t ServerType, struct FString Channel);

	// Object: Function NPSDK.NPSDK.GetStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x382d644
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetStatus();

	// Object: Function NPSDK.NPSDK.GetMsg
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x382d574
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMsg();

	// Object: Function NPSDK.NPSDK.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382da70
	// Params: [ Num(1) Size(0x8) ]
	struct UNPSDK* GetInstance();

	// Object: Function NPSDK.NPSDK.DestroyInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x382da5c
	// Params: [ Num(0) Size(0x0) ]
	void DestroyInstance();
};

// Object: Class NPSDK.NPSDKSettings
// Size: 0x40 (Inherited: 0x38)
struct UNPSDKSettings : UDeveloperSettings
{
	bool bEnableNPSDK; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

} // namespace SDK
