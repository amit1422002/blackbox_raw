// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class CommonUI.AnalogSlider
// Size: 0x930 (Inherited: 0x910)
struct UAnalogSlider : USlider
{
	struct FMulticastInlineDelegate OnAnalogCapture; // 0x910(0x10)
	uint8_t Pad_0x920[0x10]; // 0x920(0x10)
};

// Object: Class CommonUI.CommonActionHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct ICommonActionHandlerInterface : IInterface
{
};

// Object: Class CommonUI.CommonActionWidget
// Size: 0x530 (Inherited: 0x140)
struct UCommonActionWidget : UWidget
{
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x140(0x10)
	struct FSlateBrush ProgressMaterialBrush; // 0x150(0x120)
	struct FName ProgressMaterialParam; // 0x270(0x8)
	uint8_t Pad_0x278[0x8]; // 0x278(0x8)
	struct FSlateBrush IconRimBrush; // 0x280(0x120)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x3A0(0x10)
	uint8_t Pad_0x3B0[0x8]; // 0x3B0(0x8)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x3B8(0x8)
	uint8_t Pad_0x3C0[0x170]; // 0x3C0(0x170)


	// Object: Function CommonUI.CommonActionWidget.SetInputActions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366caf0
	// Params: [ Num(1) Size(0x10) ]
	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions);

	// Object: Function CommonUI.CommonActionWidget.SetInputAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366cbec
	// Params: [ Num(1) Size(0x10) ]
	void SetInputAction(struct FDataTableRowHandle InputActionRow);

	// Object: Function CommonUI.CommonActionWidget.SetIconRimBrush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366c63c
	// Params: [ Num(1) Size(0x120) ]
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush);

	// Object: DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);

	// Object: Function CommonUI.CommonActionWidget.IsHeldAction
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366c604
	// Params: [ Num(1) Size(0x1) ]
	bool IsHeldAction();

	// Object: Function CommonUI.CommonActionWidget.GetIcon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366cd64
	// Params: [ Num(1) Size(0x120) ]
	struct FSlateBrush GetIcon();

	// Object: Function CommonUI.CommonActionWidget.GetDisplayText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366cc94
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetDisplayText();
};

// Object: Class CommonUI.CommonUserWidget
// Size: 0x290 (Inherited: 0x268)
struct UCommonUserWidget : UUserWidget
{
	bool bConsumePointerInput; // 0x268(0x1)
	uint8_t Pad_0x269[0x27]; // 0x269(0x27)


	// Object: Function CommonUI.CommonUserWidget.SetConsumePointerInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36820d8
	// Params: [ Num(1) Size(0x1) ]
	void SetConsumePointerInput(bool bInConsumePointerInput);
};

// Object: Class CommonUI.CommonActivatableWidget
// Size: 0x328 (Inherited: 0x290)
struct UCommonActivatableWidget : UCommonUserWidget
{
	bool bAutoActivate; // 0x290(0x1)
	bool bIsBackHandler; // 0x291(0x1)
	bool bSupportsActivationFocus; // 0x292(0x1)
	bool bIsModal; // 0x293(0x1)
	bool bAutoRestoreFocus; // 0x294(0x1)
	bool bSetVisibilityOnActivated; // 0x295(0x1)
	enum class ESlateVisibility ActivatedVisibility; // 0x296(0x1)
	bool bSetVisibilityOnDeactivated; // 0x297(0x1)
	enum class ESlateVisibility DeactivatedVisibility; // 0x298(0x1)
	uint8_t Pad_0x299[0x7]; // 0x299(0x7)
	struct FMulticastInlineDelegate BP_OnWidgetActivated; // 0x2A0(0x10)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x2B0(0x10)
	bool bIsActive; // 0x2C0(0x1)
	uint8_t Pad_0x2C1[0x67]; // 0x2C1(0x67)


	// Object: Function CommonUI.CommonActivatableWidget.IsActivated
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366d318
	// Params: [ Num(1) Size(0x1) ]
	bool IsActivated();

	// Object: Function CommonUI.CommonActivatableWidget.DeactivateWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366d2f0
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateWidget();

	// Object: Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	bool BP_OnHandleBackAction();

	// Object: Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnDeactivated();

	// Object: Function CommonUI.CommonActivatableWidget.BP_OnActivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnActivated();

	// Object: Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* BP_GetDesiredFocusTarget();

	// Object: Function CommonUI.CommonActivatableWidget.ActivateWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366d304
	// Params: [ Num(0) Size(0x0) ]
	void ActivateWidget();
};

// Object: Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x240 (Inherited: 0x140)
struct UCommonActivatableWidgetContainerBase : UWidget
{
	enum class ECommonSwitcherTransition TransitionType; // 0x140(0x1)
	enum class ETransitionCurve TransitionCurveType; // 0x141(0x1)
	uint8_t Pad_0x142[0x2]; // 0x142(0x2)
	float TransitionDuration; // 0x144(0x4)
	struct TArray<struct UCommonActivatableWidget*> WidgetList; // 0x148(0x10)
	struct UCommonActivatableWidget* DisplayedWidget; // 0x158(0x8)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x160(0x80)
	uint8_t Pad_0x1E0[0x60]; // 0x1E0(0x60)


	// Object: Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x366da8c
	// Params: [ Num(1) Size(0x8) ]
	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove);

	// Object: Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366dbf8
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonActivatableWidget* GetActiveWidget();

	// Object: Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366dbe4
	// Params: [ Num(0) Size(0x0) ]
	void ClearWidgets();

	// Object: Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x366db34
	// Params: [ Num(2) Size(0x10) ]
	struct UCommonActivatableWidget* BP_AddWidget(struct UCommonActivatableWidget* ActivatableWidgetClass);
};

// Object: Class CommonUI.CommonActivatableWidgetStack
// Size: 0x250 (Inherited: 0x240)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase
{
	struct UCommonActivatableWidget* RootContentWidgetClass; // 0x240(0x8)
	struct UCommonActivatableWidget* RootContentWidget; // 0x248(0x8)
};

// Object: Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x240 (Inherited: 0x240)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase
{
};

// Object: Class CommonUI.CommonAnimatedSwitcher
// Size: 0x1C0 (Inherited: 0x168)
struct UCommonAnimatedSwitcher : UWidgetSwitcher
{
	uint8_t Pad_0x168[0x18]; // 0x168(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x180(0x1)
	enum class ETransitionCurve TransitionCurveType; // 0x181(0x1)
	uint8_t Pad_0x182[0x2]; // 0x182(0x2)
	float TransitionDuration; // 0x184(0x4)
	uint8_t Pad_0x188[0x38]; // 0x188(0x38)


	// Object: Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366e36c
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableTransitionAnimation(bool bDisableAnimation);

	// Object: Function CommonUI.CommonAnimatedSwitcher.HasWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366e41c
	// Params: [ Num(1) Size(0x1) ]
	bool HasWidgets();

