// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SolarWebBrowser.WebBrowser
// Size: 0x1D0 (Inherited: 0x140)
struct UWebBrowser : UWidget
{
	struct FMulticastInlineDelegate OnUrlChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x150(0x10)
	struct FMulticastInlineDelegate OnBeforeNavigation; // 0x160(0x10)
	struct FMulticastInlineDelegate OnCloseWindow; // 0x170(0x10)
	struct TArray<struct FString> URLKeywordWithoutNavigation; // 0x180(0x10)
	struct FString InitialURL; // 0x190(0x10)
	bool bSupportsTransparency; // 0x1A0(0x1)
	uint8_t Pad_0x1A1[0x3]; // 0x1A1(0x3)
	int32_t FrameRate; // 0x1A4(0x4)
	bool bEnableMouseTransparency; // 0x1A8(0x1)
	uint8_t Pad_0x1A9[0x3]; // 0x1A9(0x3)
	float MouseTransparencyThreshold; // 0x1AC(0x4)
	float MouseTransparencyDelay; // 0x1B0(0x4)
	bool bEnableVirtualPointerTransparency; // 0x1B4(0x1)
	uint8_t Pad_0x1B5[0x3]; // 0x1B5(0x3)
	float VirtualPointerTransparencyThreshold; // 0x1B8(0x4)
	bool bCustomCursors; // 0x1BC(0x1)
	uint8_t Pad_0x1BD[0x13]; // 0x1BD(0x13)


	// Object: Function SolarWebBrowser.WebBrowser.Unfocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3824
	// Params: [ Num(1) Size(0x1) ]
	void Unfocus(enum class EMouseCaptureMode MouseCaptureMode);

	// Object: Function SolarWebBrowser.WebBrowser.Unbind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3ac0
	// Params: [ Num(2) Size(0x18) ]
	void Unbind(struct FString Name, struct UObject* Object);

	// Object: Function SolarWebBrowser.WebBrowser.StopLoad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3a5c
	// Params: [ Num(0) Size(0x0) ]
	void StopLoad();

	// Object: Function SolarWebBrowser.WebBrowser.SetURLWithoutNavigation
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x36c3974
	// Params: [ Num(1) Size(0x10) ]
	void SetURLWithoutNavigation(struct TArray<struct FString>& URLs);

	// Object: Function SolarWebBrowser.WebBrowser.ResetMousePosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3810
	// Params: [ Num(0) Size(0x0) ]
	void ResetMousePosition();

	// Object: Function SolarWebBrowser.WebBrowser.Reload
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3a70
	// Params: [ Num(0) Size(0x0) ]
	void Reload();

	// Object: Function SolarWebBrowser.WebBrowser.ReadTexturePixels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3518
	// Params: [ Num(5) Size(0x20) ]
	struct TArray<struct FColor> ReadTexturePixels(int32_t X, int32_t Y, int32_t Width, int32_t Height);

	// Object: Function SolarWebBrowser.WebBrowser.ReadTexturePixel
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x36c36bc
	// Params: [ Num(3) Size(0xC) ]
	struct FColor ReadTexturePixel(int32_t X, int32_t Y);

	// Object: DelegateFunction SolarWebBrowser.WebBrowser.OnUrlChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x18) ]
	void OnUrlChanged__DelegateSignature(struct FText& Text);

	// Object: DelegateFunction SolarWebBrowser.WebBrowser.OnCloseWindow__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnCloseWindow__DelegateSignature();

	// Object: DelegateFunction SolarWebBrowser.WebBrowser.OnBeforePopup__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x20) ]
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame);

	// Object: DelegateFunction SolarWebBrowser.WebBrowser.OnBeforeNavigation__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x10) ]
	void OnBeforeNavigation__DelegateSignature(struct FString URL);

	// Object: Function SolarWebBrowser.WebBrowser.LoadURL
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c4158
	// Params: [ Num(1) Size(0x10) ]
	void LoadURL(struct FString NewURL);

	// Object: Function SolarWebBrowser.WebBrowser.LoadString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3fc8
	// Params: [ Num(2) Size(0x20) ]
	void LoadString(struct FString Contents, struct FString DummyURL);

	// Object: Function SolarWebBrowser.WebBrowser.IsVirtualPointerTransparencyEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36c34a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsVirtualPointerTransparencyEnabled();

	// Object: Function SolarWebBrowser.WebBrowser.IsMouseTransparencyEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36c34e0
	// Params: [ Num(1) Size(0x1) ]
	bool IsMouseTransparencyEnabled();

	// Object: Function SolarWebBrowser.WebBrowser.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36c3ca8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUrl();

	// Object: Function SolarWebBrowser.WebBrowser.GetTitleText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36c3d44
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetTitleText();

	// Object: Function SolarWebBrowser.WebBrowser.GetTextureWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36c37dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTextureWidth();

	// Object: Function SolarWebBrowser.WebBrowser.GetTextureHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36c37a8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTextureHeight();

	// Object: Function SolarWebBrowser.WebBrowser.Focus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c38cc
	// Params: [ Num(1) Size(0x1) ]
	void Focus(enum class EMouseLockMode MouseLockMode);

	// Object: Function SolarWebBrowser.WebBrowser.ExecuteJavascript
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3f14
	// Params: [ Num(1) Size(0x10) ]
	void ExecuteJavascript(struct FString ScriptText);

	// Object: Function SolarWebBrowser.WebBrowser.EnableIME
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3aac
	// Params: [ Num(0) Size(0x0) ]
	void EnableIME();

	// Object: Function SolarWebBrowser.WebBrowser.DisableIME
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3a98
	// Params: [ Num(0) Size(0x0) ]
	void DisableIME();

	// Object: Function SolarWebBrowser.WebBrowser.CloseSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3a84
	// Params: [ Num(0) Size(0x0) ]
	void CloseSelf();

	// Object: Function SolarWebBrowser.WebBrowser.CallJavascriptFunction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3e14
	// Params: [ Num(2) Size(0x20) ]
	void CallJavascriptFunction(struct FString Function, struct FString Data);

	// Object: Function SolarWebBrowser.WebBrowser.Bind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36c3bb4
	// Params: [ Num(2) Size(0x18) ]
	void Bind(struct FString Name, struct UObject* Object);
};

} // namespace SDK
