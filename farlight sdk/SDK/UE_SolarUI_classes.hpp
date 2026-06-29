// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SolarUI.SolarNavigationBase
// Size: 0x310 (Inherited: 0x268)
struct USolarNavigationBase : UUserWidget
{
	struct TMap<struct FName, struct FSolarWidgetNavigationData> VisualNavigationData; // 0x268(0x50)
	struct TMap<struct FName, uint16_t> WidgetHashTable; // 0x2B8(0x50)
	uint8_t Pad_0x308[0x8]; // 0x308(0x8)
};

// Object: Class SolarUI.SolarUserWidgetBase
// Size: 0x3B0 (Inherited: 0x310)
struct USolarUserWidgetBase : USolarNavigationBase
{
	bool bPreviewUseWidget; // 0x309(0x1)
	struct TWeakObjectPtr<struct UWidgetAnimation> PlayingAnimation; // 0x30C(0x8)
	uint8_t Pad_0x319[0xF]; // 0x319(0xF)
	struct TArray<struct FPlayAnimationParams> PendingPlayAnimations; // 0x328(0x10)
	struct TArray<struct USolarWidgetTimelinePlayer*> ActiveTimelinePlayers; // 0x338(0x10)
	struct TArray<struct USolarWidgetTimelinePlayer*> StoppedTimelinePlayers; // 0x348(0x10)
	struct TMap<struct UWidgetAnimation*, struct UUMGSequencePlayer*> DummyPlayers; // 0x358(0x50)
	uint8_t Pad_0x3A8[0x8]; // 0x3A8(0x8)


	// Object: Function SolarUI.SolarUserWidgetBase.SetBlockInputForOneTick
	// Flags: [Final|Native|Public]
	// Offset: 0x3877060
	// Params: [ Num(0) Size(0x0) ]
	void SetBlockInputForOneTick();

	// Object: Function SolarUI.SolarUserWidgetBase.ReceivePlatformLayout
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void ReceivePlatformLayout(enum class EUSolarWidgetLayoutType InLayoutType);

	// Object: Function SolarUI.SolarUserWidgetBase.PlayAnimationByName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3877264
	// Params: [ Num(6) Size(0x19) ]
	bool PlayAnimationByName(struct FName& AnimationName, float StartAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed);

	// Object: Function SolarUI.SolarUserWidgetBase.PlayAnimationByExclusively
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3877074
	// Params: [ Num(6) Size(0x19) ]
	void PlayAnimationByExclusively(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed, bool bRestoreState);

	// Object: Function SolarUI.SolarUserWidgetBase.OnSynchronizeProperties
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnSynchronizeProperties();

	// Object: Function SolarUI.SolarUserWidgetBase.OnExclusivelyAnimationFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x3876dd8
	// Params: [ Num(0) Size(0x0) ]
	void OnExclusivelyAnimationFinished();

	// Object: Function SolarUI.SolarUserWidgetBase.IsPlatformDesktop
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3877020
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlatformDesktop();

	// Object: Function SolarUI.SolarUserWidgetBase.GetChildWidgetFromName_BP
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3876f64
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetChildWidgetFromName_BP(struct FName& InWidgetName);

	// Object: Function SolarUI.SolarUserWidgetBase.GetChildUserWidgetFromName_BP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3876ea8
	// Params: [ Num(2) Size(0x18) ]
	struct USolarUserWidgetBase* GetChildUserWidgetFromName_BP(struct FString InWidgetName);

	// Object: Function SolarUI.SolarUserWidgetBase.GetChildAdapterWidgetFromName_BP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3876dec
	// Params: [ Num(2) Size(0x18) ]
	struct USolarAdapterWidgetBase* GetChildAdapterWidgetFromName_BP(struct FString InWidgetName);

	// Object: Function SolarUI.SolarUserWidgetBase.GetAnimationByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0x387742c
	// Params: [ Num(2) Size(0x10) ]
	struct UWidgetAnimation* GetAnimationByName(struct FName& AnimationName);
};

