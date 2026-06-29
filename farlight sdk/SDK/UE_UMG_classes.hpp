// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class UMG.Visual
// Size: 0x28 (Inherited: 0x28)
struct UVisual : UObject
{
};

// Object: Class UMG.Widget
// Size: 0x140 (Inherited: 0x28)
struct UWidget : UVisual
{
	struct UPanelSlot* Slot; // 0x28(0x8)
	struct FDelegate bIsEnabledDelegate; // 0x30(0x10)
	struct FText ToolTipText; // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x58(0x10)
	struct UWidget* ToolTipWidget; // 0x68(0x8)
	struct FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	struct FDelegate VisibilityDelegate; // 0x80(0x10)
	struct FWidgetTransform RenderTransform; // 0x90(0x1C)
	struct FVector2D RenderTransformPivot; // 0xAC(0x8)
	uint8_t bIsVariable : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t bCreatedByConstructionScript : 1; // 0xB4(0x1), Mask(0x2)
	uint8_t bIsEnabled : 1; // 0xB4(0x1), Mask(0x4)
	uint8_t bIsRunPlatformDesktop : 1; // 0xB4(0x1), Mask(0x8)
	uint8_t BitPad_0xB4_4 : 4; // 0xB4(0x1)
	enum class EWidgetStickyFlag StickyFlag; // 0xB5(0x1)
	uint8_t bOverride_Cursor : 1; // 0xB6(0x1), Mask(0x1)
	uint8_t BitPad_0xB6_1 : 7; // 0xB6(0x1)
	uint8_t Pad_0xB7[0x1]; // 0xB7(0x1)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xB8(0x8)
	uint8_t bIsVolatile : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t BitPad_0xC0_1 : 7; // 0xC0(0x1)
	uint8_t Cursor; // 0xC1(0x1)
	enum class EWidgetClipping Clipping; // 0xC2(0x1)
	enum class ESlateVisibility Visibility; // 0xC3(0x1)
	float RenderOpacity; // 0xC4(0x4)
	uint8_t DetailMode; // 0xC8(0x1)
	bool bSelectedDetailModeOnly; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x2]; // 0xCA(0x2)
	int32_t WidthDivisor; // 0xCC(0x4)
	int32_t HeightDivisor; // 0xD0(0x4)
	bool bEnableShadingRate; // 0xD4(0x1)
	uint8_t ShadingRate; // 0xD5(0x1)
	bool bDisableParentInvalidationOnLayoutChanged; // 0xD6(0x1)
	bool bDisableUnderlyingWidgetsRender; // 0xD7(0x1)
	bool bCanEffectWhenDragDropping; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct UWidgetNavigation* Navigation; // 0xE0(0x8)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xE8(0x1)
	enum class EWidgetPixelSnapping PixelSnapping; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x46]; // 0xEA(0x46)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x130(0x10)


	// Object: Function UMG.Widget.SetWidthHeightDivisors
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998ff58
	// Params: [ Num(2) Size(0x8) ]
	void SetWidthHeightDivisors(int32_t InWidthDivisor, int32_t InHeightDivisor);

	// Object: Function UMG.Widget.SetVisibility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9990270
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibility(enum class ESlateVisibility InVisibility);

	// Object: Function UMG.Widget.SetUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f984
	// Params: [ Num(1) Size(0x8) ]
	void SetUserFocus(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.SetToolTipText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x99904f0
	// Params: [ Num(1) Size(0x18) ]
	void SetToolTipText(struct FText& InToolTipText);

	// Object: Function UMG.Widget.SetToolTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9990448
	// Params: [ Num(1) Size(0x8) ]
	void SetToolTip(struct UWidget* Widget);

	// Object: Function UMG.Widget.SetSelectedDetailModeOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999003c
	// Params: [ Num(1) Size(0x1) ]
	void SetSelectedDetailModeOnly(bool InSelectedDetailModeOnly);

	// Object: Function UMG.Widget.SetRenderTranslation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9990794
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderTranslation(struct FVector2D Translation);

	// Object: Function UMG.Widget.SetRenderTransformPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x99906f0
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderTransformPivot(struct FVector2D Pivot);

	// Object: Function UMG.Widget.SetRenderTransformAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999086c
	// Params: [ Num(1) Size(0x4) ]
	void SetRenderTransformAngle(float Angle);

	// Object: Function UMG.Widget.SetRenderTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9990a5c
	// Params: [ Num(1) Size(0x1C) ]
	void SetRenderTransform(struct FWidgetTransform InTransform);

	// Object: Function UMG.Widget.SetRenderShear
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9990914
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderShear(struct FVector2D Shear);

	// Object: Function UMG.Widget.SetRenderScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x99909b8
	// Params: [ Num(1) Size(0x8) ]
	void SetRenderScale(struct FVector2D Scale);

	// Object: Function UMG.Widget.SetRenderOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9990194
	// Params: [ Num(1) Size(0x4) ]
	void SetRenderOpacity(float InOpacity);

	// Object: Function UMG.Widget.SetPixelSnapping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f184
	// Params: [ Num(1) Size(0x1) ]
	void SetPixelSnapping(enum class EWidgetPixelSnapping InPixelSnapping);

	// Object: Function UMG.Widget.SetNavigationRuleExplicit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f548
	// Params: [ Num(2) Size(0x10) ]
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget);

	// Object: Function UMG.Widget.SetNavigationRuleCustomBoundary
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f358
	// Params: [ Num(2) Size(0x14) ]
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate);

	// Object: Function UMG.Widget.SetNavigationRuleCustom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f450
	// Params: [ Num(2) Size(0x14) ]
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate);

	// Object: Function UMG.Widget.SetNavigationRuleBase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f630
	// Params: [ Num(2) Size(0x2) ]
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule);

	// Object: Function UMG.Widget.SetNavigationRule
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f718
	// Params: [ Num(3) Size(0xC) ]
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus);

	// Object: Function UMG.Widget.SetKeyboardFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998fc18
	// Params: [ Num(0) Size(0x0) ]
	void SetKeyboardFocus();

	// Object: Function UMG.Widget.SetIsEnabled
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9990600
	// Params: [ Num(1) Size(0x1) ]
	void SetIsEnabled(bool bInIsEnabled);

	// Object: Function UMG.Widget.SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998fa2c
	// Params: [ Num(0) Size(0x0) ]
	void SetFocus();

	// Object: Function UMG.Widget.SetDetailMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99900ec
	// Params: [ Num(1) Size(0x1) ]
	void SetDetailMode(uint8_t InDetailMode);

	// Object: Function UMG.Widget.SetCursor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99903a0
	// Params: [ Num(1) Size(0x1) ]
	void SetCursor(uint8_t InCursor);

	// Object: Function UMG.Widget.SetClipping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998fe7c
	// Params: [ Num(1) Size(0x1) ]
	void SetClipping(enum class EWidgetClipping InClipping);

	// Object: Function UMG.Widget.SetAllNavigationRules
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f840
	// Params: [ Num(2) Size(0xC) ]
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus);

	// Object: Function UMG.Widget.ResetCursor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999038c
	// Params: [ Num(0) Size(0x0) ]
	void ResetCursor();

	// Object: Function UMG.Widget.RemoveFromParent
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x998f308
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromParent();

	// Object: DelegateFunction UMG.Widget.OnReply__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0xB8) ]
	struct FEventReply OnReply__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	// Flags: [Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UMG.Widget.IsVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9990354
	// Params: [ Num(1) Size(0x1) ]
	bool IsVisible();

	// Object: Function UMG.Widget.IsHovered
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998fd8c
	// Params: [ Num(1) Size(0x1) ]
	bool IsHovered();

	// Object: Function UMG.Widget.InvalidateLayoutAndVolatility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f95c
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateLayoutAndVolatility();

	// Object: Function UMG.Widget.HasUserFocusedDescendants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998fa40
	// Params: [ Num(2) Size(0x9) ]
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.HasUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998fb64
	// Params: [ Num(2) Size(0x9) ]
	bool HasUserFocus(struct APlayerController* PlayerController);

	// Object: Function UMG.Widget.HasMouseCaptureByUser
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998fc2c
	// Params: [ Num(3) Size(0x9) ]
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);

	// Object: Function UMG.Widget.HasMouseCapture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998fd1c
	// Params: [ Num(1) Size(0x1) ]
	bool HasMouseCapture();

	// Object: Function UMG.Widget.HasKeyboardFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998fd54
	// Params: [ Num(1) Size(0x1) ]
	bool HasKeyboardFocus();

	// Object: Function UMG.Widget.HasFocusedDescendants
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998faf4
	// Params: [ Num(1) Size(0x1) ]
	bool HasFocusedDescendants();

	// Object: Function UMG.Widget.HasAnyUserFocus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998fb2c
	// Params: [ Num(1) Size(0x1) ]
	bool HasAnyUserFocus();

	// Object: DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetWidget__DelegateSignature();

	// Object: Function UMG.Widget.GetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9990320
	// Params: [ Num(1) Size(0x1) ]
	enum class ESlateVisibility GetVisibility();

	// Object: Function UMG.Widget.GetTickSpaceGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f298
	// Params: [ Num(1) Size(0x38) ]
	struct FGeometry GetTickSpaceGeometry();

	// Object: DelegateFunction UMG.Widget.GetText__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x28) ]
	struct FSlateColor GetSlateColor__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x120) ]
	struct FSlateBrush GetSlateBrush__DelegateSignature();

	// Object: Function UMG.Widget.GetRenderTransformAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9990838
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderTransformAngle();

	// Object: Function UMG.Widget.GetRenderOpacity
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999023c
	// Params: [ Num(1) Size(0x4) ]
	float GetRenderOpacity();

	// Object: Function UMG.Widget.GetPixelSnapping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f22c
	// Params: [ Num(1) Size(0x1) ]
	enum class EWidgetPixelSnapping GetPixelSnapping();

	// Object: Function UMG.Widget.GetParent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f324
	// Params: [ Num(1) Size(0x8) ]
	struct UPanelWidget* GetParent();

	// Object: Function UMG.Widget.GetPaintSpaceGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f260
	// Params: [ Num(1) Size(0x38) ]
	struct FGeometry GetPaintSpaceGeometry();

	// Object: Function UMG.Widget.GetOwningPlayer
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f114
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerController* GetOwningPlayer();

	// Object: Function UMG.Widget.GetOwningLocalPlayer
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f0d8
	// Params: [ Num(1) Size(0x8) ]
	struct ULocalPlayer* GetOwningLocalPlayer();

	// Object: DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetMouseCursor__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetLinearColor__DelegateSignature();

	// Object: Function UMG.Widget.GetIsEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99906b8
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsEnabled();

	// Object: DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInt32__DelegateSignature();

	// Object: Function UMG.Widget.GetGameInstance
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f150
	// Params: [ Num(1) Size(0x8) ]
	struct UGameInstance* GetGameInstance();

	// Object: DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	float GetFloat__DelegateSignature();

	// Object: Function UMG.Widget.GetDesiredSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f928
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDesiredSize();

	// Object: Function UMG.Widget.GetClipping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998ff24
	// Params: [ Num(1) Size(0x1) ]
	enum class EWidgetClipping GetClipping();

	// Object: DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature();

	// Object: Function UMG.Widget.GetCachedGeometry
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998f2d0
	// Params: [ Num(1) Size(0x38) ]
	struct FGeometry GetCachedGeometry();

	// Object: DelegateFunction UMG.Widget.GetBool__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	bool GetBool__DelegateSignature();

	// Object: DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x18) ]
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item);

	// Object: DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item);

	// Object: Function UMG.Widget.ForceVolatile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998fdcc
	// Params: [ Num(1) Size(0x1) ]
	void ForceVolatile(bool bForce);

	// Object: Function UMG.Widget.ForceLayoutPrepass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998f970
	// Params: [ Num(0) Size(0x0) ]
	void ForceLayoutPrepass();
};

// Object: Class UMG.UserWidget
// Size: 0x268 (Inherited: 0x140)
struct UUserWidget : UWidget
{
	uint8_t Pad_0x140[0x8]; // 0x140(0x8)
	struct FLinearColor ColorAndOpacity; // 0x148(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x158(0x10)
	struct FSlateColor ForegroundColor; // 0x168(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x190(0x10)
	struct FMargin Padding; // 0x1A0(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1B0(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1C0(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1D0(0x10)
	struct UWidgetTree* WidgetTree; // 0x1E0(0x8)
	int32_t Priority; // 0x1E8(0x4)
	uint8_t bSupportsKeyboardFocus : 1; // 0x1EC(0x1), Mask(0x1)
	uint8_t bIsFocusable : 1; // 0x1EC(0x1), Mask(0x2)
	uint8_t bStopAction : 1; // 0x1EC(0x1), Mask(0x4)
	uint8_t bHasScriptImplementedTick : 1; // 0x1EC(0x1), Mask(0x8)
	uint8_t bHasScriptImplementedPaint : 1; // 0x1EC(0x1), Mask(0x10)
	uint8_t BitPad_0x1EC_5 : 3; // 0x1EC(0x1)
	uint8_t Pad_0x1ED[0xB]; // 0x1ED(0xB)
	enum class EWidgetTickFrequency TickFrequency; // 0x1F8(0x1)
	uint8_t Pad_0x1F9[0x7]; // 0x1F9(0x7)
	struct UInputComponent* InputComponent; // 0x200(0x8)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x208(0x10)
	uint8_t Pad_0x218[0x50]; // 0x218(0x50)


	// Object: Function UMG.UserWidget.UnregisterInputComponent
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x99838a0
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterInputComponent();

	// Object: Function UMG.UserWidget.UnbindFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9985324
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.UnbindFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998508c
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.UnbindAllFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998527c
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.UnbindAllFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9984fe4
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x3C) ]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime);

	// Object: Function UMG.UserWidget.StopListeningForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x99838dc
	// Params: [ Num(2) Size(0x9) ]
	void StopListeningForInputAction(struct FName ActionName, uint8_t EventType);

	// Object: Function UMG.UserWidget.StopListeningForAllInputActions
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x99838c8
	// Params: [ Num(0) Size(0x0) ]
	void StopListeningForAllInputActions();

	// Object: Function UMG.UserWidget.StopAnimationsAndLatentActions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9985514
	// Params: [ Num(0) Size(0x0) ]
	void StopAnimationsAndLatentActions();

	// Object: Function UMG.UserWidget.StopAnimation
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9984200
	// Params: [ Num(1) Size(0x8) ]
	void StopAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.StopAllAnimations
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x99841e4
	// Params: [ Num(0) Size(0x0) ]
	void StopAllAnimations();

	// Object: Function UMG.UserWidget.SetPositionInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x99858e8
	// Params: [ Num(2) Size(0x9) ]
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale);

	// Object: Function UMG.UserWidget.SetPlaybackSpeed
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9983d98
	// Params: [ Num(2) Size(0xC) ]
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed);

	// Object: Function UMG.UserWidget.SetPadding
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9984970
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.UserWidget.SetOwningPlayer
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9985570
	// Params: [ Num(1) Size(0x8) ]
	void SetOwningPlayer(struct APlayerController* LocalPlayerController);

	// Object: Function UMG.UserWidget.SetNumLoopsToPlay
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9983e88
	// Params: [ Num(2) Size(0xC) ]
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);

	// Object: Function UMG.UserWidget.SetInputActionPriority
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x9983744
	// Params: [ Num(1) Size(0x4) ]
	void SetInputActionPriority(int32_t NewPriority);

	// Object: Function UMG.UserWidget.SetInputActionBlocking
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x9983694
	// Params: [ Num(1) Size(0x1) ]
	void SetInputActionBlocking(bool bShouldBlock);

	// Object: Function UMG.UserWidget.SetForegroundColor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9984a1c
	// Params: [ Num(1) Size(0x28) ]
	void SetForegroundColor(struct FSlateColor InForegroundColor);

	// Object: Function UMG.UserWidget.SetDesiredSizeInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9985844
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredSizeInViewport(struct FVector2D Size);

	// Object: Function UMG.UserWidget.SetColorAndOpacity
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9984bb4
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.UserWidget.SetCanTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99835e4
	// Params: [ Num(1) Size(0x1) ]
	void SetCanTick(bool bEnableTick);

	// Object: Function UMG.UserWidget.SetAnchorsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9985798
	// Params: [ Num(1) Size(0x10) ]
	void SetAnchorsInViewport(struct FAnchors Anchors);

	// Object: Function UMG.UserWidget.SetAlignmentInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x99856f4
	// Params: [ Num(1) Size(0x8) ]
	void SetAlignmentInViewport(struct FVector2D Alignment);

	// Object: Function UMG.UserWidget.ReverseAnimation
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9983ce8
	// Params: [ Num(1) Size(0x8) ]
	void ReverseAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.RemoveFromViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x99859d4
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromViewport();

	// Object: Function UMG.UserWidget.RegisterInputComponent
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x99838b4
	// Params: [ Num(0) Size(0x0) ]
	void RegisterInputComponent();

	// Object: Function UMG.UserWidget.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UMG.UserWidget.PlaySound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9983b84
	// Params: [ Num(1) Size(0x8) ]
	void PlaySound(struct USoundBase* SoundToPlay);

	// Object: Function UMG.UserWidget.PlayEnterAnim
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void PlayEnterAnim();

	// Object: Function UMG.UserWidget.PlayAnimationTimeRange
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9984530
	// Params: [ Num(8) Size(0x28) ]
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed, bool bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimationReverse
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x99842b0
	// Params: [ Num(4) Size(0x18) ]
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimationForward
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x99843f0
	// Params: [ Num(4) Size(0x18) ]
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);

	// Object: Function UMG.UserWidget.PlayAnimation
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9984770
	// Params: [ Num(7) Size(0x28) ]
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed, bool bRestoreState);

	// Object: Function UMG.UserWidget.PauseAnimation
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x998412c
	// Params: [ Num(2) Size(0xC) ]
	float PauseAnimation(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchGesture
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent);

	// Object: Function UMG.UserWidget.OnTouchForceChanged
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent);

	// Object: Function UMG.UserWidget.OnRemovedFromFocusPath
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnPreviewMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnPreviewKeyDown
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x128) ]
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnPaint
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x30) ]
	void OnPaint(struct FPaintContext& Context);

	// Object: Function UMG.UserWidget.OnMouseWheel
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseMove
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x70) ]
	void OnMouseLeave(struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseEnter
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xA8) ]
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseCaptureLost
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnMouseCaptureLost();

	// Object: Function UMG.UserWidget.OnMouseButtonUp
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UMG.UserWidget.OnMouseButtonDoubleClick
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent);

	// Object: Function UMG.UserWidget.OnMotionDetected
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x138) ]
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent);

	// Object: Function UMG.UserWidget.OnKeyUp
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x128) ]
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnKeyDown
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x128) ]
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);

	// Object: Function UMG.UserWidget.OnKeyChar
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x110) ]
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent);

	// Object: Function UMG.UserWidget.OnInitialized
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnInitialized();

	// Object: Function UMG.UserWidget.OnFocusReceived
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0xF8) ]
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnFocusLost
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnFocusLost(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.OnDrop
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(4) Size(0xB1) ]
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragOver
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(4) Size(0xB1) ]
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragLeave
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x78) ]
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragEnter
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0xB0) ]
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0xB0) ]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation);

	// Object: Function UMG.UserWidget.OnDragCancelled
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x78) ]
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation);

	// Object: Function UMG.UserWidget.OnAnimationStarted
	// Flags: [BlueprintCosmetic|Native|Event|Protected|BlueprintEvent]
	// Offset: 0x9984d0c
	// Params: [ Num(1) Size(0x8) ]
	void OnAnimationStarted(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.OnAnimationFinished
	// Flags: [BlueprintCosmetic|Native|Event|Protected|BlueprintEvent]
	// Offset: 0x9984c5c
	// Params: [ Num(1) Size(0x8) ]
	void OnAnimationFinished(struct UWidgetAnimation* Animation);

	// Object: Function UMG.UserWidget.OnAnalogValueChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x130) ]
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent);

	// Object: Function UMG.UserWidget.OnAddedToFocusPath
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent);

	// Object: Function UMG.UserWidget.ListenForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x99839c4
	// Params: [ Num(4) Size(0x1C) ]
	void ListenForInputAction(struct FName ActionName, uint8_t EventType, bool bConsume, struct FDelegate Callback);

	// Object: Function UMG.UserWidget.IsPlayingAnimation
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9983b44
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlayingAnimation();

	// Object: Function UMG.UserWidget.IsListeningForInputAction
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99837ec
	// Params: [ Num(2) Size(0x9) ]
	bool IsListeningForInputAction(struct FName ActionName);

	// Object: Function UMG.UserWidget.IsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9985618
	// Params: [ Num(1) Size(0x1) ]
	bool IsInViewport();

	// Object: Function UMG.UserWidget.IsInteractable
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsInteractable();

	// Object: Function UMG.UserWidget.IsAnyAnimationPlaying
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9983f78
	// Params: [ Num(1) Size(0x1) ]
	bool IsAnyAnimationPlaying();

	// Object: Function UMG.UserWidget.IsAnimationPlayingForward
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9983c2c
	// Params: [ Num(2) Size(0x9) ]
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.IsAnimationPlaying
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9983fb8
	// Params: [ Num(2) Size(0x9) ]
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.GetOwningPlayerPawn
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998553c
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetOwningPlayerPawn();

	// Object: Function UMG.UserWidget.GetOwningHUD
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99835b0
	// Params: [ Num(1) Size(0x8) ]
	struct AHUD* GetOwningHUD();

	// Object: Function UMG.UserWidget.GetIsVisible
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9985650
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsVisible();

	// Object: Function UMG.UserWidget.GetAnimationCurrentTime
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9984074
	// Params: [ Num(2) Size(0xC) ]
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation);

	// Object: Function UMG.UserWidget.GetAnchorsInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99856bc
	// Params: [ Num(1) Size(0x10) ]
	struct FAnchors GetAnchorsInViewport();

	// Object: Function UMG.UserWidget.GetAlignmentInViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9985688
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetAlignmentInViewport();

	// Object: Function UMG.UserWidget.DoPlayEnterAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9984dbc
	// Params: [ Num(1) Size(0x1) ]
	void DoPlayEnterAnim(bool InPlayFlag);

	// Object: Function UMG.UserWidget.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void Destruct();

	// Object: Function UMG.UserWidget.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void Construct();

	// Object: Function UMG.UserWidget.CancelLatentActions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9985528
	// Params: [ Num(0) Size(0x0) ]
	void CancelLatentActions();

	// Object: Function UMG.UserWidget.BindToAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998541c
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.BindToAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9985184
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate);

	// Object: Function UMG.UserWidget.BindToAnimationEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9984e6c
	// Params: [ Num(4) Size(0x24) ]
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag);

	// Object: Function UMG.UserWidget.AddToViewport
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x9985a9c
	// Params: [ Num(1) Size(0x4) ]
	void AddToViewport(int32_t ZOrder);

	// Object: Function UMG.UserWidget.AddToPlayerScreen
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x99859e8
	// Params: [ Num(2) Size(0x5) ]
	bool AddToPlayerScreen(int32_t ZOrder);
};

