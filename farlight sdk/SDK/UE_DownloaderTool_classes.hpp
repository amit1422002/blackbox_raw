// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class DownloaderTool.DownloaderHttpTask
// Size: 0x2E0 (Inherited: 0x28)
struct UDownloaderHttpTask : UObject
{
	struct FMulticastInlineDelegate OnTaskProgress; // 0x28(0x10)
	struct FMulticastInlineDelegate OnTaskSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTaskFailed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTaskFailedWithInfo; // 0x58(0x10)
	struct FMulticastInlineDelegate OnTaskCDNFailed; // 0x68(0x10)
	struct TWeakObjectPtr<struct UDownloaderManager> Manager; // 0x78(0x8)
	uint8_t Pad_0x80[0x200]; // 0x80(0x200)
	struct FDownloaderResponse DownloadResponse; // 0x280(0x60)


	// Object: Function DownloaderTool.DownloaderHttpTask.SetWriteFilePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fc3ac
	// Params: [ Num(1) Size(0x10) ]
	void SetWriteFilePath(struct FString InWriteFilePath);

	// Object: Function DownloaderTool.DownloaderHttpTask.OnWriteFileComplete
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x37fc2fc
	// Params: [ Num(1) Size(0x1) ]
	void OnWriteFileComplete(bool bWriteResult);

	// Object: Function DownloaderTool.DownloaderHttpTask.CreateAndProcessHttpRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fc460
	// Params: [ Num(0) Size(0x0) ]
	void CreateAndProcessHttpRequest();
};

// Object: Class DownloaderTool.DownloaderMainTask
// Size: 0x1B0 (Inherited: 0x28)
struct UDownloaderMainTask : UObject
{
	struct FMulticastInlineDelegate OnMainTaskProgress; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMainTaskSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMainTaskFailed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTaskCDNFailed; // 0x58(0x10)
	struct TWeakObjectPtr<struct UDownloaderManager> Manager; // 0x68(0x8)
	struct TArray<struct FDownloaderResponse> AllUrlTasksResponses; // 0x70(0x10)
	struct TArray<struct UDownloaderSubTask*> PausingSubTasks; // 0x80(0x10)
	struct TMap<struct FName, struct UDownloaderUrlTask*> AllUrlTasksMap; // 0x90(0x50)
	struct TMap<struct FString, struct FDownloaderProgressInfo> AllUrlTasksProgressInfoMap; // 0xE0(0x50)
	uint8_t Pad_0x130[0x80]; // 0x130(0x80)


	// Object: Function DownloaderTool.DownloaderMainTask.SetTaskReadyLaunch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fce28
	// Params: [ Num(0) Size(0x0) ]
	void SetTaskReadyLaunch();

	// Object: Function DownloaderTool.DownloaderMainTask.OnUrlTaskSuccess
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x37fcd2c
	// Params: [ Num(1) Size(0x60) ]
	void OnUrlTaskSuccess(struct FDownloaderResponse& InResponse);

	// Object: Function DownloaderTool.DownloaderMainTask.OnUrlTaskProgress
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x37fcb80
	// Params: [ Num(1) Size(0x48) ]
	void OnUrlTaskProgress(struct FDownloaderProgressInfo& InProgressInfo);

	// Object: Function DownloaderTool.DownloaderMainTask.OnUrlTaskFailed
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x37fcc58
	// Params: [ Num(1) Size(0x28) ]
	void OnUrlTaskFailed(struct FDownloaderFailedInfo& InFailedInfo);

	// Object: Function DownloaderTool.DownloaderMainTask.OnUrlTaskCDNFailed
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x37fca9c
	// Params: [ Num(1) Size(0x40) ]
	void OnUrlTaskCDNFailed(struct FDownloaderCDNFailedInfo& InCDNFailedInfo);
};

// Object: Class DownloaderTool.LuaAsyncLoadTextureBridge
// Size: 0x38 (Inherited: 0x28)
struct ULuaAsyncLoadTextureBridge : UObject
{
	struct FMulticastInlineDelegate OnAsyncDownloadOrLoadTextureMultiFinish; // 0x28(0x10)
};

