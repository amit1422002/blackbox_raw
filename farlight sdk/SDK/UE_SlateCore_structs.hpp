// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Object: Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Object: Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Object: Enum SlateCore.EWidgetPixelSnapping
enum class EWidgetPixelSnapping : uint8_t
{
	Inherit = 0,
	Disabled = 1,
	SnapToPixel = 2,
	EWidgetPixelSnapping_MAX = 3
};

// Object: Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	Vector = 3,
	ESlateBrushImageType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	RoundedBox = 4,
	ESlateBrushDrawType_MAX = 5
};

// Object: Enum SlateCore.ESlateBrushRoundingType
enum class ESlateBrushRoundingType : uint8_t
{
	FixedRadius = 0,
	HalfHeightRadius = 1,
	ESlateBrushRoundingType_MAX = 2
};

// Object: Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Object: Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Object: Enum SlateCore.ESlateDetailMode
enum class ESlateDetailMode : uint8_t
{
	Stale_Low = 0,
	Stale_Medium = 1,
	Stale_High = 2,
	Stale_MAX = 3
};

// Object: Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Object: Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Object: Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Object: Enum SlateCore.ELineJoinType
enum class ELineJoinType : uint8_t
{
	LINEJOIN_ROUND = 0,
	LINEJOIN_BEVEL = 1,
	LINEJOIN_MITER = 2,
	LINEJOIN_MITERFIXED = 3,
	LINEJOIN_MAX = 4
};

// Object: Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Object: Enum SlateCore.ETextOverflowPolicy
enum class ETextOverflowPolicy : uint8_t
{
	Clip = 0,
	Ellipsis = 1,
	MultilineEllipsis = 2,
	MiddleEllipsis = 3,
	ETextOverflowPolicy_MAX = 4
};

// Object: Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Object: Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Object: Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Object: Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Object: Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Object: Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Object: Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Object: Enum SlateCore.EFontRasterizationMode
enum class EFontRasterizationMode : uint8_t
{
	Bitmap = 0,
	Msdf = 1,
	Sdf = 2,
	SdfApproximation = 3,
	EFontRasterizationMode_MAX = 4
};

// Object: Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Object: Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Object: Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Object: Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Object: Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Object: Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Object: Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Object: Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Object: Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Object: Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Object: Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Object: Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Object: Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Object: Enum SlateCore.EBlurType
enum class EBlurType : uint8_t
{
	Partial = 0,
	FullScreen = 1,
	Inherit = 2,
	EBlurType_MAX = 3
};

// Object: Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Object: Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Object: Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// Object: Enum SlateCore.EWidgetEffectFlagExtension
enum class EWidgetEffectFlagExtension : uint8_t
{
	Default = 0,
	DisableParentInvalidation = 1,
	DisableUnderlyingRender = 2,
	CanEffectWhenDragDropping = 4,
	EWidgetEffectFlagExtension_MAX = 5
};

// Object: ScriptStruct SlateCore.Geometry
// Size: 0x38 (Inherited: 0x0)
struct FGeometry
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct SlateCore.SlateBrush
// Size: 0x120 (Inherited: 0x0)
struct FSlateBrush
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FVector2D ImageSize; // 0x8(0x8)
	bool bLockRatio; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector2D LockedSize; // 0x14(0x8)
	bool bUsePixelMargin; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FMargin UVSpaceMargin; // 0x20(0x10)
	struct FVector2D MarginImageBaseSize; // 0x30(0x8)
	struct FVector2D LockedMarginImageBaseSize; // 0x38(0x8)
	bool bDisableScale; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FName SpriteName; // 0x44(0x8)
	struct FMargin Margin; // 0x4C(0x10)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FSlateColor TintColor; // 0x60(0x28)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct FSlateBrushOutlineSettings OutlineSettings; // 0x90(0x40)
	struct UObject* ResourceObject; // 0xD0(0x8)
	struct FName ResourceName; // 0xD8(0x8)
	struct FBox2D UVRegion; // 0xE0(0x14)
	uint8_t DrawAs; // 0xF4(0x1)
	uint8_t Tiling; // 0xF5(0x1)
	uint8_t Mirroring; // 0xF6(0x1)
	uint8_t ImageType; // 0xF7(0x1)
	uint8_t Pad_0xF8[0x24]; // 0xF8(0x24)
	uint8_t bIsDynamicallyLoaded : 1; // 0x11C(0x1), Mask(0x1)
	uint8_t bHasUObject : 1; // 0x11C(0x1), Mask(0x2)
	uint8_t BitPad_0x11C_2 : 6; // 0x11C(0x1)
	uint8_t Pad_0x11D[0x3]; // 0x11D(0x3)
};

