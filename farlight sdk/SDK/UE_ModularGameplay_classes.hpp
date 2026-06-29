// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ModularGameplay.GameFrameworkComponent
// Size: 0xD8 (Inherited: 0xD8)
struct UGameFrameworkComponent : UActorComponent
{
};

// Object: Class ModularGameplay.ControllerComponent
// Size: 0xD8 (Inherited: 0xD8)
struct UControllerComponent : UGameFrameworkComponent
{
};

// Object: Class ModularGameplay.GameFrameworkComponentManager
// Size: 0x238 (Inherited: 0x30)
struct UGameFrameworkComponentManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x208]; // 0x30(0x208)


	// Object: Function ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x393711c
	// Params: [ Num(3) Size(0x39) ]
	bool UnregisterClassInitStateDelegate(struct TSoftClassPtr<struct AActor*> ActorClass, struct FDelegate DelegateToRemove);

	// Object: Function ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x39374f8
	// Params: [ Num(3) Size(0x19) ]
	bool UnregisterActorInitStateDelegate(struct AActor* Actor, struct FDelegate DelegateToRemove);

	// Object: Function ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x39377c4
	// Params: [ Num(3) Size(0x11) ]
	void SendExtensionEvent(struct AActor* Receiver, struct FName EventName, bool bOnlyInGameWorlds);

	// Object: Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x39378f0
	// Params: [ Num(1) Size(0x8) ]
	void RemoveReceiver(struct AActor* Receiver);

	// Object: Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x39372a8
	// Params: [ Num(6) Size(0x4A) ]
	bool RegisterAndCallForClassInitState(struct TSoftClassPtr<struct AActor*> ActorClass, struct FName FeatureName, struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately);

	// Object: Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x39375fc
	// Params: [ Num(6) Size(0x2A) ]
	bool RegisterAndCallForActorInitState(struct AActor* Actor, struct FName FeatureName, struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately);

	// Object: Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3937998
	// Params: [ Num(2) Size(0x9) ]
	void AddReceiver(struct AActor* Receiver, bool bAddOnlyInGameWorlds);
};

// Object: Class ModularGameplay.GameFrameworkInitStateInterface
// Size: 0x28 (Inherited: 0x28)
struct IGameFrameworkInitStateInterface : IInterface
{

	// Object: Function ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3937fdc
	// Params: [ Num(2) Size(0x11) ]
	bool UnregisterInitStateDelegate(struct FDelegate Delegate);

	// Object: Function ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x39380a8
	// Params: [ Num(4) Size(0x1A) ]
	bool RegisterAndCallForInitStateChange(struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately);

	// Object: Function ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x39381fc
	// Params: [ Num(2) Size(0x9) ]
	bool HasReachedInitState(struct FGameplayTag DesiredState);

	// Object: Function ModularGameplay.GameFrameworkInitStateInterface.GetInitState
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x39382b8
	// Params: [ Num(1) Size(0x8) ]
	struct FGameplayTag GetInitState();

	// Object: Function ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x39382f4
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetFeatureName();
};

// Object: Class ModularGameplay.GameStateComponent
// Size: 0xD8 (Inherited: 0xD8)
struct UGameStateComponent : UGameFrameworkComponent
{
};

// Object: Class ModularGameplay.PawnComponent
// Size: 0xD8 (Inherited: 0xD8)
struct UPawnComponent : UGameFrameworkComponent
{
};

// Object: Class ModularGameplay.PlayerStateComponent
// Size: 0xD8 (Inherited: 0xD8)
struct UPlayerStateComponent : UGameFrameworkComponent
{
};

} // namespace SDK
