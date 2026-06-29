// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AkAudio.AkPortalComponent
// Size: 0x400 (Inherited: 0x350)
struct UAkPortalComponent : USceneComponent
{
	bool bDynamic; // 0x344(0x1)
	enum class EAkAcousticPortalState InitialState; // 0x345(0x1)
	float ObstructionRefreshInterval; // 0x348(0x4)
	uint8_t ObstructionCollisionChannel; // 0x34C(0x1)
	uint8_t Pad_0x357[0xA9]; // 0x357(0xA9)


	// Object: Function AkAudio.AkPortalComponent.PortalPlacementValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3586590
	// Params: [ Num(1) Size(0x1) ]
	bool PortalPlacementValid();

	// Object: Function AkAudio.AkPortalComponent.OpenPortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3586660
	// Params: [ Num(0) Size(0x0) ]
	void OpenPortal();

	// Object: Function AkAudio.AkPortalComponent.GetPrimitiveParent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35865e4
	// Params: [ Num(1) Size(0x8) ]
	struct UPrimitiveComponent* GetPrimitiveParent();

	// Object: Function AkAudio.AkPortalComponent.GetCurrentState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3586618
	// Params: [ Num(1) Size(0x1) ]
	enum class EAkAcousticPortalState GetCurrentState();

	// Object: Function AkAudio.AkPortalComponent.ClosePortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x358664c
	// Params: [ Num(0) Size(0x0) ]
	void ClosePortal();
};

// Object: Class AkAudio.AkAcousticPortal
// Size: 0x328 (Inherited: 0x318)
struct AAkAcousticPortal : AVolume
{
	struct UAkPortalComponent* Portal; // 0x318(0x8)
	enum class EAkAcousticPortalState InitialState; // 0x320(0x1)
	bool bRequiresStateMigration; // 0x321(0x1)
	uint8_t Pad_0x322[0x6]; // 0x322(0x6)


	// Object: Function AkAudio.AkAcousticPortal.OpenPortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3586b74
	// Params: [ Num(0) Size(0x0) ]
	void OpenPortal();

	// Object: Function AkAudio.AkAcousticPortal.GetCurrentState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3586b2c
	// Params: [ Num(1) Size(0x1) ]
	enum class EAkAcousticPortalState GetCurrentState();

	// Object: Function AkAudio.AkAcousticPortal.ClosePortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3586b60
	// Params: [ Num(0) Size(0x0) ]
	void ClosePortal();
};

// Object: Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : UObject
{
	uint32_t ShortID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
};

// Object: Class AkAudio.AkAcousticTexture
// Size: 0x40 (Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType
{
};

// Object: Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x360 (Inherited: 0x350)
struct UAkAcousticTextureSetComponent : USceneComponent
{
	uint8_t Pad_0x350[0x10]; // 0x350(0x10)
};

// Object: Class AkAudio.AkAmbientSound
// Size: 0x320 (Inherited: 0x2E0)
struct AAkAmbientSound : AActor
{
	struct UAkAudioEvent* AkAudioEvent; // 0x2E0(0x8)
	struct UAKComponent* AKComponent; // 0x2E8(0x8)
	bool StopWhenOwnerIsDestroyed; // 0x2F0(0x1)
	bool AutoPost; // 0x2F1(0x1)
	uint8_t Pad_0x2F2[0x2E]; // 0x2F2(0x2E)


	// Object: Function AkAudio.AkAmbientSound.StopAmbientSound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x35873fc
	// Params: [ Num(0) Size(0x0) ]
	void StopAmbientSound();

	// Object: Function AkAudio.AkAmbientSound.StartAmbientSound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3587410
	// Params: [ Num(0) Size(0x0) ]
	void StartAmbientSound();
};

// Object: Class AkAudio.AkAndroidInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x38)


	// Object: Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x3587a18
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
};

// Object: Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkAssetBase
// Size: 0x50 (Inherited: 0x40)
struct UAkAssetBase : UAkAudioType
{
	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
};

// Object: Class AkAudio.AkAssetData
// Size: 0x70 (Inherited: 0x28)
struct UAkAssetData : UObject
{
	uint32_t CachedHash; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString BankLanguage; // 0x30(0x10)
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
};

// Object: Class AkAudio.AkAssetDataWithMedia
// Size: 0x80 (Inherited: 0x70)
struct UAkAssetDataWithMedia : UAkAssetData
{
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x70(0x10)
};

// Object: Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject
{
	struct UAkAssetData* CurrentAssetData; // 0x28(0x8)
};

// Object: Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x78 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : UObject
{
	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x50(0x8)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
};

// Object: Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xE8 (Inherited: 0x80)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia
{
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x80(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0x90(0x8)
	uint8_t Pad_0x98[0x50]; // 0x98(0x50)
};

// Object: Class AkAudio.AkAudioEventData
// Size: 0x288 (Inherited: 0xE8)
struct UAkAudioEventData : UAkAssetDataSwitchContainer
{
	float MaxAttenuationRadius; // 0xE8(0x4)
	bool IsInfinite; // 0xEC(0x1)
	uint8_t Pad_0xED[0x3]; // 0xED(0x3)
	float MinimumDuration; // 0xF0(0x4)
	float MaximumDuration; // 0xF4(0x4)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xF8(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0x148(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x198(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x1E8(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x238(0x50)
};

// Object: Class AkAudio.AkAudioBank
// Size: 0x110 (Inherited: 0x50)
struct UAkAudioBank : UAkAssetBase
{
	bool AutoLoad; // 0x49(0x1)
	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap; // 0x50(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xA0(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xF0(0x8)
	uint8_t Pad_0xF9[0x17]; // 0xF9(0x17)
};

// Object: Class AkAudio.AkAudioEvent
// Size: 0xD0 (Inherited: 0x50)
struct UAkAudioEvent : UAkAssetBase
{
	struct TMap<struct FString, struct UAkAssetPlatformData*> LocalizedPlatformAssetDataMap; // 0x50(0x50)
	struct UAkAudioBank* RequiredBank; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xB0(0x8)
	float MaxAttenuationRadius; // 0xB8(0x4)
	bool IsInfinite; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	float MinimumDuration; // 0xC0(0x4)
	float MaximumDuration; // 0xC4(0x4)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)


	// Object: Function AkAudio.AkAudioEvent.GetMinimumDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35890b8
	// Params: [ Num(1) Size(0x4) ]
	float GetMinimumDuration();

	// Object: Function AkAudio.AkAudioEvent.GetMaximumDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3589084
	// Params: [ Num(1) Size(0x4) ]
	float GetMaximumDuration();

	// Object: Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3589124
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxAttenuationRadius();

	// Object: Function AkAudio.AkAudioEvent.GetIsInfinite
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35890ec
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsInfinite();
};

// Object: Class AkAudio.AkGameObject
// Size: 0x380 (Inherited: 0x350)
struct UAkGameObject : USceneComponent
{
	struct UAkAudioEvent* AkAudioEvent; // 0x348(0x8)
	struct FString EventName; // 0x350(0x10)
	uint8_t Pad_0x368[0x18]; // 0x368(0x18)


	// Object: Function AkAudio.AkGameObject.Stop
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x359234c
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function AkAudio.AkGameObject.SetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const]
	// Offset: 0x3592174
	// Params: [ Num(4) Size(0x20) ]
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC);

	// Object: Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3592878
	// Params: [ Num(6) Size(0x4C) ]
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID);

	// Object: Function AkAudio.AkGameObject.PostAssociatedAkEvent
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3592b08
	// Params: [ Num(4) Size(0x2C) ]
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources);

	// Object: Function AkAudio.AkGameObject.PostAkEventAsync
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3592368
	// Params: [ Num(7) Size(0x50) ]
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkGameObject.PostAkEvent
	// Flags: [BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3592634
	// Params: [ Num(6) Size(0x44) ]
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName);

	// Object: Function AkAudio.AkGameObject.GetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3591f00
	// Params: [ Num(6) Size(0x2C) ]
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID);
};

// Object: Class AkAudio.AKComponent
// Size: 0x5C0 (Inherited: 0x380)
struct UAKComponent : UAkGameObject
{
	bool bUseSpatialAudio; // 0x374(0x1)
	uint8_t OcclusionCollisionChannel; // 0x37C(0x1)
	bool EnableSpotReflectors; // 0x37D(0x1)
	float OuterRadius; // 0x380(0x4)
	float InnerRadius; // 0x384(0x4)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x388(0x8)
	struct FString EarlyReflectionAuxBusName; // 0x390(0x10)
	int32_t EarlyReflectionOrder; // 0x3A0(0x4)
	float EarlyReflectionBusSendGain; // 0x3A4(0x4)
	float EarlyReflectionMaxPathLength; // 0x3A8(0x4)
	float roomReverbAuxBusGain; // 0x3AC(0x4)
	int32_t diffractionMaxEdges; // 0x3B0(0x4)
	int32_t diffractionMaxPaths; // 0x3B4(0x4)
	float diffractionMaxPathLength; // 0x3B8(0x4)
	bool DrawFirstOrderReflections; // 0x3BC(0x1)
	bool DrawSecondOrderReflections; // 0x3BD(0x1)
	bool DrawHigherOrderReflections; // 0x3BE(0x1)
	bool DrawDiffraction; // 0x3BF(0x1)
	bool StopWhenOwnerDestroyed; // 0x3C0(0x1)
	float AttenuationScalingFactor; // 0x3C4(0x4)
	float OcclusionRefreshInterval; // 0x3C8(0x4)
	bool bUseReverbVolumes; // 0x3CC(0x1)
	uint8_t Pad_0x3CD[0x16B]; // 0x3CD(0x16B)
	bool AutoUpdatePosition; // 0x538(0x1)
	bool AutoPostEvent; // 0x539(0x1)
	uint8_t Pad_0x53A[0x2]; // 0x53A(0x2)
	float DistanceToListener; // 0x53C(0x4)
	uint8_t Pad_0x540[0x80]; // 0x540(0x80)


