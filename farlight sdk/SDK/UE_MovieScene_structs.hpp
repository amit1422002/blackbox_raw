// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};

// Object: Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	EMovieSceneBlendType_MAX = 5
};

// Object: Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22
};

// Object: Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Object: Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6
};

// Object: Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2
};

// Object: Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7
};

// Object: Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};

// Object: Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
};

// Object: Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Object: Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3
};

// Object: Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEvalTemplateBase
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x18 (Inherited: 0x10)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{
	enum class EMovieSceneCompletionMode CompletionMode; // 0x9(0x1)
	struct TWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; // 0xC(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneChannel
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneChannel
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x90 (Inherited: 0x8)
struct FMovieSceneBoolChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	bool DefaultValue; // 0x18(0x1)
	bool bHasDefaultValue; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct TArray<bool> Values; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneSequenceInstanceData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneEvaluationOperand
{
	struct FGuid ObjectBindingID; // 0x0(0x10)
	struct FMovieSceneSequenceID SequenceID; // 0x10(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSequenceID
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0xA0 (Inherited: 0x8)
struct FMovieSceneFloatChannel : FMovieSceneChannel
{
	uint8_t PreInfinityExtrap; // 0x8(0x1)
	uint8_t PostInfinityExtrap; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x4)
	bool bHasDefaultValue; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x38(0x60)
	struct FFrameRate TickResolution; // 0x98(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x60 (Inherited: 0x60)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{
};

// Object: ScriptStruct MovieScene.MovieSceneFloatValue
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneFloatValue
{
	float Value; // 0x0(0x4)
	struct FMovieSceneTangentData Tangent; // 0x4(0x14)
	uint8_t InterpMode; // 0x18(0x1)
	uint8_t TangentMode; // 0x19(0x1)
	uint8_t PaddingByte; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneTangentData
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneTangentData
{
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	float ArriveTangentWeight; // 0x8(0x4)
	float LeaveTangentWeight; // 0xC(0x4)
	uint8_t TangentWeightMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x28)
};

// Object: ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x28 (Inherited: 0x0)
struct FMovieScenePropertySectionData
{
	struct FName PropertyName; // 0x0(0x8)
	struct FString PropertyPath; // 0x8(0x10)
	struct FName FunctionName; // 0x18(0x8)
	struct FName NotifyFunctionName; // 0x20(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionGroup
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneSectionGroup
{
	struct TArray<struct TWeakObjectPtr<struct UMovieSceneSection>> Sections; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneObjectBindingIDs
{
	struct TArray<struct FMovieSceneObjectBindingID> Ids; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneObjectBindingID
{
	int32_t SequenceID; // 0x0(0x4)
	enum class EMovieSceneObjectBindingSpace Space; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FGuid Guid; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackLabels
{
	struct TArray<struct FString> Strings; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0xF0 (Inherited: 0x0)
struct FMovieSceneEditorData
{
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x0(0x50)
	struct TArray<struct FString> PinnedNodes; // 0x50(0x10)
	double ViewStart; // 0x60(0x8)
	double ViewEnd; // 0x68(0x8)
	double WorkStart; // 0x70(0x8)
	double WorkEnd; // 0x78(0x8)
	struct TSet<struct FFrameNumber> MarkedFrames; // 0x80(0x50)
	struct FFloatRange WorkingRange; // 0xD0(0x10)
	struct FFloatRange ViewRange; // 0xE0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x1 (Inherited: 0x0)
struct FMovieSceneExpansionState
{
	bool bExpanded; // 0x0(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneMarkedFrame
{
	struct FFrameNumber FrameNumber; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString Label; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneTimecodeSource
{
	struct FTimecode Timecode; // 0x0(0x14)
	struct FFrameNumber DeltaFrame; // 0x14(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneBinding
{
	struct FGuid ObjectGuid; // 0x0(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x0)
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID ObjectBindingID; // 0x0(0x18)
	struct TWeakObjectPtr<struct UObject> Object; // 0x18(0x8)
	bool bOverridesDefault; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x2 (Inherited: 0x0)
struct FOptionalMovieSceneBlendType
{
	enum class EMovieSceneBlendType BlendType; // 0x0(0x1)
	bool bIsValid; // 0x1(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0x98 (Inherited: 0x8)
struct FMovieSceneByteChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	uint8_t DefaultValue; // 0x18(0x1)
	bool bHasDefaultValue; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct TArray<uint8_t> Values; // 0x20(0x10)
	struct UEnum* Enum; // 0x30(0x8)
	uint8_t Pad_0x38[0x60]; // 0x38(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x88 (Inherited: 0x0)
struct FMovieSceneEvalTemplatePtr
{
	uint8_t Pad_0x0[0x88]; // 0x0(0x88)
};

// Object: ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x1 (Inherited: 0x0)
struct FMovieSceneEmptyStruct
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneEvaluationField
{
	struct TArray<struct FMovieSceneFrameRange> Ranges; // 0x0(0x10)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x70 (Inherited: 0x0)
struct FMovieSceneEvaluationMetaData
{
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x0(0x10)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
	struct TMap<struct FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey Key; // 0x0(0xC)
	uint16_t SetupIndex; // 0xC(0x2)
	uint16_t TearDownIndex; // 0xE(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
	uint32_t SectionIndex; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackIdentifier
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneEvaluationGroup
{
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0xC (Inherited: 0x8)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSegmentIdentifier SegmentID; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSegmentIdentifier
{
	int32_t IdentifierIndex; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationGroupLUTIndex
{
	int32_t LUTOffset; // 0x0(0x4)
	int32_t NumInitPtrs; // 0x4(0x4)
	int32_t NumEvalPtrs; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneFrameRange
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneFrameRange
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x2F0 (Inherited: 0x0)
struct FMovieSceneEvaluationTemplate
{
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x0(0x50)
	uint8_t Pad_0x50[0x50]; // 0x50(0x50)
	struct FMovieSceneEvaluationField EvaluationField; // 0xA0(0x30)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0xD0(0xA0)
	struct FGuid SequenceSignature; // 0x170(0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180(0x4)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188(0xA8)
	struct FMovieSceneTrackFieldData TrackFieldData; // 0x230(0x60)
	struct FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// Size: 0x60 (Inherited: 0x0)
struct FMovieSceneSubSectionFieldData
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackFieldData
// Size: 0x60 (Inherited: 0x0)
struct FMovieSceneTrackFieldData
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xA8 (Inherited: 0x0)
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8(0x50)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0xA0 (Inherited: 0x0)
struct FMovieSceneSequenceHierarchy
{
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x0(0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID ParentID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0xE8 (Inherited: 0x0)
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath Sequence; // 0x0(0x18)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18(0x20)
	struct FFrameRate TickResolution; // 0x38(0x8)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x40(0x4)
	struct FMovieSceneFrameRange PlayRange; // 0x44(0x10)
	struct FMovieSceneFrameRange FullPlayRange; // 0x54(0x10)
	struct FMovieSceneFrameRange UnwarpedPlayRange; // 0x64(0x10)
	struct FMovieSceneFrameRange PreRollRange; // 0x74(0x10)
	struct FMovieSceneFrameRange PostRollRange; // 0x84(0x10)
	int32_t HierarchicalBias; // 0x94(0x4)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98(0x18)
	uint8_t Pad_0xB0[0x8]; // 0xB0(0x8)
	struct FGuid SubSectionSignature; // 0xB8(0x10)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0xC8(0x20)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneNestedSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
	struct FMovieSceneTimeWarping Warping; // 0xC(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneTimeWarping
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneTimeWarping
{
	struct FFrameNumber Start; // 0x0(0x4)
	struct FFrameNumber End; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneTimeTransform
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneTimeTransform
{
	float TimeScale; // 0x0(0x4)
	struct FFrameTime Offset; // 0x4(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSequenceInstanceDataPtr
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0xF8 (Inherited: 0x0)
struct FMovieSceneEvaluationTrack
{
	struct FGuid ObjectBindingID; // 0x0(0x10)
	uint16_t EvaluationPriority; // 0x10(0x2)
	enum class EEvaluationMethod EvaluationMethod; // 0x12(0x1)
	uint8_t Pad_0x13[0x5]; // 0x13(0x5)
	struct FMovieSceneEvaluationTrackSegments Segments; // 0x18(0x20)
	struct UMovieSceneTrack* SourceTrack; // 0x38(0x8)
	struct FSectionEvaluationDataTree EvaluationTree; // 0x40(0x60)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xA0(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0xB0(0x38)
	struct FName EvaluationGroup; // 0xE8(0x8)
	uint8_t bEvaluateInPreroll : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t bEvaluateInPostroll : 1; // 0xF0(0x1), Mask(0x2)
	uint8_t bTearDownPriority : 1; // 0xF0(0x1), Mask(0x4)
	uint8_t BitPad_0xF0_3 : 5; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneTrackImplementationPtr
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct MovieScene.SectionEvaluationDataTree
// Size: 0x60 (Inherited: 0x0)
struct FSectionEvaluationDataTree
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneEvaluationTrackSegments
{
	struct TArray<int32_t> SegmentIdentifierToIndex; // 0x0(0x10)
	struct TArray<struct FMovieSceneSegment> SortedSegments; // 0x10(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x58 (Inherited: 0x0)
struct FMovieSceneSegment
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSectionData
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneSubSectionData
{
	struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x0(0x8)
	struct FGuid ObjectBindingID; // 0x8(0x10)
	enum class ESectionEvaluationFlags Flags; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0x320 (Inherited: 0x0)
struct FMovieSceneRootEvaluationTemplateInstance
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances; // 0x18(0x50)
	uint8_t Pad_0x68[0x2B8]; // 0x68(0x2B8)
};

// Object: ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x90 (Inherited: 0x8)
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	int32_t DefaultValue; // 0x18(0x4)
	bool bHasDefaultValue; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct TArray<int32_t> Values; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneKeyStruct
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size: 0x28 (Inherited: 0x8)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{
	struct FFrameNumber Time; // 0x8(0x4)
	uint8_t Pad_0xC[0x1C]; // 0xC(0x1C)
};

// Object: ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size: 0x50 (Inherited: 0x0)
struct FGeneratedMovieSceneKeyStruct
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0xC0 (Inherited: 0x8)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{
	struct UObject* PropertyClass; // 0x8(0x8)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x20(0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30(0x30)
	uint8_t Pad_0x60[0x60]; // 0x60(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneObjectPathChannelKeyValue
{
	struct TSoftObjectPtr<UObject> SoftPtr; // 0x0(0x28)
	struct UObject* HardPtr; // 0x28(0x8)
};

// Object: ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x48 (Inherited: 0x0)
struct FMovieScenePossessable
{
	struct TArray<struct FName> Tags; // 0x0(0x10)
	struct FGuid Guid; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct UObject* PossessedObjectClass; // 0x30(0x8)
	struct FGuid ParentGuid; // 0x38(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneEasingSettings
{
	int32_t AutoEaseInDuration; // 0x0(0x4)
	int32_t AutoEaseOutDuration; // 0x4(0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x8(0x10)
	bool bManualEaseIn; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t ManualEaseInDuration; // 0x1C(0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20(0x10)
	bool bManualEaseOut; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t ManualEaseOutDuration; // 0x34(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x2 (Inherited: 0x0)
struct FMovieSceneSectionEvalOptions
{
	bool bCanEditCompletionMode; // 0x0(0x1)
	enum class EMovieSceneCompletionMode CompletionMode; // 0x1(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x24 (Inherited: 0x0)
struct FMovieSceneSectionParameters
{
	struct FFrameNumber StartFrameOffset; // 0x0(0x4)
	bool bCanLoop; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FFrameNumber EndFrameOffset; // 0x8(0x4)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0xC(0x4)
	float TimeScale; // 0x10(0x4)
	int32_t HierarchicalBias; // 0x14(0x4)
	float StartOffset; // 0x18(0x4)
	float PrerollTime; // 0x1C(0x4)
	float PostrollTime; // 0x20(0x4)
};

// Object: ScriptStruct MovieScene.SectionEvaluationData
// Size: 0xC (Inherited: 0x0)
struct FSectionEvaluationData
{
	int32_t ImplIndex; // 0x0(0x4)
	struct FFrameNumber ForcedTime; // 0x4(0x4)
	enum class ESectionEvaluationFlags Flags; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneSequencePlaybackSettings
{
	uint8_t bAutoPlay : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FMovieSceneSequenceLoopCount LoopCount; // 0x4(0x4)
	float PlayRate; // 0x8(0x4)
	float StartTime; // 0xC(0x4)
	uint8_t bRandomStartTime : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bRestoreState : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bDisableMovementInput : 1; // 0x10(0x1), Mask(0x4)
	uint8_t bDisableLookAtInput : 1; // 0x10(0x1), Mask(0x8)
	uint8_t bHidePlayer : 1; // 0x10(0x1), Mask(0x10)
	uint8_t bHideHud : 1; // 0x10(0x1), Mask(0x20)
	uint8_t bDisableCameraCuts : 1; // 0x10(0x1), Mask(0x40)
	uint8_t bPauseAtEnd : 1; // 0x10(0x1), Mask(0x80)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSequenceLoopCount
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime LastKnownPosition; // 0x0(0x8)
	uint8_t LastKnownStatus; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t LastKnownNumLoops; // 0xC(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneWarpCounter
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneWarpCounter
{
	struct TArray<uint32_t> WarpCounts; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x90 (Inherited: 0x0)
struct FMovieSceneSpawnable
{
	struct FTransform SpawnTransform; // 0x0(0x30)
	struct TArray<struct FName> Tags; // 0x30(0x10)
	bool bContinuouslyRespawn; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FGuid Guid; // 0x44(0x10)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString Name; // 0x58(0x10)
	struct UObject* ObjectTemplate; // 0x68(0x8)
	struct TArray<struct FGuid> ChildPossessables; // 0x70(0x10)
	enum class ESpawnOwnership Ownership; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FName LevelName; // 0x84(0x8)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size: 0x18 (Inherited: 0x18)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{
};

// Object: ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackDisplayOptions
{
	uint8_t bShowVerticalFrames : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackEvalOptions
{
	uint8_t bCanEvaluateNearestSection : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bEvalNearestSection : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bEvaluateInPreroll : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bEvaluateInPostroll : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bEvaluateNearestSection : 1; // 0x0(0x1), Mask(0x10)
	uint8_t BitPad_0x0_5 : 3; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 (Inherited: 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{
};

} // namespace SDK