	// Object: Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366e454
	// Params: [ Num(1) Size(0x1) ]
	void ActivatePreviousWidget(bool bCanWrap);

	// Object: Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366e504
	// Params: [ Num(1) Size(0x1) ]
	void ActivateNextWidget(bool bCanWrap);
};

// Object: Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x1C0 (Inherited: 0x1C0)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher
{
};

// Object: Class CommonUI.CommonBorderStyle
// Size: 0x150 (Inherited: 0x28)
struct UCommonBorderStyle : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FSlateBrush Background; // 0x30(0x120)


	// Object: Function CommonUI.CommonBorderStyle.GetBackgroundBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366e860
	// Params: [ Num(1) Size(0x120) ]
	void GetBackgroundBrush(struct FSlateBrush& Brush);
};

// Object: Class CommonUI.CommonBorder
// Size: 0x360 (Inherited: 0x340)
struct UCommonBorder : UBorder
{
	struct UCommonBorderStyle* Style; // 0x340(0x8)
	bool bReducePaddingBySafezone; // 0x348(0x1)
	uint8_t Pad_0x349[0x3]; // 0x349(0x3)
	struct FMargin MinimumPadding; // 0x34C(0x10)
	uint8_t Pad_0x35C[0x4]; // 0x35C(0x4)


	// Object: Function CommonUI.CommonBorder.SetStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366ee30
	// Params: [ Num(1) Size(0x8) ]
	void SetStyle(struct UCommonBorderStyle* InStyle);
};

// Object: Class CommonUI.CommonBoundActionBar
// Size: 0x210 (Inherited: 0x200)
struct UCommonBoundActionBar : UDynamicEntryBoxBase
{
	struct UCommonBoundActionButton* ActionButtonClass; // 0x200(0x8)
	bool bDisplayOwningPlayerActionsOnly; // 0x208(0x1)
	uint8_t Pad_0x209[0x7]; // 0x209(0x7)


	// Object: Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x366f0e8
	// Params: [ Num(1) Size(0x1) ]
	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
};

// Object: Class CommonUI.CommonButtonBase
// Size: 0x12F0 (Inherited: 0x290)
struct UCommonButtonBase : UCommonUserWidget
{
	int32_t MinWidth; // 0x290(0x4)
	int32_t MinHeight; // 0x294(0x4)
	struct UCommonButtonStyle* Style; // 0x298(0x8)
	bool bHideInputAction; // 0x2A0(0x1)
	uint8_t Pad_0x2A1[0x7]; // 0x2A1(0x7)
	struct FSlateSound PressedSlateSoundOverride; // 0x2A8(0x18)
	struct FSlateSound HoveredSlateSoundOverride; // 0x2C0(0x18)
	uint8_t bApplyAlphaOnDisable : 1; // 0x2D8(0x1), Mask(0x1)
	uint8_t bSelectable : 1; // 0x2D8(0x1), Mask(0x2)
	uint8_t bShouldSelectUponReceivingFocus : 1; // 0x2D8(0x1), Mask(0x4)
	uint8_t bInteractableWhenSelected : 1; // 0x2D8(0x1), Mask(0x8)
	uint8_t bToggleable : 1; // 0x2D8(0x1), Mask(0x10)
	uint8_t bDisplayInputActionWhenNotInteractable : 1; // 0x2D8(0x1), Mask(0x20)
	uint8_t bHideInputActionWithKeyboard : 1; // 0x2D8(0x1), Mask(0x40)
	uint8_t bShouldUseFallbackDefaultInputAction : 1; // 0x2D8(0x1), Mask(0x80)
	uint8_t Pad_0x2D9[0x1]; // 0x2D9(0x1)
	uint8_t ClickMethod; // 0x2DA(0x1)
	uint8_t TouchMethod; // 0x2DB(0x1)
	uint8_t PressMethod; // 0x2DC(0x1)
	uint8_t Pad_0x2DD[0x3]; // 0x2DD(0x3)
	int32_t InputPriority; // 0x2E0(0x4)
	uint8_t Pad_0x2E4[0x4]; // 0x2E4(0x4)
	struct FDataTableRowHandle TriggeringInputAction; // 0x2E8(0x10)
	uint8_t Pad_0x2F8[0x10]; // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x308(0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x318(0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x328(0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x338(0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x348(0x10)
	uint8_t Pad_0x358[0x4]; // 0x358(0x4)
	bool bIsPersistentBinding; // 0x35C(0x1)
	enum class ECommonInputMode InputModeOverride; // 0x35D(0x1)
	uint8_t Pad_0x35E[0x32]; // 0x35E(0x32)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x390(0x8)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)
	struct FButtonStyle NormalStyle; // 0x3A0(0x4E0)
	struct FButtonStyle SelectedStyle; // 0x880(0x4E0)
	struct FButtonStyle DisabledStyle; // 0xD60(0x4E0)
	uint8_t bStopDoubleClickPropagation : 1; // 0x1240(0x1), Mask(0x1)
	uint8_t BitPad_0x1240_1 : 7; // 0x1240(0x1)
	uint8_t Pad_0x1241[0x9F]; // 0x1241(0x9F)
	struct UCommonActionWidget* InputActionWidget; // 0x12E0(0x8)
	uint8_t Pad_0x12E8[0x8]; // 0x12E8(0x8)


	// Object: Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3671bb4
	// Params: [ Num(0) Size(0x0) ]
	void StopDoubleClickPropagation();