// Object: Class UMG.PanelWidget
// Size: 0x158 (Inherited: 0x140)
struct UPanelWidget : UWidget
{
	struct TArray<struct UPanelSlot*> Slots; // 0x140(0x10)
	uint8_t Pad_0x150[0x8]; // 0x150(0x8)


	// Object: Function UMG.PanelWidget.RemoveChildAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996acac
	// Params: [ Num(2) Size(0x5) ]
	bool RemoveChildAt(int32_t Index);

	// Object: Function UMG.PanelWidget.RemoveChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996ab48
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveChild(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.HasChild
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996ad60
	// Params: [ Num(2) Size(0x9) ]
	bool HasChild(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.HasAnyChildren
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996ab10
	// Params: [ Num(1) Size(0x1) ]
	bool HasAnyChildren();

	// Object: Function UMG.PanelWidget.GetChildrenCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996b010
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetChildrenCount();

	// Object: Function UMG.PanelWidget.GetChildIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996ae14
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetChildIndex(struct UWidget* Content);

	// Object: Function UMG.PanelWidget.GetChildAt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996af60
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetChildAt(int32_t Index);

	// Object: Function UMG.PanelWidget.GetAllChildren
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996aec4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UWidget*> GetAllChildren();

	// Object: Function UMG.PanelWidget.ClearChildren
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x996aaf4
	// Params: [ Num(0) Size(0x0) ]
	void ClearChildren();

	// Object: Function UMG.PanelWidget.AddChild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996abfc
	// Params: [ Num(2) Size(0x10) ]
	struct UPanelSlot* AddChild(struct UWidget* Content);
};

// Object: Class UMG.ContentWidget
// Size: 0x158 (Inherited: 0x158)
struct UContentWidget : UPanelWidget
{

	// Object: Function UMG.ContentWidget.SetContent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9956ba8
	// Params: [ Num(2) Size(0x10) ]
	struct UPanelSlot* SetContent(struct UWidget* Content);

	// Object: Function UMG.ContentWidget.GetContentSlot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9956c58
	// Params: [ Num(1) Size(0x8) ]
	struct UPanelSlot* GetContentSlot();

	// Object: Function UMG.ContentWidget.GetContent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9956b74
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetContent();
};

// Object: Class UMG.Slider
// Size: 0x910 (Inherited: 0x140)
struct USlider : UWidget
{
	float Value; // 0x140(0x4)
	struct FDelegate ValueDelegate; // 0x144(0x10)
	float MinValue; // 0x154(0x4)
	float MaxValue; // 0x158(0x4)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
	struct FSliderStyle WidgetStyle; // 0x160(0x6E0)
	uint8_t Orientation; // 0x840(0x1)
	uint8_t Pad_0x841[0x3]; // 0x841(0x3)
	struct FLinearColor SliderBarColor; // 0x844(0x10)
	struct FLinearColor SliderHandleColor; // 0x854(0x10)
	struct FVector2D SliderHandleOffset; // 0x864(0x8)
	bool CommitTouchStartValue; // 0x86C(0x1)
	bool IndentHandle; // 0x86D(0x1)
	bool Locked; // 0x86E(0x1)
	bool MouseUsesStep; // 0x86F(0x1)
	bool RequiresControllerLock; // 0x870(0x1)
	uint8_t Pad_0x871[0x3]; // 0x871(0x3)
	float StepSize; // 0x874(0x4)
	bool IsFocusable; // 0x878(0x1)
	uint8_t Pad_0x879[0x7]; // 0x879(0x7)
	struct FSoftObjectPath OnCaptureBeginSound; // 0x880(0x18)
	struct FSoftObjectPath OnCaptureEndSound; // 0x898(0x18)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x8B0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x8C0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x8D0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x8E0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x8F0(0x10)
	uint8_t Pad_0x900[0x10]; // 0x900(0x10)


	// Object: Function UMG.Slider.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997b7a8
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float InValue);

	// Object: Function UMG.Slider.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997b450
	// Params: [ Num(1) Size(0x4) ]
	void SetStepSize(float InValue);

	// Object: Function UMG.Slider.SetSliderHandleOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x997b1ac
	// Params: [ Num(1) Size(0x8) ]
	void SetSliderHandleOffset(struct FVector2D InValue);

	// Object: Function UMG.Slider.SetSliderHandleColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x997b250
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderHandleColor(struct FLinearColor InValue);

	// Object: Function UMG.Slider.SetSliderBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x997b2f8
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderBarColor(struct FLinearColor InValue);

	// Object: Function UMG.Slider.SetNormalBarImage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x997ae74
	// Params: [ Num(1) Size(0x120) ]
	void SetNormalBarImage(struct FSlateBrush& InImage);

	// Object: Function UMG.Slider.SetMouseUsesStep
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997b3a0
	// Params: [ Num(1) Size(0x1) ]
	void SetMouseUsesStep(bool bInMouseUsesStep);

	// Object: Function UMG.Slider.SetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997b700
	// Params: [ Num(1) Size(0x4) ]
	void SetMinValue(float InValue);

	// Object: Function UMG.Slider.SetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997b658
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxValue(float InValue);

	// Object: Function UMG.Slider.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997b4f8
	// Params: [ Num(1) Size(0x1) ]
	void SetLocked(bool InValue);

	// Object: Function UMG.Slider.SetIndentHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997b5a8
	// Params: [ Num(1) Size(0x1) ]
	void SetIndentHandle(bool InValue);

	// Object: Function UMG.Slider.SetHoveredBarImage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x997abe0
	// Params: [ Num(1) Size(0x120) ]
	void SetHoveredBarImage(struct FSlateBrush& InImage);

	// Object: Function UMG.Slider.SetBarThickness
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997b108
	// Params: [ Num(1) Size(0x4) ]
	void SetBarThickness(float InValue);

	// Object: Function UMG.Slider.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997b884
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function UMG.Slider.GetNormalizedValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997b850
	// Params: [ Num(1) Size(0x4) ]
	float GetNormalizedValue();
};

// Object: Class UMG.WidgetSwitcher
// Size: 0x168 (Inherited: 0x158)
struct UWidgetSwitcher : UPanelWidget
{
	int32_t ActiveWidgetIndex; // 0x154(0x4)
	uint8_t Pad_0x15C[0xC]; // 0x15C(0xC)


	// Object: Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x99a1c04
	// Params: [ Num(1) Size(0x4) ]
	void SetActiveWidgetIndex(int32_t Index);

	// Object: Function UMG.WidgetSwitcher.SetActiveWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x99a1b54
	// Params: [ Num(1) Size(0x8) ]
	void SetActiveWidget(struct UWidget* Widget);

	// Object: Function UMG.WidgetSwitcher.GetWidgetAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a1aa4
	// Params: [ Num(2) Size(0x10) ]
	struct UWidget* GetWidgetAtIndex(int32_t Index);

	// Object: Function UMG.WidgetSwitcher.GetNumWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a1ce8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumWidgets();

	// Object: Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a1cb4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActiveWidgetIndex();

	// Object: Function UMG.WidgetSwitcher.GetActiveWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99a1a70
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetActiveWidget();
};

// Object: Class UMG.Border
// Size: 0x340 (Inherited: 0x158)
struct UBorder : UContentWidget
{
	uint8_t HorizontalAlignment; // 0x151(0x1)
	uint8_t VerticalAlignment; // 0x152(0x1)
	uint8_t bShowEffectWhenDisabled : 1; // 0x153(0x1), Mask(0x1)
	struct FLinearColor ContentColorAndOpacity; // 0x154(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x164(0x10)
	struct FMargin Padding; // 0x174(0x10)
	uint8_t BitPad_0x18A_1 : 7; // 0x18A(0x1)
	uint8_t Pad_0x18B[0x5]; // 0x18B(0x5)
	struct FSlateBrush Background; // 0x190(0x120)
	struct FDelegate BackgroundDelegate; // 0x2B0(0x10)
	struct FLinearColor BrushColor; // 0x2C0(0x10)
	struct FDelegate BrushColorDelegate; // 0x2D0(0x10)
	struct FVector2D DesiredSizeScale; // 0x2E0(0x8)
	bool bFlipForRightToLeftFlowDirection; // 0x2E8(0x1)
	uint8_t Pad_0x2E9[0x3]; // 0x2E9(0x3)
	struct FDelegate OnMouseButtonDownEvent; // 0x2EC(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x2FC(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x30C(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x31C(0x10)
	uint8_t Pad_0x32C[0x14]; // 0x32C(0x14)


	// Object: Function UMG.Border.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994f7a8
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.Border.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994f8f8
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.Border.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994f850
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.Border.SetDesiredSizeScale
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x994f19c
	// Params: [ Num(1) Size(0x8) ]
	void SetDesiredSizeScale(struct FVector2D InScale);

	// Object: Function UMG.Border.SetContentColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x994f9a4
	// Params: [ Num(1) Size(0x10) ]
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity);

	// Object: Function UMG.Border.SetBrushFromTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994f31c
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromTexture(struct UTexture2D* Texture);

	// Object: Function UMG.Border.SetBrushFromMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994f274
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromMaterial(struct UMaterialInterface* Material);

	// Object: Function UMG.Border.SetBrushFromAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994f3c4
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset);

	// Object: Function UMG.Border.SetBrushColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x994f700
	// Params: [ Num(1) Size(0x10) ]
	void SetBrushColor(struct FLinearColor InBrushColor);

	// Object: Function UMG.Border.SetBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x994f46c
	// Params: [ Num(1) Size(0x120) ]
	void SetBrush(struct FSlateBrush& InBrush);

	// Object: Function UMG.Border.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994f240
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UMG.DynamicEntryBoxBase
// Size: 0x200 (Inherited: 0x140)
struct UDynamicEntryBoxBase : UWidget
{
	enum class EDynamicBoxType EntryBoxType; // 0x140(0x1)
	uint8_t Pad_0x141[0x3]; // 0x141(0x3)
	struct FVector2D EntrySpacing; // 0x144(0x8)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	struct TArray<struct FVector2D> SpacingPattern; // 0x150(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x160(0x8)
	uint8_t EntryHorizontalAlignment; // 0x168(0x1)
	uint8_t EntryVerticalAlignment; // 0x169(0x1)
	uint8_t Pad_0x16A[0x2]; // 0x16A(0x2)
	int32_t MaxElementSize; // 0x16C(0x4)
	uint8_t Pad_0x170[0x10]; // 0x170(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x180(0x80)


	// Object: Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9958118
	// Params: [ Num(1) Size(0x8) ]
	void SetEntrySpacing(struct FVector2D& InEntrySpacing);

	// Object: Function UMG.DynamicEntryBoxBase.GetNumEntries
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99581c8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumEntries();

	// Object: Function UMG.DynamicEntryBoxBase.GetAllEntries
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99581fc
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UUserWidget*> GetAllEntries();
};

// Object: Class UMG.Button
// Size: 0x6E0 (Inherited: 0x158)
struct UButton : UContentWidget
{
	struct USlateWidgetStyleAsset* Style; // 0x158(0x8)
	struct FButtonStyle WidgetStyle; // 0x160(0x4E0)
	struct FLinearColor ColorAndOpacity; // 0x640(0x10)
	struct FLinearColor BackgroundColor; // 0x650(0x10)
	bool bExplicitChildLayerId; // 0x660(0x1)
	uint8_t ClickMethod; // 0x661(0x1)
	uint8_t TouchMethod; // 0x662(0x1)
	uint8_t PressMethod; // 0x663(0x1)
	bool IsFocusable; // 0x664(0x1)
	uint8_t Pad_0x665[0x3]; // 0x665(0x3)
	struct FMulticastInlineDelegate OnClicked; // 0x668(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x678(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x688(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x698(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x6A8(0x10)
	struct FSoftObjectPath OnClickedSound; // 0x6B8(0x18)
	uint8_t Pad_0x6D0[0x10]; // 0x6D0(0x10)


	// Object: Function UMG.Button.SetTouchMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9950a84
	// Params: [ Num(1) Size(0x1) ]
	void SetTouchMethod(uint8_t InTouchMethod);

	// Object: Function UMG.Button.SetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9950d5c
	// Params: [ Num(1) Size(0x4E0) ]
	void SetStyle(struct FButtonStyle& InStyle);

	// Object: Function UMG.Button.SetPressMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99509dc
	// Params: [ Num(1) Size(0x1) ]
	void SetPressMethod(uint8_t InPressMethod);

	// Object: Function UMG.Button.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9950cb4
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.Button.SetClickMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9950b2c
	// Params: [ Num(1) Size(0x1) ]
	void SetClickMethod(uint8_t InClickMethod);

	// Object: Function UMG.Button.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9950c0c
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundColor(struct FLinearColor InBackgroundColor);

	// Object: Function UMG.Button.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9950bd4
	// Params: [ Num(1) Size(0x1) ]
	bool IsPressed();
};

// Object: Class UMG.TextLayoutWidget
// Size: 0x168 (Inherited: 0x140)
struct UTextLayoutWidget : UWidget
{
	struct FShapedTextOptions ShapedTextOptions; // 0x140(0x3)
	uint8_t Justification; // 0x143(0x1)
	uint8_t VerticalJustification; // 0x144(0x1)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x145(0x1)
	uint8_t AutoWrapText : 1; // 0x146(0x1), Mask(0x1)
	uint8_t BitPad_0x146_1 : 7; // 0x146(0x1)
	uint8_t Pad_0x147[0x1]; // 0x147(0x1)
	float WrapTextAt; // 0x148(0x4)
	struct FMargin Margin; // 0x14C(0x10)
	float LineHeightPercentage; // 0x15C(0x4)
	uint8_t AlwaysKeepJustification : 1; // 0x160(0x1), Mask(0x1)
	uint8_t CanCache : 1; // 0x160(0x1), Mask(0x2)
	uint8_t BitPad_0x160_2 : 6; // 0x160(0x1)
	uint8_t Pad_0x161[0x7]; // 0x161(0x7)


	// Object: Function UMG.TextLayoutWidget.SetVerticalJustification
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9980c14
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalJustification(uint8_t InJustification);

	// Object: Function UMG.TextLayoutWidget.SetJustification
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9980cc4
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(uint8_t InJustification);
};

// Object: Class UMG.TextBlock
// Size: 0x4C0 (Inherited: 0x168)
struct UTextBlock : UTextLayoutWidget
{
	struct FText Text; // 0x168(0x18)
	struct FDelegate TextDelegate; // 0x180(0x10)
	struct FSlateColor ColorAndOpacity; // 0x190(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x1B8(0x10)
	struct FSlateFontInfo Font; // 0x1C8(0x68)
	struct FSlateBrush StrikeBrush; // 0x230(0x120)
	struct FSlateBrush BackgroundBrush; // 0x350(0x120)
	struct FVector2D ShadowOffset; // 0x470(0x8)
	bool bIgnoreShadowSize; // 0x478(0x1)
	uint8_t Pad_0x479[0x3]; // 0x479(0x3)
	struct FLinearColor ShadowColorAndOpacity; // 0x47C(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x48C(0x10)
	float MinDesiredWidth; // 0x49C(0x4)
	bool bWrapWithInvalidationPanel; // 0x4A0(0x1)
	bool bAutoWrapText; // 0x4A1(0x1)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x4A2(0x1)
	enum class ETextOverflowPolicy TextOverflowPolicy; // 0x4A3(0x1)
	bool bSimpleTextMode; // 0x4A4(0x1)
	uint8_t Pad_0x4A5[0x1B]; // 0x4A5(0x1B)


	// Object: Function UMG.TextBlock.SetTextTransformPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997f0f8
	// Params: [ Num(1) Size(0x1) ]
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);

	// Object: Function UMG.TextBlock.SetTextOverflowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997f050
	// Params: [ Num(1) Size(0x1) ]
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);

	// Object: Function UMG.TextBlock.SetText
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x997ed8c
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.TextBlock.SetStrikeBrush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997f7ac
	// Params: [ Num(1) Size(0x120) ]
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush);

	// Object: Function UMG.TextBlock.SetShadowOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9980028
	// Params: [ Num(1) Size(0x8) ]
	void SetShadowOffset(struct FVector2D InShadowOffset);

	// Object: Function UMG.TextBlock.SetShadowColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x99800cc
	// Params: [ Num(1) Size(0x10) ]
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	// Object: Function UMG.TextBlock.SetOutlineSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997fc60
	// Params: [ Num(1) Size(0x30) ]
	void SetOutlineSettings(struct FFontOutlineSettings InOutlineSettings);

	// Object: Function UMG.TextBlock.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9980174
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.TextBlock.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997f250
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.TextBlock.SetFontTypeface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997fd3c
	// Params: [ Num(1) Size(0x8) ]
	void SetFontTypeface(struct FName InTypeface);

	// Object: Function UMG.TextBlock.SetFontSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997fde4
	// Params: [ Num(1) Size(0x4) ]
	void SetFontSize(int32_t InFontSize);

	// Object: Function UMG.TextBlock.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997fe8c
	// Params: [ Num(1) Size(0x68) ]
	void SetFont(struct FSlateFontInfo InFontInfo);

	// Object: Function UMG.TextBlock.SetColorAndOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998021c
	// Params: [ Num(1) Size(0x28) ]
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity);

	// Object: Function UMG.TextBlock.SetBackgroundBrush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997f2f8
	// Params: [ Num(1) Size(0x120) ]
	void SetBackgroundBrush(struct FSlateBrush InBackgroundBrush);

	// Object: Function UMG.TextBlock.SetAutoWrapText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997f1a0
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoWrapText(bool InAutoTextWrap);

	// Object: Function UMG.TextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997ef18
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.TextBlock.GetDynamicOutlineMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997efe8
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial();

	// Object: Function UMG.TextBlock.GetDynamicFontMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997f01c
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// Object: Class UMG.ScrollBox
// Size: 0x1090 (Inherited: 0x158)
struct UScrollBox : UPanelWidget
{
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct FScrollBoxStyle WidgetStyle; // 0x160(0x490)
	struct FScrollBarStyle WidgetBarStyle; // 0x5F0(0xA30)
	struct USlateWidgetStyleAsset* Style; // 0x1020(0x8)
	struct USlateWidgetStyleAsset* BarStyle; // 0x1028(0x8)
	uint8_t Orientation; // 0x1030(0x1)
	enum class ESlateVisibility ScrollBarVisibility; // 0x1031(0x1)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x1032(0x1)
	uint8_t Pad_0x1033[0x1]; // 0x1033(0x1)
	struct FVector2D ScrollbarThickness; // 0x1034(0x8)
	struct FMargin ScrollbarPadding; // 0x103C(0x10)
	bool AlwaysShowScrollbar; // 0x104C(0x1)
	bool AlwaysShowScrollbarTrack; // 0x104D(0x1)
	bool AllowOverscroll; // 0x104E(0x1)
	bool bAnimateWheelScrolling; // 0x104F(0x1)
	enum class EDescendantScrollDestination NavigationDestination; // 0x1050(0x1)
	uint8_t Pad_0x1051[0x3]; // 0x1051(0x3)
	float NavigationScrollPadding; // 0x1054(0x4)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x1058(0x1)
	bool bAllowRightClickDragScrolling; // 0x1059(0x1)
	uint8_t Pad_0x105A[0x2]; // 0x105A(0x2)
	float WheelScrollMultiplier; // 0x105C(0x4)
	bool bKeepLayoutIfScrollBarIsInvisible; // 0x1060(0x1)
	uint8_t Pad_0x1061[0x7]; // 0x1061(0x7)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x1068(0x10)
	uint8_t Pad_0x1078[0x18]; // 0x1078(0x18)


