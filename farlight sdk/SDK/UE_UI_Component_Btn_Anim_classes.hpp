// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_Component_Btn_Anim.UI_Component_Btn_Anim_C
// Size: 0x690 (Inherited: 0x600)
struct UUI_Component_Btn_Anim_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct UWidgetAnimation* Anim_Sel; // 0x608(0x8)
	struct UImage* Img_Sel_Glow; // 0x610(0x8)
	struct UImage* Img_Sel_L_01; // 0x618(0x8)
	struct UImage* Img_Sel_L_02; // 0x620(0x8)
	struct UImage* Img_Sel_L_Glow; // 0x628(0x8)
	struct UImage* Img_Sel_R_01; // 0x630(0x8)
	struct UImage* Img_Sel_R_02; // 0x638(0x8)
	struct UImage* Img_Sel_R_Glow; // 0x640(0x8)
	struct UCanvasPanel* Panel_Sel_Anim; // 0x648(0x8)
	struct USizeBox* Size_Btn; // 0x650(0x8)
	uint8_t BtnType; // 0x658(0x1)
	uint8_t Pad_0x659[0x7]; // 0x659(0x7)
	struct FMulticastInlineDelegate OnClicked; // 0x660(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x670(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x680(0x10)


	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.SetPressed
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void SetPressed();

	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.StopAnims
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void StopAnims();

	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.PlaySelAnim
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void PlaySelAnim();

	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.SetBtnType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetBtnType(uint8_t Type);

	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.ExecuteUbergraph_UI_Component_Btn_Anim
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_Component_Btn_Anim(int32_t EntryPoint);

	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.OnReleased__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnReleased__DelegateSignature();

	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.OnClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked__DelegateSignature();

	// Object: Function UI_Component_Btn_Anim.UI_Component_Btn_Anim_C.OnPressed__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnPressed__DelegateSignature();
};

} // namespace SDK