	// Object: Function CommonUI.CommonButtonBase.SetTriggeringInputAction
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3672398
	// Params: [ Num(1) Size(0x10) ]
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow);

	// Object: Function CommonUI.CommonButtonBase.SetTriggeredInputAction
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x367244c
	// Params: [ Num(1) Size(0x10) ]
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow);

	// Object: Function CommonUI.CommonButtonBase.SetTouchMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672e24
	// Params: [ Num(1) Size(0x1) ]
	void SetTouchMethod(uint8_t InTouchMethod);

	// Object: Function CommonUI.CommonButtonBase.SetStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36727e8
	// Params: [ Num(1) Size(0x8) ]
	void SetStyle(struct UCommonButtonStyle* InStyle);

	// Object: Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672abc
	// Params: [ Num(1) Size(0x1) ]
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);

	// Object: Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36728c8
	// Params: [ Num(1) Size(0x1) ]
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);

	// Object: Function CommonUI.CommonButtonBase.SetSelectedInternal
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3671a6c
	// Params: [ Num(3) Size(0x3) ]
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);

	// Object: Function CommonUI.CommonButtonBase.SetPressMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672d7c
	// Params: [ Num(1) Size(0x1) ]
	void SetPressMethod(uint8_t InPressMethod);

	// Object: Function CommonUI.CommonButtonBase.SetPressedSoundOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3671e34
	// Params: [ Num(1) Size(0x8) ]
	void SetPressedSoundOverride(struct USoundBase* Sound);

	// Object: Function CommonUI.CommonButtonBase.SetMinDimensions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672500
	// Params: [ Num(2) Size(0x8) ]
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);

	// Object: Function CommonUI.CommonButtonBase.SetIsToggleable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672b6c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsToggleable(bool bInIsToggleable);

	// Object: Function CommonUI.CommonButtonBase.SetIsSelected
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36729c4
	// Params: [ Num(2) Size(0x2) ]
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);

	// Object: Function CommonUI.CommonButtonBase.SetIsSelectable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672ccc
	// Params: [ Num(1) Size(0x1) ]
	void SetIsSelectable(bool bInIsSelectable);

	// Object: Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672fe4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);

	// Object: Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672c1c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);

	// Object: Function CommonUI.CommonButtonBase.SetIsFocusable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672228
	// Params: [ Num(1) Size(0x1) ]
	void SetIsFocusable(bool bInIsFocusable);

	// Object: Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3671edc
	// Params: [ Num(2) Size(0x128) ]
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam);

	// Object: Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3671d8c
	// Params: [ Num(1) Size(0x8) ]
	void SetHoveredSoundOverride(struct USoundBase* Sound);

	// Object: Function CommonUI.CommonButtonBase.SetClickMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672ecc
	// Params: [ Num(1) Size(0x1) ]
	void SetClickMethod(uint8_t InClickMethod);

	// Object: Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);

	// Object: Function CommonUI.CommonButtonBase.OnInputMethodChanged
	// Flags: [Native|Protected]
	// Offset: 0x3671cdc
	// Params: [ Num(1) Size(0x1) ]
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);

	// Object: Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnCurrentTextStyleChanged();

	// Object: Function CommonUI.CommonButtonBase.OnActionProgress
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void OnActionProgress(float HeldPercent);

	// Object: Function CommonUI.CommonButtonBase.OnActionComplete
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnActionComplete();

	// Object: Function CommonUI.CommonButtonBase.NativeOnActionProgress
	// Flags: [Native|Protected]
	// Offset: 0x36719bc
	// Params: [ Num(1) Size(0x4) ]
	void NativeOnActionProgress(float HeldPercent);

	// Object: Function CommonUI.CommonButtonBase.NativeOnActionComplete
	// Flags: [Native|Protected]
	// Offset: 0x36719a0
	// Params: [ Num(0) Size(0x0) ]
	void NativeOnActionComplete();

	// Object: Function CommonUI.CommonButtonBase.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3672f74
	// Params: [ Num(1) Size(0x1) ]
	bool IsPressed();

	// Object: Function CommonUI.CommonButtonBase.IsInteractionEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3672fac
	// Params: [ Num(1) Size(0x1) ]
	bool IsInteractionEnabled();

	// Object: Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x3671c20
	// Params: [ Num(1) Size(0x1) ]
	void HandleTriggeringActionCommited(bool& bPassThrough);

	// Object: Function CommonUI.CommonButtonBase.HandleFocusReceived
	// Flags: [Native|Protected]
	// Offset: 0x3671bf0
	// Params: [ Num(0) Size(0x0) ]
	void HandleFocusReceived();

	// Object: Function CommonUI.CommonButtonBase.HandleButtonReleased
	// Flags: [Final|Native|Protected]
	// Offset: 0x3671bc8
	// Params: [ Num(0) Size(0x0) ]
	void HandleButtonReleased();

	// Object: Function CommonUI.CommonButtonBase.HandleButtonPressed
	// Flags: [Final|Native|Protected]
	// Offset: 0x3671bdc
	// Params: [ Num(0) Size(0x0) ]
	void HandleButtonPressed();

	// Object: Function CommonUI.CommonButtonBase.HandleButtonClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x3671c0c
	// Params: [ Num(0) Size(0x0) ]
	void HandleButtonClicked();

	// Object: Function CommonUI.CommonButtonBase.GetStyle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36727b4
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonButtonStyle* GetStyle();

	// Object: Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36721bc
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID();

	// Object: Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3672890
	// Params: [ Num(1) Size(0x1) ]
	bool GetShouldSelectUponReceivingFocus();

	// Object: Function CommonUI.CommonButtonBase.GetSelected
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367298c
	// Params: [ Num(1) Size(0x1) ]
	bool GetSelected();

	// Object: Function CommonUI.CommonButtonBase.GetIsFocusable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36721f0
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsFocusable();

	// Object: Function CommonUI.CommonButtonBase.GetInputAction
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36722d8
	// Params: [ Num(2) Size(0x11) ]
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow);

	// Object: Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36725e4
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonTextStyle* GetCurrentTextStyleClass();

	// Object: Function CommonUI.CommonButtonBase.GetCurrentTextStyle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3672618
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonTextStyle* GetCurrentTextStyle();

	// Object: Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367264c
	// Params: [ Num(1) Size(0x10) ]
	void GetCurrentCustomPadding(struct FMargin& OutCustomPadding);

	// Object: Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3672700
	// Params: [ Num(1) Size(0x10) ]
	void GetCurrentButtonPadding(struct FMargin& OutButtonPadding);

	// Object: Function CommonUI.CommonButtonBase.DisableButtonWithReason
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3673094
	// Params: [ Num(1) Size(0x18) ]
	void DisableButtonWithReason(struct FText& DisabledReason);

	// Object: Function CommonUI.CommonButtonBase.ClearSelection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3672978
	// Params: [ Num(0) Size(0x0) ]
	void ClearSelection();

	// Object: Function CommonUI.CommonButtonBase.BP_OnUnhovered
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnUnhovered();

	// Object: Function CommonUI.CommonButtonBase.BP_OnSelected
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnSelected();

	// Object: Function CommonUI.CommonButtonBase.BP_OnHovered
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnHovered();

	// Object: Function CommonUI.CommonButtonBase.BP_OnEnabled
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnEnabled();

	// Object: Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnDoubleClicked();

	// Object: Function CommonUI.CommonButtonBase.BP_OnDisabled
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnDisabled();

	// Object: Function CommonUI.CommonButtonBase.BP_OnDeselected
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnDeselected();

	// Object: Function CommonUI.CommonButtonBase.BP_OnClicked
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnClicked();
};

// Object: Class CommonUI.CommonBoundActionButton
// Size: 0x1300 (Inherited: 0x12F0)
struct UCommonBoundActionButton : UCommonButtonBase
{
	struct UCommonTextBlock* Text_ActionName; // 0x12E8(0x8)
	uint8_t Pad_0x12F8[0x8]; // 0x12F8(0x8)


	// Object: Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnUpdateInputAction();
};

