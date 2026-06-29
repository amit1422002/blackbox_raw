// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum LLHSDK.EDistributionChannel
enum class EDistributionChannel : uint8_t
{
	Official = 0,
	DouYinAssociatedOperation = 1,
	ThirdPartyChannel = 2,
	DouYinBiPass = 3,
	EDistributionChannel_MAX = 4
};

// Object: Enum LLHSDK.ELLHForumSDKOrientationMode
enum class ELLHForumSDKOrientationMode : uint8_t
{
	Portrait = 0,
	Landscape = 1,
	Rotatable = 2,
	ELLHForumSDKOrientationMode_MAX = 3
};

// Object: Enum LLHSDK.ELLHSDKNetworkType
enum class ELLHSDKNetworkType : uint8_t
{
	Unknown = 0,
	NotConnected = 1,
	Type_WiFi = 2,
	Type_Unknown_Cell = 3,
	Type_2G = 4,
	Type_3G = 5,
	Type_4G = 6,
	Type_5G = 7,
	ELLHSDKNetworkType_MAX = 8
};

// Object: Enum LLHSDK.ELLHSDKLoginType
enum class ELLHSDKLoginType : uint8_t
{
	TYPE_NONE = 0,
	TYPE_QUICK_LOGIN = 1,
	TYPE_LILITH_LOGIN = 2,
	TYPE_MOBILE_LOGIN = 3,
	TYPE_FACEBOOK_LOGIN = 4,
	TYPE_GAME_CENTER_LOGIN = 5,
	TYPE_GOOGLE_PLUS_OR_GAMES_LOGIN = 6,
	TYPE_WECHAT_LOGIN = 7,
	TYPE_QQ_LOGIN = 8,
	TYPE_AUTO_LOGIN = 9,
	TYPE_VK_LOGIN = 10,
	TYPE_GOOGLE_LOGIN = 11,
	TYPE_LINE_LOGIN = 12,
	TYPE_TWITTER_LOGIN = 13,
	TYPE_APPLE_LOGIN = 14,
	TYPE_WEIBO_LOGIN = 15,
	TYPE_PGS_LOGIN = 16,
	TYPE_TIKTOK_LOGIN = 17,
	TYPE_STEAM_LOGIN = 18,
	TYPE_NINTENDO_LOGIN = 19,
	TYPE_WXMINIGAME_LOGIN = 20,
	TYPE_EPIC_LOGIN = 21,
	TYPE_HARMONY_LOGIN = 22,
	TYPE_HW_MIGRATE_LOGIN = 23,
	TYPE_DOUYIN_LOGIN = 24,
	TYPE_WEGAME_LOGIN = 25,
	TYPE_OPPO_LOGIN = 26,
	TYPE_HONOR_LOGIN = 27,
	TYPE_XIAOMI_LOGIN = 28,
	TYPE_VIVO_LOGIN = 29,
	TYPE_MAX = 30
};

// Object: Enum LLHSDK.ELLHSDKSocialPlatform
enum class ELLHSDKSocialPlatform : uint8_t
{
	None = 0,
	QQ = 1,
	WeChat = 2,
	Weibo = 3,
	DouYin = 4,
	ELLHSDKSocialPlatform_MAX = 5
};

// Object: Enum LLHSDK.ELLHSDKAccountVerificationType
enum class ELLHSDKAccountVerificationType : uint8_t
{
	None = 0,
	Phone = 1,
	Email = 2,
	ELLHSDKAccountVerificationType_MAX = 3
};

// Object: Enum LLHSDK.ELLHSDKScreenOrientation
enum class ELLHSDKScreenOrientation : uint8_t
{
	Portrait = 0,
	ReversePortrait = 1,
	SensorPortrait = 2,
	Landscape = 3,
	ReverseLandscape = 4,
	SensorLandscape = 5,
	Sensor = 6,
	FullSensor = 7,
	ELLHSDKScreenOrientation_MAX = 8
};

// Object: Enum LLHSDK.ELLHSDKThirdPartyShareType
enum class ELLHSDKThirdPartyShareType : uint8_t
{
	None = 0,
	OnlyText = 1,
	OnlyLocalImage = 2,
	OnlyLocalVideo = 3,
	LocalImageAndText = 4,
	LocalVideoAndText = 5,
	WebVideoAndText = 6,
	UrlLinkAndText = 7,
	ELLHSDKThirdPartyShareType_MAX = 8
};

