// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class LevelSequence.LevelSequence
// Size: 0x498 (Inherited: 0x348)
struct ULevelSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene; // 0x348(0x8)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x350(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x3A0(0xA0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x440(0x50)
	struct UObject* DirectorClass; // 0x490(0x8)


	// Object: Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b4f3c8
	// Params: [ Num(1) Size(0x8) ]
	void RemoveMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b4f4f8
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.FindMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b4f598
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* FindMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.CopyMetaData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b4f458
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* CopyMetaData(struct UObject* InMetaData);
};

// Object: Class LevelSequence.LevelSequenceActor
// Size: 0x370 (Inherited: 0x2E0)
struct ALevelSequenceActor : AActor
{
	uint8_t Pad_0x2E0[0x10]; // 0x2E0(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2F0(0x14)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)
	struct ULevelSequencePlayer* SequencePlayer; // 0x308(0x8)
	struct FSoftObjectPath LevelSequence; // 0x310(0x18)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x328(0x10)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x338(0x2)
	uint8_t Pad_0x33A[0x6]; // 0x33A(0x6)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x340(0x8)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x348(0x8)
	uint8_t bAutoPlay : 1; // 0x350(0x1), Mask(0x1)
	uint8_t bOverrideInstanceData : 1; // 0x350(0x1), Mask(0x2)
	uint8_t bReplicatePlayback : 1; // 0x350(0x1), Mask(0x4)
	uint8_t BitPad_0x350_3 : 5; // 0x350(0x1)
	uint8_t Pad_0x351[0x7]; // 0x351(0x7)
	struct UObject* DefaultInstanceData; // 0x358(0x8)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x360(0x8)
	bool bShowBurnin; // 0x368(0x1)
	uint8_t Pad_0x369[0x7]; // 0x369(0x7)


	// Object: Function LevelSequence.LevelSequenceActor.ShowBurnin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b50c88
	// Params: [ Num(0) Size(0x0) ]
	void ShowBurnin();

	// Object: Function LevelSequence.LevelSequenceActor.SetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b50ed8
	// Params: [ Num(1) Size(0x8) ]
	void SetSequence(struct ULevelSequence* InSequence);

	// Object: Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b50ce4
	// Params: [ Num(1) Size(0x1) ]
	void SetReplicatePlayback(bool ReplicatePlayback);

	// Object: Function LevelSequence.LevelSequenceActor.SetEventReceivers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b50d94
	// Params: [ Num(1) Size(0x10) ]
	void SetEventReceivers(struct TArray<struct AActor*> AdditionalReceivers);

	// Object: Function LevelSequence.LevelSequenceActor.SetBindingByTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b509cc
	// Params: [ Num(3) Size(0x19) ]
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.SetBinding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b50b18
	// Params: [ Num(3) Size(0x29) ]
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.ResetBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b5047c
	// Params: [ Num(0) Size(0x0) ]
	void ResetBindings();

	// Object: Function LevelSequence.LevelSequenceActor.ResetBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b50490
	// Params: [ Num(1) Size(0x18) ]
	void ResetBinding(struct FMovieSceneObjectBindingID Binding);

	// Object: Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b5055c
	// Params: [ Num(2) Size(0x10) ]
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor);

	// Object: Function LevelSequence.LevelSequenceActor.RemoveBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b50640
	// Params: [ Num(2) Size(0x20) ]
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor);

	// Object: DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnLevelSequenceLoaded__DelegateSignature();

	// Object: Function LevelSequence.LevelSequenceActor.LoadSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b50f80
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequence* LoadSequence();

	// Object: Function LevelSequence.LevelSequenceActor.HideBurnin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b50c9c
	// Params: [ Num(0) Size(0x0) ]
	void HideBurnin();

	// Object: Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b50cb0
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequencePlayer* GetSequencePlayer();

	// Object: Function LevelSequence.LevelSequenceActor.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b50fb4
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequence* GetSequence();

	// Object: Function LevelSequence.LevelSequenceActor.FindNamedBindings
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b502c0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag);

	// Object: Function LevelSequence.LevelSequenceActor.FindNamedBinding
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b503b4
	// Params: [ Num(2) Size(0x20) ]
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag);

	// Object: Function LevelSequence.LevelSequenceActor.AddBindingByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b5074c
	// Params: [ Num(3) Size(0x11) ]
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.AddBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b50878
	// Params: [ Num(3) Size(0x21) ]
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset);
};

// Object: Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct AActor* TransformOriginActor; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Object: Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ILevelSequenceMetaData : IInterface
{
};

// Object: Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject
{
};

// Object: Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject
{
	bool bUseBurnIn; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x8)


	// Object: Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9b4fe70
	// Params: [ Num(1) Size(0x18) ]
	void SetBurnIn(struct FSoftClassPath InBurnInClass);
};

// Object: Class LevelSequence.LevelSequenceBurnIn
// Size: 0x328 (Inherited: 0x268)
struct ULevelSequenceBurnIn : UUserWidget
{
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x268(0xB8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x320(0x8)


	// Object: Function LevelSequence.LevelSequenceBurnIn.SetSettings
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void SetSettings(struct UObject* InSettings);

	// Object: Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x9b51b6c
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass();
};

// Object: Class LevelSequence.LevelSequenceDirector
// Size: 0x38 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject
{
	struct ULevelSequencePlayer* Player; // 0x28(0x8)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)


	// Object: Function LevelSequence.LevelSequenceDirector.OnCreated
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnCreated();
};

// Object: Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xA0 (Inherited: 0xA0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint
{
};

// Object: Class LevelSequence.LevelSequencePlayer
// Size: 0x9A8 (Inherited: 0x888)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer
{
	struct FMulticastInlineDelegate OnCameraCut; // 0x888(0x10)
	uint8_t Pad_0x898[0x110]; // 0x898(0x110)


	// Object: Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b52884
	// Params: [ Num(1) Size(0x8) ]
	struct UCameraComponent* GetActiveCameraComponent();

	// Object: Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b528bc
	// Params: [ Num(5) Size(0x38) ]
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor);
};

// Object: Class LevelSequence.LevelSequenceMediaController
// Size: 0x308 (Inherited: 0x2E0)
struct ALevelSequenceMediaController : AActor
{
	uint8_t Pad_0x2E0[0x8]; // 0x2E0(0x8)
	struct ALevelSequenceActor* Sequence; // 0x2E8(0x8)
	struct UMediaComponent* MediaComponent; // 0x2F0(0x8)
	float ServerStartTimeSeconds; // 0x2F8(0x4)
	uint8_t Pad_0x2FC[0xC]; // 0x2FC(0xC)


	// Object: Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b52d48
	// Params: [ Num(1) Size(0x4) ]
	void SynchronizeToServer(float DesyncThresholdSeconds);

	// Object: Function LevelSequence.LevelSequenceMediaController.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b52e28
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// Flags: [Final|Native|Private]
	// Offset: 0x9b52d34
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ServerStartTimeSeconds();

	// Object: Function LevelSequence.LevelSequenceMediaController.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b52df0
	// Params: [ Num(1) Size(0x8) ]
	struct ALevelSequenceActor* GetSequence();

	// Object: Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b52e0c
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaComponent* GetMediaComponent();
};

} // namespace SDK