// Object: ScriptStruct SlateCore.SlateBrushOutlineSettings
// Size: 0x40 (Inherited: 0x0)
struct FSlateBrushOutlineSettings
{
	struct FVector4 CornerRadii; // 0x0(0x10)
	struct FSlateColor Color; // 0x10(0x28)
	float Width; // 0x38(0x4)
	uint8_t RoundingType; // 0x3C(0x1)
	bool bUseBrushTransparency; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x0)
struct FSlateColor
{
	struct FLinearColor SpecifiedColor; // 0x0(0x10)
	uint8_t ColorUseRule; // 0x10(0x1)
	uint8_t Pad_0x11[0x17]; // 0x11(0x17)
};

// Object: ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x0)
struct FMargin
{
	float Left; // 0x0(0x4)
	float Top; // 0x4(0x4)
	float Right; // 0x8(0x4)
	float Bottom; // 0xC(0x4)
};

// Object: ScriptStruct SlateCore.InputEvent
// Size: 0x18 (Inherited: 0x0)
struct FInputEvent
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct SlateCore.PointerEvent
// Size: 0x70 (Inherited: 0x18)
struct FPointerEvent : FInputEvent
{
	uint8_t Pad_0x18[0x58]; // 0x18(0x58)
};

// Object: ScriptStruct SlateCore.CharacterEvent
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEvent : FInputEvent
{
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct SlateCore.KeyEvent
// Size: 0x38 (Inherited: 0x18)
struct FKeyEvent : FInputEvent
{
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
};

// Object: ScriptStruct SlateCore.NavigationEvent
// Size: 0x20 (Inherited: 0x18)
struct FNavigationEvent : FInputEvent
{
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x40 (Inherited: 0x38)
struct FAnalogInputEvent : FKeyEvent
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct SlateCore.SlateFontInfo
// Size: 0x68 (Inherited: 0x0)
struct FSlateFontInfo
{
	struct UObject* FontObject; // 0x0(0x8)
	struct UObject* FontMaterial; // 0x8(0x8)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x30)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	struct FName TypefaceFontName; // 0x50(0x8)
	int32_t Size; // 0x58(0x4)
	int32_t LetterSpacing; // 0x5C(0x4)
	int32_t AbsoluteLetterSpacing; // 0x60(0x4)
	uint8_t Pad_0x64[0x1]; // 0x64(0x1)
	bool bMaterialIsStencil; // 0x65(0x1)
	uint8_t Pad_0x66[0x2]; // 0x66(0x2)
};

// Object: ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x30 (Inherited: 0x0)
struct FFontOutlineSettings
{
	int32_t OutlineSize; // 0x0(0x4)
	int32_t OutlineBlur; // 0x4(0x4)
	float FloatOutlineSize; // 0x8(0x4)
	bool bUseFloatOutlineSize; // 0xC(0x1)
	enum class ELineJoinType LineJoinType; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	float MiterLimit; // 0x10(0x4)
	bool bMiteredCorners; // 0x14(0x1)
	bool bSeparateFillAlpha; // 0x15(0x1)
	bool bApplyOutlineToDropShadows; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
	struct UObject* OutlineMaterial; // 0x18(0x8)
	struct FLinearColor OutlineColor; // 0x20(0x10)
};

// Object: ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x8 (Inherited: 0x0)
struct FSlateWidgetStyle
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.TableRowStyle
// Size: 0x1020 (Inherited: 0x8)
struct FTableRowStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush SelectorFocusedBrush; // 0x10(0x120)
	struct FSlateBrush ActiveHoveredBrush; // 0x130(0x120)
	struct FSlateBrush ActiveBrush; // 0x250(0x120)
	struct FSlateBrush InactiveHoveredBrush; // 0x370(0x120)
	struct FSlateBrush InactiveBrush; // 0x490(0x120)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x5B0(0x120)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x6D0(0x120)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x7F0(0x120)
	struct FSlateBrush OddRowBackgroundBrush; // 0x910(0x120)
	struct FSlateColor TextColor; // 0xA30(0x28)
	struct FSlateColor SelectedTextColor; // 0xA58(0x28)
	struct FSlateBrush DropIndicator_Above; // 0xA80(0x120)
	struct FSlateBrush DropIndicator_Onto; // 0xBA0(0x120)
	struct FSlateBrush DropIndicator_Below; // 0xCC0(0x120)
	struct FSlateBrush ActiveHighlightedBrush; // 0xDE0(0x120)
	struct FSlateBrush InactiveHighlightedBrush; // 0xF00(0x120)
};

// Object: ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x7A0 (Inherited: 0x8)
struct FComboBoxStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FComboButtonStyle ComboButtonStyle; // 0x10(0x760)
	struct FSlateSound PressedSlateSound; // 0x770(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x788(0x18)
};