	// Object: Function AkAudio.AKComponent.UseReverbVolumes
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b4b4
	// Params: [ Num(1) Size(0x1) ]
	void UseReverbVolumes(bool inUseReverbVolumes);

	// Object: Function AkAudio.AKComponent.UseEarlyReflections
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x358b2bc
	// Params: [ Num(6) Size(0x28) ]
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName);

	// Object: Function AkAudio.AKComponent.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b6d4
	// Params: [ Num(3) Size(0x28) ]
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState);

	// Object: Function AkAudio.AKComponent.SetStopWhenOwnerDestroyed
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b624
	// Params: [ Num(1) Size(0x1) ]
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);

	// Object: Function AkAudio.AKComponent.SetOutputBusVolume
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b0b8
	// Params: [ Num(1) Size(0x4) ]
	void SetOutputBusVolume(float BusVolume);

	// Object: Function AkAudio.AKComponent.SetListeners
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x358b564
	// Params: [ Num(1) Size(0x10) ]
	void SetListeners(struct TArray<struct UAKComponent*>& Listeners);

	// Object: Function AkAudio.AKComponent.SetGameObjectRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x358c08c
	// Params: [ Num(2) Size(0x8) ]
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);

	// Object: Function AkAudio.AKComponent.SetEarlyReflectionsVolume
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b160
	// Params: [ Num(1) Size(0x4) ]
	void SetEarlyReflectionsVolume(float SendVolume);

	// Object: Function AkAudio.AKComponent.SetEarlyReflectionsAuxBus
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b208
	// Params: [ Num(1) Size(0x10) ]
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName);

	// Object: Function AkAudio.AKComponent.SetAttenuationScalingFactor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b010
	// Params: [ Num(1) Size(0x4) ]
	void SetAttenuationScalingFactor(float Value);

	// Object: Function AkAudio.AKComponent.PostTrigger
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b814
	// Params: [ Num(2) Size(0x18) ]
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger);

	// Object: Function AkAudio.AKComponent.PostAssociatedAkEventAndWaitForEndAsync
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x358bd90
	// Params: [ Num(3) Size(0x30) ]
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AKComponent.PostAssociatedAkEventAndWaitForEnd
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x358bf30
	// Params: [ Num(3) Size(0x2C) ]
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AKComponent.PostAkEventByName
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x358b908
	// Params: [ Num(2) Size(0x14) ]
	int32_t PostAkEventByName(struct FString in_EventName);

	// Object: Function AkAudio.AKComponent.PostAkEventAndWaitForEndAsync
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x358b9c4
	// Params: [ Num(4) Size(0x38) ]
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AKComponent.PostAkEventAndWaitForEnd
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x358bba4
	// Params: [ Num(5) Size(0x44) ]
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AKComponent.GetAttenuationRadius
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x358afdc
	// Params: [ Num(1) Size(0x4) ]
	float GetAttenuationRadius();
};

// Object: Class AkAudio.AkAudioInputComponent
// Size: 0x5F0 (Inherited: 0x5C0)
struct UAkAudioInputComponent : UAKComponent
{
	uint8_t Pad_0x5C0[0x30]; // 0x5C0(0x30)


	// Object: Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x3589544
	// Params: [ Num(1) Size(0x4) ]
	int32_t PostAssociatedAudioInputEvent();
};

// Object: Class AkAudio.AkTickProxy
// Size: 0x38 (Inherited: 0x28)
struct UAkTickProxy : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
};

// Object: Class AkAudio.AkTimeTickProxy
// Size: 0x40 (Inherited: 0x38)
struct UAkTimeTickProxy : UAkTickProxy
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: Class AkAudio.AkFrameTickProxy
// Size: 0x40 (Inherited: 0x38)
struct UAkFrameTickProxy : UAkTickProxy
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: Class AkAudio.AkAudioSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UAkAudioSubsystem : UGameInstanceSubsystem
{
};

// Object: Class AkAudio.TickableAkAudioSubsystem
// Size: 0x58 (Inherited: 0x30)
struct UTickableAkAudioSubsystem : UAkAudioSubsystem
{
	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
	struct TArray<struct UAkTickProxy*> TickProxies; // 0x48(0x10)
};

// Object: Class AkAudio.AkAuxBus
// Size: 0x58 (Inherited: 0x50)
struct UAkAuxBus : UAkAssetBase
{
	struct UAkAudioBank* RequiredBank; // 0x50(0x8)
};

// Object: Class AkAudio.AkCheckBox
// Size: 0x10C0 (Inherited: 0x158)
struct UAkCheckBox : UContentWidget
{
	uint8_t Pad_0x158[0x389]; // 0x158(0x389)
	enum class ECheckBoxState CheckedState; // 0x4E1(0x1)
	uint8_t Pad_0x4E2[0x2]; // 0x4E2(0x2)
	struct FDelegate CheckedStateDelegate; // 0x4E4(0x10)
	uint8_t Pad_0x4F4[0xC]; // 0x4F4(0xC)
	struct FCheckBoxStyle WidgetStyle; // 0x500(0xAE0)
	uint8_t HorizontalAlignment; // 0xFE0(0x1)
	bool IsFocusable; // 0xFE1(0x1)
	uint8_t Pad_0xFE2[0x6]; // 0xFE2(0x6)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xFE8(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xFF8(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0x1038(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x1048(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x1058(0x10)
	uint8_t Pad_0x1068[0x58]; // 0x1068(0x58)


	// Object: Function AkAudio.AkCheckBox.SetIsChecked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x358a9b0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsChecked(bool InIsChecked);

	// Object: Function AkAudio.AkCheckBox.SetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x358a908
	// Params: [ Num(1) Size(0x1) ]
	void SetCheckedState(enum class ECheckBoxState InCheckedState);

	// Object: Function AkAudio.AkCheckBox.SetAkItemId
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x358a854
	// Params: [ Num(1) Size(0x10) ]
	void SetAkItemId(struct FGuid& ItemID);

	// Object: Function AkAudio.AkCheckBox.SetAkBoolProperty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x358a76c
	// Params: [ Num(1) Size(0x10) ]
	void SetAkBoolProperty(struct FString ItemProperty);

	// Object: Function AkAudio.AkCheckBox.IsPressed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x358aacc
	// Params: [ Num(1) Size(0x1) ]
	bool IsPressed();

	// Object: Function AkAudio.AkCheckBox.IsChecked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x358aa94
	// Params: [ Num(1) Size(0x1) ]
	bool IsChecked();

	// Object: Function AkAudio.AkCheckBox.GetCheckedState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x358aa60
	// Params: [ Num(1) Size(0x1) ]
	enum class ECheckBoxState GetCheckedState();

	// Object: Function AkAudio.AkCheckBox.GetAkProperty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x358a6b4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAkProperty();

	// Object: Function AkAudio.AkCheckBox.GetAkItemId
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x358a820
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetAkItemId();
};

// Object: Class AkAudio.DrawPortalComponent
// Size: 0x5F0 (Inherited: 0x5F0)
struct UDrawPortalComponent : UPrimitiveComponent
{
};

// Object: Class AkAudio.DrawRoomComponent
// Size: 0x5F0 (Inherited: 0x5F0)
struct UDrawRoomComponent : UPrimitiveComponent
{
};

// Object: Class AkAudio.AkFolder
// Size: 0xB8 (Inherited: 0x40)
struct UAkFolder : UAkAudioType
{
	struct FString UnrealFolderPath; // 0x40(0x10)
	struct FString WwiseFolderPath; // 0x50(0x10)
	uint8_t Pad_0x60[0x58]; // 0x60(0x58)
};

