// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_AudioDebugEditableText.UI_AudioDebugEditableText_C
// Size: 0x630 (Inherited: 0x600)
struct UUI_AudioDebugEditableText_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct UEditableText* EditableText_28; // 0x608(0x8)
	struct FString ConsoleCommand; // 0x610(0x10)
	struct FString EmitterName; // 0x620(0x10)


	// Object: Function UI_AudioDebugEditableText.UI_AudioDebugEditableText_C.OnNameChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnNameChanged(struct FString Name);

	// Object: Function UI_AudioDebugEditableText.UI_AudioDebugEditableText_C.BndEvt__EditableText_28_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	// Flags: [HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x19) ]
	void BndEvt__EditableText_28_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, uint8_t CommitMethod);

	// Object: Function UI_AudioDebugEditableText.UI_AudioDebugEditableText_C.ExecuteUbergraph_UI_AudioDebugEditableText
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_AudioDebugEditableText(int32_t EntryPoint);
};

} // namespace SDK
