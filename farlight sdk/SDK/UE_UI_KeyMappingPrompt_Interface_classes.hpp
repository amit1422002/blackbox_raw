// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: BlueprintGeneratedClass UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C
// Size: 0x28 (Inherited: 0x28)
struct IUI_KeyMappingPrompt_Interface_C : IInterface
{

	// Object: Function UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C.GetKeyMappingProgressAdapter
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void GetKeyMappingProgressAdapter(struct USolarAdapterWidget*& AdapterProgress);

	// Object: Function UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C.GetKeyMappingProgress
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x8) ]
	void GetKeyMappingProgress(struct USolarComponentKeyProgress*& NewParam);

	// Object: Function UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C.SetHover
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetHover(bool Hover);

	// Object: Function UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C.SetCustomText
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void SetCustomText(struct FString InCustomText);

	// Object: Function UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C.Update Key Prompt Custom Info
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0xB8) ]
	void Update Key Prompt Custom Info(struct FS_KeyPrompt CustomInfo);

	// Object: Function UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C.SetMouseType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetMouseType(uint8_t MouseType);

	// Object: Function UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C.SetStyle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void SetStyle(uint8_t Style);

	// Object: Function UI_KeyMappingPrompt_Interface.UI_KeyMappingPrompt_Interface_C.SetKeyPromptCustomInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0xB8) ]
	void SetKeyPromptCustomInfo(struct FS_KeyPrompt InInfo);
};

} // namespace SDK