// Object: Class SolarUI.SolarAdapterSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct ISolarAdapterSlotInterface : IInterface
{

	// Object: Function SolarUI.SolarAdapterSlotInterface.OnLoadAdapterSlotWidgetFinished
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3870bc8
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadAdapterSlotWidgetFinished();

	// Object: Function SolarUI.SolarAdapterSlotInterface.OnChangeAdapterSlotWidgetParameters
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3870910
	// Params: [ Num(1) Size(0x10) ]
	void OnChangeAdapterSlotWidgetParameters(struct TArray<struct FWidgetOverrideParam>& Params);
};

// Object: Class SolarUI.SolarAdapterWidgetBase
// Size: 0x240 (Inherited: 0x158)
struct USolarAdapterWidgetBase : UContentWidget
{
	struct FMulticastInlineDelegate OnWidgetLoaded; // 0x158(0x10)
	enum class EWidgetLoadType WidgetLoadType; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
	struct FSoftClassPath MobileWidgetPath; // 0x170(0x18)
	struct FSoftClassPath DesktopWidgetPath; // 0x188(0x18)
	enum class EUseDesktopWidgetType UseDesktopWidgetType; // 0x1A0(0x1)
	uint8_t Pad_0x1A1[0x7]; // 0x1A1(0x7)
	struct TArray<struct FWidgetOverrideParam> OverrideParamList; // 0x1A8(0x10)
	struct UUserWidget* CacheUserWidgetClass; // 0x1B8(0x8)
	struct TMap<struct FString, struct UUserWidget*> CacheWidgetMap; // 0x1C0(0x50)
	struct UUserWidget* AdapteeWidget; // 0x210(0x8)
	bool bNeedExecuteWidgetOpened; // 0x218(0x1)
	uint8_t Pad_0x219[0x27]; // 0x219(0x27)


	// Object: Function SolarUI.SolarAdapterWidgetBase.SetUseDesktopWidgetType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3871888
	// Params: [ Num(1) Size(0x1) ]
	void SetUseDesktopWidgetType(enum class EUseDesktopWidgetType InType);

	// Object: Function SolarUI.SolarAdapterWidgetBase.SetNeedExecuteWidgetOpened
	// Flags: [Final|Native|Public]
	// Offset: 0x38717d8
	// Params: [ Num(1) Size(0x1) ]
	void SetNeedExecuteWidgetOpened(bool bInNeedExecuteWidgetOpened);

	// Object: Function SolarUI.SolarAdapterWidgetBase.SetAdapterMargin
	// Flags: [Final|Native|Public]
	// Offset: 0x38716f4
	// Params: [ Num(1) Size(0x10) ]
	void SetAdapterMargin(struct FMargin InMargin);

	// Object: Function SolarUI.SolarAdapterWidgetBase.RefreshUIByOverrideParams
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3871930
	// Params: [ Num(1) Size(0x10) ]
	void RefreshUIByOverrideParams(struct TArray<struct FWidgetOverrideParam>& WidgetOverrideParams);

	// Object: Function SolarUI.SolarAdapterWidgetBase.LoadUserWidgetResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3871ca0
	// Params: [ Num(0) Size(0x0) ]
	void LoadUserWidgetResource();

	// Object: Function SolarUI.SolarAdapterWidgetBase.LoadUserWidgetAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3871c8c
	// Params: [ Num(0) Size(0x0) ]
	void LoadUserWidgetAsync();

	// Object: Function SolarUI.SolarAdapterWidgetBase.IsNeedExecuteWidgetOpened
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x38717a0
	// Params: [ Num(1) Size(0x1) ]
	bool IsNeedExecuteWidgetOpened();

	// Object: Function SolarUI.SolarAdapterWidgetBase.IsLoadedWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3871c20
	// Params: [ Num(1) Size(0x1) ]
	bool IsLoadedWidget();

	// Object: Function SolarUI.SolarAdapterWidgetBase.GetNeedAdapter
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0x3871634
	// Params: [ Num(2) Size(0x11) ]
	bool GetNeedAdapter(struct FMargin& OutMargin);

	// Object: Function SolarUI.SolarAdapterWidgetBase.GetChildWidgetFromName_BP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3871b64
	// Params: [ Num(2) Size(0x18) ]
	struct UWidget* GetChildWidgetFromName_BP(struct FString InWidgetName);

	// Object: Function SolarUI.SolarAdapterWidgetBase.GetChildUserWidgetFromName_BP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3871aa8
	// Params: [ Num(2) Size(0x18) ]
	struct USolarUserWidgetBase* GetChildUserWidgetFromName_BP(struct FString InWidgetName);

