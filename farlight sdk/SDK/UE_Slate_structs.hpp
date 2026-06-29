// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3
};

// Object: Enum Slate.EVerticalTextJustify
enum class EVerticalTextJustify : uint8_t
{
	Top = 0,
	Center = 1,
	Bottom = 2,
	EVerticalTextJustify_MAX = 3
};

// Object: Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3
};

// Object: Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};

// Object: Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2
};

// Object: Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2
};

// Object: Enum Slate.ETextTransformPolicy
enum class ETextTransformPolicy : uint8_t
{
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	ETextTransformPolicy_MAX = 3
};

// Object: Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3
};

// Object: Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4
};

// Object: Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	MenuSeparator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	ToolBarSeparator = 8,
	Widget = 9,
	EMultiBlockType_MAX = 10
};

// Object: Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	UniformToolBar = 3,
	Menu = 4,
	ButtonRow = 5,
	ToolMenuBar = 6,
	EMultiBoxType_MAX = 7
};

// Object: Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5
};

// Object: Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	EStretch_MAX = 8
};

// Object: Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3
};

// Object: Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3
};

// Object: Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3
};

// Object: Enum Slate.EListItemVerticalGenerateDirection
enum class EListItemVerticalGenerateDirection : uint8_t
{
	FromTopToBottom = 0,
	FromBottomToTop = 1,
	EListItemVerticalGenerateDirection_MAX = 2
};

// Object: Enum Slate.EListItemHorizontalGenerateDirection
enum class EListItemHorizontalGenerateDirection : uint8_t
{
	FromLeftToRight = 0,
	FromRightToLeft = 1,
	EListItemHorizontalGenerateDirection_MAX = 2
};

// Object: Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7
};

// Object: Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};

// Object: Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3
};

// Object: Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6
};

// Object: ScriptStruct Slate.VirtualKeyboardOptions
// Size: 0x1 (Inherited: 0x0)
struct FVirtualKeyboardOptions
{
	bool bEnableAutocorrect; // 0x0(0x1)
};

// Object: ScriptStruct Slate.InputChord
// Size: 0x20 (Inherited: 0x0)
struct FInputChord
{
	struct FKey Key; // 0x0(0x18)
	uint8_t bShift : 1; // 0x18(0x1), Mask(0x1)
	uint8_t bCtrl : 1; // 0x18(0x1), Mask(0x2)
	uint8_t bAlt : 1; // 0x18(0x1), Mask(0x4)
	uint8_t bCmd : 1; // 0x18(0x1), Mask(0x8)
	uint8_t BitPad_0x18_4 : 4; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct Slate.Anchors
// Size: 0x10 (Inherited: 0x0)
struct FAnchors
{
	struct FVector2D Minimum; // 0x0(0x8)
	struct FVector2D Maximum; // 0x8(0x8)
};

// Object: ScriptStruct Slate.CustomizedToolMenu
// Size: 0x1E8 (Inherited: 0x0)
struct FCustomizedToolMenu
{
	struct FName Name; // 0x0(0x8)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x8(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x58(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xA8(0x50)
	struct TArray<struct FName> SectionOrder; // 0xF8(0x10)
	uint8_t Pad_0x108[0xE0]; // 0x108(0xE0)
};

// Object: ScriptStruct Slate.CustomizedToolMenuNameArray
// Size: 0x10 (Inherited: 0x0)
struct FCustomizedToolMenuNameArray
{
	struct TArray<struct FName> Names; // 0x0(0x10)
};

// Object: ScriptStruct Slate.CustomizedToolMenuSection
// Size: 0x4 (Inherited: 0x0)
struct FCustomizedToolMenuSection
{
	enum class ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
};

// Object: ScriptStruct Slate.CustomizedToolMenuEntry
// Size: 0x4 (Inherited: 0x0)
struct FCustomizedToolMenuEntry
{
	enum class ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
};

} // namespace SDK