// Object: ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x0)
struct FSlateSound
{
	struct UObject* ResourceObject; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x760 (Inherited: 0x8)
struct FComboButtonStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FButtonStyle ButtonStyle; // 0x10(0x4E0)
	struct FSlateBrush DownArrowImage; // 0x4F0(0x120)
	struct FVector2D ShadowOffset; // 0x610(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x618(0x10)
	uint8_t Pad_0x628[0x8]; // 0x628(0x8)
	struct FSlateBrush MenuBorderBrush; // 0x630(0x120)
	struct FMargin MenuBorderPadding; // 0x750(0x10)
};

// Object: ScriptStruct SlateCore.ButtonStyle
// Size: 0x4E0 (Inherited: 0x8)
struct FButtonStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush Normal; // 0x10(0x120)
	struct FSlateBrush Hovered; // 0x130(0x120)
	struct FSlateBrush Pressed; // 0x250(0x120)
	struct FSlateBrush Disabled; // 0x370(0x120)
	struct FMargin NormalPadding; // 0x490(0x10)
	struct FMargin PressedPadding; // 0x4A0(0x10)
	struct FSlateSound PressedSlateSound; // 0x4B0(0x18)
	struct FSlateSound HoveredSlateSound; // 0x4C8(0x18)
};

// Object: ScriptStruct SlateCore.EditableTextStyle
// Size: 0x410 (Inherited: 0x8)
struct FEditableTextStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font; // 0x8(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
	struct FSlateBrush BackgroundImageSelected; // 0xA0(0x120)
	struct FSlateBrush BackgroundImageComposing; // 0x1C0(0x120)
	struct FSlateBrush CaretImage; // 0x2E0(0x120)
	float CaretRetract; // 0x400(0x4)
	uint8_t Pad_0x404[0xC]; // 0x404(0xC)
};

