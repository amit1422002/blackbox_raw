// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Object: Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Object: Enum UMG.EWidgetStickyFlag
enum class EWidgetStickyFlag : uint8_t
{
	None = 0,
	ForceSlowDown = 1,
	IgnoreSlowDown = 2,
	EWidgetStickyFlag_MAX = 3
};

// Object: Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Object: Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Object: Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Object: Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Object: Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Object: Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Object: Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Object: Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Object: Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Object: Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Object: Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4
};

// Object: Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Object: Enum UMG.EWidgetPlatformType
enum class EWidgetPlatformType : uint8_t
{
	DesktopAndMobile = 0,
	OnlyDesktop = 1,
	OnlyMobile = 2,
	EWidgetPlatformType_MAX = 3
};

// Object: Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5
};

// Object: Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Object: Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// Object: ScriptStruct UMG.EventReply
// Size: 0xB8 (Inherited: 0x0)
struct FEventReply
{
	uint8_t Pad_0x0[0xB8]; // 0x0(0xB8)
};

// Object: ScriptStruct UMG.WidgetTransform
// Size: 0x1C (Inherited: 0x0)
struct FWidgetTransform
{
	struct FVector2D Translation; // 0x0(0x8)
	struct FVector2D Scale; // 0x8(0x8)
	struct FVector2D Shear; // 0x10(0x8)
	float Angle; // 0x18(0x4)
};

// Object: ScriptStruct UMG.PaintContext
// Size: 0x30 (Inherited: 0x0)
struct FPaintContext
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct UMG.ShapedTextOptions
// Size: 0x3 (Inherited: 0x0)
struct FShapedTextOptions
{
	uint8_t bOverride_TextShapingMethod : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_TextFlowDirection : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	enum class ETextShapingMethod TextShapingMethod; // 0x1(0x1)
	enum class ETextFlowDirection TextFlowDirection; // 0x2(0x1)
};

// Object: ScriptStruct UMG.AnimationEventBinding
// Size: 0x28 (Inherited: 0x0)
struct FAnimationEventBinding
{
	struct UWidgetAnimation* Animation; // 0x0(0x8)
	struct FDelegate Delegate; // 0x8(0x10)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName UserTag; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x0)
struct FNamedSlotBinding
{
	struct FName Name; // 0x0(0x8)
	struct UWidget* Content; // 0x8(0x8)
};

// Object: ScriptStruct UMG.UserWidgetPool
// Size: 0x80 (Inherited: 0x0)
struct FUserWidgetPool
{
	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x0(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	uint8_t Pad_0x20[0x60]; // 0x20(0x60)
};

// Object: ScriptStruct UMG.SlateChildSize
// Size: 0x8 (Inherited: 0x0)
struct FSlateChildSize
{
	float Value; // 0x0(0x4)
	uint8_t SizeRule; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct UMG.AnchorData
// Size: 0x2C (Inherited: 0x0)
struct FAnchorData
{
	struct FMargin Offsets; // 0x0(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	bool bLockRatio; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector2D Alignment; // 0x24(0x8)
};

// Object: ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28 (Inherited: 0x28)
struct FDynamicPropertyPath : FCachedPropertyPath
{
};

// Object: ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x4 (Inherited: 0x0)
struct FMovieScene2DTransformMask
{
	uint32_t Mask; // 0x0(0x4)
};

// Object: ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size: 0x4A8 (Inherited: 0x40)
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x40(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x180(0xA0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x220(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x360(0x140)
	enum class EMovieSceneBlendType BlendType; // 0x4A0(0x1)
	uint8_t Pad_0x4A1[0x3]; // 0x4A1(0x3)
	struct FMovieScene2DTransformMask Mask; // 0x4A4(0x4)
};

// Object: ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x2C8 (Inherited: 0x40)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel TopCurve; // 0x40(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0xE0(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x180(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x220(0xA0)
	enum class EMovieSceneBlendType BlendType; // 0x2C0(0x1)
	uint8_t Pad_0x2C1[0x7]; // 0x2C1(0x7)
};

// Object: ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x88 (Inherited: 0x78)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FName> BrushPropertyNamePath; // 0x78(0x10)
};

// Object: ScriptStruct UMG.RichTextStyleRow
// Size: 0xB50 (Inherited: 0x8)
struct FRichTextStyleRow : FTableRowBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTextBlockStyle TextStyle; // 0x10(0x590)
	int32_t FontSizeDesktop; // 0x5A0(0x4)
	uint8_t Pad_0x5A4[0x5AC]; // 0x5A4(0x5AC)
};

// Object: ScriptStruct UMG.SlateFontInfoOverride
// Size: 0x34 (Inherited: 0x0)
struct FSlateFontInfoOverride
{
	int32_t SizeMobile; // 0x0(0x4)
	int32_t SizeDesktop; // 0x4(0x4)
	bool bEnableOutline; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t OutlineSizeMobile; // 0xC(0x4)
	struct FLinearColor OutlineColorMobile; // 0x10(0x10)
	int32_t OutlineSizeDesktop; // 0x20(0x4)
	struct FLinearColor OutlineColorDesktop; // 0x24(0x10)
};

// Object: ScriptStruct UMG.RichInlineTextRow
// Size: 0x5D0 (Inherited: 0x8)
struct FRichInlineTextRow : FTableRowBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTextBlockStyle TextBlockStyle; // 0x10(0x590)
	struct FMargin Margin; // 0x5A0(0x10)
	float LineHeightPercentage; // 0x5B0(0x4)
	struct FWidgetTransform Transform; // 0x5B4(0x1C)
};

// Object: ScriptStruct UMG.RichImageAttributes
// Size: 0x20 (Inherited: 0x0)
struct FRichImageAttributes
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct UMG.RichImageRow
// Size: 0x280 (Inherited: 0x8)
struct FRichImageRow : FTableRowBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush Brush; // 0x10(0x120)
	struct FVector2D ImageSizeDesktop; // 0x130(0x8)
	uint8_t Pad_0x138[0x138]; // 0x138(0x138)
	uint8_t HAlign; // 0x270(0x1)
	uint8_t Pad_0x271[0x3]; // 0x271(0x3)
	struct FVector2D Offset; // 0x274(0x8)
	uint8_t Pad_0x27C[0x4]; // 0x27C(0x4)
};

