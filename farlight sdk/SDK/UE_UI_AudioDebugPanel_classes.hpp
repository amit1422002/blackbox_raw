// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_AudioDebugPanel.UI_AudioDebugPanel_C
// Size: 0x6D0 (Inherited: 0x600)
struct UUI_AudioDebugPanel_C : USolarUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x8)
	struct UButton* Button_Close; // 0x608(0x8)
	struct UUI_AudioDebugButton_C* Button_Delete; // 0x610(0x8)
	struct UUI_AudioDebugButton_C* Button_Disable; // 0x618(0x8)
	struct UUI_AudioDebugButton_C* Button_Enable; // 0x620(0x8)
	struct UUI_AudioDebugButton_C* Button_NotUseSubShootPattern; // 0x628(0x8)
	struct UUI_AudioDebugButton_C* Button_Spawn; // 0x630(0x8)
	struct UUI_AudioDebugButton_C* Button_UseEmitterData; // 0x638(0x8)
	struct UUI_AudioDebugButton_C* Button_UseLocalWeaponData; // 0x640(0x8)
	struct UUI_AudioDebugButton_C* Button_UseSubShootPattern; // 0x648(0x8)
	struct UComboBoxString* ComboBox_Select; // 0x650(0x8)
	struct UUI_AudioDebugEditableText_C* EditableText_CircularRadius; // 0x658(0x8)
	struct UUI_AudioDebugEditableText_C* EditableText_CircularSpeed; // 0x660(0x8)
	struct UUI_AudioDebugEditableText_C* EditableText_LoopDuration; // 0x668(0x8)
	struct UEditableText* EditableText_Name; // 0x670(0x8)
	struct UUI_AudioDebugEditableText_C* EditableText_PatrolDistance; // 0x678(0x8)
	struct UUI_AudioDebugEditableText_C* EditableText_PatrolSpeed; // 0x680(0x8)
	struct UUI_AudioDebugEditableText_C* EditableText_PlayInterval; // 0x688(0x8)
	struct UUI_AudioDebugTextBlock_C* UI_AudioDebugTextBlock; // 0x690(0x8)
	struct UUI_AudioDebugTextBlock_C* UI_AudioDebugTextBlock_1; // 0x698(0x8)
	struct UUI_AudioDebugTextBlock_C* UI_AudioDebugTextBlock_2; // 0x6A0(0x8)
	struct UUI_AudioDebugTextBlock_C* UI_AudioDebugTextBlock_3; // 0x6A8(0x8)
	struct UUI_AudioDebugTextBlock_C* UI_AudioDebugTextBlock_4; // 0x6B0(0x8)
	struct UUI_AudioDebugTextBlock_C* UI_AudioDebugTextBlock_5; // 0x6B8(0x8)
	struct UUI_AudioDebugTextBlock_C* UI_AudioDebugTextBlock_6; // 0x6C0(0x8)
	struct UUI_AudioDebugTextBlock_C* UI_AudioDebugTextBlock_40; // 0x6C8(0x8)


	// Object: Function UI_AudioDebugPanel.UI_AudioDebugPanel_C.OnNameChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnNameChanged(struct FString NewName);

	// Object: Function UI_AudioDebugPanel.UI_AudioDebugPanel_C.BndEvt__EditableText_Name_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	// Flags: [HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x19) ]
	void BndEvt__EditableText_Name_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, uint8_t CommitMethod);

	// Object: Function UI_AudioDebugPanel.UI_AudioDebugPanel_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

	// Object: Function UI_AudioDebugPanel.UI_AudioDebugPanel_C.BndEvt__ComboBox_Select_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__ComboBox_Select_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature();

	// Object: Function UI_AudioDebugPanel.UI_AudioDebugPanel_C.BndEvt__ComboBox_Select_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x11) ]
	void BndEvt__ComboBox_Select_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, uint8_t SelectionType);

	// Object: Function UI_AudioDebugPanel.UI_AudioDebugPanel_C.ExecuteUbergraph_UI_AudioDebugPanel
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_AudioDebugPanel(int32_t EntryPoint);
};

} // namespace SDK
