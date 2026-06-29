// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_Component_PlayerHead.UI_Component_PlayerHead_C
// Size: 0x6EF (Inherited: 0x600)
struct UUI_Component_PlayerHead_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct USolarButton* Btn_Click; // 0x608(0x8)
	struct USolarMenuButton* Btn_Hover; // 0x610(0x8)
	struct UCanvasPanel* Canvas_Frame; // 0x618(0x8)
	struct USolarImageURL* Img_Avatar; // 0x620(0x8)
	struct UImage* Img_AvatarFrame; // 0x628(0x8)
	struct UImage* Img_Bg; // 0x630(0x8)
	struct UImage* Img_BGLine; // 0x638(0x8)
	struct UImage* Img_BlackFrame; // 0x640(0x8)
	struct UImage* Img_Empty; // 0x648(0x8)
	struct UImage* Img_Gender; // 0x650(0x8)
	struct UImage* Img_Gender_Bg; // 0x658(0x8)
	struct UImage* Img_Hover; // 0x660(0x8)
	struct UImage* Img_Social; // 0x668(0x8)
	struct UOverlay* Overlay_Normal; // 0x670(0x8)
	struct UCanvasPanel* Panel_FrameAnim; // 0x678(0x8)
	struct UCanvasPanel* Panel_Wave; // 0x680(0x8)
	struct USizeBox* Size_1; // 0x688(0x8)
	struct USizeBox* Size_2; // 0x690(0x8)
	struct USizeBox* Size_Avatar; // 0x698(0x8)
	struct UUI_Social_SocialPanel_Menu_C* SocialPanel_Menu; // 0x6A0(0x8)
	struct UUI_Chat_Wave_C* UI_Chat_Wave; // 0x6A8(0x8)
	struct UWidgetSwitcher* WidgetSwitcher_Avatar; // 0x6B0(0x8)
	bool ShowBusinessCardBtn; // 0x6B8(0x1)
	uint8_t Pad_0x6B9[0x7]; // 0x6B9(0x7)
	struct FMulticastInlineDelegate OnClicked; // 0x6C0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x6D0(0x10)
	bool IsNonuseFrame; // 0x6E0(0x1)
	bool Empty; // 0x6E1(0x1)
	uint8_t Social; // 0x6E2(0x1)
	bool GenderOn; // 0x6E3(0x1)
	uint8_t Gender; // 0x6E4(0x1)
	uint8_t Pad_0x6E5[0x3]; // 0x6E5(0x3)
	float Size; // 0x6E8(0x4)
	uint8_t StateHD; // 0x6EC(0x1)
	bool IsCustom; // 0x6ED(0x1)
	bool IsBlackFrame; // 0x6EE(0x1)


	// Object: DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_00BB471208DED202D505E7D687D3B9DE
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00BB471208DED202D505E7D687D3B9DE();

	// Object: DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_00AA90EB08DED202D4FBE20487D2B94A
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(1) Size(0x1) ]
	void OnURLDownloadFinish_00AA90EB08DED202D4FBE20487D2B94A(bool bSuccess);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.RefreshByPSCopy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x9) ]
	void RefreshByPSCopy(struct ASolarPlayerState* PS, bool bWithoutGender);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnSolarUIClosed
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnSolarUIClosed();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnSolarUIOpened
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnSolarUIOpened();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnMouseEnter
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0xA8) ]
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ForceShowFrameCopy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ForceShowFrameCopy(int32_t FrameID);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ConstructCopy
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void ConstructCopy();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x70) ]
	void OnMouseLeave(struct FPointerEvent& MouseEvent);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarCopy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x18) ]
	void SetAvatarCopy(int32_t AvatarID, struct FString AvatarURL);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void Destruct();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnInitialized
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnInitialized();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.GetModuleName
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetModuleName();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetBlackFrame
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetBlackFrame(bool IsBlackFrame);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ForceShowFrame
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(1) Size(0x4) ]
	void ForceShowFrame(int32_t FrameID);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.RefreshByPS
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x9) ]
	void RefreshByPS(struct ASolarPlayerState* PS, bool bWithoutGender);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarSize
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetAvatarSize(bool IsCustom);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatar
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x18) ]
	void SetAvatar(int32_t AvatarID, struct FString AvatarURL);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetStateHD
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetStateHD(uint8_t StateHD);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetDefaultSteamAvatar
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void SetDefaultSteamAvatar();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x160) ]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetAvatarState(bool IsCollapsed);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void SetAvatarIcon(int32_t InAvatarID);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetEmptyState
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetEmptyState(bool IsEmpty);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetPlayerGender
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetPlayerGender(uint8_t Gender);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetSocialIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetSocialIcon(uint8_t Social);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Update
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void Update();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void Construct();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_Hover_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__Btn_Hover_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_Hover_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__Btn_Hover_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__Btn_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ExecuteUbergraph_UI_Component_PlayerHead
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_Component_PlayerHead(int32_t EntryPoint);

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnReleased__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnReleased__DelegateSignature();

	// Object: Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked__DelegateSignature();
};

} // namespace SDK
