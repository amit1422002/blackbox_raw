// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MediaAssets.MediaSource
// Size: 0x80 (Inherited: 0x28)
struct UMediaSource : UObject
{
	uint8_t Pad_0x28[0x58]; // 0x28(0x58)


	// Object: Function MediaAssets.MediaSource.Validate
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3fef4
	// Params: [ Num(1) Size(0x1) ]
	bool Validate();

	// Object: Function MediaAssets.MediaSource.SetMediaOptionString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3fb0c
	// Params: [ Num(2) Size(0x18) ]
	void SetMediaOptionString(struct FName& Key, struct FString Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionInt64
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3fc10
	// Params: [ Num(2) Size(0x10) ]
	void SetMediaOptionInt64(struct FName& Key, int64_t Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3fd04
	// Params: [ Num(2) Size(0xC) ]
	void SetMediaOptionFloat(struct FName& Key, float Value);

	// Object: Function MediaAssets.MediaSource.SetMediaOptionBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3fdf8
	// Params: [ Num(2) Size(0x9) ]
	void SetMediaOptionBool(struct FName& Key, bool Value);

	// Object: Function MediaAssets.MediaSource.GetUrl
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3ff34
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();
};

// Object: Class MediaAssets.BaseMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UBaseMediaSource : UMediaSource
{
	struct FName playerName; // 0x80(0x8)
};

// Object: Class MediaAssets.FileMediaSource
// Size: 0xB0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource
{
	struct FString FilePath; // 0x88(0x10)
	bool PrecacheFile; // 0x98(0x1)
	uint8_t Pad_0x99[0x17]; // 0x99(0x17)


	// Object: Function MediaAssets.FileMediaSource.SetFilePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b38448
	// Params: [ Num(1) Size(0x10) ]
	void SetFilePath(struct FString Path);
};

// Object: Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b38b98
	// Params: [ Num(2) Size(0x14) ]
	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);

	// Object: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b38d18
	// Params: [ Num(2) Size(0x14) ]
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);

	// Object: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b38e98
	// Params: [ Num(2) Size(0x14) ]
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter);
};

// Object: Class MediaAssets.MediaComponent
// Size: 0xE8 (Inherited: 0xD8)
struct UMediaComponent : UActorComponent
{
	struct UMediaTexture* MediaTexture; // 0xD8(0x8)
	struct UMediaPlayer* MediaPlayer; // 0xE0(0x8)


	// Object: Function MediaAssets.MediaComponent.GetMediaTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b392b8
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaTexture* GetMediaTexture();

	// Object: Function MediaAssets.MediaComponent.GetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b392ec
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlayer* GetMediaPlayer();
};

// Object: Class MediaAssets.MediaTimeStampInfo
// Size: 0x38 (Inherited: 0x28)
struct UMediaTimeStampInfo : UObject
{
	struct FTimespan Time; // 0x28(0x8)
	int64_t SequenceIndex; // 0x30(0x8)
};

// Object: Class MediaAssets.MediaPlayer
// Size: 0x138 (Inherited: 0x28)
struct UMediaPlayer : UObject
{
	struct FMulticastInlineDelegate OnEndReached; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98(0x10)
	struct FTimespan CacheAhead; // 0xA8(0x8)
	struct FTimespan CacheBehind; // 0xB0(0x8)
	struct FTimespan CacheBehindGame; // 0xB8(0x8)
	bool NativeAudioOut; // 0xC0(0x1)
	bool PlayOnOpen; // 0xC1(0x1)
	uint8_t Shuffle : 1; // 0xC2(0x1), Mask(0x1)
	uint8_t Loop : 1; // 0xC2(0x1), Mask(0x2)
	uint8_t BitPad_0xC2_2 : 6; // 0xC2(0x1)
	uint8_t Pad_0xC3[0x5]; // 0xC3(0x5)
	struct UMediaPlaylist* Playlist; // 0xC8(0x8)
	int32_t PlaylistIndex; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
	struct FTimespan TimeDelay; // 0xD8(0x8)
	uint8_t Pad_0xE0[0x4]; // 0xE0(0x4)
	float HorizontalFieldOfView; // 0xE4(0x4)
	float VerticalFieldOfView; // 0xE8(0x4)
	struct FRotator ViewRotation; // 0xEC(0xC)
	uint8_t Pad_0xF8[0x28]; // 0xF8(0x28)
	struct FGuid PlayerGuid; // 0x120(0x10)
	uint8_t Pad_0x130[0x8]; // 0x130(0x8)


	// Object: Function MediaAssets.MediaPlayer.SupportsSeeking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b39b20
	// Params: [ Num(1) Size(0x1) ]
	bool SupportsSeeking();

	// Object: Function MediaAssets.MediaPlayer.SupportsScrubbing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b39b58
	// Params: [ Num(1) Size(0x1) ]
	bool SupportsScrubbing();