// Object: Class DownloaderTool.DownloaderManagerLuaImpl
// Size: 0x30 (Inherited: 0x28)
struct UDownloaderManagerLuaImpl : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)


	// Object: Function DownloaderTool.DownloaderManagerLuaImpl.UnInitDownloaderMgrLuaInternal
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void UnInitDownloaderMgrLuaInternal();

	// Object: Function DownloaderTool.DownloaderManagerLuaImpl.InitDownloaderMgrLuaInternal
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x1) ]
	bool InitDownloaderMgrLuaInternal();
};

// Object: Class DownloaderTool.DownloaderManager
// Size: 0x2D0 (Inherited: 0x30)
struct UDownloaderManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0xC]; // 0x30(0xC)
	struct FDelegate OnCopyPakFileComplete; // 0x3C(0x10)
	struct FDelegate OnHashCheckFileComplete; // 0x4C(0x10)
	uint8_t Pad_0x5C[0xA4]; // 0x5C(0xA4)
	struct UDownloaderManagerLuaImpl* LuaImpl; // 0x100(0x8)
	bool bIsDownloaderEnabled; // 0x108(0x1)
	bool bSystemSupportFileCache; // 0x109(0x1)
	bool bIsBackgroundDownload; // 0x10A(0x1)
	uint8_t Pad_0x10B[0x1]; // 0x10B(0x1)
	int32_t CacheExpiredSeconds; // 0x10C(0x4)
	int32_t CacheClearMaxSpacePercent; // 0x110(0x4)
	float TextureCacheExpireTime; // 0x114(0x4)
	float TimeOutSeconds; // 0x118(0x4)
	float UrlTaskCallbackTimeOutSeconds; // 0x11C(0x4)
	float UrlTaskCallbackTimeOutGrowFactor; // 0x120(0x4)
	int32_t SubTaskChunkSize; // 0x124(0x4)
	int32_t CurDownloadingSubTaskNum; // 0x128(0x4)
	int32_t MaxDownloadingSubTaskNum; // 0x12C(0x4)
	int32_t BackgroundDownloadMaxRetryTimes; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct FString DefaultLaunchCacheDir; // 0x138(0x10)
	struct FString DefaultPictureCacheDir; // 0x148(0x10)
	struct FString DefaultLogsCacheDir; // 0x158(0x10)
	struct TMap<struct FName, struct UDownloaderMainTask*> MainTasksMap; // 0x168(0x50)
	struct TMap<struct FString, struct UDownloaderHttpTask*> LightWeightHttpTasksMap; // 0x1B8(0x50)
	struct TMap<struct FString, struct FString> UrlEncodedStrMap; // 0x208(0x50)
	struct TArray<struct UDownloaderSubTask*> SubTasksQueue; // 0x258(0x10)
	struct TArray<struct TWeakObjectPtr<struct UDownloaderSubTask>> CurRunningSubTasks; // 0x268(0x10)
	bool bInitLuaComplete; // 0x278(0x1)
	uint8_t Pad_0x279[0x7]; // 0x279(0x7)
	struct TMap<struct FString, struct FCacheEntry> TextureCache; // 0x280(0x50)


	// Object: Function DownloaderTool.DownloaderManager.TryLaunchSubTasksQueue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fe698
	// Params: [ Num(0) Size(0x0) ]
	void TryLaunchSubTasksQueue();

	// Object: Function DownloaderTool.DownloaderManager.StopMainTask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fe6ac
	// Params: [ Num(1) Size(0x8) ]
	void StopMainTask(struct FName& InMainTaskName);

	// Object: Function DownloaderTool.DownloaderManager.StopAllMainTasks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fe97c
	// Params: [ Num(0) Size(0x0) ]
	void StopAllMainTasks();

	// Object: Function DownloaderTool.DownloaderManager.SetUrlTaskCallbackTimeOutSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ffe14
	// Params: [ Num(1) Size(0x4) ]
	void SetUrlTaskCallbackTimeOutSeconds(float InTimeOutSeconds);

	// Object: Function DownloaderTool.DownloaderManager.SetUrlTaskCallbackTimeOutGrowFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ffd38
	// Params: [ Num(1) Size(0x4) ]
	void SetUrlTaskCallbackTimeOutGrowFactor(float InGrowFactor);

	// Object: Function DownloaderTool.DownloaderManager.SetTimeOutSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ffef0
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeOutSeconds(float InTimeOutSeconds);

	// Object: Function DownloaderTool.DownloaderManager.SetTextureCacheExpireTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ffaa4
	// Params: [ Num(1) Size(0x4) ]
	void SetTextureCacheExpireTime(float InTextureCacheExpireTime);

	// Object: Function DownloaderTool.DownloaderManager.SetSubTaskChunkSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ff9c8
	// Params: [ Num(1) Size(0x4) ]
	void SetSubTaskChunkSize(int32_t InSubTaskChunkSize);

	// Object: Function DownloaderTool.DownloaderManager.SetMaxDownloadingSubTaskNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ff8d8
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDownloadingSubTaskNum(int32_t InMaxDownloadingSubTaskNum);

	// Object: Function DownloaderTool.DownloaderManager.SetManagerEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3800004
	// Params: [ Num(1) Size(0x1) ]
	void SetManagerEnable(bool bInEnable);

	// Object: Function DownloaderTool.DownloaderManager.SetIsBackgroundDownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ff74c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsBackgroundDownload(bool bInBackgroundDownload);

	// Object: Function DownloaderTool.DownloaderManager.SetCacheExpiredSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ffc5c
	// Params: [ Num(1) Size(0x4) ]
	void SetCacheExpiredSeconds(int32_t InCacheExpiredSeconds);

	// Object: Function DownloaderTool.DownloaderManager.SetCacheClearMaxSpacePercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ffb80
	// Params: [ Num(1) Size(0x4) ]
	void SetCacheClearMaxSpacePercent(int32_t InCacheClearMaxSpacePercent);

	// Object: Function DownloaderTool.DownloaderManager.SetByExpectedMaxDownloadingSubTaskNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ff980
	// Params: [ Num(0) Size(0x0) ]
	void SetByExpectedMaxDownloadingSubTaskNum();

	// Object: Function DownloaderTool.DownloaderManager.SetBackgroundDownloadMaxRetryTimes
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ff830
	// Params: [ Num(1) Size(0x4) ]
	void SetBackgroundDownloadMaxRetryTimes(int32_t InMaxRetryTimes);

	// Object: Function DownloaderTool.DownloaderManager.ResumeMainTask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fe814
	// Params: [ Num(1) Size(0x8) ]
	void ResumeMainTask(struct FName& InMainTaskName);

	// Object: Function DownloaderTool.DownloaderManager.ReadyMainTaskFinish
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fe8c8
	// Params: [ Num(1) Size(0x8) ]
	void ReadyMainTaskFinish(struct FName& InMainTaskName);

	// Object: Function DownloaderTool.DownloaderManager.PushBatchSubTasksToQueue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fe58c
	// Params: [ Num(2) Size(0x11) ]
	void PushBatchSubTasksToQueue(struct TArray<struct UDownloaderSubTask*>& InSubTasks, bool bInCutQueue);

	// Object: Function DownloaderTool.DownloaderManager.PauseMainTask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fe760
	// Params: [ Num(1) Size(0x8) ]
	void PauseMainTask(struct FName& InMainTaskName);

	// Object: Function DownloaderTool.DownloaderManager.OnTextureAssetAsyncLoaded
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x37fdc8c
	// Params: [ Num(1) Size(0x10) ]
	void OnTextureAssetAsyncLoaded(struct FString FilePath);

	// Object: Function DownloaderTool.DownloaderManager.OnDownloadTextureSuccess
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x37fdf60
	// Params: [ Num(1) Size(0x60) ]
	void OnDownloadTextureSuccess(struct FDownloaderResponse& InResponses);

	// Object: Function DownloaderTool.DownloaderManager.OnDownloadTextureFailed
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x37fde84
	// Params: [ Num(1) Size(0x28) ]
	void OnDownloadTextureFailed(struct FDownloaderFailedInfo& InFailedInfo);

	// Object: Function DownloaderTool.DownloaderManager.IsSystemSupportFileCache
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37fffcc
	// Params: [ Num(1) Size(0x1) ]
	bool IsSystemSupportFileCache();

	// Object: Function DownloaderTool.DownloaderManager.IsManagerEnable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38000b4
	// Params: [ Num(1) Size(0x1) ]
	bool IsManagerEnable();

	// Object: Function DownloaderTool.DownloaderManager.IsMainTaskExist
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37ff4a4
	// Params: [ Num(2) Size(0x9) ]
	bool IsMainTaskExist(struct FName& InMainTaskName);

	// Object: Function DownloaderTool.DownloaderManager.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3800428
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function DownloaderTool.DownloaderManager.HandleTextureConversionComplete
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x37fdd90
	// Params: [ Num(2) Size(0x18) ]
	void HandleTextureConversionComplete(struct FString FilePath, struct UTexture2D* Texture);

	// Object: Function DownloaderTool.DownloaderManager.GetUrlTaskRecordFilePath
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fee1c
	// Params: [ Num(2) Size(0xC8) ]
	struct FString GetUrlTaskRecordFilePath(struct FDownloaderTaskInfo& InTaskInfo);

	// Object: Function DownloaderTool.DownloaderManager.GetUrlTaskCallbackTimeOutSeconds
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ffebc
	// Params: [ Num(1) Size(0x4) ]
	float GetUrlTaskCallbackTimeOutSeconds();

	// Object: Function DownloaderTool.DownloaderManager.GetUrlTaskCallbackTimeOutGrowFactor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ffde0
	// Params: [ Num(1) Size(0x4) ]
	float GetUrlTaskCallbackTimeOutGrowFactor();

	// Object: Function DownloaderTool.DownloaderManager.GetUrlTaskCacheDirPath
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fef58
	// Params: [ Num(2) Size(0xC8) ]
	struct FString GetUrlTaskCacheDirPath(struct FDownloaderTaskInfo& InTaskInfo);

	// Object: Function DownloaderTool.DownloaderManager.GetUrlsCachedSize
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37ff094
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetUrlsCachedSize(struct TArray<struct FDownloaderTaskInfo>& InAllTaskInfos);

	// Object: Function DownloaderTool.DownloaderManager.GetUrlEncodedStr
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fece0
	// Params: [ Num(2) Size(0xC8) ]
	struct FString GetUrlEncodedStr(struct FDownloaderTaskInfo& InTaskInfo);

	// Object: Function DownloaderTool.DownloaderManager.GetTimeOutSeconds
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37fff98
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeOutSeconds();

	// Object: Function DownloaderTool.DownloaderManager.GetTextureCacheExpireTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ffb4c
	// Params: [ Num(1) Size(0x4) ]
	float GetTextureCacheExpireTime();

	// Object: Function DownloaderTool.DownloaderManager.GetTextureBridge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fe1a0
	// Params: [ Num(2) Size(0xC0) ]
	struct ULuaAsyncLoadTextureBridge* GetTextureBridge(struct FDownloaderTaskInfo InTaskInfo);

	// Object: Function DownloaderTool.DownloaderManager.GetSubTaskChunkSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ffa70
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSubTaskChunkSize();

	// Object: Function DownloaderTool.DownloaderManager.GetMaxDownloadingSubTaskNum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ff994
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxDownloadingSubTaskNum();

	// Object: Function DownloaderTool.DownloaderManager.GetMainTaskStatus
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37ff180
	// Params: [ Num(2) Size(0x9) ]
	enum class EDownloaderStatus GetMainTaskStatus(struct FName& InMainTaskName);

	// Object: Function DownloaderTool.DownloaderManager.GetMainTasksMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37ff648
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<struct FName, struct UDownloaderMainTask*> GetMainTasksMap();

	// Object: Function DownloaderTool.DownloaderManager.GetMainTaskName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37ff564
	// Params: [ Num(2) Size(0x18) ]
	struct FName GetMainTaskName(struct TArray<struct FDownloaderTaskInfo>& InAllTaskInfos);

	// Object: Function DownloaderTool.DownloaderManager.GetMainTaskByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37ff2f8
	// Params: [ Num(2) Size(0x10) ]
	struct UDownloaderMainTask* GetMainTaskByName(struct FName& InMainTaskName);

	// Object: Function DownloaderTool.DownloaderManager.GetLightWeightHttpTaskByURL
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ff23c
	// Params: [ Num(2) Size(0x18) ]
	struct UDownloaderHttpTask* GetLightWeightHttpTaskByURL(struct FString InNecessaryURL);

	// Object: Function DownloaderTool.DownloaderManager.GetIsBackgroundDownload
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ff714
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsBackgroundDownload();

	// Object: Function DownloaderTool.DownloaderManager.GetDefaultPictureCacheFilePath
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fe064
	// Params: [ Num(2) Size(0xC8) ]
	struct FString GetDefaultPictureCacheFilePath(struct FDownloaderTaskInfo& InTaskInfo);

	// Object: Function DownloaderTool.DownloaderManager.GetDefaultPictureCacheDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37fead0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultPictureCacheDir();

	// Object: Function DownloaderTool.DownloaderManager.GetDefaultLogsCacheDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37fe9c8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultLogsCacheDir();

	// Object: Function DownloaderTool.DownloaderManager.GetDefaultLaunchCacheDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37febd8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultLaunchCacheDir();

	// Object: Function DownloaderTool.DownloaderManager.GetCacheExpiredSeconds
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ffd04
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCacheExpiredSeconds();

	// Object: Function DownloaderTool.DownloaderManager.GetCacheClearMaxSpacePercent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ffc28
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCacheClearMaxSpacePercent();

	// Object: Function DownloaderTool.DownloaderManager.GetBackgroundDownloadMaxRetryTimes
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ff7fc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBackgroundDownloadMaxRetryTimes();

	// Object: Function DownloaderTool.DownloaderManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x380043c
	// Params: [ Num(2) Size(0x10) ]
	struct UDownloaderManager* Get(struct UObject* WorldContextObject);

	// Object: Function DownloaderTool.DownloaderManager.ForceClearAllTextureCaches
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x37fdc78
	// Params: [ Num(0) Size(0x0) ]
	void ForceClearAllTextureCaches();

	// Object: Function DownloaderTool.DownloaderManager.DeleteDefaultPictureCacheDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37fea98
	// Params: [ Num(1) Size(0x1) ]
	bool DeleteDefaultPictureCacheDir();

	// Object: Function DownloaderTool.DownloaderManager.DeleteDefaultLogsCacheDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37fe990
	// Params: [ Num(1) Size(0x1) ]
	bool DeleteDefaultLogsCacheDir();

	// Object: Function DownloaderTool.DownloaderManager.DeleteDefaultLaunchCacheDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37feba0
	// Params: [ Num(1) Size(0x1) ]
	bool DeleteDefaultLaunchCacheDir();

	// Object: Function DownloaderTool.DownloaderManager.DeleteAllDefaultCacheDir
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37feca8
	// Params: [ Num(1) Size(0x1) ]
	bool DeleteAllDefaultCacheDir();

	// Object: Function DownloaderTool.DownloaderManager.CreateLuaAsyncLoadOrDownloadTextureTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fe2b4
	// Params: [ Num(2) Size(0xC0) ]
	struct ULuaAsyncLoadTextureBridge* CreateLuaAsyncLoadOrDownloadTextureTask(struct FDownloaderTaskInfo InTaskInfo);

	// Object: Function DownloaderTool.DownloaderManager.CreateLightWeightTask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3800238
	// Params: [ Num(2) Size(0xC0) ]
	struct UDownloaderHttpTask* CreateLightWeightTask(struct FDownloaderTaskInfo& InTaskInfo);

	// Object: Function DownloaderTool.DownloaderManager.CreateJsonReqTask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x38000ec
	// Params: [ Num(3) Size(0xD0) ]
	struct UDownloaderHttpTask* CreateJsonReqTask(struct FString InNecessaryURL, struct FDownloaderReqJson& InReqJson);

	// Object: Function DownloaderTool.DownloaderManager.CreateBigFilesDownloadTask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x380033c
	// Params: [ Num(2) Size(0x18) ]
	struct UDownloaderMainTask* CreateBigFilesDownloadTask(struct TArray<struct FDownloaderTaskInfo>& InAllTaskInfos);

	// Object: Function DownloaderTool.DownloaderManager.ClearCompletedMainTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fe564
	// Params: [ Num(0) Size(0x0) ]
	void ClearCompletedMainTask();

	// Object: Function DownloaderTool.DownloaderManager.ClearCompletedLightWeightHttpTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fe550
	// Params: [ Num(0) Size(0x0) ]
	void ClearCompletedLightWeightHttpTask();

	// Object: Function DownloaderTool.DownloaderManager.ClearCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fe578
	// Params: [ Num(0) Size(0x0) ]
	void ClearCache();

	// Object: Function DownloaderTool.DownloaderManager.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x37fe53c
	// Params: [ Num(0) Size(0x0) ]
	void Clear();

	// Object: Function DownloaderTool.DownloaderManager.CheckTaskInfosValid
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x37ff3b4
	// Params: [ Num(2) Size(0x11) ]
	bool CheckTaskInfosValid(struct TArray<struct FDownloaderTaskInfo>& InAllTaskInfos);

	// Object: Function DownloaderTool.DownloaderManager.AsyncLoadOrDownloadTexture
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x37fe3c8
	// Params: [ Num(2) Size(0xC8) ]
	void AsyncLoadOrDownloadTexture(struct FDownloaderTaskInfo InTaskInfo, struct FDelegate& Callback);
};