// Object: ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0xFD0 (Inherited: 0x8)
struct FEditableTextBoxStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush BackgroundImageNormal; // 0x10(0x120)
	struct FSlateBrush BackgroundImageHovered; // 0x130(0x120)
	struct FSlateBrush BackgroundImageFocused; // 0x250(0x120)
	struct FSlateBrush BackgroundImageReadOnly; // 0x370(0x120)
	struct FMargin Padding; // 0x490(0x10)
	struct FSlateFontInfo Font; // 0x4A0(0x68)
	struct FSlateColor ForegroundColor; // 0x508(0x28)
	struct FSlateColor BackgroundColor; // 0x530(0x28)
	struct FSlateColor ReadOnlyForegroundColor; // 0x558(0x28)
	struct FMargin HScrollBarPadding; // 0x580(0x10)
	struct FMargin VScrollBarPadding; // 0x590(0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x5A0(0xA30)
};

// Object: ScriptStruct SlateCore.ScrollBarStyle
// Size: 0xA30 (Inherited: 0x8)
struct FScrollBarStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush HorizontalBackgroundImage; // 0x10(0x120)
	struct FSlateBrush VerticalBackgroundImage; // 0x130(0x120)
	struct FSlateBrush VerticalTopSlotImage; // 0x250(0x120)
	struct FSlateBrush HorizontalTopSlotImage; // 0x370(0x120)
	struct FSlateBrush VerticalBottomSlotImage; // 0x490(0x120)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x5B0(0x120)
	struct FSlateBrush NormalThumbImage; // 0x6D0(0x120)
	struct FSlateBrush HoveredThumbImage; // 0x7F0(0x120)
	struct FSlateBrush DraggedThumbImage; // 0x910(0x120)
};

// Object: ScriptStruct SlateCore.TextBlockStyle
// Size: 0x590 (Inherited: 0x8)
struct FTextBlockStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font; // 0x8(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FVector2D ShadowOffset; // 0x98(0x8)
	bool bIgnoreShadowSize; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	struct FLinearColor ShadowColorAndOpacity; // 0xA4(0x10)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct FSlateColor SelectedBackgroundColor; // 0xB8(0x28)
	struct FLinearColor HighlightColor; // 0xE0(0x10)
	struct FSlateBrush HighlightShape; // 0xF0(0x120)
	struct FSlateBrush StrikeBrush; // 0x210(0x120)
	struct FSlateBrush UnderlineBrush; // 0x330(0x120)
	struct FSlateBrush BackgroundBrush; // 0x450(0x120)
	struct FMargin BackgroundPadding; // 0x570(0x10)
	enum class ETextOverflowPolicy OverflowPolicy; // 0x580(0x1)
	uint8_t Pad_0x581[0xF]; // 0x581(0xF)
};

// Object: ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x5F0 (Inherited: 0x8)
struct FSpinBoxStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush BackgroundBrush; // 0x10(0x120)
	struct FSlateBrush HoveredBackgroundBrush; // 0x130(0x120)
	struct FSlateBrush ActiveFillBrush; // 0x250(0x120)
	struct FSlateBrush InactiveFillBrush; // 0x370(0x120)
	struct FSlateBrush ArrowsImage; // 0x490(0x120)
	struct FSlateColor ForegroundColor; // 0x5B0(0x28)
	struct FMargin TextPadding; // 0x5D8(0x10)
	uint8_t Pad_0x5E8[0x8]; // 0x5E8(0x8)
};

// Object: ScriptStruct SlateCore.FocusEvent
// Size: 0x8 (Inherited: 0x0)
struct FFocusEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.MotionEvent
// Size: 0x48 (Inherited: 0x18)
struct FMotionEvent : FInputEvent
{
	uint8_t Pad_0x18[0x30]; // 0x18(0x30)
};

// Object: ScriptStruct SlateCore.SlateBrushAtlasAdapter
// Size: 0x10 (Inherited: 0x0)
struct FSlateBrushAtlasAdapter
{
	struct FName SpriteName; // 0x0(0x8)
	struct UObject* HardResourceObject; // 0x8(0x8)
};

// Object: ScriptStruct SlateCore.HyperlinkStyle
// Size: 0xA90 (Inherited: 0x8)
struct FHyperlinkStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FButtonStyle UnderlineStyle; // 0x10(0x4E0)
	struct FTextBlockStyle TextStyle; // 0x4F0(0x590)
	struct FMargin Padding; // 0xA80(0x10)
};