// Object: ScriptStruct UMG.SlateMeshVertex
// Size: 0x3C (Inherited: 0x0)
struct FSlateMeshVertex
{
	struct FVector2D Position; // 0x0(0x8)
	struct FColor Color; // 0x8(0x4)
	struct FVector2D UV0; // 0xC(0x8)
	struct FVector2D UV1; // 0x14(0x8)
	struct FVector2D UV2; // 0x1C(0x8)
	struct FVector2D UV3; // 0x24(0x8)
	struct FVector2D UV4; // 0x2C(0x8)
	struct FVector2D UV5; // 0x34(0x8)
};

// Object: ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x0)
struct FWidgetAnimationBinding
{
	struct FName WidgetName; // 0x0(0x8)
	struct FName SlotWidgetName; // 0x8(0x8)
	struct FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x1C (Inherited: 0x0)
struct FBlueprintWidgetAnimationDelegateBinding
{
	enum class EWidgetAnimationEvent Action; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName AnimationToBind; // 0x4(0x8)
	struct FName FunctionNameToBind; // 0xC(0x8)
	struct FName UserTag; // 0x14(0x8)
};

// Object: ScriptStruct UMG.WidgetAnimationToTimelinePair
// Size: 0x18 (Inherited: 0x0)
struct FWidgetAnimationToTimelinePair
{
	struct FString AnimationLabel; // 0x0(0x10)
	struct UObject* TimelineObject; // 0x10(0x8)
};

// Object: ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x50 (Inherited: 0x0)
struct FDelegateRuntimeBinding
{
	struct FString ObjectName; // 0x0(0x10)
	struct FName PropertyName; // 0x10(0x8)
	struct FName FunctionName; // 0x18(0x8)
	struct FDynamicPropertyPath SourcePath; // 0x20(0x28)
	enum class EBindingKind Kind; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xB8 (Inherited: 0xA8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)
};

// Object: ScriptStruct UMG.WidgetNavigationData
// Size: 0x24 (Inherited: 0x0)
struct FWidgetNavigationData
{
	enum class EUINavigationRule Rule; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName WidgetToFocus; // 0x4(0x8)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0xC(0x8)
	struct FDelegate CustomDelegate; // 0x14(0x10)
};

} // namespace SDK