// Object: Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary
{

	// Object: Function AkAudio.AkGameplayStatics.WakeupFromSuspend
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35999c0
	// Params: [ Num(0) Size(0x0) ]
	void WakeupFromSuspend();

	// Object: Function AkAudio.AkGameplayStatics.UseReverbVolumes
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x359576c
	// Params: [ Num(2) Size(0x10) ]
	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.UseEarlyReflections
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595540
	// Params: [ Num(7) Size(0x30) ]
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName);

	// Object: Function AkAudio.AkGameplayStatics.UpdatePostedEventMultiPositions
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35998d0
	// Params: [ Num(2) Size(0x18) ]
	void UpdatePostedEventMultiPositions(struct UAKComponent* AKComponent, struct TArray<struct FTransform>& Positions);

	// Object: Function AkAudio.AkGameplayStatics.UpdateDopplerEffectDatas
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3593468
	// Params: [ Num(3) Size(0x20) ]
	void UpdateDopplerEffectDatas(struct AActor* SoundingObj, struct FVector SoundingObjPos, struct FVector ListeningObjPos);

	// Object: Function AkAudio.AkGameplayStatics.UnloadBankByNameAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3593e88
	// Params: [ Num(2) Size(0x20) ]
	void UnloadBankByNameAsync(struct FString BankName, struct FDelegate& BankUnloadedCallback);

	// Object: Function AkAudio.AkGameplayStatics.UnloadBankByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593f94
	// Params: [ Num(1) Size(0x10) ]
	void UnloadBankByName(struct FString BankName);

	// Object: Function AkAudio.AkGameplayStatics.UnloadBankAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3594038
	// Params: [ Num(2) Size(0x18) ]
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback);

	// Object: Function AkAudio.AkGameplayStatics.UnloadBank
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3594138
	// Params: [ Num(4) Size(0x38) ]
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.Suspend
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35999d4
	// Params: [ Num(1) Size(0x1) ]
	void Suspend(bool in_bRenderAnyway);

	// Object: Function AkAudio.AkGameplayStatics.StopSoundOnComponentbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3597a8c
	// Params: [ Num(3) Size(0x1C) ]
	int32_t StopSoundOnComponentbyname(struct FString SoundName, struct UActorComponent* Component);

	// Object: Function AkAudio.AkGameplayStatics.StopSoundOnComponent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3597bc8
	// Params: [ Num(3) Size(0x14) ]
	int32_t StopSoundOnComponent(struct UAkAudioEvent* AkEvent, struct UActorComponent* Component);

	// Object: Function AkAudio.AkGameplayStatics.StopSoundbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3597e50
	// Params: [ Num(3) Size(0x1C) ]
	int32_t StopSoundbyname(struct FString SoundName, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.StopSound2Dbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3597cac
	// Params: [ Num(2) Size(0x14) ]
	int32_t StopSound2Dbyname(struct FString SoundName);

	// Object: Function AkAudio.AkGameplayStatics.StopSound2D
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3597da8
	// Params: [ Num(2) Size(0xC) ]
	int32_t StopSound2D(struct UAkAudioEvent* AkEvent);

	// Object: Function AkAudio.AkGameplayStatics.StopSound
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3597f8c
	// Params: [ Num(3) Size(0x14) ]
	int32_t StopSound(struct UAkAudioEvent* AkEvent, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.StopProfilerCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593c74
	// Params: [ Num(0) Size(0x0) ]
	void StopProfilerCapture();

	// Object: Function AkAudio.AkGameplayStatics.StopOutputCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593d2c
	// Params: [ Num(0) Size(0x0) ]
	void StopOutputCapture();

	// Object: Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x359480c
	// Params: [ Num(1) Size(0x8) ]
	void StopAllAmbientSounds(struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.StopAll
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35949fc
	// Params: [ Num(0) Size(0x0) ]
	void StopAll();

	// Object: Function AkAudio.AkGameplayStatics.StopActor
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3594a10
	// Params: [ Num(1) Size(0x8) ]
	void StopActor(struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.StartProfilerCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593c88
	// Params: [ Num(1) Size(0x10) ]
	void StartProfilerCapture(struct FString Filename);

	// Object: Function AkAudio.AkGameplayStatics.StartOutputCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593de4
	// Params: [ Num(1) Size(0x10) ]
	void StartOutputCapture(struct FString Filename);

	// Object: Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35948a4
	// Params: [ Num(1) Size(0x8) ]
	void StartAllAmbientSounds(struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3596688
	// Params: [ Num(8) Size(0x50) ]
	struct UAKComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy);

	// Object: Function AkAudio.AkGameplayStatics.SetSwitchToListenerbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35987bc
	// Params: [ Num(2) Size(0x20) ]
	void SetSwitchToListenerbyname(struct FString SwitchGroup, struct FString SwitchState);

	// Object: Function AkAudio.AkGameplayStatics.SetSwitchToListener
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3598944
	// Params: [ Num(1) Size(0x8) ]
	void SetSwitchToListener(struct UAkSwitchValue* SwitchValue);

	// Object: Function AkAudio.AkGameplayStatics.SetSwitchToComponentbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35989dc
	// Params: [ Num(3) Size(0x28) ]
	void SetSwitchToComponentbyname(struct UActorComponent* Component, struct FString SwitchGroup, struct FString SwitchState);

	// Object: Function AkAudio.AkGameplayStatics.SetSwitchToComponent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3598ba8
	// Params: [ Num(2) Size(0x10) ]
	void SetSwitchToComponent(struct UAkSwitchValue* SwitchValue, struct UActorComponent* Component);

	// Object: Function AkAudio.AkGameplayStatics.SetSwitchbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3598c7c
	// Params: [ Num(3) Size(0x28) ]
	void SetSwitchbyname(struct AActor* Actor, struct FString SwitchGroup, struct FString SwitchState);

	// Object: Function AkAudio.AkGameplayStatics.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595df0
	// Params: [ Num(4) Size(0x20) ]
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState);

	// Object: Function AkAudio.AkGameplayStatics.SetState
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3596058
	// Params: [ Num(3) Size(0x18) ]
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State);

	// Object: Function AkAudio.AkGameplayStatics.SetSpeakerAngles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3594b80
	// Params: [ Num(3) Size(0x28) ]
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset);

	// Object: Function AkAudio.AkGameplayStatics.SetRTPCValueToListenerbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3598070
	// Params: [ Num(3) Size(0x18) ]
	void SetRTPCValueToListenerbyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs);

	// Object: Function AkAudio.AkGameplayStatics.SetRTPCValueToListener
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35981e4
	// Params: [ Num(3) Size(0x10) ]
	void SetRTPCValueToListener(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs);

	// Object: Function AkAudio.AkGameplayStatics.SetRTPCValueToComponentbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35982fc
	// Params: [ Num(4) Size(0x20) ]
	void SetRTPCValueToComponentbyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs, struct UActorComponent* Component);

	// Object: Function AkAudio.AkGameplayStatics.SetRTPCValueToComponent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35984b0
	// Params: [ Num(4) Size(0x18) ]
	void SetRTPCValueToComponent(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct UActorComponent* Component);

	// Object: Function AkAudio.AkGameplayStatics.SetRTPCValuebyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3598608
	// Params: [ Num(4) Size(0x20) ]
	void SetRTPCValuebyname(struct FString RTPC, float Value, int32_t InterpolationTimeMs, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.SetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35964f4
	// Params: [ Num(5) Size(0x20) ]
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC);

	// Object: Function AkAudio.AkGameplayStatics.SetReflectionsOrder
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595464
	// Params: [ Num(2) Size(0x5) ]
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths);

	// Object: Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595128
	// Params: [ Num(3) Size(0x14) ]
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue);

	// Object: Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595350
	// Params: [ Num(3) Size(0x10) ]
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);

	// Object: Function AkAudio.AkGameplayStatics.SetPanningRule
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3594ed4
	// Params: [ Num(1) Size(0x1) ]
	void SetPanningRule(enum class EPanningRule PanRule);

	// Object: Function AkAudio.AkGameplayStatics.SetOutputBusVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595050
	// Params: [ Num(2) Size(0x10) ]
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593bd4
	// Params: [ Num(1) Size(0x4) ]
	void SetOcclusionScalingFactor(float ScalingFactor);

	// Object: Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3594aa8
	// Params: [ Num(2) Size(0x10) ]
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor);

	// Object: Function AkAudio.AkGameplayStatics.SetMultiplePositions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595c74
	// Params: [ Num(3) Size(0x19) ]
	void SetMultiplePositions(struct UAKComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class EAkMultiPositionType MultiPositionType);

	// Object: Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595854
	// Params: [ Num(4) Size(0x29) ]
	void SetMultipleChannelMaskEmitterPositions(struct UAKComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class EAkMultiPositionType MultiPositionType);

	// Object: Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595a64
	// Params: [ Num(4) Size(0x29) ]
	void SetMultipleChannelEmitterPositions(struct UAKComponent* GameObjectAkComponent, struct TArray<enum class EAkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class EAkMultiPositionType MultiPositionType);

	// Object: Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x359523c
	// Params: [ Num(3) Size(0x14) ]
	void SetGameObjectToPortalObstruction(struct UAKComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue);

	// Object: Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35937e0
	// Params: [ Num(2) Size(0x20) ]
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed);

	// Object: Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35938ec
	// Params: [ Num(3) Size(0x30) ]
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.SetBusConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3594f6c
	// Params: [ Num(2) Size(0x11) ]
	void SetBusConfig(struct FString BusName, enum class EAkChannelConfiguration ChannelConfiguration);

	// Object: Function AkAudio.AkGameplayStatics.ResetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x359616c
	// Params: [ Num(4) Size(0x20) ]
	void ResetRTPCValue(struct UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC);

	// Object: Function AkAudio.AkGameplayStatics.ReplaceMainOutput
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3594e20
	// Params: [ Num(1) Size(0x18) ]
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings);

	// Object: Function AkAudio.AkGameplayStatics.PostTrigger
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3595f44
	// Params: [ Num(3) Size(0x18) ]
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger);

	// Object: Function AkAudio.AkGameplayStatics.PostEventByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3596f0c
	// Params: [ Num(3) Size(0x19) ]
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.AkGameplayStatics.PostEventAttached
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3597870
	// Params: [ Num(6) Size(0x34) ]
	int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName);

	// Object: Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3596bf4
	// Params: [ Num(4) Size(0x30) ]
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.PostEventAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3596d58
	// Params: [ Num(6) Size(0x3C) ]
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.PostEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3597554
	// Params: [ Num(8) Size(0x54) ]
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName);

	// Object: Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3597038
	// Params: [ Num(6) Size(0x40) ]
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3597294
	// Params: [ Num(7) Size(0x54) ]
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo);

	// Object: Function AkAudio.AkGameplayStatics.PlaySoundToComponentbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3599124
	// Params: [ Num(4) Size(0x20) ]
	int32_t PlaySoundToComponentbyname(struct FString SoundName, struct UActorComponent* Component, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.AkGameplayStatics.PlaySoundToComponent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35992b0
	// Params: [ Num(4) Size(0x18) ]
	int32_t PlaySoundToComponent(struct UAkAudioEvent* AkEvent, struct UActorComponent* Component, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.AkGameplayStatics.PlaySoundbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3599618
	// Params: [ Num(4) Size(0x20) ]
	int32_t PlaySoundbyname(struct FString SoundName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.AkGameplayStatics.PlaySoundAtLocationbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3598e48
	// Params: [ Num(5) Size(0x34) ]
	int32_t PlaySoundAtLocationbyname(struct FString SoundName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.PlaySoundAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3598fbc
	// Params: [ Num(5) Size(0x2C) ]
	int32_t PlaySoundAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.PlaySound2Dbyname
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35993dc
	// Params: [ Num(3) Size(0x18) ]
	int32_t PlaySound2Dbyname(struct FString SoundName, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.AkGameplayStatics.PlaySound2D
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3599528
	// Params: [ Num(3) Size(0x10) ]
	int32_t PlaySound2D(struct UAkAudioEvent* AkEvent, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.AkGameplayStatics.PlaySound
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35997a4
	// Params: [ Num(4) Size(0x18) ]
	int32_t PlaySound(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.AkGameplayStatics.LoadInitBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35942b4
	// Params: [ Num(0) Size(0x0) ]
	void LoadInitBank();

	// Object: Function AkAudio.AkGameplayStatics.LoadBanks
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35942c8
	// Params: [ Num(2) Size(0x11) ]
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);

	// Object: Function AkAudio.AkGameplayStatics.LoadBankByNameAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35943cc
	// Params: [ Num(2) Size(0x20) ]
	void LoadBankByNameAsync(struct FString BankName, struct FDelegate& BankLoadedCallback);

	// Object: Function AkAudio.AkGameplayStatics.LoadBankByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35944d8
	// Params: [ Num(1) Size(0x10) ]
	void LoadBankByName(struct FString BankName);

	// Object: Function AkAudio.AkGameplayStatics.LoadBankAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359457c
	// Params: [ Num(2) Size(0x18) ]
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback);

	// Object: Function AkAudio.AkGameplayStatics.LoadBank
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x359467c
	// Params: [ Num(4) Size(0x38) ]
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.IsGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3599a74
	// Params: [ Num(2) Size(0x9) ]
	bool IsGame(struct UObject* WorldContextObject);

	// Object: Function AkAudio.AkGameplayStatics.IsEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3599b20
	// Params: [ Num(1) Size(0x1) ]
	bool IsEditor();

	// Object: Function AkAudio.AkGameplayStatics.GetSpeakerAngles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3594cc8
	// Params: [ Num(3) Size(0x28) ]
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset);

	// Object: Function AkAudio.AkGameplayStatics.GetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35962c0
	// Params: [ Num(7) Size(0x28) ]
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC);

	// Object: Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593bb0
	// Params: [ Num(1) Size(0x4) ]
	float GetOcclusionScalingFactor();

	// Object: Function AkAudio.AkGameplayStatics.GetDopplerEffectDatas
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3593280
	// Params: [ Num(7) Size(0x30) ]
	float GetDopplerEffectDatas(struct AActor* SoundingObj, struct FVector SoundingObjPos, struct FVector ListeningObjPos, float AddDopplerIntensity, float MinusDopplerIntensity, float DeltaTime);

	// Object: Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593b14
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentAudioCulture();

	// Object: Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593a28
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetAvailableAudioCultures();

	// Object: Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593618
	// Params: [ Num(3) Size(0x18) ]
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type);

	// Object: Function AkAudio.AkGameplayStatics.GetAkComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3599b58
	// Params: [ Num(6) Size(0x30) ]
	struct UAKComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, uint8_t LocationType);

	// Object: Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35936fc
	// Params: [ Num(3) Size(0x18) ]
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type);

	// Object: Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35968c8
	// Params: [ Num(4) Size(0xD) ]
	void ExecuteActionOnPlayingID(enum class EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve);

	// Object: Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3596a1c
	// Params: [ Num(6) Size(0x24) ]
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class EAkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID);

	// Object: Function AkAudio.AkGameplayStatics.ClearDopplerEffectDatas
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593580
	// Params: [ Num(1) Size(0x8) ]
	void ClearDopplerEffectDatas(struct AActor* SoundingObj);

	// Object: Function AkAudio.AkGameplayStatics.ClearBanks
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35947f8
	// Params: [ Num(0) Size(0x0) ]
	void ClearBanks();

	// Object: Function AkAudio.AkGameplayStatics.CancelEventCallback
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359493c
	// Params: [ Num(1) Size(0x10) ]
	void CancelEventCallback(struct FDelegate& PostEventCallback);

	// Object: Function AkAudio.AkGameplayStatics.ApplyDopplerEffectDatas
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35930ec
	// Params: [ Num(5) Size(0x20) ]
	void ApplyDopplerEffectDatas(struct AActor* SoundingObj, struct FVector ListeningObjPos, float AddDopplerIntensity, float MinusDopplerIntensity, float DeltaTime);

	// Object: Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3593d40
	// Params: [ Num(1) Size(0x10) ]
	void AddOutputCaptureMarker(struct FString MarkerText);
};