// Object: Class DownloaderTool.DownloaderSubTask
// Size: 0x180 (Inherited: 0x28)
struct UDownloaderSubTask : UObject
{
	struct FDelegate OnSubTaskProgress; // 0x28(0x10)
	struct FDelegate OnSubTaskSuccess; // 0x38(0x10)
	struct FDelegate OnSubTaskFailed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTaskCDNFailed; // 0x58(0x10)
	struct TWeakObjectPtr<struct UDownloaderManager> Manager; // 0x68(0x8)
	struct UDownloaderHttpTask* RealHttpTask; // 0x70(0x8)
	uint8_t Pad_0x78[0x108]; // 0x78(0x108)


	// Object: Function DownloaderTool.DownloaderSubTask.OnRealHttpTaskSuccess
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x3801d00
	// Params: [ Num(1) Size(0x60) ]
	void OnRealHttpTaskSuccess(struct FDownloaderResponse& InResponse);

	// Object: Function DownloaderTool.DownloaderSubTask.OnRealHttpTaskProgress
	// Flags: [Final|Native|Protected]
	// Offset: 0x3801b28
	// Params: [ Num(2) Size(0x8) ]
	void OnRealHttpTaskProgress(int32_t InBytesSent, int32_t InBytesReceived);

	// Object: Function DownloaderTool.DownloaderSubTask.OnRealHttpTaskFailed
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x3801c0c
	// Params: [ Num(2) Size(0x8) ]
	void OnRealHttpTaskFailed(enum class EDTFailedType& InFailedType, int32_t InErrorCode);