// Object: Enum LLHSDK.ELLHSDKThirdPartyShareScene
enum class ELLHSDKThirdPartyShareScene : uint8_t
{
	None = 0,
	QQ_Friends = 1,
	QQ_Zone = 2,
	QQ_XSJ = 3,
	WeChat_Friends = 4,
	WeChat_Moments = 5,
	WeChat_Status = 6,
	WeChat_Favorites = 7,
	WeChat_Channels = 8,
	Weibo_Friends = 9,
	Weibo_Publish = 10,
	Weibo_SuperTopics = 11,
	DouYin_Friends = 12,
	DouYin_Publish = 13,
	ELLHSDKThirdPartyShareScene_MAX = 14
};

// Object: Enum LLHSDK.ELLHSDKPayType
enum class ELLHSDKPayType : uint8_t
{
	None = 0,
	Apple = 1,
	Google = 2,
	Ali = 3,
	Wechat = 4,
	Union = 5,
	PlayPhone = 6,
	MyCard = 7,
	Payssion = 8,
	HuaweiAbroad = 9,
	Paypal = 10,
	Voucher = 11,
	Samsung = 12,
	Switch = 13,
	ELLHSDKPayType_MAX = 14
};

// Object: Enum LLHSDK.ELLHSDKPayGenericSkuItemType
enum class ELLHSDKPayGenericSkuItemType : uint8_t
{
	Normal = 0,
	Subscription = 1,
	ELLHSDKPayGenericSkuItemType_MAX = 2
};

// Object: Enum LLHSDK.ELLHSDKReportCurrencyType
enum class ELLHSDKReportCurrencyType : uint8_t
{
	USA_Dollar = 0,
	China_Yuan = 1,
	Taiwan_Dollar = 2,
	ELLHSDKReportCurrencyType_MAX = 3
};

// Object: Enum LLHSDK.ELLHSDKCustomerServiceRateAction
enum class ELLHSDKCustomerServiceRateAction : uint8_t
{
	Success = 0,
	FeedBack = 1,
	Close = 2,
	Fail = 3,
	ELLHSDKCustomerServiceRateAction_MAX = 4
};

// Object: Enum LLHSDK.ELLHSDKSupportedLanguage
enum class ELLHSDKSupportedLanguage : uint8_t
{
	DefaultLanguage = 0,
	Arabic = 1,
	English = 2,
	French = 3,
	German = 4,
	Indonesian = 5,
	Italian = 6,
	Japanese = 7,
	Korean = 8,
	Malay = 9,
	Polish = 10,
	Portuguese = 11,
	Russian = 12,
	Spanish = 13,
	Thai = 14,
	Turkish = 15,
	Vietnamese = 16,
	Hindi = 17,
	SimplifiedChinese = 18,
	TraditionalChinese = 19,
	ELLHSDKSupportedLanguage_MAX = 20
};

// Object: Enum LLHSDK.ELLHSDKThirdPartyChannelType
enum class ELLHSDKThirdPartyChannelType : uint8_t
{
	TYPE_MI = 0,
	TYPE_360 = 1,
	TYPE_37WAN = 2,
	TYPE_ANZHI = 3,
	TYPE_AYX = 4,
	TYPE_BAIDU = 5,
	TYPE_DANGLE = 6,
	TYPE_HUAWEI = 7,
	TYPE_UC = 8,
	TYPE_OPPO = 9,
	TYPE_OPPO_INDIA = 10,
	TYPE_VIVO = 11,
	TYPE_MEIZU = 12,
	TYPE_WANDOUJIA = 13,
	TYPE_MUZHIWAN = 14,
	TYPE_4399 = 15,
	TYPE_JINLI = 16,
	TYPE_LENOVO = 17,
	TYPE_COOLPAD = 18,
	TYPE_DOUYU = 19,
	TYPE_SAMSUNG = 20,
	TYPE_SAMSUNG1 = 21,
	TYPE_LESHI = 22,
	TYPE_YINGYONGBAO = 23,
	TYPE_YINGYONGBAO1 = 24,
	TYPE_NUBIA = 25,
	TYPE_IQIYI = 26,
	TYPE_GUOPAN = 27,
	TYPE_KUAISHOU = 28,
	TYPE_BILIBILI = 29,
	TYPE_HUAWEI1 = 30,
	TYPE_GAEA = 31,
	TYPE_HUAWEIABROAD = 32,
	TYPE_MAX = 33
};

