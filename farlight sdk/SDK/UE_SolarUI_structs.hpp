// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum SolarUI.EWidgetOverrideParamType
enum class EWidgetOverrideParamType : uint8_t
{
	None = 0,
	Text = 1,
	Image = 2,
	Custom = 3,
	Boolean = 4,
	Integer = 5,
	String = 6,
	EWidgetOverrideParamType_MAX = 7
};

// Object: Enum SolarUI.EUseDesktopWidgetType
enum class EUseDesktopWidgetType : uint8_t
{
	DesktopOverrideMobile = 0,
	OnlyDesktop = 1,
	OnlyMobile = 2,
	DesktopAndMobile = 3,
	EUseDesktopWidgetType_MAX = 4
};

// Object: Enum SolarUI.EWidgetLoadType
enum class EWidgetLoadType : uint8_t
{
	Start = 0,
	Delay = 1,
	StartAndAsync = 2,
	EWidgetLoadType_MAX = 3
};

// Object: Enum SolarUI.ESolarWidgetCustomVersion
enum class ESolarWidgetCustomVersion : uint8_t
{
	BeforeCustomVersionWasAdded = 0,
	SeparateEntrySpacing = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESolarWidgetCustomVersion_MAX = 4
};

// Object: Enum SolarUI.USolarWidgetLayoutType
enum class EUSolarWidgetLayoutType : uint8_t
{
	Default = 0,
	Mobile = 1,
	DesktopCommon = 2,
	Count = 3,
	USolarWidgetLayoutType_MAX = 4
};

// Object: Enum SolarUI.ELayoutPreviewType
enum class ELayoutPreviewType : uint8_t
{
	Mobile = 0,
	Desktop = 1,
	Deprecated = 2,
	ELayoutPreviewType_MAX = 3
};

// Object: Enum SolarUI.ESolarTimelinePlayMode
enum class ESolarTimelinePlayMode : uint8_t
{
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	ESolarTimelinePlayMode_MAX = 3
};

// Object: Enum SolarUI.ESolarScrollTextWaitingType
enum class ESolarScrollTextWaitingType : uint8_t
{
	Fixed = 0,
	FullyDisappear = 1,
	FullyDisplay = 2,
	StartDisappear = 3,
	ESolarScrollTextWaitingType_MAX = 4
};

// Object: Enum SolarUI.ESolarScrollTextDirection
enum class ESolarScrollTextDirection : uint8_t
{
	FromBottomToTop = 0,
	FromTopToBottom = 1,
	FromRightToLeft = 2,
	FromLeftToRight = 3,
	ESolarScrollTextDirection_MAX = 4
};

// Object: Enum SolarUI.ESolarScrollTextType
enum class ESolarScrollTextType : uint8_t
{
	Always = 0,
	Exceed = 1,
	ESolarScrollTextType_MAX = 2
};

// Object: ScriptStruct SolarUI.SolarWidgetNavigationData
// Size: 0x1 (Inherited: 0x0)
struct FSolarWidgetNavigationData
{
	uint8_t bHasNavUp : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bHasNavDown : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bHasNavLeft : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bHasNavRight : 1; // 0x0(0x1), Mask(0x8)
	uint8_t BitPad_0x0_4 : 4; // 0x0(0x1)
};

// Object: ScriptStruct SolarUI.PlayAnimationParams
// Size: 0x40 (Inherited: 0x0)
struct FPlayAnimationParams
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct SolarUI.WidgetOverrideParam
// Size: 0x180 (Inherited: 0x0)
struct FWidgetOverrideParam
{
	enum class EWidgetOverrideParamType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName ChildName; // 0x4(0x8)
	bool bEnableLocText; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FText Text; // 0x10(0x18)
	int32_t LocTextID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FSlateBrush Brush; // 0x30(0x120)
	struct FString CustomParameter; // 0x150(0x10)
	bool BoolValue; // 0x160(0x1)
	uint8_t Pad_0x161[0x3]; // 0x161(0x3)
	int32_t IntegerValue; // 0x164(0x4)
	struct FString StringValue; // 0x168(0x10)
	uint8_t Pad_0x178[0x8]; // 0x178(0x8)
};

// Object: ScriptStruct SolarUI.BezierSplineCurve
// Size: 0x18 (Inherited: 0x0)
struct FBezierSplineCurve
{
	struct TArray<struct FSolarSplineCurvePoints> SplineCurves; // 0x0(0x10)
	struct FColor Color; // 0x10(0x4)
	float Thickness; // 0x14(0x4)
};

// Object: ScriptStruct SolarUI.SolarSplineCurvePoints
// Size: 0x24 (Inherited: 0x0)
struct FSolarSplineCurvePoints
{
	int32_t GroupIndex; // 0x0(0x4)
	struct FVector2D StartPos; // 0x4(0x8)
	struct FVector2D StartDir; // 0xC(0x8)
	struct FVector2D EndPos; // 0x14(0x8)
	struct FVector2D EndDir; // 0x1C(0x8)
};

