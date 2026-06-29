// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_Social_SocialPanel_Menu.UI_Social_SocialPanel_Menu_C
// Size: 0x618 (Inherited: 0x600)
struct UUI_Social_SocialPanel_Menu_C : USolarUserWidget
{
	struct UUI_KeyPrompt_C* Key_Menu; // 0x600(0x8)
	struct UUI_Component_Hover_Square_0px_C* UI_Component_Hover_Square_0px; // 0x608(0x8)
	struct UUI_Component_Tips_Bg_C* UI_Component_Tips_Bg; // 0x610(0x8)


	// Object: Function UI_Social_SocialPanel_Menu.UI_Social_SocialPanel_Menu_C.OnSolarUIOpened
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnSolarUIOpened();

	// Object: Function UI_Social_SocialPanel_Menu.UI_Social_SocialPanel_Menu_C.OnInitialized
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnInitialized();

	// Object: Function UI_Social_SocialPanel_Menu.UI_Social_SocialPanel_Menu_C.GetModuleName
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetModuleName();
};

} // namespace SDK
