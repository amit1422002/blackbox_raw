// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_Root.UI_Root_C
// Size: 0x699 (Inherited: 0x608)
struct UUI_Root_C : USolarUIRoot
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x8)
	struct UCanvasPanel* BattleNoticeRoot; // 0x610(0x8)
	struct UCanvasPanel* BattleRoot; // 0x618(0x8)
	struct UCanvasPanel* BattleRootGuide; // 0x620(0x8)
	struct UCanvasPanel* BattleRootOverlay; // 0x628(0x8)
	struct UCanvasPanel* CommonRoot; // 0x630(0x8)
	struct UCanvasPanel* ExternalToolsRoot; // 0x638(0x8)
	struct UCanvasPanel* Guide; // 0x640(0x8)
	struct UCanvasPanel* Loading; // 0x648(0x8)
	struct UCanvasPanel* Map; // 0x650(0x8)
	struct UCanvasPanel* MiddleNoticeRoot; // 0x658(0x8)
	struct UCanvasPanel* MiddleRoot; // 0x660(0x8)
	struct UCanvasPanel* NoticeRoot; // 0x668(0x8)
	struct UCanvasPanel* PopRoot; // 0x670(0x8)
	struct UCanvasPanel* Reconnecting; // 0x678(0x8)
	struct UCanvasPanel* TipsRoot; // 0x680(0x8)
	struct UCanvasPanel* UnderBattleRoot; // 0x688(0x8)
	float AdapterOffsetLeft; // 0x690(0x4)
	float AdapterOffsetRight; // 0x694(0x4)
	bool EnableAutoAdaptation; // 0x698(0x1)


	// Object: Function UI_Root.UI_Root_C.OnInitialized
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void OnInitialized();

	// Object: Function UI_Root.UI_Root_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x339edc0
	// Params: [ Num(0) Size(0x0) ]
	void Construct();

	// Object: Function UI_Root.UI_Root_C.GetModuleName
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetModuleName();

	// Object: Function UI_Root.UI_Root_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_Root.UI_Root_C.CustomEvent_0
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x20) ]
	void CustomEvent_0(struct UObject* Publisher, struct UObject* Payload, struct TArray<struct FString>& MetaData);

	// Object: Function UI_Root.UI_Root_C.ExecuteUbergraph_UI_Root
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_Root(int32_t EntryPoint);
};

} // namespace SDK
