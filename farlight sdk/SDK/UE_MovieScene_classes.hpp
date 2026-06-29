// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MovieScene.MovieSceneSignedObject
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject
{
	struct FGuid Signature; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class MovieScene.MovieSceneSection
// Size: 0xD8 (Inherited: 0x50)
struct UMovieSceneSection : UMovieSceneSignedObject
{
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x50(0x2)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct FMovieSceneEasingSettings Easing; // 0x58(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x90(0x10)
	struct FFrameNumber PreRollFrames; // 0xA0(0x4)
	struct FFrameNumber PostRollFrames; // 0xA4(0x4)
	int32_t RowIndex; // 0xA8(0x4)
	int32_t OverlapPriority; // 0xAC(0x4)
	uint8_t bIsActive : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t bIsLocked : 1; // 0xB0(0x1), Mask(0x2)
	uint8_t BitPad_0xB0_2 : 6; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	float StartTime; // 0xB4(0x4)
	float EndTime; // 0xB8(0x4)
	float PrerollTime; // 0xBC(0x4)
	float PostrollTime; // 0xC0(0x4)
	uint8_t bIsInfinite : 1; // 0xC4(0x1), Mask(0x1)
	uint8_t BitPad_0xC4_1 : 7; // 0xC4(0x1)
	bool bSupportsInfiniteRange; // 0xC5(0x1)
	struct FOptionalMovieSceneBlendType BlendType; // 0xC6(0x2)
	uint8_t Pad_0xC8[0x10]; // 0xC8(0x10)


	// Object: Function MovieScene.MovieSceneSection.SetRowIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9744c70
	// Params: [ Num(1) Size(0x4) ]
	void SetRowIndex(int32_t NewRowIndex);

	// Object: Function MovieScene.MovieSceneSection.SetPreRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9744930
	// Params: [ Num(1) Size(0x4) ]
	void SetPreRollFrames(int32_t InPreRollFrames);

	// Object: Function MovieScene.MovieSceneSection.SetPostRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9744860
	// Params: [ Num(1) Size(0x4) ]
	void SetPostRollFrames(int32_t InPostRollFrames);

	// Object: Function MovieScene.MovieSceneSection.SetOverlapPriority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9744bb0
	// Params: [ Num(1) Size(0x4) ]
	void SetOverlapPriority(int32_t NewPriority);

	// Object: Function MovieScene.MovieSceneSection.SetIsLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9744a04
	// Params: [ Num(1) Size(0x1) ]
	void SetIsLocked(bool bInIsLocked);

	// Object: Function MovieScene.MovieSceneSection.SetIsActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9744adc
	// Params: [ Num(1) Size(0x1) ]
	void SetIsActive(bool bInIsActive);

	// Object: Function MovieScene.MovieSceneSection.SetCompletionMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9744de0
	// Params: [ Num(1) Size(0x1) ]
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode);

	// Object: Function MovieScene.MovieSceneSection.SetBlendType
	// Flags: [RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x9744d14
	// Params: [ Num(1) Size(0x1) ]
	void SetBlendType(enum class EMovieSceneBlendType InBlendType);

	// Object: Function MovieScene.MovieSceneSection.IsLocked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x97449e4
	// Params: [ Num(1) Size(0x1) ]
	bool IsLocked();

	// Object: Function MovieScene.MovieSceneSection.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9744abc
	// Params: [ Num(1) Size(0x1) ]
	bool IsActive();

	// Object: Function MovieScene.MovieSceneSection.GetRowIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9744c54
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRowIndex();

	// Object: Function MovieScene.MovieSceneSection.GetPreRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9744914
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPreRollFrames();

	// Object: Function MovieScene.MovieSceneSection.GetPostRollFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9744844
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPostRollFrames();

	// Object: Function MovieScene.MovieSceneSection.GetOverlapPriority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9744b94
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOverlapPriority();

	// Object: Function MovieScene.MovieSceneSection.GetCompletionMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9744e84
	// Params: [ Num(1) Size(0x1) ]
	enum class EMovieSceneCompletionMode GetCompletionMode();

	// Object: Function MovieScene.MovieSceneSection.GetBlendType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9744dc4
	// Params: [ Num(1) Size(0x2) ]
	struct FOptionalMovieSceneBlendType GetBlendType();
};

// Object: Class MovieScene.MovieSceneTrack
// Size: 0x58 (Inherited: 0x50)
struct UMovieSceneTrack : UMovieSceneSignedObject
{
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x50(0x4)
	uint8_t Pad_0x54[0x1]; // 0x54(0x1)
	bool bIsEvalDisabled; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
};

// Object: Class MovieScene.MovieSceneNameableTrack
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneNameableTrack : UMovieSceneTrack
{
};

// Object: Class MovieScene.MovieSceneSequence
// Size: 0x348 (Inherited: 0x50)
struct UMovieSceneSequence : UMovieSceneSignedObject
{
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x50(0x2F0)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x340(0x1)
	bool bParentContextsAreSignificant; // 0x341(0x1)
	bool bPlayableDirectly; // 0x342(0x1)
	uint8_t Pad_0x343[0x5]; // 0x343(0x5)