	// Object: Function DownloaderTool.DownloaderSubTask.OnRealHttpTaskCDNFailed
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x3801a44
	// Params: [ Num(1) Size(0x40) ]
	void OnRealHttpTaskCDNFailed(struct FDownloaderCDNFailedInfo& InCDNFailedInfo);
};

// Object: Class DownloaderTool.DownloaderUrlTask
// Size: 0x2F8 (Inherited: 0x28)
struct UDownloaderUrlTask : UObject
{
	struct FDelegate OnUrlTaskProgress; // 0x28(0x10)
	struct FDelegate OnUrlTaskSuccess; // 0x38(0x10)
	struct FDelegate OnUrlTaskFailed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTaskCDNFailed; // 0x58(0x10)
	struct TWeakObjectPtr<struct UDownloaderManager> Manager; // 0x68(0x8)
	struct TMap<struct FName, struct UDownloaderSubTask*> AllSubTasksMap; // 0x70(0x50)
	uint8_t Pad_0xC0[0x238]; // 0xC0(0x238)


	// Object: Function DownloaderTool.DownloaderUrlTask.OnSubTaskSuccess
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x3802f04
	// Params: [ Num(1) Size(0x60) ]
	void OnSubTaskSuccess(struct FDownloaderResponse& InResponse);