// Object: Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject
{
	struct UAKComponent* AKComponent; // 0x28(0x8)
};

// Object: Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo
{
	int32_t PlayingID; // 0x30(0x4)
	int32_t EventId; // 0x34(0x4)
};

// Object: Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo
{
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)


	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x359d7e0
	// Params: [ Num(1) Size(0x1) ]
	enum class EAkMidiEventType GetType();

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359d1a4
	// Params: [ Num(2) Size(0x4) ]
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359d3ec
	// Params: [ Num(2) Size(0x9) ]
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359d62c
	// Params: [ Num(2) Size(0x5) ]
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359d56c
	// Params: [ Num(2) Size(0x5) ]
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359d32c
	// Params: [ Num(2) Size(0x5) ]
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359d6ec
	// Params: [ Num(2) Size(0x5) ]
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359d268
	// Params: [ Num(2) Size(0x4) ]
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch);

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x359d7ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetChannel();

	// Object: Function AkAudio.AkMIDIEventCallbackInfo.GetCc
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x359d4ac
	// Params: [ Num(2) Size(0x5) ]
	bool GetCc(struct FAkMidiCc& AsCc);
};

// Object: Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo
{
	int32_t Identifier; // 0x38(0x4)
	int32_t Position; // 0x3C(0x4)
	struct FString Label; // 0x40(0x10)
};