// Object: Class CommonUI.CommonButtonStyle
// Size: 0xA30 (Inherited: 0x28)
struct UCommonButtonStyle : UObject
{
	bool bSingleMaterial; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FSlateBrush SingleMaterialBrush; // 0x30(0x120)
	struct FSlateBrush NormalBase; // 0x150(0x120)
	struct FSlateBrush NormalHovered; // 0x270(0x120)
	struct FSlateBrush NormalPressed; // 0x390(0x120)
	struct FSlateBrush SelectedBase; // 0x4B0(0x120)
	struct FSlateBrush SelectedHovered; // 0x5D0(0x120)
	struct FSlateBrush SelectedPressed; // 0x6F0(0x120)
	struct FSlateBrush Disabled; // 0x810(0x120)
	struct FMargin ButtonPadding; // 0x930(0x10)
	struct FMargin CustomPadding; // 0x940(0x10)
	int32_t MinWidth; // 0x950(0x4)
	int32_t MinHeight; // 0x954(0x4)
	struct UCommonTextStyle* NormalTextStyle; // 0x958(0x8)
	struct UCommonTextStyle* NormalHoveredTextStyle; // 0x960(0x8)
	struct UCommonTextStyle* SelectedTextStyle; // 0x968(0x8)
	struct UCommonTextStyle* SelectedHoveredTextStyle; // 0x970(0x8)
	struct UCommonTextStyle* DisabledTextStyle; // 0x978(0x8)
	struct FSlateSound PressedSlateSound; // 0x980(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x998(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledPressedSlateSound; // 0x9B8(0x20)
	struct FSlateSound HoveredSlateSound; // 0x9D8(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x9F0(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledHoveredSlateSound; // 0xA10(0x20)


	// Object: Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366fa64
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonTextStyle* GetSelectedTextStyle();

	// Object: Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366fefc
	// Params: [ Num(1) Size(0x120) ]
	void GetSelectedPressedBrush(struct FSlateBrush& Brush);

	// Object: Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366fa30
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonTextStyle* GetSelectedHoveredTextStyle();

	// Object: Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3670190
	// Params: [ Num(1) Size(0x120) ]
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush);

	// Object: Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3670424
	// Params: [ Num(1) Size(0x120) ]
	void GetSelectedBaseBrush(struct FSlateBrush& Brush);

	// Object: Function CommonUI.CommonButtonStyle.GetNormalTextStyle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366facc
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonTextStyle* GetNormalTextStyle();

	// Object: Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36706b8
	// Params: [ Num(1) Size(0x120) ]
	void GetNormalPressedBrush(struct FSlateBrush& Brush);

	// Object: Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366fa98
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonTextStyle* GetNormalHoveredTextStyle();

	// Object: Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367094c
	// Params: [ Num(1) Size(0x120) ]
	void GetNormalHoveredBrush(struct FSlateBrush& Brush);

	// Object: Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3670be0
	// Params: [ Num(1) Size(0x120) ]
	void GetNormalBaseBrush(struct FSlateBrush& Brush);

	// Object: Function CommonUI.CommonButtonStyle.GetMaterialBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3670e74
	// Params: [ Num(1) Size(0x120) ]
	void GetMaterialBrush(struct FSlateBrush& Brush);

	// Object: Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366f9fc
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonTextStyle* GetDisabledTextStyle();

	// Object: Function CommonUI.CommonButtonStyle.GetDisabledBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366fc68
	// Params: [ Num(1) Size(0x120) ]
	void GetDisabledBrush(struct FSlateBrush& Brush);

	// Object: Function CommonUI.CommonButtonStyle.GetCustomPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366fb00
	// Params: [ Num(1) Size(0x10) ]
	void GetCustomPadding(struct FMargin& OutCustomPadding);

	// Object: Function CommonUI.CommonButtonStyle.GetButtonPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x366fbb4
	// Params: [ Num(1) Size(0x10) ]
	void GetButtonPadding(struct FMargin& OutButtonPadding);
};

// Object: Class CommonUI.CommonButtonInternalBase
// Size: 0x740 (Inherited: 0x6E0)
struct UCommonButtonInternalBase : UButton
{
	uint8_t Pad_0x6E0[0x10]; // 0x6E0(0x10)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x6F0(0x10)
	uint8_t Pad_0x700[0x10]; // 0x700(0x10)
	int32_t MinWidth; // 0x710(0x4)
	int32_t MinHeight; // 0x714(0x4)
	bool bButtonEnabled; // 0x718(0x1)
	bool bInteractionEnabled; // 0x719(0x1)
	uint8_t Pad_0x71A[0x26]; // 0x71A(0x26)
};

// Object: Class CommonUI.CommonWidgetGroupBase
// Size: 0x28 (Inherited: 0x28)
struct UCommonWidgetGroupBase : UObject
{

	// Object: Function CommonUI.CommonWidgetGroupBase.RemoveWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3683df0
	// Params: [ Num(1) Size(0x8) ]
	void RemoveWidget(struct UWidget* InWidget);

	// Object: Function CommonUI.CommonWidgetGroupBase.RemoveAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3683ddc
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAll();

	// Object: Function CommonUI.CommonWidgetGroupBase.AddWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3683e98
	// Params: [ Num(1) Size(0x8) ]
	void AddWidget(struct UWidget* InWidget);
};

// Object: Class CommonUI.CommonButtonGroupBase
// Size: 0x110 (Inherited: 0x28)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase
{
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50(0x10)
	uint8_t Pad_0x60[0x18]; // 0x60(0x18)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x78(0x10)
	uint8_t Pad_0x88[0x18]; // 0x88(0x18)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x18]; // 0xB0(0x18)
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xC8(0x10)
	uint8_t Pad_0xD8[0x18]; // 0xD8(0x18)
	bool bSelectionRequired; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x1F]; // 0xF1(0x1F)


	// Object: Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3677350
	// Params: [ Num(1) Size(0x1) ]
	void SetSelectionRequired(bool bRequireSelection);

	// Object: Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36771dc
	// Params: [ Num(1) Size(0x1) ]
	void SelectPreviousButton(bool bAllowWrap);

	// Object: Function CommonUI.CommonButtonGroupBase.SelectNextButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367728c
	// Params: [ Num(1) Size(0x1) ]
	void SelectNextButton(bool bAllowWrap);

	// Object: Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3677134
	// Params: [ Num(1) Size(0x4) ]
	void SelectButtonAtIndex(int32_t ButtonIndex);

	// Object: Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	// Flags: [Native|Protected]
	// Offset: 0x3676dd4
	// Params: [ Num(2) Size(0x9) ]
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected);

	// Object: Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	// Flags: [Native|Protected]
	// Offset: 0x3676c74
	// Params: [ Num(1) Size(0x8) ]
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton);

	// Object: Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	// Flags: [Native|Protected]
	// Offset: 0x3676d24
	// Params: [ Num(1) Size(0x8) ]
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton);

	// Object: Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	// Flags: [Native|Protected]
	// Offset: 0x3676b14
	// Params: [ Num(1) Size(0x8) ]
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton);

	// Object: Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	// Flags: [Native|Protected]
	// Offset: 0x3676bc4
	// Params: [ Num(1) Size(0x8) ]
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton);

	// Object: Function CommonUI.CommonButtonGroupBase.HasAnyButtons
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3676f00
	// Params: [ Num(1) Size(0x1) ]
	bool HasAnyButtons();

	// Object: Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3677100
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedButtonIndex();

	// Object: Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3676f38
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonButtonBase* GetSelectedButtonBase();

	// Object: Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36770cc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHoveredButtonIndex();

	// Object: Function CommonUI.CommonButtonGroupBase.GetButtonCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3676ecc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetButtonCount();

	// Object: Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3676f6c
	// Params: [ Num(2) Size(0x10) ]
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);

	// Object: Function CommonUI.CommonButtonGroupBase.FindButtonIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367701c
	// Params: [ Num(2) Size(0xC) ]
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind);

	// Object: Function CommonUI.CommonButtonGroupBase.DeselectAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367733c
	// Params: [ Num(0) Size(0x0) ]
	void DeselectAll();
};