	// Object: Function UMG.ScrollBox.SetWheelScrollMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99736e0
	// Params: [ Num(1) Size(0x4) ]
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);

	// Object: Function UMG.ScrollBox.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973624
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffset(float NewScrollOffset);

	// Object: Function UMG.ScrollBox.SetScrollBarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973afc
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility);

	// Object: Function UMG.ScrollBox.SetScrollbarThickness
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9973a4c
	// Params: [ Num(1) Size(0x8) ]
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness);

	// Object: Function UMG.ScrollBox.SetScrollbarPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9973998
	// Params: [ Num(1) Size(0x10) ]
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding);

	// Object: Function UMG.ScrollBox.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973ba4
	// Params: [ Num(1) Size(0x1) ]
	void SetOrientation(uint8_t NewOrientation);

	// Object: Function UMG.ScrollBox.SetConsumeMouseWheel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973c4c
	// Params: [ Num(1) Size(0x1) ]
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel);

	// Object: Function UMG.ScrollBox.SetAnimateWheelScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973788
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);

	// Object: Function UMG.ScrollBox.SetAlwaysShowScrollbar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99738e8
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);

	// Object: Function UMG.ScrollBox.SetAllowOverscroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973838
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowOverscroll(bool NewAllowOverscroll);

	// Object: Function UMG.ScrollBox.ScrollWidgetIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99733f0
	// Params: [ Num(4) Size(0x10) ]
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding);

	// Object: Function UMG.ScrollBox.ScrollToStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973574
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToStart();

	// Object: Function UMG.ScrollBox.ScrollToEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973560
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToEnd();

	// Object: Function UMG.ScrollBox.GetViewOffsetFraction
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9973588
	// Params: [ Num(1) Size(0x4) ]
	float GetViewOffsetFraction();

	// Object: Function UMG.ScrollBox.GetScrollOffsetOfEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99735bc
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffsetOfEnd();

	// Object: Function UMG.ScrollBox.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99735f0
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffset();

	// Object: Function UMG.ScrollBox.EndInertialScrolling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99736cc
	// Params: [ Num(0) Size(0x0) ]
	void EndInertialScrolling();
};

// Object: Class UMG.Image
// Size: 0x320 (Inherited: 0x140)
struct UImage : UWidget
{
	struct FSlateBrush Brush; // 0x140(0x120)
	struct FDelegate BrushDelegate; // 0x260(0x10)
	struct FLinearColor ColorAndOpacity; // 0x270(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x280(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x290(0x1)
	uint8_t Pad_0x291[0x3]; // 0x291(0x3)
	struct FDelegate OnMouseButtonDownEvent; // 0x294(0x10)
	uint8_t Pad_0x2A4[0x4]; // 0x2A4(0x4)
	struct FSoftObjectPath OnClickedSound; // 0x2A8(0x18)
	enum class EWidgetPlatformType PlatformType; // 0x2C0(0x1)
	bool bDiscardResource; // 0x2C1(0x1)
	bool bUseWeakResource; // 0x2C2(0x1)
	bool bHideInAsyncDuration; // 0x2C3(0x1)
	uint8_t Pad_0x2C4[0x4]; // 0x2C4(0x4)
	struct FSoftObjectPath ImageWeakRef; // 0x2C8(0x18)
	uint8_t LoadingDetailMode; // 0x2E0(0x1)
	uint8_t Pad_0x2E1[0x3F]; // 0x2E1(0x3F)


	// Object: Function UMG.Image.UnloadTextureResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995e374
	// Params: [ Num(0) Size(0x0) ]
	void UnloadTextureResource();

	// Object: Function UMG.Image.SetOutlineSettingsCornerRadii
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x995e7e4
	// Params: [ Num(1) Size(0x10) ]
	void SetOutlineSettingsCornerRadii(struct FVector4& InCornerRadii);

	// Object: Function UMG.Image.SetOutlineSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x995e548
	// Params: [ Num(1) Size(0x40) ]
	void SetOutlineSettings(struct FSlateBrushOutlineSettings& InOutlineSettings);

	// Object: Function UMG.Image.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995f6a0
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function UMG.Image.SetColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x995f748
	// Params: [ Num(1) Size(0x10) ]
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	// Object: Function UMG.Image.SetBrushTintColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995f464
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushTintColor(struct FSlateColor TintColor);

	// Object: Function UMG.Image.SetBrushSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x995f5fc
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushSize(struct FVector2D DesiredSize);

	// Object: Function UMG.Image.SetBrushResourceObjectAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995e388
	// Params: [ Num(3) Size(0x2A) ]
	void SetBrushResourceObjectAsync(struct TSoftObjectPtr<UObject> SoftObject, bool bMatchSize, bool bInHideInAsyncDuration);

	// Object: Function UMG.Image.SetBrushResourceObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995f374
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushResourceObject(struct UObject* ResourceObject, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromTextureDynamic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995ec34
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995ee34
	// Params: [ Num(2) Size(0x9) ]
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromSoftTexture
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995ea04
	// Params: [ Num(2) Size(0x29) ]
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromSoftMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995e8d4
	// Params: [ Num(1) Size(0x28) ]
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial);

	// Object: Function UMG.Image.SetBrushFromMaterial
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995eb84
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromMaterial(struct UMaterialInterface* Material);

	// Object: Function UMG.Image.SetBrushFromAtlasInterface
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995ed2c
	// Params: [ Num(2) Size(0x11) ]
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromAtlasAdapter
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x995f278
	// Params: [ Num(2) Size(0x11) ]
	void SetBrushFromAtlasAdapter(struct FSlateBrushAtlasAdapter& InBrushAtlasAdapter, bool bMatchSize);

	// Object: Function UMG.Image.SetBrushFromAsset
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995ef2c
	// Params: [ Num(1) Size(0x8) ]
	void SetBrushFromAsset(struct USlateBrushAsset* Asset);

	// Object: Function UMG.Image.SetBrush
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x995efdc
	// Params: [ Num(1) Size(0x120) ]
	void SetBrush(struct FSlateBrush& InBrush);

	// Object: Function UMG.Image.GetSoftObjectPath
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x995e2d0
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetSoftObjectPath();

	// Object: Function UMG.Image.GetOutlineSettings
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x995e67c
	// Params: [ Num(1) Size(0x40) ]
	struct FSlateBrushOutlineSettings GetOutlineSettings();

	// Object: Function UMG.Image.GetDynamicMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995e8a0
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Object: Class UMG.ListViewBase
// Size: 0xCC0 (Inherited: 0x140)
struct UListViewBase : UWidget
{
	struct UUserWidget* EntryWidgetClass; // 0x140(0x8)
	float WheelScrollMultiplier; // 0x148(0x4)
	bool bEnableScrollAnimation; // 0x14C(0x1)
	bool bEnableFixedLineOffset; // 0x14D(0x1)
	bool bClampScroll; // 0x14E(0x1)
	bool bDisableScroll; // 0x14F(0x1)
	bool bOverScroll; // 0x150(0x1)
	uint8_t Pad_0x151[0x3]; // 0x151(0x3)
	float FixedLineScrollOffset; // 0x154(0x4)
	float DragDropDetectAngle; // 0x158(0x4)
	bool bKeepLayoutIfScrollBarIsInvisible; // 0x15C(0x1)
	uint8_t Pad_0x15D[0x3]; // 0x15D(0x3)
	struct FMulticastInlineDelegate BP_OnEntryGeneratedPre; // 0x160(0x10)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x170(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x180(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x190(0x80)
	struct FScrollBarStyle WidgetBarStyle; // 0x210(0xA30)
	enum class ESlateVisibility ScrollBarVisibility; // 0xC40(0x1)
	uint8_t Pad_0xC41[0x3]; // 0xC41(0x3)
	struct FVector2D ScrollbarThickness; // 0xC44(0x8)
	struct FMargin ScrollbarPadding; // 0xC4C(0x10)
	bool AlwaysShowScrollbar; // 0xC5C(0x1)
	bool AlwaysShowScrollbarTrack; // 0xC5D(0x1)
	uint8_t Pad_0xC5E[0x62]; // 0xC5E(0x62)


	// Object: Function UMG.ListViewBase.SetWheelScrollMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9966670
	// Params: [ Num(1) Size(0x4) ]
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);

	// Object: Function UMG.ListViewBase.SetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996674c
	// Params: [ Num(1) Size(0x4) ]
	void SetScrollOffset(float InScrollOffset);

	// Object: Function UMG.ListViewBase.SetScrollBarVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99665c8
	// Params: [ Num(1) Size(0x1) ]
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility);

	// Object: Function UMG.ListViewBase.SetScrollbarThickness
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x996636c
	// Params: [ Num(1) Size(0x8) ]
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness);

	// Object: Function UMG.ListViewBase.SetScrollbarPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x99662b8
	// Params: [ Num(1) Size(0x10) ]
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding);

	// Object: Function UMG.ListViewBase.SetKeepLayoutIfScrollBarIsInvisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9966158
	// Params: [ Num(1) Size(0x1) ]
	void SetKeepLayoutIfScrollBarIsInvisible(bool bShouldKeepLayout);

	// Object: Function UMG.ListViewBase.SetEnableScrollAnimation
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x996641c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableScrollAnimation(bool bNewEnableScrollAnimation);

	// Object: Function UMG.ListViewBase.SetDisableScroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9966518
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableScroll(bool bInDisableScroll);

	// Object: Function UMG.ListViewBase.SetAlwaysShowScrollbar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9966208
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);

	// Object: Function UMG.ListViewBase.ScrollToTop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9966808
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToTop();

	// Object: Function UMG.ListViewBase.ScrollToBottom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99667f4
	// Params: [ Num(0) Size(0x0) ]
	void ScrollToBottom();

	// Object: Function UMG.ListViewBase.RequestRefresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99664cc
	// Params: [ Num(0) Size(0x0) ]
	void RequestRefresh();

	// Object: Function UMG.ListViewBase.RegenerateAllEntries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996681c
	// Params: [ Num(0) Size(0x0) ]
	void RegenerateAllEntries();

	// Object: Function UMG.ListViewBase.GetScrollOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9966718
	// Params: [ Num(1) Size(0x4) ]
	float GetScrollOffset();

	// Object: Function UMG.ListViewBase.GetDisplayedEntryWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9966830
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets();

	// Object: Function UMG.ListViewBase.GetDisableScroll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99664e0
	// Params: [ Num(1) Size(0x1) ]
	bool GetDisableScroll();
};

// Object: Class UMG.ListView
// Size: 0xE80 (Inherited: 0xCC0)
struct UListView : UListViewBase
{
	uint8_t Pad_0xCC0[0xB8]; // 0xCC0(0xB8)
	uint8_t Orientation; // 0xD78(0x1)
	uint8_t SelectionMode; // 0xD79(0x1)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xD7A(0x1)
	bool bClearSelectionOnClick; // 0xD7B(0x1)
	bool bIsFocusable; // 0xD7C(0x1)
	uint8_t Pad_0xD7D[0x3]; // 0xD7D(0x3)
	float EntrySpacing; // 0xD80(0x4)
	float EntrySpacingX; // 0xD84(0x4)
	float EntrySpacingY; // 0xD88(0x4)
	bool bReturnFocusToSelection; // 0xD8C(0x1)
	bool bIsLoopNavigation; // 0xD8D(0x1)
	uint8_t Pad_0xD8E[0x2]; // 0xD8E(0x2)
	float ListItemStartPosOffset; // 0xD90(0x4)
	uint8_t Pad_0xD94[0x4]; // 0xD94(0x4)
	struct TArray<struct UObject*> ListItems; // 0xD98(0x10)
	uint8_t Pad_0xDA8[0x10]; // 0xDA8(0x10)
	struct FSoftObjectPath OnClickedSound; // 0xDB8(0x18)
	bool EnableDelayAdd; // 0xDD0(0x1)
	uint8_t Pad_0xDD1[0x3]; // 0xDD1(0x3)
	float DelayAddInterval; // 0xDD4(0x4)
	int32_t NumInPanel; // 0xDD8(0x4)
	uint8_t Pad_0xDDC[0x4]; // 0xDDC(0x4)
	struct TArray<struct UObject*> DelayAddedListItems; // 0xDE0(0x10)
	int32_t DelaySelctedIndex; // 0xDF0(0x4)
	bool bDelayScrollToSelected; // 0xDF4(0x1)
	bool DelayAddAnimFlag; // 0xDF5(0x1)
	enum class EListItemHorizontalGenerateDirection HorizontalGenerateDirection; // 0xDF6(0x1)
	enum class EListItemVerticalGenerateDirection VerticalGenerateDirection; // 0xDF7(0x1)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0xDF8(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0xE08(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0xE18(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0xE28(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0xE38(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0xE48(0x10)
	struct FMulticastInlineDelegate BP_OnDelayAddCompleted; // 0xE58(0x10)
	uint8_t Pad_0xE68[0x18]; // 0xE68(0x18)


	// Object: Function UMG.ListView.SetVerticalGenerateDirection
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x9962e80
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalGenerateDirection(enum class EListItemVerticalGenerateDirection InDirection);

	// Object: Function UMG.ListView.SetSelectionMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9963340
	// Params: [ Num(1) Size(0x1) ]
	void SetSelectionMode(uint8_t SelectionMode);

	// Object: Function UMG.ListView.SetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99631b8
	// Params: [ Num(1) Size(0x4) ]
	void SetSelectedIndex(int32_t Index);

	// Object: Function UMG.ListView.SetIsEnableDelayAdd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996252c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsEnableDelayAdd(bool bEnable);

	// Object: Function UMG.ListView.SetHorizontalGenerateDirection
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x9962f24
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalGenerateDirection(enum class EListItemHorizontalGenerateDirection InDirection);

	// Object: Function UMG.ListView.SetEntrySpacingY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9962fc8
	// Params: [ Num(1) Size(0x4) ]
	void SetEntrySpacingY(float InEntrySpacingY);

	// Object: Function UMG.ListView.SetEntrySpacingX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996306c
	// Params: [ Num(1) Size(0x4) ]
	void SetEntrySpacingX(float InEntrySpacingX);

	// Object: Function UMG.ListView.SetDelayAddInterval
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x99625dc
	// Params: [ Num(1) Size(0x4) ]
	void SetDelayAddInterval(float InInterval);

	// Object: Function UMG.ListView.ScrollIndexIntoView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9963260
	// Params: [ Num(1) Size(0x4) ]
	void ScrollIndexIntoView(int32_t Index);

	// Object: Function UMG.ListView.RemoveItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9963590
	// Params: [ Num(1) Size(0x8) ]
	void RemoveItem(struct UObject* Item);

	// Object: Function UMG.ListView.PreloadItemUserWidgets
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x99637d8
	// Params: [ Num(2) Size(0x18) ]
	void PreloadItemUserWidgets(uint8_t Number, struct FString EntryWidtPath);

	// Object: Function UMG.ListView.NavigateToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9963110
	// Params: [ Num(1) Size(0x4) ]
	void NavigateToIndex(int32_t Index);

	// Object: Function UMG.ListView.IsRefreshPending
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9963308
	// Params: [ Num(1) Size(0x1) ]
	bool IsRefreshPending();

	// Object: Function UMG.ListView.GetNumItems
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99634ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumItems();

	// Object: Function UMG.ListView.GetListItems
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996375c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UObject*> GetListItems();

	// Object: Function UMG.ListView.GetItemAt
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99634e0
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetItemAt(int32_t Index);

	// Object: Function UMG.ListView.GetIsEnableDelayAdd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9962510
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsEnableDelayAdd();

	// Object: Function UMG.ListView.GetIndexForItem
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99633fc
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetIndexForItem(struct UObject* Item);

	// Object: Function UMG.ListView.GetDelayAddedListItems
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99636e0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UObject*> GetDelayAddedListItems();

	// Object: Function UMG.ListView.ClearListItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99633e8
	// Params: [ Num(0) Size(0x0) ]
	void ClearListItems();

	// Object: Function UMG.ListView.BP_SetSelectedItem
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x9962dd8
	// Params: [ Num(1) Size(0x8) ]
	void BP_SetSelectedItem(struct UObject* Item);

	// Object: Function UMG.ListView.BP_SetListItems
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x99628fc
	// Params: [ Num(1) Size(0x10) ]
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems);

	// Object: Function UMG.ListView.BP_SetItemSelection
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x9962ce8
	// Params: [ Num(2) Size(0x9) ]
	void BP_SetItemSelection(struct UObject* Item, bool bSelected);

	// Object: Function UMG.ListView.BP_SetDelayAddListItems
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x996272c
	// Params: [ Num(4) Size(0x16) ]
	void BP_SetDelayAddListItems(struct TArray<struct UObject*>& InListItems, int32_t SelectedIndex, bool bScrollToSelected, bool InEnableAddByTimer);

	// Object: Function UMG.ListView.BP_ScrollItemIntoView
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x99629d0
	// Params: [ Num(1) Size(0x8) ]
	void BP_ScrollItemIntoView(struct UObject* Item);

	// Object: Function UMG.ListView.BP_NavigateToItem
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x9962a78
	// Params: [ Num(1) Size(0x8) ]
	void BP_NavigateToItem(struct UObject* Item);

	// Object: Function UMG.ListView.BP_IsItemVisible
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9962b20
	// Params: [ Num(2) Size(0x9) ]
	bool BP_IsItemVisible(struct UObject* Item);

	// Object: Function UMG.ListView.BP_GetSelectedItems
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x9962bd4
	// Params: [ Num(2) Size(0x11) ]
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items);

	// Object: Function UMG.ListView.BP_GetSelectedItem
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99628c8
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* BP_GetSelectedItem();

	// Object: Function UMG.ListView.BP_GetNumItemsSelected
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9962ca0
	// Params: [ Num(1) Size(0x4) ]
	int32_t BP_GetNumItemsSelected();

	// Object: Function UMG.ListView.BP_DoDelayAddTick
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x9962684
	// Params: [ Num(1) Size(0x4) ]
	void BP_DoDelayAddTick(float DeltaTime);

	// Object: Function UMG.ListView.BP_ClearSelection
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x9962cd4
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClearSelection();

	// Object: Function UMG.ListView.BP_CancelScrollIntoView
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x99629bc
	// Params: [ Num(0) Size(0x0) ]
	void BP_CancelScrollIntoView();

	// Object: Function UMG.ListView.AddItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9963638
	// Params: [ Num(1) Size(0x8) ]
	void AddItem(struct UObject* Item);
};

// Object: Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : UVisual
{
	struct UPanelWidget* Parent; // 0x28(0x8)
	struct UWidget* Content; // 0x30(0x8)
};