	// Object: Function MovieScene.MovieSceneSequence.FindBindingsByTag
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x97458d4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName);

	// Object: Function MovieScene.MovieSceneSequence.FindBindingByTag
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x97459c8
	// Params: [ Num(2) Size(0x20) ]
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName);
};

// Object: Class MovieScene.MovieSceneSubSection
// Size: 0x150 (Inherited: 0xD8)
struct UMovieSceneSubSection : UMovieSceneSection
{
	struct FMovieSceneSectionParameters Parameters; // 0xD8(0x24)
	float StartOffset; // 0xFC(0x4)
	float TimeScale; // 0x100(0x4)
	float PrerollTime; // 0x104(0x4)
	struct UMovieSceneSequence* SubSequence; // 0x108(0x8)
	struct TLazyObjectPtr<struct AActor> ActorToRecord; // 0x110(0x1C)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
	struct FString TargetSequenceName; // 0x130(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x140(0x10)


	// Object: Function MovieScene.MovieSceneSubSection.SetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974f8e4
	// Params: [ Num(1) Size(0x8) ]
	void SetSequence(struct UMovieSceneSequence* Sequence);

	// Object: Function MovieScene.MovieSceneSubSection.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974f98c
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneSequence* GetSequence();
};

// Object: Class MovieScene.MovieSceneSubTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Object: Class MovieScene.MovieSceneSequencePlayer
// Size: 0x888 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject
{
	uint8_t Pad_0x28[0x3E0]; // 0x28(0x3E0)
	struct FMulticastInlineDelegate OnPlay; // 0x408(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x418(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x428(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x438(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x448(0x10)
	uint8_t Status; // 0x458(0x1)
	uint8_t bReversePlayback : 1; // 0x459(0x1), Mask(0x1)
	uint8_t BitPad_0x459_1 : 7; // 0x459(0x1)
	uint8_t Pad_0x45A[0x6]; // 0x45A(0x6)
	struct UMovieSceneSequence* Sequence; // 0x460(0x8)
	struct FFrameNumber StartTime; // 0x468(0x4)
	int32_t DurationFrames; // 0x46C(0x4)
	int32_t CurrentNumLoops; // 0x470(0x4)
	uint8_t Pad_0x474[0x14]; // 0x474(0x14)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488(0x14)
	uint8_t Pad_0x49C[0x4]; // 0x49C(0x4)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4A0(0x320)
	uint8_t Pad_0x7C0[0x68]; // 0x7C0(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x828(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x838(0x10)
	uint8_t Pad_0x848[0x40]; // 0x848(0x40)


	// Object: Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e2dc
	// Params: [ Num(0) Size(0x0) ]
	void StopAtCurrentTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e2f0
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974db40
	// Params: [ Num(2) Size(0x8) ]
	void SetTimeRange(float StartTime, float Duration);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d38c
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayRate(float PlayRate);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974df60
	// Params: [ Num(2) Size(0x8) ]
	void SetPlaybackRange(float NewStartTime, float NewEndTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e044
	// Params: [ Num(1) Size(0x4) ]
	void SetPlaybackPosition(float NewPlaybackPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974dd50
	// Params: [ Num(1) Size(0x8) ]
	void SetFrameRate(struct FFrameRate FrameRate);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974dc24
	// Params: [ Num(2) Size(0x8) ]
	void SetFrameRange(int32_t StartFrame, int32_t Duration);

	// Object: Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d2d4
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableCameraCuts(bool bInDisableCameraCuts);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d7f8
	// Params: [ Num(1) Size(0x4) ]
	void ScrubToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d5d0
	// Params: [ Num(2) Size(0x11) ]
	bool ScrubToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d9f0
	// Params: [ Num(1) Size(0x8) ]
	void ScrubToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.Scrub
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e304
	// Params: [ Num(0) Size(0x0) ]
	void Scrub();

	// Object: Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0x974cf20
	// Params: [ Num(1) Size(0x8) ]
	void RPC_OnStopEvent(struct FFrameTime StoppedTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0x974cfd0
	// Params: [ Num(2) Size(0xC) ]
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d8a0
	// Params: [ Num(1) Size(0x4) ]
	void PlayToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d690
	// Params: [ Num(2) Size(0x11) ]
	bool PlayToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974da98
	// Params: [ Num(1) Size(0x8) ]
	void PlayToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e3e8
	// Params: [ Num(0) Size(0x0) ]
	void PlayReverse();

	// Object: Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e32c
	// Params: [ Num(1) Size(0x4) ]
	void PlayLooping(int32_t NumLoops);

	// Object: Function MovieScene.MovieSceneSequencePlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e3fc
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function MovieScene.MovieSceneSequencePlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e318
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d750
	// Params: [ Num(1) Size(0x4) ]
	void JumpToSeconds(float TimeInSeconds);

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974deb8
	// Params: [ Num(1) Size(0x4) ]
	void JumpToPosition(float NewPlaybackPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d510
	// Params: [ Num(2) Size(0x11) ]
	bool JumpToMarkedFrame(struct FString InLabel);

	// Object: Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d948
	// Params: [ Num(1) Size(0x8) ]
	void JumpToFrame(struct FFrameTime NewPosition);

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsReversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974d468
	// Params: [ Num(1) Size(0x1) ]
	bool IsReversed();

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974d4d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function MovieScene.MovieSceneSequencePlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974d4a0
	// Params: [ Num(1) Size(0x1) ]
	bool IsPaused();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e2c8
	// Params: [ Num(0) Size(0x0) ]
	void GoToEndAndStop();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974dd30
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetStartTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974d434
	// Params: [ Num(1) Size(0x4) ]
	float GetPlayRate();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974e19c
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackStart();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974e220
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackPosition();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974e140
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackEnd();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d0c0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject);

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974e1ec
	// Params: [ Num(1) Size(0x4) ]
	float GetLength();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974de00
	// Params: [ Num(1) Size(0x8) ]
	struct FFrameRate GetFrameRate();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974de1c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFrameDuration();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974dd08
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetEndTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974de50
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetDuration();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d2b4
	// Params: [ Num(1) Size(0x1) ]
	bool GetDisableCameraCuts();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x974de84
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetCurrentTime();

	// Object: Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974d1a8
	// Params: [ Num(2) Size(0x28) ]
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding);

	// Object: Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x974e3d4
	// Params: [ Num(0) Size(0x0) ]
	void ChangePlaybackDirection();
};

// Object: Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneCustomClockSource : IInterface
{

	// Object: Function MovieScene.MovieSceneCustomClockSource.OnTick
	// Flags: [Native|Public]
	// Offset: 0x9735090
	// Params: [ Num(2) Size(0x8) ]
	void OnTick(float DeltaSeconds, float InPlayRate);

	// Object: Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x9734f00
	// Params: [ Num(1) Size(0x10) ]
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime);

	// Object: Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x9734fc8
	// Params: [ Num(1) Size(0x10) ]
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime);

	// Object: Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x9734de8
	// Params: [ Num(3) Size(0x1C) ]
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
};

