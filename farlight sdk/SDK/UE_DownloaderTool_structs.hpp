// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum DownloaderTool.EDTFailedType
enum class EDTFailedType : uint8_t
{
	Default = 0,
	RequestHeadFailed = 1,
	CreateFileFailed = 2,
	HttpError = 3,
	WriteFailed = 4,
	MoveFailed = 5,
	RequestConnectTimeOut = 6,
	RequestInvalid = 7,
	ResponseInvalid = 8,
	SubTaskSizeInvalid = 9,
	CreateUrlTaskDirFailed = 10,
	CreateUrlDownSizeTaskFailed = 11,
	CreateUrlFullDownTaskFailed = 12,
	CreateUrlChunkDownTaskFailed = 13,
	UpdateUrlTaskInfoJsonFailed = 14,
	MergeSubTasksFailed = 15,
	DecodeJsonRequestFailed = 16,
	HttpTaskContentInvalid = 17,
	LaunchSubTaskFailed = 18,
	HashCheckFailed = 19,
	SubTasksTotalSizeError = 20,
	SubTaskCacheSortFailed = 21,
	UrlTaskReadMergedFileFailed = 22,
	InitRequestFullUrlFailed = 23,
	HttpTaskUrlIndexError = 24,
	GetWrongJsonFormat = 25,
	CreateDownloadTaskFail = 26,
	UrlTaskCallbackFailed = 27,
	EDTFailedType_MAX = 28
};

// Object: Enum DownloaderTool.EDownloaderStatus
enum class EDownloaderStatus : uint8_t
{
	Default = 0,
	NotReady = 1,
	ReadyLaunch = 2,
	Downloading = 3,
	Pausing = 4,
	Completed = 5,
	EDownloaderStatus_MAX = 6
};

// Object: Enum DownloaderTool.EDownloaderHttpMethod
enum class EDownloaderHttpMethod : uint8_t
{
	Get = 0,
	Post = 1,
	Head = 2,
	Put = 3,
	Delete = 4,
	EDownloaderHttpMethod_MAX = 5
};

// Object: ScriptStruct DownloaderTool.DownloaderProgressInfo
// Size: 0x48 (Inherited: 0x0)
struct FDownloaderProgressInfo
{
	struct FString UsedCDNBaseURL; // 0x0(0x10)
	struct FString NecessaryURL; // 0x10(0x10)
	int64_t BytesSent; // 0x20(0x8)
	int64_t BytesReceived; // 0x28(0x8)
	int64_t CacheWritedSize; // 0x30(0x8)
	int64_t MixedSize; // 0x38(0x8)
	int64_t TotalDownloadSize; // 0x40(0x8)
};

// Object: ScriptStruct DownloaderTool.DownloaderResponse
// Size: 0x60 (Inherited: 0x0)
struct FDownloaderResponse
{
	bool bWasSuccessful; // 0x0(0x1)
	bool bDownloadFromCache; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FString NecessaryURL; // 0x8(0x10)
	struct FString UsedCDNBaseURL; // 0x18(0x10)
	int32_t Errorcode; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<uint8_t> RawData; // 0x30(0x10)
	struct FString RawFileSavePath; // 0x40(0x10)
	int32_t DataLength; // 0x50(0x4)
	int32_t ContentLength; // 0x54(0x4)
	int64_t Timestamp; // 0x58(0x8)
};

// Object: ScriptStruct DownloaderTool.DownloaderFailedInfo
// Size: 0x28 (Inherited: 0x0)
struct FDownloaderFailedInfo
{
	struct FString NecessaryURL; // 0x0(0x10)
	int32_t Errorcode; // 0x10(0x4)
	enum class EDTFailedType FailedType; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FString FileWritePath; // 0x18(0x10)
};

// Object: ScriptStruct DownloaderTool.DownloaderCDNFailedInfo
// Size: 0x40 (Inherited: 0x0)
struct FDownloaderCDNFailedInfo
{
	struct FString NecessaryURL; // 0x0(0x10)
	struct FString BaseCDNUrl; // 0x10(0x10)
	struct FString RequestErrorMsg; // 0x20(0x10)
	int64_t RequestCostTime; // 0x30(0x8)
	int32_t Errorcode; // 0x38(0x4)
	enum class EDTFailedType FailedType; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct DownloaderTool.CacheEntry
// Size: 0x30 (Inherited: 0x0)
struct FCacheEntry
{
	struct UTexture2D* Texture; // 0x0(0x8)
	struct ULuaAsyncLoadTextureBridge* TextureBridge; // 0x8(0x8)
	uint8_t Pad_0x10[0x20]; // 0x10(0x20)
};

// Object: ScriptStruct DownloaderTool.DownloaderTaskInfo
// Size: 0xB8 (Inherited: 0x0)
struct FDownloaderTaskInfo
{
	struct FString NecessaryURL; // 0x0(0x10)
	struct TArray<struct FString> BaseCDNUrlList; // 0x10(0x10)
	struct FString JsonRequestStr; // 0x20(0x10)
	struct FString HashStr; // 0x30(0x10)
	int32_t MaxRetryTime; // 0x40(0x4)
	int32_t FileSize; // 0x44(0x4)
	bool bUsingResumeTrans; // 0x48(0x1)
	bool bClearSubTaskCache; // 0x49(0x1)
	bool bAsyncWrite; // 0x4A(0x1)
	bool bAsyncMerge; // 0x4B(0x1)
	bool bAsyncHashCheck; // 0x4C(0x1)
	bool bUseBackgroundDownload; // 0x4D(0x1)
	bool bForceReDownload; // 0x4E(0x1)
	bool bForceWrite; // 0x4F(0x1)
	bool bNeedHashCheck; // 0x50(0x1)
	bool bEnableTimeOutFailed; // 0x51(0x1)
	uint8_t Pad_0x52[0x2]; // 0x52(0x2)
	float TimeOutSeconds; // 0x54(0x4)
	bool bCallBackWithRawData; // 0x58(0x1)
	bool bCutInLine; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
	struct FString FileDirectory; // 0x60(0x10)
	struct FString FileFullName; // 0x70(0x10)
	bool bCompleted; // 0x80(0x1)
	bool bSuccessful; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)
	int64_t StartTimeStamp; // 0x88(0x8)
	int64_t CompleteTimeStamp; // 0x90(0x8)
	struct FString Filename; // 0x98(0x10)
	struct FString FileExtension; // 0xA8(0x10)
};

// Object: ScriptStruct DownloaderTool.UrlTaskRecordInfo
// Size: 0x10 (Inherited: 0x0)
struct FUrlTaskRecordInfo
{
	bool bUrlTaskSuccess; // 0x0(0x1)
	bool bHashCheckSuccess; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t TotalDownloadSize; // 0x4(0x4)
	int32_t SubTaskChunkSize; // 0x8(0x4)
	int32_t CachedWritedSize; // 0xC(0x4)
};

// Object: ScriptStruct DownloaderTool.DownloaderReqJson
// Size: 0xB8 (Inherited: 0x0)
struct FDownloaderReqJson
{
	enum class EDownloaderHttpMethod Verb; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TMap<struct FString, struct FString> Headers; // 0x8(0x50)
	struct TMap<struct FString, struct FString> Queries; // 0x58(0x50)
	struct FString Body; // 0xA8(0x10)
};

} // namespace SDK