// Object: Class UMG.RichTextBlock
// Size: 0xDA0 (Inherited: 0x168)
struct URichTextBlock : UTextLayoutWidget
{
	struct FText Text; // 0x168(0x18)
	uint8_t VerticalAlignment; // 0x180(0x1)
	uint8_t Pad_0x181[0x7]; // 0x181(0x7)
	struct UDataTable* TextStyleSet; // 0x188(0x8)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x190(0x10)
	bool bOverrideDefaultStyle; // 0x1A0(0x1)
	uint8_t Pad_0x1A1[0xF]; // 0x1A1(0xF)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x1B0(0x590)
	bool bOverrideAllTextStyle; // 0x740(0x1)
	uint8_t Pad_0x741[0x3]; // 0x741(0x3)
	struct FSlateFontInfoOverride AllTextStyleOverride; // 0x744(0x34)
	struct TMap<struct FName, struct FSlateFontInfoOverride> MultiTextStyleOverrides; // 0x778(0x50)
	float MinDesiredWidth; // 0x7C8(0x4)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x7CC(0x1)
	uint8_t Pad_0x7CD[0x3]; // 0x7CD(0x3)
	struct FTextBlockStyle DefaultTextStyle; // 0x7D0(0x590)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0xD60(0x10)
	uint8_t Pad_0xD70[0x20]; // 0xD70(0x20)
	bool bEnableAutoAdjustMethod; // 0xD90(0x1)
	uint8_t Pad_0xD91[0x3]; // 0xD91(0x3)
	int32_t MinFontSize; // 0xD94(0x4)
	uint8_t Pad_0xD98[0x8]; // 0xD98(0x8)


	// Object: Function UMG.RichTextBlock.SetWrapText
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x996fed8
	// Params: [ Num(2) Size(0x8) ]
	void SetWrapText(bool bNewAutoWrapText, float NewWrapTextAt);

	// Object: Function UMG.RichTextBlock.SetTextTransformPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99700a4
	// Params: [ Num(1) Size(0x1) ]
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);

	// Object: Function UMG.RichTextBlock.SetTextStyleSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996fc48
	// Params: [ Num(1) Size(0x8) ]
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet);

	// Object: Function UMG.RichTextBlock.SetText
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x996fcf0
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText& InText);

	// Object: Function UMG.RichTextBlock.SetOverrideDefaultFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99706d8
	// Params: [ Num(1) Size(0x68) ]
	void SetOverrideDefaultFont(struct FSlateFontInfo InFontInfo);

	// Object: Function UMG.RichTextBlock.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99701fc
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.RichTextBlock.SetDefaultTextStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x996ffe4
	// Params: [ Num(1) Size(0x590) ]
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle);

	// Object: Function UMG.RichTextBlock.SetDefaultStrikeBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x99702a4
	// Params: [ Num(1) Size(0x120) ]
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush);

	// Object: Function UMG.RichTextBlock.SetDefaultShadowOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9970c3c
	// Params: [ Num(1) Size(0x8) ]
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset);

	// Object: Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9970ce0
	// Params: [ Num(1) Size(0x10) ]
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	// Object: Function UMG.RichTextBlock.SetDefaultFontTypeface
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9970950
	// Params: [ Num(1) Size(0x8) ]
	void SetDefaultFontTypeface(struct FName InTypeface);

	// Object: Function UMG.RichTextBlock.SetDefaultFontSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99709f8
	// Params: [ Num(1) Size(0x4) ]
	void SetDefaultFontSize(int32_t InFontSize);

	// Object: Function UMG.RichTextBlock.SetDefaultFontOutlineSettings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9970874
	// Params: [ Num(1) Size(0x30) ]
	void SetDefaultFontOutlineSettings(struct FFontOutlineSettings InOutlineSettings);

	// Object: Function UMG.RichTextBlock.SetDefaultFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9970aa0
	// Params: [ Num(1) Size(0x68) ]
	void SetDefaultFont(struct FSlateFontInfo InFontInfo);

	// Object: Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9970d88
	// Params: [ Num(1) Size(0x28) ]
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity);

	// Object: Function UMG.RichTextBlock.SetAutoWrapText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997014c
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoWrapText(bool InAutoTextWrap);

	// Object: Function UMG.RichTextBlock.ReceivePlatformLayoutRichTextBlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996fae8
	// Params: [ Num(1) Size(0x1) ]
	void ReceivePlatformLayoutRichTextBlock(bool bInLayoutDesktop);

	// Object: Function UMG.RichTextBlock.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996fe08
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.RichTextBlock.GetOverrideDefaultFont
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9970538
	// Params: [ Num(1) Size(0x68) ]
	struct FSlateFontInfo GetOverrideDefaultFont();

	// Object: Function UMG.RichTextBlock.GetDecoratorByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996fb98
	// Params: [ Num(2) Size(0x10) ]
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass);

	// Object: Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	// Flags: [Final|Native|Public]
	// Offset: 0x996ffd0
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllDefaultStyleOverrides();
};

// Object: Class UMG.TileView
// Size: 0xEA0 (Inherited: 0xE80)
struct UTileView : UListView
{
	float EntryHeight; // 0xE7C(0x4)
	float EntryWidth; // 0xE80(0x4)
	enum class EListItemAlignment TileAlignment; // 0xE84(0x1)
	bool bWrapHorizontalNavigation; // 0xE85(0x1)
	bool bInverseItemLineGenerateOrder; // 0xE86(0x1)
	bool bInverseItemGenerateOrder; // 0xE87(0x1)
	uint8_t Pad_0xE8C[0x14]; // 0xE8C(0x14)


	// Object: Function UMG.TileView.SetInverseItemLineGenerateOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9981608
	// Params: [ Num(1) Size(0x1) ]
	void SetInverseItemLineGenerateOrder(bool bInInverseItemLineGenerateOrder);

	// Object: Function UMG.TileView.SetInverseItemGenerateOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998155c
	// Params: [ Num(1) Size(0x1) ]
	void SetInverseItemGenerateOrder(bool bInInverseItemGenerateOrder);

	// Object: Function UMG.TileView.SetEntryWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99816b4
	// Params: [ Num(1) Size(0x4) ]
	void SetEntryWidth(float NewWidth);

	// Object: Function UMG.TileView.SetEntryHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998175c
	// Params: [ Num(1) Size(0x4) ]
	void SetEntryHeight(float NewHeight);
};

// Object: Class UMG.TreeView
// Size: 0xEE0 (Inherited: 0xE80)
struct UTreeView : UListView
{
	uint8_t Pad_0xE80[0x10]; // 0xE80(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0xE90(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0xEA0(0x10)
	uint8_t Pad_0xEB0[0x30]; // 0xEB0(0x30)


	// Object: Function UMG.TreeView.SetItemExpansion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9981c58
	// Params: [ Num(2) Size(0x9) ]
	void SetItemExpansion(struct UObject* Item, bool bExpandItem);

	// Object: Function UMG.TreeView.ExpandAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9981c44
	// Params: [ Num(0) Size(0x0) ]
	void ExpandAll();

	// Object: Function UMG.TreeView.CollapseAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9981c30
	// Params: [ Num(0) Size(0x0) ]
	void CollapseAll();
};

// Object: Class UMG.Overlay
// Size: 0x168 (Inherited: 0x158)
struct UOverlay : UPanelWidget
{
	int32_t ReservedLayerSpace; // 0x154(0x4)
	uint8_t Pad_0x15C[0xC]; // 0x15C(0xC)


	// Object: Function UMG.Overlay.AddChildToOverlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9969fdc
	// Params: [ Num(2) Size(0x10) ]
	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content);
};

// Object: Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : UPanelSlot
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	uint8_t HorizontalAlignment; // 0x50(0x1)
	uint8_t VerticalAlignment; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)


	// Object: Function UMG.OverlaySlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996a41c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.OverlaySlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996a56c
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.OverlaySlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996a4c4
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.SizeBox
// Size: 0x190 (Inherited: 0x158)
struct USizeBox : UContentWidget
{
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
	float WidthOverride; // 0x168(0x4)
	float HeightOverride; // 0x16C(0x4)
	float MinDesiredWidth; // 0x170(0x4)
	float MinDesiredHeight; // 0x174(0x4)
	float MaxDesiredWidth; // 0x178(0x4)
	float MaxDesiredHeight; // 0x17C(0x4)
	float MinAspectRatio; // 0x180(0x4)
	float MaxAspectRatio; // 0x184(0x4)
	uint8_t bOverride_WidthOverride : 1; // 0x188(0x1), Mask(0x1)
	uint8_t bOverride_HeightOverride : 1; // 0x188(0x1), Mask(0x2)
	uint8_t bOverride_MinDesiredWidth : 1; // 0x188(0x1), Mask(0x4)
	uint8_t bOverride_MinDesiredHeight : 1; // 0x188(0x1), Mask(0x8)
	uint8_t bOverride_MaxDesiredWidth : 1; // 0x188(0x1), Mask(0x10)
	uint8_t bOverride_MaxDesiredHeight : 1; // 0x188(0x1), Mask(0x20)
	uint8_t bOverride_MinAspectRatio : 1; // 0x188(0x1), Mask(0x40)
	uint8_t bOverride_MaxAspectRatio : 1; // 0x188(0x1), Mask(0x80)
	uint8_t Pad_0x189[0x7]; // 0x189(0x7)


	// Object: Function UMG.SizeBox.SetWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997781c
	// Params: [ Num(1) Size(0x4) ]
	void SetWidthOverride(float InWidthOverride);

	// Object: Function UMG.SizeBox.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99776a4
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function UMG.SizeBox.SetMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99775e8
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredHeight(float InMinDesiredHeight);

	// Object: Function UMG.SizeBox.SetMinAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99773b4
	// Params: [ Num(1) Size(0x4) ]
	void SetMinAspectRatio(float InMinAspectRatio);

	// Object: Function UMG.SizeBox.SetMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997752c
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDesiredWidth(float InMaxDesiredWidth);

	// Object: Function UMG.SizeBox.SetMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9977470
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxDesiredHeight(float InMaxDesiredHeight);

	// Object: Function UMG.SizeBox.SetMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997730c
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxAspectRatio(float InMaxAspectRatio);

	// Object: Function UMG.SizeBox.SetHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9977760
	// Params: [ Num(1) Size(0x4) ]
	void SetHeightOverride(float InHeightOverride);

	// Object: Function UMG.SizeBox.ClearWidthOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9977808
	// Params: [ Num(0) Size(0x0) ]
	void ClearWidthOverride();

	// Object: Function UMG.SizeBox.ClearMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9977690
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinDesiredWidth();

	// Object: Function UMG.SizeBox.ClearMinDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99775d4
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinDesiredHeight();

	// Object: Function UMG.SizeBox.ClearMinAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99772f8
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinAspectRatio();

	// Object: Function UMG.SizeBox.ClearMaxDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9977518
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxDesiredWidth();

	// Object: Function UMG.SizeBox.ClearMaxDesiredHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997745c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxDesiredHeight();

	// Object: Function UMG.SizeBox.ClearMaxAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99772e4
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxAspectRatio();

	// Object: Function UMG.SizeBox.ClearHeightOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997774c
	// Params: [ Num(0) Size(0x0) ]
	void ClearHeightOverride();
};

// Object: Class UMG.VerticalBox
// Size: 0x168 (Inherited: 0x158)
struct UVerticalBox : UPanelWidget
{
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)


	// Object: Function UMG.VerticalBox.AddChildToVerticalBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998d77c
	// Params: [ Num(2) Size(0x10) ]
	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content);
};

// Object: Class UMG.NamedSlot
// Size: 0x168 (Inherited: 0x158)
struct UNamedSlot : UContentWidget
{
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
};

// Object: Class UMG.CanvasPanel
// Size: 0x168 (Inherited: 0x158)
struct UCanvasPanel : UPanelWidget
{
	int32_t ReservedLayerSpace; // 0x154(0x4)
	uint8_t Pad_0x15C[0xC]; // 0x15C(0xC)


	// Object: Function UMG.CanvasPanel.AddChildToCanvas
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9951bfc
	// Params: [ Num(2) Size(0x10) ]
	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content);
};

// Object: Class UMG.RichTextBlockDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockDecorator : UObject
{
	uint8_t bIsRunPlatformDesktop : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: Class UMG.CheckBox
// Size: 0xD50 (Inherited: 0x158)
struct UCheckBox : UContentWidget
{
	enum class ECheckBoxState CheckedState; // 0x151(0x1)
	struct FDelegate CheckedStateDelegate; // 0x154(0x10)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
	struct FCheckBoxStyle WidgetStyle; // 0x170(0xAE0)
	struct USlateWidgetStyleAsset* Style; // 0xC50(0x8)
	struct USlateBrushAsset* UncheckedImage; // 0xC58(0x8)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0xC60(0x8)
	struct USlateBrushAsset* UncheckedPressedImage; // 0xC68(0x8)
	struct USlateBrushAsset* CheckedImage; // 0xC70(0x8)
	struct USlateBrushAsset* CheckedHoveredImage; // 0xC78(0x8)
	struct USlateBrushAsset* CheckedPressedImage; // 0xC80(0x8)
	struct USlateBrushAsset* UndeterminedImage; // 0xC88(0x8)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0xC90(0x8)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0xC98(0x8)
	uint8_t HorizontalAlignment; // 0xCA0(0x1)
	uint8_t Pad_0xCA1[0x3]; // 0xCA1(0x3)
	struct FMargin Padding; // 0xCA4(0x10)
	uint8_t Pad_0xCB4[0x4]; // 0xCB4(0x4)
	struct FSlateColor BorderBackgroundColor; // 0xCB8(0x28)
	uint8_t ClickMethod; // 0xCE0(0x1)
	uint8_t TouchMethod; // 0xCE1(0x1)
	uint8_t PressMethod; // 0xCE2(0x1)
	bool IsFocusable; // 0xCE3(0x1)
	uint8_t Pad_0xCE4[0x4]; // 0xCE4(0x4)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0xCE8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0xCF8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0xD08(0x10)
	struct FSoftObjectPath OnClickedSound; // 0xD18(0x18)
	bool bExplicitChildLayerId; // 0xD30(0x1)
	uint8_t Pad_0xD31[0x1F]; // 0xD31(0x1F)


	// Object: Function UMG.CheckBox.SetTouchMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9953188
	// Params: [ Num(1) Size(0x1) ]
	void SetTouchMethod(uint8_t InTouchMethod);

	// Object: Function UMG.CheckBox.SetPressMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99530e0
	// Params: [ Num(1) Size(0x1) ]
	void SetPressMethod(uint8_t InPressMethod);

	// Object: Function UMG.CheckBox.SetIsChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9953380
	// Params: [ Num(1) Size(0x1) ]
	void SetIsChecked(bool InIsChecked);

	// Object: Function UMG.CheckBox.SetClickMethod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9953230
	// Params: [ Num(1) Size(0x1) ]
	void SetClickMethod(uint8_t InClickMethod);

	// Object: Function UMG.CheckBox.SetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99532d8
	// Params: [ Num(1) Size(0x1) ]
	void SetCheckedState(enum class ECheckBoxState InCheckedState);

	// Object: Function UMG.CheckBox.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x995349c
	// Params: [ Num(1) Size(0x1) ]
	bool IsPressed();

	// Object: Function UMG.CheckBox.IsChecked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9953464
	// Params: [ Num(1) Size(0x1) ]
	bool IsChecked();

	// Object: Function UMG.CheckBox.GetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9953430
	// Params: [ Num(1) Size(0x1) ]
	enum class ECheckBoxState GetCheckedState();
};

// Object: Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : UObject
{
	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x8)
	struct UWidget* DefaultDragVisual; // 0x40(0x8)
	enum class EDragPivot Pivot; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	struct FVector2D Offset; // 0x4C(0x8)
	float DesiredLerpAnimTime; // 0x54(0x4)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)


	// Object: Function UMG.DragDropOperation.Drop
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x99573ec
	// Params: [ Num(1) Size(0x70) ]
	void Drop(struct FPointerEvent& PointerEvent);

	// Object: Function UMG.DragDropOperation.Dragged
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x9957124
	// Params: [ Num(1) Size(0x70) ]
	void Dragged(struct FPointerEvent& PointerEvent);

	// Object: Function UMG.DragDropOperation.DragCancelled
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x9957288
	// Params: [ Num(1) Size(0x70) ]
	void DragCancelled(struct FPointerEvent& PointerEvent);
};

// Object: Class UMG.WidgetComponent
// Size: 0x840 (Inherited: 0x700)
struct UWidgetComponent : UMeshComponent
{
	struct FMulticastInlineDelegate OnUserWidgetInitialized; // 0x700(0x10)
	enum class EWidgetSpace Space; // 0x710(0x1)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x711(0x1)
	uint8_t Pad_0x712[0x6]; // 0x712(0x6)
	struct UUserWidget* WidgetClass; // 0x718(0x8)
	struct FIntPoint DrawSize; // 0x720(0x8)
	bool bManuallyRedraw; // 0x728(0x1)
	bool bManuallyCreateWidget; // 0x729(0x1)
	bool bRedrawRequested; // 0x72A(0x1)
	uint8_t Pad_0x72B[0x1]; // 0x72B(0x1)
	float RedrawTime; // 0x72C(0x4)
	uint8_t Pad_0x730[0x8]; // 0x730(0x8)
	struct FIntPoint CurrentDrawSize; // 0x738(0x8)
	bool bDrawAtDesiredSize; // 0x740(0x1)
	uint8_t Pad_0x741[0x3]; // 0x741(0x3)
	struct FVector2D Pivot; // 0x744(0x8)
	bool bReceiveHardwareInput; // 0x74C(0x1)
	bool bWindowFocusable; // 0x74D(0x1)
	enum class EWindowVisibility WindowVisibility; // 0x74E(0x1)
	bool bApplyGammaCorrection; // 0x74F(0x1)
	struct ULocalPlayer* OwnerPlayer; // 0x750(0x8)
	struct FLinearColor BackgroundColor; // 0x758(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x768(0x10)
	float OpacityFromTexture; // 0x778(0x4)
	enum class EWidgetBlendMode BlendMode; // 0x77C(0x1)
	bool bIsTwoSided; // 0x77D(0x1)
	bool TickWhenOffscreen; // 0x77E(0x1)
	uint8_t Pad_0x77F[0x1]; // 0x77F(0x1)
	struct UUserWidget* Widget; // 0x780(0x8)
	uint8_t Pad_0x788[0x20]; // 0x788(0x20)
	struct UBodySetup* BodySetup; // 0x7A8(0x8)
	struct UMaterialInterface* TranslucentMaterial; // 0x7B0(0x8)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x7B8(0x8)
	struct UMaterialInterface* OpaqueMaterial; // 0x7C0(0x8)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x7C8(0x8)
	struct UMaterialInterface* MaskedMaterial; // 0x7D0(0x8)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x7D8(0x8)
	struct UTextureRenderTarget2D* RenderTarget; // 0x7E0(0x8)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x7E8(0x8)
	float DrawScale; // 0x7F0(0x4)
	bool bAddedToScreen; // 0x7F4(0x1)
	bool bEditTimeUsable; // 0x7F5(0x1)
	uint8_t Pad_0x7F6[0x2]; // 0x7F6(0x2)
	struct FName SharedLayerName; // 0x7F8(0x8)
	int32_t LayerZOrder; // 0x800(0x4)
	bool bReZOrder; // 0x804(0x1)
	enum class EWidgetGeometryMode GeometryMode; // 0x805(0x1)
	uint8_t Pad_0x806[0x2]; // 0x806(0x2)
	float CylinderArcAngle; // 0x808(0x4)
	uint8_t Pad_0x80C[0x34]; // 0x80C(0x34)


	// Object: Function UMG.WidgetComponent.SetWindowVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999bf3c
	// Params: [ Num(1) Size(0x1) ]
	void SetWindowVisibility(enum class EWindowVisibility InVisibility);

	// Object: Function UMG.WidgetComponent.SetWindowFocusable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c000
	// Params: [ Num(1) Size(0x1) ]
	void SetWindowFocusable(bool bInWindowFocusable);

	// Object: Function UMG.WidgetComponent.SetWidgetSpace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c24c
	// Params: [ Num(1) Size(0x1) ]
	void SetWidgetSpace(enum class EWidgetSpace NewSpace);

	// Object: Function UMG.WidgetComponent.SetWidget
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999cb1c
	// Params: [ Num(1) Size(0x8) ]
	void SetWidget(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetComponent.SetTwoSided
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c780
	// Params: [ Num(1) Size(0x1) ]
	void SetTwoSided(bool bWantTwoSided);

	// Object: Function UMG.WidgetComponent.SetTintColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x999c568
	// Params: [ Num(1) Size(0x10) ]
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity);

