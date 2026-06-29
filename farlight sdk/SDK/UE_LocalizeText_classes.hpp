// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class LocalizeText.LocalizeText
// Size: 0x960 (Inherited: 0x168)
struct ULocalizeText : UTextLayoutWidget
{
	bool NotLocalize; // 0x161(0x1)
	bool CapitalOnly; // 0x162(0x1)
	struct FString LocalizeKey; // 0x168(0x10)
	struct FText Text; // 0x178(0x18)
	struct FDelegate TextDelegate; // 0x190(0x10)
	struct FSlateColor ColorAndOpacity; // 0x1A0(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x1C8(0x10)
	struct FSlateFontInfo Font; // 0x1D8(0x68)
	struct FSlateBrush StrikeBrush; // 0x240(0x120)
	struct FVector2D ShadowOffset; // 0x360(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x368(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x378(0x10)
	float MinDesiredWidth; // 0x388(0x4)
	bool bWrapWithInvalidationPanel; // 0x38C(0x1)
	uint8_t Pad_0x38F[0x1]; // 0x38F(0x1)
	int32_t LetterSpacing; // 0x390(0x4)
	uint8_t Pad_0x394[0x4]; // 0x394(0x4)
	struct ULocalizeTransferAgent* Agent; // 0x398(0x8)
	struct FTextBlockStyle WidgetStyle; // 0x3A0(0x590)
	bool bSimpleTextMode; // 0x930(0x1)
	uint8_t Pad_0x931[0x27]; // 0x931(0x27)
	enum class ETextScaleRule ScaleRule; // 0x958(0x1)
	enum class ETextVerticalAlign VerticalAlign; // 0x959(0x1)
	uint8_t Pad_0x95A[0x6]; // 0x95A(0x6)


	// Object: Function LocalizeText.LocalizeText.SetWrapTextAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2ab78
	// Params: [ Num(1) Size(0x4) ]
	void SetWrapTextAt(float InWrapTextAt);

	// Object: Function LocalizeText.LocalizeText.SetVerticalAlign
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2aa28
	// Params: [ Num(1) Size(0x1) ]
	void SetVerticalAlign(enum class ETextVerticalAlign InScaleAlign);

	// Object: Function LocalizeText.LocalizeText.SetText
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x5d2a750
	// Params: [ Num(1) Size(0x18) ]
	void SetText(struct FText InText);

	// Object: Function LocalizeText.LocalizeText.SetStrikeBrush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2ad78
	// Params: [ Num(1) Size(0x120) ]
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush);

	// Object: Function LocalizeText.LocalizeText.SetShadowOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d2b3c8
	// Params: [ Num(1) Size(0x8) ]
	void SetShadowOffset(struct FVector2D InShadowOffset);

	// Object: Function LocalizeText.LocalizeText.SetShadowColorAndOpacity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5d2b46c
	// Params: [ Num(1) Size(0x10) ]
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	// Object: Function LocalizeText.LocalizeText.SetScaleRule
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2aad0
	// Params: [ Num(1) Size(0x1) ]
	void SetScaleRule(enum class ETextScaleRule InScaleRule);

	// Object: Function LocalizeText.LocalizeText.SetOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2b514
	// Params: [ Num(1) Size(0x4) ]
	void SetOpacity(float InOpacity);

	// Object: Function LocalizeText.LocalizeText.SetMinDesiredWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2acd0
	// Params: [ Num(1) Size(0x4) ]
	void SetMinDesiredWidth(float InMinDesiredWidth);

	// Object: Function LocalizeText.LocalizeText.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2b22c
	// Params: [ Num(1) Size(0x68) ]
	void SetFont(struct FSlateFontInfo InFontInfo);

	// Object: Function LocalizeText.LocalizeText.SetColorAndOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2b5bc
	// Params: [ Num(1) Size(0x28) ]
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity);

	// Object: Function LocalizeText.LocalizeText.SetCapitalOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2a604
	// Params: [ Num(1) Size(0x1) ]
	void SetCapitalOnly(bool bCapitalOnly);

	// Object: Function LocalizeText.LocalizeText.SetAutoWrapText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2ac20
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoWrapText(bool InAutoTextWrap);

	// Object: Function LocalizeText.LocalizeText.RefreshText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2a9ac
	// Params: [ Num(0) Size(0x0) ]
	void RefreshText();

	// Object: Function LocalizeText.LocalizeText.Refresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2a5f0
	// Params: [ Num(0) Size(0x0) ]
	void Refresh();

	// Object: Function LocalizeText.LocalizeText.GetText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5d2a8dc
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetText();

	// Object: Function LocalizeText.LocalizeText.GetLocalizeKey
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5d2a6b4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLocalizeKey();

	// Object: Function LocalizeText.LocalizeText.GetDynamicOutlineMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2a9c0
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial();

	// Object: Function LocalizeText.LocalizeText.GetDynamicFontMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5d2a9f4
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// Object: Class LocalizeText.LocalizeTransferAgent
// Size: 0x28 (Inherited: 0x28)
struct ULocalizeTransferAgent : UObject
{

	// Object: Function LocalizeText.LocalizeTransferAgent.GetLocalizeText
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x5d2bf7c
	// Params: [ Num(3) Size(0x30) ]
	struct FString GetLocalizeText(struct FString Language, struct FString Key);
};

} // namespace SDK