// Object: Enum LLHSDK.ELLHSDKThirdPartyShareErrCode
enum class ELLHSDKThirdPartyShareErrCode : uint8_t
{
	Success = 0,
	ShareSceneNotSupport = 1,
	ShareTypeNotSupport = 2,
	ParamsNumError = 3,
	ShareDataInvalid = 4,
	ParamsInvalid = 5,
	AndroidEnvInvalid = 6,
	AndroidWeChatShareSceneNotSupport = 7,
	SocialPlatformNotInstall = 8,
	IOSSdkParamsInvalid = 9,
	IOSSdkExternalError = 10,
	IOSSdkNotSupport = 11,
	IOSSdkNotRegister = 12,
	IOSSdkUnknown = 14,
	AndroidSdkNotSupport = 15,
	AndroidSdkUnknown = 16,
	NoPhotoLibraryPermission = 17,
	IOSSavePhotoLibraryFailed = 18,
	ELLHSDKThirdPartyShareErrCode_MAX = 19
};

// Object: Enum LLHSDK.ELLHSDKWeChatShareScene
enum class ELLHSDKWeChatShareScene : uint8_t
{
	None = 0,
	Friends = 1,
	Moments = 2,
	Favorites = 3,
	AssignContactPerson = 4,
	ELLHSDKWeChatShareScene_MAX = 5
};

// Object: Enum LLHSDK.ELLHSDKOpenAlbumErrorCode
enum class ELLHSDKOpenAlbumErrorCode : uint8_t
{
	None = 0,
	Cancel = 1,
	NoPermission = 2,
	ELLHSDKOpenAlbumErrorCode_MAX = 3
};

// Object: Enum LLHSDK.EReleaseType
enum class EReleaseType : uint8_t
{
	GrayRelease = 0,
	Release = 1,
	EReleaseType_MAX = 2
};

// Object: Enum LLHSDK.EDistributionRegion
enum class EDistributionRegion : uint8_t
{
	International = 0,
	Domestic = 1,
	EDistributionRegion_MAX = 2
};

// Object: Enum LLHSDK.ELLHSDKLoginUIStyle
enum class ELLHSDKLoginUIStyle : uint8_t
{
	NormalStyle = 0,
	SoulHunterStyle = 1,
	GameCenterStyle = 2,
	DomesticStyle = 3,
	GameCenterDomesticStyle = 4,
	ELLHSDKLoginUIStyle_MAX = 5
};

// Object: Enum LLHSDK.ELLHSDKGravity
enum class ELLHSDKGravity : uint8_t
{
	NO_GRAVITY = 0,
	LeftTop = 1,
	LeftCenter = 2,
	LeftBottom = 3,
	MidTop = 4,
	MidBottom = 5,
	RightTop = 6,
	RightCenter = 7,
	RightBottom = 8,
	ELLHSDKGravity_MAX = 9
};

// Object: ScriptStruct LLHSDK.LLHSDKLoginUser
// Size: 0x48 (Inherited: 0x0)
struct FLLHSDKLoginUser
{
	bool bValid; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString AppUid; // 0x8(0x10)
	struct FString AppToken; // 0x18(0x10)
	enum class ELLHSDKLoginType LoginType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FString Name; // 0x30(0x10)
	bool bIsGuest; // 0x40(0x1)
	bool bIsSafe; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
	int32_t LimitDeviceCount; // 0x44(0x4)
};

// Object: ScriptStruct LLHSDK.LLHSDKLoginUserInfo
// Size: 0x148 (Inherited: 0x0)
struct FLLHSDKLoginUserInfo
{
	bool bValid; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Phone; // 0x8(0x10)
	struct FString Email; // 0x18(0x10)
	struct FString UserRegion; // 0x28(0x10)
	struct FString IP; // 0x38(0x10)
	int32_t RestPoint; // 0x48(0x4)
	bool bDomesticHasBindAnyOne; // 0x4C(0x1)
	bool bDomesticHasBindPhone; // 0x4D(0x1)
	bool bIsNewReg; // 0x4E(0x1)
	bool bIsIdentified; // 0x4F(0x1)
	bool bIsAbusePrevented; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	struct TSet<enum class ELLHSDKLoginType> BoundLoginTypes; // 0x58(0x50)
	struct TMap<enum class ELLHSDKLoginType, struct FLLHSDKLoginUserInfoMap> BoundInfoMap; // 0xA8(0x50)
	struct FLLHSDKLoginUserInfoMap UserExtra; // 0xF8(0x50)
};