	// Object: Function UMG.WidgetComponent.SetTickWhenOffscreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c6b8
	// Params: [ Num(1) Size(0x1) ]
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);

	// Object: Function UMG.WidgetComponent.SetRedrawTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c30c
	// Params: [ Num(1) Size(0x4) ]
	void SetRedrawTime(float InRedrawTime);

	// Object: Function UMG.WidgetComponent.SetPivot
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x999c494
	// Params: [ Num(1) Size(0x8) ]
	void SetPivot(struct FVector2D& InPivot);

	// Object: Function UMG.WidgetComponent.SetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999ca74
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer);

	// Object: Function UMG.WidgetComponent.SetManuallyRedraw
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c9a8
	// Params: [ Num(1) Size(0x1) ]
	void SetManuallyRedraw(bool bUseManualRedraw);

	// Object: Function UMG.WidgetComponent.SetGeometryMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c18c
	// Params: [ Num(1) Size(0x1) ]
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode);

	// Object: Function UMG.WidgetComponent.SetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x999c868
	// Params: [ Num(1) Size(0x8) ]
	void SetDrawSize(struct FVector2D Size);

	// Object: Function UMG.WidgetComponent.SetDrawScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999cbcc
	// Params: [ Num(1) Size(0x4) ]
	void SetDrawScale(float InDrawScale);

	// Object: Function UMG.WidgetComponent.SetDrawAtDesiredSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c3cc
	// Params: [ Num(1) Size(0x1) ]
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);

	// Object: Function UMG.WidgetComponent.SetCylinderArcAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999c0cc
	// Params: [ Num(1) Size(0x4) ]
	void SetCylinderArcAngle(float InCylinderArcAngle);

	// Object: Function UMG.WidgetComponent.SetBackgroundColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x999c610
	// Params: [ Num(1) Size(0x10) ]
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor);

	// Object: Function UMG.WidgetComponent.RequestRedraw
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999c84c
	// Params: [ Num(0) Size(0x0) ]
	void RequestRedraw();

	// Object: DelegateFunction UMG.WidgetComponent.OnUserWidgetInitialized__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnUserWidgetInitialized__DelegateSignature(struct UUserWidget* InitializedUserWidget);

	// Object: Function UMG.WidgetComponent.GetWindowVisiblility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999bfe4
	// Params: [ Num(1) Size(0x1) ]
	enum class EWindowVisibility GetWindowVisiblility();

	// Object: Function UMG.WidgetComponent.GetWindowFocusable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c0b0
	// Params: [ Num(1) Size(0x1) ]
	bool GetWindowFocusable();

	// Object: Function UMG.WidgetComponent.GetWidgetSpace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c2f0
	// Params: [ Num(1) Size(0x1) ]
	enum class EWidgetSpace GetWidgetSpace();

	// Object: Function UMG.WidgetComponent.GetUserWidgetObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999ccd8
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* GetUserWidgetObject();

	// Object: Function UMG.WidgetComponent.GetTwoSided
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c830
	// Params: [ Num(1) Size(0x1) ]
	bool GetTwoSided();

	// Object: Function UMG.WidgetComponent.GetTickWhenOffscreen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c764
	// Params: [ Num(1) Size(0x1) ]
	bool GetTickWhenOffscreen();

	// Object: Function UMG.WidgetComponent.GetRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999cca4
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetRenderTarget();

	// Object: Function UMG.WidgetComponent.GetRedrawTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c3b0
	// Params: [ Num(1) Size(0x4) ]
	float GetRedrawTime();

	// Object: Function UMG.WidgetComponent.GetPivot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c548
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPivot();

	// Object: Function UMG.WidgetComponent.GetOwnerPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c974
	// Params: [ Num(1) Size(0x8) ]
	struct ULocalPlayer* GetOwnerPlayer();

	// Object: Function UMG.WidgetComponent.GetMaterialInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999cc70
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetMaterialInstance();

	// Object: Function UMG.WidgetComponent.GetManuallyRedraw
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999ca58
	// Params: [ Num(1) Size(0x1) ]
	bool GetManuallyRedraw();

	// Object: Function UMG.WidgetComponent.GetGeometryMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c230
	// Params: [ Num(1) Size(0x1) ]
	enum class EWidgetGeometryMode GetGeometryMode();

	// Object: Function UMG.WidgetComponent.GetDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c940
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetDrawSize();

	// Object: Function UMG.WidgetComponent.GetDrawAtDesiredSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c478
	// Params: [ Num(1) Size(0x1) ]
	bool GetDrawAtDesiredSize();

	// Object: Function UMG.WidgetComponent.GetCylinderArcAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c170
	// Params: [ Num(1) Size(0x4) ]
	float GetCylinderArcAngle();

	// Object: Function UMG.WidgetComponent.GetCurrentDrawSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999c90c
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetCurrentDrawSize();
};

// Object: Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)


	// Object: Function UMG.AsyncTaskDownloadImage.DownloadImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x994d724
	// Params: [ Num(2) Size(0x18) ]
	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL);
};

// Object: Class UMG.BackgroundBlur
// Size: 0x3E0 (Inherited: 0x158)
struct UBackgroundBlur : UContentWidget
{
	struct FMargin Padding; // 0x154(0x10)
	uint8_t HorizontalAlignment; // 0x164(0x1)
	uint8_t VerticalAlignment; // 0x165(0x1)
	enum class EBlurType BlurType; // 0x166(0x1)
	bool bBlurOnce; // 0x167(0x1)
	bool bBlurState; // 0x168(0x1)
	bool bApplyAlphaToBlur; // 0x169(0x1)
	float BlurStrength; // 0x16C(0x4)
	bool bOverrideAutoRadiusCalculation; // 0x170(0x1)
	uint8_t Pad_0x173[0x1]; // 0x173(0x1)
	int32_t BlurRadius; // 0x174(0x4)
	uint8_t Pad_0x178[0x8]; // 0x178(0x8)
	struct FSlateBrush LowQualityFallbackBrush; // 0x180(0x120)
	struct FSlateBrush MaskBrush; // 0x2A0(0x120)
	uint8_t Pad_0x3C0[0x20]; // 0x3C0(0x20)


	// Object: Function UMG.BackgroundBlur.StopOnFirstBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994de04
	// Params: [ Num(0) Size(0x0) ]
	void StopOnFirstBlur();

	// Object: Function UMG.BackgroundBlur.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994e3ac
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.BackgroundBlur.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994e4fc
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BackgroundBlur.SetMaskImage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x994db70
	// Params: [ Num(1) Size(0x120) ]
	void SetMaskImage(struct FSlateBrush& InBrush);

	// Object: Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x994df10
	// Params: [ Num(1) Size(0x120) ]
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush);

	// Object: Function UMG.BackgroundBlur.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994e454
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.BackgroundBlur.SetBlurStrength
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x994e1a4
	// Params: [ Num(1) Size(0x4) ]
	void SetBlurStrength(float InStrength);

	// Object: Function UMG.BackgroundBlur.SetBlurState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994de18
	// Params: [ Num(2) Size(0x2) ]
	void SetBlurState(bool BlurState, bool RefreshCount);

	// Object: Function UMG.BackgroundBlur.SetBlurRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994e254
	// Params: [ Num(1) Size(0x4) ]
	void SetBlurRadius(int32_t InBlurRadius);

	// Object: Function UMG.BackgroundBlur.SetApplyAlphaToBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994e2fc
	// Params: [ Num(1) Size(0x1) ]
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// Object: Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t HorizontalAlignment; // 0x48(0x1)
	uint8_t VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)


	// Object: Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994ea40
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.BackgroundBlurSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994eb90
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994eae8
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : UObject
{
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x8)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x8)
};

// Object: Class UMG.BoolBinding
// Size: 0x60 (Inherited: 0x60)
struct UBoolBinding : UPropertyBinding
{

	// Object: Function UMG.BoolBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x994ef60
	// Params: [ Num(1) Size(0x1) ]
	bool GetValue();
};

// Object: Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t HorizontalAlignment; // 0x48(0x1)
	uint8_t VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)


	// Object: Function UMG.BorderSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x994ff8c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.BorderSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99500dc
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.BorderSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9950034
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : UPropertyBinding
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)


	// Object: Function UMG.BrushBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9950558
	// Params: [ Num(1) Size(0x120) ]
	struct FSlateBrush GetValue();
};

// Object: Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t HorizontalAlignment; // 0x48(0x1)
	uint8_t VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)


	// Object: Function UMG.ButtonSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99516dc
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.ButtonSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995182c
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ButtonSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9951784
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.CanvasPanelSlot
// Size: 0x78 (Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot
{
	struct FAnchorData LayoutData; // 0x38(0x2C)
	bool bAutoSize; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	int32_t ZOrder; // 0x68(0x4)
	uint8_t Pad_0x6C[0xC]; // 0x6C(0xC)


	// Object: Function UMG.CanvasPanelSlot.SetZOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9952244
	// Params: [ Num(1) Size(0x4) ]
	void SetZOrder(int32_t InZOrder);

	// Object: Function UMG.CanvasPanelSlot.SetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x99526a8
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FVector2D InSize);

	// Object: Function UMG.CanvasPanelSlot.SetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9952780
	// Params: [ Num(1) Size(0x8) ]
	void SetPosition(struct FVector2D InPosition);

	// Object: Function UMG.CanvasPanelSlot.SetOffsets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99525c8
	// Params: [ Num(1) Size(0x10) ]
	void SetOffsets(struct FMargin InOffset);

	// Object: Function UMG.CanvasPanelSlot.SetMinimum
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x995216c
	// Params: [ Num(1) Size(0x8) ]
	void SetMinimum(struct FVector2D InMinimumAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetMaximum
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x99520c8
	// Params: [ Num(1) Size(0x8) ]
	void SetMaximum(struct FVector2D InMaximumAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetLayout
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9952894
	// Params: [ Num(1) Size(0x2C) ]
	void SetLayout(struct FAnchorData& InLayoutData);

	// Object: Function UMG.CanvasPanelSlot.SetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9952324
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoSize(bool InbAutoSize);

	// Object: Function UMG.CanvasPanelSlot.SetAnchors
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99524e4
	// Params: [ Num(1) Size(0x10) ]
	void SetAnchors(struct FAnchors InAnchors);

	// Object: Function UMG.CanvasPanelSlot.SetAlignment
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9952408
	// Params: [ Num(1) Size(0x8) ]
	void SetAlignment(struct FVector2D InAlignment);

	// Object: Function UMG.CanvasPanelSlot.GetZOrder
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9952210
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetZOrder();

	// Object: Function UMG.CanvasPanelSlot.GetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9952674
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetSize();

	// Object: Function UMG.CanvasPanelSlot.GetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x995274c
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetPosition();

	// Object: Function UMG.CanvasPanelSlot.GetOffsets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9952590
	// Params: [ Num(1) Size(0x10) ]
	struct FMargin GetOffsets();

	// Object: Function UMG.CanvasPanelSlot.GetLayout
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9952824
	// Params: [ Num(1) Size(0x2C) ]
	struct FAnchorData GetLayout();

	// Object: Function UMG.CanvasPanelSlot.GetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99522ec
	// Params: [ Num(1) Size(0x1) ]
	bool GetAutoSize();

	// Object: Function UMG.CanvasPanelSlot.GetAnchors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99524ac
	// Params: [ Num(1) Size(0x10) ]
	struct FAnchors GetAnchors();

	// Object: Function UMG.CanvasPanelSlot.GetAlignment
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99523d4
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetAlignment();
};

// Object: Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)


	// Object: Function UMG.CheckedStateBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9953974
	// Params: [ Num(1) Size(0x1) ]
	enum class ECheckBoxState GetValue();
};

// Object: Class UMG.CircularThrobber
// Size: 0x2A0 (Inherited: 0x140)
struct UCircularThrobber : UWidget
{
	int32_t NumberOfPieces; // 0x140(0x4)
	float Period; // 0x144(0x4)
	float Radius; // 0x148(0x4)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	struct USlateBrushAsset* PieceImage; // 0x150(0x8)
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct FSlateBrush Image; // 0x160(0x120)
	bool bEnableRadius; // 0x280(0x1)
	uint8_t Pad_0x281[0x1F]; // 0x281(0x1F)


	// Object: Function UMG.CircularThrobber.SetRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995562c
	// Params: [ Num(1) Size(0x4) ]
	void SetRadius(float InRadius);

	// Object: Function UMG.CircularThrobber.SetPeriod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99556d4
	// Params: [ Num(1) Size(0x4) ]
	void SetPeriod(float InPeriod);

	// Object: Function UMG.CircularThrobber.SetNumberOfPieces
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995577c
	// Params: [ Num(1) Size(0x4) ]
	void SetNumberOfPieces(int32_t InNumberOfPieces);
};

// Object: Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : UPropertyBinding
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)


	// Object: Function UMG.ColorBinding.GetSlateValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9955ae0
	// Params: [ Num(1) Size(0x28) ]
	struct FSlateColor GetSlateValue();

	// Object: Function UMG.ColorBinding.GetLinearValue
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0x9955aa8
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetLinearValue();
};

// Object: Class UMG.ComboBox
// Size: 0x178 (Inherited: 0x140)
struct UComboBox : UWidget
{
	struct TArray<struct UObject*> Items; // 0x140(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x150(0x10)
	bool bIsFocusable; // 0x160(0x1)
	uint8_t Pad_0x161[0x17]; // 0x161(0x17)
};

// Object: Class UMG.ComboBoxString
// Size: 0x1A50 (Inherited: 0x140)
struct UComboBoxString : UWidget
{
	struct TArray<struct FString> DefaultOptions; // 0x140(0x10)
	struct FString SelectedOption; // 0x150(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x160(0x7A0)
	struct FTableRowStyle ItemStyle; // 0x900(0x1020)
	struct FMargin ContentPadding; // 0x1920(0x10)
	float MaxListHeight; // 0x1930(0x4)
	bool HasDownArrow; // 0x1934(0x1)
	bool EnableGamepadNavigationMode; // 0x1935(0x1)
	uint8_t Pad_0x1936[0x2]; // 0x1936(0x2)
	struct FSlateFontInfo Font; // 0x1938(0x68)
	struct FSlateColor ForegroundColor; // 0x19A0(0x28)
	bool bIsFocusable; // 0x19C8(0x1)
	uint8_t Pad_0x19C9[0x3]; // 0x19C9(0x3)
	struct FDelegate OnGenerateWidgetEvent; // 0x19CC(0x10)
	uint8_t Pad_0x19DC[0x4]; // 0x19DC(0x4)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x19E0(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x19F0(0x10)
	uint8_t Pad_0x1A00[0x50]; // 0x1A00(0x50)


	// Object: Function UMG.ComboBoxString.SetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9956218
	// Params: [ Num(1) Size(0x10) ]
	void SetSelectedOption(struct FString Option);

	// Object: Function UMG.ComboBoxString.SetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9956170
	// Params: [ Num(1) Size(0x4) ]
	void SetSelectedIndex(int32_t Index);

	// Object: Function UMG.ComboBoxString.RemoveOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99564f4
	// Params: [ Num(2) Size(0x11) ]
	bool RemoveOption(struct FString Option);

	// Object: Function UMG.ComboBoxString.RefreshOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9956314
	// Params: [ Num(0) Size(0x0) ]
	void RefreshOptions();

	// Object: DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x11) ]
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, uint8_t SelectionType);

	// Object: DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnOpeningEvent__DelegateSignature();

	// Object: Function UMG.ComboBoxString.IsOpen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9956034
	// Params: [ Num(1) Size(0x1) ]
	bool IsOpen();

	// Object: Function UMG.ComboBoxString.GetSelectedOption
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99560d4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedOption();

	// Object: Function UMG.ComboBoxString.GetSelectedIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99560a0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedIndex();

	// Object: Function UMG.ComboBoxString.GetOptionCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x995606c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOptionCount();

	// Object: Function UMG.ComboBoxString.GetOptionAtIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9956350
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetOptionAtIndex(int32_t Index);

	// Object: Function UMG.ComboBoxString.FindOptionIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9956438
	// Params: [ Num(2) Size(0x14) ]
	int32_t FindOptionIndex(struct FString Option);

	// Object: Function UMG.ComboBoxString.ClearSelection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9956328
	// Params: [ Num(0) Size(0x0) ]
	void ClearSelection();

	// Object: Function UMG.ComboBoxString.ClearOptions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995633c
	// Params: [ Num(0) Size(0x0) ]
	void ClearOptions();

	// Object: Function UMG.ComboBoxString.AddOption
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99565b4
	// Params: [ Num(1) Size(0x10) ]
	void AddOption(struct FString Option);
};

// Object: Class UMG.DynamicEntryBox
// Size: 0x208 (Inherited: 0x200)
struct UDynamicEntryBox : UDynamicEntryBoxBase
{
	struct UUserWidget* EntryWidgetClass; // 0x200(0x8)


	// Object: Function UMG.DynamicEntryBox.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9957cb0
	// Params: [ Num(1) Size(0x1) ]
	void Reset(bool bDeleteWidgets);

	// Object: Function UMG.DynamicEntryBox.RemoveEntry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9957c08
	// Params: [ Num(1) Size(0x8) ]
	void RemoveEntry(struct UUserWidget* EntryWidget);

	// Object: Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x9957b24
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass);

	// Object: Function UMG.DynamicEntryBox.BP_CreateEntry
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x9957bd4
	// Params: [ Num(1) Size(0x8) ]
	struct UUserWidget* BP_CreateEntry();
};

// Object: Class UMG.EditableText
// Size: 0x6D0 (Inherited: 0x140)
struct UEditableText : UWidget
{
	struct FText Text; // 0x140(0x18)
	struct FDelegate TextDelegate; // 0x158(0x10)
	struct FText HintText; // 0x168(0x18)
	struct FDelegate HintTextDelegate; // 0x180(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x190(0x410)
	struct USlateWidgetStyleAsset* Style; // 0x5A0(0x8)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x5A8(0x8)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x5B0(0x8)
	struct USlateBrushAsset* CaretImage; // 0x5B8(0x8)
	struct FSlateFontInfo Font; // 0x5C0(0x68)
	struct FSlateColor ColorAndOpacity; // 0x628(0x28)
	bool IsReadOnly; // 0x650(0x1)
	bool IsPassword; // 0x651(0x1)
	uint8_t Pad_0x652[0x2]; // 0x652(0x2)
	float MinimumDesiredWidth; // 0x654(0x4)
	bool IsCaretMovedWhenGainFocus; // 0x658(0x1)
	bool SelectAllTextWhenFocused; // 0x659(0x1)
	bool RevertTextOnEscape; // 0x65A(0x1)
	bool ClearKeyboardFocusOnCommit; // 0x65B(0x1)
	bool SelectAllTextOnCommit; // 0x65C(0x1)
	bool AllowContextMenu; // 0x65D(0x1)
	uint8_t KeyboardType; // 0x65E(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x65F(0x1)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x660(0x1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x661(0x1)
	uint8_t Justification; // 0x662(0x1)
	uint8_t VerticalJustification; // 0x663(0x1)
	enum class ETextOverflowPolicy OverflowPolicy; // 0x664(0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0x665(0x3)
	struct FMulticastInlineDelegate OnTextChanged; // 0x668(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x678(0x10)
	struct FMulticastInlineDelegate OnLongPressed; // 0x688(0x10)
	struct FMulticastInlineDelegate OnMenuSummoned; // 0x698(0x10)
	struct FMulticastInlineDelegate OnMenuDismissed; // 0x6A8(0x10)
	struct UWidget* CustomContextMenuWidget; // 0x6B8(0x8)
	uint8_t Pad_0x6C0[0x10]; // 0x6C0(0x10)


	// Object: Function UMG.EditableText.SetVerticalJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99587a0
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalJustification(uint8_t InJustification);