	// Object: Function MediaAssets.MediaPlayer.SupportsRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b39b90
	// Params: [ Num(3) Size(0x6) ]
	bool SupportsRate(float Rate, bool Unthinned);

	// Object: Function MediaAssets.MediaPlayer.SetViewRotation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9b39d30
	// Params: [ Num(3) Size(0xE) ]
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute);

	// Object: Function MediaAssets.MediaPlayer.SetViewField
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b39e3c
	// Params: [ Num(4) Size(0xA) ]
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);

	// Object: Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b39f78
	// Params: [ Num(4) Size(0xD) ]
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);

	// Object: Function MediaAssets.MediaPlayer.SetTrackFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a0ac
	// Params: [ Num(4) Size(0xD) ]
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.SetTimeDelay
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9b39c8c
	// Params: [ Num(1) Size(0x8) ]
	void SetTimeDelay(struct FTimespan TimeDelay);

	// Object: Function MediaAssets.MediaPlayer.SetRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a290
	// Params: [ Num(2) Size(0x5) ]
	bool SetRate(float Rate);

	// Object: Function MediaAssets.MediaPlayer.SetNativeVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a1dc
	// Params: [ Num(2) Size(0x5) ]
	bool SetNativeVolume(float Volume);

	// Object: Function MediaAssets.MediaPlayer.SetMediaOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a344
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaOptions(struct UMediaSource* options);

	// Object: Function MediaAssets.MediaPlayer.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a3ec
	// Params: [ Num(2) Size(0x2) ]
	bool SetLooping(bool Looping);

	// Object: Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a550
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredPlayerName(struct FName playerName);

	// Object: Function MediaAssets.MediaPlayer.SetCustomUniqueID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a4a8
	// Params: [ Num(1) Size(0x4) ]
	void SetCustomUniqueID(int32_t InUniqueID);

	// Object: Function MediaAssets.MediaPlayer.SetBlockOnTime
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9b3a5f8
	// Params: [ Num(1) Size(0x8) ]
	void SetBlockOnTime(struct FTimespan& Time);

	// Object: Function MediaAssets.MediaPlayer.SelectTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a6a8
	// Params: [ Num(3) Size(0x9) ]
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.Seek
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9b3a79c
	// Params: [ Num(2) Size(0x9) ]
	bool Seek(struct FTimespan& Time);

	// Object: Function MediaAssets.MediaPlayer.Rewind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a858
	// Params: [ Num(1) Size(0x1) ]
	bool Rewind();

	// Object: Function MediaAssets.MediaPlayer.Reopen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a890
	// Params: [ Num(1) Size(0x1) ]
	bool Reopen();

	// Object: Function MediaAssets.MediaPlayer.Previous
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a8c8
	// Params: [ Num(1) Size(0x1) ]
	bool Previous();

	// Object: Function MediaAssets.MediaPlayer.PlayAndSeek
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a900
	// Params: [ Num(0) Size(0x0) ]
	void PlayAndSeek();

	// Object: Function MediaAssets.MediaPlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a914
	// Params: [ Num(1) Size(0x1) ]
	bool Play();

	// Object: Function MediaAssets.MediaPlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a94c
	// Params: [ Num(1) Size(0x1) ]
	bool Pause();

	// Object: Function MediaAssets.MediaPlayer.OpenUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3a984
	// Params: [ Num(2) Size(0x11) ]
	bool OpenUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3ac34
	// Params: [ Num(3) Size(0x39) ]
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& options);

	// Object: Function MediaAssets.MediaPlayer.OpenSourceLatent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3aa44
	// Params: [ Num(5) Size(0x59) ]
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& options, bool& bSuccess);

	// Object: Function MediaAssets.MediaPlayer.OpenSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3ad50
	// Params: [ Num(2) Size(0x9) ]
	bool OpenSource(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3ae04
	// Params: [ Num(3) Size(0xD) ]
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index);

	// Object: Function MediaAssets.MediaPlayer.OpenPlaylist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3aef8
	// Params: [ Num(2) Size(0x9) ]
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist);

	// Object: Function MediaAssets.MediaPlayer.OpenFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3afb0
	// Params: [ Num(2) Size(0x11) ]
	bool OpenFile(struct FString FilePath);

	// Object: Function MediaAssets.MediaPlayer.Next
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3b070
	// Params: [ Num(1) Size(0x1) ]
	bool Next();

	// Object: Function MediaAssets.MediaPlayer.IsReady
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b0a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsReady();

	// Object: Function MediaAssets.MediaPlayer.IsPreparing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b118
	// Params: [ Num(1) Size(0x1) ]
	bool IsPreparing();

	// Object: Function MediaAssets.MediaPlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b150
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function MediaAssets.MediaPlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b188
	// Params: [ Num(1) Size(0x1) ]
	bool IsPaused();

	// Object: Function MediaAssets.MediaPlayer.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b1c0
	// Params: [ Num(1) Size(0x1) ]
	bool IsLooping();

	// Object: Function MediaAssets.MediaPlayer.IsConnecting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b1f8
	// Params: [ Num(1) Size(0x1) ]
	bool IsConnecting();

	// Object: Function MediaAssets.MediaPlayer.IsClosed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b0e0
	// Params: [ Num(1) Size(0x1) ]
	bool IsClosed();

	// Object: Function MediaAssets.MediaPlayer.IsBuffering
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b230
	// Params: [ Num(1) Size(0x1) ]
	bool IsBuffering();

	// Object: Function MediaAssets.MediaPlayer.HasError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b268
	// Params: [ Num(1) Size(0x1) ]
	bool HasError();

	// Object: Function MediaAssets.MediaPlayer.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b2d4
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetViewRotation();

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b30c
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b434
	// Params: [ Num(3) Size(0x18) ]
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b520
	// Params: [ Num(3) Size(0xC) ]
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b60c
	// Params: [ Num(3) Size(0x10) ]
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b6f8
	// Params: [ Num(3) Size(0xC) ]
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b7e4
	// Params: [ Num(1) Size(0x4) ]
	float GetVerticalFieldOfView();

	// Object: Function MediaAssets.MediaPlayer.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b818
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();

	// Object: Function MediaAssets.MediaPlayer.GetTrackLanguage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b894
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTrackFormat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b9bc
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTrackDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3baac
	// Params: [ Num(3) Size(0x20) ]
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetTimeStamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3bc08
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaTimeStampInfo* GetTimeStamp();

	// Object: Function MediaAssets.MediaPlayer.GetTimeDelay
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3b2a0
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetTimeDelay();

	// Object: Function MediaAssets.MediaPlayer.GetTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3bc3c
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetTime();

	// Object: Function MediaAssets.MediaPlayer.GetSupportedRates
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3bc70
	// Params: [ Num(2) Size(0x11) ]
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned);

	// Object: Function MediaAssets.MediaPlayer.GetSelectedTrack
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3bd7c
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType);

	// Object: Function MediaAssets.MediaPlayer.GetRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3be2c
	// Params: [ Num(1) Size(0x4) ]
	float GetRate();

	// Object: Function MediaAssets.MediaPlayer.GetPlaylistIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3be60
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPlaylistIndex();

	// Object: Function MediaAssets.MediaPlayer.GetPlaylist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3be7c
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlaylist* GetPlaylist();

	// Object: Function MediaAssets.MediaPlayer.GetPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3be98
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetPlayerName();

	// Object: Function MediaAssets.MediaPlayer.GetNumTracks
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3bfbc
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType);

	// Object: Function MediaAssets.MediaPlayer.GetNumTrackFormats
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3becc
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);

	// Object: Function MediaAssets.MediaPlayer.GetMediaName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c06c
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetMediaName();

	// Object: Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c144
	// Params: [ Num(1) Size(0x4) ]
	float GetHorizontalFieldOfView();

	// Object: Function MediaAssets.MediaPlayer.GetDuration
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c178
	// Params: [ Num(1) Size(0x8) ]
	struct FTimespan GetDuration();

	// Object: Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c1e0
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDesiredPlayerName();

	// Object: Function MediaAssets.MediaPlayer.GetCustomUniqueID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c1ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCustomUniqueID();

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c214
	// Params: [ Num(3) Size(0x18) ]
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c33c
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c428
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);

	// Object: Function MediaAssets.MediaPlayer.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3c514
	// Params: [ Num(0) Size(0x0) ]
	void Close();

	// Object: Function MediaAssets.MediaPlayer.CanPlayUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3c528
	// Params: [ Num(2) Size(0x11) ]
	bool CanPlayUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlayer.CanPlaySource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3c5e8
	// Params: [ Num(2) Size(0x9) ]
	bool CanPlaySource(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlayer.CanPause
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3c69c
	// Params: [ Num(1) Size(0x1) ]
	bool CanPause();
};