// Object: Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo
{
	float Duration; // 0x38(0x4)
	float EstimatedDuration; // 0x3C(0x4)
	int32_t AudioNodeID; // 0x40(0x4)
	int32_t MediaID; // 0x44(0x4)
	bool bStreaming; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo
{
	int32_t PlayingID; // 0x30(0x4)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct FString UserCueName; // 0x60(0x10)
};

// Object: Class AkAudio.AkGeometryComponent
// Size: 0x4E0 (Inherited: 0x360)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent
{
	enum class EAkMeshType MeshType; // 0x359(0x1)
	int32_t LOD; // 0x35C(0x4)
	float WeldingThreshold; // 0x360(0x4)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x368(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x3B8(0x18)
	bool bEnableDiffraction; // 0x3D0(0x1)
	bool bEnableDiffractionOnBoundaryEdges; // 0x3D1(0x1)
	uint8_t Pad_0x3D3[0x5]; // 0x3D3(0x5)
	struct AActor* AssociatedRoom; // 0x3D8(0x8)
	uint8_t Pad_0x3E0[0x10]; // 0x3E0(0x10)
	struct FAkGeometryData GeometryData; // 0x3F0(0x50)
	struct TMap<int32_t, double> SurfaceAreas; // 0x440(0x50)
	uint8_t Pad_0x490[0x50]; // 0x490(0x50)


	// Object: Function AkAudio.AkGeometryComponent.UpdateGeometry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x359e3d8
	// Params: [ Num(0) Size(0x0) ]
	void UpdateGeometry();

	// Object: Function AkAudio.AkGeometryComponent.SendGeometry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x359e3c4
	// Params: [ Num(0) Size(0x0) ]
	void SendGeometry();

	// Object: Function AkAudio.AkGeometryComponent.RemoveGeometry
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x359e3ec
	// Params: [ Num(0) Size(0x0) ]
	void RemoveGeometry();

	// Object: Function AkAudio.AkGeometryComponent.ConvertMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x359e400
	// Params: [ Num(0) Size(0x0) ]
	void ConvertMesh();
};

// Object: Class AkAudio.AkGroupValue
// Size: 0x68 (Inherited: 0x40)
struct UAkGroupValue : UAkAudioType
{
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x40(0x10)
	uint32_t GroupShortID; // 0x50(0x4)
	uint8_t Pad_0x54[0x14]; // 0x54(0x14)
};

// Object: Class AkAudio.AkHololensInitializationSettings
// Size: 0xF0 (Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x30)


	// Object: Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x359ed98
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkHololensPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkInitBankAssetData
// Size: 0x90 (Inherited: 0x80)
struct UAkInitBankAssetData : UAkAssetDataWithMedia
{
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x80(0x10)
};

// Object: Class AkAudio.AkInitBank
// Size: 0x70 (Inherited: 0x50)
struct UAkInitBank : UAkAssetBase
{
	struct TArray<struct FString> AvailableAudioCultures; // 0x50(0x10)
	struct FString DefaultLanguage; // 0x60(0x10)
};

// Object: Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0xC)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xD0(0x2C)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
};

// Object: Class AkAudio.AkIOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary
{

	// Object: Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a5c48
	// Params: [ Num(2) Size(0x28) ]
	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);

	// Object: Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a5d74
	// Params: [ Num(2) Size(0x20) ]
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

// Object: Class AkAudio.AkItemBoolProperties
// Size: 0x180 (Inherited: 0x140)
struct UAkItemBoolProperties : UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x150(0x10)
	uint8_t Pad_0x160[0x20]; // 0x160(0x20)


	// Object: Function AkAudio.AkItemBoolProperties.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x35a60a4
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString newText);

	// Object: Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a61f4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedProperty();

	// Object: Function AkAudio.AkItemBoolProperties.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a6158
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSearchText();
};

// Object: Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary
{

	// Object: Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a6650
	// Params: [ Num(2) Size(0x28) ]
	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl);

	// Object: Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35a677c
	// Params: [ Num(2) Size(0x20) ]
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl);
};

// Object: Class AkAudio.AkItemProperties
// Size: 0x180 (Inherited: 0x140)
struct UAkItemProperties : UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x150(0x10)
	uint8_t Pad_0x160[0x20]; // 0x160(0x20)


	// Object: Function AkAudio.AkItemProperties.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x35a6aac
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString newText);

	// Object: Function AkAudio.AkItemProperties.GetSelectedProperty
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a6bfc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSelectedProperty();

	// Object: Function AkAudio.AkItemProperties.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a6b60
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSearchText();
};

// Object: Class AkAudio.AkLateReverbComponent
// Size: 0x3D0 (Inherited: 0x350)
struct UAkLateReverbComponent : USceneComponent
{
	bool bEnable; // 0x344(0x1)
	float SendLevel; // 0x348(0x4)
	float FadeRate; // 0x34C(0x4)
	float Priority; // 0x350(0x4)
	bool AutoAssignAuxBus; // 0x354(0x1)
	struct UAkAuxBus* AuxBus; // 0x358(0x8)
	struct FString AuxBusName; // 0x360(0x10)
	uint8_t Pad_0x376[0x2]; // 0x376(0x2)
	struct UAkAuxBus* AuxBusManual; // 0x378(0x8)
	uint8_t Pad_0x380[0x50]; // 0x380(0x50)


	// Object: Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a6f18
	// Params: [ Num(1) Size(0x8) ]
	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent);
};

// Object: Class AkAudio.AkLinuxInitializationSettings
// Size: 0xF0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xC0(0x30)


	// Object: Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x35a7344
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkMacInitializationSettings
// Size: 0xF0 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xC0(0x30)


	// Object: Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x35a76ec
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkMediaAssetData
// Size: 0x78 (Inherited: 0x28)
struct UAkMediaAssetData : UObject
{
	bool IsStreamed; // 0x28(0x1)
	bool UseDeviceMemory; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FString Language; // 0x30(0x10)
	struct FString AssetPlatform; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)
};

// Object: Class AkAudio.AkMediaAsset
// Size: 0x78 (Inherited: 0x28)
struct UAkMediaAsset : UObject
{
	uint32_t ID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString MediaName; // 0x30(0x10)
	bool AutoLoad; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct TArray<struct UObject*> UserData; // 0x48(0x10)
	struct FString Language; // 0x58(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x68(0x8)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class AkAudio.AkLocalizedMediaAsset
// Size: 0x78 (Inherited: 0x78)
struct UAkLocalizedMediaAsset : UAkMediaAsset
{
};

// Object: Class AkAudio.AkExternalMediaAsset
// Size: 0xD0 (Inherited: 0x78)
struct UAkExternalMediaAsset : UAkMediaAsset
{
	uint8_t Pad_0x78[0x58]; // 0x78(0x58)
};

// Object: Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct IAkPlatformInitialisationSettingsBase : IInterface
{
};

// Object: Class AkAudio.AkPooledEmitter
// Size: 0x3A0 (Inherited: 0x380)
struct UAkPooledEmitter : UAkGameObject
{
	uint8_t Pad_0x380[0x20]; // 0x380(0x20)


	// Object: Function AkAudio.AkPooledEmitter.OnEndOfEvent
	// Flags: [Final|Native|Private]
	// Offset: 0x35a865c
	// Params: [ Num(2) Size(0x10) ]
	void OnEndOfEvent(enum class EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo);
};

// Object: Class AkAudio.AkPS4InitializationSettings
// Size: 0xF0 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xB8(0x38)


	// Object: Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x35a8bd0
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkPS4PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkReverbVolume
// Size: 0x350 (Inherited: 0x318)
struct AAkReverbVolume : AVolume
{
	bool bEnabled; // 0x318(0x1)
	uint8_t Pad_0x319[0x7]; // 0x319(0x7)
	struct UAkAuxBus* AuxBus; // 0x320(0x8)
	struct FString AuxBusName; // 0x328(0x10)
	float SendLevel; // 0x338(0x4)
	float FadeRate; // 0x33C(0x4)
	float Priority; // 0x340(0x4)
	uint8_t Pad_0x344[0x4]; // 0x344(0x4)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x348(0x8)
};

// Object: Class AkAudio.AkRoomComponent
// Size: 0x3A0 (Inherited: 0x380)
struct UAkRoomComponent : UAkGameObject
{
	bool bEnable; // 0x374(0x1)
	bool bDynamic; // 0x375(0x1)
	float Priority; // 0x378(0x4)
	float WallOcclusion; // 0x37C(0x4)
	float AuxSendLevel; // 0x380(0x4)
	bool AutoPost; // 0x384(0x1)
	uint8_t Pad_0x38F[0x1]; // 0x38F(0x1)
	struct UAkAcousticTextureSetComponent* GeometryComponent; // 0x390(0x8)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)


	// Object: Function AkAudio.AkRoomComponent.SetGeometryComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35a9158
	// Params: [ Num(1) Size(0x8) ]
	void SetGeometryComponent(struct UAkAcousticTextureSetComponent* textureSetComponent);