	// Object: Function UMG.EditableText.SetTextOverflowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99586f8
	// Params: [ Num(1) Size(0x1) ]
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);

	// Object: Function UMG.EditableText.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9958bd4
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.EditableText.SetJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9958848
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(uint8_t InJustification);

	// Object: Function UMG.EditableText.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99588f0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(bool InbIsReadyOnly);

	// Object: Function UMG.EditableText.SetIsPassword
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9958b24
	// Params: [ Num(1) Size(0x1) ]
	void SetIsPassword(bool InbIsPassword);

	// Object: Function UMG.EditableText.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99589a0
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: DelegateFunction UMG.EditableText.OnEditableTextLongPressed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnEditableTextLongPressed__DelegateSignature();

	// Object: DelegateFunction UMG.EditableText.OnEditableTextContextMenuSummoned__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnEditableTextContextMenuSummoned__DelegateSignature();

	// Object: DelegateFunction UMG.EditableText.OnEditableTextContextMenuDismissed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnEditableTextContextMenuDismissed__DelegateSignature();

	// Object: DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x19) ]
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x18) ]
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text);

	// Object: Function UMG.EditableText.HasAnyTextSelected
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9958f08
	// Params: [ Num(1) Size(0x1) ]
	bool HasAnyTextSelected();

	// Object: Function UMG.EditableText.HandleSelectAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9958f40
	// Params: [ Num(0) Size(0x0) ]
	void HandleSelectAll();

	// Object: Function UMG.EditableText.HandlePaste
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9958f54
	// Params: [ Num(0) Size(0x0) ]
	void HandlePaste();

	// Object: Function UMG.EditableText.HandleCut
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9958f7c
	// Params: [ Num(0) Size(0x0) ]
	void HandleCut();

	// Object: Function UMG.EditableText.HandleCopy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9958f68
	// Params: [ Num(0) Size(0x0) ]
	void HandleCopy();

	// Object: Function UMG.EditableText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9958d58
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.EditableText.CanExecuteSelectAll
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9958e28
	// Params: [ Num(1) Size(0x1) ]
	bool CanExecuteSelectAll();

	// Object: Function UMG.EditableText.CanExecutePaste
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9958e60
	// Params: [ Num(1) Size(0x1) ]
	bool CanExecutePaste();

	// Object: Function UMG.EditableText.CanExecuteCut
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9958ed0
	// Params: [ Num(1) Size(0x1) ]
	bool CanExecuteCut();

	// Object: Function UMG.EditableText.CanExecuteCopy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9958e98
	// Params: [ Num(1) Size(0x1) ]
	bool CanExecuteCopy();
};

// Object: Class UMG.EditableTextBox
// Size: 0x1260 (Inherited: 0x140)
struct UEditableTextBox : UWidget
{
	struct FText Text; // 0x140(0x18)
	struct FDelegate TextDelegate; // 0x158(0x10)
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
	struct FEditableTextBoxStyle WidgetStyle; // 0x170(0xFD0)
	struct USlateWidgetStyleAsset* Style; // 0x1140(0x8)
	struct FText HintText; // 0x1148(0x18)
	struct FDelegate HintTextDelegate; // 0x1160(0x10)
	struct FSlateFontInfo Font; // 0x1170(0x68)
	struct FLinearColor ForegroundColor; // 0x11D8(0x10)
	struct FLinearColor BackgroundColor; // 0x11E8(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0x11F8(0x10)
	bool IsReadOnly; // 0x1208(0x1)
	bool IsPassword; // 0x1209(0x1)
	uint8_t Pad_0x120A[0x2]; // 0x120A(0x2)
	float MinimumDesiredWidth; // 0x120C(0x4)
	struct FMargin Padding; // 0x1210(0x10)
	bool IsCaretMovedWhenGainFocus; // 0x1220(0x1)
	bool SelectAllTextWhenFocused; // 0x1221(0x1)
	bool RevertTextOnEscape; // 0x1222(0x1)
	bool ClearKeyboardFocusOnCommit; // 0x1223(0x1)
	bool SelectAllTextOnCommit; // 0x1224(0x1)
	bool AllowContextMenu; // 0x1225(0x1)
	uint8_t KeyboardType; // 0x1226(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x1227(0x1)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x1228(0x1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x1229(0x1)
	uint8_t Justification; // 0x122A(0x1)
	uint8_t VerticalJustification; // 0x122B(0x1)
	enum class ETextOverflowPolicy OverflowPolicy; // 0x122C(0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0x122D(0x3)
	struct FMulticastInlineDelegate OnTextChanged; // 0x1230(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x1240(0x10)
	uint8_t Pad_0x1250[0x10]; // 0x1250(0x10)


	// Object: Function UMG.EditableTextBox.SetVerticalJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9959764
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalJustification(uint8_t InJustification);

	// Object: Function UMG.EditableTextBox.SetTextOverflowPolicy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99596bc
	// Params: [ Num(1) Size(0x1) ]
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);

	// Object: Function UMG.EditableTextBox.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9959d68
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.EditableTextBox.SetJustification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995980c
	// Params: [ Num(1) Size(0x1) ]
	void SetJustification(uint8_t InJustification);

	// Object: Function UMG.EditableTextBox.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99599b0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(bool bReadOnly);

	// Object: Function UMG.EditableTextBox.SetIsPassword
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9959900
	// Params: [ Num(1) Size(0x1) ]
	void SetIsPassword(bool bIsPassword);

	// Object: Function UMG.EditableTextBox.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9959be4
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InText);

	// Object: Function UMG.EditableTextBox.SetError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9959a60
	// Params: [ Num(1) Size(0x18) ]
	void SetError(struct FText InError);

	// Object: DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x19) ]
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x18) ]
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text);

	// Object: Function UMG.EditableTextBox.HasError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99598b4
	// Params: [ Num(1) Size(0x1) ]
	bool HasError();

	// Object: Function UMG.EditableTextBox.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9959eec
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.EditableTextBox.ClearError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99598ec
	// Params: [ Num(0) Size(0x0) ]
	void ClearError();
};

// Object: Class UMG.ExpandableArea
// Size: 0x550 (Inherited: 0x140)
struct UExpandableArea : UWidget
{
	uint8_t Pad_0x140[0x10]; // 0x140(0x10)
	struct FExpandableAreaStyle Style; // 0x150(0x260)
	struct FSlateBrush BorderBrush; // 0x3B0(0x120)
	struct FSlateColor BorderColor; // 0x4D0(0x28)
	bool bIsExpanded; // 0x4F8(0x1)
	uint8_t Pad_0x4F9[0x3]; // 0x4F9(0x3)
	float MaxHeight; // 0x4FC(0x4)
	struct FMargin HeaderPadding; // 0x500(0x10)
	struct FMargin AreaPadding; // 0x510(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x520(0x10)
	struct UWidget* HeaderContent; // 0x530(0x8)
	struct UWidget* BodyContent; // 0x538(0x8)
	uint8_t Pad_0x540[0x10]; // 0x540(0x10)


	// Object: Function UMG.ExpandableArea.SetIsExpanded_Animated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995c0fc
	// Params: [ Num(1) Size(0x1) ]
	void SetIsExpanded_Animated(bool IsExpanded);

	// Object: Function UMG.ExpandableArea.SetIsExpanded
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995c1ac
	// Params: [ Num(1) Size(0x1) ]
	void SetIsExpanded(bool IsExpanded);

	// Object: Function UMG.ExpandableArea.GetIsExpanded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x995c25c
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsExpanded();
};

// Object: Class UMG.FloatBinding
// Size: 0x60 (Inherited: 0x60)
struct UFloatBinding : UPropertyBinding
{

	// Object: Function UMG.FloatBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x995c53c
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();
};

// Object: Class UMG.GridPanel
// Size: 0x188 (Inherited: 0x158)
struct UGridPanel : UPanelWidget
{
	struct TArray<float> ColumnFill; // 0x158(0x10)
	struct TArray<float> RowFill; // 0x168(0x10)
	uint8_t Pad_0x178[0x10]; // 0x178(0x10)


	// Object: Function UMG.GridPanel.SetRowFill
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995c764
	// Params: [ Num(2) Size(0x8) ]
	void SetRowFill(int32_t ColumnIndex, float Coefficient);

	// Object: Function UMG.GridPanel.SetColumnFill
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995c84c
	// Params: [ Num(2) Size(0x8) ]
	void SetColumnFill(int32_t ColumnIndex, float Coefficient);

	// Object: Function UMG.GridPanel.AddChildToGrid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995c934
	// Params: [ Num(4) Size(0x18) ]
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn);
};

// Object: Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t HorizontalAlignment; // 0x48(0x1)
	uint8_t VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	int32_t Row; // 0x4C(0x4)
	int32_t RowSpan; // 0x50(0x4)
	int32_t Column; // 0x54(0x4)
	int32_t ColumnSpan; // 0x58(0x4)
	int32_t Layer; // 0x5C(0x4)
	struct FVector2D Nudge; // 0x60(0x8)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)


	// Object: Function UMG.GridSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995cd84
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.GridSlot.SetRowSpan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995d170
	// Params: [ Num(1) Size(0x4) ]
	void SetRowSpan(int32_t InRowSpan);

	// Object: Function UMG.GridSlot.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995d218
	// Params: [ Num(1) Size(0x4) ]
	void SetRow(int32_t InRow);

	// Object: Function UMG.GridSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995d2c0
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.GridSlot.SetNudge
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x995ced4
	// Params: [ Num(1) Size(0x8) ]
	void SetNudge(struct FVector2D InNudge);

	// Object: Function UMG.GridSlot.SetLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995cf78
	// Params: [ Num(1) Size(0x4) ]
	void SetLayer(int32_t InLayer);

	// Object: Function UMG.GridSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995ce2c
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.GridSlot.SetColumnSpan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995d020
	// Params: [ Num(1) Size(0x4) ]
	void SetColumnSpan(int32_t InColumnSpan);

	// Object: Function UMG.GridSlot.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995d0c8
	// Params: [ Num(1) Size(0x4) ]
	void SetColumn(int32_t InColumn);
};

// Object: Class UMG.HorizontalBox
// Size: 0x168 (Inherited: 0x158)
struct UHorizontalBox : UPanelWidget
{
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)


	// Object: Function UMG.HorizontalBox.AddChildToHorizontalBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995d810
	// Params: [ Num(2) Size(0x10) ]
	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content);
};

// Object: Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x8)
	uint8_t HorizontalAlignment; // 0x58(0x1)
	uint8_t VerticalAlignment; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)


	// Object: Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995dcbc
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.HorizontalBoxSlot.SetSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995de0c
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FSlateChildSize InSize);

	// Object: Function UMG.HorizontalBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995dec0
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995dd64
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.InputKeySelector
// Size: 0xCD0 (Inherited: 0x140)
struct UInputKeySelector : UWidget
{
	struct FButtonStyle WidgetStyle; // 0x140(0x4E0)
	struct FTextBlockStyle TextStyle; // 0x620(0x590)
	struct FInputChord SelectedKey; // 0xBB0(0x20)
	struct FSlateFontInfo Font; // 0xBD0(0x68)
	struct FMargin Margin; // 0xC38(0x10)
	struct FLinearColor ColorAndOpacity; // 0xC48(0x10)
	struct FText KeySelectionText; // 0xC58(0x18)
	struct FText NoKeySpecifiedText; // 0xC70(0x18)
	bool bAllowModifierKeys; // 0xC88(0x1)
	bool bAllowGamepadKeys; // 0xC89(0x1)
	uint8_t Pad_0xC8A[0x6]; // 0xC8A(0x6)
	struct TArray<struct FKey> EscapeKeys; // 0xC90(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0xCA0(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0xCB0(0x10)
	uint8_t Pad_0xCC0[0x10]; // 0xCC0(0x10)


	// Object: Function UMG.InputKeySelector.SetTextBlockVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99602dc
	// Params: [ Num(1) Size(0x1) ]
	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility);

	// Object: Function UMG.InputKeySelector.SetSelectedKey
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9960824
	// Params: [ Num(1) Size(0x20) ]
	void SetSelectedKey(struct FInputChord& InSelectedKey);

	// Object: Function UMG.InputKeySelector.SetNoKeySpecifiedText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996051c
	// Params: [ Num(1) Size(0x18) ]
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText);

	// Object: Function UMG.InputKeySelector.SetKeySelectionText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99606a0
	// Params: [ Num(1) Size(0x18) ]
	void SetKeySelectionText(struct FText InKeySelectionText);

	// Object: Function UMG.InputKeySelector.SetEscapeKeys
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x99601a0
	// Params: [ Num(1) Size(0x10) ]
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys);

	// Object: Function UMG.InputKeySelector.SetAllowModifierKeys
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996046c
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowModifierKeys(bool bInAllowModifierKeys);

	// Object: Function UMG.InputKeySelector.SetAllowGamepadKeys
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99603bc
	// Params: [ Num(1) Size(0x1) ]
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);

	// Object: DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x20) ]
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey);

	// Object: DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnIsSelectingKeyChanged__DelegateSignature();

	// Object: Function UMG.InputKeySelector.ManualSetIsSelectingKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99600f0
	// Params: [ Num(1) Size(0x1) ]
	void ManualSetIsSelectingKey(bool bInIsSelectingKey);

	// Object: Function UMG.InputKeySelector.GetIsSelectingKey
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9960384
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsSelectingKey();
};

// Object: Class UMG.Int32Binding
// Size: 0x60 (Inherited: 0x60)
struct UInt32Binding : UPropertyBinding
{

	// Object: Function UMG.Int32Binding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9960d74
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetValue();
};

// Object: Class UMG.InvalidationBox
// Size: 0x168 (Inherited: 0x158)
struct UInvalidationBox : UContentWidget
{
	bool bCanCache; // 0x151(0x1)
	bool CacheRelativeTransforms; // 0x152(0x1)
	uint8_t Pad_0x15A[0xE]; // 0x15A(0xE)


	// Object: Function UMG.InvalidationBox.SetCanCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9960f9c
	// Params: [ Num(1) Size(0x1) ]
	void SetCanCache(bool CanCache);

	// Object: Function UMG.InvalidationBox.InvalidateCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9961084
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateCache();

	// Object: Function UMG.InvalidationBox.GetCanCache
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996104c
	// Params: [ Num(1) Size(0x1) ]
	bool GetCanCache();
};

// Object: Class UMG.UserListEntry
// Size: 0x28 (Inherited: 0x28)
struct IUserListEntry : IInterface
{

	// Object: Function UMG.UserListEntry.BP_OnItemSelectionChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnItemSelectionChanged(bool bIsSelected);

	// Object: Function UMG.UserListEntry.BP_OnItemExpansionChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnItemExpansionChanged(bool bIsExpanded);

	// Object: Function UMG.UserListEntry.BP_OnEntryReleased
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnEntryReleased();

	// Object: Function UMG.UserListEntry.BP_IsNotSelectableOrNavigable
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	bool BP_IsNotSelectableOrNavigable();
};

// Object: Class UMG.UserListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary
{

	// Object: Function UMG.UserListEntryLibrary.IsListItemSelected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9961a08
	// Params: [ Num(2) Size(0x11) ]
	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry);

	// Object: Function UMG.UserListEntryLibrary.IsListItemExpanded
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x996194c
	// Params: [ Num(2) Size(0x11) ]
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry);

	// Object: Function UMG.UserListEntryLibrary.GetOwningListView
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9961894
	// Params: [ Num(2) Size(0x18) ]
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry);
};

// Object: Class UMG.UserObjectListEntry
// Size: 0x28 (Inherited: 0x28)
struct IUserObjectListEntry : IUserListEntry
{

	// Object: Function UMG.UserObjectListEntry.OnListItemObjectSet
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void OnListItemObjectSet(struct UObject* ListItemObject);
};

// Object: Class UMG.UserObjectListEntryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary
{

	// Object: Function UMG.UserObjectListEntryLibrary.GetListItemObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x99620a0
	// Params: [ Num(2) Size(0x18) ]
	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry);
};

// Object: Class UMG.ListViewDesignerPreviewItem
// Size: 0x28 (Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject
{
};

// Object: Class UMG.MenuAnchor
// Size: 0x198 (Inherited: 0x158)
struct UMenuAnchor : UContentWidget
{
	struct UUserWidget* MenuClass; // 0x158(0x8)
	struct FDelegate OnGetMenuContentEvent; // 0x160(0x10)
	uint8_t Placement; // 0x170(0x1)
	bool bFitInWindow; // 0x171(0x1)
	bool ShouldDeferPaintingAfterWindowContent; // 0x172(0x1)
	bool UseApplicationMenuStack; // 0x173(0x1)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x178(0x10)
	uint8_t Pad_0x188[0x10]; // 0x188(0x10)


	// Object: Function UMG.MenuAnchor.ToggleOpen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99672d4
	// Params: [ Num(1) Size(0x1) ]
	void ToggleOpen(bool bFocusOnOpen);

	// Object: Function UMG.MenuAnchor.ShouldOpenDueToClick
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99671a0
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldOpenDueToClick();

	// Object: Function UMG.MenuAnchor.SetPlacement
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9967434
	// Params: [ Num(1) Size(0x1) ]
	void SetPlacement(uint8_t InPlacement);

	// Object: Function UMG.MenuAnchor.Open
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9967224
	// Params: [ Num(1) Size(0x1) ]
	void Open(bool bFocusMenu);

	// Object: Function UMG.MenuAnchor.IsOpen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99671d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsOpen();

	// Object: Function UMG.MenuAnchor.HasOpenSubMenus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9967134
	// Params: [ Num(1) Size(0x1) ]
	bool HasOpenSubMenus();

	// Object: Function UMG.MenuAnchor.GetMenuPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996716c
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMenuPosition();

	// Object: Function UMG.MenuAnchor.FitInWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9967384
	// Params: [ Num(1) Size(0x1) ]
	void FitInWindow(bool bFit);

	// Object: Function UMG.MenuAnchor.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9967210
	// Params: [ Num(0) Size(0x0) ]
	void Close();
};

// Object: Class UMG.MouseCursorBinding
// Size: 0x60 (Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding
{

	// Object: Function UMG.MouseCursorBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x9967940
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetValue();
};

// Object: Class UMG.MovieScene2DTransformSection
// Size: 0x548 (Inherited: 0xD8)
struct UMovieScene2DTransformSection : UMovieSceneSection
{
	struct FMovieScene2DTransformMask TransformMask; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xE0(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x220(0xA0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2C0(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x400(0x140)
	uint8_t Pad_0x540[0x8]; // 0x540(0x8)
};

// Object: Class UMG.MovieScene2DTransformTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack
{
};

// Object: Class UMG.MovieSceneMarginSection
// Size: 0x358 (Inherited: 0xD8)
struct UMovieSceneMarginSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel TopCurve; // 0xD8(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x178(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x218(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2B8(0xA0)
};

// Object: Class UMG.MovieSceneMarginTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack
{
};

// Object: Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x80 (Inherited: 0x68)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack
{
	struct TArray<struct FName> BrushPropertyNamePath; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x8)
};

// Object: Class UMG.MultiLineEditableText
// Size: 0x7F0 (Inherited: 0x168)
struct UMultiLineEditableText : UTextLayoutWidget
{
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x10)
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)
	struct FTextBlockStyle WidgetStyle; // 0x1B0(0x590)
	bool bIsReadOnly; // 0x740(0x1)
	uint8_t Pad_0x741[0x7]; // 0x741(0x7)
	struct FSlateFontInfo Font; // 0x748(0x68)
	bool SelectAllTextWhenFocused; // 0x7B0(0x1)
	bool ClearTextSelectionOnFocusLoss; // 0x7B1(0x1)
	bool RevertTextOnEscape; // 0x7B2(0x1)
	bool ClearKeyboardFocusOnCommit; // 0x7B3(0x1)
	bool AllowContextMenu; // 0x7B4(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x7B5(0x1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x7B6(0x1)
	uint8_t Pad_0x7B7[0x1]; // 0x7B7(0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x7B8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x7C8(0x10)
	uint8_t Pad_0x7D8[0x18]; // 0x7D8(0x18)


	// Object: Function UMG.MultiLineEditableText.SetWidgetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x996859c
	// Params: [ Num(1) Size(0x590) ]
	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle);

	// Object: Function UMG.MultiLineEditableText.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9968960
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.MultiLineEditableText.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996865c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(bool bReadOnly);

	// Object: Function UMG.MultiLineEditableText.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996870c
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x19) ]
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x18) ]
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text);

	// Object: Function UMG.MultiLineEditableText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9968ae4
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.MultiLineEditableText.GetHintText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9968890
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetHintText();
};

