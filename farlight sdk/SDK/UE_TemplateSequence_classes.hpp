// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class TemplateSequence.TemplateSequence
// Size: 0x3F0 (Inherited: 0x348)
struct UTemplateSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene; // 0x348(0x8)
	struct TSoftClassPtr<struct AActor*> BoundActorClass; // 0x350(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x378(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0x3A0(0x50)
};

// Object: Class TemplateSequence.CameraAnimationSequence
// Size: 0x3F0 (Inherited: 0x3F0)
struct UCameraAnimationSequence : UTemplateSequence
{
};

// Object: Class TemplateSequence.TemplateSequenceActor
// Size: 0x330 (Inherited: 0x2E0)
struct ATemplateSequenceActor : AActor
{
	uint8_t Pad_0x2E0[0x8]; // 0x2E0(0x8)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2E8(0x14)
	uint8_t Pad_0x2FC[0x4]; // 0x2FC(0x4)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x300(0x8)
	struct FSoftObjectPath TemplateSequence; // 0x308(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x320(0xC)
	uint8_t Pad_0x32C[0x4]; // 0x32C(0x4)


	// Object: Function TemplateSequence.TemplateSequenceActor.SetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e86880
	// Params: [ Num(1) Size(0x8) ]
	void SetSequence(struct UTemplateSequence* InSequence);

	// Object: Function TemplateSequence.TemplateSequenceActor.SetBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5e867a4
	// Params: [ Num(1) Size(0x8) ]
	void SetBinding(struct AActor* Actor);

	// Object: Function TemplateSequence.TemplateSequenceActor.LoadSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e86928
	// Params: [ Num(1) Size(0x8) ]
	struct UTemplateSequence* LoadSequence();

	// Object: Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e8684c
	// Params: [ Num(1) Size(0x8) ]
	struct UTemplateSequencePlayer* GetSequencePlayer();

	// Object: Function TemplateSequence.TemplateSequenceActor.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5e8695c
	// Params: [ Num(1) Size(0x8) ]
	struct UTemplateSequence* GetSequence();
};

// Object: Class TemplateSequence.TemplateSequencePlayer
// Size: 0x890 (Inherited: 0x888)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer
{
	uint8_t Pad_0x888[0x8]; // 0x888(0x8)


	// Object: Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5e86fe0
	// Params: [ Num(5) Size(0x38) ]
	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor);
};

// Object: Class TemplateSequence.TemplateSequenceSection
// Size: 0x150 (Inherited: 0x150)
struct UTemplateSequenceSection : UMovieSceneSubSection
{
};

// Object: Class TemplateSequence.TemplateSequenceTrack
// Size: 0x68 (Inherited: 0x68)
struct UTemplateSequenceTrack : UMovieSceneSubTrack
{
};

} // namespace SDK