// Object: ScriptStruct SlateCore.CompositeFont
// Size: 0x38 (Inherited: 0x0)
struct FCompositeFont
{
	struct FTypeface DefaultTypeface; // 0x0(0x10)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28(0x10)
};

// Object: ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18 (Inherited: 0x0)
struct FCompositeFallbackFont
{
	struct FTypeface Typeface; // 0x0(0x10)
	float ScalingFactor; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x0)
struct FTypeface
{
	struct TArray<struct FTypefaceEntry> Fonts; // 0x0(0x10)
};

// Object: ScriptStruct SlateCore.TypefaceEntry
// Size: 0x28 (Inherited: 0x0)
struct FTypefaceEntry
{
	struct FName Name; // 0x0(0x8)
	struct FFontData Font; // 0x8(0x20)
};

// Object: ScriptStruct SlateCore.FontData
// Size: 0x20 (Inherited: 0x0)
struct FFontData
{
	struct FString FontFilename; // 0x0(0x10)
	enum class EFontHinting Hinting; // 0x10(0x1)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	int32_t SubFaceIndex; // 0x14(0x4)
	struct UObject* FontFaceAsset; // 0x18(0x8)
};

// Object: ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x18)
struct FCompositeSubFont : FCompositeFallbackFont
{
	struct TArray<struct FInt32Range> CharacterRanges; // 0x18(0x10)
	struct FString Cultures; // 0x28(0x10)
};

// Object: ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x8 (Inherited: 0x0)
struct FCaptureLostEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.FontSdfSettings
// Size: 0x4 (Inherited: 0x0)
struct FFontSdfSettings
{
	int32_t BasePpem; // 0x0(0x4)
};

// Object: ScriptStruct SlateCore.WindowStyle
// Size: 0x2170 (Inherited: 0x8)
struct FWindowStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FButtonStyle MinimizeButtonStyle; // 0x10(0x4E0)
	struct FButtonStyle MaximizeButtonStyle; // 0x4F0(0x4E0)
	struct FButtonStyle RestoreButtonStyle; // 0x9D0(0x4E0)
	struct FButtonStyle CloseButtonStyle; // 0xEB0(0x4E0)
	struct FTextBlockStyle TitleTextStyle; // 0x1390(0x590)
	struct FSlateBrush ActiveTitleBrush; // 0x1920(0x120)
	struct FSlateBrush InactiveTitleBrush; // 0x1A40(0x120)
	struct FSlateBrush FlashTitleBrush; // 0x1B60(0x120)
	struct FSlateColor BackgroundColor; // 0x1C80(0x28)
	uint8_t Pad_0x1CA8[0x8]; // 0x1CA8(0x8)
	struct FSlateBrush OutlineBrush; // 0x1CB0(0x120)
	struct FSlateColor OutlineColor; // 0x1DD0(0x28)
	uint8_t Pad_0x1DF8[0x8]; // 0x1DF8(0x8)
	struct FSlateBrush BorderBrush; // 0x1E00(0x120)
	struct FSlateBrush BackgroundBrush; // 0x1F20(0x120)
	struct FSlateBrush ChildBackgroundBrush; // 0x2040(0x120)
	int32_t WindowCornerRadius; // 0x2160(0x4)
	uint8_t Pad_0x2164[0xC]; // 0x2164(0xC)
};

// Object: ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x250 (Inherited: 0x8)
struct FScrollBorderStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush TopShadowBrush; // 0x10(0x120)
	struct FSlateBrush BottomShadowBrush; // 0x130(0x120)
};

// Object: ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x490 (Inherited: 0x8)
struct FScrollBoxStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush TopShadowBrush; // 0x10(0x120)
	struct FSlateBrush BottomShadowBrush; // 0x130(0x120)
	struct FSlateBrush LeftShadowBrush; // 0x250(0x120)
	struct FSlateBrush RightShadowBrush; // 0x370(0x120)
};