	// Object: Function DownloaderTool.DownloaderUrlTask.OnSubTaskProgress
	// Flags: [Final|Native|Protected]
	// Offset: 0x3802d2c
	// Params: [ Num(2) Size(0x8) ]
	void OnSubTaskProgress(int32_t InCurBytesSent, int32_t InCurBytesReceived);

	// Object: Function DownloaderTool.DownloaderUrlTask.OnSubTaskFailed
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x3802e10
	// Params: [ Num(2) Size(0x8) ]
	void OnSubTaskFailed(enum class EDTFailedType& InFailedType, int32_t InErrorCode);

	// Object: Function DownloaderTool.DownloaderUrlTask.OnSubTaskCDNFailed
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x3802c48
	// Params: [ Num(1) Size(0x40) ]
	void OnSubTaskCDNFailed(struct FDownloaderCDNFailedInfo& InCDNFailedInfo);

	// Object: Function DownloaderTool.DownloaderUrlTask.OnMoveOrCopyFileComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x3802ae8
	// Params: [ Num(1) Size(0x1) ]
	void OnMoveOrCopyFileComplete(bool bMoveOrCopyResult);

	// Object: Function DownloaderTool.DownloaderUrlTask.OnMergeFileComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x3802b98
	// Params: [ Num(1) Size(0x1) ]
	void OnMergeFileComplete(bool bMergeResult);