// Object: Class UMG.MultiLineEditableTextBox
// Size: 0x17F0 (Inherited: 0x168)
struct UMultiLineEditableTextBox : UTextLayoutWidget
{
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x10)
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)
	struct FEditableTextBoxStyle WidgetStyle; // 0x1B0(0xFD0)
	struct FTextBlockStyle TextStyle; // 0x1180(0x590)
	bool bIsReadOnly; // 0x1710(0x1)
	bool AllowContextMenu; // 0x1711(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x1712(0x1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x1713(0x1)
	uint8_t Pad_0x1714[0x4]; // 0x1714(0x4)
	struct USlateWidgetStyleAsset* Style; // 0x1718(0x8)
	struct FSlateFontInfo Font; // 0x1720(0x68)
	struct FLinearColor ForegroundColor; // 0x1788(0x10)
	struct FLinearColor BackgroundColor; // 0x1798(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0x17A8(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0x17B8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x17C8(0x10)
	uint8_t Pad_0x17D8[0x18]; // 0x17D8(0x18)


	// Object: Function UMG.MultiLineEditableTextBox.SetTextStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9968fc0
	// Params: [ Num(1) Size(0x590) ]
	void SetTextStyle(struct FTextBlockStyle& InTextStyle);

	// Object: Function UMG.MultiLineEditableTextBox.SetText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9969508
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9969080
	// Params: [ Num(1) Size(0x1) ]
	void SetIsReadOnly(bool bReadOnly);

	// Object: Function UMG.MultiLineEditableTextBox.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99692b4
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InHintText);

	// Object: Function UMG.MultiLineEditableTextBox.SetError
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9969130
	// Params: [ Num(1) Size(0x18) ]
	void SetError(struct FText InError);

	// Object: DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x19) ]
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x18) ]
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text);

	// Object: Function UMG.MultiLineEditableTextBox.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996968c
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function UMG.MultiLineEditableTextBox.GetHintText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9969438
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetHintText();
};

// Object: Class UMG.NamedSlotInterface
// Size: 0x28 (Inherited: 0x28)
struct INamedSlotInterface : IInterface
{
};

// Object: Class UMG.NativeWidgetHost
// Size: 0x150 (Inherited: 0x140)
struct UNativeWidgetHost : UWidget
{
	uint8_t Pad_0x140[0x10]; // 0x140(0x10)
};

// Object: Class UMG.ProgressBar
// Size: 0x520 (Inherited: 0x140)
struct UProgressBar : UWidget
{
	struct FProgressBarStyle WidgetStyle; // 0x140(0x370)
	struct USlateWidgetStyleAsset* Style; // 0x4B0(0x8)
	struct USlateBrushAsset* BackgroundImage; // 0x4B8(0x8)
	struct USlateBrushAsset* FillImage; // 0x4C0(0x8)
	struct USlateBrushAsset* MarqueeImage; // 0x4C8(0x8)
	float Percent; // 0x4D0(0x4)
	uint8_t BarFillType; // 0x4D4(0x1)
	bool bIsMarquee; // 0x4D5(0x1)
	uint8_t Pad_0x4D6[0x2]; // 0x4D6(0x2)
	struct FVector2D BorderPadding; // 0x4D8(0x8)
	struct FDelegate PercentDelegate; // 0x4E0(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x4F0(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x500(0x10)
	uint8_t Pad_0x510[0x10]; // 0x510(0x10)


	// Object: Function UMG.ProgressBar.SetWidgetStyle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x996e6e4
	// Params: [ Num(1) Size(0x370) ]
	void SetWidgetStyle(struct FProgressBarStyle& InStyle);

	// Object: Function UMG.ProgressBar.SetPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996ec5c
	// Params: [ Num(1) Size(0x4) ]
	void SetPercent(float InPercent);

	// Object: Function UMG.ProgressBar.SetIsMarquee
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996eb04
	// Params: [ Num(1) Size(0x1) ]
	void SetIsMarquee(bool InbIsMarquee);

	// Object: Function UMG.ProgressBar.SetFillColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x996ebb4
	// Params: [ Num(1) Size(0x10) ]
	void SetFillColorAndOpacity(struct FLinearColor InColor);
};

// Object: Class UMG.RetainerBox
// Size: 0x180 (Inherited: 0x158)
struct URetainerBox : UContentWidget
{
	bool bRetainRender; // 0x151(0x1)
	bool RenderOnInvalidation; // 0x152(0x1)
	bool RenderOnPhase; // 0x153(0x1)
	int32_t Phase; // 0x154(0x4)
	int32_t PhaseCount; // 0x158(0x4)
	struct UMaterialInterface* EffectMaterial; // 0x160(0x8)
	struct FName TextureParameter; // 0x168(0x8)
	uint8_t Pad_0x173[0xD]; // 0x173(0xD)


	// Object: Function UMG.RetainerBox.SetTextureParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996f378
	// Params: [ Num(1) Size(0x8) ]
	void SetTextureParameter(struct FName TextureParameter);

	// Object: Function UMG.RetainerBox.SetRetainRendering
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996f2c8
	// Params: [ Num(1) Size(0x1) ]
	void SetRetainRendering(bool bInRetainRendering);

	// Object: Function UMG.RetainerBox.SetRenderingPhase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996f510
	// Params: [ Num(2) Size(0x8) ]
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);

	// Object: Function UMG.RetainerBox.SetEffectMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996f420
	// Params: [ Num(1) Size(0x8) ]
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial);

	// Object: Function UMG.RetainerBox.RequestRender
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x996f4fc
	// Params: [ Num(0) Size(0x0) ]
	void RequestRender();

	// Object: Function UMG.RetainerBox.GetEffectMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x996f4c8
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetEffectMaterial();
};

// Object: Class UMG.RichTextBlockImageDecorator
// Size: 0x38 (Inherited: 0x30)
struct URichTextBlockImageDecorator : URichTextBlockDecorator
{
	struct UDataTable* ImageSet; // 0x30(0x8)
};

// Object: Class UMG.RichTextBlockInlineTextDecorator
// Size: 0x38 (Inherited: 0x30)
struct URichTextBlockInlineTextDecorator : URichTextBlockDecorator
{
	struct UDataTable* InlineTextStyleSet; // 0x30(0x8)
};

// Object: Class UMG.SafeZone
// Size: 0x168 (Inherited: 0x158)
struct USafeZone : UContentWidget
{
	bool PadLeft; // 0x151(0x1)
	bool PadRight; // 0x152(0x1)
	bool PadTop; // 0x153(0x1)
	bool PadBottom; // 0x154(0x1)
	uint8_t Pad_0x15C[0xC]; // 0x15C(0xC)


	// Object: Function UMG.SafeZone.SetSidesToPad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9971d14
	// Params: [ Num(4) Size(0x4) ]
	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// Object: Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot
{
	bool bIsTitleSafe; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct FMargin SafeAreaScale; // 0x3C(0x10)
	uint8_t HAlign; // 0x4C(0x1)
	uint8_t VAlign; // 0x4D(0x1)
	uint8_t Pad_0x4E[0x2]; // 0x4E(0x2)
	struct FMargin Padding; // 0x50(0x10)
};

// Object: Class UMG.ScaleBox
// Size: 0x178 (Inherited: 0x158)
struct UScaleBox : UContentWidget
{
	uint8_t Stretch; // 0x151(0x1)
	uint8_t StretchDirection; // 0x152(0x1)
	float UserSpecifiedScale; // 0x154(0x4)
	bool IgnoreInheritedScale; // 0x158(0x1)
	float IgnoreSlightScaleModificationPercent; // 0x15C(0x4)
	bool bExplicitChildLayerId; // 0x160(0x1)
	uint8_t Pad_0x164[0x14]; // 0x164(0x14)


	// Object: Function UMG.ScaleBox.SetUserSpecifiedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997240c
	// Params: [ Num(1) Size(0x4) ]
	void SetUserSpecifiedScale(float InUserSpecifiedScale);

	// Object: Function UMG.ScaleBox.SetStretchDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99724b4
	// Params: [ Num(1) Size(0x1) ]
	void SetStretchDirection(uint8_t InStretchDirection);

	// Object: Function UMG.ScaleBox.SetStretch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997255c
	// Params: [ Num(1) Size(0x1) ]
	void SetStretch(uint8_t InStretch);

	// Object: Function UMG.ScaleBox.SetIgnoreInheritedScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997235c
	// Params: [ Num(1) Size(0x1) ]
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// Object: Class UMG.ScaleBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t HorizontalAlignment; // 0x48(0x1)
	uint8_t VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)


	// Object: Function UMG.ScaleBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9972a44
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.ScaleBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9972b94
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ScaleBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9972aec
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.ScrollBar
// Size: 0xBB0 (Inherited: 0x140)
struct UScrollBar : UWidget
{
	struct FScrollBarStyle WidgetStyle; // 0x140(0xA30)
	struct USlateWidgetStyleAsset* Style; // 0xB70(0x8)
	bool bAlwaysShowScrollbar; // 0xB78(0x1)
	bool bAlwaysShowScrollbarTrack; // 0xB79(0x1)
	uint8_t Orientation; // 0xB7A(0x1)
	uint8_t Pad_0xB7B[0x1]; // 0xB7B(0x1)
	struct FVector2D Thickness; // 0xB7C(0x8)
	struct FMargin Padding; // 0xB84(0x10)
	uint8_t Pad_0xB94[0x1C]; // 0xB94(0x1C)


	// Object: Function UMG.ScrollBar.SetState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9973010
	// Params: [ Num(2) Size(0x8) ]
	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Object: Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t HorizontalAlignment; // 0x48(0x1)
	uint8_t VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0xE]; // 0x4A(0xE)


	// Object: Function UMG.ScrollBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9976d18
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.ScrollBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9976e68
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.ScrollBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9976dc0
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)
	uint8_t HorizontalAlignment; // 0x58(0x1)
	uint8_t VerticalAlignment; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)


	// Object: Function UMG.SizeBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9977fa8
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.SizeBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99780f8
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.SizeBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9978050
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.SlateBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function UMG.SlateBlueprintLibrary.WidgetGlobalPostionToSubWidgetLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x9978574
	// Params: [ Num(4) Size(0x50) ]
	void WidgetGlobalPostionToSubWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenUIPosition, struct FVector2D& OutLocalUIPostion);

	// Object: Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9979304
	// Params: [ Num(3) Size(0x48) ]
	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector);

	// Object: Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x99793f8
	// Params: [ Num(3) Size(0x48) ]
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector);

	// Object: Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x99794ec
	// Params: [ Num(3) Size(0x40) ]
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar);

	// Object: Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x99795e4
	// Params: [ Num(3) Size(0x40) ]
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x9978970
	// Params: [ Num(5) Size(0x51) ]
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x9978804
	// Params: [ Num(4) Size(0x19) ]
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition);

	// Object: Function UMG.SlateBlueprintLibrary.ScreenToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x99786e8
	// Params: [ Num(3) Size(0x18) ]
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.LocalToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9978c98
	// Params: [ Num(5) Size(0x58) ]
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9979904
	// Params: [ Num(3) Size(0x48) ]
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate);

	// Object: Function UMG.SlateBlueprintLibrary.IsUnderLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9979aec
	// Params: [ Num(3) Size(0x41) ]
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate);

	// Object: Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x997984c
	// Params: [ Num(2) Size(0x40) ]
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.GetLocalSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9979794
	// Params: [ Num(2) Size(0x40) ]
	struct FVector2D GetLocalSize(struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x99796dc
	// Params: [ Num(2) Size(0x40) ]
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry);

	// Object: Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9978e54
	// Params: [ Num(3) Size(0x241) ]
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B);

	// Object: Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9978b2c
	// Params: [ Num(4) Size(0x20) ]
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition);

	// Object: Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x99799f8
	// Params: [ Num(3) Size(0x48) ]
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate);
};

// Object: Class UMG.SlateVectorArtData
// Size: 0x60 (Inherited: 0x28)
struct USlateVectorArtData : UObject
{
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x8)
	struct FVector2D ExtentMin; // 0x50(0x8)
	struct FVector2D ExtentMax; // 0x58(0x8)
};

// Object: Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject
{
	bool bCanChildrenBeAccessible; // 0x28(0x1)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x1)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Object: Class UMG.Spacer
// Size: 0x158 (Inherited: 0x140)
struct USpacer : UWidget
{
	struct FVector2D Size; // 0x140(0x8)
	uint8_t Pad_0x148[0x10]; // 0x148(0x10)


	// Object: Function UMG.Spacer.SetSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x997bf48
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FVector2D InSize);
};

// Object: Class UMG.SpinBox
// Size: 0x880 (Inherited: 0x140)
struct USpinBox : UWidget
{
	float Value; // 0x140(0x4)
	struct FDelegate ValueDelegate; // 0x144(0x10)
	uint8_t Pad_0x154[0xC]; // 0x154(0xC)
	struct FSpinBoxStyle WidgetStyle; // 0x160(0x5F0)
	struct USlateWidgetStyleAsset* Style; // 0x750(0x8)
	int32_t MinFractionalDigits; // 0x758(0x4)
	int32_t MaxFractionalDigits; // 0x75C(0x4)
	bool bAlwaysUsesDeltaSnap; // 0x760(0x1)
	uint8_t Pad_0x761[0x3]; // 0x761(0x3)
	float Delta; // 0x764(0x4)
	float SliderExponent; // 0x768(0x4)
	uint8_t Pad_0x76C[0x4]; // 0x76C(0x4)
	struct FSlateFontInfo Font; // 0x770(0x68)
	uint8_t Justification; // 0x7D8(0x1)
	uint8_t Pad_0x7D9[0x3]; // 0x7D9(0x3)
	float MinDesiredWidth; // 0x7DC(0x4)
	bool ClearKeyboardFocusOnCommit; // 0x7E0(0x1)
	bool SelectAllTextOnCommit; // 0x7E1(0x1)
	uint8_t Pad_0x7E2[0x6]; // 0x7E2(0x6)
	struct FSlateColor ForegroundColor; // 0x7E8(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x810(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x820(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x830(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x840(0x10)
	uint8_t bOverride_MinValue : 1; // 0x850(0x1), Mask(0x1)
	uint8_t bOverride_MaxValue : 1; // 0x850(0x1), Mask(0x2)
	uint8_t bOverride_MinSliderValue : 1; // 0x850(0x1), Mask(0x4)
	uint8_t bOverride_MaxSliderValue : 1; // 0x850(0x1), Mask(0x8)
	uint8_t BitPad_0x850_4 : 4; // 0x850(0x1)
	uint8_t Pad_0x851[0x3]; // 0x851(0x3)
	float MinValue; // 0x854(0x4)
	float MaxValue; // 0x858(0x4)
	float MinSliderValue; // 0x85C(0x4)
	float MaxSliderValue; // 0x860(0x4)
	uint8_t Pad_0x864[0x1C]; // 0x864(0x1C)


	// Object: Function UMG.SpinBox.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997cbb8
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c760
	// Params: [ Num(1) Size(0x4) ]
	void SetMinValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c580
	// Params: [ Num(1) Size(0x4) ]
	void SetMinSliderValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMinFractionalDigits
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997cadc
	// Params: [ Num(1) Size(0x4) ]
	void SetMinFractionalDigits(int32_t NewValue);

	// Object: Function UMG.SpinBox.SetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c670
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c490
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxSliderValue(float NewValue);

	// Object: Function UMG.SpinBox.SetMaxFractionalDigits
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997ca00
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxFractionalDigits(int32_t NewValue);

	// Object: Function UMG.SpinBox.SetForegroundColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c2e4
	// Params: [ Num(1) Size(0x28) ]
	void SetForegroundColor(struct FSlateColor InForegroundColor);

	// Object: Function UMG.SpinBox.SetDelta
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c83c
	// Params: [ Num(1) Size(0x4) ]
	void SetDelta(float NewValue);

	// Object: Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c918
	// Params: [ Num(1) Size(0x1) ]
	void SetAlwaysUsesDeltaSnap(bool bNewValue);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x5) ]
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, uint8_t CommitMethod);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);

	// Object: DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnSpinBoxBeginSliderMovement__DelegateSignature();

	// Object: Function UMG.SpinBox.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997cc60
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function UMG.SpinBox.GetMinValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997c808
	// Params: [ Num(1) Size(0x4) ]
	float GetMinValue();

	// Object: Function UMG.SpinBox.GetMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997c628
	// Params: [ Num(1) Size(0x4) ]
	float GetMinSliderValue();

	// Object: Function UMG.SpinBox.GetMinFractionalDigits
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997cb84
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMinFractionalDigits();

	// Object: Function UMG.SpinBox.GetMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997c718
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxValue();

	// Object: Function UMG.SpinBox.GetMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997c538
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxSliderValue();

	// Object: Function UMG.SpinBox.GetMaxFractionalDigits
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997caa8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxFractionalDigits();

	// Object: Function UMG.SpinBox.GetDelta
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997c8e4
	// Params: [ Num(1) Size(0x4) ]
	float GetDelta();

	// Object: Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x997c9c8
	// Params: [ Num(1) Size(0x1) ]
	bool GetAlwaysUsesDeltaSnap();

	// Object: Function UMG.SpinBox.ClearMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c74c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinValue();

	// Object: Function UMG.SpinBox.ClearMinSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c56c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMinSliderValue();

	// Object: Function UMG.SpinBox.ClearMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c65c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxValue();

	// Object: Function UMG.SpinBox.ClearMaxSliderValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x997c47c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMaxSliderValue();
};

// Object: Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : UPropertyBinding
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)


	// Object: Function UMG.TextBinding.GetTextValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x997ea18
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetTextValue();

	// Object: Function UMG.TextBinding.GetStringValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x997e97c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetStringValue();
};

// Object: Class UMG.Throbber
// Size: 0x280 (Inherited: 0x140)
struct UThrobber : UWidget
{
	int32_t NumberOfPieces; // 0x140(0x4)
	bool bAnimateHorizontally; // 0x144(0x1)
	bool bAnimateVertically; // 0x145(0x1)
	bool bAnimateOpacity; // 0x146(0x1)
	uint8_t Pad_0x147[0x1]; // 0x147(0x1)
	struct USlateBrushAsset* PieceImage; // 0x148(0x8)
	struct FSlateBrush Image; // 0x150(0x120)
	uint8_t Pad_0x270[0x10]; // 0x270(0x10)


	// Object: Function UMG.Throbber.SetNumberOfPieces
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99811b4
	// Params: [ Num(1) Size(0x4) ]
	void SetNumberOfPieces(int32_t InNumberOfPieces);

	// Object: Function UMG.Throbber.SetAnimateVertically
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9981054
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateVertically(bool bInAnimateVertically);

	// Object: Function UMG.Throbber.SetAnimateOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9980fa4
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateOpacity(bool bInAnimateOpacity);

	// Object: Function UMG.Throbber.SetAnimateHorizontally
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9981104
	// Params: [ Num(1) Size(0x1) ]
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Object: Class UMG.UMGSequencePlayer
// Size: 0x7C0 (Inherited: 0x28)
struct UUMGSequencePlayer : UObject
{
	uint8_t Pad_0x28[0x3E0]; // 0x28(0x3E0)
	struct UWidgetAnimation* Animation; // 0x408(0x8)
	uint8_t Pad_0x410[0x3B0]; // 0x410(0x3B0)


	// Object: Function UMG.UMGSequencePlayer.SetUserTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998204c
	// Params: [ Num(1) Size(0x8) ]
	void SetUserTag(struct FName InUserTag);

	// Object: Function UMG.UMGSequencePlayer.GetUserTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99820f4
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetUserTag();
};

// Object: Class UMG.UniformGridPanel
// Size: 0x180 (Inherited: 0x158)
struct UUniformGridPanel : UPanelWidget
{
	struct FMargin SlotPadding; // 0x154(0x10)
	float MinDesiredSlotWidth; // 0x164(0x4)
	float MinDesiredSlotHeight; // 0x168(0x4)
	uint8_t Pad_0x170[0x10]; // 0x170(0x10)


	// Object: Function UMG.UniformGridPanel.SetSlotPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9982710
	// Params: [ Num(1) Size(0x10) ]
	void SetSlotPadding(struct FMargin InSlotPadding);

	// Object: Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9982668
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);

	// Object: Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99825c0
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);

	// Object: Function UMG.UniformGridPanel.AddChildToUniformGrid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9982494
	// Params: [ Num(4) Size(0x18) ]
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn);
};

// Object: Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot
{
	uint8_t HorizontalAlignment; // 0x38(0x1)
	uint8_t VerticalAlignment; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	int32_t Row; // 0x3C(0x4)
	int32_t Column; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)


	// Object: Function UMG.UniformGridSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9982b20
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.UniformGridSlot.SetRow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9982d18
	// Params: [ Num(1) Size(0x4) ]
	void SetRow(int32_t InRow);

	// Object: Function UMG.UniformGridSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9982bc8
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.UniformGridSlot.SetColumn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9982c70
	// Params: [ Num(1) Size(0x4) ]
	void SetColumn(int32_t InColumn);
};