	// Object: Function SolarUI.SolarAdapterWidgetBase.GetChildAdapterWidgetFromName_BP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x38719ec
	// Params: [ Num(2) Size(0x18) ]
	struct USolarAdapterWidgetBase* GetChildAdapterWidgetFromName_BP(struct FString InWidgetName);

	// Object: Function SolarUI.SolarAdapterWidgetBase.GetAdapteeWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3871c58
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetAdapteeWidget();
};

// Object: Class SolarUI.SolarNavigableWidgetBase
// Size: 0x298 (Inherited: 0x268)
struct USolarNavigableWidgetBase : UUserWidget
{
	struct FMulticastInlineDelegate BeginNavigateEvent; // 0x268(0x10)
	struct FMulticastInlineDelegate EndNavigateEvent; // 0x278(0x10)
	struct TArray<struct FKey> NavigationAcceptKeys; // 0x288(0x10)


	// Object: Function SolarUI.SolarNavigableWidgetBase.EndNavigate
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x3872ca4
	// Params: [ Num(0) Size(0x0) ]
	void EndNavigate();

	// Object: Function SolarUI.SolarNavigableWidgetBase.BeginNavigate
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x3872cc0
	// Params: [ Num(0) Size(0x0) ]
	void BeginNavigate();

	// Object: Function SolarUI.SolarNavigableWidgetBase.AcceptNavigate
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x3872c2c
	// Params: [ Num(1) Size(0xB8) ]
	struct FEventReply AcceptNavigate();
};

// Object: Class SolarUI.SolarNavigableButtonWidget
// Size: 0x410 (Inherited: 0x298)
struct USolarNavigableButtonWidget : USolarNavigableWidgetBase
{
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x2A8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x2B8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2C8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2D8(0x10)
	struct UButton* Button; // 0x2E8(0x8)
	struct FSlateBrush CachedNormalBrush; // 0x2F0(0x120)


	// Object: Function SolarUI.SolarNavigableButtonWidget.OnUnhoveredEvent
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x3872360
	// Params: [ Num(0) Size(0x0) ]
	void OnUnhoveredEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.OnReleasedEvent
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x38723c0
	// Params: [ Num(0) Size(0x0) ]
	void OnReleasedEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.OnPressedEvent
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x38723f0
	// Params: [ Num(0) Size(0x0) ]
	void OnPressedEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.OnHoveredEvent
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x3872390
	// Params: [ Num(0) Size(0x0) ]
	void OnHoveredEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.OnClickedEvent
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x3872420
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.HandleUnhoveredEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x387234c
	// Params: [ Num(0) Size(0x0) ]
	void HandleUnhoveredEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.HandleReleasedEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x38723ac
	// Params: [ Num(0) Size(0x0) ]
	void HandleReleasedEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.HandlePressedEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x38723dc
	// Params: [ Num(0) Size(0x0) ]
	void HandlePressedEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.HandleHoveredEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x387237c
	// Params: [ Num(0) Size(0x0) ]
	void HandleHoveredEvent();

	// Object: Function SolarUI.SolarNavigableButtonWidget.HandleClickEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x387240c
	// Params: [ Num(0) Size(0x0) ]
	void HandleClickEvent();
};

// Object: Class SolarUI.SolarPanelSlotAdapter
// Size: 0x38 (Inherited: 0x28)
struct USolarPanelSlotAdapter : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
};

// Object: Class SolarUI.SolarButtonSlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarButtonSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarCanvasPanelSlotAdapter
// Size: 0x70 (Inherited: 0x38)
struct USolarCanvasPanelSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x38]; // 0x38(0x38)
};

// Object: Class SolarUI.SolarGridSlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarGridSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarHorizontalBoxSlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarHorizontalBoxSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarOverlaySlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarOverlaySlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarScaleBoxSlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarScaleBoxSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarScrollBoxSlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarScrollBoxSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarSizeBoxSlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarSizeBoxSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarUniformGridSlotAdapter
// Size: 0x48 (Inherited: 0x38)
struct USolarUniformGridSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
};