// Object: ScriptStruct SolarUI.SolarUIMapPanelSlotAdapterEntry
// Size: 0x10 (Inherited: 0x0)
struct FSolarUIMapPanelSlotAdapterEntry
{
	struct UPanelSlot* SrcPanelSlotClass; // 0x0(0x8)
	struct USolarPanelSlotAdapter* DstPanelSlotClass; // 0x8(0x8)
};

// Object: ScriptStruct SolarUI.SolarUIMapWidgetAdapterEntry
// Size: 0x10 (Inherited: 0x0)
struct FSolarUIMapWidgetAdapterEntry
{
	struct UWidget* SrcWidgetClass; // 0x0(0x8)
	struct USolarWidgetAdapter* DstWidgetClass; // 0x8(0x8)
};

// Object: ScriptStruct SolarUI.SolarTimelineEventEntry
// Size: 0x68 (Inherited: 0x0)
struct FSolarTimelineEventEntry
{
	struct USolarTriggerEventChannel* TriggerEventChannel; // 0x0(0x8)
	struct USolarRepeaterEventChannel* RepeaterEventChannel; // 0x8(0x8)
	struct FName TrackName; // 0x10(0x8)
	struct FSolarTimelinePropertySectionData PropertyData; // 0x18(0x50)
};

// Object: ScriptStruct SolarUI.SolarTimelinePropertySectionData
// Size: 0x50 (Inherited: 0x0)
struct FSolarTimelinePropertySectionData
{
	struct FName PropertyName; // 0x0(0x8)
	struct FString PropertyPath; // 0x8(0x10)
	struct FName FunctionName; // 0x18(0x8)
	struct FName NotifyFunctionName; // 0x20(0x8)
	struct FName BindingWidgetName; // 0x28(0x8)
	struct FName SlotWidgetName; // 0x30(0x8)
	bool bIsRootWidget; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct FGuid SectionGuid; // 0x3C(0x10)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct SolarUI.SolarTimelineMaterialEntry
// Size: 0xA8 (Inherited: 0x0)
struct FSolarTimelineMaterialEntry
{
	struct TArray<struct USolarMaterialBoolChannel*> BoolChannels; // 0x0(0x10)
	struct TArray<struct USolarMaterialScalarChannel*> ScalarChannels; // 0x10(0x10)
	struct TArray<struct USolarMaterialVectorChannel*> VectorChannels; // 0x20(0x10)
	struct TArray<struct USolarMaterialColorChannel*> ColorChannels; // 0x30(0x10)
	struct TArray<struct USolarMaterialTransformChannel*> TransformChannels; // 0x40(0x10)
	struct FName TrackName; // 0x50(0x8)
	struct FSolarTimelinePropertySectionData PropertyData; // 0x58(0x50)
};

// Object: ScriptStruct SolarUI.SolarTimelineByteEntry
// Size: 0x60 (Inherited: 0x0)
struct FSolarTimelineByteEntry
{
	struct USolarByteChannel* ByteChannel; // 0x0(0x8)
	struct FName TrackName; // 0x8(0x8)
	struct FSolarTimelinePropertySectionData PropertyData; // 0x10(0x50)
};

// Object: ScriptStruct SolarUI.SolarTimelineTransformEntry
// Size: 0x78 (Inherited: 0x0)
struct FSolarTimelineTransformEntry
{
	struct USolarCurveVector* TranslationCurve; // 0x0(0x8)
	struct USolarCurveVector* ScaleCurve; // 0x8(0x8)
	struct USolarCurveVector* ShearCurve; // 0x10(0x8)
	struct UCurveFloat* AngleCurve; // 0x18(0x8)
	struct FName TrackName; // 0x20(0x8)
	struct FSolarTimelinePropertySectionData PropertyData; // 0x28(0x50)
};

// Object: ScriptStruct SolarUI.SolarTimelineLinearColorEntry
// Size: 0x60 (Inherited: 0x0)
struct FSolarTimelineLinearColorEntry
{
	struct UCurveLinearColor* LinearColorCurve; // 0x0(0x8)
	struct FName TrackName; // 0x8(0x8)
	struct FSolarTimelinePropertySectionData PropertyData; // 0x10(0x50)
};

// Object: ScriptStruct SolarUI.SolarTimelineVectorEntry
// Size: 0x68 (Inherited: 0x0)
struct FSolarTimelineVectorEntry
{
	struct USolarCurveVector* VectorCurve; // 0x0(0x8)
	int32_t ChannelNum; // 0x8(0x4)
	uint8_t ChannelUsedFlag; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName TrackName; // 0x10(0x8)
	struct FSolarTimelinePropertySectionData PropertyData; // 0x18(0x50)
};

// Object: ScriptStruct SolarUI.SolarTimelineFloatEntry
// Size: 0x60 (Inherited: 0x0)
struct FSolarTimelineFloatEntry
{
	struct UCurveFloat* FloatCurve; // 0x0(0x8)
	struct FName TrackName; // 0x8(0x8)
	struct FSolarTimelinePropertySectionData PropertyData; // 0x10(0x50)
};

} // namespace SDK