// Object: Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot
{
	struct FSlateChildSize Size; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
	uint8_t HorizontalAlignment; // 0x58(0x1)
	uint8_t VerticalAlignment; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)


	// Object: Function UMG.VerticalBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998dc2c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.VerticalBoxSlot.SetSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998dd7c
	// Params: [ Num(1) Size(0x8) ]
	void SetSize(struct FSlateChildSize InSize);

	// Object: Function UMG.VerticalBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998de30
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.VerticalBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998dcd4
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.Viewport
// Size: 0x180 (Inherited: 0x158)
struct UViewport : UContentWidget
{
	struct FLinearColor BackgroundColor; // 0x154(0x10)
	uint8_t Pad_0x168[0x18]; // 0x168(0x18)


	// Object: Function UMG.Viewport.Spawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x998e240
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* Spawn(struct AActor* ActorClass);

	// Object: Function UMG.Viewport.SetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x998e2f0
	// Params: [ Num(1) Size(0xC) ]
	void SetViewRotation(struct FRotator Rotation);

	// Object: Function UMG.Viewport.SetViewLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x998e3d0
	// Params: [ Num(1) Size(0xC) ]
	void SetViewLocation(struct FVector Location);

	// Object: Function UMG.Viewport.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998e398
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetViewRotation();

	// Object: Function UMG.Viewport.GetViewportWorld
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998e4b0
	// Params: [ Num(1) Size(0x8) ]
	struct UWorld* GetViewportWorld();

	// Object: Function UMG.Viewport.GetViewLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x998e478
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetViewLocation();
};

// Object: Class UMG.VisibilityBinding
// Size: 0x60 (Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding
{

	// Object: Function UMG.VisibilityBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x998e81c
	// Params: [ Num(1) Size(0x1) ]
	enum class ESlateVisibility GetValue();
};

// Object: Class UMG.WidgetAnimation
// Size: 0x3B0 (Inherited: 0x348)
struct UWidgetAnimation : UMovieSceneSequence
{
	struct UMovieScene* MovieScene; // 0x348(0x8)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x350(0x10)
	bool bLegacyFinishOnStop; // 0x360(0x1)
	uint8_t Pad_0x361[0x7]; // 0x361(0x7)
	struct FString DisplayLabel; // 0x368(0x10)
	uint8_t DetailMode; // 0x378(0x1)
	uint8_t Pad_0x379[0x7]; // 0x379(0x7)
	struct FSoftObjectPath OnAnimationStartedSound; // 0x380(0x18)
	struct FSoftObjectPath OnAnimationFinishedSound; // 0x398(0x18)


	// Object: Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9992108
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9991e70
	// Params: [ Num(2) Size(0x18) ]
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9992060
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9991dc8
	// Params: [ Num(1) Size(0x8) ]
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget);

	// Object: Function UMG.WidgetAnimation.SetDetailMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9991d18
	// Params: [ Num(1) Size(0x1) ]
	void SetDetailMode(uint8_t InDetailMode);

	// Object: Function UMG.WidgetAnimation.GetStartTime
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999232c
	// Params: [ Num(1) Size(0x4) ]
	float GetStartTime();

	// Object: Function UMG.WidgetAnimation.GetEndTime
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x99922f8
	// Params: [ Num(1) Size(0x4) ]
	float GetEndTime();

	// Object: Function UMG.WidgetAnimation.GetDisplayLabel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9991c2c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDisplayLabel();

	// Object: Function UMG.WidgetAnimation.GetDetailModeBP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9991cfc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetDetailModeBP();

	// Object: Function UMG.WidgetAnimation.BindToAnimationStarted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9992200
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate);

	// Object: Function UMG.WidgetAnimation.BindToAnimationFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9991f68
	// Params: [ Num(2) Size(0x18) ]
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate);
};

// Object: Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding
{
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Object: Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject
{
	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)


	// Object: Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9993bfc
	// Params: [ Num(9) Size(0x38) ]
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed);

	// Object: Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9993e6c
	// Params: [ Num(8) Size(0x30) ]
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, uint8_t PlayMode, float PlaybackSpeed);
};

// Object: Class UMG.WidgetBinding
// Size: 0x60 (Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding
{

	// Object: Function UMG.WidgetBinding.GetValue
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x999440c
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetValue();
};

// Object: Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x3A8 (Inherited: 0x358)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	struct UWidgetTree* WidgetTree; // 0x358(0x8)
	uint8_t bClassRequiresNativeTick : 1; // 0x360(0x1), Mask(0x1)
	uint8_t BitPad_0x360_1 : 7; // 0x360(0x1)
	uint8_t Pad_0x361[0x7]; // 0x361(0x7)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x368(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x378(0x10)
	struct TArray<struct FName> NamedSlots; // 0x388(0x10)
	struct TArray<struct FWidgetAnimationToTimelinePair> AnimationsToTimeline; // 0x398(0x10)
};

// Object: Class UMG.WidgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function UMG.WidgetBlueprintLibrary.UnlockMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x999814c
	// Params: [ Num(2) Size(0x170) ]
	struct FEventReply UnlockMouse(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.Unhandled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x99985cc
	// Params: [ Num(1) Size(0xB8) ]
	struct FEventReply Unhandled();

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9994be0
	// Params: [ Num(5) Size(0xC) ]
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9994b24
	// Params: [ Num(1) Size(0x10) ]
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate);

	// Object: Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9994a84
	// Params: [ Num(1) Size(0x1) ]
	void SetWindowTitleBarCloseButtonActive(bool bActive);

	// Object: Function UMG.WidgetBlueprintLibrary.SetUserFocus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9997fc0
	// Params: [ Num(4) Size(0x180) ]
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers);

	// Object: Function UMG.WidgetBlueprintLibrary.SetMousePosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x9997a5c
	// Params: [ Num(3) Size(0x178) ]
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x99993b4
	// Params: [ Num(3) Size(0x11) ]
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x99994c8
	// Params: [ Num(3) Size(0x11) ]
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9999054
	// Params: [ Num(1) Size(0x8) ]
	void SetInputMode_GameOnly(struct APlayerController* PlayerController);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x99990ec
	// Params: [ Num(4) Size(0x12) ]
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9999248
	// Params: [ Num(4) Size(0x12) ]
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9994d98
	// Params: [ Num(5) Size(0x1D) ]
	bool SetHardwareCursor(struct UObject* WorldContextObject, uint8_t CursorShape, struct FName CursorName, struct FVector2D HotSpot);

	// Object: Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9999040
	// Params: [ Num(0) Size(0x0) ]
	void SetFocusToGameViewport();

	// Object: Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9994f00
	// Params: [ Num(4) Size(0xA) ]
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);

	// Object: Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x99962a8
	// Params: [ Num(2) Size(0x128) ]
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture);

	// Object: Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9995fdc
	// Params: [ Num(2) Size(0x128) ]
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material);

	// Object: Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9994bcc
	// Params: [ Num(0) Size(0x0) ]
	void RestorePreviousWindowTitleBarState();

	// Object: Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x999838c
	// Params: [ Num(2) Size(0x170) ]
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9997b9c
	// Params: [ Num(3) Size(0x178) ]
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks);

	// Object: DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();

	// Object: Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9995e4c
	// Params: [ Num(1) Size(0x120) ]
	struct FSlateBrush NoResourceBrush();

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9996f80
	// Params: [ Num(4) Size(0x130) ]
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height);

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9996d30
	// Params: [ Num(4) Size(0x130) ]
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height);

	// Object: Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x99971d0
	// Params: [ Num(2) Size(0x130) ]
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset);

	// Object: Function UMG.WidgetBlueprintLibrary.LockMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9998248
	// Params: [ Num(3) Size(0x178) ]
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget);

	// Object: Function UMG.WidgetBlueprintLibrary.IsDragDropping
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x99973ec
	// Params: [ Num(1) Size(0x1) ]
	bool IsDragDropping();

	// Object: Function UMG.WidgetBlueprintLibrary.Handled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999863c
	// Params: [ Num(1) Size(0xB8) ]
	struct FEventReply Handled();

	// Object: Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9995070
	// Params: [ Num(4) Size(0x40) ]
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding);

	// Object: Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x999551c
	// Params: [ Num(2) Size(0x78) ]
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x99952dc
	// Params: [ Num(2) Size(0x88) ]
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9995200
	// Params: [ Num(2) Size(0x38) ]
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9995758
	// Params: [ Num(2) Size(0x50) ]
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9995440
	// Params: [ Num(2) Size(0x38) ]
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event);

	// Object: Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9995bb8
	// Params: [ Num(2) Size(0x128) ]
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x99973b8
	// Params: [ Num(1) Size(0x8) ]
	struct UDragDropOperation* GetDragDroppingContent();

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9996808
	// Params: [ Num(2) Size(0x128) ]
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9996574
	// Params: [ Num(2) Size(0x128) ]
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetBrushResource
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9996a9c
	// Params: [ Num(2) Size(0x128) ]
	struct UObject* GetBrushResource(struct FSlateBrush& Brush);

	// Object: Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x999589c
	// Params: [ Num(4) Size(0x21) ]
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct IInterface* Interface, bool TopLevelOnly);

	// Object: Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9995a20
	// Params: [ Num(4) Size(0x21) ]
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly);

	// Object: Function UMG.WidgetBlueprintLibrary.EndDragDrop
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9997424
	// Params: [ Num(2) Size(0x170) ]
	struct FEventReply EndDragDrop(struct FEventReply& Reply);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x99986ac
	// Params: [ Num(7) Size(0x74) ]
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, float FontSize, struct FName FontTypeFace, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawText
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9998948
	// Params: [ Num(4) Size(0x58) ]
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawLines
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9998ac4
	// Params: [ Num(5) Size(0x58) ]
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9998ca4
	// Params: [ Num(6) Size(0x58) ]
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness);

	// Object: Function UMG.WidgetBlueprintLibrary.DrawBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x9998e98
	// Params: [ Num(5) Size(0x58) ]
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint);

	// Object: Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9995ba4
	// Params: [ Num(0) Size(0x0) ]
	void DismissAllMenus();

	// Object: Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9997520
	// Params: [ Num(4) Size(0x148) ]
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey);

	// Object: Function UMG.WidgetBlueprintLibrary.DetectDrag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x99977fc
	// Params: [ Num(4) Size(0x190) ]
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey);

	// Object: Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x99995e4
	// Params: [ Num(2) Size(0x10) ]
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass);

	// Object: Function UMG.WidgetBlueprintLibrary.Create
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x999968c
	// Params: [ Num(4) Size(0x20) ]
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer);

	// Object: Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9997ce8
	// Params: [ Num(3) Size(0x178) ]
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers);

	// Object: Function UMG.WidgetBlueprintLibrary.CaptureMouse
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9998488
	// Params: [ Num(3) Size(0x178) ]
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget);

	// Object: Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x9997e34
	// Params: [ Num(4) Size(0x180) ]
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks);

	// Object: Function UMG.WidgetBlueprintLibrary.CancelDragDrop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x99973a4
	// Params: [ Num(0) Size(0x0) ]
	void CancelDragDrop();
};

// Object: Class UMG.WidgetInteractionComponent
// Size: 0x540 (Inherited: 0x350)
struct UWidgetInteractionComponent : USceneComponent
{
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x348(0x10)
	uint8_t Pad_0x360[0x8]; // 0x360(0x8)
	int32_t VirtualUserIndex; // 0x368(0x4)
	float PointerIndex; // 0x36C(0x4)
	uint8_t TraceChannel; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	float InteractionDistance; // 0x374(0x4)
	enum class EWidgetInteractionSource InteractionSource; // 0x378(0x1)
	bool bEnableHitTesting; // 0x379(0x1)
	bool bShowDebug; // 0x37A(0x1)
	uint8_t Pad_0x37B[0x1]; // 0x37B(0x1)
	struct FLinearColor DebugColor; // 0x37C(0x10)
	uint8_t Pad_0x38C[0x7C]; // 0x38C(0x7C)
	struct FHitResult CustomHitResult; // 0x408(0x88)
	struct FVector2D LocalHitLocation; // 0x490(0x8)
	struct FVector2D LastLocalHitLocation; // 0x498(0x8)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x4A0(0x8)
	struct FHitResult LastHitResult; // 0x4A8(0x88)
	bool bIsHoveredWidgetInteractable; // 0x530(0x1)
	bool bIsHoveredWidgetFocusable; // 0x531(0x1)
	bool bIsHoveredWidgetHitTestVisible; // 0x532(0x1)
	uint8_t Pad_0x533[0xD]; // 0x533(0xD)


	// Object: Function UMG.WidgetInteractionComponent.SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x999d9d4
	// Params: [ Num(1) Size(0x8) ]
	void SetFocus(struct UWidget* FocusWidget);

	// Object: Function UMG.WidgetInteractionComponent.SetCustomHitResult
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x999da7c
	// Params: [ Num(1) Size(0x88) ]
	void SetCustomHitResult(struct FHitResult& HitResult);

	// Object: Function UMG.WidgetInteractionComponent.SendKeyChar
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999dd40
	// Params: [ Num(3) Size(0x12) ]
	bool SendKeyChar(struct FString Characters, bool bRepeat);

	// Object: Function UMG.WidgetInteractionComponent.ScrollWheel
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999dc90
	// Params: [ Num(1) Size(0x4) ]
	void ScrollWheel(float ScrollDelta);

	// Object: Function UMG.WidgetInteractionComponent.ReleasePointerKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999e3b0
	// Params: [ Num(1) Size(0x18) ]
	void ReleasePointerKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.ReleaseKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999e038
	// Params: [ Num(2) Size(0x19) ]
	bool ReleaseKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.PressPointerKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999e53c
	// Params: [ Num(1) Size(0x18) ]
	void PressPointerKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.PressKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999e1d0
	// Params: [ Num(3) Size(0x1A) ]
	bool PressKey(struct FKey Key, bool bRepeat);

	// Object: Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x999dea0
	// Params: [ Num(2) Size(0x19) ]
	bool PressAndReleaseKey(struct FKey Key);

	// Object: Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999dc24
	// Params: [ Num(1) Size(0x1) ]
	bool IsOverInteractableWidget();

	// Object: Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999dbb4
	// Params: [ Num(1) Size(0x1) ]
	bool IsOverHitTestVisibleWidget();

	// Object: Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999dbec
	// Params: [ Num(1) Size(0x1) ]
	bool IsOverFocusableWidget();

	// Object: Function UMG.WidgetInteractionComponent.GetLastHitResult
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999db78
	// Params: [ Num(1) Size(0x88) ]
	struct FHitResult GetLastHitResult();

	// Object: Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999dc5c
	// Params: [ Num(1) Size(0x8) ]
	struct UWidgetComponent* GetHoveredWidgetComponent();

	// Object: Function UMG.WidgetInteractionComponent.Get2DHitLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x999db44
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D Get2DHitLocation();
};

// Object: Class UMG.WidgetLayoutLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary
{

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999ee30
	// Params: [ Num(2) Size(0x10) ]
	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999ed88
	// Params: [ Num(2) Size(0x10) ]
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f178
	// Params: [ Num(2) Size(0x10) ]
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f220
	// Params: [ Num(2) Size(0x10) ]
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999eed8
	// Params: [ Num(2) Size(0x10) ]
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f0d0
	// Params: [ Num(2) Size(0x10) ]
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999ef80
	// Params: [ Num(2) Size(0x10) ]
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f028
	// Params: [ Num(2) Size(0x10) ]
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f2c8
	// Params: [ Num(2) Size(0x10) ]
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f370
	// Params: [ Num(2) Size(0x10) ]
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f418
	// Params: [ Num(2) Size(0x10) ]
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f4c0
	// Params: [ Num(2) Size(0x10) ]
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f568
	// Params: [ Num(2) Size(0x10) ]
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget);

	// Object: Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x999ecf0
	// Params: [ Num(1) Size(0x8) ]
	void RemoveAllWidgets(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x999fae8
	// Params: [ Num(5) Size(0x1E) ]
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x999f8e4
	// Params: [ Num(2) Size(0x40) ]
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportSize
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f998
	// Params: [ Num(2) Size(0x10) ]
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetViewportScale
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x999fa40
	// Params: [ Num(2) Size(0xC) ]
	float GetViewportScale(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x999f830
	// Params: [ Num(2) Size(0x40) ]
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x999f610
	// Params: [ Num(4) Size(0x11) ]
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x999f754
	// Params: [ Num(2) Size(0x10) ]
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject);

	// Object: Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x999f7fc
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetMousePositionOnPlatform();
};

// Object: Class UMG.WidgetNavigation
// Size: 0x100 (Inherited: 0x28)
struct UWidgetNavigation : UObject
{
	struct FWidgetNavigationData Up; // 0x28(0x24)
	struct FWidgetNavigationData Down; // 0x4C(0x24)
	struct FWidgetNavigationData Left; // 0x70(0x24)
	struct FWidgetNavigationData Right; // 0x94(0x24)
	struct FWidgetNavigationData Next; // 0xB8(0x24)
	struct FWidgetNavigationData Previous; // 0xDC(0x24)
};

// Object: Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	uint8_t HorizontalAlignment; // 0x50(0x1)
	uint8_t VerticalAlignment; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)


	// Object: Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a2100
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.WidgetSwitcherSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a2250
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a21a8
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : UObject
{
	struct UWidget* RootWidget; // 0x28(0x8)
};

// Object: Class UMG.WindowTitleBarArea
// Size: 0x170 (Inherited: 0x158)
struct UWindowTitleBarArea : UContentWidget
{
	bool bWindowButtonsEnabled; // 0x151(0x1)
	bool bDoubleClickTogglesFullscreen; // 0x152(0x1)
	uint8_t Pad_0x15A[0x16]; // 0x15A(0x16)


	// Object: Function UMG.WindowTitleBarArea.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a29d0
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.WindowTitleBarArea.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a2b20
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WindowTitleBarArea.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a2a78
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	uint8_t HorizontalAlignment; // 0x48(0x1)
	uint8_t VerticalAlignment; // 0x49(0x1)
	uint8_t Pad_0x4A[0x16]; // 0x4A(0x16)


	// Object: Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a2e5c
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.WindowTitleBarAreaSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a2fac
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a2f04
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);
};

// Object: Class UMG.WrapBox
// Size: 0x178 (Inherited: 0x158)
struct UWrapBox : UPanelWidget
{
	struct FVector2D InnerSlotPadding; // 0x154(0x8)
	float WrapWidth; // 0x15C(0x4)
	bool bExplicitWrapWidth; // 0x160(0x1)
	uint8_t Pad_0x165[0x13]; // 0x165(0x13)


	// Object: Function UMG.WrapBox.SetSetWrapWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a342c
	// Params: [ Num(1) Size(0x4) ]
	void SetSetWrapWidth(float InWrapWidth);

	// Object: Function UMG.WrapBox.SetInnerSlotPadding
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x99a34d4
	// Params: [ Num(1) Size(0x8) ]
	void SetInnerSlotPadding(struct FVector2D InPadding);

	// Object: Function UMG.WrapBox.AddChildToWrapBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a337c
	// Params: [ Num(2) Size(0x10) ]
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content);
};

// Object: Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot
{
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float FillSpanWhenLessThan; // 0x4C(0x4)
	uint8_t HorizontalAlignment; // 0x50(0x1)
	uint8_t VerticalAlignment; // 0x51(0x1)
	uint8_t Pad_0x52[0xE]; // 0x52(0xE)


	// Object: Function UMG.WrapBoxSlot.SetVerticalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a3954
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlignment(uint8_t InVerticalAlignment);

	// Object: Function UMG.WrapBoxSlot.SetPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a3bfc
	// Params: [ Num(1) Size(0x10) ]
	void SetPadding(struct FMargin InPadding);

	// Object: Function UMG.WrapBoxSlot.SetHorizontalAlignment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a39fc
	// Params: [ Num(1) Size(0x1) ]
	void SetHorizontalAlignment(uint8_t InHorizontalAlignment);

	// Object: Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a3aa4
	// Params: [ Num(1) Size(0x4) ]
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);

	// Object: Function UMG.WrapBoxSlot.SetFillEmptySpace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x99a3b4c
	// Params: [ Num(1) Size(0x1) ]
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// Object: WidgetBlueprintGeneratedClass UMG.Default__WidgetBlueprintGeneratedClass
// Size: 0x0 (Inherited: 0x0)
struct Default__WidgetBlueprintGeneratedClass
{
};

} // namespace SDK