	// Object: Function DownloaderTool.DownloaderUrlTask.OnHashCheckFileComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x3802a38
	// Params: [ Num(1) Size(0x1) ]
	void OnHashCheckFileComplete(bool bHashCheckResult);

	// Object: Function DownloaderTool.DownloaderUrlTask.CreateSubTasksPerFrame
	// Flags: [Final|Native|Protected]
	// Offset: 0x3802a10
	// Params: [ Num(0) Size(0x0) ]
	void CreateSubTasksPerFrame();

	// Object: Function DownloaderTool.DownloaderUrlTask.CheckUrlTaskSuccess
	// Flags: [Final|Native|Protected]
	// Offset: 0x3802a24
	// Params: [ Num(0) Size(0x0) ]
	void CheckUrlTaskSuccess();
};

// Object: Class DownloaderTool.DownloaderUtils
// Size: 0x28 (Inherited: 0x28)
struct UDownloaderUtils : UObject
{

	// Object: Function DownloaderTool.DownloaderUtils.TryUpdateUrlTaskRecordFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3804298
	// Params: [ Num(3) Size(0x21) ]
	bool TryUpdateUrlTaskRecordFile(struct FString InUrlTaskRecordFilePath, struct FUrlTaskRecordInfo& InUrlTaskRecordInfo);