// Object: Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject
{
	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)


	// Object: Function MediaAssets.MediaPlaylist.Replace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3df1c
	// Params: [ Num(3) Size(0x11) ]
	bool Replace(int32_t Index, struct UMediaSource* Replacement);

	// Object: Function MediaAssets.MediaPlaylist.RemoveAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3e010
	// Params: [ Num(2) Size(0x5) ]
	bool RemoveAt(int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.Remove
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3e0c4
	// Params: [ Num(2) Size(0x9) ]
	bool Remove(struct UMediaSource* MediaSource);

	// Object: Function MediaAssets.MediaPlaylist.Num
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3e178
	// Params: [ Num(1) Size(0x4) ]
	int32_t Num();

	// Object: Function MediaAssets.MediaPlaylist.Insert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3e194
	// Params: [ Num(2) Size(0xC) ]
	void Insert(struct UMediaSource* MediaSource, int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.GetRandom
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3e27c
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetRandom(int32_t& OutIndex);

	// Object: Function MediaAssets.MediaPlaylist.GetPrevious
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3e338
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetPrevious(int32_t& InOutIndex);

	// Object: Function MediaAssets.MediaPlaylist.GetNext
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3e3f4
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* GetNext(int32_t& InOutIndex);

	// Object: Function MediaAssets.MediaPlaylist.Get
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3e4b0
	// Params: [ Num(2) Size(0x10) ]
	struct UMediaSource* Get(int32_t Index);

	// Object: Function MediaAssets.MediaPlaylist.AddUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3e560
	// Params: [ Num(2) Size(0x11) ]
	bool AddUrl(struct FString URL);

	// Object: Function MediaAssets.MediaPlaylist.AddFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3e620
	// Params: [ Num(2) Size(0x11) ]
	bool AddFile(struct FString FilePath);

	// Object: Function MediaAssets.MediaPlaylist.Add
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3e6e0
	// Params: [ Num(2) Size(0x9) ]
	bool Add(struct UMediaSource* MediaSource);
};

// Object: Class MediaAssets.MediaSoundComponent
// Size: 0xA20 (Inherited: 0x820)
struct UMediaSoundComponent : USynthComponent
{
	enum class EMediaSoundChannels Channels; // 0x820(0x4)
	bool DynamicRateAdjustment; // 0x824(0x1)
	uint8_t Pad_0x825[0x3]; // 0x825(0x3)
	float RateAdjustmentFactor; // 0x828(0x4)
	struct FFloatRange RateAdjustmentRange; // 0x82C(0x10)
	uint8_t Pad_0x83C[0x4]; // 0x83C(0x4)
	struct UMediaPlayer* MediaPlayer; // 0x840(0x8)
	uint8_t Pad_0x848[0x1D8]; // 0x848(0x1D8)


	// Object: Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3f1e0
	// Params: [ Num(2) Size(0x11) ]
	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize);

	// Object: Function MediaAssets.MediaSoundComponent.SetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3f3cc
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3efb0
	// Params: [ Num(2) Size(0x8) ]
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3f31c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);

	// Object: Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3f094
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);

	// Object: Function MediaAssets.MediaSoundComponent.GetSpectralData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b3f144
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();

	// Object: Function MediaAssets.MediaSoundComponent.GetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3f474
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlayer* GetMediaPlayer();

	// Object: Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b3ef7c
	// Params: [ Num(1) Size(0x4) ]
	float GetEnvelopeValue();

	// Object: Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b3f4a8
	// Params: [ Num(2) Size(0x3A1) ]
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings);
};

