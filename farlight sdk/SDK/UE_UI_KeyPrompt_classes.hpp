// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: WidgetBlueprintGeneratedClass UI_KeyPrompt.UI_KeyPrompt_C
// Size: 0x738 (Inherited: 0x650)
struct UUI_KeyPrompt_C : USolarComponentKeyPrompt
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x8)
	uint8_t 7h; // 0x658(0x1)
	uint8_t Pad_0x659[0x7]; // 0x659(0x7)
	struct FS_KeyPrompt KeyPromptCustom; // 0x660(0xB8)
	struct FString CustomText; // 0x718(0x10)
	struct FString HoverSoundEvent; // 0x728(0x10)


	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetKeyMappingHover
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetKeyMappingHover(bool IsHover);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetCustomText
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SetCustomText(struct FString InCustomText);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.UpdateKeyPromptCustomInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0xB8) ]
	void UpdateKeyPromptCustomInfo(struct FS_KeyPrompt CustomInfo);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetProgressBar
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void SetProgressBar();

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetKeyPromptMouseType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetKeyPromptMouseType(uint8_t MouseType);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetKeyPromptDescLocID
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void SetKeyPromptDescLocID(int32_t LocID);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetKeyPromptStyle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetKeyPromptStyle(uint8_t NewParam);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetActionName
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SetActionName(struct FString InActionName);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.RefreshKeyPromptUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshKeyPromptUI();

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(bool IsDesignTime);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetKeyPromptLocID
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void SetKeyPromptLocID(int32_t LocID);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.BndEvt__BtnKey_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__BtnKey_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.BndEvt__BtnKey_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__BtnKey_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.BndEvt__BtnKey_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void BndEvt__BtnKey_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetKeyMappingCustomInfo
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void SetKeyMappingCustomInfo(struct USolarComponentKeyMappingPrompt* KeyMappingPrompt);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.SetKeyMappingStyle
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void SetKeyMappingStyle(struct USolarComponentKeyMappingPrompt* KeyMappingPrompt);

	// Object: Function UI_KeyPrompt.UI_KeyPrompt_C.ExecuteUbergraph_UI_KeyPrompt
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_UI_KeyPrompt(int32_t EntryPoint);
};

} // namespace SDK
