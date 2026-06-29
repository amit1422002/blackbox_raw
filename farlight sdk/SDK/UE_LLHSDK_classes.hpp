// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class LLHSDK.LLHSDKAppUtils
// Size: 0x38 (Inherited: 0x28)
struct ULLHSDKAppUtils : UObject
{
	struct FMulticastInlineDelegate OnSteamUserStatesUpdate; // 0x28(0x10)


	// Object: Function LLHSDK.LLHSDKAppUtils.SupportBothArmAndX86
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a310
	// Params: [ Num(1) Size(0x1) ]
	bool SupportBothArmAndX86();

	// Object: Function LLHSDK.LLHSDKAppUtils.ShowSteamVirtualKeyboard
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319cac
	// Params: [ Num(1) Size(0x1) ]
	bool ShowSteamVirtualKeyboard();

	// Object: Function LLHSDK.LLHSDKAppUtils.SDKConfigIsMultiDetect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a5ec
	// Params: [ Num(1) Size(0x1) ]
	bool SDKConfigIsMultiDetect();

	// Object: Function LLHSDK.LLHSDKAppUtils.SDKConfigIsDebug
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a624
	// Params: [ Num(1) Size(0x1) ]
	bool SDKConfigIsDebug();

	// Object: DelegateFunction LLHSDK.LLHSDKAppUtils.OnSteamUserStatesUpdate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(4) Size(0x28) ]
	void OnSteamUserStatesUpdate__DelegateSignature(struct FString SteamId, bool IsFriend, bool Online, struct FString FriendName);

	// Object: Function LLHSDK.LLHSDKAppUtils.IsSteamFriendOnline
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319eb8
	// Params: [ Num(2) Size(0x11) ]
	bool IsSteamFriendOnline(struct FString SteamId);

	// Object: Function LLHSDK.LLHSDKAppUtils.IsSimulator
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a348
	// Params: [ Num(1) Size(0x1) ]
	bool IsSimulator();

	// Object: Function LLHSDK.LLHSDKAppUtils.IsPlatformSteamDeck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319ce4
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlatformSteamDeck();

	// Object: Function LLHSDK.LLHSDKAppUtils.IsPackageInstalled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a450
	// Params: [ Num(2) Size(0x11) ]
	bool IsPackageInstalled(struct FString InPackageName);

	// Object: Function LLHSDK.LLHSDKAppUtils.IsNewCheckoutCounter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a26c
	// Params: [ Num(1) Size(0x1) ]
	bool IsNewCheckoutCounter();

	// Object: Function LLHSDK.LLHSDKAppUtils.IsGrayRelease
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a2d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsGrayRelease();

	// Object: Function LLHSDK.LLHSDKAppUtils.InviteSteamUserToGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a148
	// Params: [ Num(2) Size(0x11) ]
	bool InviteSteamUserToGame(struct FString SteamId);

	// Object: Function LLHSDK.LLHSDKAppUtils.GetVersionName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331ab3c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetVersionName();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetVersionCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331abd8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetVersionCode();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSteamID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319bfc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSteamID();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsOnlineList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319d30
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<bool> GetSteamFriendsOnlineList();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsNameList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319dcc
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetSteamFriendsNameList();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSteamFriendName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319f70
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetSteamFriendName(struct FString SteamId);

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSteamFriendIDList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a05c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetSteamFriendIDList();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSteamFriendCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a200
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSteamFriendCount();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSDKVersionName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331aa04
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSDKVersionName();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSDKVersionCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331aaa0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSDKVersionCode();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetSDKAppId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a8cc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSDKAppId();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetRunningProcessName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a3b4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetRunningProcessName();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetPSPAppID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319b60
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPSPAppID();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetOperatingSystemId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331ad10
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetOperatingSystemId();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331ae5c
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKAppUtils* GetInstance();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetGameTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a380
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetGameTime();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetGameID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a65c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetGameID();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetEnvId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a550
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetEnvId();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetDistributionChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a2a4
	// Params: [ Num(1) Size(0x1) ]
	enum class EDistributionChannel GetDistributionChannel();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetDeviceUUID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331adac
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceUUID();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetCommunityEnvId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319a78
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetCommunityEnvId(bool bIsDebug);

	// Object: Function LLHSDK.LLHSDKAppUtils.GetChannelID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a6f8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetChannelID();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetBiosUUID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331ac74
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetBiosUUID();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetAppName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a794
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAppName();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetAppIDRaw
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a830
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAppIDRaw();

	// Object: Function LLHSDK.LLHSDKAppUtils.GetAppID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a968
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAppID();

	// Object: Function LLHSDK.LLHSDKAppUtils.DoesDistributeForDomestic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331a234
	// Params: [ Num(1) Size(0x1) ]
	bool DoesDistributeForDomestic();

	// Object: Function LLHSDK.LLHSDKAppUtils.DismissSteamVirtualKeyboard
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319c98
	// Params: [ Num(0) Size(0x0) ]
	void DismissSteamVirtualKeyboard();

	// Object: Function LLHSDK.LLHSDKAppUtils.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331ae48
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();

	// Object: Function LLHSDK.LLHSDKAppUtils.BindOnlineSubsystemSteamPresence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3319d1c
	// Params: [ Num(0) Size(0x0) ]
	void BindOnlineSubsystemSteamPresence();
};

// Object: Class LLHSDK.LLHSDKCommunity
// Size: 0xD8 (Inherited: 0x28)
struct ULLHSDKCommunity : UObject
{
	struct FMulticastInlineDelegate OnInitCommunity; // 0x28(0x10)
	struct FMulticastInlineDelegate OnExitCommunity; // 0x38(0x10)
	struct FMulticastInlineDelegate OnGetCommunityRedhint; // 0x48(0x10)
	struct FMulticastInlineDelegate OnClearCommunityRedhint; // 0x58(0x10)
	struct FMulticastInlineDelegate OnImageDownload; // 0x68(0x10)
	struct FMulticastInlineDelegate OnForumClosed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnForumOpen; // 0x88(0x10)
	struct FMulticastInlineDelegate OnNeedBindAccount; // 0x98(0x10)
	struct FMulticastInlineDelegate OnRedPointShow; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnRedPointDismiss; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnReceiveNotification; // 0xC8(0x10)


	// Object: Function LLHSDK.LLHSDKCommunity.ShowCommunity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331f8c4
	// Params: [ Num(3) Size(0x21) ]
	void ShowCommunity(struct FString InUrl, struct FString InExtraInfo, enum class ELLHForumSDKOrientationMode InOrientationMode);

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnRedPointShow__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnRedPointShow__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnRedPointDismiss__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnRedPointDismiss__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnReceiveNotification__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnReceiveNotification__DelegateSignature(struct FString JsonStr);

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnNeedBindAccount__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnNeedBindAccount__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnInitCommunity__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnInitCommunity__DelegateSignature(struct FString ResultStr);

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnImageDownload__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnImageDownload__DelegateSignature(bool bSuccess);

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnGetCommunityRedhint__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnGetCommunityRedhint__DelegateSignature(struct FString ResultStr);

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnForumOpen__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnForumOpen__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnForumClosed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnForumClosed__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnExitCommunity__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnExitCommunity__DelegateSignature(struct FString ResultStr);

	// Object: DelegateFunction LLHSDK.LLHSDKCommunity.OnClearCommunityRedhint__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnClearCommunityRedhint__DelegateSignature(struct FString ResultStr);

	// Object: Function LLHSDK.LLHSDKCommunity.LoginCommunity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331f9f4
	// Params: [ Num(1) Size(0x10) ]
	void LoginCommunity(struct FString InLoginParamsJsonStr);

	// Object: Function LLHSDK.LLHSDKCommunity.InitCommunityConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331ff3c
	// Params: [ Num(3) Size(0x30) ]
	void InitCommunityConfig(struct FString UrlInfo, struct FString ReqMethod, struct FString ExtraHttpParams);

	// Object: Function LLHSDK.LLHSDKCommunity.HideCommunity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331f8b0
	// Params: [ Num(0) Size(0x0) ]
	void HideCommunity();

	// Object: Function LLHSDK.LLHSDKCommunity.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332008c
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKCommunity* GetInstance();

	// Object: Function LLHSDK.LLHSDKCommunity.GetCommunityRedHint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331fcc4
	// Params: [ Num(3) Size(0x30) ]
	void GetCommunityRedHint(struct FString URL, struct FString ReqMethod, struct FString ExtraHttpParams);

	// Object: Function LLHSDK.LLHSDKCommunity.ExitCommunity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331fe00
	// Params: [ Num(3) Size(0x30) ]
	void ExitCommunity(struct FString URL, struct FString ReqMethod, struct FString ExtraHttpParams);

	// Object: Function LLHSDK.LLHSDKCommunity.DownloadImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331fa98
	// Params: [ Num(2) Size(0x20) ]
	void DownloadImage(struct FString URL, struct FString FilePath);

	// Object: Function LLHSDK.LLHSDKCommunity.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3320078
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();

	// Object: Function LLHSDK.LLHSDKCommunity.CommunitySendBindResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331f89c
	// Params: [ Num(0) Size(0x0) ]
	void CommunitySendBindResult();

	// Object: Function LLHSDK.LLHSDKCommunity.ClearCommunityRedHint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x331fb88
	// Params: [ Num(3) Size(0x30) ]
	void ClearCommunityRedHint(struct FString URL, struct FString ReqMethod, struct FString ExtraHttpParams);
};

// Object: Class LLHSDK.LLHSDKCustomerService
// Size: 0x90 (Inherited: 0x28)
struct ULLHSDKCustomerService : UObject
{
	struct FMulticastInlineDelegate OnReceiveNotification; // 0x28(0x10)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FMulticastInlineDelegate OnPSPConfig; // 0x40(0x10)
	struct FMulticastInlineDelegate OnPSPUrlGet; // 0x50(0x10)
	struct FMulticastInlineDelegate OnPSPBadgeGet; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPSPAccountCloseUrlGet; // 0x70(0x10)
	struct FMulticastInlineDelegate OnPSPPageOpen; // 0x80(0x10)


