// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class TemplateLoadingSystem.LoadingScreenSubsystem
// Size: 0x68 (Inherited: 0x30)
struct ULoadingScreenSubsystem : UGameInstanceSubsystem
{
	struct UUserWidget* LoadingWidget; // 0x30(0x8)
	uint8_t Pad_0x38[0x30]; // 0x38(0x30)


	// Object: Function TemplateLoadingSystem.LoadingScreenSubsystem.StopLoadingScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x317c778
	// Params: [ Num(1) Size(0x8) ]
	void StopLoadingScreen(struct UUserWidget* TransitionAnimWidget);

	// Object: Function TemplateLoadingSystem.LoadingScreenSubsystem.StartLoadingScreenByWidget
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x317c820
	// Params: [ Num(2) Size(0x18) ]
	void StartLoadingScreenByWidget(struct UUserWidget* InUserWidget, struct TArray<struct FString>& InMoviePaths);

	// Object: Function TemplateLoadingSystem.LoadingScreenSubsystem.StartLoadingScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x317c948
	// Params: [ Num(2) Size(0x10) ]
	struct ULoadingWidgetBase* StartLoadingScreen(struct ULoadingWidgetBase* InWidgetClass);

	// Object: Function TemplateLoadingSystem.LoadingScreenSubsystem.OnTransitionAnimFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x317c750
	// Params: [ Num(0) Size(0x0) ]
	void OnTransitionAnimFinished();

	// Object: Function TemplateLoadingSystem.LoadingScreenSubsystem.Get
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x317c6a8
	// Params: [ Num(2) Size(0x10) ]
	struct ULoadingScreenSubsystem* Get(struct UObject* WorldContextObject);

	// Object: Function TemplateLoadingSystem.LoadingScreenSubsystem.CloseLoadingScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x317c764
	// Params: [ Num(0) Size(0x0) ]
	void CloseLoadingScreen();
};

// Object: Class TemplateLoadingSystem.LoadingTransitionWidgetBase
// Size: 0x270 (Inherited: 0x268)
struct ULoadingTransitionWidgetBase : UUserWidget
{
	uint8_t Pad_0x268[0x8]; // 0x268(0x8)
};

// Object: Class TemplateLoadingSystem.LoadingTransitionWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct ILoadingTransitionWidgetInterface : IInterface
{

	// Object: Function TemplateLoadingSystem.LoadingTransitionWidgetInterface.SetLoadingTransitionCallback
	// Flags: [Native|Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x317d170
	// Params: [ Num(2) Size(0x11) ]
	bool SetLoadingTransitionCallback(struct FDelegate& InCallback);

	// Object: Function TemplateLoadingSystem.LoadingTransitionWidgetInterface.GetTransitionAnimation
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x317d254
	// Params: [ Num(1) Size(0x8) ]
	struct UWidgetAnimation* GetTransitionAnimation();
};

// Object: Class TemplateLoadingSystem.LoadingWidgetBase
// Size: 0x3B8 (Inherited: 0x3B0)
struct ULoadingWidgetBase : USolarUserWidgetBase
{
	uint8_t Pad_0x3B0[0x8]; // 0x3B0(0x8)
};

// Object: Class TemplateLoadingSystem.LoadingWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct ILoadingWidgetInterface : IInterface
{

	// Object: Function TemplateLoadingSystem.LoadingWidgetInterface.OnLoadingStarted
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x317dafc
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingStarted();

	// Object: Function TemplateLoadingSystem.LoadingWidgetInterface.OnLoadingFinished
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x317dae0
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingFinished();
};

} // namespace SDK