// Object: Class SolarUI.SolarVerticalBoxSlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarVerticalBoxSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarWidgetSwitcherSlotAdapter
// Size: 0x50 (Inherited: 0x38)
struct USolarWidgetSwitcherSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class SolarUI.SolarWrapBoxSlotAdapter
// Size: 0x58 (Inherited: 0x38)
struct USolarWrapBoxSlotAdapter : USolarPanelSlotAdapter
{
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
};

// Object: Class SolarUI.SolarScrollTextBase
// Size: 0x750 (Inherited: 0x140)
struct USolarScrollTextBase : UWidget
{
	struct FText Text; // 0x140(0x18)
	enum class ESolarScrollTextType ScrollType; // 0x158(0x1)
	enum class ESolarScrollTextDirection ScrollDirection; // 0x159(0x1)
	uint8_t Pad_0x15A[0x2]; // 0x15A(0x2)
	float ScrollSpeed; // 0x15C(0x4)
	float DisplayTime; // 0x160(0x4)
	enum class ESolarScrollTextWaitingType WaitingType; // 0x164(0x1)
	uint8_t Pad_0x165[0x3]; // 0x165(0x3)
	float Interval; // 0x168(0x4)
	float StartPosition; // 0x16C(0x4)
	float EndPosition; // 0x170(0x4)
	struct FVector2D WidgetSize; // 0x174(0x8)
	bool bOverrideTextLayoutSize; // 0x17C(0x1)
	uint8_t Pad_0x17D[0x3]; // 0x17D(0x3)
	struct FVector2D TextLayoutSize; // 0x180(0x8)
	uint8_t Pad_0x188[0x8]; // 0x188(0x8)
	struct FTextBlockStyle TextStyle; // 0x190(0x590)
	float MinDesiredWidth; // 0x720(0x4)
	uint8_t Justification; // 0x724(0x1)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x725(0x1)
	bool AutoWrapText; // 0x726(0x1)
	uint8_t Pad_0x727[0x1]; // 0x727(0x1)
	float WrapTextAt; // 0x728(0x4)
	struct FMargin Margin; // 0x72C(0x10)
	float LineHeightPercentage; // 0x73C(0x4)
	uint8_t Pad_0x740[0x10]; // 0x740(0x10)


	// Object: Function SolarUI.SolarScrollTextBase.SetWrapTextAt
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3874cf8
	// Params: [ Num(1) Size(0x4) ]
	void SetWrapTextAt(float InWrapTextAt);

	// Object: Function SolarUI.SolarScrollTextBase.SetWaitingType
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x387544c
	// Params: [ Num(1) Size(0x1) ]
	void SetWaitingType(enum class ESolarScrollTextWaitingType InWaitingType);

	// Object: Function SolarUI.SolarScrollTextBase.SetTextLayoutSize
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3874fc0
	// Params: [ Num(1) Size(0x8) ]
	void SetTextLayoutSize(struct FVector2D InTextLayoutSize);

	// Object: Function SolarUI.SolarScrollTextBase.SetTextBlockStyle
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3874ac4
	// Params: [ Num(1) Size(0x590) ]
	void SetTextBlockStyle(struct FTextBlockStyle InTextStyle);

	// Object: Function SolarUI.SolarScrollTextBase.SetText
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3875124
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function SolarUI.SolarScrollTextBase.SetScrollType
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x387570c
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollType(enum class ESolarScrollTextType InScrollType);

	// Object: Function SolarUI.SolarScrollTextBase.SetScrollSpeed
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x38755ac
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollSpeed(float InScrollSpeed);

	// Object: Function SolarUI.SolarScrollTextBase.SetScrollDirection
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x387565c
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollDirection(enum class ESolarScrollTextDirection InScrollDirection);

	// Object: Function SolarUI.SolarScrollTextBase.SetPosition
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x38752b0
	// Params: [ Num(2) Size(0x8) ]
	void SetPosition(float InStartPosition, float InEndPosition);

	// Object: Function SolarUI.SolarScrollTextBase.SetOverrideTextLayoutSize
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x387506c
	// Params: [ Num(1) Size(0x1) ]
	void SetOverrideTextLayoutSize(bool bInOverrideTextLayoutSize);

	// Object: Function SolarUI.SolarScrollTextBase.SetMinDesiredWidth
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3874f10
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function SolarUI.SolarScrollTextBase.SetMargin
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3874c44
	// Params: [ Num(1) Size(0x10) ]
	void SetMargin(struct FMargin InMargin);

