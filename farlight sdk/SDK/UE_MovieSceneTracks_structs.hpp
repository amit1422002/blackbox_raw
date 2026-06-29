// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Object: Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Object: Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Object: Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size: 0xA8 (Inherited: 0x18)
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneBoolChannel Curve; // 0x18(0x90)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x78 (Inherited: 0x18)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x18(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x28(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x38(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x48(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x58(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x68(0x10)
};

// Object: ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5A8 (Inherited: 0x0)
struct FTransformParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x8(0x1E0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x1E8(0x1E0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x3C8(0x1E0)
};

// Object: ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x288 (Inherited: 0x0)
struct FColorParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel RedCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel GreenCurve; // 0xA8(0xA0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x148(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x1E8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x1E8 (Inherited: 0x0)
struct FVectorParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve; // 0xA8(0xA0)
	struct FMovieSceneFloatChannel ZCurve; // 0x148(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x148 (Inherited: 0x0)
struct FVector2DParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve; // 0xA8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0x98 (Inherited: 0x0)
struct FBoolParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x8(0x90)
};

// Object: ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xA8 (Inherited: 0x0)
struct FScalarParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size: 0x48 (Inherited: 0x18)
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID AttachBindingID; // 0x14(0x18)
	struct FName AttachSocketName; // 0x2C(0x8)
	struct FName AttachComponentName; // 0x34(0x8)
	enum class EAttachmentRule AttachmentLocationRule; // 0x3C(0x1)
	enum class EAttachmentRule AttachmentRotationRule; // 0x3D(0x1)
	enum class EAttachmentRule AttachmentScaleRule; // 0x3E(0x1)
	enum class EDetachmentRule DetachmentLocationRule; // 0x3F(0x1)
	enum class EDetachmentRule DetachmentRotationRule; // 0x40(0x1)
	enum class EDetachmentRule DetachmentScaleRule; // 0x41(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xD8 (Inherited: 0x18)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID PathBindingID; // 0x14(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x30(0xA0)
	enum class EMovieScene3DPathSection_Axis FrontAxisEnum; // 0xD0(0x1)
	enum class EMovieScene3DPathSection_Axis UpAxisEnum; // 0xD1(0x1)
	uint8_t bFollow : 1; // 0xD2(0x1), Mask(0x1)
	uint8_t bReverse : 1; // 0xD2(0x1), Mask(0x2)
	uint8_t bForceUpright : 1; // 0xD2(0x1), Mask(0x4)
	uint8_t BitPad_0xD2_3 : 5; // 0xD2(0x1)
	uint8_t Pad_0xD3[0x5]; // 0xD3(0x5)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTransformMask
{
	uint32_t Mask; // 0x0(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x48 (Inherited: 0x8)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location; // 0x8(0xC)
	struct FRotator Rotation; // 0x14(0xC)
	struct FVector Scale; // 0x20(0xC)
	struct FFrameNumber Time; // 0x2C(0x4)
	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Scale; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{
	struct FRotator Rotation; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// Size: 0x668 (Inherited: 0x18)
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x18(0x650)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size: 0x650 (Inherited: 0x0)
struct FMovieScene3DTransformTemplateData
{
	struct FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0(0x1E0)
	struct FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1E0(0x1E0)
	struct FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3C0(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x5A0(0xA0)
	enum class EMovieSceneBlendType BlendType; // 0x640(0x1)
	uint8_t Pad_0x641[0x3]; // 0x641(0x3)
	struct FMovieSceneTransformMask Mask; // 0x644(0x4)
	bool bUseQuaternionInterpolation; // 0x648(0x1)
	uint8_t Pad_0x649[0x7]; // 0x649(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xB0 (Inherited: 0x8)
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	uint8_t Pad_0x18[0x28]; // 0x18(0x28)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x40(0x10)
	uint8_t Pad_0x50[0x60]; // 0x50(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID Object; // 0x0(0x18)
	struct FName ComponentName; // 0x18(0x8)
	struct FName SocketName; // 0x20(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xF0 (Inherited: 0x18)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x28)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x40(0xB0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAudioSection* AudioSection; // 0x18(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneCameraAnimSectionData
{
	struct UCameraAnim* CameraAnim; // 0x0(0x8)
	float PlayRate; // 0x8(0x4)
	float PlayScale; // 0xC(0x4)
	float BlendInTime; // 0x10(0x4)
	float BlendOutTime; // 0x14(0x4)
	bool bLooping; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x18(0x20)
	struct FFrameNumber SectionStartTime; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneCameraShakeSectionData
{
	struct UCameraShake* ShakeClass; // 0x0(0x8)
	float PlayScale; // 0x8(0x4)
	uint8_t PlaySpace; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x18(0x20)
	struct FFrameNumber SectionStartTime; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size: 0x70 (Inherited: 0x18)
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x14(0x18)
	struct FTransform CutTransform; // 0x30(0x30)
	bool bHasCutTransform; // 0x60(0x1)
	bool bIsFinalSection; // 0x61(0x1)
	uint8_t Pad_0x62[0xE]; // 0x62(0xE)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38 (Inherited: 0x8)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{
	struct FLinearColor Color; // 0x8(0x10)
	struct FFrameNumber Time; // 0x18(0x4)
	uint8_t Pad_0x1C[0x1C]; // 0x1C(0x1C)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2C8 (Inherited: 0x40)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x40(0x280)
	enum class EMovieSceneBlendType BlendType; // 0x2C0(0x1)
	uint8_t Pad_0x2C1[0x7]; // 0x2C1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEvent
{
	struct FMovieSceneEventPtrs Ptrs; // 0x0(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEventPtrs
{
	struct UFunction* Function; // 0x0(0x8)
	struct TFieldPath<FProperty> BoundObjectProperty; // 0x8(0x20)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEventPayloadVariable
{
	struct FString Value; // 0x0(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x88 (Inherited: 0x8)
struct FMovieSceneEventChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18(0x10)
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x88 (Inherited: 0x8)
struct FMovieSceneEventSectionData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x18(0x10)
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
};

// Object: ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30 (Inherited: 0x0)
struct FEventPayload
{
	struct FName EventName; // 0x0(0x8)
	struct FMovieSceneEventParameters Parameters; // 0x8(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEventParameters
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// Size: 0x30 (Inherited: 0x18)
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate
{
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x18(0x10)
	uint8_t bFireEventsWhenForwards : 1; // 0x28(0x1), Mask(0x1)
	uint8_t bFireEventsWhenBackwards : 1; // 0x28(0x1), Mask(0x2)
	uint8_t BitPad_0x28_2 : 6; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// Size: 0x58 (Inherited: 0x30)
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase
{
	struct FMovieSceneEventPtrs EventToTrigger; // 0x30(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// Size: 0x50 (Inherited: 0x30)
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase
{
	struct TArray<struct FFrameNumber> EventTimes; // 0x30(0x10)
	struct TArray<struct FMovieSceneEventPtrs> Events; // 0x40(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xB8 (Inherited: 0x30)
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase
{
	struct FMovieSceneEventSectionData EventData; // 0x30(0x88)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xD0 (Inherited: 0x18)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel FadeCurve; // 0x18(0xA0)
	struct FLinearColor FadeColor; // 0xB8(0x10)
	uint8_t bFadeAudio : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size: 0x28 (Inherited: 0x18)
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate
{
	enum class ELevelVisibility Visibility; // 0x14(0x1)
	struct TArray<struct FName> LevelNames; // 0x18(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x80 (Inherited: 0x78)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct UMaterialParameterCollection* MPC; // 0x78(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x100 (Inherited: 0x40)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x40(0xC0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x80 (Inherited: 0x78)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	int32_t MaterialIndex; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x78 (Inherited: 0x78)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x98 (Inherited: 0x98)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0xB0 (Inherited: 0x18)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneParticleChannel ParticleKeys; // 0x18(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0xD8 (Inherited: 0x18)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
{
	int32_t MaterialIndex; // 0x14(0x4)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x18(0xC0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// Size: 0x690 (Inherited: 0x40)
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x40(0x650)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// Size: 0x690 (Inherited: 0x40)
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x40(0x650)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x2C8 (Inherited: 0x40)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x40(0x280)
	int32_t NumChannelsUsed; // 0x2C0(0x4)
	enum class EMovieSceneBlendType BlendType; // 0x2C4(0x1)
	uint8_t Pad_0x2C5[0x3]; // 0x2C5(0x3)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xE0 (Inherited: 0x40)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel StringCurve; // 0x40(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xA0 (Inherited: 0x8)
struct FMovieSceneStringChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	struct TArray<struct FString> Values; // 0x18(0x10)
	struct FString DefaultValue; // 0x28(0x10)
	bool bHasDefaultValue; // 0x38(0x1)
	uint8_t Pad_0x39[0x67]; // 0x39(0x67)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xD8 (Inherited: 0x40)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x40(0x90)
	enum class EMovieSceneBlendType BlendType; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xD8 (Inherited: 0x40)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel EnumCurve; // 0x40(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xD8 (Inherited: 0x40)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel ByteCurve; // 0x40(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size: 0xE8 (Inherited: 0x40)
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel FloatFunction; // 0x40(0xA0)
	enum class EMovieSceneBlendType BlendType; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xD0 (Inherited: 0x40)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneBoolChannel BoolCurve; // 0x40(0x90)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0xD8 (Inherited: 0x0)
struct FMovieSceneSkeletalAnimationParams
{
	struct UAnimSequenceBase* Animation; // 0x0(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
	struct FFrameNumber StartFrameOffset; // 0xC(0x4)
	struct FFrameNumber EndFrameOffset; // 0x10(0x4)
	float PlayRate; // 0x14(0x4)
	uint8_t bReverse : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName SlotName; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FMovieSceneFloatChannel Weight; // 0x28(0xA0)
	bool bSkipAnimNotifiers; // 0xC8(0x1)
	bool bForceCustomMode; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x2]; // 0xCA(0x2)
	float StartOffset; // 0xCC(0x4)
	float EndOffset; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0xF8 (Inherited: 0x18)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x18(0xE0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xE0 (Inherited: 0xD8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
{
	struct FFrameNumber SectionStartTime; // 0xD4(0x4)
	struct FFrameNumber SectionEndTime; // 0xD8(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xB8 (Inherited: 0x18)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel SlomoCurve; // 0x18(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x28 (Inherited: 0x8)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
{
	struct FFrameNumber Time; // 0x8(0x4)
	uint8_t Pad_0xC[0x1C]; // 0xC(0x1C)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector4 Vector; // 0x30(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
{
	struct FVector Vector; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x30 (Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
{
	struct FVector2D Vector; // 0x28(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xD0 (Inherited: 0xD0)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{
};

} // namespace SDK
