// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0x78 (Inherited: 0x58)
struct UMovieSceneSpawnTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	struct FGuid ObjectGuid; // 0x68(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x138 (Inherited: 0xD8)
struct UMovieSceneParameterSection : UMovieSceneSection
{
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xD8(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xE8(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0xF8(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x108(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x118(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x128(0x10)
};

// Object: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0x88 (Inherited: 0x58)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack
{
	struct UMovieSceneSection* SectionToKey; // 0x58(0x8)
	struct FName PropertyName; // 0x60(0x8)
	struct FString PropertyPath; // 0x68(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Object: Class MovieSceneTracks.SceneComponentTransformStandIn
// Size: 0x60 (Inherited: 0x28)
struct USceneComponentTransformStandIn : UObject
{
	uint8_t Pad_0x28[0x38]; // 0x28(0x38)
};

// Object: Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneTransformOrigin : IInterface
{

	// Object: Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	// Flags: [Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform BP_GetTransformOrigin();
};

// Object: Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x100 (Inherited: 0xD8)
struct UMovieScene3DConstraintSection : UMovieSceneSection
{
	struct FGuid ConstraintId; // 0xD8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xE8(0x18)


	// Object: Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x98342e8
	// Params: [ Num(1) Size(0x18) ]
	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID);

	// Object: Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x98343dc
	// Params: [ Num(1) Size(0x18) ]
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
};

// Object: Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x118 (Inherited: 0x100)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection
{
	struct FName AttachSocketName; // 0x100(0x8)
	struct FName AttachComponentName; // 0x108(0x8)
	enum class EAttachmentRule AttachmentLocationRule; // 0x110(0x1)
	enum class EAttachmentRule AttachmentRotationRule; // 0x111(0x1)
	enum class EAttachmentRule AttachmentScaleRule; // 0x112(0x1)
	enum class EDetachmentRule DetachmentLocationRule; // 0x113(0x1)
	enum class EDetachmentRule DetachmentRotationRule; // 0x114(0x1)
	enum class EDetachmentRule DetachmentScaleRule; // 0x115(0x1)
	uint8_t Pad_0x116[0x2]; // 0x116(0x2)
};

// Object: Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack
{
};

// Object: Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1A8 (Inherited: 0x100)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection
{
	struct FMovieSceneFloatChannel TimingCurve; // 0x100(0xA0)
	enum class EMovieScene3DPathSection_Axis FrontAxisEnum; // 0x1A0(0x1)
	enum class EMovieScene3DPathSection_Axis UpAxisEnum; // 0x1A1(0x1)
	uint8_t bFollow : 1; // 0x1A2(0x1), Mask(0x1)
	uint8_t bReverse : 1; // 0x1A2(0x1), Mask(0x2)
	uint8_t bForceUpright : 1; // 0x1A2(0x1), Mask(0x4)
	uint8_t BitPad_0x1A2_3 : 5; // 0x1A2(0x1)
	uint8_t Pad_0x1A3[0x5]; // 0x1A3(0x5)
};

// Object: Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack
{
};

// Object: Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x728 (Inherited: 0xD8)
struct UMovieScene3DTransformSection : UMovieSceneSection
{
	struct FMovieSceneTransformMask TransformMask; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0xE0(0x1E0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2C0(0x1E0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4A0(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x680(0xA0)
	uint8_t Pad_0x720[0x4]; // 0x720(0x4)
	bool bUseQuaternionInterpolation; // 0x724(0x1)
	uint8_t Pad_0x725[0x3]; // 0x725(0x3)
};

// Object: Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x218 (Inherited: 0xD8)
struct UMovieSceneActorReferenceSection : UMovieSceneSection
{
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xD8(0xB0)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x188(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x208(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x328 (Inherited: 0xD8)
struct UMovieSceneAudioSection : UMovieSceneSection
{
	struct USoundBase* Sound; // 0xD8(0x8)
	struct FFrameNumber StartFrameOffset; // 0xE0(0x4)
	float StartOffset; // 0xE4(0x4)
	float AudioStartTime; // 0xE8(0x4)
	float AudioDilationFactor; // 0xEC(0x4)
	float AudioVolume; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	struct FMovieSceneFloatChannel SoundVolume; // 0xF8(0xA0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x198(0xA0)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x238(0xB0)
	bool bSuppressSubtitles; // 0x2E8(0x1)
	bool bOverrideAttenuation; // 0x2E9(0x1)
	uint8_t Pad_0x2EA[0x6]; // 0x2EA(0x6)
	struct USoundAttenuation* AttenuationSettings; // 0x2F0(0x8)
	struct FDelegate OnQueueSubtitles; // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x308(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x318(0x10)


	// Object: Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x98358d0
	// Params: [ Num(1) Size(0x4) ]
	void SetStartOffset(struct FFrameNumber InStartOffset);

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9835990
	// Params: [ Num(1) Size(0x8) ]
	void SetSound(struct USoundBase* InSound);

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x98358b4
	// Params: [ Num(1) Size(0x4) ]
	struct FFrameNumber GetStartOffset();

	// Object: Function MovieSceneTracks.MovieSceneAudioSection.GetSound
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9835974
	// Params: [ Num(1) Size(0x8) ]
	struct USoundBase* GetSound();
};

// Object: Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x170 (Inherited: 0xD8)
struct UMovieSceneBoolSection : UMovieSceneSection
{
	bool DefaultValue; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct FMovieSceneBoolChannel BoolCurve; // 0xE0(0x90)
};

// Object: Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x170 (Inherited: 0xD8)
struct UMovieSceneByteSection : UMovieSceneSection
{
	struct FMovieSceneByteChannel ByteCurve; // 0xD8(0x98)
};

// Object: Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack
{
	struct UEnum* Enum; // 0x88(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x118 (Inherited: 0xD8)
struct UMovieSceneCameraAnimSection : UMovieSceneSection
{
	struct FMovieSceneCameraAnimSectionData AnimData; // 0xD8(0x20)
	struct UCameraAnim* CameraAnim; // 0xF8(0x8)
	float PlayRate; // 0x100(0x4)
	float PlayScale; // 0x104(0x4)
	float BlendInTime; // 0x108(0x4)
	float BlendOutTime; // 0x10C(0x4)
	bool bLooping; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)
};

// Object: Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x100 (Inherited: 0xD8)
struct UMovieSceneCameraCutSection : UMovieSceneSection
{
	struct FGuid CameraGuid; // 0xD8(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0xE8(0x18)


	// Object: Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9836c74
	// Params: [ Num(1) Size(0x18) ]
	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID);

	// Object: Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9836d68
	// Params: [ Num(1) Size(0x18) ]
	struct FMovieSceneObjectBindingID GetCameraBindingID();
};

// Object: Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
{
	bool bCanBlend; // 0x56(0x1)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x118 (Inherited: 0xD8)
struct UMovieSceneCameraShakeSection : UMovieSceneSection
{
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xD8(0x20)
	struct UCameraShake* ShakeClass; // 0xF8(0x8)
	float PlayScale; // 0x100(0x4)
	uint8_t PlaySpace; // 0x104(0x1)
	uint8_t Pad_0x105[0x3]; // 0x105(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x108(0xC)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x178 (Inherited: 0x150)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection
{
	struct FString ShotDisplayName; // 0x150(0x10)
	struct FText DisplayName; // 0x160(0x18)


	// Object: Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x983d320
	// Params: [ Num(1) Size(0x10) ]
	void SetShotDisplayName(struct FString InShotDisplayName);

	// Object: Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x983d42c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetShotDisplayName();
};

// Object: Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x358 (Inherited: 0xD8)
struct UMovieSceneColorSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel RedCurve; // 0xD8(0xA0)
	struct FMovieSceneFloatChannel GreenCurve; // 0x178(0xA0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x218(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2B8(0xA0)
};

// Object: Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack
{
	bool bIsSlateColor; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x170 (Inherited: 0xD8)
struct UMovieSceneEnumSection : UMovieSceneSection
{
	struct FMovieSceneByteChannel EnumCurve; // 0xD8(0x98)
};

// Object: Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack
{
	struct UEnum* Enum; // 0x88(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xD8 (Inherited: 0xD8)
struct UMovieSceneEventSectionBase : UMovieSceneSection
{
};

// Object: Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x100 (Inherited: 0xD8)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase
{
	struct FMovieSceneEvent Event; // 0xD8(0x28)
};

// Object: Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1D8 (Inherited: 0xD8)
struct UMovieSceneEventSection : UMovieSceneSection
{
	struct FNameCurve Events; // 0xD8(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x150(0x88)
};

// Object: Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x78 (Inherited: 0x58)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack
{
	uint8_t bFireEventsWhenForwards : 1; // 0x56(0x1), Mask(0x1)
	uint8_t bFireEventsWhenBackwards : 1; // 0x56(0x1), Mask(0x2)
	enum class EFireEventsAtPosition EventPosition; // 0x57(0x1)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x58(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x68(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x160 (Inherited: 0xD8)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase
{
	struct FMovieSceneEventChannel EventChannel; // 0xD8(0x88)
};

// Object: Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x178 (Inherited: 0xD8)
struct UMovieSceneFloatSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel FloatCurve; // 0xD8(0xA0)
};

// Object: Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x190 (Inherited: 0x178)
struct UMovieSceneFadeSection : UMovieSceneFloatSection
{
	struct FLinearColor FadeColor; // 0x178(0x10)
	uint8_t bFadeAudio : 1; // 0x188(0x1), Mask(0x1)
	uint8_t BitPad_0x188_1 : 7; // 0x188(0x1)
	uint8_t Pad_0x189[0x7]; // 0x189(0x7)
};

// Object: Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x168 (Inherited: 0xD8)
struct UMovieSceneIntegerSection : UMovieSceneSection
{
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xD8(0x90)
};

// Object: Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0xF0 (Inherited: 0xD8)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection
{
	enum class ELevelVisibility Visibility; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct TArray<struct FName> LevelNames; // 0xE0(0x10)


	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x983fd74
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibility(enum class ELevelVisibility InVisibility);

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x983fbdc
	// Params: [ Num(1) Size(0x10) ]
	void SetLevelNames(struct TArray<struct FName>& InLevelNames);

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x983fe1c
	// Params: [ Num(1) Size(0x1) ]
	enum class ELevelVisibility GetVisibility();

	// Object: Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x983fcf8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetLevelNames();
};

// Object: Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x70 (Inherited: 0x68)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack
{
	struct UMaterialParameterCollection* MPC; // 0x68(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x70 (Inherited: 0x68)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack
{
	int32_t MaterialIndex; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x198 (Inherited: 0xD8)
struct UMovieSceneObjectPropertySection : UMovieSceneSection
{
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xD8(0xC0)
};

// Object: Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack
{
	struct UObject* PropertyClass; // 0x88(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x170 (Inherited: 0xD8)
struct UMovieSceneParticleSection : UMovieSceneSection
{
	struct FMovieSceneParticleChannel ParticleKeys; // 0xD8(0x98)
};

// Object: Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x58(0x10)
};

// Object: Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x198 (Inherited: 0xD8)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection
{
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xD8(0xC0)
};

// Object: Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack
{
	int32_t MaterialIndex; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x1D8 (Inherited: 0xD8)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection
{
	struct FMovieSceneSkeletalAnimationParams Params; // 0xD8(0xD8)
	struct UAnimSequence* AnimSequence; // 0x1B0(0x8)
	struct UAnimSequenceBase* Animation; // 0x1B8(0x8)
	float StartOffset; // 0x1C0(0x4)
	float EndOffset; // 0x1C4(0x4)
	float PlayRate; // 0x1C8(0x4)
	uint8_t bReverse : 1; // 0x1CC(0x1), Mask(0x1)
	uint8_t BitPad_0x1CC_1 : 7; // 0x1CC(0x1)
	uint8_t Pad_0x1CD[0x3]; // 0x1CD(0x3)
	struct FName SlotName; // 0x1D0(0x8)
};

// Object: Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x58(0x10)
	bool bUseLegacySectionIndexBlend; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x178 (Inherited: 0x178)
struct UMovieSceneSlomoSection : UMovieSceneFloatSection
{
};

// Object: Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneSpawnSection
// Size: 0x170 (Inherited: 0x170)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection
{
};

// Object: Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x178 (Inherited: 0xD8)
struct UMovieSceneStringSection : UMovieSceneSection
{
	struct FMovieSceneStringChannel StringCurve; // 0xD8(0xA0)
};

// Object: Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack
{
};

// Object: Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x360 (Inherited: 0xD8)
struct UMovieSceneVectorSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel Curves[0x4]; // 0xD8(0x280)
	int32_t ChannelsUsed; // 0x358(0x4)
	uint8_t Pad_0x35C[0x4]; // 0x35C(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack
{
	int32_t NumChannelsUsed; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack
{
};

} // namespace SDK