// Object: ScriptStruct SlateCore.DockTabStyle
// Size: 0xE30 (Inherited: 0x8)
struct FDockTabStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FButtonStyle CloseButtonStyle; // 0x10(0x4E0)
	struct FSlateBrush NormalBrush; // 0x4F0(0x120)
	struct FSlateBrush ActiveBrush; // 0x610(0x120)
	struct FSlateBrush ColorOverlayTabBrush; // 0x730(0x120)
	struct FSlateBrush ColorOverlayIconBrush; // 0x850(0x120)
	struct FSlateBrush ForegroundBrush; // 0x970(0x120)
	struct FSlateBrush HoveredBrush; // 0xA90(0x120)
	struct FSlateBrush ContentAreaBrush; // 0xBB0(0x120)
	struct FSlateBrush TabWellBrush; // 0xCD0(0x120)
	struct FMargin TabPadding; // 0xDF0(0x10)
	float OverlapWidth; // 0xE00(0x4)
	uint8_t Pad_0xE04[0x4]; // 0xE04(0x4)
	struct FSlateColor FlashColor; // 0xE08(0x28)
};

// Object: ScriptStruct SlateCore.HeaderRowStyle
// Size: 0x1810 (Inherited: 0x8)
struct FHeaderRowStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTableColumnHeaderStyle ColumnStyle; // 0x10(0xA30)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0xA40(0xA30)
	struct FSplitterStyle ColumnSplitterStyle; // 0x1470(0x250)
	struct FSlateBrush BackgroundBrush; // 0x16C0(0x120)
	struct FSlateColor ForegroundColor; // 0x17E0(0x28)
	uint8_t Pad_0x1808[0x8]; // 0x1808(0x8)
};

// Object: ScriptStruct SlateCore.SplitterStyle
// Size: 0x250 (Inherited: 0x8)
struct FSplitterStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush HandleNormalBrush; // 0x10(0x120)
	struct FSlateBrush HandleHighlightBrush; // 0x130(0x120)
};

// Object: ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0xA30 (Inherited: 0x8)
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush SortPrimaryAscendingImage; // 0x10(0x120)
	struct FSlateBrush SortPrimaryDescendingImage; // 0x130(0x120)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x250(0x120)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x370(0x120)
	struct FSlateBrush NormalBrush; // 0x490(0x120)
	struct FSlateBrush HoveredBrush; // 0x5B0(0x120)
	struct FSlateBrush MenuDropdownImage; // 0x6D0(0x120)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x7F0(0x120)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x910(0x120)
};

// Object: ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0x140 (Inherited: 0x8)
struct FInlineTextImageStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush Image; // 0x10(0x120)
	int16_t Baseline; // 0x130(0x2)
	uint8_t Pad_0x132[0xE]; // 0x132(0xE)
};

// Object: ScriptStruct SlateCore.VolumeControlStyle
// Size: 0xC90 (Inherited: 0x8)
struct FVolumeControlStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSliderStyle SliderStyle; // 0x10(0x6E0)
	struct FSlateBrush HighVolumeImage; // 0x6F0(0x120)
	struct FSlateBrush MidVolumeImage; // 0x810(0x120)
	struct FSlateBrush LowVolumeImage; // 0x930(0x120)
	struct FSlateBrush NoVolumeImage; // 0xA50(0x120)
	struct FSlateBrush MutedImage; // 0xB70(0x120)
};

// Object: ScriptStruct SlateCore.SliderStyle
// Size: 0x6E0 (Inherited: 0x8)
struct FSliderStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush NormalBarImage; // 0x10(0x120)
	struct FSlateBrush HoveredBarImage; // 0x130(0x120)
	struct FSlateBrush DisabledBarImage; // 0x250(0x120)
	struct FSlateBrush NormalThumbImage; // 0x370(0x120)
	struct FSlateBrush HoveredThumbImage; // 0x490(0x120)
	struct FSlateBrush DisabledThumbImage; // 0x5B0(0x120)
	float BarThickness; // 0x6D0(0x4)
	uint8_t Pad_0x6D4[0xC]; // 0x6D4(0xC)
};