	// Object: Function SolarUI.SolarScrollTextBase.SetLineHeightPercentage
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3874b94
	// Params: [ Num(1) Size(0x4) ]
	void SetLineHeightPercentage(float InLineHeightPercentage);

	// Object: Function SolarUI.SolarScrollTextBase.SetJustification
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3874e60
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(uint8_t InJustification);

	// Object: Function SolarUI.SolarScrollTextBase.SetInterval
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x387539c
	// Params: [ Num(1) Size(0x4) ]
	void SetInterval(float InFixedInterval);

	// Object: Function SolarUI.SolarScrollTextBase.SetDisplayTime
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x38754fc
	// Params: [ Num(1) Size(0x4) ]
	void SetDisplayTime(float InDisplayTime);

	// Object: Function SolarUI.SolarScrollTextBase.SetAutoWrapText
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3874da8
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoWrapText(bool bInAutoWrapText);
};

// Object: Class SolarUI.SolarSpline
// Size: 0x168 (Inherited: 0x140)
struct USolarSpline : UWidget
{
	struct TArray<struct FBezierSplineCurve> SplineCurveGroup; // 0x140(0x10)
	bool bDrawClosingMask; // 0x150(0x1)
	uint8_t Pad_0x151[0x17]; // 0x151(0x17)


	// Object: Function SolarUI.SolarSpline.SetDrawClosingMask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3876064
	// Params: [ Num(1) Size(0x1) ]
	void SetDrawClosingMask(bool bShouldDraw);

	// Object: Function SolarUI.SolarSpline.ClearSplineCurve
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3876114
	// Params: [ Num(0) Size(0x0) ]
	void ClearSplineCurve();

	// Object: Function SolarUI.SolarSpline.AddSplineCurve
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3876128
	// Params: [ Num(1) Size(0x18) ]
	void AddSplineCurve(struct FBezierSplineCurve& InCurve);
};

// Object: Class SolarUI.SolarUIRuntimeSettings
// Size: 0x58 (Inherited: 0x38)
struct USolarUIRuntimeSettings : UDeveloperSettings
{
	struct FSoftObjectPath SpriteAtlasManagerPath; // 0x38(0x18)
	struct UPaperSpriteAtlasManager* PaperSpriteAtlasManager; // 0x50(0x8)
};

// Object: Class SolarUI.SolarUISettings
// Size: 0x58 (Inherited: 0x38)
struct USolarUISettings : UDeveloperSettings
{
	struct TArray<struct FSolarUIMapWidgetAdapterEntry> WidgetAdapterMapList; // 0x38(0x10)
	struct TArray<struct FSolarUIMapPanelSlotAdapterEntry> PanelSlotAdapterMapList; // 0x48(0x10)
};

// Object: Class SolarUI.SolarWidgetAdapter
// Size: 0x78 (Inherited: 0x28)
struct USolarWidgetAdapter : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	struct USolarPanelSlotAdapter* SlotAdapter; // 0x40(0x8)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)
};

// Object: Class SolarUI.SolarImageAdapter
// Size: 0x1B0 (Inherited: 0x78)
struct USolarImageAdapter : USolarWidgetAdapter
{
	uint8_t Pad_0x78[0x138]; // 0x78(0x138)
};

// Object: Class SolarUI.SolarTextBlockAdapter
// Size: 0x120 (Inherited: 0x78)
struct USolarTextBlockAdapter : USolarWidgetAdapter
{
	uint8_t Pad_0x78[0xA8]; // 0x78(0xA8)
};

// Object: Class SolarUI.SolarButtonAdapter
// Size: 0xA0 (Inherited: 0x78)
struct USolarButtonAdapter : USolarWidgetAdapter
{
	uint8_t Pad_0x78[0x28]; // 0x78(0x28)
};

// Object: Class SolarUI.SolarSizeBoxAdapter
// Size: 0x90 (Inherited: 0x78)
struct USolarSizeBoxAdapter : USolarWidgetAdapter
{
	uint8_t Pad_0x78[0x18]; // 0x78(0x18)
};

// Object: Class SolarUI.SolarRichTextBlockAdapter
// Size: 0x120 (Inherited: 0x78)
struct USolarRichTextBlockAdapter : USolarWidgetAdapter
{
	uint8_t Pad_0x78[0xA8]; // 0x78(0xA8)
};

