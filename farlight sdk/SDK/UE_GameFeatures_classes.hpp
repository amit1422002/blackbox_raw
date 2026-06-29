// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GameFeatures.GameFeatureAction
// Size: 0x28 (Inherited: 0x28)
struct UGameFeatureAction : UObject
{
};

// Object: Class GameFeatures.GameFeatureAction_AddActorFactory
// Size: 0x28 (Inherited: 0x28)
struct UGameFeatureAction_AddActorFactory : UGameFeatureAction
{
};

// Object: Class GameFeatures.GameFeatureAction_AddChunkOverride
// Size: 0x28 (Inherited: 0x28)
struct UGameFeatureAction_AddChunkOverride : UGameFeatureAction
{
};

// Object: Class GameFeatures.GameFeatureAction_AddComponents
// Size: 0x88 (Inherited: 0x28)
struct UGameFeatureAction_AddComponents : UGameFeatureAction
{
	struct TArray<struct FGameFeatureComponentEntry> ComponentList; // 0x28(0x10)
	uint8_t Pad_0x38[0x50]; // 0x38(0x50)
};

// Object: Class GameFeatures.GameFeatureAction_DataRegistry
// Size: 0x40 (Inherited: 0x28)
struct UGameFeatureAction_DataRegistry : UGameFeatureAction
{
	struct TArray<struct TSoftObjectPtr<UDataRegistry>> RegistriesToAdd; // 0x28(0x10)
	bool bPreloadInEditor; // 0x38(0x1)
	bool bPreloadInCommandlets; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
};

// Object: Class GameFeatures.GameFeatureAction_DataRegistrySource
// Size: 0x40 (Inherited: 0x28)
struct UGameFeatureAction_DataRegistrySource : UGameFeatureAction
{
	struct TArray<struct FDataRegistrySourceToAdd> SourcesToAdd; // 0x28(0x10)
	bool bPreloadInEditor; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: Class GameFeatures.GameFeatureData
// Size: 0x50 (Inherited: 0x30)
struct UGameFeatureData : UPrimaryDataAsset
{
	struct TArray<struct UGameFeatureAction*> Actions; // 0x30(0x10)
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x40(0x10)


	// Object: Function GameFeatures.GameFeatureData.GetPluginName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3924b54
	// Params: [ Num(2) Size(0x18) ]
	void GetPluginName(struct UGameFeatureData* GFD, struct FString& PluginName);
};

// Object: Class GameFeatures.GameFeatureOptionalContentInstaller
// Size: 0x130 (Inherited: 0x28)
struct UGameFeatureOptionalContentInstaller : UObject
{
	uint8_t Pad_0x28[0x108]; // 0x28(0x108)
};

// Object: Class GameFeatures.GameFeaturePluginStateMachine
// Size: 0x238 (Inherited: 0x28)
struct UGameFeaturePluginStateMachine : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FGameFeaturePluginStateMachineProperties StateProperties; // 0x30(0xD8)
	uint8_t Pad_0x108[0x130]; // 0x108(0x130)
};

// Object: Class GameFeatures.GameFeaturesProjectPolicies
// Size: 0x28 (Inherited: 0x28)
struct UGameFeaturesProjectPolicies : UObject
{
};

// Object: Class GameFeatures.DefaultGameFeaturesProjectPolicies
// Size: 0x28 (Inherited: 0x28)
struct UDefaultGameFeaturesProjectPolicies : UGameFeaturesProjectPolicies
{
};

// Object: Class GameFeatures.GameFeaturesSubsystem
// Size: 0x220 (Inherited: 0x30)
struct UGameFeaturesSubsystem : UEngineSubsystem
{
	uint8_t Pad_0x30[0xA0]; // 0x30(0xA0)
	struct TMap<struct FString, struct UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines; // 0xD0(0x50)
	struct TArray<struct UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines; // 0x120(0x10)
	uint8_t Pad_0x130[0xC8]; // 0x130(0xC8)
	struct TArray<struct UObject*> Observers; // 0x1F8(0x10)
	struct UGameFeaturesProjectPolicies* GameSpecificPolicies; // 0x208(0x8)
	uint8_t Pad_0x210[0x10]; // 0x210(0x10)
};

// Object: Class GameFeatures.GameFeaturesSubsystemSettings
// Size: 0x90 (Inherited: 0x38)
struct UGameFeaturesSubsystemSettings : UDeveloperSettings
{
	struct FSoftClassPath GameFeaturesManagerClassName; // 0x38(0x18)
	struct TArray<struct FString> EnabledPlugins; // 0x50(0x10)
	struct TArray<struct FString> DisabledPlugins; // 0x60(0x10)
	struct TArray<struct FString> AdditionalPluginMetadataKeys; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class GameFeatures.GameFeatureStateChangeObserver
// Size: 0x28 (Inherited: 0x28)
struct IGameFeatureStateChangeObserver : IInterface
{
};

} // namespace SDK
