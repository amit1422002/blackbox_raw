#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_Component_Btn.UI_Component_Btn_C
// Size: 0x780 (Inherited: 0x608)
struct UUI_Component_Btn_C : UComponentButtonBaseWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x8)
	struct UWidgetAnimation* Anim_Guide_Loop; // 0x610(0x8)
	struct UWidgetAnimation* Anim_Enter; // 0x618(0x8)
	struct UWidgetAnimation* Anim_Sel; // 0x620(0x8)
	struct UWidgetAnimation* Anim_Hover; // 0x628(0x8)
	struct UHorizontalBox* HorizontalBox_1; // 0x630(0x8)
	struct UImage* Img_BtnBg_BottomLine; // 0x638(0x8)
	struct UImage* Img_BtnBg_Main; // 0x640(0x8)
	struct UImage* Img_Hover_Loop_Glow; // 0x648(0x8)
	struct UImage* Img_Hover_Loop_Point; // 0x650(0x8)
	struct USolarImage* Img_Icon; // 0x658(0x8)
	struct UUI_KeyPrompt_C* Key; // 0x660(0x8)
	struct UOverlay* Overlay_BtnBg; // 0x668(0x8)
	struct UCanvasPanel* Panel_Hover_Anim; // 0x670(0x8)
	struct UScaleBox* ScaleBox; // 0x678(0x8)
	struct USizeBox* Size_Btn; // 0x680(0x8)
	struct USizeBox* Size_Icon; // 0x688(0x8)
	struct USolarAdapterWidget* SolarAdapterWidget_Anim; // 0x690(0x8)
	struct USolarTextBlock* Text_Btn; // 0x698(0x8)
	struct UNamedSlot* WidgetSlot; // 0x6A0(0x8)
	uint8_t BtnType; // 0x6A8(0x1)
	uint8_t BtnState; // 0x6A9(0x1)
	uint8_t Pad_0x6AA[0x2]; // 0x6AA(0x2)
	struct FVector2D MobileBtnSize; // 0x6AC(0x8)
	struct FVector2D PCBtnSize; // 0x6B4(0x8)
	bool IsUseBtnImag; // 0x6BC(0x1)
	bool IsUseText; // 0x6BD(0x1)
	uint8_t Pad_0x6BE[0x2]; // 0x6BE(0x2)
	struct FString Text; // 0x6C0(0x10)
	bool IsUseLocID; // 0x6D0(0x1)
	uint8_t Pad_0x6D1[0x3]; // 0x6D1(0x3)
	int32_t LocID; // 0x6D4(0x4)
	enum class ESolarSupportLanguages PreviewLang; // 0x6D8(0x1)
	uint8_t Pad_0x6D9[0x7]; // 0x6D9(0x7)
	struct FMulticastInlineDelegate OnClicked; // 0x6E0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x6F0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x700(0x10)
	bool IsIcon; // 0x710(0x1)
	uint8_t Pad_0x711[0x7]; // 0x711(0x7)
	struct UObject* Icon; // 0x718(0x8)
	struct FLinearColor IconColor; // 0x720(0x10)
	struct FVector2D MobileIcon_Size; // 0x730(0x8)
	struct FVector2D PCIcon_Size; // 0x738(0x8)
	struct FSoftObjectPath OnClickedSound; // 0x740(0x18)
	bool Hover; // 0x758(0x1)
	bool ShowKey; // 0x759(0x1)
	uint8_t Pad_0x75A[0x6]; // 0x75A(0x6)
	struct FString KeyActionName; // 0x760(0x10)
	struct FMulticastInlineDelegate OnClickedDisable; // 0x770(0x10)


	// Object: Function UI_Component_Btn.UI_Component_Btn_C.SetButtonType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetButtonType(uint8_t BtnType);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.CanPlayBtnAnim
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void CanPlayBtnAnim(bool& bCanPlayAnim);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.PlaySelAnim
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void PlaySelAnim();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.SetLocID
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void SetLocID(int32_t LocID);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.SetShowKey
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x18) ]
	void SetShowKey(bool ShowKey, struct FString KeyActionName);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.SetBtnSize
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x14) ]
	void SetBtnSize(enum class EUSolarWidgetLayoutType InLayoutType, struct FVector2D MobileBtnSize, struct FVector2D PCBtnSize);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.StopAnims
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void StopAnims();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.IsAvailable
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void IsAvailable(bool& Availble);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.SetBtnTxt
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SetBtnTxt(struct FString NewParam);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.SetBtnState
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetBtnState(uint8_t State);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.GetLocalText
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLocalText();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.Update
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void Update(bool IsDesignTime);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.SetBtnText
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x11) ]
	void SetBtnText(struct FString 	c®”, uint8_t 	c®”);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.OnLocalLangChangedEx
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnLocalLangChangedEx(struct FString InLang);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.ReceivePlatformLayout
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void ReceivePlatformLayout(enum class EUSolarWidgetLayoutType InLayoutType);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.SetButtonEnable
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetButtonEnable(bool bEnable);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.PlayGuideAnim
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PlayGuideAnim(bool Enable);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.ExecuteUbergraph_UI_Component_Btn
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_Component_Btn(int32_t EntryPoint);

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.OnClickedDisable__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedDisable__DelegateSignature();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.OnReleased__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnReleased__DelegateSignature();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.OnClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked__DelegateSignature();

	// Object: Function UI_Component_Btn.UI_Component_Btn_C.OnPressed__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnPressed__DelegateSignature();
};

} // namespace SDK