// Object: Class SolarUI.SolarListViewAdapter
// Size: 0x80 (Inherited: 0x78)
struct USolarListViewAdapter : USolarWidgetAdapter
{
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class SolarUI.SolarTileViewAdapter
// Size: 0x90 (Inherited: 0x78)
struct USolarTileViewAdapter : USolarWidgetAdapter
{
	uint8_t Pad_0x78[0x18]; // 0x78(0x18)
};

// Object: Class SolarUI.SolarWidgetContext
// Size: 0xC8 (Inherited: 0x28)
struct USolarWidgetContext : UObject
{
	struct TMap<struct UObject*, struct USolarWidgetAdapter*> DefaultWidgetAdapterDict; // 0x28(0x50)
	struct TMap<struct UObject*, struct USolarPanelSlotAdapter*> DefaultPanelSlotAdapterDict; // 0x78(0x50)
};

// Object: Class SolarUI.SolarWidgetLayout
// Size: 0x48 (Inherited: 0x28)
struct USolarWidgetLayout : UObject
{
	struct USolarWidgetContext* WidgetContext; // 0x28(0x8)
	struct TArray<struct USolarWidgetLayoutPlatform*> LayoutPlatforms; // 0x30(0x10)
	enum class ESolarWidgetCustomVersion CustomVersion; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: Class SolarUI.SolarWidgetLayoutPlatform
// Size: 0xD8 (Inherited: 0x28)
struct USolarWidgetLayoutPlatform : UObject
{
	enum class EUSolarWidgetLayoutType WidgetLayoutType; // 0x28(0x1)
	uint8_t Pad_0x29[0xF]; // 0x29(0xF)
	struct TMap<struct FName, struct USolarWidgetAdapter*> WidgetAdapterDict; // 0x38(0x50)
	uint8_t Pad_0x88[0x50]; // 0x88(0x50)
};

// Object: Class SolarUI.SolarWidgetLayoutTest
// Size: 0x3B0 (Inherited: 0x3B0)
struct USolarWidgetLayoutTest : USolarUserWidgetBase
{
};

// Object: Class SolarUI.SolarWidgetLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarWidgetLibrary : UBlueprintFunctionLibrary
{

	// Object: Function SolarUI.SolarWidgetLibrary.SetListViewItemFocus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3878f1c
	// Params: [ Num(2) Size(0xC) ]
	void SetListViewItemFocus(struct UListView* ListView, int32_t Index);

	// Object: Function SolarUI.SolarWidgetLibrary.NavigateToWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3878ff4
	// Params: [ Num(1) Size(0x8) ]
	void NavigateToWidget(struct UWidget* Widget);

	// Object: Function SolarUI.SolarWidgetLibrary.NavigateTo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x387908c
	// Params: [ Num(1) Size(0x8) ]
	void NavigateTo(struct UWidget* WidgetToNavigate);

	// Object: Function SolarUI.SolarWidgetLibrary.GetCustomLayoutJsonString
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3878cec
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetCustomLayoutJsonString(struct FString InWidgetBlueprintJsonPath);

	// Object: Function SolarUI.SolarWidgetLibrary.BreakSlateBrushAtlasAdapter
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3878dd8
	// Params: [ Num(3) Size(0x20) ]
	void BreakSlateBrushAtlasAdapter(struct FSlateBrushAtlasAdapter& InAtlasAdapter, struct FName& OutSpriteName, struct UObject*& OutResourceObject);
};

// Object: Class SolarUI.SolarWidgetTimeline
// Size: 0x140 (Inherited: 0x28)
struct USolarWidgetTimeline : UObject
{
	float Length; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FSolarTimelineFloatEntry> InterpFloats; // 0x30(0x10)
	struct TArray<struct FSolarTimelineVectorEntry> InterpVectors; // 0x40(0x10)
	struct TArray<struct FSolarTimelineLinearColorEntry> InterpLinearColors; // 0x50(0x10)
	struct TArray<struct FSolarTimelineTransformEntry> InterpTransforms; // 0x60(0x10)
	struct TArray<struct FSolarTimelineByteEntry> InterpBytes; // 0x70(0x10)
	struct TArray<struct FSolarTimelineMaterialEntry> InterpMaterials; // 0x80(0x10)
	struct TArray<struct FSolarTimelineEventEntry> Events; // 0x90(0x10)
	uint8_t Pad_0xA0[0xA0]; // 0xA0(0xA0)
};

// Object: Class SolarUI.SolarWidgetTimelinePlayer
// Size: 0x58 (Inherited: 0x28)
struct USolarWidgetTimelinePlayer : UObject
{
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	struct TWeakObjectPtr<struct USolarWidgetTimeline> BindingTimeline; // 0x40(0x8)
	struct TWeakObjectPtr<struct UUserWidget> OwnerWidget; // 0x48(0x8)
	struct TWeakObjectPtr<struct UWidgetAnimation> AnimationFrom; // 0x50(0x8)
};

// Object: Class SolarUI.SolarCurveVector
// Size: 0x238 (Inherited: 0x30)
struct USolarCurveVector : UCurveBase
{
	struct FRichCurve FloatCurves[0x4]; // 0x30(0x200)
	int32_t ChannelUsed; // 0x230(0x4)
	bool bIsMarginType; // 0x234(0x1)
	uint8_t Pad_0x235[0x3]; // 0x235(0x3)
};

// Object: Class SolarUI.SolarByteChannel
// Size: 0x50 (Inherited: 0x28)
struct USolarByteChannel : UObject
{
	struct TArray<float> Times; // 0x28(0x10)
	struct TArray<uint8_t> Values; // 0x38(0x10)
	struct UEnum* Enum; // 0x48(0x8)