// Object: ScriptStruct SlateCore.SearchBoxStyle
// Size: 0x14F0 (Inherited: 0x8)
struct FSearchBoxStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FEditableTextBoxStyle TextBoxStyle; // 0x10(0xFD0)
	struct FSlateFontInfo ActiveFontInfo; // 0xFE0(0x68)
	uint8_t Pad_0x1048[0x8]; // 0x1048(0x8)
	struct FSlateBrush UpArrowImage; // 0x1050(0x120)
	struct FSlateBrush DownArrowImage; // 0x1170(0x120)
	struct FSlateBrush GlassImage; // 0x1290(0x120)
	struct FSlateBrush ClearImage; // 0x13B0(0x120)
	struct FMargin ImagePadding; // 0x14D0(0x10)
	bool bLeftAlignButtons; // 0x14E0(0x1)
	uint8_t Pad_0x14E1[0xF]; // 0x14E1(0xF)
};

// Object: ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x260 (Inherited: 0x8)
struct FExpandableAreaStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush CollapsedImage; // 0x10(0x120)
	struct FSlateBrush ExpandedImage; // 0x130(0x120)
	float RolloutAnimationSeconds; // 0x250(0x4)
	uint8_t Pad_0x254[0xC]; // 0x254(0xC)
};

// Object: ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x370 (Inherited: 0x8)
struct FProgressBarStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush BackgroundImage; // 0x10(0x120)
	struct FSlateBrush FillImage; // 0x130(0x120)
	struct FSlateBrush MarqueeImage; // 0x250(0x120)
};

// Object: ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0x1570 (Inherited: 0x8)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x10(0xFD0)
	struct FTextBlockStyle TextStyle; // 0xFE0(0x590)
};

// Object: ScriptStruct SlateCore.CheckBoxStyle
// Size: 0xAE0 (Inherited: 0x8)
struct FCheckBoxStyle : FSlateWidgetStyle
{
	uint8_t CheckBoxType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FSlateBrush UncheckedImage; // 0x10(0x120)
	struct FSlateBrush UncheckedHoveredImage; // 0x130(0x120)
	struct FSlateBrush UncheckedPressedImage; // 0x250(0x120)
	struct FSlateBrush CheckedImage; // 0x370(0x120)
	struct FSlateBrush CheckedHoveredImage; // 0x490(0x120)
	struct FSlateBrush CheckedPressedImage; // 0x5B0(0x120)
	struct FSlateBrush UndeterminedImage; // 0x6D0(0x120)
	struct FSlateBrush UndeterminedHoveredImage; // 0x7F0(0x120)
	struct FSlateBrush UndeterminedPressedImage; // 0x910(0x120)
	struct FMargin Padding; // 0xA30(0x10)
	struct FSlateColor ForegroundColor; // 0xA40(0x28)
	struct FSlateColor BorderBackgroundColor; // 0xA68(0x28)
	struct FSlateSound CheckedSlateSound; // 0xA90(0x18)
	struct FSlateSound UncheckedSlateSound; // 0xAA8(0x18)
	struct FSlateSound HoveredSlateSound; // 0xAC0(0x18)
	uint8_t Pad_0xAD8[0x8]; // 0xAD8(0x8)
};

// Object: ScriptStruct SlateCore.StaticFontCacheInfo
// Size: 0x78 (Inherited: 0x0)
struct FStaticFontCacheInfo
{
	struct FSlateFontInfo FontInfo; // 0x0(0x68)
	struct FString TheString; // 0x68(0x10)
};

} // namespace SDK
