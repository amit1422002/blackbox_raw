// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_AudioDebugButton.UI_AudioDebugButton_C
// Size: 0x674 (Inherited: 0x600)
struct UUI_AudioDebugButton_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct UButton* Button_35; // 0x608(0x8)
	struct USizeBox* SizeBox_20; // 0x610(0x8)
	struct UTextBlock* TextBlock_18; // 0x618(0x8)
	struct FText Text; // 0x620(0x18)
	struct FVector2D BoxSize; // 0x638(0x8)
	struct FString ConsoleCommand; // 0x640(0x10)
	struct FString EmitterName; // 0x650(0x10)
	struct FString paramTwo; // 0x660(0x10)
	int32_t ParamNum; // 0x670(0x4)


	// Object: Function UI_AudioDebugButton.UI_AudioDebugButton_C.OnParamTwoChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnParamTwoChanged(struct FString paramTwo);

	// Object: Function UI_AudioDebugButton.UI_AudioDebugButton_C.OnNameChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnNameChanged(struct FString Name);

	// Object: Function UI_AudioDebugButton.UI_AudioDebugButton_C.BndEvt__Button_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__Button_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();

	// Object: Function UI_AudioDebugButton.UI_AudioDebugButton_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_AudioDebugButton.UI_AudioDebugButton_C.ExecuteUbergraph_UI_AudioDebugButton
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_AudioDebugButton(int32_t EntryPoint);
};

} // namespace SDK