	// Object: Function AkAudio.AkRoomComponent.GetPrimitiveParent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35a9200
	// Params: [ Num(1) Size(0x8) ]
	struct UPrimitiveComponent* GetPrimitiveParent();
};

// Object: Class AkAudio.AkRtpc
// Size: 0x40 (Inherited: 0x40)
struct UAkRtpc : UAkAudioType
{
};

// Object: Class AkAudio.AkSettings
// Size: 0x2F0 (Inherited: 0x28)
struct UAkSettings : UObject
{
	uint8_t MaxSimultaneousReverbVolumes; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	struct FDirectoryPath WwiseBankSizeFileFolder; // 0x50(0x10)
	float WwiseBankLruCacheSize; // 0x60(0x4)
	bool bAutoConnectToWAAPI; // 0x64(0x1)
	uint8_t DefaultOcclusionCollisionChannel; // 0x65(0x1)
	uint8_t DefaultFitToGeometryCollisionChannel; // 0x66(0x1)
	uint8_t Pad_0x67[0x1]; // 0x67(0x1)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x68(0x50)
	float GlobalDecayAbsorption; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0xC0(0x28)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0xE8(0x50)
	struct FString HFDampingName; // 0x138(0x10)
	struct FString DecayEstimateName; // 0x148(0x10)
	struct FString TimeToFirstReflectionName; // 0x158(0x10)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x168(0x28)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x190(0x28)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x1B8(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> AudioInputEvent; // 0x1E0(0x28)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x208(0x50)
	bool SplitSwitchContainerMedia; // 0x258(0x1)
	bool SplitMediaPerFolder; // 0x259(0x1)
	bool UseEventBasedPackaging; // 0x25A(0x1)
	bool EnableAutomaticAssetSynchronization; // 0x25B(0x1)
	uint8_t Pad_0x25C[0x4]; // 0x25C(0x4)
	struct FString CommandletCommitMessage; // 0x260(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x270(0x50)
	bool AskedToUseNewAssetManagement; // 0x2C0(0x1)
	bool bEnableMultiCoreRendering; // 0x2C1(0x1)
	bool MigratedEnableMultiCoreRendering; // 0x2C2(0x1)
	bool FixupRedirectorsDuringMigration; // 0x2C3(0x1)
	uint8_t Pad_0x2C4[0x4]; // 0x2C4(0x4)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x2C8(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x2D8(0x10)
	uint8_t Pad_0x2E8[0x8]; // 0x2E8(0x8)
};

// Object: Class AkAudio.AkSettingsPerUser
// Size: 0x80 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject
{
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x4)
	bool bAutoConnectToWAAPI; // 0x64(0x1)
	bool AutoSyncSelection; // 0x65(0x1)
	bool SuppressWwiseProjectPathWarnings; // 0x66(0x1)
	bool SoundDataGenerationSkipLanguage; // 0x67(0x1)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)
};

// Object: Class AkAudio.AkSlider
// Size: 0x910 (Inherited: 0x140)
struct UAkSlider : UWidget
{
	float Value; // 0x140(0x4)
	struct FDelegate ValueDelegate; // 0x144(0x10)
	uint8_t Pad_0x154[0xC]; // 0x154(0xC)
	struct FSliderStyle WidgetStyle; // 0x160(0x6E0)
	uint8_t Orientation; // 0x840(0x1)
	uint8_t Pad_0x841[0x3]; // 0x841(0x3)
	struct FLinearColor SliderBarColor; // 0x844(0x10)
	struct FLinearColor SliderHandleColor; // 0x854(0x10)
	bool IndentHandle; // 0x864(0x1)
	bool Locked; // 0x865(0x1)
	uint8_t Pad_0x866[0x2]; // 0x866(0x2)
	float StepSize; // 0x868(0x4)
	bool IsFocusable; // 0x86C(0x1)
	uint8_t Pad_0x86D[0x3]; // 0x86D(0x3)
	struct FAkPropertyToControl ThePropertyToControl; // 0x870(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x880(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x8C0(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x8D0(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x8E0(0x10)
	uint8_t Pad_0x8F0[0x20]; // 0x8F0(0x20)


	// Object: Function AkAudio.AkSlider.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35aa5e8
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float InValue);

	// Object: Function AkAudio.AkSlider.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35aa3e0
	// Params: [ Num(1) Size(0x4) ]
	void SetStepSize(float InValue);

	// Object: Function AkAudio.AkSlider.SetSliderHandleColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35aa290
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderHandleColor(struct FLinearColor InValue);

	// Object: Function AkAudio.AkSlider.SetSliderBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35aa338
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderBarColor(struct FLinearColor InValue);

	// Object: Function AkAudio.AkSlider.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35aa488
	// Params: [ Num(1) Size(0x1) ]
	void SetLocked(bool InValue);

	// Object: Function AkAudio.AkSlider.SetIndentHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35aa538
	// Params: [ Num(1) Size(0x1) ]
	void SetIndentHandle(bool InValue);

	// Object: Function AkAudio.AkSlider.SetAkSliderItemProperty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35aa0f4
	// Params: [ Num(1) Size(0x10) ]
	void SetAkSliderItemProperty(struct FString ItemProperty);

	// Object: Function AkAudio.AkSlider.SetAkSliderItemId
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x35aa1dc
	// Params: [ Num(1) Size(0x10) ]
	void SetAkSliderItemId(struct FGuid& ItemID);

	// Object: Function AkAudio.AkSlider.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35aa690
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();

	// Object: Function AkAudio.AkSlider.GetAkSliderItemProperty
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35aa03c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAkSliderItemProperty();

	// Object: Function AkAudio.AkSlider.GetAkSliderItemId
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35aa1a8
	// Params: [ Num(1) Size(0x10) ]
	struct FGuid GetAkSliderItemId();
};

// Object: Class AkAudio.AkSpatialAudioVolume
// Size: 0x330 (Inherited: 0x318)
struct AAkSpatialAudioVolume : AVolume
{
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x318(0x8)
	struct UAkLateReverbComponent* LateReverb; // 0x320(0x8)
	struct UAkRoomComponent* Room; // 0x328(0x8)
};

// Object: Class AkAudio.AkSpotReflector
// Size: 0x308 (Inherited: 0x2E0)
struct AAkSpotReflector : AActor
{
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x2E0(0x8)
	struct FString EarlyReflectionAuxBusName; // 0x2E8(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x2F8(0x8)
	float DistanceScalingFactor; // 0x300(0x4)
	float Level; // 0x304(0x4)
};

// Object: Class AkAudio.AkStateValue
// Size: 0x68 (Inherited: 0x68)
struct UAkStateValue : UAkGroupValue
{
};

// Object: Class AkAudio.AkSubmixInputComponent
// Size: 0x650 (Inherited: 0x5F0)
struct UAkSubmixInputComponent : UAkAudioInputComponent
{
	uint8_t Pad_0x5F0[0x8]; // 0x5F0(0x8)
	struct USoundSubmix* SubmixToRecord; // 0x5F8(0x8)
	uint8_t Pad_0x600[0x50]; // 0x600(0x50)
};

// Object: Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x390 (Inherited: 0x360)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent
{
	bool bEnableSurfaceReflectors; // 0x359(0x1)
	struct TArray<struct FAkSurfacePoly> AcousticPolys; // 0x360(0x10)
	bool bEnableDiffraction; // 0x370(0x1)
	bool bEnableDiffractionOnBoundaryEdges; // 0x371(0x1)
	uint8_t Pad_0x373[0x5]; // 0x373(0x5)
	struct AActor* AssociatedRoom; // 0x378(0x8)
	uint8_t Pad_0x380[0x10]; // 0x380(0x10)


	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35af748
	// Params: [ Num(0) Size(0x0) ]
	void UpdateSurfaceReflectorSet();

	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35af770
	// Params: [ Num(0) Size(0x0) ]
	void SendSurfaceReflectorSet();

	// Object: Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x35af75c
	// Params: [ Num(0) Size(0x0) ]
	void RemoveSurfaceReflectorSet();
};

// Object: Class AkAudio.AkSwitchInitializationSettings
// Size: 0xF0 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xC0(0x30)


	// Object: Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x35afd24
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkSwitchPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchPlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkSwitchValue
// Size: 0x68 (Inherited: 0x68)
struct UAkSwitchValue : UAkGroupValue
{
};

// Object: Class AkAudio.AkTrigger
// Size: 0x40 (Inherited: 0x40)
struct UAkTrigger : UAkAudioType
{
};

// Object: Class AkAudio.AkTVOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0xC)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xA8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xD0(0x2C)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
};

// Object: Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary
{

	// Object: Function AkAudio.AkWaapiCalls.Unsubscribe
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b0a60
	// Params: [ Num(3) Size(0x20) ]
	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);

	// Object: Function AkAudio.AkWaapiCalls.SubscribeToWaapi
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b0c40
	// Params: [ Num(6) Size(0x50) ]
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);

	// Object: Function AkAudio.AkWaapiCalls.SetSubscriptionID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b15f4
	// Params: [ Num(2) Size(0xC) ]
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID);

	// Object: Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b146c
	// Params: [ Num(2) Size(0x11) ]
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback);

	// Object: Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b1398
	// Params: [ Num(2) Size(0x11) ]
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback);

	// Object: Function AkAudio.AkWaapiCalls.GetSubscriptionID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b1540
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription);

	// Object: Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35b0854
	// Params: [ Num(2) Size(0x20) ]
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);

	// Object: Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35b0974
	// Params: [ Num(2) Size(0x18) ]
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);

	// Object: Function AkAudio.AkWaapiCalls.CallWaapi
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b0ff4
	// Params: [ Num(4) Size(0x40) ]
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions);
};

// Object: Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary
{

	// Object: Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35b1c14
	// Params: [ Num(2) Size(0x28) ]
	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames);

	// Object: Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35b1d40
	// Params: [ Num(2) Size(0x20) ]
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};

