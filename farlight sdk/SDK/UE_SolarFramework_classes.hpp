// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class SolarFramework.SolarContainer
// Size: 0x28 (Inherited: 0x28)
struct USolarContainer : UObject
{

	// Object: Function SolarFramework.SolarContainer.ReceiveInitialize
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveInitialize();

	// Object: Function SolarFramework.SolarContainer.ReceiveDeinitialize
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveDeinitialize();

	// Object: Function SolarFramework.SolarContainer.IsWorldTearingDown
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x84e7784
	// Params: [ Num(1) Size(0x1) ]
	bool IsWorldTearingDown();
};

// Object: Class SolarFramework.SolarAbstractManager
// Size: 0x28 (Inherited: 0x28)
struct USolarAbstractManager : USolarContainer
{
};

// Object: Class SolarFramework.SolarAbstractModel
// Size: 0x28 (Inherited: 0x28)
struct USolarAbstractModel : USolarContainer
{
};

// Object: Class SolarFramework.SolarArchitecture
// Size: 0x348 (Inherited: 0x1A0)
struct USolarArchitecture : UGameInstance
{
	struct FMulticastInlineDelegate OnOnScopeChangeDelegate; // 0x1A0(0x10)
	uint8_t Pad_0x1B0[0x198]; // 0x1B0(0x198)


	// Object: Function SolarFramework.SolarArchitecture.OnScopeChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x2) ]
	void OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope);

	// Object: Function SolarFramework.SolarArchitecture.IsScopeSettlement
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e6010
	// Params: [ Num(1) Size(0x1) ]
	bool IsScopeSettlement();

	// Object: Function SolarFramework.SolarArchitecture.IsScopeLogin
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e60a0
	// Params: [ Num(1) Size(0x1) ]
	bool IsScopeLogin();

	// Object: Function SolarFramework.SolarArchitecture.IsScopeLobby
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e6058
	// Params: [ Num(1) Size(0x1) ]
	bool IsScopeLobby();

	// Object: Function SolarFramework.SolarArchitecture.IsScopeBattle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e6034
	// Params: [ Num(1) Size(0x1) ]
	bool IsScopeBattle();

	// Object: Function SolarFramework.SolarArchitecture.IsLatScopeLobby
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e607c
	// Params: [ Num(1) Size(0x1) ]
	bool IsLatScopeLobby();

	// Object: Function SolarFramework.SolarArchitecture.IsLastScopeLogin
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e60c4
	// Params: [ Num(1) Size(0x1) ]
	bool IsLastScopeLogin();

	// Object: Function SolarFramework.SolarArchitecture.IsInScope
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e60e8
	// Params: [ Num(2) Size(0x2) ]
	bool IsInScope(enum class EScope InScopeMask);

	// Object: Function SolarFramework.SolarArchitecture.GetModel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e61b8
	// Params: [ Num(2) Size(0x10) ]
	struct USolarAbstractModel* GetModel(struct USolarAbstractModel*& ModelClass);

	// Object: Function SolarFramework.SolarArchitecture.GetManager
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e6274
	// Params: [ Num(2) Size(0x10) ]
	struct USolarAbstractManager* GetManager(struct USolarAbstractManager*& ManagerClass);

	// Object: Function SolarFramework.SolarArchitecture.GetCurScope
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x84e619c
	// Params: [ Num(1) Size(0x1) ]
	enum class EScope GetCurScope();
};

// Object: Class SolarFramework.SolarFrameworkSettings
// Size: 0x58 (Inherited: 0x38)
struct USolarFrameworkSettings : UDeveloperSettings
{
	struct TArray<struct FSolarConfigEntry> ManagerConfigs; // 0x38(0x10)
	struct TArray<struct FSolarConfigEntry> ModelConfigs; // 0x48(0x10)
};

} // namespace SDK
