// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_Update_Server_Btn.UI_Update_Server_Btn_C
// Size: 0x675 (Inherited: 0x600)
struct UUI_Update_Server_Btn_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct UButton* Btn_Server; // 0x608(0x8)
	struct UImage* Img_Arrow; // 0x610(0x8)
	struct UImage* Img_Bg_2; // 0x618(0x8)
	struct USizeBox* SizeBox_Serverc; // 0x620(0x8)
	struct USolarTextBlock* Txt_ms; // 0x628(0x8)
	struct USolarTextBlock* Txt_Server; // 0x630(0x8)
	struct UUI_Component_Hover_Square_0px_C* UI_Component_Hover_Square_0px; // 0x638(0x8)
	struct FText Text; // 0x640(0x18)
	bool IsLoc; // 0x658(0x1)
	uint8_t Pad_0x659[0x3]; // 0x659(0x3)
	int32_t LocID; // 0x65C(0x4)
	bool IsInternationalServer; // 0x660(0x1)
	bool State; // 0x661(0x1)
	uint8_t Pad_0x662[0x2]; // 0x662(0x2)
	struct FVector2D MobileSize; // 0x664(0x8)
	struct FVector2D PCSize; // 0x66C(0x8)
	uint8_t LobbyLatency; // 0x674(0x1)


	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.RefreshLatencyTxtColor
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void RefreshLatencyTxtColor(int32_t NewParam);

	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.SetState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetState(bool State);

	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.SetInternationalServer
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetInternationalServer(bool IsInternationalServer);

	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.Set Is Select
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void Set Is Select(bool Index);

	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.OnMouseEnter
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xA8) ]
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent);

	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x70) ]
	void OnMouseLeave(struct FPointerEvent& MouseEvent);

	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.ReceivePlatformLayout
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void ReceivePlatformLayout(enum class EUSolarWidgetLayoutType InLayoutType);

	// Object: Function UI_Update_Server_Btn.UI_Update_Server_Btn_C.ExecuteUbergraph_UI_Update_Server_Btn
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_Update_Server_Btn(int32_t EntryPoint);
};

} // namespace SDK
