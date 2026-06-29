// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_Update.UI_Update_C
// Size: 0x7B8 (Inherited: 0x600)
struct UUI_Update_C : UUpdateWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct UWidgetAnimation* Anim_Enter; // 0x608(0x8)
	struct UUI_Component_Btn_C* Btn_Account; // 0x610(0x8)
	struct UButton* Btn_AgeLimit; // 0x618(0x8)
	struct UUI_Component_Btn_C* Btn_Bind_ActivationCode; // 0x620(0x8)
	struct UUI_Component_Btn_C* Btn_Bind_PhoneNumber; // 0x628(0x8)
	struct UButton* Btn_Fix; // 0x630(0x8)
	struct UUI_Component_Btn_C* btn_link; // 0x638(0x8)
	struct UButton* Btn_Mute; // 0x640(0x8)
	struct UUI_Update_Server_Btn_C* Btn_National; // 0x648(0x8)
	struct UUI_Component_Btn_C* btn_new; // 0x650(0x8)
	struct UButton* Btn_Normal; // 0x658(0x8)
	struct UButton* Btn_Notice; // 0x660(0x8)
	struct UUI_Update_Server_Btn_C* Btn_OutSide; // 0x668(0x8)
	struct UUI_Update_Server_Btn_C* Btn_Server; // 0x670(0x8)
	struct UButton* Btn_Verify; // 0x678(0x8)
	struct UUI_Component_Btn_C* Btn_Vistor; // 0x680(0x8)
	struct UCanvasPanel* CanvasPanel_1; // 0x688(0x8)
	struct UCanvasPanel* CanvasPanel_Server; // 0x690(0x8)
	struct UHorizontalBox* HorizontalBox_0; // 0x698(0x8)
	struct UHorizontalBox* HorizontalBox_1; // 0x6A0(0x8)
	struct UImage* Image_172; // 0x6A8(0x8)
	struct UImage* Img_Bg; // 0x6B0(0x8)
	struct UImage* Img_Bg_Update; // 0x6B8(0x8)
	struct USolarImage* Img_Logo; // 0x6C0(0x8)
	struct UImage* Img_Mask; // 0x6C8(0x8)
	struct UUI_KeyPrompt_C* KeyBack; // 0x6D0(0x8)
	struct UCanvasPanel* Panel_Load; // 0x6D8(0x8)
	struct UCanvasPanel* Panel_Server; // 0x6E0(0x8)
	struct UProgressBar* ProgressBar_Download; // 0x6E8(0x8)
	struct USafeZone* SafeZone_129; // 0x6F0(0x8)
	struct USizeBox* SizeBox_Fix; // 0x6F8(0x8)
	struct USizeBox* SizeBox_Notice; // 0x700(0x8)
	struct USizeBox* SizeBox_Verify; // 0x708(0x8)
	struct USizeBox* SizeBox_Volume; // 0x710(0x8)
	struct UButton* StartGame; // 0x718(0x8)
	struct USolarTextBlock* StartGameText; // 0x720(0x8)
	struct UTileView* TileView_ServerList; // 0x728(0x8)
	struct USolarTextBlock* Txt_GameInfo_CN; // 0x730(0x8)
	struct UTextBlock* Txt_LatestBuildNumber; // 0x738(0x8)
	struct USolarTextBlock* Txt_Progress; // 0x740(0x8)
	struct USolarTextBlock* Txt_Schedule; // 0x748(0x8)
	struct UTextBlock* Txt_SourceBuildNumber; // 0x750(0x8)
	struct USolarTextBlock* Txt_Speed; // 0x758(0x8)
	struct USolarTextBlock* Txt_Tips_1; // 0x760(0x8)
	struct UUI_Component_Hover_Square_0px_C* UI_Btn_Fix; // 0x768(0x8)
	struct UUI_Component_Hover_Square_0px_C* UI_Btn_Notice; // 0x770(0x8)
	struct UUI_Component_Hover_Square_0px_C* UI_Btn_Verify; // 0x778(0x8)
	struct UUI_Component_Hover_Square_0px_C* UI_Btn_Volume; // 0x780(0x8)
	struct UUI_Update_UID_C* UI_Update_UID; // 0x788(0x8)
	struct UUI_UpdateLoadingBase_C* UpdateLoadingBase; // 0x790(0x8)
	struct UWidgetSwitcher* wgs_start; // 0x798(0x8)
	struct UWidgetSwitcher* WidgetSwitcher_Volume; // 0x7A0(0x8)
	struct UMediaPlayer* ClearMediaPlayer; // 0x7A8(0x8)
	struct UMediaPlayer* NoClearMediaPlayer; // 0x7B0(0x8)


	// Object: DelegateFunction UI_Update.UI_Update_C.OnMediaOpened_00C71F2008DED202D54EEEC287DB075C
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(1) Size(0x10) ]
	void OnMediaOpened_00C71F2008DED202D54EEEC287DB075C(struct FString OpenedUrl);

	// Object: DelegateFunction UI_Update.UI_Update_C.OnAssetManagerPreloadCompleted_00BDF79408DED202D507304687D3DAB6
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnAssetManagerPreloadCompleted_00BDF79408DED202D507304687D3DAB6();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnHandleLuaException_00BC1DE008DED202D507288087D3D9F0
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(2) Size(0x20) ]
	void OnHandleLuaException_00BC1DE008DED202D507288087D3D9F0(struct FString ErrorMsg, struct FString StaceTrace);

	// Object: DelegateFunction UI_Update.UI_Update_C.OnReleased_00BA1D7A08DED202D501D91687D351FD
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnReleased_00BA1D7A08DED202D501D91687D351FD();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00B9EC8208DED202D501D63C87D351B4
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B9EC8208DED202D501D63C87D351B4();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00B8494408DED202D501D21887D3514A
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B8494408DED202D501D21887D3514A();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00B77E6D08DED202D501CFC087D3510E
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B77E6D08DED202D501CFC087D3510E();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00B6E5FE08DED202D501C93A87D35067
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B6E5FE08DED202D501C93A87D35067();

	// Object: Function UI_Update.UI_Update_C.OnClicked_00B5EF9B08DED202D501C6D887D3502A
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B5EF9B08DED202D501C6D887D3502A();

	// Object: Function UI_Update.UI_Update_C.OnClicked_00B4424808DED202D501C3C287D34FDB
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B4424808DED202D501C3C287D34FDB();

	// Object: Function UI_Update.UI_Update_C.OnClicked_00B3774E08DED202D501C16A87D34FA0
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B3774E08DED202D501C16A87D34FA0();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00B26D7708DED202D501C04887D34F82
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B26D7708DED202D501C04887D34F82();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00B1812B08DED202D501BEB887D34F5A
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B1812B08DED202D501BEB887D34F5A();

	// Object: Function UI_Update.UI_Update_C.OnClicked_00B0D2D008DED202D501B95487D34ED0
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00B0D2D008DED202D501B95487D34ED0();

	// Object: Function UI_Update.UI_Update_C.OnClicked_00AF94E908DED202D501B83287D34EB3
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00AF94E908DED202D501B83287D34EB3();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00AE775F08DED202D501B72487D34E98
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00AE775F08DED202D501B72487D34E98();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00ADA34608DED202D501B62087D34E7E
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00ADA34608DED202D501B62087D34E7E();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00AC138B08DED202D501B23887D34E1B
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00AC138B08DED202D501B23887D34E1B();

	// Object: DelegateFunction UI_Update.UI_Update_C.OnClicked_00ABAABE08DED202D501AA7287D34D54
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x33863e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClicked_00ABAABE08DED202D501AA7287D34D54();

	// Object: Function UI_Update.UI_Update_C.OnSolarUIClosed
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnSolarUIClosed();

	// Object: Function UI_Update.UI_Update_C.RequestQuitGame
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void RequestQuitGame();

	// Object: Function UI_Update.UI_Update_C.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void Destruct();

	// Object: Function UI_Update.UI_Update_C.ReceiveTick
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(2) Size(0x3C) ]
	void ReceiveTick(struct FGeometry& MyGeometry, float InDeltaTime);

	// Object: Function UI_Update.UI_Update_C.OnSolarUIOpened
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnSolarUIOpened();

	// Object: Function UI_Update.UI_Update_C.TryConnectGate
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void TryConnectGate();

	// Object: Function UI_Update.UI_Update_C.OnInitialized
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnInitialized();

	// Object: Function UI_Update.UI_Update_C.GetModuleName
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetModuleName();

	// Object: Function UI_Update.UI_Update_C.TextureArrayTestFunc
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void TextureArrayTestFunc();

	// Object: Function UI_Update.UI_Update_C.RefreshLoadingPointsAr
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void RefreshLoadingPointsAr(int32_t Index);

	// Object: Function UI_Update.UI_Update_C.RefreshLoadingPoints
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void RefreshLoadingPoints(int32_t Index);

	// Object: Function UI_Update.UI_Update_C.OnVideoReady
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnVideoReady();

	// Object: Function UI_Update.UI_Update_C.FinishLoadLobby
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void FinishLoadLobby(int32_t Type);

	// Object: Function UI_Update.UI_Update_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_Update.UI_Update_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x3C) ]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime);

	// Object: Function UI_Update.UI_Update_C.ExecuteUbergraph_UI_Update
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_Update(int32_t EntryPoint);
};

} // namespace SDK
