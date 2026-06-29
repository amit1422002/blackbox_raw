// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_UpdateLoadingBase.UI_UpdateLoadingBase_C
// Size: 0x748 (Inherited: 0x738)
struct UUI_UpdateLoadingBase_C : UUI_LoadingBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x738(0x8)
	struct USolarTextBlock* Txt_Tips_Title; // 0x740(0x8)


	// Object: Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetPercentText
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x18) ]
	void SetPercentText(struct FText NewParam);

	// Object: Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetImgBgHidden
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void SetImgBgHidden();

	// Object: Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x3C) ]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime);

	// Object: Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.ExecuteUbergraph_UI_UpdateLoadingBase
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_UpdateLoadingBase(int32_t EntryPoint);
};

} // namespace SDK