	// Object: Function DownloaderTool.DownloaderUtils.TrySaveResponseToCache
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3804038
	// Params: [ Num(3) Size(0x71) ]
	bool TrySaveResponseToCache(struct FDownloaderResponse& InResponse, struct FString InCachePath);

	// Object: Function DownloaderTool.DownloaderUtils.TryGetUrlTaskRecordFromFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3804188
	// Params: [ Num(3) Size(0x21) ]
	bool TryGetUrlTaskRecordFromFile(struct FString InUrlTaskRecordFilePath, struct FUrlTaskRecordInfo& OutUrlTaskRecordInfo);

	// Object: Function DownloaderTool.DownloaderUtils.TryGetResponseFromCache
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3803e4c
	// Params: [ Num(4) Size(0x129) ]
	bool TryGetResponseFromCache(struct FDownloaderTaskInfo& InTaskInfo, struct FString InCachePath, struct FDownloaderResponse& OutResponse);

	// Object: Function DownloaderTool.DownloaderUtils.TryGetJsonStrFromDownloaderReqJson
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x38047f0
	// Params: [ Num(3) Size(0xC9) ]
	bool TryGetJsonStrFromDownloaderReqJson(struct FDownloaderReqJson& InReqJson, struct FString& OutReqStr);

	// Object: Function DownloaderTool.DownloaderUtils.TryDeleteOldFileAndCreateDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3803d94
	// Params: [ Num(2) Size(0x11) ]
	bool TryDeleteOldFileAndCreateDir(struct FString InFileFullPath);