	// Object: Function SolarUI.SolarByteChannel.GetByteValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x387a7a8
	// Params: [ Num(5) Size(0xB) ]
	bool GetByteValue(float OldTime, float NewTime, bool bReversePlayback, uint8_t& OutValue);
};

// Object: Class SolarUI.SolarMaterialChannelBase
// Size: 0x30 (Inherited: 0x28)
struct USolarMaterialChannelBase : UObject
{
	struct FName ParameterName; // 0x28(0x8)
};

// Object: Class SolarUI.SolarMaterialBoolChannel
// Size: 0x38 (Inherited: 0x30)
struct USolarMaterialBoolChannel : USolarMaterialChannelBase
{
	struct USolarByteChannel* BoolChannel; // 0x30(0x8)
};

// Object: Class SolarUI.SolarMaterialScalarChannel
// Size: 0x38 (Inherited: 0x30)
struct USolarMaterialScalarChannel : USolarMaterialChannelBase
{
	struct UCurveFloat* FloatCurve; // 0x30(0x8)
};

// Object: Class SolarUI.SolarMaterialVectorChannel
// Size: 0x40 (Inherited: 0x30)
struct USolarMaterialVectorChannel : USolarMaterialChannelBase
{
	struct USolarCurveVector* VectorCurve; // 0x30(0x8)
	int32_t ChannelNum; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class SolarUI.SolarMaterialColorChannel
// Size: 0x38 (Inherited: 0x30)
struct USolarMaterialColorChannel : USolarMaterialChannelBase
{
	struct USolarCurveVector* ColorCurve; // 0x30(0x8)
};

// Object: Class SolarUI.SolarMaterialTransformChannel
// Size: 0x48 (Inherited: 0x30)
struct USolarMaterialTransformChannel : USolarMaterialChannelBase
{
	struct USolarCurveVector* TranslationCurve; // 0x30(0x8)
	struct USolarCurveVector* RotationCurve; // 0x38(0x8)
	struct USolarCurveVector* ScaleCurve; // 0x40(0x8)
};

// Object: Class SolarUI.SolarTriggerEventChannel
// Size: 0x48 (Inherited: 0x28)
struct USolarTriggerEventChannel : UObject
{
	struct TArray<float> Times; // 0x28(0x10)
	struct TArray<struct FMovieSceneEvent> Events; // 0x38(0x10)
};

// Object: Class SolarUI.SolarRepeaterEventChannel
// Size: 0x58 (Inherited: 0x28)
struct USolarRepeaterEventChannel : UObject
{
	float StartTime; // 0x28(0x4)
	float EndTime; // 0x2C(0x4)
	struct FMovieSceneEvent Event; // 0x30(0x28)
};

} // namespace SDK
