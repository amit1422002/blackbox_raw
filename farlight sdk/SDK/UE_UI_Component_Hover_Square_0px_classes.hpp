// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C
// Size: 0x6A0 (Inherited: 0x600)
struct UUI_Component_Hover_Square_0px_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct UWidgetAnimation* Anim_Hover_BackUp; // 0x608(0x8)
	struct UWidgetAnimation* Anim_Hover; // 0x610(0x8)
	struct UNamedSlot* Content; // 0x618(0x8)
	struct UNamedSlot* Content_High; // 0x620(0x8)
	struct UImage* Img_Frame_Hover; // 0x628(0x8)
	struct UImage* Img_Frame_Sel; // 0x630(0x8)
	struct UImage* Img_Glow_Hover; // 0x638(0x8)
	struct UCanvasPanel* Panel_Hover; // 0x640(0x8)
	bool Hover; // 0x648(0x1)
	bool Select; // 0x649(0x1)
	uint8_t Pad_0x64A[0x2]; // 0x64A(0x2)
	float MobileBorderWidth; // 0x64C(0x4)
	float PCBorderWidth; // 0x650(0x4)
	bool HightLightSound; // 0x654(0x1)
	uint8_t Pad_0x655[0x3]; // 0x655(0x3)
	float OuterSize; // 0x658(0x4)
	struct FLinearColor SelFrameColor; // 0x65C(0x10)
	struct FLinearColor HoverFrameColor; // 0x66C(0x10)
	bool SizeToContent; // 0x67C(0x1)
	bool bCloseHover; // 0x67D(0x1)
	uint8_t Pad_0x67E[0x2]; // 0x67E(0x2)
	struct FMulticastInlineDelegate OnMouseEnterDispatcher; // 0x680(0x10)
	struct FMulticastInlineDelegate OnMouseLeaveDispatcher; // 0x690(0x10)


	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.ConstructSetHover
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void ConstructSetHover(bool IsHovered);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.SetOpen
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetOpen(bool bOpen);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.SetSizeToContent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetSizeToContent(bool SizeToContent);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.SetSelect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetSelect(bool Select);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.SetHover
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetHover(bool Hover);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.OnMouseEnter
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xA8) ]
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x70) ]
	void OnMouseLeave(struct FPointerEvent& MouseEvent);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.ReceivePlatformLayout
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void ReceivePlatformLayout(enum class EUSolarWidgetLayoutType InLayoutType);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.ExecuteUbergraph_UI_Component_Hover_Square_0px
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_Component_Hover_Square_0px(int32_t EntryPoint);

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.OnMouseLeaveDispatcher__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnMouseLeaveDispatcher__DelegateSignature();

	// Object: Function UI_Component_Hover_Square_0px.UI_Component_Hover_Square_0px_C.OnMouseEnterDispatcher__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnMouseEnterDispatcher__DelegateSignature();
};

} // namespace SDK