// Object: ScriptStruct LLHSDK.LLHSDKLoginUserInfoMap
// Size: 0x50 (Inherited: 0x0)
struct FLLHSDKLoginUserInfoMap
{
	struct TMap<struct FString, struct FString> Info; // 0x0(0x50)
};

// Object: ScriptStruct LLHSDK.SDKSocialUserInfo
// Size: 0x38 (Inherited: 0x0)
struct FSDKSocialUserInfo
{
	struct FString Avatar; // 0x0(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Email; // 0x20(0x10)
	int32_t BindType; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct LLHSDK.LLHSDKGenericSkuItemsDetailList
// Size: 0x10 (Inherited: 0x0)
struct FLLHSDKGenericSkuItemsDetailList
{
	struct TArray<struct FLLHSDKGoogleSkuItemDetail> Items; // 0x0(0x10)
};

// Object: ScriptStruct LLHSDK.LLHSDKGoogleSkuItemDetail
// Size: 0x70 (Inherited: 0x0)
struct FLLHSDKGoogleSkuItemDetail
{
	enum class ELLHSDKPayGenericSkuItemType ItemType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Title; // 0x8(0x10)
	struct FString Desc; // 0x18(0x10)
	struct FString Price; // 0x28(0x10)
	struct FString Sku; // 0x38(0x10)
	struct FString Currency; // 0x48(0x10)
	int32_t PriceAmountMicros; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString SdkConvertSymbol; // 0x60(0x10)
};

// Object: ScriptStruct LLHSDK.LLHSDKCustomerServiceExtra
// Size: 0x60 (Inherited: 0x0)
struct FLLHSDKCustomerServiceExtra
{
	struct TArray<struct FString> Tags; // 0x0(0x10)
	struct TMap<struct FString, struct FString> CustomParams; // 0x10(0x50)
};

// Object: ScriptStruct LLHSDK.LLHSDKLocaleInfo
// Size: 0x20 (Inherited: 0x0)
struct FLLHSDKLocaleInfo
{
	struct FString Language; // 0x0(0x10)
	struct FString Region; // 0x10(0x10)
};

// Object: ScriptStruct LLHSDK.LLHSDKGenericSkuSubItemsDetailList
// Size: 0x10 (Inherited: 0x0)
struct FLLHSDKGenericSkuSubItemsDetailList
{
	struct TArray<struct FLLHSDKGoogleSkuSubItemDetail> Items; // 0x0(0x10)
};

// Object: ScriptStruct LLHSDK.LLHSDKGoogleSkuSubItemDetail
// Size: 0x50 (Inherited: 0x0)
struct FLLHSDKGoogleSkuSubItemDetail
{
	enum class ELLHSDKPayGenericSkuItemType ItemType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Title; // 0x8(0x10)
	struct FString Desc; // 0x18(0x10)
	struct FString Sku; // 0x28(0x10)
	int32_t SubGoodsSize; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FLLHSDKGoogleSkuSubGood> SubGoods; // 0x40(0x10)
};

// Object: ScriptStruct LLHSDK.LLHSDKGoogleSkuSubGood
// Size: 0x38 (Inherited: 0x0)
struct FLLHSDKGoogleSkuSubGood
{
	struct FString OfferToken; // 0x0(0x10)
	int32_t CombineSize; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FLLHSDKGoogleSubCombineItem> CombineItems; // 0x18(0x10)
	struct TArray<struct FString> OfferTags; // 0x28(0x10)
};

// Object: ScriptStruct LLHSDK.LLHSDKGoogleSubCombineItem
// Size: 0x70 (Inherited: 0x0)
struct FLLHSDKGoogleSubCombineItem
{
	int32_t Index; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString ProductID; // 0x8(0x10)
	struct FString CombineItemName1; // 0x18(0x10)
	struct FString CombineItemName2; // 0x28(0x10)
	struct FString Price; // 0x38(0x10)
	struct FString Currency; // 0x48(0x10)
	int32_t PriceAmountMicros; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString SdkConvertSymbol; // 0x60(0x10)
};

} // namespace SDK