	// Object: Function LLHSDK.LLHSDKCustomerService.ShowCustomerServicePage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3320974
	// Params: [ Num(1) Size(0x10) ]
	void ShowCustomerServicePage(struct FString ExtInfoStr);

	// Object: Function LLHSDK.LLHSDKCustomerService.SetCustomerServiceDebug
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33208d0
	// Params: [ Num(1) Size(0x10) ]
	void SetCustomerServiceDebug(struct FString InJsonParamsStr);

	// Object: Function LLHSDK.LLHSDKCustomerService.PSPUrlGuestGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3320804
	// Params: [ Num(0) Size(0x0) ]
	void PSPUrlGuestGet();

	// Object: Function LLHSDK.LLHSDKCustomerService.PSPUrlGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3320818
	// Params: [ Num(0) Size(0x0) ]
	void PSPUrlGet();

	// Object: Function LLHSDK.LLHSDKCustomerService.PSPPageOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3320724
	// Params: [ Num(1) Size(0x10) ]
	void PSPPageOpen(struct FString Params);

	// Object: Function LLHSDK.LLHSDKCustomerService.PSPConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332082c
	// Params: [ Num(1) Size(0x10) ]
	void PSPConfig(struct FString Params);

	// Object: Function LLHSDK.LLHSDKCustomerService.PSPBadgeGuestGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33207dc
	// Params: [ Num(0) Size(0x0) ]
	void PSPBadgeGuestGet();

	// Object: Function LLHSDK.LLHSDKCustomerService.PSPBadgeGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33207f0
	// Params: [ Num(0) Size(0x0) ]
	void PSPBadgeGet();

	// Object: Function LLHSDK.LLHSDKCustomerService.PSPAccountCloseUrlGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33207c8
	// Params: [ Num(0) Size(0x0) ]
	void PSPAccountCloseUrlGet();

	// Object: DelegateFunction LLHSDK.LLHSDKCustomerService.OnReceiveNotification__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void OnReceiveNotification__DelegateSignature(int32_t NotificationType);

	// Object: DelegateFunction LLHSDK.LLHSDKCustomerService.OnPSPCallback__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnPSPCallback__DelegateSignature(struct FString CallbackData);

	// Object: Function LLHSDK.LLHSDKCustomerService.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3320a2c
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKCustomerService* GetInstance();

	// Object: Function LLHSDK.LLHSDKCustomerService.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3320a18
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();
};

// Object: Class LLHSDK.LLHSDKDeviceUtils
// Size: 0x48 (Inherited: 0x28)
struct ULLHSDKDeviceUtils : UObject
{
	struct FMulticastInlineDelegate OnGoogleAdID; // 0x28(0x10)
	struct FMulticastInlineDelegate OnDeviceScore; // 0x38(0x10)


	// Object: DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnGoogleAdID__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnGoogleAdID__DelegateSignature(struct FString GoogleAdID);

	// Object: DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnDeviceScore__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void OnDeviceScore__DelegateSignature(int32_t DeviceScore);

	// Object: Function LLHSDK.LLHSDKDeviceUtils.IsEmulator
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33215cc
	// Params: [ Num(1) Size(0x1) ]
	bool IsEmulator();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetTotalRAM
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321494
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetTotalRAM();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetTotalMemorySize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321604
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetTotalMemorySize();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetTimezoneName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33217d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetTimezoneName();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetSerialNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33210d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSerialNumber();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetOSVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321874
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetOSVersion();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetNetworkTypeEnum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321b80
	// Params: [ Num(1) Size(0x1) ]
	enum class ELLHSDKNetworkType GetNetworkTypeEnum();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetNetworkType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321bb4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNetworkType();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetMacAddress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321c50
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMacAddress();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetLogicalPackageName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321210
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLogicalPackageName();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321f84
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKDeviceUtils* GetInstance();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetIMSI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321ae4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIMSI();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetIDFA
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321d9c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIDFA();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetGoogleAdID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321d88
	// Params: [ Num(0) Size(0x0) ]
	void GetGoogleAdID();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDisplayMetrics
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33212ac
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<float> GetDisplayMetrics();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDisplayCutout
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321348
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<float> GetDisplayCutout();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDeviceType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321a48
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceType();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDeviceScore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33213e4
	// Params: [ Num(0) Size(0x0) ]
	void GetDeviceScore();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDeviceModel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321910
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceModel();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDeviceID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321ed4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceID();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDeviceCarrier
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321cec
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceCarrier();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDeviceBrand
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33219ac
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceBrand();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetDeviceAbi
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321530
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceAbi();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetCPUModel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332173c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCPUModel();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetCPUHardWareName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33216a0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCPUHardWareName();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetAvailableRAM
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33213f8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAvailableRAM();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetAndroidID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321e38
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAndroidID();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.GetAdID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321174
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAdID();

	// Object: Function LLHSDK.LLHSDKDeviceUtils.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3321f70
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();
};

// Object: Class LLHSDK.LLHSDKLocalization
// Size: 0x28 (Inherited: 0x28)
struct ULLHSDKLocalization : UObject
{

	// Object: Function LLHSDK.LLHSDKLocalization.SetLocaleName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3322b84
	// Params: [ Num(1) Size(0x10) ]
	void SetLocaleName(struct FString InLocale);

	// Object: Function LLHSDK.LLHSDKLocalization.SetLocale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3322c78
	// Params: [ Num(1) Size(0x1) ]
	void SetLocale(enum class ELLHSDKSupportedLanguage InLocale);

	// Object: Function LLHSDK.LLHSDKLocalization.GetLocaleName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33229e8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLocaleName();

	// Object: Function LLHSDK.LLHSDKLocalization.GetLocaleInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3322a84
	// Params: [ Num(1) Size(0x20) ]
	struct FLLHSDKLocaleInfo GetLocaleInfo();

	// Object: Function LLHSDK.LLHSDKLocalization.GetLocaleEnum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3322b50
	// Params: [ Num(1) Size(0x1) ]
	enum class ELLHSDKSupportedLanguage GetLocaleEnum();

	// Object: Function LLHSDK.LLHSDKLocalization.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3322d24
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKLocalization* GetInstance();

	// Object: Function LLHSDK.LLHSDKLocalization.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3322d10
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();
};

// Object: Class LLHSDK.LLHSDKLogin
// Size: 0x288 (Inherited: 0x28)
struct ULLHSDKLogin : UObject
{
	struct FMulticastInlineDelegate OnInitFinish; // 0x28(0x10)
	struct FMulticastInlineDelegate OnLoginFinish; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLoginFailed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnBindFinish; // 0x58(0x10)
	struct FMulticastInlineDelegate OnSwitchAccountFinish; // 0x68(0x10)
	struct FMulticastInlineDelegate OnSwitchAccountFailed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnLimSteamSDKInited; // 0x88(0x10)
	struct FMulticastInlineDelegate OnSteamAutoLogin; // 0x98(0x10)
	struct FMulticastInlineDelegate OnSteamRegister; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnGetSteamRegisterUrl; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnGetThirdPartyLoginResult; // 0xC8(0x10)
	struct FMulticastInlineDelegate OnGetVerifyAccountResults; // 0xD8(0x10)
	struct FMulticastInlineDelegate OnSteamBindUrlGet; // 0xE8(0x10)
	struct FMulticastInlineDelegate OnSteamLoginResultSet; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnSteamGetAccountInfo; // 0x108(0x10)
	struct FMulticastInlineDelegate OnSteamBindFinish; // 0x118(0x10)
	struct FMulticastInlineDelegate OnSteamEulaChanged; // 0x128(0x10)
	struct FMulticastInlineDelegate OnSteamEulaUrlGet; // 0x138(0x10)
	struct FMulticastInlineDelegate OnSteamEulaConfirm; // 0x148(0x10)
	struct FMulticastInlineDelegate OnSteamRealNameCheck; // 0x158(0x10)
	struct FMulticastInlineDelegate OnSteamRealNameUrlGet; // 0x168(0x10)
	struct FMulticastInlineDelegate OnSteamRealNameResultSet; // 0x178(0x10)
	struct FMulticastInlineDelegate OnSteamAntiAddHeartbeatCheck; // 0x188(0x10)
	struct FMulticastInlineDelegate OnSteamAntiAddHeartbeat; // 0x198(0x10)
	struct FMulticastInlineDelegate OnNSSDKInited; // 0x1A8(0x10)
	struct FMulticastInlineDelegate OnNSLoginStart; // 0x1B8(0x10)
	struct FMulticastInlineDelegate OnNSAccountInfoGet; // 0x1C8(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKInited; // 0x1D8(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKEventCallback; // 0x1E8(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKLogin; // 0x1F8(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKLogout; // 0x208(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKOpenAccountPage; // 0x218(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKOpenSwitchAccountPage; // 0x228(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKLanguageChange; // 0x238(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKGetUserInfo; // 0x248(0x10)
	struct FMulticastInlineDelegate OnLIMPCRegister; // 0x258(0x10)
	struct FMulticastInlineDelegate OnLIMPCLoginBind; // 0x268(0x10)
	struct FMulticastInlineDelegate OnProtocolClick; // 0x278(0x10)


	// Object: Function LLHSDK.LLHSDKLogin.UpdateSteamCallBack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323f7c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateSteamCallBack();

	// Object: Function LLHSDK.LLHSDKLogin.SwitchOrLinkAccount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324ecc
	// Params: [ Num(0) Size(0x0) ]
	void SwitchOrLinkAccount();