// Object: Class CommonUI.CommonCustomNavigation
// Size: 0x350 (Inherited: 0x340)
struct UCommonCustomNavigation : UBorder
{
	struct FDelegate OnNavigationEvent; // 0x340(0x10)
};

// Object: Class CommonUI.CommonTextBlock
// Size: 0x4E0 (Inherited: 0x4C0)
struct UCommonTextBlock : UTextBlock
{
	struct UCommonTextStyle* Style; // 0x4B8(0x8)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x4C0(0x8)
	bool bDisplayAllCaps; // 0x4C8(0x1)
	bool bAutoCollapseWithEmptyText; // 0x4C9(0x1)
	float MobileFontSizeMultiplier; // 0x4CC(0x4)
	uint8_t Pad_0x4D6[0xA]; // 0x4D6(0xA)


	// Object: Function CommonUI.CommonTextBlock.SetWrapTextWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x368029c
	// Params: [ Num(1) Size(0x4) ]
	void SetWrapTextWidth(int32_t InWrapTextAt);

	// Object: Function CommonUI.CommonTextBlock.SetTextCase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36801ec
	// Params: [ Num(1) Size(0x1) ]
	void SetTextCase(bool bUseAllCaps);

	// Object: Function CommonUI.CommonTextBlock.SetStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3680144
	// Params: [ Num(1) Size(0x8) ]
	void SetStyle(struct UCommonTextStyle* InStyle);

	// Object: Function CommonUI.CommonTextBlock.ResetScrollState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3680130
	// Params: [ Num(0) Size(0x0) ]
	void ResetScrollState();
};

// Object: Class CommonUI.CommonDateTimeTextBlock
// Size: 0x520 (Inherited: 0x4E0)
struct UCommonDateTimeTextBlock : UCommonTextBlock
{
	uint8_t Pad_0x4E0[0x40]; // 0x4E0(0x40)


	// Object: Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3677ea4
	// Params: [ Num(1) Size(0x8) ]
	void SetTimespanValue(struct FTimespan InTimespan);

	// Object: Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3677f48
	// Params: [ Num(3) Size(0x10) ]
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);

	// Object: Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3677d20
	// Params: [ Num(1) Size(0x18) ]
	void SetCountDownCompletionText(struct FText InCompletionText);

	// Object: Function CommonUI.CommonDateTimeTextBlock.GetDateTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3677cec
	// Params: [ Num(1) Size(0x8) ]
	struct FDateTime GetDateTime();
};

// Object: Class CommonUI.CommonGameViewportClient
// Size: 0x370 (Inherited: 0x330)
struct UCommonGameViewportClient : UGameViewportClient
{
	uint8_t Pad_0x330[0x40]; // 0x330(0x40)
};

// Object: Class CommonUI.CommonHierarchicalScrollBox
// Size: 0x1090 (Inherited: 0x1090)
struct UCommonHierarchicalScrollBox : UScrollBox
{
};

// Object: Class CommonUI.CommonLazyImage
// Size: 0x480 (Inherited: 0x320)
struct UCommonLazyImage : UImage
{
	struct FSlateBrush LoadingBackgroundBrush; // 0x320(0x120)
	struct FName MaterialTextureParamName; // 0x440(0x8)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x448(0x10)
	uint8_t Pad_0x458[0x28]; // 0x458(0x28)


	// Object: Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3678680
	// Params: [ Num(1) Size(0x8) ]
	void SetMaterialTextureParamName(struct FName TextureParamName);

	// Object: Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3678954
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize);

	// Object: Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3678880
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial);

	// Object: Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3678760
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize);

	// Object: Function CommonUI.CommonLazyImage.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3678728
	// Params: [ Num(1) Size(0x1) ]
	bool IsLoading();
};

// Object: Class CommonUI.CommonLazyWidget
// Size: 0x2E0 (Inherited: 0x140)
struct UCommonLazyWidget : UWidget
{
	struct FSlateBrush LoadingBackgroundBrush; // 0x140(0x120)
	struct UUserWidget* Content; // 0x260(0x8)
	uint8_t Pad_0x268[0x28]; // 0x268(0x28)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x290(0x10)
	uint8_t Pad_0x2A0[0x40]; // 0x2A0(0x40)


	// Object: Function CommonUI.CommonLazyWidget.SetLazyContent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3678ed4
	// Params: [ Num(1) Size(0x28) ]
	void SetLazyContent(struct TSoftClassPtr<struct UUserWidget*> SoftWidget);

	// Object: Function CommonUI.CommonLazyWidget.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3678e80
	// Params: [ Num(1) Size(0x1) ]
	bool IsLoading();

	// Object: Function CommonUI.CommonLazyWidget.GetContent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3678eb8
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetContent();
};

// Object: Class CommonUI.CommonListView
// Size: 0xE80 (Inherited: 0xE80)
struct UCommonListView : UListView
{
};

// Object: Class CommonUI.LoadGuardSlot
// Size: 0x60 (Inherited: 0x38)
struct ULoadGuardSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t HorizontalAlignment; // 0x48(0x1)
	uint8_t VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)


	// Object: Function CommonUI.LoadGuardSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3679414
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function CommonUI.LoadGuardSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3679564
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36794bc
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class CommonUI.CommonLoadGuard
// Size: 0x310 (Inherited: 0x158)
struct UCommonLoadGuard : UContentWidget
{
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct FSlateBrush LoadingBackgroundBrush; // 0x160(0x120)
	uint8_t ThrobberAlignment; // 0x280(0x1)
	uint8_t Pad_0x281[0x3]; // 0x281(0x3)
	struct FMargin ThrobberPadding; // 0x284(0x10)
	uint8_t Pad_0x294[0x4]; // 0x294(0x4)
	struct FText LoadingText; // 0x298(0x18)
	struct UCommonTextStyle* TextStyle; // 0x2B0(0x8)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x2B8(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x2C8(0x18)
	uint8_t Pad_0x2E0[0x30]; // 0x2E0(0x30)