	// Object: Function DownloaderTool.DownloaderUtils.StringFileRawData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3804a7c
	// Params: [ Num(2) Size(0x70) ]
	struct FString StringFileRawData(struct FDownloaderResponse& InResponse);

	// Object: Function DownloaderTool.DownloaderUtils.SafeWriteToFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x380359c
	// Params: [ Num(4) Size(0x22) ]
	void SafeWriteToFile(struct FString InFilePath, struct FString InContent, bool bInAppend, bool bInReplaceOld);

	// Object: Function DownloaderTool.DownloaderUtils.HashStringWithSHA1
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3804d90
	// Params: [ Num(2) Size(0x20) ]
	struct FString HashStringWithSHA1(struct FString inString);

	// Object: Function DownloaderTool.DownloaderUtils.GetVerbFromJsonRequestStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3804704
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetVerbFromJsonRequestStr(struct FString JsonRequestStr);

	// Object: Function DownloaderTool.DownloaderUtils.GetTaskInfoLogStr
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3803a88
	// Params: [ Num(2) Size(0xC8) ]
	struct FString GetTaskInfoLogStr(struct FDownloaderTaskInfo& InTaskInfo);

	// Object: Function DownloaderTool.DownloaderUtils.GetQueriesFromJsonRequestStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3804494
	// Params: [ Num(2) Size(0x60) ]
	struct TMap<struct FString, struct FString> GetQueriesFromJsonRequestStr(struct FString JsonRequestStr);

	// Object: Function DownloaderTool.DownloaderUtils.GetHttpMethodTypeStr
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3803bbc
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetHttpMethodTypeStr(enum class EDownloaderHttpMethod& InHttpMethod);

	// Object: Function DownloaderTool.DownloaderUtils.GetHeadersFromJsonRequestStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38045cc
	// Params: [ Num(2) Size(0x60) ]
	struct TMap<struct FString, struct FString> GetHeadersFromJsonRequestStr(struct FString JsonRequestStr);

	// Object: Function DownloaderTool.DownloaderUtils.GetFailedTypeStr
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3803ca8
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetFailedTypeStr(enum class EDTFailedType& InFailedType);

	// Object: Function DownloaderTool.DownloaderUtils.GetCurTimeMilliSecond
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3803724
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetCurTimeMilliSecond();

	// Object: Function DownloaderTool.DownloaderUtils.GetBodyFromJsonRequestStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38043a8
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetBodyFromJsonRequestStr(struct FString JsonRequestStr);

	// Object: Function DownloaderTool.DownloaderUtils.GetAllTaskNameLogStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38038b8
	// Params: [ Num(5) Size(0x50) ]
	struct FString GetAllTaskNameLogStr(struct FString InMainTaskName, struct FString InUrlTaskName, struct FString InSubTaskName, struct FString InHttpTaskName);

	// Object: Function DownloaderTool.DownloaderUtils.ExtractFileNameAndExtensionFromFileFullName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3803758
	// Params: [ Num(3) Size(0x30) ]
	void ExtractFileNameAndExtensionFromFileFullName(struct FString InFileFullName, struct FString& OutFileName, struct FString& OutFileExtension);

	// Object: Function DownloaderTool.DownloaderUtils.EncodeUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38034b0
	// Params: [ Num(2) Size(0x20) ]
	struct FString EncodeUrl(struct FString InUnencodeUrl);

	// Object: Function DownloaderTool.DownloaderUtils.DecodeFileRawData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3804948
	// Params: [ Num(2) Size(0x70) ]
	struct FString DecodeFileRawData(struct FDownloaderResponse& InResponse);

	// Object: Function DownloaderTool.DownloaderUtils.AsyncHashCheckFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3804ca0
	// Params: [ Num(2) Size(0x20) ]
	void AsyncHashCheckFile(struct FString InFilePath, struct FString InHashStr);

	// Object: Function DownloaderTool.DownloaderUtils.AsyncCopyFileFromPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3804bb0
	// Params: [ Num(2) Size(0x20) ]
	void AsyncCopyFileFromPak(struct FString SourceFilePath, struct FString TargetFilePath);
};

} // namespace SDK