// Object: Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary
{

	// Object: Function AkAudio.AkWaapiJsonManager.SetStringField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b4780
	// Params: [ Num(4) Size(0x40) ]
	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetObjectField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b3c68
	// Params: [ Num(4) Size(0x40) ]
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetNumberField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b40d8
	// Params: [ Num(4) Size(0x38) ]
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetBoolField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b4428
	// Params: [ Num(4) Size(0x38) ]
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b38d4
	// Params: [ Num(4) Size(0x40) ]
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b34f4
	// Params: [ Num(4) Size(0x40) ]
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetStringField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b3284
	// Params: [ Num(3) Size(0x30) ]
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetObjectField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b28d4
	// Params: [ Num(3) Size(0x30) ]
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetNumberField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b2e18
	// Params: [ Num(3) Size(0x24) ]
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetIntegerField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b2be4
	// Params: [ Num(3) Size(0x24) ]
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetBoolField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b304c
	// Params: [ Num(3) Size(0x21) ]
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.GetArrayField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35b2538
	// Params: [ Num(3) Size(0x30) ]
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target);

	// Object: Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35b20f0
	// Params: [ Num(2) Size(0x28) ]
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject);

	// Object: Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x35b232c
	// Params: [ Num(2) Size(0x20) ]
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject);
};

// Object: Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary
{

	// Object: Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35b50ac
	// Params: [ Num(2) Size(0x28) ]
	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri);

	// Object: Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x35b51d8
	// Params: [ Num(2) Size(0x20) ]
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri);
};

// Object: Class AkAudio.AkWindowsInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x34)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)


	// Object: Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x35b55d4
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkWin32PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkWin64PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo
{
};

// Object: Class AkAudio.AkWwiseTree
// Size: 0x180 (Inherited: 0x140)
struct UAkWwiseTree : UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x150(0x10)
	uint8_t Pad_0x160[0x20]; // 0x160(0x20)


	// Object: Function AkAudio.AkWwiseTree.SetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x35b7dfc
	// Params: [ Num(1) Size(0x10) ]
	void SetSearchText(struct FString newText);

	// Object: Function AkAudio.AkWwiseTree.GetSelectedItem
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35b7f4c
	// Params: [ Num(1) Size(0x30) ]
	struct FAkWwiseObjectDetails GetSelectedItem();

	// Object: Function AkAudio.AkWwiseTree.GetSearchText
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x35b7eb0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSearchText();
};

// Object: Class AkAudio.AkWwiseTreeSelector
// Size: 0x1A0 (Inherited: 0x140)
struct UAkWwiseTreeSelector : UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x150(0x10)
	uint8_t Pad_0x160[0x40]; // 0x160(0x40)
};

// Object: Class AkAudio.AkXboxOneInitializationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x8)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xC0(0x34)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)


	// Object: Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	// Flags: [Final|Native|Public]
	// Offset: 0x35b8558
	// Params: [ Num(1) Size(0x1) ]
	void MigrateMultiCoreRendering(bool NewValue);
};

// Object: Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo
{
};

// Object: Class AkAudio.AudioManager
// Size: 0x28 (Inherited: 0x28)
struct UAudioManager : UBlueprintFunctionLibrary
{

	// Object: Function AkAudio.AudioManager.UnmuteWwiseAudio
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bb720
	// Params: [ Num(0) Size(0x0) ]
	void UnmuteWwiseAudio();

	// Object: Function AkAudio.AudioManager.UnloadBankAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35bd60c
	// Params: [ Num(2) Size(0x18) ]
	void UnloadBankAsync(struct FName& BankName, struct FDelegate& Callback);

	// Object: Function AkAudio.AudioManager.UnloadBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35bd720
	// Params: [ Num(1) Size(0x8) ]
	void UnloadBank(struct FName& BankName);

	// Object: Function AkAudio.AudioManager.StopEventByPlayingID
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bc968
	// Params: [ Num(3) Size(0x9) ]
	bool StopEventByPlayingID(int32_t InPlayingID, float FadeOutTime);

	// Object: Function AkAudio.AudioManager.StopEventByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bca54
	// Params: [ Num(4) Size(0x1D) ]
	bool StopEventByName(struct FString EventName, struct UAkGameObject* Emitter, float FadeOutTime);

	// Object: Function AkAudio.AudioManager.StopEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bcb8c
	// Params: [ Num(4) Size(0x15) ]
	bool StopEvent(struct UAkAudioEvent* EventReference, struct UAkGameObject* Emitter, float FadeOutTime);

	// Object: Function AkAudio.AudioManager.SetVoiceVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bb748
	// Params: [ Num(1) Size(0x4) ]
	void SetVoiceVolume(float Volume);

	// Object: Function AkAudio.AudioManager.SetVoiceEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bb910
	// Params: [ Num(1) Size(0x1) ]
	void SetVoiceEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bc238
	// Params: [ Num(4) Size(0x29) ]
	bool SetSwitch(struct FString SwitchGroupName, struct FString SwitchName, struct UAkGameObject* Target);

	// Object: Function AkAudio.AudioManager.SetState
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bc56c
	// Params: [ Num(4) Size(0x29) ]
	bool SetState(struct FString StateGroupName, struct FString StateName, struct UObject* Context);

	// Object: Function AkAudio.AudioManager.SetSoundVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bb878
	// Params: [ Num(1) Size(0x4) ]
	void SetSoundVolume(float Volume);

	// Object: Function AkAudio.AudioManager.SetSoundEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bba50
	// Params: [ Num(1) Size(0x1) ]
	void SetSoundEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetMusicVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bb7e0
	// Params: [ Num(1) Size(0x4) ]
	void SetMusicVolume(float Volume);

	// Object: Function AkAudio.AudioManager.SetMusicEnabled
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bb9b0
	// Params: [ Num(1) Size(0x1) ]
	void SetMusicEnabled(bool Enabled);

	// Object: Function AkAudio.AudioManager.SetGlobalRTPC
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bbcdc
	// Params: [ Num(5) Size(0x21) ]
	bool SetGlobalRTPC(struct FString ParameterName, float Value, float UpdateTolerance, struct UObject* Context);

	// Object: Function AkAudio.AudioManager.SetEmitterRTPC
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bbe50
	// Params: [ Num(5) Size(0x25) ]
	bool SetEmitterRTPC(struct FString ParameterName, float Value, struct UAkGameObject* Emitter, float UpdateTolerance);

	// Object: Function AkAudio.AudioManager.ResetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bbbe4
	// Params: [ Num(3) Size(0x19) ]
	bool ResetRTPCValue(struct FString ParameterName, struct UAkGameObject* Emitter);

	// Object: Function AkAudio.AudioManager.ReloadBankByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35bd568
	// Params: [ Num(1) Size(0x8) ]
	void ReloadBankByName(struct FName& BankName);

	// Object: Function AkAudio.AudioManager.PostEventAtLocationByNameEx
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x35bccb4
	// Params: [ Num(7) Size(0x54) ]
	uint32_t PostEventAtLocationByNameEx(struct FString EventName, struct FVector& Location, struct FRotator& Rotation, struct UObject* Context, struct TArray<struct FAkAudioParamsSwitch>& Switches, struct TArray<struct FAkAudioParamsRTPC>& RTPCs);

	// Object: Function AkAudio.AudioManager.PostEventAtLocationByName
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x35bcf58
	// Params: [ Num(5) Size(0x34) ]
	uint32_t PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Rotation, struct UObject* Context);

	// Object: Function AkAudio.AudioManager.PostEventAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35bd0cc
	// Params: [ Num(5) Size(0x2C) ]
	int32_t PostEventAtLocation(struct UAkAudioEvent* EventReference, struct FVector Location, struct FRotator Rotation, struct UObject* Context);

	// Object: Function AkAudio.AudioManager.PostEvent3DByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bd234
	// Params: [ Num(3) Size(0x1C) ]
	int32_t PostEvent3DByName(struct FString EventName, struct UAkGameObject* AkGameObject);

	// Object: Function AkAudio.AudioManager.PostEvent3D
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bd328
	// Params: [ Num(3) Size(0x14) ]
	int32_t PostEvent3D(struct UAkAudioEvent* EventReference, struct UAkGameObject* Emitter);

	// Object: Function AkAudio.AudioManager.PostEvent2DByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bd40c
	// Params: [ Num(2) Size(0x14) ]
	int32_t PostEvent2DByName(struct FString EventName);

	// Object: Function AkAudio.AudioManager.PostEvent2D
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bd4c0
	// Params: [ Num(2) Size(0xC) ]
	int32_t PostEvent2D(struct UAkAudioEvent* EventReference);

	// Object: Function AkAudio.AudioManager.MuteWwiseAudio
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bb734
	// Params: [ Num(0) Size(0x0) ]
	void MuteWwiseAudio();

	// Object: Function AkAudio.AudioManager.LoadBankByNameAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35bd7c4
	// Params: [ Num(2) Size(0x18) ]
	void LoadBankByNameAsync(struct FName& BankName, struct FDelegate& Callback);

	// Object: Function AkAudio.AudioManager.LoadBankByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35bd8d8
	// Params: [ Num(1) Size(0x8) ]
	void LoadBankByName(struct FName& BankName);

	// Object: Function AkAudio.AudioManager.LoadBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bd97c
	// Params: [ Num(1) Size(0x8) ]
	void LoadBank(struct UAkAudioBank* BankReference);

	// Object: Function AkAudio.AudioManager.IsSwitchAt
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bc0f4
	// Params: [ Num(4) Size(0x29) ]
	bool IsSwitchAt(struct FString SwitchGroupName, struct FString SwitchName, struct UAkGameObject* Target);

	// Object: Function AkAudio.AudioManager.IsStateAt
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bc468
	// Params: [ Num(3) Size(0x21) ]
	bool IsStateAt(struct FString StateGroupName, struct FString StateName);

	// Object: Function AkAudio.AudioManager.IsEventPlaying
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bc6b0
	// Params: [ Num(3) Size(0x19) ]
	bool IsEventPlaying(struct FString EventName, struct UAkGameObject* Emitter);

	// Object: Function AkAudio.AudioManager.GetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bbfc8
	// Params: [ Num(3) Size(0x28) ]
	struct FString GetSwitch(struct FString SwitchGroupName, struct UAkGameObject* Target);

	// Object: Function AkAudio.AudioManager.GetState
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bc37c
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetState(struct FString StateGroupName);

	// Object: Function AkAudio.AudioManager.GetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bbaf0
	// Params: [ Num(3) Size(0x1C) ]
	float GetRTPCValue(struct FString ParameterName, struct UAkGameObject* Emitter);

	// Object: Function AkAudio.AudioManager.ExecuteActionOnEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bc7a8
	// Params: [ Num(5) Size(0x21) ]
	bool ExecuteActionOnEvent(struct FString EventName, struct UAkGameObject* Emitter, enum class EAkActionOnEventType ActionType, float FadeTime);
};