	// Object: Function CommonUI.CommonLoadGuard.SetLoadingText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3679b98
	// Params: [ Num(1) Size(0x18) ]
	void SetLoadingText(struct FText& InLoadingText);

	// Object: Function CommonUI.CommonLoadGuard.SetIsLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3679ae8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsLoading(bool bInIsLoading);

	// Object: DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnAssetLoaded__DelegateSignature(struct UObject* Object);

	// Object: Function CommonUI.CommonLoadGuard.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3679ab0
	// Params: [ Num(1) Size(0x1) ]
	bool IsLoading();

	// Object: Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x3679970
	// Params: [ Num(2) Size(0x38) ]
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded);
};

// Object: Class CommonUI.CommonNumericTextBlock
// Size: 0x580 (Inherited: 0x4E0)
struct UCommonNumericTextBlock : UCommonTextBlock
{
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x4E0(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x4F0(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x500(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x510(0x10)
	float CurrentNumericValue; // 0x520(0x4)
	enum class ECommonNumericType NumericType; // 0x524(0x1)
	uint8_t Pad_0x525[0x3]; // 0x525(0x3)
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x528(0x14)
	float EaseOutInterpolationExponent; // 0x53C(0x4)
	float InterpolationUpdateInterval; // 0x540(0x4)
	float PostInterpolationShrinkDuration; // 0x544(0x4)
	bool PerformSizeInterpolation; // 0x548(0x1)
	bool IsPercentage; // 0x549(0x1)
	uint8_t Pad_0x54A[0x36]; // 0x54A(0x36)


	// Object: Function CommonUI.CommonNumericTextBlock.SetNumericType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367a298
	// Params: [ Num(1) Size(0x1) ]
	void SetNumericType(enum class ECommonNumericType InNumericType);

	// Object: Function CommonUI.CommonNumericTextBlock.SetCurrentValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367a4dc
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentValue(float NewValue);

	// Object: DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock);

	// Object: DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x10) ]
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);

	// Object: DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock);

	// Object: DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x9) ]
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);

	// Object: Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367a340
	// Params: [ Num(1) Size(0x1) ]
	bool IsInterpolatingNumericValue();

	// Object: Function CommonUI.CommonNumericTextBlock.InterpolateToValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367a378
	// Params: [ Num(4) Size(0x10) ]
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);

	// Object: Function CommonUI.CommonNumericTextBlock.GetTargetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367a584
	// Params: [ Num(1) Size(0x4) ]
	float GetTargetValue();
};

// Object: Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct ICommonPoolableWidgetInterface : IInterface
{

	// Object: Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x367a8a8
	// Params: [ Num(0) Size(0x0) ]
	void OnReleaseToPool();

	// Object: Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x367a8c4
	// Params: [ Num(0) Size(0x0) ]
	void OnAcquireFromPool();
};

// Object: Class CommonUI.CommonRichTextBlock
// Size: 0xDD0 (Inherited: 0xDA0)
struct UCommonRichTextBlock : URichTextBlock
{
	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0xD98(0x1)
	bool bTintInlineIcon; // 0xD99(0x1)
	struct UCommonTextStyle* DefaultTextStyleOverrideClass; // 0xDA0(0x8)
	float MobileTextBlockScale; // 0xDA8(0x4)
	uint8_t Pad_0xDAE[0x2]; // 0xDAE(0x2)
	struct UCommonTextScrollStyle* ScrollStyle; // 0xDB0(0x8)
	bool bDisplayAllCaps; // 0xDB8(0x1)
	uint8_t Pad_0xDB9[0x17]; // 0xDB9(0x17)
};

// Object: Class CommonUI.CommonRotator
// Size: 0x1340 (Inherited: 0x12F0)
struct UCommonRotator : UCommonButtonBase
{
	uint8_t Pad_0x12F0[0x8]; // 0x12F0(0x8)
	struct FMulticastInlineDelegate OnRotated; // 0x12F8(0x10)
	uint8_t Pad_0x1308[0x18]; // 0x1308(0x18)
	struct UCommonTextBlock* MyText; // 0x1320(0x8)
	uint8_t Pad_0x1328[0x18]; // 0x1328(0x18)


	// Object: Function CommonUI.CommonRotator.ShiftTextRight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367ad80
	// Params: [ Num(0) Size(0x0) ]
	void ShiftTextRight();

	// Object: Function CommonUI.CommonRotator.ShiftTextLeft
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367ad94
	// Params: [ Num(0) Size(0x0) ]
	void ShiftTextLeft();

	// Object: Function CommonUI.CommonRotator.SetSelectedItem
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x367adc4
	// Params: [ Num(1) Size(0x4) ]
	void SetSelectedItem(int32_t InValue);

	// Object: Function CommonUI.CommonRotator.PopulateTextLabels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367af44
	// Params: [ Num(1) Size(0x10) ]
	void PopulateTextLabels(struct TArray<struct FText> Labels);

	// Object: Function CommonUI.CommonRotator.GetSelectedText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367ae74
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetSelectedText();

	// Object: Function CommonUI.CommonRotator.GetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367ada8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedIndex();

	// Object: Function CommonUI.CommonRotator.BP_OnOptionsPopulated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void BP_OnOptionsPopulated(int32_t Count);

	// Object: Function CommonUI.CommonRotator.BP_OnOptionSelected
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void BP_OnOptionSelected(int32_t Index);
};

// Object: Class CommonUI.CommonTabListWidgetBase
// Size: 0x360 (Inherited: 0x290)
struct UCommonTabListWidgetBase : UCommonUserWidget
{
	struct FMulticastInlineDelegate OnTabSelected; // 0x290(0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x2A0(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x2B0(0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x2C0(0x10)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x2D0(0x10)
	bool bAutoListenForInput; // 0x2E0(0x1)
	uint8_t Pad_0x2E1[0x3]; // 0x2E1(0x3)
	struct TWeakObjectPtr<struct UCommonAnimatedSwitcher> LinkedSwitcher; // 0x2E4(0x8)
	uint8_t Pad_0x2EC[0x4]; // 0x2EC(0x4)
	struct UCommonButtonGroupBase* TabButtonGroup; // 0x2F0(0x8)
	uint8_t Pad_0x2F8[0x8]; // 0x2F8(0x8)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x300(0x50)
	uint8_t Pad_0x350[0x10]; // 0x350(0x10)


	// Object: Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367c07c
	// Params: [ Num(2) Size(0x9) ]
	void SetTabVisibility(struct FName TabNameID, enum class ESlateVisibility NewVisibility);