// Object: Class MovieScene.MovieScenePlaybackClient
// Size: 0x28 (Inherited: 0x28)
struct IMovieScenePlaybackClient : IInterface
{
};

// Object: Class MovieScene.MovieScene
// Size: 0x148 (Inherited: 0x50)
struct UMovieScene : UMovieSceneSignedObject
{
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x50(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x60(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x70(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x80(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xD0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xE0(0x8)
	struct FMovieSceneFrameRange SelectionRange; // 0xE8(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0xF8(0x10)
	struct FFrameRate TickResolution; // 0x108(0x8)
	struct FFrameRate DisplayRate; // 0x110(0x8)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x118(0x1)
	enum class EUpdateClockSource ClockSource; // 0x119(0x1)
	uint8_t Pad_0x11A[0x6]; // 0x11A(0x6)
	struct FSoftObjectPath CustomClockSourcePath; // 0x120(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x138(0x10)
};

// Object: Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject
{
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
	uint8_t Pad_0x38[0x58]; // 0x38(0x58)
};

// Object: Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneBindingOwnerInterface : IInterface
{
};

// Object: Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	enum class EMovieSceneBuiltInEasing Type; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UCurveFloat* Curve; // 0x30(0x8)
};

// Object: Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneEasingFunction : IInterface
{

	// Object: Function MovieScene.MovieSceneEasingFunction.OnEvaluate
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x8) ]
	float OnEvaluate(float Interp);
};

// Object: Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject
{
	struct FName FolderName; // 0x28(0x8)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
};

// Object: Class MovieScene.MovieSceneKeyProxy
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneKeyProxy : IInterface
{
};

// Object: Class MovieScene.TestMovieSceneTrack
// Size: 0x68 (Inherited: 0x58)
struct UTestMovieSceneTrack : UMovieSceneTrack
{
	bool bHighPassFilter; // 0x56(0x1)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x58(0x10)
};

// Object: Class MovieScene.TestMovieSceneSection
// Size: 0xD8 (Inherited: 0xD8)
struct UTestMovieSceneSection : UMovieSceneSection
{
};

// Object: Class MovieScene.TestMovieSceneSequence
// Size: 0x350 (Inherited: 0x348)
struct UTestMovieSceneSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene; // 0x348(0x8)
};

// Object: Class MovieScene.TestMovieSceneSubTrack
// Size: 0x78 (Inherited: 0x68)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack
{
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x68(0x10)
};

// Object: Class MovieScene.TestMovieSceneSubSection
// Size: 0x150 (Inherited: 0x150)
struct UTestMovieSceneSubSection : UMovieSceneSubSection
{
};

} // namespace SDK