// Object: Class AkAudio.BankManager
// Size: 0x3F0 (Inherited: 0x28)
struct UBankManager : UObject
{
	uint8_t Pad_0x28[0x3C8]; // 0x28(0x3C8)


	// Object: Function AkAudio.BankManager.OnBankAsyncUnloaded
	// Flags: [Final|Native|Public]
	// Offset: 0x35be62c
	// Params: [ Num(2) Size(0x8) ]
	void OnBankAsyncUnloaded(enum class EAkResult Result, uint32_t BankId);

	// Object: Function AkAudio.BankManager.OnBankAsyncLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x35be714
	// Params: [ Num(2) Size(0x8) ]
	void OnBankAsyncLoaded(enum class EAkResult Result, uint32_t BankId);
};

// Object: Class AkAudio.AkEmitterTickProxy
// Size: 0x48 (Inherited: 0x40)
struct UAkEmitterTickProxy : UAkFrameTickProxy
{
	struct TWeakObjectPtr<struct UAKComponent> AKComponent; // 0x40(0x8)
};

// Object: Class AkAudio.EmitterManager
// Size: 0x98 (Inherited: 0x58)
struct UEmitterManager : UTickableAkAudioSubsystem
{
	struct TWeakObjectPtr<struct UAKComponent> SelfEmitter; // 0x58(0x8)
	struct FMulticastInlineDelegate OnSelfEmitterChanged; // 0x60(0x10)
	struct TArray<struct UAkPooledEmitter*> AvailableEmitterQueue; // 0x70(0x10)
	struct TArray<struct UAkPooledEmitter*> OccupiedEmitterQueue; // 0x80(0x10)
	uint8_t Pad_0x90[0x8]; // 0x90(0x8)


	// Object: Function AkAudio.EmitterManager.SetSelfEmitter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bee38
	// Params: [ Num(1) Size(0x8) ]
	void SetSelfEmitter(struct UAKComponent* Emitter);

	// Object: Function AkAudio.EmitterManager.RemoveSelfEmitter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35becf4
	// Params: [ Num(1) Size(0x8) ]
	void RemoveSelfEmitter(struct UObject* WorldContextObject);

	// Object: Function AkAudio.EmitterManager.IsSelfEmitter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x35bed8c
	// Params: [ Num(2) Size(0x9) ]
	bool IsSelfEmitter(struct UAKComponent* Emitter);
};

// Object: Class AkAudio.GameSyncManager
// Size: 0x1C0 (Inherited: 0x30)
struct UGameSyncManager : UAkAudioSubsystem
{
	struct TMap<struct UAkGameObject*, struct FCachedGameSyncData> EmitterGameSyncData; // 0x30(0x50)
	struct TMap<struct UAkGameObject*, struct FEventCooldownData> EmitterCooldownData; // 0x80(0x50)
	struct TMap<struct FString, float> GlobalCooldownData; // 0xD0(0x50)
	struct TMap<struct FString, float> GlobalRTPCData; // 0x120(0x50)
	struct TMap<struct FString, struct FString> GlobalStateData; // 0x170(0x50)
};

// Object: Class AkAudio.AkListenerTickProxy
// Size: 0x48 (Inherited: 0x40)
struct UAkListenerTickProxy : UAkFrameTickProxy
{
	struct TWeakObjectPtr<struct UAKComponent> AKComponent; // 0x40(0x8)
};

// Object: Class AkAudio.ListenerManager
// Size: 0x58 (Inherited: 0x58)
struct UListenerManager : UTickableAkAudioSubsystem
{
};

// Object: Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1C0 (Inherited: 0xD8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection
{
	uint8_t Pad_0xD8[0x40]; // 0xD8(0x40)
	struct UAkAudioEvent* Event; // 0x118(0x8)
	bool RetriggerEvent; // 0x120(0x1)
	uint8_t Pad_0x121[0x3]; // 0x121(0x3)
	int32_t ScrubTailLengthMs; // 0x124(0x4)
	bool StopAtSectionEnd; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
	struct FString EventName; // 0x130(0x10)
	uint8_t Pad_0x140[0x20]; // 0x140(0x20)
	float MaxSourceDuration; // 0x160(0x4)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct FString MaxDurationSourceID; // 0x168(0x10)
	uint8_t Pad_0x178[0x48]; // 0x178(0x48)
};

// Object: Class AkAudio.MovieSceneAkTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneAkTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	bool bIsAMasterTrack; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack
{
};

// Object: Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x240 (Inherited: 0xD8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection
{
	struct UAkRtpc* RTPC; // 0xD8(0x8)
	struct FString Name; // 0xE0(0x10)
	struct FRichCurve FloatCurve; // 0xF0(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x170(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1A0(0xA0)
};

// Object: Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack
{
};

// Object: Class AkAudio.PostEventAsync
// Size: 0xA0 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	uint8_t Pad_0x40[0x60]; // 0x40(0x60)


	// Object: Function AkAudio.PostEventAsync.PostEventAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x35c0708
	// Params: [ Num(8) Size(0x50) ]
	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);

	// Object: Function AkAudio.PostEventAsync.PollPostEventFuture
	// Flags: [Final|Native|Private]
	// Offset: 0x35c06f4
	// Params: [ Num(0) Size(0x0) ]
	void PollPostEventFuture();
};

// Object: Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	uint8_t Pad_0x40[0x40]; // 0x40(0x40)


	// Object: Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x35c0dfc
	// Params: [ Num(5) Size(0x30) ]
	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation);

	// Object: Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// Flags: [Final|Native|Private]
	// Offset: 0x35c0de8
	// Params: [ Num(0) Size(0x0) ]
	void PollPostEventFuture();
};

// Object: Class AkAudio.AkEventPriorityInstance
// Size: 0xC8 (Inherited: 0x28)
struct UAkEventPriorityInstance : UObject
{
	uint8_t Pad_0x28[0x88]; // 0x28(0x88)
	struct TWeakObjectPtr<struct UAkGameObject> Emitter; // 0xB0(0x8)
	struct TWeakObjectPtr<struct UAkEventPriorityGroup> OwnerGroup; // 0xB8(0x8)
	struct TWeakObjectPtr<struct UPriorityManager> OwnerMgr; // 0xC0(0x8)


	// Object: Function AkAudio.AkEventPriorityInstance.OnEventFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x35c5108
	// Params: [ Num(2) Size(0x10) ]
	void OnEventFinished(enum class EAkCallbackType Type, struct UAkCallbackInfo* Info);
};

// Object: Class AkAudio.AkEventPriorityGroup
// Size: 0x60 (Inherited: 0x28)
struct UAkEventPriorityGroup : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct UAkEventPriorityInstance*> ActiveAndWaitingInstances; // 0x30(0x10)
	struct TArray<struct UAkEventPriorityInstance*> AvailableInstances; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
};

// Object: Class AkAudio.PriorityManager
// Size: 0x160 (Inherited: 0x58)
struct UPriorityManager : UTickableAkAudioSubsystem
{
	struct FMulticastInlineDelegate OnEventWithPriorityPlayed; // 0x58(0x10)
	struct TMap<struct UAkGameObject*, struct UAkEventPriorityInstance*> PlayingInstanceForBattleBroadcast; // 0x68(0x50)
	struct TMap<struct UAkGameObject*, struct UAkEventPriorityInstance*> PlayingInstanceForCharacter; // 0xB8(0x50)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct TMap<struct FName, struct UAkEventPriorityGroup*> PriorityGroups; // 0x110(0x50)
};

// Object: Class AkAudio.WwiseDataQuery
// Size: 0x28 (Inherited: 0x28)
struct UWwiseDataQuery : UObject
{
};

} // namespace SDK