	// Object: Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367be9c
	// Params: [ Num(2) Size(0x9) ]
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable);

	// Object: Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367bf8c
	// Params: [ Num(2) Size(0x9) ]
	void SetTabEnabled(struct FName TabNameID, bool bEnable);

	// Object: Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x367bc94
	// Params: [ Num(1) Size(0x1) ]
	void SetListeningForInput(bool bShouldListen);

	// Object: Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x367c5a4
	// Params: [ Num(1) Size(0x8) ]
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher);

	// Object: Function CommonUI.CommonTabListWidgetBase.SelectTabByID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367c248
	// Params: [ Num(3) Size(0xA) ]
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback);

	// Object: Function CommonUI.CommonTabListWidgetBase.RemoveTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367c38c
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveTab(struct FName TabNameID);

	// Object: Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367c378
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllTabs();

	// Object: Function CommonUI.CommonTabListWidgetBase.RegisterTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x367c440
	// Params: [ Num(4) Size(0x19) ]
	bool RegisterTab(struct FName TabNameID, struct UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget);

	// Object: DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnTabSelected__DelegateSignature(struct FName TabId);

	// Object: DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton);

	// Object: DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton);

	// Object: Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x367babc
	// Params: [ Num(2) Size(0x10) ]
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton);

	// Object: Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x367bba8
	// Params: [ Num(2) Size(0x10) ]
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton);

	// Object: Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	// Flags: [Final|Native|Protected]
	// Offset: 0x367b924
	// Params: [ Num(2) Size(0xC) ]
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);

	// Object: Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x367b870
	// Params: [ Num(1) Size(0x1) ]
	void HandlePreviousTabInputAction(bool& bPassThrough);

	// Object: Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void HandlePreLinkedSwitcherChanged_BP();

	// Object: Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void HandlePostLinkedSwitcherChanged_BP();

	// Object: Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x367b7bc
	// Params: [ Num(1) Size(0x1) ]
	void HandleNextTabInputAction(bool& bPassThrough);

	// Object: Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367c164
	// Params: [ Num(2) Size(0xC) ]
	struct FName GetTabIdAtIndex(int32_t Index);

	// Object: Function CommonUI.CommonTabListWidgetBase.GetTabCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367c344
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTabCount();

	// Object: Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x367ba0c
	// Params: [ Num(2) Size(0x10) ]
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID);

	// Object: Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367c214
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetSelectedTabId();

	// Object: Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367c570
	// Params: [ Num(1) Size(0x8) ]
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher();

	// Object: Function CommonUI.CommonTabListWidgetBase.GetActiveTab
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367c654
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetActiveTab();

	// Object: Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x367bd4c
	// Params: [ Num(2) Size(0x20) ]
	void DisableTabWithReason(struct FName TabNameID, struct FText& Reason);
};

// Object: Class CommonUI.CommonTextStyle
// Size: 0x200 (Inherited: 0x28)
struct UCommonTextStyle : UObject
{
	struct FSlateFontInfo Font; // 0x28(0x68)
	struct FLinearColor Color; // 0x90(0x10)
	bool bUsesDropShadow; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	struct FVector2D ShadowOffset; // 0xA4(0x8)
	struct FLinearColor ShadowColor; // 0xAC(0x10)
	struct FMargin Margin; // 0xBC(0x10)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct FSlateBrush StrikeBrush; // 0xD0(0x120)
	float LineHeightPercentage; // 0x1F0(0x4)
	uint8_t Pad_0x1F4[0xC]; // 0x1F4(0xC)


	// Object: Function CommonUI.CommonTextStyle.GetStrikeBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367f314
	// Params: [ Num(1) Size(0x120) ]
	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush);

	// Object: Function CommonUI.CommonTextStyle.GetShadowOffset
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367f658
	// Params: [ Num(1) Size(0x8) ]
	void GetShadowOffset(struct FVector2D& OutShadowOffset);

	// Object: Function CommonUI.CommonTextStyle.GetShadowColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367f5a8
	// Params: [ Num(1) Size(0x10) ]
	void GetShadowColor(struct FLinearColor& OutColor);

	// Object: Function CommonUI.CommonTextStyle.GetMargin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367f73c
	// Params: [ Num(1) Size(0x10) ]
	void GetMargin(struct FMargin& OutMargin);

	// Object: Function CommonUI.CommonTextStyle.GetLineHeightPercentage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367f708
	// Params: [ Num(1) Size(0x4) ]
	float GetLineHeightPercentage();

	// Object: Function CommonUI.CommonTextStyle.GetFont
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367f8a0
	// Params: [ Num(1) Size(0x68) ]
	void GetFont(struct FSlateFontInfo& OutFont);

	// Object: Function CommonUI.CommonTextStyle.GetColor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x367f7f0
	// Params: [ Num(1) Size(0x10) ]
	void GetColor(struct FLinearColor& OutColor);
};

// Object: Class CommonUI.CommonTextScrollStyle
// Size: 0x40 (Inherited: 0x28)
struct UCommonTextScrollStyle : UObject
{
	float Speed; // 0x28(0x4)
	float StartDelay; // 0x2C(0x4)
	float EndDelay; // 0x30(0x4)
	float FadeInDelay; // 0x34(0x4)
	float FadeOutDelay; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class CommonUI.CommonTileView
// Size: 0xEA0 (Inherited: 0xEA0)
struct UCommonTileView : UTileView
{
};

// Object: Class CommonUI.CommonTreeView
// Size: 0xEE0 (Inherited: 0xEE0)
struct UCommonTreeView : UTreeView
{
};

// Object: Class CommonUI.CommonUIActionRouterBase
// Size: 0x100 (Inherited: 0x30)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem
{
	uint8_t Pad_0x30[0xD0]; // 0x30(0xD0)
};

// Object: Class CommonUI.CommonUIEditorSettings
// Size: 0xA8 (Inherited: 0x28)
struct UCommonUIEditorSettings : UObject
{
	struct TSoftClassPtr<struct UCommonTextStyle*> TemplateTextStyle; // 0x28(0x28)
	struct TSoftClassPtr<struct UCommonButtonStyle*> TemplateButtonStyle; // 0x50(0x28)
	struct TSoftClassPtr<struct UCommonBorderStyle*> TemplateBorderStyle; // 0x78(0x28)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)
};

// Object: Class CommonUI.CommonUIInputSettings
// Size: 0x78 (Inherited: 0x28)
struct UCommonUIInputSettings : UObject
{
	bool bLinkCursorToGamepadFocus; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t UIActionProcessingPriority; // 0x2C(0x4)
	struct TArray<struct FUIInputAction> InputActions; // 0x30(0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x40(0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50(0x28)
};

// Object: Class CommonUI.CommonUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UCommonUILibrary : UBlueprintFunctionLibrary
{

	// Object: Function CommonUI.CommonUILibrary.FindParentWidgetOfType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3681134
	// Params: [ Num(3) Size(0x18) ]
	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, struct UWidget* Type);
};