// Object: Class MediaAssets.MediaTexture
// Size: 0x190 (Inherited: 0xB8)
struct UMediaTexture : UTexture
{
	uint8_t AddressX; // 0xB8(0x1)
	uint8_t AddressY; // 0xB9(0x1)
	bool AutoClear; // 0xBA(0x1)
	uint8_t Pad_0xBB[0x1]; // 0xBB(0x1)
	struct FLinearColor ClearColor; // 0xBC(0x10)
	bool EnableGenMips; // 0xCC(0x1)
	uint8_t NumMips; // 0xCD(0x1)
	bool NewStyleOutput; // 0xCE(0x1)
	uint8_t OutputFormat; // 0xCF(0x1)
	float CurrentAspectRatio; // 0xD0(0x4)
	uint8_t CurrentOrientation; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	struct UMediaPlayer* MediaPlayer; // 0xD8(0x8)
	uint8_t Pad_0xE0[0xB0]; // 0xE0(0xB0)


	// Object: Function MediaAssets.MediaTexture.SetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b4047c
	// Params: [ Num(1) Size(0x8) ]
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer);

	// Object: Function MediaAssets.MediaTexture.GetWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b40524
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetWidth();

	// Object: Function MediaAssets.MediaTexture.GetMediaPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b40558
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaPlayer* GetMediaPlayer();

	// Object: Function MediaAssets.MediaTexture.GetHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b4058c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHeight();

	// Object: Function MediaAssets.MediaTexture.GetAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b405c0
	// Params: [ Num(1) Size(0x4) ]
	float GetAspectRatio();
};

// Object: Class MediaAssets.PlatformMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource
{
	struct UMediaSource* MediaSource; // 0x80(0x8)
};

// Object: Class MediaAssets.StreamMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource
{
	struct FString StreamUrl; // 0x88(0x10)
};

// Object: Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource
{
	bool bUseTimeSynchronization; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	int32_t FrameDelay; // 0x8C(0x4)
	double TimeDelay; // 0x90(0x8)
};

} // namespace SDK
