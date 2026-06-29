// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_AudioDebugTextBlock.UI_AudioDebugTextBlock_C
// Size: 0x638 (Inherited: 0x600)
struct UUI_AudioDebugTextBlock_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct USizeBox* SizeBox_25; // 0x608(0x8)
	struct UEditableTextBox* TextBox; // 0x610(0x8)
	struct FText Text; // 0x618(0x18)
	struct FVector2D BoxSize; // 0x630(0x8)


	// Object: Function UI_AudioDebugTextBlock.UI_AudioDebugTextBlock_C.SetupBox
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void SetupBox();

	// Object: Function UI_AudioDebugTextBlock.UI_AudioDebugTextBlock_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_AudioDebugTextBlock.UI_AudioDebugTextBlock_C.ExecuteUbergraph_UI_AudioDebugTextBlock
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_AudioDebugTextBlock(int32_t EntryPoint);
};

} // namespace SDK