	// Object: Function LLHSDK.LLHSDKLogin.SteamRegister
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33243f4
	// Params: [ Num(2) Size(0x11) ]
	bool SteamRegister(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.SteamRealNameUrlGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323da0
	// Params: [ Num(0) Size(0x0) ]
	void SteamRealNameUrlGet();

	// Object: Function LLHSDK.LLHSDKLogin.SteamRealNameResultSet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323cfc
	// Params: [ Num(1) Size(0x10) ]
	void SteamRealNameResultSet(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.SteamRealNameCheck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323db4
	// Params: [ Num(0) Size(0x0) ]
	void SteamRealNameCheck();

	// Object: Function LLHSDK.LLHSDKLogin.SteamLoginResultSet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33241b8
	// Params: [ Num(2) Size(0x11) ]
	bool SteamLoginResultSet(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.SteamGetAccountInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324048
	// Params: [ Num(2) Size(0x11) ]
	bool SteamGetAccountInfo(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.SteamFree
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33243e0
	// Params: [ Num(0) Size(0x0) ]
	void SteamFree();

	// Object: Function LLHSDK.LLHSDKLogin.SteamEULAUrlGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323e6c
	// Params: [ Num(0) Size(0x0) ]
	void SteamEULAUrlGet();

	// Object: Function LLHSDK.LLHSDKLogin.SteamEulaConfirm
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323dc8
	// Params: [ Num(1) Size(0x10) ]
	void SteamEulaConfirm(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.SteamEULACheck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323e80
	// Params: [ Num(0) Size(0x0) ]
	void SteamEULACheck();

	// Object: Function LLHSDK.LLHSDKLogin.SteamBindUrlGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324100
	// Params: [ Num(2) Size(0x11) ]
	bool SteamBindUrlGet(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.SteamAutoLogin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33244ac
	// Params: [ Num(2) Size(0x11) ]
	bool SteamAutoLogin(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.SteamAntiAddHeartbeatCheck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323ce8
	// Params: [ Num(0) Size(0x0) ]
	void SteamAntiAddHeartbeatCheck();

	// Object: Function LLHSDK.LLHSDKLogin.SteamAntiAddHeartbeat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323cd4
	// Params: [ Num(0) Size(0x0) ]
	void SteamAntiAddHeartbeat();

	// Object: Function LLHSDK.LLHSDKLogin.StartBindPhone
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324e44
	// Params: [ Num(0) Size(0x0) ]
	void StartBindPhone();

	// Object: Function LLHSDK.LLHSDKLogin.ShowSystemToast
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332461c
	// Params: [ Num(3) Size(0x18) ]
	void ShowSystemToast(struct FString Content, int32_t Duration, float Alpha);

	// Object: Function LLHSDK.LLHSDKLogin.ShowSwitchView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324e6c
	// Params: [ Num(0) Size(0x0) ]
	void ShowSwitchView();

	// Object: Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Ok
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33247e0
	// Params: [ Num(0) Size(0x0) ]
	void ShowProtocolViewV2Ok();

	// Object: Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Confirm
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33247f4
	// Params: [ Num(0) Size(0x0) ]
	void ShowProtocolViewV2Confirm();

	// Object: Function LLHSDK.LLHSDKLogin.SetShowCustomDialog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324740
	// Params: [ Num(1) Size(0x1) ]
	void SetShowCustomDialog(bool bEnable);

	// Object: Function LLHSDK.LLHSDKLogin.SetLimPCSDKLogHandler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332399c
	// Params: [ Num(1) Size(0x4) ]
	int32_t SetLimPCSDKLogHandler();

	// Object: Function LLHSDK.LLHSDKLogin.SetLimPCSDKEventHandler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323968
	// Params: [ Num(1) Size(0x4) ]
	int32_t SetLimPCSDKEventHandler();

	// Object: Function LLHSDK.LLHSDKLogin.RegisterLimPCUser
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323578
	// Params: [ Num(1) Size(0x10) ]
	void RegisterLimPCUser(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.QueryCurrentUserInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324938
	// Params: [ Num(1) Size(0x148) ]
	struct FLLHSDKLoginUserInfo QueryCurrentUserInfo();

	// Object: Function LLHSDK.LLHSDKLogin.QueryCurrentUser
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324cec
	// Params: [ Num(1) Size(0x48) ]
	struct FLLHSDKLoginUser QueryCurrentUser();

	// Object: Function LLHSDK.LLHSDKLogin.OpenSteamBindPage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324270
	// Params: [ Num(2) Size(0x11) ]
	bool OpenSteamBindPage(struct FString URL);

	// Object: Function LLHSDK.LLHSDKLogin.OpenLIMPCSwitchAccPage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323784
	// Params: [ Num(1) Size(0x4) ]
	int32_t OpenLIMPCSwitchAccPage();

	// Object: Function LLHSDK.LLHSDKLogin.OpenLIMPCAccountPage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33237b8
	// Params: [ Num(2) Size(0x14) ]
	int32_t OpenLIMPCAccountPage(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.OnProtocolClick__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnProtocolClick__DelegateSignature(bool bConfirmed);

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x21) ]
	void OnLoginFinish__DelegateSignature(struct FString AppUid, struct FString AppToken, enum class ELLHSDKLoginType LoginType);

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFailed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnLoginFailed__DelegateSignature(enum class ELLHSDKLoginType LoginType, int32_t Errorcode);

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.OnInitFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnInitFinish__DelegateSignature(bool bSuccess, int32_t Errorcode);

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.OnBindFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(4) Size(0x29) ]
	void OnBindFinish__DelegateSignature(bool bSuccess, struct FString AppUid, struct FString AppToken, enum class ELLHSDKLoginType LoginType);

	// Object: Function LLHSDK.LLHSDKLogin.NSLogout
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323b3c
	// Params: [ Num(0) Size(0x0) ]
	void NSLogout();

	// Object: Function LLHSDK.LLHSDKLogin.NSLoginStart
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323b50
	// Params: [ Num(2) Size(0x11) ]
	bool NSLoginStart(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.NSFinalize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323c08
	// Params: [ Num(0) Size(0x0) ]
	void NSFinalize();

	// Object: Function LLHSDK.LLHSDKLogin.NSAccountInfoGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323a84
	// Params: [ Num(2) Size(0x11) ]
	bool NSAccountInfoGet(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.MobileSDKInit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324e80
	// Params: [ Num(0) Size(0x0) ]
	void MobileSDKInit();

	// Object: Function LLHSDK.LLHSDKLogin.LogoutLimPCSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332386c
	// Params: [ Num(1) Size(0x4) ]
	int32_t LogoutLimPCSDK();

	// Object: Function LLHSDK.LLHSDKLogin.LogOut
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324e58
	// Params: [ Num(0) Size(0x0) ]
	void LogOut();

	// Object: Function LLHSDK.LLHSDKLogin.LoginUserInfo_ToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3324840
	// Params: [ Num(2) Size(0x158) ]
	struct FString LoginUserInfo_ToString(struct FLLHSDKLoginUserInfo& InUserInfo);

	// Object: Function LLHSDK.LLHSDKLogin.LoginUser_ToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3324b78
	// Params: [ Num(2) Size(0x58) ]
	struct FString LoginUser_ToString(struct FLLHSDKLoginUser& InUser);

	// Object: Function LLHSDK.LLHSDKLogin.LoginLimPCSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33238a0
	// Params: [ Num(2) Size(0x14) ]
	int32_t LoginLimPCSDK(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.LoginBindLimPCUser
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33234d4
	// Params: [ Num(1) Size(0x10) ]
	void LoginBindLimPCUser(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.Login
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324ee0
	// Params: [ Num(0) Size(0x0) ]
	void Login();

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.LimSteamSDKCallBack__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LimSteamSDKCallBack__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.LimPCSDKCallBack__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LimPCSDKCallBack__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.LimOnSteamVerifyAccountResultSet__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void LimOnSteamVerifyAccountResultSet__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKLogin.LimOnSteamLoginResultSet__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LimOnSteamLoginResultSet__DelegateSignature(struct FString Datas);

	// Object: Function LLHSDK.LLHSDKLogin.IsInitFinish
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324e94
	// Params: [ Num(1) Size(0x1) ]
	bool IsInitFinish();

	// Object: Function LLHSDK.LLHSDKLogin.IsCurrentUserNewReg
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324808
	// Params: [ Num(1) Size(0x1) ]
	bool IsCurrentUserNewReg();

	// Object: Function LLHSDK.LLHSDKLogin.InitNSSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323c1c
	// Params: [ Num(2) Size(0x11) ]
	bool InitNSSDK(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.InitLimSteamSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324564
	// Params: [ Num(2) Size(0x11) ]
	bool InitLimSteamSDK(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.InitLimPCSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33239d0
	// Params: [ Num(2) Size(0x14) ]
	int32_t InitLimPCSDK(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.GetSteamToken
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323e94
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSteamToken();

	// Object: Function LLHSDK.LLHSDKLogin.GetSteamRegisterUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324328
	// Params: [ Num(2) Size(0x11) ]
	bool GetSteamRegisterUrl(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.GetLimPCUserInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332361c
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetLimPCUserInfo(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324f08
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKLogin* GetInstance();

	// Object: Function LLHSDK.LLHSDKLogin.FreeLimPCSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323954
	// Params: [ Num(0) Size(0x0) ]
	void FreeLimPCSDK();

	// Object: Function LLHSDK.LLHSDKLogin.DoSteamBind
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323f90
	// Params: [ Num(2) Size(0x11) ]
	bool DoSteamBind(struct FString URL);

	// Object: Function LLHSDK.LLHSDKLogin.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324ef4
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();

	// Object: Function LLHSDK.LLHSDKLogin.ClearAutoLogin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3324e0c
	// Params: [ Num(1) Size(0x1) ]
	bool ClearAutoLogin();

	// Object: Function LLHSDK.LLHSDKLogin.ChangeLIMPCLanguage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33236d0
	// Params: [ Num(2) Size(0x14) ]
	int32_t ChangeLIMPCLanguage(struct FString Params);

	// Object: Function LLHSDK.LLHSDKLogin.CanContinueLogin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323f30
	// Params: [ Num(1) Size(0x1) ]
	bool CanContinueLogin();

	// Object: Function LLHSDK.LLHSDKLogin.CancelSteamCallBack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3323f68
	// Params: [ Num(0) Size(0x0) ]
	void CancelSteamCallBack();
};

// Object: Class LLHSDK.LLHSDKMisc
// Size: 0x250 (Inherited: 0x28)
struct ULLHSDKMisc : UObject
{
	struct FMulticastInlineDelegate OnBrowserClosed; // 0x28(0x10)
	struct FMulticastInlineDelegate OnInternalBrowserOpen; // 0x38(0x10)
	struct FMulticastInlineDelegate OnScreenshotCaptured; // 0x48(0x10)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
	struct FMulticastInlineDelegate OnFacebookPhotoShared; // 0x60(0x10)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
	struct FMulticastInlineDelegate OnSystemShared; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct FMulticastInlineDelegate OnGetFacebookToken; // 0x90(0x10)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)
	struct FMulticastInlineDelegate OnQueryThirdPartyUserInfo; // 0xA8(0x10)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
	struct FMulticastInlineDelegate OnRefreshFirebaseToken; // 0xC0(0x10)
	uint8_t Pad_0xD0[0x8]; // 0xD0(0x8)
	struct FMulticastInlineDelegate OnRefreshJiguangToken; // 0xD8(0x10)
	uint8_t Pad_0xE8[0x8]; // 0xE8(0x8)
	struct FMulticastInlineDelegate OnHttpDiagnosisCallBack; // 0xF0(0x10)
	struct FMulticastInlineDelegate OnPingDiagnosisCallBack; // 0x100(0x10)
	struct FMulticastInlineDelegate OnTcpPingDiagnosisCallBack; // 0x110(0x10)
	struct FMulticastInlineDelegate OnMtrDiagnosisCallBack; // 0x120(0x10)
	struct FMulticastInlineDelegate OnDnsDiagnosisCallBack; // 0x130(0x10)
	struct FMulticastInlineDelegate OnLimPCOpenWebview; // 0x140(0x10)
	struct FMulticastInlineDelegate OnLimPCCloseWebview; // 0x150(0x10)
	struct FMulticastInlineDelegate OnDeepLinkResolved; // 0x160(0x10)
	struct FMulticastInlineDelegate OnPickFileFromAlbumCallBack; // 0x170(0x10)
	struct FMulticastInlineDelegate OnLimPCNetworkDiagnosisInited; // 0x180(0x10)
	struct FMulticastInlineDelegate OnLimPCNetworkDiagnosisExecute; // 0x190(0x10)
	struct FMulticastInlineDelegate OnLimPCNetworkDiagnosisExtensionUpdate; // 0x1A0(0x10)
	struct FMulticastInlineDelegate OnJSMessageNotify; // 0x1B0(0x10)
	struct FMulticastInlineDelegate OnWifiStateChanged; // 0x1C0(0x10)
	struct FMulticastInlineDelegate OnApkDownloading; // 0x1D0(0x10)
	struct FMulticastInlineDelegate OnApkDownloadFinish; // 0x1E0(0x10)
	struct FMulticastInlineDelegate OnApkDownloadError; // 0x1F0(0x10)
	struct FMulticastInlineDelegate OnDomesticShareFinish; // 0x200(0x10)
	struct FMulticastInlineDelegate OnThirdPartyShareFinish; // 0x210(0x10)
	struct FMulticastInlineDelegate OnAccountVerificationFinish; // 0x220(0x10)
	struct FMulticastInlineDelegate OnCollegeVerificationFinish; // 0x230(0x10)
	struct FMulticastInlineDelegate OnLimPCOpenPage; // 0x240(0x10)


	// Object: Function LLHSDK.LLHSDKMisc.WeiboShareWithText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327f98
	// Params: [ Num(3) Size(0x30) ]
	void WeiboShareWithText(struct FString Desc, struct FString ImageUrl, struct FString VideoUrl);

	// Object: Function LLHSDK.LLHSDKMisc.WeiboSharePhoto
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33280d4
	// Params: [ Num(1) Size(0x10) ]
	void WeiboSharePhoto(struct FString ImageUrl);

	// Object: Function LLHSDK.LLHSDKMisc.WechatShareVideo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332818c
	// Params: [ Num(4) Size(0x38) ]
	void WechatShareVideo(int32_t ShareType, struct FString Title, struct FString Desc, struct FString VideoUrl);

	// Object: Function LLHSDK.LLHSDKMisc.WechatSharePhoto
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328308
	// Params: [ Num(2) Size(0x18) ]
	void WechatSharePhoto(int32_t ShareType, struct FString LocalUrl);

	// Object: Function LLHSDK.LLHSDKMisc.UpdateNetworkExtensions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33290ac
	// Params: [ Num(2) Size(0x20) ]
	void UpdateNetworkExtensions(struct FString InPlayerID, struct FString InDeviceID);

	// Object: Function LLHSDK.LLHSDKMisc.UpdateLimPCNetworkDiagnosisExtension
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328970
	// Params: [ Num(1) Size(0x10) ]
	void UpdateLimPCNetworkDiagnosisExtension(struct FString Params);

	// Object: Function LLHSDK.LLHSDKMisc.TwitterShareText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33299d0
	// Params: [ Num(1) Size(0x10) ]
	void TwitterShareText(struct FString InText);

	// Object: Function LLHSDK.LLHSDKMisc.TwitterSharePhoto
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33298e0
	// Params: [ Num(2) Size(0x20) ]
	void TwitterSharePhoto(struct FString InText, struct FString InFilePath);

	// Object: Function LLHSDK.LLHSDKMisc.TryToEnableAndroidNotification
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329748
	// Params: [ Num(0) Size(0x0) ]
	void TryToEnableAndroidNotification();

	// Object: Function LLHSDK.LLHSDKMisc.ThirdPartyShare
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3327e38
	// Params: [ Num(3) Size(0x18) ]
	void ThirdPartyShare(enum class ELLHSDKThirdPartyShareScene InShareScene, enum class ELLHSDKThirdPartyShareType InShareType, struct TArray<struct FString>& InShareParams);

	// Object: Function LLHSDK.LLHSDKMisc.TcpPingDetect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328d3c
	// Params: [ Num(2) Size(0x14) ]
	void TcpPingDetect(struct FString InDomain, int32_t Port);

	// Object: Function LLHSDK.LLHSDKMisc.SystemShare
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3329da4
	// Params: [ Num(3) Size(0x28) ]
	void SystemShare(int32_t& ShareType, struct FString Description, struct FString FilePath);

	// Object: Function LLHSDK.LLHSDKMisc.StartReceiveWifiStateChangeEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328b94
	// Params: [ Num(0) Size(0x0) ]
	void StartReceiveWifiStateChangeEvent();

	// Object: Function LLHSDK.LLHSDKMisc.StartMiniProgram
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a0bc
	// Params: [ Num(4) Size(0x40) ]
	void StartMiniProgram(struct FString InMiniProgramId, struct FString InMiniProgramPath, struct FString InExt, struct FString InVersion);

	// Object: Function LLHSDK.LLHSDKMisc.StartIOSFarlightBrowserWithOrientation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a758
	// Params: [ Num(3) Size(0x21) ]
	void StartIOSFarlightBrowserWithOrientation(struct FString URL, struct FString Title, enum class ELLHSDKScreenOrientation Orientation);

	// Object: Function LLHSDK.LLHSDKMisc.StartDownloadApk
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a584
	// Params: [ Num(5) Size(0x32) ]
	void StartDownloadApk(struct FString URL, struct FString ApkName, struct FString ApkMD5, bool bAutoInstall, bool bSupportBreakDownload);

	// Object: Function LLHSDK.LLHSDKMisc.StartBrowserWithOrientation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a888
	// Params: [ Num(3) Size(0x21) ]
	void StartBrowserWithOrientation(struct FString URL, struct FString Title, enum class ELLHSDKScreenOrientation Orientation);

	// Object: Function LLHSDK.LLHSDKMisc.StartBrowser
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a9b8
	// Params: [ Num(2) Size(0x20) ]
	void StartBrowser(struct FString URL, struct FString Title);

	// Object: Function LLHSDK.LLHSDKMisc.ShowThirdShareInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327e24
	// Params: [ Num(0) Size(0x0) ]
	void ShowThirdShareInfo();

	// Object: Function LLHSDK.LLHSDKMisc.ShowPersonalInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3327d44
	// Params: [ Num(1) Size(0x10) ]
	void ShowPersonalInfo(struct TArray<struct FString>& InParams);

	// Object: Function LLHSDK.LLHSDKMisc.ShowCommonWebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327840
	// Params: [ Num(1) Size(0x10) ]
	void ShowCommonWebView(struct FString InJsonParamsStr);

	// Object: Function LLHSDK.LLHSDKMisc.ShowCollegeVerification
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327a1c
	// Params: [ Num(0) Size(0x0) ]
	void ShowCollegeVerification();

	// Object: Function LLHSDK.LLHSDKMisc.ShowAccountVerification
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327a30
	// Params: [ Num(2) Size(0x18) ]
	void ShowAccountVerification(enum class ELLHSDKAccountVerificationType InAccountVerificationType, struct FString InAccountVerificationParams);

	// Object: Function LLHSDK.LLHSDKMisc.SetNetworkPolicyDomain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329008
	// Params: [ Num(1) Size(0x10) ]
	void SetNetworkPolicyDomain(struct FString InDomain);

	// Object: Function LLHSDK.LLHSDKMisc.SetNetworkMultipleDetect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328f68
	// Params: [ Num(1) Size(0x1) ]
	void SetNetworkMultipleDetect(bool InEnable);

	// Object: Function LLHSDK.LLHSDKMisc.SetNetworkDiagnosisDeviceID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329238
	// Params: [ Num(1) Size(0x10) ]
	void SetNetworkDiagnosisDeviceID(struct FString InDeviceID);

	// Object: Function LLHSDK.LLHSDKMisc.RestartApplication
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332ab40
	// Params: [ Num(1) Size(0x10) ]
	void RestartApplication(struct FString IntentString);

	// Object: Function LLHSDK.LLHSDKMisc.RequestReviewInApp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a2f0
	// Params: [ Num(0) Size(0x0) ]
	void RequestReviewInApp();

	// Object: Function LLHSDK.LLHSDKMisc.RegisterJSCommunication
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332782c
	// Params: [ Num(0) Size(0x0) ]
	void RegisterJSCommunication();

	// Object: Function LLHSDK.LLHSDKMisc.RefreshJiguangMessagingToken
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329f5c
	// Params: [ Num(0) Size(0x0) ]
	void RefreshJiguangMessagingToken();

	// Object: Function LLHSDK.LLHSDKMisc.RefreshFirebaseMessagingToken
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a00c
	// Params: [ Num(0) Size(0x0) ]
	void RefreshFirebaseMessagingToken();

	// Object: Function LLHSDK.LLHSDKMisc.RefreshAndroidMediaScanner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332983c
	// Params: [ Num(1) Size(0x10) ]
	void RefreshAndroidMediaScanner(struct FString InFullFilePath);

	// Object: Function LLHSDK.LLHSDKMisc.QueryThirdPartUserInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33297cc
	// Params: [ Num(0) Size(0x0) ]
	void QueryThirdPartUserInfo();

	// Object: Function LLHSDK.LLHSDKMisc.QQSharePhoto
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33283ec
	// Params: [ Num(3) Size(0x24) ]
	void QQSharePhoto(struct FString LocalUrl, struct FString BackAppName, int32_t ExtInt);

	// Object: Function LLHSDK.LLHSDKMisc.QQShareDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332851c
	// Params: [ Num(6) Size(0x54) ]
	void QQShareDefault(struct FString TargetUrl, struct FString Title, struct FString Summary, struct FString ImageUrl, struct FString BackAppName, int32_t ExtInt);

	// Object: Function LLHSDK.LLHSDKMisc.PingDetect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328e20
	// Params: [ Num(1) Size(0x10) ]
	void PingDetect(struct FString InDomain);

	// Object: Function LLHSDK.LLHSDKMisc.PickFileFromAlbum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329828
	// Params: [ Num(0) Size(0x0) ]
	void PickFileFromAlbum();

	// Object: Function LLHSDK.LLHSDKMisc.OpenSteamPayWebPage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33296a4
	// Params: [ Num(1) Size(0x10) ]
	void OpenSteamPayWebPage(struct FString URL);

	// Object: Function LLHSDK.LLHSDKMisc.OpenLimPCWebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329600
	// Params: [ Num(1) Size(0x10) ]
	void OpenLimPCWebView(struct FString Params);

	// Object: Function LLHSDK.LLHSDKMisc.OpenLimPCPage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329548
	// Params: [ Num(1) Size(0x10) ]
	void OpenLimPCPage(struct FString Params);

	// Object: Function LLHSDK.LLHSDKMisc.OpenAppSettingPage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327d30
	// Params: [ Num(0) Size(0x0) ]
	void OpenAppSettingPage();

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnWifiStateChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnWifiStateChanged__DelegateSignature(bool bEnabled);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnThirdPartyShareFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnThirdPartyShareFinish__DelegateSignature(bool bSuccess, int32_t Errorcode);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnSystemShared__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnSystemShared__DelegateSignature(bool bSuccess);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnScreenshotCapturedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnScreenshotCapturedEvent__DelegateSignature(struct FString FullPath);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnRefreshJiguangToken__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnRefreshJiguangToken__DelegateSignature(struct FString JiguangToken);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnRefreshFirebaseToken__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnRefreshFirebaseToken__DelegateSignature(struct FString FirebaseToken);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnQueryThirdPartUserInfo__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x18) ]
	void OnQueryThirdPartUserInfo__DelegateSignature(bool Success, int32_t Errorcode, struct TArray<struct FSDKSocialUserInfo> SocialUserInfoList);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnPickFileFromAlbumFinishEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	void OnPickFileFromAlbumFinishEvent__DelegateSignature(struct FString PickFilePath, int32_t Errorcode);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCOpenWebview__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnLimPCOpenWebview__DelegateSignature(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCOpenPage__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnLimPCOpenPage__DelegateSignature(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCNetworkDiagnosisInited__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnLimPCNetworkDiagnosisInited__DelegateSignature(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCNetworkDiagnosisExtensionUpdate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnLimPCNetworkDiagnosisExtensionUpdate__DelegateSignature(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCNetworkDiagnosisExecute__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnLimPCNetworkDiagnosisExecute__DelegateSignature(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCCloseWebview__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnLimPCCloseWebview__DelegateSignature(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnJSMessageNotify__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnJSMessageNotify__DelegateSignature(struct FString Msg);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnInternalBrowserOpen__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnInternalBrowserOpen__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnGetFacebookToken__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(5) Size(0x48) ]
	void OnGetFacebookToken__DelegateSignature(bool Result, struct FString Token, struct FString ApplicationId, struct FString UserId, struct FString GraphDomain);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnFacebookPhotoShared__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x11) ]
	void OnFacebookPhotoShared__DelegateSignature(struct FString FilePath, bool bSuccess);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnDomesticShareFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnDomesticShareFinish__DelegateSignature(bool bSuccess, int32_t Errorcode);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnDeepLinkResolved__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnDeepLinkResolved__DelegateSignature(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnCollegeVerificationFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnCollegeVerificationFinish__DelegateSignature(bool bSuccess, int32_t Errorcode);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnBrowserClosed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnBrowserClosed__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnApkDownloading__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	void OnApkDownloading__DelegateSignature(int32_t TotalSize, int32_t DownloadedSize);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnApkDownloadFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnApkDownloadFinish__DelegateSignature();

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnApkDownloadError__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnApkDownloadError__DelegateSignature(struct FString ErrorInfo);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.OnAccountVerificationFinish__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(4) Size(0x28) ]
	void OnAccountVerificationFinish__DelegateSignature(bool bSuccess, int32_t Errorcode, struct FString Msg, struct FString ExtraMsg);

	// Object: DelegateFunction LLHSDK.LLHSDKMisc.NetworkDiagnosisCallback__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x20) ]
	void NetworkDiagnosisCallback__DelegateSignature(struct FString Type, struct FString Ret);

	// Object: Function LLHSDK.LLHSDKMisc.MtrDetect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328c98
	// Params: [ Num(1) Size(0x10) ]
	void MtrDetect(struct FString InDomain);

	// Object: Function LLHSDK.LLHSDKMisc.JumpToMarket
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a3a8
	// Params: [ Num(2) Size(0x20) ]
	void JumpToMarket(struct FString InAppPkg, struct FString InMarketPkg);

	// Object: Function LLHSDK.LLHSDKMisc.JumpToAppStore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a304
	// Params: [ Num(1) Size(0x10) ]
	void JumpToAppStore(struct FString AppStoreUrl);

	// Object: Function LLHSDK.LLHSDKMisc.IsUsedSteamSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332ac1c
	// Params: [ Num(1) Size(0x1) ]
	bool IsUsedSteamSDK();

	// Object: Function LLHSDK.LLHSDKMisc.IsUsedPCSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332abe4
	// Params: [ Num(1) Size(0x1) ]
	bool IsUsedPCSDK();

	// Object: Function LLHSDK.LLHSDKMisc.IsInstallSocialApp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a244
	// Params: [ Num(2) Size(0x2) ]
	bool IsInstallSocialApp(enum class ELLHSDKSocialPlatform SocialPlatform);

	// Object: Function LLHSDK.LLHSDKMisc.IsFacebookShareable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329eec
	// Params: [ Num(1) Size(0x1) ]
	bool IsFacebookShareable();

	// Object: Function LLHSDK.LLHSDKMisc.IsEnableIPAPCSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328b5c
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnableIPAPCSDK();

	// Object: Function LLHSDK.LLHSDKMisc.IsAppRooted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329794
	// Params: [ Num(1) Size(0x1) ]
	bool IsAppRooted();

	// Object: Function LLHSDK.LLHSDKMisc.IsAndroidNotificationEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332975c
	// Params: [ Num(1) Size(0x1) ]
	bool IsAndroidNotificationEnabled();

	// Object: Function LLHSDK.LLHSDKMisc.InitWeibo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328178
	// Params: [ Num(0) Size(0x0) ]
	void InitWeibo();

	// Object: Function LLHSDK.LLHSDKMisc.InitNetworkDiagnosis
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33292dc
	// Params: [ Num(7) Size(0x70) ]
	void InitNetworkDiagnosis(struct FString InProject, struct FString InSecretKey, struct FString InEndPoint, struct FString InAccessKeyId, struct FString InAccessKeySecret, struct FString InUid, struct FString InChannel);

	// Object: Function LLHSDK.LLHSDKMisc.InitLimPCNetworkDiagnosis
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328ab8
	// Params: [ Num(1) Size(0x10) ]
	void InitLimPCNetworkDiagnosis(struct FString Params);

	// Object: Function LLHSDK.LLHSDKMisc.HttpDetect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328ec4
	// Params: [ Num(1) Size(0x10) ]
	void HttpDetect(struct FString InUrl);

	// Object: Function LLHSDK.LLHSDKMisc.GetUniSDKVersionOfThirdPartyChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327c60
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUniSDKVersionOfThirdPartyChannel();

	// Object: Function LLHSDK.LLHSDKMisc.GetTypeOfThirdPartyChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327cfc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTypeOfThirdPartyChannel();

	// Object: Function LLHSDK.LLHSDKMisc.GetNetworkDiagnosisDeviceID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332919c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNetworkDiagnosisDeviceID();

	// Object: Function LLHSDK.LLHSDKMisc.GetLimPCPluginsDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332ac54
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLimPCPluginsDir();

	// Object: Function LLHSDK.LLHSDKMisc.GetJiguangMessagingToken
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329f70
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetJiguangMessagingToken();

	// Object: Function LLHSDK.LLHSDKMisc.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332ad04
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKMisc* GetInstance();

	// Object: Function LLHSDK.LLHSDKMisc.GetForceUpdateUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a498
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetForceUpdateUrl(struct FString Version);

	// Object: Function LLHSDK.LLHSDKMisc.GetFirebaseMessagingToken
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332a020
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFirebaseMessagingToken();

	// Object: Function LLHSDK.LLHSDKMisc.GetFacebookToken
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33297e0
	// Params: [ Num(0) Size(0x0) ]
	void GetFacebookToken();

	// Object: Function LLHSDK.LLHSDKMisc.GetDeepLinkParams
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327b28
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeepLinkParams();

	// Object: Function LLHSDK.LLHSDKMisc.GetDapInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327980
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDapInfo();

	// Object: Function LLHSDK.LLHSDKMisc.GetChannelName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33278e4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetChannelName();

	// Object: Function LLHSDK.LLHSDKMisc.GetChannelIdOfThirdPartyChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327bc4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetChannelIdOfThirdPartyChannel();

	// Object: Function LLHSDK.LLHSDKMisc.GetAndroidAPILevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33297f4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAndroidAPILevel();

	// Object: Function LLHSDK.LLHSDKMisc.FreeLimPCNetworkDiagnosis
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332895c
	// Params: [ Num(0) Size(0x0) ]
	void FreeLimPCNetworkDiagnosis();

	// Object: Function LLHSDK.LLHSDKMisc.FacebookSharePhotoWithFileAndDescription
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329bfc
	// Params: [ Num(2) Size(0x20) ]
	void FacebookSharePhotoWithFileAndDescription(struct FString Description, struct FString FilePath);

	// Object: Function LLHSDK.LLHSDKMisc.FacebookSharePhotoByPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329cec
	// Params: [ Num(1) Size(0x10) ]
	void FacebookSharePhotoByPath(struct FString InFilePath);

	// Object: Function LLHSDK.LLHSDKMisc.FacebookSharePhoto
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329d90
	// Params: [ Num(0) Size(0x0) ]
	void FacebookSharePhoto();

	// Object: Function LLHSDK.LLHSDKMisc.FacebookShareLink
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329a74
	// Params: [ Num(4) Size(0x40) ]
	void FacebookShareLink(struct FString InLinkURL, struct FString InPreviewURL, struct FString InTitle, struct FString InDesc);

	// Object: Function LLHSDK.LLHSDKMisc.ExecuteLimPCNetworkDiagnosis
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328a14
	// Params: [ Num(1) Size(0x10) ]
	void ExecuteLimPCNetworkDiagnosis(struct FString Params);

	// Object: Function LLHSDK.LLHSDKMisc.DnsDetect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328ba8
	// Params: [ Num(2) Size(0x20) ]
	void DnsDetect(struct FString InServer, struct FString InDomain);

	// Object: Function LLHSDK.LLHSDKMisc.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332acf0
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();

	// Object: Function LLHSDK.LLHSDKMisc.CloseLimPCWebPageAll
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33295ec
	// Params: [ Num(0) Size(0x0) ]
	void CloseLimPCWebPageAll();

	// Object: Function LLHSDK.LLHSDKMisc.ClearDeepLinkParams
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3327b14
	// Params: [ Num(0) Size(0x0) ]
	void ClearDeepLinkParams();

	// Object: Function LLHSDK.LLHSDKMisc.CheckGyroSensorSupport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3329f24
	// Params: [ Num(1) Size(0x1) ]
	bool CheckGyroSensorSupport();

	// Object: Function LLHSDK.LLHSDKMisc.BrocastWifiStateChangedEventOnGameThread
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33288bc
	// Params: [ Num(1) Size(0x1) ]
	void BrocastWifiStateChangedEventOnGameThread(bool bWifiEnabled);

	// Object: Function LLHSDK.LLHSDKMisc.BrocastApkDownloadingEventOnGameThread
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33287e8
	// Params: [ Num(2) Size(0x8) ]
	void BrocastApkDownloadingEventOnGameThread(int32_t TotalSize, int32_t DownloadedSize);

	// Object: Function LLHSDK.LLHSDKMisc.BrocastApkDownloadFinishEventOnGameThread
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33287d4
	// Params: [ Num(0) Size(0x0) ]
	void BrocastApkDownloadFinishEventOnGameThread();

	// Object: Function LLHSDK.LLHSDKMisc.BrocastApkDownloadErrorEventOnGameThread
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3328730
	// Params: [ Num(1) Size(0x10) ]
	void BrocastApkDownloadErrorEventOnGameThread(struct FString Error);
};

// Object: Class LLHSDK.LLHSDKPay
// Size: 0x190 (Inherited: 0x28)
struct ULLHSDKPay : UObject
{
	struct FMulticastInlineDelegate OnGooglePayFinished; // 0x28(0x10)
	struct FMulticastInlineDelegate OnGoogleQuerySkuItemDetails; // 0x38(0x10)
	struct FMulticastInlineDelegate OnGoogleQuerySkuItemDetailsSubscription; // 0x48(0x10)
	struct FMulticastInlineDelegate OnGetGoogleConsumeGoods; // 0x58(0x10)
	struct FMulticastInlineDelegate OnGetGoogleConsumePointsGoods; // 0x68(0x10)
	struct FMulticastInlineDelegate OnIOSQuerySkus; // 0x78(0x10)
	struct FMulticastInlineDelegate OnIOSLLHPayFinished; // 0x88(0x10)
	struct FMulticastInlineDelegate OnGetIOSPurchaseExtNull; // 0x98(0x10)
	struct FMulticastInlineDelegate OnAndroidDomesticPayFinished; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnLSteamQuerySkus; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnLSteamSDKPayApplied; // 0xC8(0x10)
	struct FMulticastInlineDelegate OnLimPCQueryPriceLadder; // 0xD8(0x10)
	struct FMulticastInlineDelegate OnLimPCQueryPriceLadderWithRegion; // 0xE8(0x10)
	struct FMulticastInlineDelegate OnLimPCPayApplied; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnLimPCThirdPartyCheckoutCounterItemsGet; // 0x108(0x10)
	struct FMulticastInlineDelegate OnLimPCThirdPartyCheckoutCounterItemsPay; // 0x118(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayGetConsumables; // 0x128(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayGetConsumableItems; // 0x138(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayEShopOpen; // 0x148(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayOrdersCheck; // 0x158(0x10)
	struct FMulticastInlineDelegate OnSwitchSDKPayOrdersConsume; // 0x168(0x10)
	uint8_t Pad_0x178[0x18]; // 0x178(0x18)


	// Object: Function LLHSDK.LLHSDKPay.Test_Google_SkuItemDetailsToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332df04
	// Params: [ Num(2) Size(0x20) ]
	struct FString Test_Google_SkuItemDetailsToString(struct FLLHSDKGenericSkuItemsDetailList InDetails);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersConsume__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SwitchSDKPayOrdersConsume__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersCheck__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SwitchSDKPayOrdersCheck__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumables__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SwitchSDKPayGetConsumables__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumableItems__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SwitchSDKPayGetConsumableItems__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayEShopOpen__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SwitchSDKPayEShopOpen__DelegateSignature(struct FString Datas);

	// Object: Function LLHSDK.LLHSDKPay.Switch_OrdersConsume
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332cf9c
	// Params: [ Num(1) Size(0x10) ]
	void Switch_OrdersConsume(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.Switch_OrdersCheck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d040
	// Params: [ Num(1) Size(0x10) ]
	void Switch_OrdersCheck(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.Switch_GetConsumables
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d22c
	// Params: [ Num(1) Size(0x10) ]
	void Switch_GetConsumables(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.Switch_GetConsumableItems
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d188
	// Params: [ Num(1) Size(0x10) ]
	void Switch_GetConsumableItems(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.Switch_EShopOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d0e4
	// Params: [ Num(1) Size(0x10) ]
	void Switch_EShopOpen(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.SteamStartPayV2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d618
	// Params: [ Num(1) Size(0x10) ]
	void SteamStartPayV2(struct FString SteamPayInfo);

	// Object: Function LLHSDK.LLHSDKPay.SteamQuerySkusV2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d6bc
	// Params: [ Num(1) Size(0x10) ]
	void SteamQuerySkusV2(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.SteamQuerySkus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d804
	// Params: [ Num(1) Size(0x10) ]
	void SteamQuerySkus(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.Steam_StartPay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d760
	// Params: [ Num(1) Size(0x10) ]
	void Steam_StartPay(struct FString SteamPayInfo);

	// Object: Function LLHSDK.LLHSDKPay.SetPayNotifyUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d8a8
	// Params: [ Num(1) Size(0x10) ]
	void SetPayNotifyUrl(struct FString InNotifyUrl);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.OnLLHQuerySkus__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x20) ]
	void OnLLHQuerySkus__DelegateSignature(struct FLLHSDKGenericSkuItemsDetailList ItemsDetailList, struct TArray<struct FString>& InvalidProductIDs);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.OnLLHPayFinished__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(6) Size(0x31) ]
	void OnLLHPayFinished__DelegateSignature(bool bSuccess, int32_t Errorcode, struct FString ErrorMsg, int32_t PayValue, struct FString ProductID, enum class ELLHSDKPayType PayType);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuSubItemDetails__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x18) ]
	void OnGoogleQuerySkuSubItemDetails__DelegateSignature(bool bSuccess, int32_t Errorcode, struct FString ItemsDetailListJsonString);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuItemDetails__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x18) ]
	void OnGoogleQuerySkuItemDetails__DelegateSignature(bool bSuccess, int32_t Errorcode, struct FString ItemsDetailListJsonString);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.OnGooglePayFinished__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(5) Size(0x21) ]
	void OnGooglePayFinished__DelegateSignature(bool bSuccess, int32_t Errorcode, int32_t Price, struct FString ItemID, enum class ELLHSDKPayType PayType);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.OnGetIOSPurchaseExtNull__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x20) ]
	void OnGetIOSPurchaseExtNull__DelegateSignature(struct FString AppUid, struct FString ProductID);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.OnGetGoogleConsumeGoods__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnGetGoogleConsumeGoods__DelegateSignature(struct TArray<struct FString>& Skus);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.OnAndroidDomesticPayFinished__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(5) Size(0x21) ]
	void OnAndroidDomesticPayFinished__DelegateSignature(bool bSuccess, int32_t Errorcode, int32_t Price, struct FString ItemID, enum class ELLHSDKPayType PayType);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKQuerySkus__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LSteamSDKQuerySkus__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKPayApplied__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LSteamSDKPayApplied__DelegateSignature(struct FString Datas);

	// Object: Function LLHSDK.LLHSDKPay.LimPCThirdPartyCheckoutCounterItemsPay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d2d0
	// Params: [ Num(1) Size(0x10) ]
	void LimPCThirdPartyCheckoutCounterItemsPay(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.LimPCThirdPartyCheckoutCounterItemsGet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d374
	// Params: [ Num(1) Size(0x10) ]
	void LimPCThirdPartyCheckoutCounterItemsGet(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.LimPCStartPay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d418
	// Params: [ Num(1) Size(0x10) ]
	void LimPCStartPay(struct FString Params);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKThirdPartyCheckoutCounterItemsPay__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LimPCSDKThirdPartyCheckoutCounterItemsPay__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKThirdPartyCheckoutCounterItemsGet__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LimPCSDKThirdPartyCheckoutCounterItemsGet__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKQueryPriceLadder__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LimPCSDKQueryPriceLadder__DelegateSignature(struct FString Datas);

	// Object: DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKPayApplied__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LimPCSDKPayApplied__DelegateSignature(struct FString Datas);

	// Object: Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadderWithRegion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d4bc
	// Params: [ Num(1) Size(0x10) ]
	void LimPCQueryPriceLadderWithRegion(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadderV2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d560
	// Params: [ Num(1) Size(0x10) ]
	void LimPCQueryPriceLadderV2(struct FString Params);

	// Object: Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadder
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d604
	// Params: [ Num(0) Size(0x0) ]
	void LimPCQueryPriceLadder();

	// Object: Function LLHSDK.LLHSDKPay.IOS_SetUserPayExtInCallback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332d94c
	// Params: [ Num(2) Size(0x20) ]
	void IOS_SetUserPayExtInCallback(struct FString ProductID, struct FString PayExt);

	// Object: Function LLHSDK.LLHSDKPay.IOS_SetUserPayExt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332da3c
	// Params: [ Num(1) Size(0x10) ]
	void IOS_SetUserPayExt(struct FString PayExt);

	// Object: Function LLHSDK.LLHSDKPay.IOS_SetAutoPayExt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332db18
	// Params: [ Num(1) Size(0x1) ]
	void IOS_SetAutoPayExt(bool bEnabled);

	// Object: Function LLHSDK.LLHSDKPay.IOS_QuerySkus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x332dca8
	// Params: [ Num(1) Size(0x10) ]
	void IOS_QuerySkus(struct TArray<struct FString>& ProductIDs);

	// Object: Function LLHSDK.LLHSDKPay.IOS_LLHPay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332dbb8
	// Params: [ Num(2) Size(0x20) ]
	void IOS_LLHPay(struct FString ProductID, struct FString PayExt);

	// Object: Function LLHSDK.LLHSDKPay.IOS_GetAutoPayExt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332dae0
	// Params: [ Num(1) Size(0x1) ]
	bool IOS_GetAutoPayExt();

	// Object: Function LLHSDK.LLHSDKPay.Google_StartPaySubscription
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e50c
	// Params: [ Num(2) Size(0x20) ]
	void Google_StartPaySubscription(struct FString PayItemID, struct FString PayContext);

	// Object: Function LLHSDK.LLHSDKPay.Google_StartPay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e694
	// Params: [ Num(2) Size(0x20) ]
	void Google_StartPay(struct FString PayItemID, struct FString PayContext);

	// Object: Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetailsSubscription
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e81c
	// Params: [ Num(1) Size(0x10) ]
	void Google_QuerySkuItemDetailsSubscription(struct TArray<struct FString> Items);

	// Object: Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetails
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e9a8
	// Params: [ Num(1) Size(0x10) ]
	void Google_QuerySkuItemDetails(struct TArray<struct FString> Items);

	// Object: Function LLHSDK.LLHSDKPay.Google_HasConsumePointsGoods
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e3b0
	// Params: [ Num(1) Size(0x1) ]
	bool Google_HasConsumePointsGoods();

	// Object: Function LLHSDK.LLHSDKPay.Google_HasConsumeGoods
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e4d4
	// Params: [ Num(1) Size(0x1) ]
	bool Google_HasConsumeGoods();

	// Object: Function LLHSDK.LLHSDKPay.Google_GetConsumePointsGoods
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e2c4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> Google_GetConsumePointsGoods();

	// Object: Function LLHSDK.LLHSDKPay.Google_GetConsumeGoods
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e3e8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> Google_GetConsumeGoods();

	// Object: Function LLHSDK.LLHSDKPay.Google_ConsumeGoods
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332e014
	// Params: [ Num(2) Size(0x20) ]
	void Google_ConsumeGoods(struct TArray<struct FString> Skus, struct TArray<struct FString> Contexts);

	// Object: Function LLHSDK.LLHSDKPay.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332eb48
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKPay* GetInstance();

	// Object: Function LLHSDK.LLHSDKPay.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332eb34
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();

	// Object: Function LLHSDK.LLHSDKPay.AndroidDomestic_StartPay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332dd88
	// Params: [ Num(4) Size(0x38) ]
	void AndroidDomestic_StartPay(int32_t PayValue, struct FString PayName, struct FString PayDesc, struct FString PayContext);
};

// Object: Class LLHSDK.LLHSDKReport
// Size: 0xB8 (Inherited: 0x28)
struct ULLHSDKReport : UObject
{
	struct FMulticastInlineDelegate OnDAPLogAdd; // 0x28(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKCommonReportPoint; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLSLSConfig; // 0x48(0x10)
	struct FMulticastInlineDelegate OnLSLSFieldsGet; // 0x58(0x10)
	struct FMulticastInlineDelegate OnLSLSLogAdd; // 0x68(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKAlilogConfigSet; // 0x78(0x10)
	struct FMulticastInlineDelegate OnLimPCSDKAlilogFieldsGet; // 0x88(0x10)
	struct FMulticastInlineDelegate OnLIMPCAlilogAdd; // 0x98(0x10)
	struct FMulticastInlineDelegate OnLimPCGameActionOptionsReport; // 0xA8(0x10)


	// Object: Function LLHSDK.LLHSDKReport.SetLSLSConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332fd5c
	// Params: [ Num(1) Size(0x10) ]
	void SetLSLSConfig(struct FString Params);

	// Object: Function LLHSDK.LLHSDKReport.SetLIMPCAlilogConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332fbf0
	// Params: [ Num(2) Size(0x14) ]
	int32_t SetLIMPCAlilogConfig(struct FString Params);

	// Object: Function LLHSDK.LLHSDKReport.ReportToThirdParty
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x333011c
	// Params: [ Num(3) Size(0x21) ]
	bool ReportToThirdParty(struct FString EventName, struct TArray<struct FString>& Parameters);

	// Object: Function LLHSDK.LLHSDKReport.ReportRoleInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332f7d0
	// Params: [ Num(1) Size(0x10) ]
	void ReportRoleInfo(struct FString JsonParamsStr);

	// Object: Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x332ff58
	// Params: [ Num(5) Size(0x39) ]
	bool ReportRevenueToThirdParty(struct FString EventName, enum class ELLHSDKReportCurrencyType Currency, struct FString Revenue, struct TArray<struct FString>& Parameters);

	// Object: Function LLHSDK.LLHSDKReport.ReportJsonToLilithImmediate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3330254
	// Params: [ Num(3) Size(0x21) ]
	bool ReportJsonToLilithImmediate(struct FString EventName, struct FString JsonContentStr);

	// Object: Function LLHSDK.LLHSDKReport.ReportGameInfoForDomesticChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332fa18
	// Params: [ Num(2) Size(0x20) ]
	void ReportGameInfoForDomesticChannel(struct FString EventName, struct FString JsonParamsStr);

	// Object: Function LLHSDK.LLHSDKReport.ReportCustomEventForDomesticChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332f928
	// Params: [ Num(2) Size(0x20) ]
	void ReportCustomEventForDomesticChannel(struct FString EventName, struct FString JsonParamsStr);

	// Object: DelegateFunction LLHSDK.LLHSDKReport.LimPCSDKReportCallBack__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void LimPCSDKReportCallBack__DelegateSignature(struct FString Datas);

	// Object: Function LLHSDK.LLHSDKReport.LimPCGameActionOptionsReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332f874
	// Params: [ Num(2) Size(0x14) ]
	int32_t LimPCGameActionOptionsReport(struct FString Params);

	// Object: Function LLHSDK.LLHSDKReport.GetSLSFields
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332fd48
	// Params: [ Num(0) Size(0x0) ]
	void GetSLSFields();

	// Object: Function LLHSDK.LLHSDKReport.GetLimPCAlilogFields
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332fbbc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLimPCAlilogFields();

	// Object: Function LLHSDK.LLHSDKReport.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x333040c
	// Params: [ Num(1) Size(0x8) ]
	struct ULLHSDKReport* GetInstance();

	// Object: Function LLHSDK.LLHSDKReport.EnableLogReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3330358
	// Params: [ Num(1) Size(0x1) ]
	void EnableLogReport(bool bEnable);

	// Object: Function LLHSDK.LLHSDKReport.DestoryInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33303f8
	// Params: [ Num(0) Size(0x0) ]
	void DestoryInstance();

	// Object: Function LLHSDK.LLHSDKReport.DAPLogAdd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332feb4
	// Params: [ Num(1) Size(0x10) ]
	void DAPLogAdd(struct FString Params);

	// Object: Function LLHSDK.LLHSDKReport.CommonReportLimPCPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332fe00
	// Params: [ Num(2) Size(0x14) ]
	int32_t CommonReportLimPCPoint(struct FString Params);

	// Object: Function LLHSDK.LLHSDKReport.AddLSLSLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332fca4
	// Params: [ Num(1) Size(0x10) ]
	void AddLSLSLog(struct FString Params);

	// Object: Function LLHSDK.LLHSDKReport.AddLIMPCAlilog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x332fb08
	// Params: [ Num(2) Size(0x14) ]
	int32_t AddLIMPCAlilog(struct FString Params);
};

// Object: Class LLHSDK.LLHSDKSettings
// Size: 0x500 (Inherited: 0x38)
struct ULLHSDKSettings : UDeveloperSettings
{
	enum class EDistributionRegion DistributionRegion; // 0x38(0x1)
	enum class EDistributionChannel DistributionChannel; // 0x39(0x1)
	enum class EReleaseType ReleaseType; // 0x3A(0x1)
	bool bIsSDKDebuggable; // 0x3B(0x1)
	bool bIsGrayRelease; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FString SDKGroupName; // 0x40(0x10)
	struct FString SDKFeatureName; // 0x50(0x10)
	struct FString SDKVersion; // 0x60(0x10)
	bool bHasFacebook; // 0x70(0x1)
	bool bHasTiktok; // 0x71(0x1)
	bool bHasFirebaseMessaging; // 0x72(0x1)
	bool bHasJiGuangPush; // 0x73(0x1)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FString SDKAppIdForGrayRelease; // 0x78(0x10)
	struct FString SDKGameIdForGrayRelease; // 0x88(0x10)
	struct FString PspAppIdForGrayRelease; // 0x98(0x10)
	struct FString AndroidDebugParkwayEnvIdForGrayRelease; // 0xA8(0x10)
	struct FString AndroidReleaseParkwayEnvIdForGrayRelease; // 0xB8(0x10)
	struct FString IOSDebugParkwayEnvIdForGrayRelease; // 0xC8(0x10)
	struct FString IOSReleaseParkwayEnvIdForGrayRelease; // 0xD8(0x10)
	struct FString SteamDebugParkwayEnvIdForGrayRelease; // 0xE8(0x10)
	struct FString SteamReleaseParkwayEnvIdForGrayRelease; // 0xF8(0x10)
	struct FString FacebookAppIDForGrayRelease; // 0x108(0x10)
	struct FString FacebookContentProviderForGrayRelease; // 0x118(0x10)
	struct FString SDKAppId; // 0x128(0x10)
	struct FString SDKGameId; // 0x138(0x10)
	struct FString FacebookContentProvider; // 0x148(0x10)
	struct FString FacebookAppID; // 0x158(0x10)
	struct FString IOSFacebookContentProvider; // 0x168(0x10)
	struct FString IOSFacebookAppID; // 0x178(0x10)
	struct FString PspAppId; // 0x188(0x10)
	struct FString AndroidDebugParkwayEnvId; // 0x198(0x10)
	struct FString AndroidReleaseParkwayEnvId; // 0x1A8(0x10)
	struct FString IOSDebugParkwayEnvId; // 0x1B8(0x10)
	struct FString IOSReleaseParkwayEnvId; // 0x1C8(0x10)
	struct FString SteamDebugParkwayEnvId; // 0x1D8(0x10)
	struct FString SteamReleaseParkwayEnvId; // 0x1E8(0x10)
	struct FString OfficialWinDebugParkwayEnvId; // 0x1F8(0x10)
	struct FString OfficialWinReleaseParkwayEnvId; // 0x208(0x10)
	struct FString EpicDebugParkwayEnvId; // 0x218(0x10)
	struct FString EpicReleaseParkwayEnvId; // 0x228(0x10)
	struct FString WeGameDebugParkwayEnvId; // 0x238(0x10)
	struct FString WeGameReleaseParkwayEnvId; // 0x248(0x10)
	struct FString SDKAppIdForDomesticRelease; // 0x258(0x10)
	struct FString SDKGameIdForDomesticRelease; // 0x268(0x10)
	struct FString AndroidDebugParkwayEnvIdForDomesticRelease; // 0x278(0x10)
	struct FString AndroidReleaseParkwayEnvIdForDomesticRelease; // 0x288(0x10)
	struct FString IOSDebugParkwayEnvIdForDomesticRelease; // 0x298(0x10)
	struct FString IOSReleaseParkwayEnvIdForDomesticRelease; // 0x2A8(0x10)
	struct FString PspAppIdForDomesticRelease; // 0x2B8(0x10)
	struct FString OfficialWinDebugParkwayEnvIdForDomesticRelease; // 0x2C8(0x10)
	struct FString OfficialWinReleaseParkwayEnvIdForDomesticRelease; // 0x2D8(0x10)
	struct FString PlatformLauncherOfficialWinDebugParkwayEnvIdForDomesticRelease; // 0x2E8(0x10)
	struct FString PlatformLauncherOfficialWinReleaseParkwayEnvIdForDomesticRelease; // 0x2F8(0x10)
	struct FString SteamDebugParkwayEnvIdForDomesticRelease; // 0x308(0x10)
	struct FString SteamReleaseParkwayEnvIdForDomesticRelease; // 0x318(0x10)
	struct FString DouYinAssociatedOperationDebugParkwayEnvId; // 0x328(0x10)
	struct FString DouYinAssociatedOperationReleaseParkwayEnvId; // 0x338(0x10)
	struct FString DouYinBiPassDebugParkwayEnvId; // 0x348(0x10)
	struct FString DouYinBiPassReleaseParkwayEnvId; // 0x358(0x10)
	struct FString AndroidCommunitySDKVersion; // 0x368(0x10)
	struct FString CommunityDebugEnvIdForInternationalRelease; // 0x378(0x10)
	struct FString CommunityReleaseEnvIdForInternationalRelease; // 0x388(0x10)
	struct FString CommunityDebugEnvIdForDomesticRelease; // 0x398(0x10)
	struct FString CommunityReleaseEnvIdForDomesticRelease; // 0x3A8(0x10)
	struct FString SDKAppIdForDomesticGrayRelease; // 0x3B8(0x10)
	struct FString OfficialWinDebugParkwayEnvIdForDomesticGrayRelease; // 0x3C8(0x10)
	struct FString OfficialWinReleaseParkwayEnvIdForDomesticGrayRelease; // 0x3D8(0x10)
	struct FString SteamDebugParkwayEnvIdForDomesticGrayRelease; // 0x3E8(0x10)
	struct FString SteamReleaseParkwayEnvIdForDomesticGrayRelease; // 0x3F8(0x10)
	struct FString AndroidDebugParkwayEnvIdForDomesticGrayRelease; // 0x408(0x10)
	struct FString AndroidReleaseParkwayEnvIdForDomesticGrayRelease; // 0x418(0x10)
	struct FString IOSDebugParkwayEnvIdForDomesticGrayRelease; // 0x428(0x10)
	struct FString IOSReleaseParkwayEnvIdForDomesticGrayRelease; // 0x438(0x10)
	bool bNewCheckoutCounter; // 0x448(0x1)
	bool bAndroidXEnabled; // 0x449(0x1)
	bool bMultiDexEnabled; // 0x44A(0x1)
	bool bShouldUseOverridedConfig; // 0x44B(0x1)
	uint8_t Pad_0x44C[0x4]; // 0x44C(0x4)
	struct FString FirebaseCoreVersion; // 0x450(0x10)
	struct FString FirebaseMessagingVersion; // 0x460(0x10)
	struct FString GoogleServicesVersion; // 0x470(0x10)
	struct FString PlayServicesBasementVersion; // 0x480(0x10)
	enum class ELLHSDKGravity PlayPhoneGravity; // 0x490(0x1)
	bool bEnableAndroidScreenshotListener; // 0x491(0x1)
	bool bEnableAndroidMultipleDetect; // 0x492(0x1)
	bool bShowLogo; // 0x493(0x1)
	enum class ELLHSDKLoginUIStyle LoginUIStyle; // 0x494(0x1)
	bool bIOSShouldUseOverridedConfig; // 0x495(0x1)
	bool bIOSShowTermsByServer; // 0x496(0x1)
	uint8_t Pad_0x497[0x1]; // 0x497(0x1)
	struct FString FacebookDisplayName; // 0x498(0x10)
	struct FString QQAppID; // 0x4A8(0x10)
	struct FString WechatAppID; // 0x4B8(0x10)
	struct FString GoogleReversedClientID; // 0x4C8(0x10)
	struct FString TwitterAPIKey; // 0x4D8(0x10)
	struct FString DefaultNSUserTrackingUsageDescription; // 0x4E8(0x10)
	bool bUseYiDunPackTool; // 0x4F8(0x1)
	uint8_t Pad_0x4F9[0x7]; // 0x4F9(0x7)
};

} // namespace SDK