// Object: Class CommonUI.CommonUIRichTextData
// Size: 0x30 (Inherited: 0x28)
struct UCommonUIRichTextData : UObject
{
	struct UDataTable* InlineIconSet; // 0x28(0x8)
};

// Object: Class CommonUI.CommonUISettings
// Size: 0x1F0 (Inherited: 0x28)
struct UCommonUISettings : UObject
{
	bool bAutoLoadData; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x30(0x28)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x58(0x28)
	struct TSoftClassPtr<struct UCommonUIRichTextData*> DefaultRichTextDataClass; // 0x80(0x28)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UObject* DefaultImageResourceObjectInstance; // 0xB0(0x8)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xB8(0x8)
	struct FSlateBrush DefaultThrobberBrush; // 0xC0(0x120)
	struct UCommonUIRichTextData* RichTextDataInstance; // 0x1E0(0x8)
	uint8_t Pad_0x1E8[0x8]; // 0x1E8(0x8)
};

// Object: Class CommonUI.CommonUISubsystemBase
// Size: 0x40 (Inherited: 0x30)
struct UCommonUISubsystemBase : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)


	// Object: Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3681910
	// Params: [ Num(4) Size(0x140) ]
	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, struct FName& GamepadName);
};

// Object: Class CommonUI.CommonVideoPlayer
// Size: 0x2F0 (Inherited: 0x140)
struct UCommonVideoPlayer : UWidget
{
	struct UMediaSource* Video; // 0x140(0x8)
	struct UMediaPlayer* MediaPlayer; // 0x148(0x8)
	struct UMediaTexture* MediaTexture; // 0x150(0x8)
	struct UMaterial* VideoMaterial; // 0x158(0x8)
	struct UMediaSoundComponent* SoundComponent; // 0x160(0x8)
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
	struct FSlateBrush VideoBrush; // 0x170(0x120)
	uint8_t Pad_0x290[0x60]; // 0x290(0x60)
};

// Object: Class CommonUI.CommonVisibilitySwitcher
// Size: 0x190 (Inherited: 0x168)
struct UCommonVisibilitySwitcher : UOverlay
{
	enum class ESlateVisibility ShownVisibility; // 0x168(0x1)
	uint8_t Pad_0x169[0x3]; // 0x169(0x3)
	int32_t ActiveWidgetIndex; // 0x16C(0x4)
	bool bAutoActivateSlot; // 0x170(0x1)
	bool bActivateFirstSlotOnAdding; // 0x171(0x1)
	uint8_t Pad_0x172[0x1E]; // 0x172(0x1E)


	// Object: Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x368271c
	// Params: [ Num(1) Size(0x4) ]
	void SetActiveWidgetIndex(int32_t Index);

	// Object: Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3682624
	// Params: [ Num(1) Size(0x8) ]
	void SetActiveWidget(struct UWidget* Widget);

	// Object: Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3682574
	// Params: [ Num(1) Size(0x1) ]
	void IncrementActiveWidgetIndex(bool bAllowWrapping);

	// Object: Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3682700
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActiveWidgetIndex();

	// Object: Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36826cc
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetActiveWidget();

	// Object: Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36824c4
	// Params: [ Num(1) Size(0x1) ]
	void DecrementActiveWidgetIndex(bool bAllowWrapping);

	// Object: Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x368249c
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateVisibleSlot();

	// Object: Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36824b0
	// Params: [ Num(0) Size(0x0) ]
	void ActivateVisibleSlot();
};

// Object: Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x68 (Inherited: 0x58)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot
{
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
};

// Object: Class CommonUI.CommonVisibilityWidgetBase
// Size: 0x3C0 (Inherited: 0x360)
struct UCommonVisibilityWidgetBase : UCommonBorder
{
	struct TMap<struct FName, bool> VisibilityControls; // 0x360(0x50)
	bool bShowForGamepad; // 0x3B0(0x1)
	bool bShowForMouseAndKeyboard; // 0x3B1(0x1)
	bool bShowForTouch; // 0x3B2(0x1)
	enum class ESlateVisibility VisibleType; // 0x3B3(0x1)
	enum class ESlateVisibility HiddenType; // 0x3B4(0x1)
	uint8_t Pad_0x3B5[0xB]; // 0x3B5(0xB)


	// Object: Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms
	// Flags: [Final|Native|Static|Protected]
	// Offset: 0x3682db4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetRegisteredPlatforms();
};

// Object: Class CommonUI.CommonVisualAttachment
// Size: 0x1A8 (Inherited: 0x190)
struct UCommonVisualAttachment : USizeBox
{
	struct FVector2D ContentAnchor; // 0x18C(0x8)
	uint8_t Pad_0x198[0x10]; // 0x198(0x10)
};

// Object: Class CommonUI.CommonWidgetCarousel
// Size: 0x190 (Inherited: 0x158)
struct UCommonWidgetCarousel : UPanelWidget
{
	int32_t ActiveWidgetIndex; // 0x154(0x4)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x158(0x10)
	uint8_t Pad_0x16C[0x24]; // 0x16C(0x24)


	// Object: Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x368344c
	// Params: [ Num(1) Size(0x4) ]
	void SetActiveWidgetIndex(int32_t Index);

	// Object: Function CommonUI.CommonWidgetCarousel.SetActiveWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x368339c
	// Params: [ Num(1) Size(0x8) ]
	void SetActiveWidget(struct UWidget* Widget);

	// Object: Function CommonUI.CommonWidgetCarousel.PreviousPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3683208
	// Params: [ Num(0) Size(0x0) ]
	void PreviousPage();

	// Object: Function CommonUI.CommonWidgetCarousel.NextPage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x368321c
	// Params: [ Num(0) Size(0x0) ]
	void NextPage();

	// Object: Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36832ec
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetWidgetAtIndex(int32_t Index);

	// Object: Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36834fc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActiveWidgetIndex();

	// Object: Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3683230
	// Params: [ Num(0) Size(0x0) ]
	void EndAutoScrolling();

	// Object: Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3683244
	// Params: [ Num(1) Size(0x4) ]
	void BeginAutoScrolling(float ScrollInterval);
};

// Object: Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x188 (Inherited: 0x140)
struct UCommonWidgetCarouselNavBar : UWidget
{
	struct UCommonButtonBase* ButtonWidgetType; // 0x140(0x8)
	struct FMargin ButtonPadding; // 0x148(0x10)
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
	struct UCommonWidgetCarousel* LinkedCarousel; // 0x168(0x8)
	struct UCommonButtonGroupBase* ButtonGroup; // 0x170(0x8)
	struct TArray<struct UCommonButtonBase*> Buttons; // 0x178(0x10)


	// Object: Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3683abc
	// Params: [ Num(1) Size(0x8) ]
	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel);

	// Object: Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x36839d4
	// Params: [ Num(2) Size(0xC) ]
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);

	// Object: Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x36838ec
	// Params: [ Num(2) Size(0xC) ]
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);
};

} // namespace SDK
