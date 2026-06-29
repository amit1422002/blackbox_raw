// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ControlRig.ControlRig
// Size: 0x360 (Inherited: 0x28)
struct UControlRig : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
	enum class ERigExecutionType ExecutionType; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct URigVM* VM; // 0x78(0x8)
	struct FRigHierarchyContainer Hierarchy; // 0x80(0x1B0)
	struct TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary; // 0x230(0x28)
	uint8_t Pad_0x258[0x10]; // 0x258(0x10)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; // 0x268(0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; // 0x2B8(0x50)
	struct FControlRigDrawContainer DrawContainer; // 0x308(0x10)
	uint8_t Pad_0x318[0x8]; // 0x318(0x8)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x320(0x8)
	uint8_t Pad_0x328[0x38]; // 0x328(0x38)
};

// Object: Class ControlRig.AdditiveControlRig
// Size: 0x370 (Inherited: 0x360)
struct UAdditiveControlRig : UControlRig
{
	uint8_t Pad_0x360[0x10]; // 0x360(0x10)
};

// Object: Class ControlRig.ControlRigBindingTrack
// Size: 0x78 (Inherited: 0x78)
struct UControlRigBindingTrack : UMovieSceneSpawnTrack
{
};

// Object: Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x358 (Inherited: 0x358)
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass
{
};

// Object: Class ControlRig.ControlRigComponent
// Size: 0x120 (Inherited: 0xD8)
struct UControlRigComponent : UActorComponent
{
	struct FMulticastInlineDelegate OnPreInitializeDelegate; // 0xD8(0x10)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0xE8(0x10)
	struct FMulticastInlineDelegate OnPreEvaluateDelegate; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnPostEvaluateDelegate; // 0x108(0x10)
	struct UControlRig* ControlRig; // 0x118(0x8)


	// Object: Function ControlRig.ControlRigComponent.OnPreInitialize
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x372f650
	// Params: [ Num(0) Size(0x0) ]
	void OnPreInitialize();

	// Object: Function ControlRig.ControlRigComponent.OnPreEvaluate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x372f618
	// Params: [ Num(0) Size(0x0) ]
	void OnPreEvaluate();

	// Object: Function ControlRig.ControlRigComponent.OnPostInitialize
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x372f634
	// Params: [ Num(0) Size(0x0) ]
	void OnPostInitialize();

	// Object: Function ControlRig.ControlRigComponent.OnPostEvaluate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x372f5fc
	// Params: [ Num(0) Size(0x0) ]
	void OnPostEvaluate();

	// Object: Function ControlRig.ControlRigComponent.BP_GetControlRig
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x372f66c
	// Params: [ Num(1) Size(0x8) ]
	struct UControlRig* BP_GetControlRig();
};

// Object: Class ControlRig.ControlRigGizmoLibrary
// Size: 0xE0 (Inherited: 0x28)
struct UControlRigGizmoLibrary : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FControlRigGizmoDefinition DefaultGizmo; // 0x30(0x60)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x90(0x28)
	struct FName MaterialColorParameter; // 0xB8(0x8)
	struct TArray<struct FControlRigGizmoDefinition> Gizmos; // 0xC0(0x10)
	uint8_t Pad_0xD0[0x10]; // 0xD0(0x10)
};

// Object: Class ControlRig.ControlRigLayerInstance
// Size: 0x330 (Inherited: 0x330)
struct UControlRigLayerInstance : UAnimInstance
{
};

// Object: Class ControlRig.ControlRigObjectHolder
// Size: 0x38 (Inherited: 0x28)
struct UControlRigObjectHolder : UObject
{
	struct TArray<struct UObject*> Objects; // 0x28(0x10)
};

// Object: Class ControlRig.ControlRigSequence
// Size: 0x4F0 (Inherited: 0x498)
struct UControlRigSequence : ULevelSequence
{
	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; // 0x498(0x28)
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x4C0(0x28)
	float LastExportedFrameRate; // 0x4E8(0x4)
	uint8_t Pad_0x4EC[0x4]; // 0x4EC(0x4)
};

// Object: Class ControlRig.ControlRigSequencerAnimInstance
// Size: 0x340 (Inherited: 0x330)
struct UControlRigSequencerAnimInstance : UAnimSequencerInstance
{
	uint8_t Pad_0x330[0x10]; // 0x330(0x10)
};

// Object: Class ControlRig.ControlRigSettings
// Size: 0x38 (Inherited: 0x38)
struct UControlRigSettings : UDeveloperSettings
{
};

// Object: Class ControlRig.ControlRigManipulatable
// Size: 0x28 (Inherited: 0x28)
struct IControlRigManipulatable : IInterface
{
};

// Object: Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x270 (Inherited: 0x138)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection
{
	struct UControlRig* ControlRig; // 0x138(0x8)
	struct TArray<bool> ControlsMask; // 0x140(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x150(0x4)
	bool bAdditive; // 0x154(0x1)
	bool bApplyBoneFilter; // 0x155(0x1)
	uint8_t Pad_0x156[0x2]; // 0x156(0x2)
	struct FInputBlendPose BoneFilter; // 0x158(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x168(0xA0)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x208(0x50)
	uint8_t Pad_0x258[0x18]; // 0x258(0x18)
};

// Object: Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0x80 (Inherited: 0x58)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack
{
	struct UControlRig* ControlRig; // 0x58(0x8)
	struct UMovieSceneSection* SectionToKey; // 0x60(0x8)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x8)
};

// Object: Class ControlRig.MovieSceneControlRigSection
// Size: 0x208 (Inherited: 0x150)
struct UMovieSceneControlRigSection : UMovieSceneSubSection
{
	bool bAdditive; // 0x150(0x1)
	bool bApplyBoneFilter; // 0x151(0x1)
	uint8_t Pad_0x152[0x6]; // 0x152(0x6)
	struct FInputBlendPose BoneFilter; // 0x158(0x10)
	struct FMovieSceneFloatChannel Weight; // 0x168(0xA0)
};

// Object: Class ControlRig.MovieSceneControlRigTrack
// Size: 0x68 (Inherited: 0x68)
struct UMovieSceneControlRigTrack : UMovieSceneSubTrack
{
};

// Object: ControlRigBlueprintGeneratedClass ControlRig.Default__ControlRigBlueprintGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__ControlRigBlueprintGeneratedClass
{
};

} // namespace SDK
