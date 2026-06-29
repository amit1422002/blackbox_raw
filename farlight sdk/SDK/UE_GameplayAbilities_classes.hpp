// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d92d0
	// Params: [ Num(3) Size(0x2D) ]
	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d960c
	// Params: [ Num(3) Size(0x2D) ]
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d8f94
	// Params: [ Num(3) Size(0x2D) ]
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d97a4
	// Params: [ Num(3) Size(0x2D) ]
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d21c4
	// Params: [ Num(2) Size(0x20) ]
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d241c
	// Params: [ Num(3) Size(0x28) ]
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d37a8
	// Params: [ Num(3) Size(0x28) ]
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30dc43c
	// Params: [ Num(3) Size(0xC0) ]
	void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30db458
	// Params: [ Num(3) Size(0x71) ]
	bool NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30da14c
	// Params: [ Num(5) Size(0x30) ]
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d4734
	// Params: [ Num(17) Size(0x188) ]
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30da38c
	// Params: [ Num(3) Size(0x40) ]
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dc338
	// Params: [ Num(2) Size(0x39) ]
	bool IsValid(struct FGameplayAttribute Attribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d73f8
	// Params: [ Num(2) Size(0xD1) ]
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d770c
	// Params: [ Num(2) Size(0xD1) ]
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d6798
	// Params: [ Num(2) Size(0xD1) ]
	bool HasHitResult(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d912c
	// Params: [ Num(3) Size(0x60) ]
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d8c58
	// Params: [ Num(3) Size(0x60) ]
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d8dfc
	// Params: [ Num(3) Size(0x38) ]
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d5afc
	// Params: [ Num(2) Size(0xDC) ]
	struct FVector GetOrigin(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d1aa4
	// Params: [ Num(3) Size(0x4C) ]
	float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d5e10
	// Params: [ Num(2) Size(0x100) ]
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d6108
	// Params: [ Num(2) Size(0xD8) ]
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d9468
	// Params: [ Num(3) Size(0xB4) ]
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d6aac
	// Params: [ Num(2) Size(0x158) ]
	struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d5720
	// Params: [ Num(5) Size(0xF1) ]
	bool GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d5394
	// Params: [ Num(4) Size(0xE5) ]
	bool GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dc010
	// Params: [ Num(4) Size(0x48) ]
	float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dbce8
	// Params: [ Num(4) Size(0x48) ]
	float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dbe7c
	// Params: [ Num(4) Size(0x48) ]
	float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dc1a4
	// Params: [ Num(4) Size(0x48) ]
	float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d1f60
	// Params: [ Num(2) Size(0x28) ]
	struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dab80
	// Params: [ Num(2) Size(0x2C) ]
	int32_t GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d1cb8
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d9b14
	// Params: [ Num(2) Size(0x38) ]
	struct TArray<struct AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d9ca4
	// Params: [ Num(3) Size(0x40) ]
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d70e8
	// Params: [ Num(2) Size(0xD4) ]
	int32_t GetActorCount(struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d6da8
	// Params: [ Num(3) Size(0xE0) ]
	struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d1734
	// Params: [ Num(2) Size(0xC) ]
	float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d1894
	// Params: [ Num(2) Size(0xC) ]
	float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d1944
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d19f4
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d1648
	// Params: [ Num(3) Size(0x14) ]
	float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d17e4
	// Params: [ Num(2) Size(0xC) ]
	float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d1560
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dc8b8
	// Params: [ Num(2) Size(0x10) ]
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d6418
	// Params: [ Num(3) Size(0xE8) ]
	void ForwardGameplayCueToTarget(struct TScriptInterface<IGameplayCueInterface> TargetCueInterface, uint8_t EventType, struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30da570
	// Params: [ Num(3) Size(0x60) ]
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30db7a8
	// Params: [ Num(7) Size(0x8C) ]
	float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dba68
	// Params: [ Num(6) Size(0x88) ]
	float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30db600
	// Params: [ Num(3) Size(0x71) ]
	bool EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30d8060
	// Params: [ Num(2) Size(0x24) ]
	void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d8ac4
	// Params: [ Num(2) Size(0x19) ]
	bool EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d8930
	// Params: [ Num(2) Size(0x19) ]
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d85fc
	// Params: [ Num(2) Size(0x19) ]
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d7a20
	// Params: [ Num(2) Size(0x20) ]
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d7d40
	// Params: [ Num(2) Size(0x20) ]
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d8228
	// Params: [ Num(2) Size(0x24) ]
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d7ed0
	// Params: [ Num(2) Size(0x20) ]
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d8790
	// Params: [ Num(2) Size(0xA0) ]
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d7bb0
	// Params: [ Num(2) Size(0x20) ]
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d83bc
	// Params: [ Num(3) Size(0xA1) ]
	void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d993c
	// Params: [ Num(4) Size(0x39) ]
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, struct AActor* Actor);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d4f58
	// Params: [ Num(4) Size(0x171) ]
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d9e78
	// Params: [ Num(4) Size(0x30) ]
	struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x30d3ff0
	// Params: [ Num(17) Size(0x188) ]
	void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, struct AActor*& Instigator, struct AActor*& EffectCauser, struct UObject*& SourceObject, struct UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, struct USceneComponent*& TargetAttachComponent);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d3a40
	// Params: [ Num(4) Size(0x30) ]
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d3d18
	// Params: [ Num(4) Size(0x30) ]
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x30db068
	// Params: [ Num(3) Size(0x78) ]
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d294c
	// Params: [ Num(3) Size(0x30) ]
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d26b4
	// Params: [ Num(3) Size(0x28) ]
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d3230
	// Params: [ Num(3) Size(0x40) ]
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d3510
	// Params: [ Num(3) Size(0x28) ]
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d2cb8
	// Params: [ Num(3) Size(0x40) ]
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30d2f98
	// Params: [ Num(3) Size(0x28) ]
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dae44
	// Params: [ Num(3) Size(0xE8) ]
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30dacd4
	// Params: [ Num(2) Size(0xB0) ]
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x30da87c
	// Params: [ Num(3) Size(0x40) ]
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*>& ActorArray, bool OneTargetPerHandle);

	// Object: Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30daa30
	// Params: [ Num(2) Size(0x30) ]
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor);
};

// Object: Class GameplayAbilities.AbilitySystemComponent
// Size: 0x15A0 (Inherited: 0x148)
struct UAbilitySystemComponent : UGameplayTasksComponent
{
	uint8_t Pad_0x148[0x10]; // 0x148(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x158(0x10)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x168(0x10)
	struct FName AffectedAnimInstanceTag; // 0x178(0x8)
	uint8_t Pad_0x180[0x1A0]; // 0x180(0x1A0)
	float OutgoingDuration; // 0x320(0x4)
	float IncomingDuration; // 0x324(0x4)
	uint8_t Pad_0x328[0x20]; // 0x328(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x348(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x358(0x10)
	uint8_t Pad_0x368[0x60]; // 0x368(0x60)
	bool UserAbilityActivationInhibited; // 0x3C8(0x1)
	bool ReplicationProxyEnabled; // 0x3C9(0x1)
	bool bSuppressGrantAbility; // 0x3CA(0x1)
	bool bSuppressGameplayCues; // 0x3CB(0x1)
	uint8_t Pad_0x3CC[0x4]; // 0x3CC(0x4)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x3D0(0x10)
	uint8_t Pad_0x3E0[0x28]; // 0x3E0(0x28)
	struct AActor* OwnerActor; // 0x408(0x8)
	struct AActor* AvatarActor; // 0x410(0x8)
	uint8_t Pad_0x418[0x10]; // 0x418(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x428(0x120)
	uint8_t Pad_0x548[0x30]; // 0x548(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x578(0x10)
	uint8_t Pad_0x588[0x1E0]; // 0x588(0x1E0)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x768(0x48)
	struct TArray<struct FGameplayAbilityLocalAnimMontage> LocalAnimMontageInfoContainer; // 0x7B0(0x10)
	struct FGameplayAbilityRepAnimMontageContainer RepAnimMontageInfoContainer; // 0x7C0(0x120)
	struct FGameplayAbilityRepAnimMontageContainer RepAnimMontageInfoContainerForSpectator; // 0x8E0(0x120)
	bool bCachedIsNetSimulated; // 0xA00(0x1)
	bool bPendingMontageRep; // 0xA01(0x1)
	uint8_t Pad_0xA02[0x6]; // 0xA02(0x6)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0xA08(0x38)
	uint8_t Pad_0xA40[0xA0]; // 0xA40(0xA0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0xAE0(0x488)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xF68(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0x1090(0x128)
	uint8_t Pad_0x11B8[0x128]; // 0x11B8(0x128)
	struct TArray<uint8_t> BlockedAbilityBindings; // 0x12E0(0x10)
	uint8_t Pad_0x12F0[0x128]; // 0x12F0(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x1418(0x60)
	uint8_t Pad_0x1478[0x10]; // 0x1478(0x10)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1488(0x118)


	// Object: Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30e16a0
	// Params: [ Num(3) Size(0xA) ]
	bool TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation);

	// Object: Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x30e179c
	// Params: [ Num(3) Size(0x22) ]
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);

	// Object: Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x30e0eb8
	// Params: [ Num(0) Size(0x0) ]
	void TargetConfirm();

	// Object: Function GameplayAbilities.AbilitySystemComponent.TargetCancel
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x30e0e9c
	// Params: [ Num(0) Size(0x0) ]
	void TargetCancel();

	// Object: Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x30e0ed4
	// Params: [ Num(1) Size(0x1) ]
	void SetUserAbilityActivationInhibited(bool NewInhibit);

	// Object: Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x30e43e8
	// Params: [ Num(2) Size(0x154) ]
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel);

	// Object: Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x30e44f8
	// Params: [ Num(2) Size(0xC) ]
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x30df978
	// Params: [ Num(4) Size(0xD0) ]
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x30e00f4
	// Params: [ Num(3) Size(0x20) ]
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e0460
	// Params: [ Num(3) Size(0x38) ]
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e0618
	// Params: [ Num(5) Size(0x68) ]
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e0a48
	// Params: [ Num(5) Size(0x44) ]
	void ServerSetReplicatedEventWithPayload(uint8_t EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e0c8c
	// Params: [ Num(4) Size(0x38) ]
	void ServerSetReplicatedEvent(uint8_t EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e02a8
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e0384
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e1538
	// Params: [ Num(1) Size(0x10) ]
	void ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e1644
	// Params: [ Num(0) Size(0x0) ]
	void ServerPrintDebug_Request();

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x30df704
	// Params: [ Num(3) Size(0x40) ]
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRateWithAnimInstanceID
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x30de4e4
	// Params: [ Num(3) Size(0xD) ]
	void ServerCurrentMontageSetPlayRateWithAnimInstanceID(struct UAnimMontage* ClientAnimMontage, float InPlayRate, uint8_t AnimInstanceID);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x30de8ec
	// Params: [ Num(2) Size(0xC) ]
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionNameWithAnimInstanceID
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x30de740
	// Params: [ Num(5) Size(0x1D) ]
	void ServerCurrentMontageSetNextSectionNameWithAnimInstanceID(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName, uint8_t AnimInstanceID);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x30deb1c
	// Params: [ Num(4) Size(0x1C) ]
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionNameWithAnimInstanceID
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x30de614
	// Params: [ Num(3) Size(0x11) ]
	void ServerCurrentMontageJumpToSectionNameWithAnimInstanceID(struct UAnimMontage* ClientAnimMontage, struct FName SectionName, uint8_t AnimInstanceID);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x30dea08
	// Params: [ Num(2) Size(0x10) ]
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	// Offset: 0x30df49c
	// Params: [ Num(2) Size(0x28) ]
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x30e0fc4
	// Params: [ Num(1) Size(0x50) ]
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x30e4b7c
	// Params: [ Num(3) Size(0x14) ]
	void RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x30e4ca8
	// Params: [ Num(3) Size(0xD) ]
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30e3ad4
	// Params: [ Num(2) Size(0x24) ]
	int32_t RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30e39dc
	// Params: [ Num(2) Size(0x24) ]
	int32_t RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30e37ec
	// Params: [ Num(2) Size(0x24) ]
	int32_t RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30e38e4
	// Params: [ Num(2) Size(0x24) ]
	int32_t RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	// Flags: [Native|Public]
	// Offset: 0x30e13dc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ServerDebugString();

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	// Flags: [Native|Protected]
	// Offset: 0x30decb8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ReplicatedAnimMontage();

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	// Flags: [Final|Native|Public]
	// Offset: 0x30e0e88
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OwningActor();

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	// Flags: [Native|Public]
	// Offset: 0x30e13f8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ClientDebugString();

	// Object: Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	// Flags: [Native|Protected]
	// Offset: 0x30e028c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ActivateAbilities();

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e2880
	// Params: [ Num(3) Size(0x108) ]
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e2fdc
	// Params: [ Num(3) Size(0x50) ]
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e1988
	// Params: [ Num(3) Size(0x108) ]
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e2c50
	// Params: [ Num(3) Size(0xF0) ]
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e3484
	// Params: [ Num(2) Size(0x90) ]
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e3254
	// Params: [ Num(3) Size(0x38) ]
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e1d58
	// Params: [ Num(3) Size(0xF0) ]
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e20e4
	// Params: [ Num(2) Size(0x90) ]
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e22c4
	// Params: [ Num(3) Size(0xF0) ]
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters);

	// Object: Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x30e2650
	// Params: [ Num(3) Size(0x38) ]
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x30e4878
	// Params: [ Num(4) Size(0x38) ]
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context);

	// Object: Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x30e4724
	// Params: [ Num(1) Size(0x18) ]
	struct FGameplayEffectContextHandle MakeEffectContext();

	// Object: Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30e5038
	// Params: [ Num(2) Size(0x10) ]
	void K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable);

	// Object: Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x30e18cc
	// Params: [ Num(2) Size(0x9) ]
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag);

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x30e0f8c
	// Params: [ Num(1) Size(0x1) ]
	bool GetUserAbilityActivationInhibited();

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x30e4294
	// Params: [ Num(3) Size(0x44) ]
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute);

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x30e45f0
	// Params: [ Num(4) Size(0x18) ]
	int32_t GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x30e3bcc
	// Params: [ Num(2) Size(0x30) ]
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(struct FGameplayTagContainer Tags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x30e3d00
	// Params: [ Num(2) Size(0x160) ]
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x30df8c4
	// Params: [ Num(1) Size(0x4) ]
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x30e08fc
	// Params: [ Num(3) Size(0x20) ]
	void ClientSetReplicatedEvent(uint8_t EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x30e1414
	// Params: [ Num(2) Size(0x14) ]
	void ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x30df5ec
	// Params: [ Num(2) Size(0x28) ]
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x30df384
	// Params: [ Num(2) Size(0x28) ]
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x30decd4
	// Params: [ Num(3) Size(0xD0) ]
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x30df184
	// Params: [ Num(2) Size(0x20) ]
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x30df290
	// Params: [ Num(2) Size(0x6) ]
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);

	// Object: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30e4030
	// Params: [ Num(5) Size(0x38) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context);

	// Object: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30e3e08
	// Params: [ Num(4) Size(0x30) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext);

	// Object: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x30e4ecc
	// Params: [ Num(3) Size(0x20) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target);

	// Object: Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x30e4dac
	// Params: [ Num(2) Size(0x18) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle);

	// Object: DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void AbilityConfirmOrCancel__DelegateSignature();

	// Object: DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x4) ]
	void AbilityAbilityKey__DelegateSignature(int32_t InputID);
};

// Object: Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x3D0 (Inherited: 0x3D0)
struct AAbilitySystemDebugHUD : AHUD
{
};

// Object: Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x260 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject
{
	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x28(0x18)
	uint8_t Pad_0x40[0x28]; // 0x40(0x28)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x68(0x8)
	struct FName ActivateFailIsDeadName; // 0x70(0x8)
	struct FGameplayTag ActivateFailCooldownTag; // 0x78(0x8)
	struct FName ActivateFailCooldownName; // 0x80(0x8)
	struct FGameplayTag ActivateFailCostTag; // 0x88(0x8)
	struct FName ActivateFailCostName; // 0x90(0x8)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0x98(0x8)
	struct FName ActivateFailTagsBlockedName; // 0xA0(0x8)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0xA8(0x8)
	struct FName ActivateFailTagsMissingName; // 0xB0(0x8)
	struct FGameplayTag ActivateFailNetworkingTag; // 0xB8(0x8)
	struct FName ActivateFailNetworkingName; // 0xC0(0x8)
	int32_t MinimalReplicationTagCountBits; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0xD0(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0xE0(0x1)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xE1(0x1)
	uint8_t Pad_0xE2[0x2]; // 0xE2(0x2)
	struct FName GameplayModEvaluationChannelAliases[0xA]; // 0xE4(0x50)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct FSoftObjectPath GlobalCurveTableName; // 0x138(0x18)
	struct UCurveTable* GlobalCurveTable; // 0x150(0x8)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x158(0x18)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x170(0x8)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x178(0x18)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x190(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x1A0(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x1B0(0x18)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x1C8(0x18)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x1E0(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x1F0(0x18)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x208(0x8)
	bool PredictTargetGameplayEffects; // 0x210(0x1)
	uint8_t Pad_0x211[0x7]; // 0x211(0x7)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x218(0x8)
	uint8_t Pad_0x220[0x40]; // 0x220(0x40)


	// Object: Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	// Flags: [Exec|Native|Public]
	// Offset: 0x30e994c
	// Params: [ Num(0) Size(0x0) ]
	void ToggleIgnoreAbilitySystemCosts();

	// Object: Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	// Flags: [Exec|Native|Public]
	// Offset: 0x30e9968
	// Params: [ Num(0) Size(0x0) ]
	void ToggleIgnoreAbilitySystemCooldowns();
};

// Object: Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28 (Inherited: 0x28)
struct IAbilitySystemInterface : IInterface
{
};

// Object: Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct IAbilitySystemReplicationProxyInterface : IInterface
{
};

// Object: Class GameplayAbilities.AttributeSet
// Size: 0x30 (Inherited: 0x28)
struct UAttributeSet : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70 (Inherited: 0x30)
struct UAbilitySystemTestAttributeSet : UAttributeSet
{
	float MaxHealth; // 0x2C(0x4)
	float Health; // 0x30(0x4)
	float Mana; // 0x34(0x4)
	float MaxMana; // 0x38(0x4)
	float Damage; // 0x3C(0x4)
	float SpellDamage; // 0x40(0x4)
	float PhysicalDamage; // 0x44(0x4)
	float CritChance; // 0x48(0x4)
	float CritMultiplier; // 0x4C(0x4)
	float ArmorDamageReduction; // 0x50(0x4)
	float DodgeChance; // 0x54(0x4)
	float LifeSteal; // 0x58(0x4)
	float Strength; // 0x5C(0x4)
	float StackingAttribute1; // 0x60(0x4)
	float StackingAttribute2; // 0x64(0x4)
	float NoStackAttribute; // 0x68(0x4)
};

// Object: Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x388 (Inherited: 0x368)
struct AAbilitySystemTestPawn : ADefaultPawn
{
	uint8_t Pad_0x368[0x18]; // 0x368(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x380(0x8)
};

// Object: Class GameplayAbilities.AbilityTask
// Size: 0x78 (Inherited: 0x60)
struct UAbilityTask : UGameplayTask
{
	struct UGameplayAbility* Ability; // 0x60(0x8)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x68(0x8)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xA8 (Inherited: 0x78)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask
{
	struct FName ForceName; // 0x74(0x8)
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // 0x7C(0x1)
	struct FVector FinishSetVelocity; // 0x80(0xC)
	float FinishClampVelocity; // 0x8C(0x4)
	struct UCharacterMovementComponent* MovementComponent; // 0x90(0x8)
	uint8_t Pad_0x99[0xF]; // 0x99(0xF)
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xD8 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xA8(0x10)
	struct FVector WorldDirection; // 0xB8(0xC)
	float Strength; // 0xC4(0x4)
	float Duration; // 0xC8(0x4)
	bool bIsAdditive; // 0xCC(0x1)
	uint8_t Pad_0xCD[0x3]; // 0xCD(0x3)
	struct UCurveFloat* StrengthOverTime; // 0xD0(0x8)


	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30eacf8
	// Params: [ Num(11) Size(0x50) ]
	struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x100 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xB8(0x10)
	struct FRotator Rotation; // 0xC8(0xC)
	float Distance; // 0xD4(0x4)
	float Height; // 0xD8(0x4)
	float Duration; // 0xDC(0x4)
	float MinimumLandedTriggerTime; // 0xE0(0x4)
	bool bFinishOnLanded; // 0xE4(0x1)
	uint8_t Pad_0xE5[0x3]; // 0xE5(0x3)
	struct UCurveVector* PathOffsetCurve; // 0xE8(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0xF0(0x8)
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)


	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x30eb8d0
	// Params: [ Num(1) Size(0x88) ]
	void OnLandedCallback(struct FHitResult& Hit);

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30eb998
	// Params: [ Num(0) Size(0x0) ]
	void Finish();

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30eb524
	// Params: [ Num(14) Size(0x58) ]
	struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve);
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x120 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinished; // 0xA8(0x10)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
	struct FVector StartLocation; // 0xC0(0xC)
	struct FVector TargetLocation; // 0xCC(0xC)
	struct AActor* TargetActor; // 0xD8(0x8)
	struct FVector TargetLocationOffset; // 0xE0(0xC)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0xEC(0x1)
	uint8_t Pad_0xED[0x3]; // 0xED(0x3)
	float Duration; // 0xF0(0x4)
	bool bDisableDestinationReachedInterrupt; // 0xF4(0x1)
	bool bSetNewMovementMode; // 0xF5(0x1)
	uint8_t NewMovementMode; // 0xF6(0x1)
	bool bRestrictSpeedToExpected; // 0xF7(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xF8(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0x100(0x8)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x108(0x8)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x110(0x8)
	uint8_t Pad_0x118[0x8]; // 0x118(0x8)


	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	// Flags: [Final|Native|Public]
	// Offset: 0x30ec0f0
	// Params: [ Num(2) Size(0x10) ]
	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget);

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	// Flags: [Final|Native|Protected]
	// Offset: 0x30ec0dc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TargetLocation();

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30ec1d4
	// Params: [ Num(20) Size(0xA0) ]
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, uint8_t MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);

	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30ec8f0
	// Params: [ Num(18) Size(0x78) ]
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, uint8_t MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0xF8 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnTimedOut; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xB8(0x10)
	struct FVector StartLocation; // 0xC8(0xC)
	struct FVector TargetLocation; // 0xD4(0xC)
	float Duration; // 0xE0(0x4)
	bool bSetNewMovementMode; // 0xE4(0x1)
	uint8_t NewMovementMode; // 0xE5(0x1)
	bool bRestrictSpeedToExpected; // 0xE6(0x1)
	uint8_t Pad_0xE7[0x1]; // 0xE7(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xE8(0x8)
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)


	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30ed694
	// Params: [ Num(12) Size(0x50) ]
	struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, uint8_t MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// Object: Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x100 (Inherited: 0xA8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xA8(0x10)
	struct FVector Location; // 0xB8(0xC)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct AActor* LocationActor; // 0xC8(0x8)
	float Strength; // 0xD0(0x4)
	float Duration; // 0xD4(0x4)
	float Radius; // 0xD8(0x4)
	bool bIsPush; // 0xDC(0x1)
	bool bIsAdditive; // 0xDD(0x1)
	bool bNoZForce; // 0xDE(0x1)
	uint8_t Pad_0xDF[0x1]; // 0xDF(0x1)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xE0(0x8)
	struct UCurveFloat* StrengthOverTime; // 0xE8(0x8)
	bool bUseFixedWorldDirection; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	struct FRotator FixedWorldDirection; // 0xF4(0xC)


	// Object: Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30edfb4
	// Params: [ Num(18) Size(0x78) ]
	struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// Object: Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xC0 (Inherited: 0x78)
struct UAbilityTask_MoveToLocation : UAbilityTask
{
	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x78(0x10)
	uint8_t Pad_0x88[0x4]; // 0x88(0x4)
	struct FVector StartLocation; // 0x8C(0xC)
	struct FVector TargetLocation; // 0x98(0xC)
	float DurationOfMovement; // 0xA4(0x4)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UCurveFloat* LerpCurve; // 0xB0(0x8)
	struct UCurveVector* LerpCurveVector; // 0xB8(0x8)


	// Object: Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30eec18
	// Params: [ Num(7) Size(0x38) ]
	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve);
};

// Object: Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x90 (Inherited: 0x78)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask
{
	struct FMulticastInlineDelegate OnSync; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)


	// Object: Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f098c
	// Params: [ Num(3) Size(0x18) ]
	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType);

	// Object: Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30f0a74
	// Params: [ Num(0) Size(0x0) ]
	void OnSignalCallback();
};

// Object: Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x138 (Inherited: 0x78)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask
{
	struct FMulticastInlineDelegate OnCompleted; // 0x78(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x88(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x98(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnTaskMontageBlendingOut; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnDestroyTaskBeforeMontageBlendOut; // 0xC8(0x10)
	uint8_t Pad_0xD8[0x28]; // 0xD8(0x28)
	struct UAnimMontage* MontageToPlay; // 0x100(0x8)
	float Rate; // 0x108(0x4)
	struct FName StartSection; // 0x10C(0x8)
	float StartPosition; // 0x114(0x4)
	float AnimRootMotionTranslationScale; // 0x118(0x4)
	bool bStopWhenAbilityEnds; // 0x11C(0x1)
	bool bInterruptedCalledBeforeBlendingOut; // 0x11D(0x1)
	uint8_t AnimInstanceID; // 0x11E(0x1)
	uint8_t Pad_0x11F[0x1]; // 0x11F(0x1)
	float BlendInTime; // 0x120(0x4)
	float BlendOutTime; // 0x124(0x4)
	float BlendOutTimeOnInterrupted; // 0x128(0x4)
	bool bUseNewBlendInToBlendOutOldMontage; // 0x12C(0x1)
	uint8_t Pad_0x12D[0x3]; // 0x12D(0x3)
	enum class ERepAnimPositionMethod RepAnimPositionMethod; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)


	// Object: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	// Flags: [Final|Native|Public]
	// Offset: 0x30f12bc
	// Params: [ Num(0) Size(0x0) ]
	void OnMontageInterrupted();

	// Object: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	// Flags: [Final|Native|Public]
	// Offset: 0x30f11cc
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted);

	// Object: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	// Flags: [Final|Native|Public]
	// Offset: 0x30f12d0
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted);

	// Object: Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f0f58
	// Params: [ Num(9) Size(0x38) ]
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bRepPosition);
};

// Object: Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xB0 (Inherited: 0x78)
struct UAbilityTask_Repeat : UAbilityTask
{
	struct FMulticastInlineDelegate OnPerformAction; // 0x78(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x88(0x10)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)


	// Object: Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f17c4
	// Params: [ Num(4) Size(0x18) ]
	struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount);
};

// Object: Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xC0 (Inherited: 0x78)
struct UAbilityTask_SpawnActor : UAbilityTask
{
	struct FMulticastInlineDelegate Success; // 0x78(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x88(0x10)
	uint8_t Pad_0x98[0x28]; // 0x98(0x28)


	// Object: Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f22c0
	// Params: [ Num(4) Size(0x40) ]
	struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class);

	// Object: Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30f1c8c
	// Params: [ Num(3) Size(0x38) ]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor);

	// Object: Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x30f1f74
	// Params: [ Num(5) Size(0x41) ]
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor*& SpawnedActor);
};

// Object: Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xB0 (Inherited: 0x78)
struct UAbilityTask_StartAbilityState : UAbilityTask
{
	struct FMulticastInlineDelegate OnStateEnded; // 0x78(0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x88(0x10)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)


	// Object: Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f29d4
	// Params: [ Num(4) Size(0x20) ]
	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState);
};

// Object: Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xA0 (Inherited: 0x78)
struct UAbilityTask_VisualizeTargeting : UAbilityTask
{
	struct FMulticastInlineDelegate TimeElapsed; // 0x78(0x10)
	uint8_t Pad_0x88[0x18]; // 0x88(0x18)


	// Object: Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f30cc
	// Params: [ Num(5) Size(0x28) ]
	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration);

	// Object: Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f3230
	// Params: [ Num(5) Size(0x28) ]
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration);

	// Object: Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30f2eac
	// Params: [ Num(2) Size(0x10) ]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor);

	// Object: Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x30f2f90
	// Params: [ Num(4) Size(0x19) ]
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x140 (Inherited: 0x78)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask
{
	struct FMulticastInlineDelegate OnActivate; // 0x78(0x10)
	uint8_t Pad_0x88[0xB8]; // 0x88(0xB8)


	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f39fc
	// Params: [ Num(5) Size(0x68) ]
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f3800
	// Params: [ Num(5) Size(0x60) ]
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f3c50
	// Params: [ Num(6) Size(0x28) ]
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	// Flags: [Final|Native|Public]
	// Offset: 0x30f3e04
	// Params: [ Num(1) Size(0x8) ]
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xF0 (Inherited: 0x78)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask
{
	struct FMulticastInlineDelegate OnCommit; // 0x78(0x10)
	uint8_t Pad_0x88[0x68]; // 0x88(0x68)


	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f4354
	// Params: [ Num(4) Size(0x60) ]
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f44fc
	// Params: [ Num(5) Size(0x28) ]
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce);

	// Object: Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	// Flags: [Final|Native|Public]
	// Offset: 0x30f4668
	// Params: [ Num(1) Size(0x8) ]
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xF0 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	uint8_t Pad_0x88[0x60]; // 0x88(0x60)
	struct UAbilitySystemComponent* ExternalOwner; // 0xE8(0x8)


	// Object: Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f4bcc
	// Params: [ Num(9) Size(0x70) ]
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, uint8_t InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner);

	// Object: Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f4ea0
	// Params: [ Num(7) Size(0x68) ]
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, struct AActor* OptionalExternalOwner);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x138 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	uint8_t Pad_0x88[0xA8]; // 0x88(0xA8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x130(0x8)


	// Object: Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f54f0
	// Params: [ Num(8) Size(0x98) ]
	struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, uint8_t ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner);
};

// Object: Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xE8 (Inherited: 0x78)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	uint8_t Pad_0x88[0x58]; // 0x88(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xE0(0x8)


	// Object: Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f5b9c
	// Params: [ Num(7) Size(0x60) ]
	struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, uint8_t ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner);
};

// Object: Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x90 (Inherited: 0x78)
struct UAbilityTask_WaitCancel : UAbilityTask
{
	struct FMulticastInlineDelegate OnCancel; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)


	// Object: Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f6198
	// Params: [ Num(2) Size(0x10) ]
	struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility);

	// Object: Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30f6240
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalCancelCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30f6254
	// Params: [ Num(0) Size(0x0) ]
	void OnCancelCallback();
};

// Object: Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitConfirm : UAbilityTask
{
	struct FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f6648
	// Params: [ Num(2) Size(0x10) ]
	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility);

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30f66f0
	// Params: [ Num(1) Size(0x8) ]
	void OnConfirmCallback(struct UGameplayAbility* InAbility);
};

// Object: Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xA0 (Inherited: 0x78)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask
{
	struct FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x88(0x10)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)


	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f6b78
	// Params: [ Num(2) Size(0x10) ]
	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility);

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30f6c34
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalConfirmCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30f6c20
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalCancelCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30f6c5c
	// Params: [ Num(0) Size(0x0) ]
	void OnConfirmCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30f6c48
	// Params: [ Num(0) Size(0x0) ]
	void OnCancelCallback();
};

// Object: Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitDelay : UAbilityTask
{
	struct FMulticastInlineDelegate OnFinish; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f7110
	// Params: [ Num(3) Size(0x18) ]
	struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1D0 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask
{
	uint8_t Pad_0x78[0x148]; // 0x78(0x148)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1C0(0x8)
	uint8_t Pad_0x1C8[0x8]; // 0x1C8(0x8)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x30f7558
	// Params: [ Num(3) Size(0x2A8) ]
	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1F0 (Inherited: 0x1D0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied
{
	struct FMulticastInlineDelegate OnApplied; // 0x1D0(0x10)
	uint8_t Pad_0x1E0[0x10]; // 0x1E0(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f8e34
	// Params: [ Num(8) Size(0xC8) ]
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f9230
	// Params: [ Num(8) Size(0xD8) ]
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1F0 (Inherited: 0x1D0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied
{
	struct FMulticastInlineDelegate OnApplied; // 0x1D0(0x10)
	uint8_t Pad_0x1E0[0x10]; // 0x1E0(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f9ae0
	// Params: [ Num(8) Size(0xC8) ]
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30f9edc
	// Params: [ Num(8) Size(0xD8) ]
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x140 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask
{
	struct FMulticastInlineDelegate bLocked; // 0x78(0x10)
	uint8_t Pad_0x88[0xA8]; // 0x88(0xA8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x130(0x8)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fa78c
	// Params: [ Num(6) Size(0xC0) ]
	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xB8 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask
{
	struct FMulticastInlineDelegate OnRemoved; // 0x78(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
	uint8_t Pad_0x98[0x20]; // 0x98(0x20)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fae7c
	// Params: [ Num(3) Size(0x18) ]
	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle);

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x30faf68
	// Params: [ Num(1) Size(0x20) ]
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xB0 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fb464
	// Params: [ Num(3) Size(0x18) ]
	struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle);

	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	// Flags: [Final|Native|Public]
	// Offset: 0x30fb550
	// Params: [ Num(3) Size(0x10) ]
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xA8 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask
{
	struct FMulticastInlineDelegate EventReceived; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x90(0x8)
	uint8_t Pad_0x98[0x10]; // 0x98(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fba5c
	// Params: [ Num(6) Size(0x28) ]
	struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitGameplayTag : UAbilityTask
{
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x80(0x8)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	// Flags: [Native|Public]
	// Offset: 0x30fca68
	// Params: [ Num(2) Size(0xC) ]
	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xA8 (Inherited: 0x98)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag
{
	struct FMulticastInlineDelegate Added; // 0x98(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fbfc8
	// Params: [ Num(5) Size(0x28) ]
	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// Object: Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xA8 (Inherited: 0x98)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag
{
	struct FMulticastInlineDelegate Removed; // 0x98(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fc590
	// Params: [ Num(5) Size(0x28) ]
	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// Object: Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitInputPress : UAbilityTask
{
	struct FMulticastInlineDelegate OnPress; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fcca8
	// Params: [ Num(3) Size(0x18) ]
	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);

	// Object: Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30fcd98
	// Params: [ Num(0) Size(0x0) ]
	void OnPressCallback();
};

// Object: Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitInputRelease : UAbilityTask
{
	struct FMulticastInlineDelegate OnRelease; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fd198
	// Params: [ Num(3) Size(0x18) ]
	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);

	// Object: Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30fd288
	// Params: [ Num(0) Size(0x0) ]
	void OnReleaseCallback();
};

// Object: Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0x98 (Inherited: 0x78)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// Flags: [Final|Native|Public]
	// Offset: 0x30fd770
	// Params: [ Num(3) Size(0xA) ]
	void OnMovementModeChange(struct ACharacter* Character, uint8_t PrevMovementMode, uint8_t PreviousCustomMode);

	// Object: Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fd688
	// Params: [ Num(3) Size(0x18) ]
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, uint8_t NewMode);
};

// Object: Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x88 (Inherited: 0x78)
struct UAbilityTask_WaitOverlap : UAbilityTask
{
	struct FMulticastInlineDelegate OnOverlap; // 0x78(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fdc78
	// Params: [ Num(2) Size(0x10) ]
	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility);

	// Object: Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x30fdd20
	// Params: [ Num(5) Size(0xAC) ]
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit);
};

// Object: Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xB8 (Inherited: 0x78)
struct UAbilityTask_WaitTargetData : UAbilityTask
{
	struct FMulticastInlineDelegate ValidData; // 0x78(0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88(0x10)
	struct AGameplayAbilityTargetActor* TargetClass; // 0x98(0x8)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fe5b8
	// Params: [ Num(5) Size(0x28) ]
	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, uint8_t ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x30fe720
	// Params: [ Num(5) Size(0x28) ]
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, uint8_t ConfirmationType, struct AGameplayAbilityTargetActor* Class);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x30feb30
	// Params: [ Num(0) Size(0x0) ]
	void OnTargetDataReplicatedCancelledCallback();

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x30feb44
	// Params: [ Num(2) Size(0x30) ]
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x30fe9dc
	// Params: [ Num(1) Size(0x28) ]
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x30fe888
	// Params: [ Num(1) Size(0x28) ]
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.K2_ExternalConfirm
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30fe2e0
	// Params: [ Num(1) Size(0x1) ]
	void K2_ExternalConfirm(bool bEndTask);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.K2_ExternalCancel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30fe2c4
	// Params: [ Num(0) Size(0x0) ]
	void K2_ExternalCancel();

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x30fe398
	// Params: [ Num(2) Size(0x10) ]
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor);

	// Object: Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x30fe47c
	// Params: [ Num(4) Size(0x19) ]
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor);
};

// Object: Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xA0 (Inherited: 0x78)
struct UAbilityTask_WaitVelocityChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnVelocityChage; // 0x78(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x88(0x8)
	uint8_t Pad_0x90[0x10]; // 0x90(0x10)


	// Object: Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x30ff2d0
	// Params: [ Num(4) Size(0x20) ]
	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude);
};

// Object: Class GameplayAbilities.GameplayAbility
// Size: 0x440 (Inherited: 0x28)
struct UGameplayAbility : UObject
{
	uint8_t Pad_0x28[0x80]; // 0x28(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xA8(0x20)
	bool bReplicateInputDirectly; // 0xC8(0x1)
	bool RemoteInstanceEnded; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x4]; // 0xCA(0x4)
	uint8_t ReplicationPolicy; // 0xCE(0x1)
	uint8_t InstancingPolicy; // 0xCF(0x1)
	bool bServerRespectsRemoteAbilityCancellation; // 0xD0(0x1)
	bool bRetriggerInstancedAbility; // 0xD1(0x1)
	uint8_t Pad_0xD2[0x6]; // 0xD2(0x6)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xD8(0x20)
	struct FGameplayEventData CurrentEventData; // 0xF8(0xB0)
	uint8_t NetExecutionPolicy; // 0x1A8(0x1)
	uint8_t NetSecurityPolicy; // 0x1A9(0x1)
	uint8_t Pad_0x1AA[0x6]; // 0x1AA(0x6)
	struct UGameplayEffect* CostGameplayEffectClass; // 0x1B0(0x8)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1B8(0x10)
	struct UGameplayEffect* CooldownGameplayEffectClass; // 0x1C8(0x8)
	struct FGameplayTagQuery CancelAbilitiesMatchingTagQuery; // 0x1D0(0x48)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x218(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x238(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x258(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x278(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x298(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x2B8(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x2D8(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x2F8(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x318(0x20)
	uint8_t Pad_0x338[0x20]; // 0x338(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x358(0x10)
	uint8_t Pad_0x368[0x10]; // 0x368(0x10)
	struct TMap<uint8_t, struct UAnimMontage*> CurrentMontageMap; // 0x378(0x50)
	uint8_t Pad_0x3C8[0x60]; // 0x3C8(0x60)
	bool bIsActive; // 0x428(0x1)
	bool bIsCancelable; // 0x429(0x1)
	bool bIsBlockingOtherAbilities; // 0x42A(0x1)
	uint8_t Pad_0x42B[0x15]; // 0x42B(0x15)


	// Object: Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3104178
	// Params: [ Num(1) Size(0x1) ]
	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);

	// Object: Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x31040ac
	// Params: [ Num(1) Size(0x1) ]
	void SetCanBeCanceled(bool bCanBeCanceled);

	// Object: Function GameplayAbilities.GameplayAbility.SendGameplayEvent
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x310387c
	// Params: [ Num(2) Size(0xB8) ]
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload);

	// Object: Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3103ccc
	// Params: [ Num(0) Size(0x0) ]
	void RemoveGrantedByEffect();

	// Object: Function GameplayAbilities.GameplayAbility.MontageStop
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3101c70
	// Params: [ Num(2) Size(0x5) ]
	void MontageStop(float OverrideBlendOutTime, uint8_t AnimInstanceID);

	// Object: Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3101d58
	// Params: [ Num(3) Size(0x11) ]
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName, uint8_t AnimInstanceID);

	// Object: Function GameplayAbilities.GameplayAbility.MontageJumpToSection
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3101e7c
	// Params: [ Num(2) Size(0x9) ]
	void MontageJumpToSection(struct FName SectionName, uint8_t AnimInstanceID);

	// Object: Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x3101b14
	// Params: [ Num(2) Size(0x70) ]
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName);

	// Object: Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x3101bec
	// Params: [ Num(1) Size(0x60) ]
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();

	// Object: Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3104264
	// Params: [ Num(3) Size(0x20) ]
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0xF9) ]
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);

	// Object: Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x310224c
	// Params: [ Num(1) Size(0x8) ]
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag);

	// Object: Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void K2_OnEndAbility(bool bWasCancelled);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x3102764
	// Params: [ Num(2) Size(0xD8) ]
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x3102958
	// Params: [ Num(2) Size(0x20) ]
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context);

	// Object: Function GameplayAbilities.GameplayAbility.K2_EndAbility
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x3103860
	// Params: [ Num(0) Size(0x0) ]
	void K2_EndAbility();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CommitExecute
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void K2_CommitExecute();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3103e94
	// Params: [ Num(2) Size(0x2) ]
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);

	// Object: Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3103f58
	// Params: [ Num(3) Size(0x3) ]
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);

	// Object: Function GameplayAbilities.GameplayAbility.K2_CommitAbility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x310406c
	// Params: [ Num(1) Size(0x1) ]
	bool K2_CommitAbility();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3103e14
	// Params: [ Num(1) Size(0x1) ]
	bool K2_CheckAbilityCost();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3103e54
	// Params: [ Num(1) Size(0x1) ]
	bool K2_CheckAbilityCooldown();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CancelAbility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3104164
	// Params: [ Num(0) Size(0x0) ]
	void K2_CancelAbility();

	// Object: Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x69) ]
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer& RelevantTags);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3102e80
	// Params: [ Num(3) Size(0x48) ]
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x31035a0
	// Params: [ Num(2) Size(0x18) ]
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle);

	// Object: Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x31022fc
	// Params: [ Num(3) Size(0xD9) ]
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);

	// Object: Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0x3102544
	// Params: [ Num(3) Size(0x21) ]
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0xB0) ]
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);

	// Object: Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void K2_ActivateAbility();

	// Object: Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x3103ce8
	// Params: [ Num(0) Size(0x0) ]
	void InvalidateClientPredictionKey();

	// Object: Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x310490c
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3104974
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetOwningActorFromActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x310478c
	// Params: [ Num(1) Size(0x18) ]
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();

	// Object: Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3103cfc
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetCurrentSourceObject();

	// Object: Function GameplayAbilities.GameplayAbility.GetCurrentMontage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3103d64
	// Params: [ Num(2) Size(0x10) ]
	struct UAnimMontage* GetCurrentMontage(uint8_t AnimInstanceID);

	// Object: Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3104230
	// Params: [ Num(1) Size(0x4) ]
	float GetCooldownTimeRemaining();

	// Object: Function GameplayAbilities.GameplayAbility.GetContextFromOwner
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3104430
	// Params: [ Num(2) Size(0x40) ]
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData);

	// Object: Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3104940
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetAvatarActorFromActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x31049a8
	// Params: [ Num(1) Size(0x48) ]
	struct FGameplayAbilityActorInfo GetActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x31048d8
	// Params: [ Num(1) Size(0x8) ]
	struct UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();

	// Object: Function GameplayAbilities.GameplayAbility.GetAbilityLevel
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3103d30
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAbilityLevel();

	// Object: Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x31020b4
	// Params: [ Num(1) Size(0x8) ]
	void EndTaskByInstanceName(struct FName InstanceName);

	// Object: Function GameplayAbilities.GameplayAbility.EndAbilityState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3101f64
	// Params: [ Num(1) Size(0x8) ]
	void EndAbilityState(struct FName OptionalStateNameToEnd);

	// Object: Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x310215c
	// Params: [ Num(2) Size(0x9) ]
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask);

	// Object: Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x310200c
	// Params: [ Num(1) Size(0x8) ]
	void CancelTaskByInstanceName(struct FName InstanceName);

	// Object: Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3102b30
	// Params: [ Num(2) Size(0xC) ]
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3102c20
	// Params: [ Num(2) Size(0x24) ]
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3102d50
	// Params: [ Num(2) Size(0x24) ]
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);

	// Object: Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x310323c
	// Params: [ Num(5) Size(0x48) ]
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);

	// Object: Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x310372c
	// Params: [ Num(4) Size(0x18) ]
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);
};

// Object: Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x440 (Inherited: 0x440)
struct UGameplayAbility_CharacterJump : UGameplayAbility
{
};

// Object: Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x478 (Inherited: 0x440)
struct UGameplayAbility_Montage : UGameplayAbility
{
	struct UAnimMontage* MontageToPlay; // 0x440(0x8)
	float PlayRate; // 0x448(0x4)
	struct FName SectionName; // 0x44C(0x8)
	uint8_t Pad_0x454[0x4]; // 0x454(0x4)
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // 0x458(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x468(0x10)
};

// Object: Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xA0 (Inherited: 0xA0)
struct UGameplayAbilityBlueprint : UBlueprint
{
};

// Object: Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset
{
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x30(0x10)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x3F0 (Inherited: 0x2E0)
struct AGameplayAbilityTargetActor : AActor
{
	bool ShouldProduceTargetDataOnServer; // 0x2E0(0x1)
	uint8_t Pad_0x2E1[0xF]; // 0x2E1(0xF)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x2F0(0x60)
	uint8_t Pad_0x350[0x30]; // 0x350(0x30)
	struct APlayerController* MasterPC; // 0x380(0x8)
	struct UGameplayAbility* OwningAbility; // 0x388(0x8)
	bool bDestroyOnConfirmation; // 0x390(0x1)
	uint8_t Pad_0x391[0x7]; // 0x391(0x7)
	struct AActor* SourceActor; // 0x398(0x8)
	struct FWorldReticleParameters ReticleParams; // 0x3A0(0xC)
	uint8_t Pad_0x3AC[0x4]; // 0x3AC(0x4)
	struct AGameplayAbilityWorldReticle* ReticleClass; // 0x3B0(0x8)
	struct FGameplayTargetDataFilterHandle Filter; // 0x3B8(0x10)
	bool bDebug; // 0x3C8(0x1)
	uint8_t Pad_0x3C9[0x17]; // 0x3C9(0x17)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x3E0(0x8)
	uint8_t Pad_0x3E8[0x8]; // 0x3E8(0x8)


	// Object: Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	// Flags: [Native|Public]
	// Offset: 0x3106dd8
	// Params: [ Num(0) Size(0x0) ]
	void ConfirmTargeting();

	// Object: Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	// Flags: [Native|Public]
	// Offset: 0x3106dbc
	// Params: [ Num(0) Size(0x0) ]
	void CancelTargeting();
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x400 (Inherited: 0x3F0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor
{
	float MaxRange; // 0x3E8(0x4)
	struct FCollisionProfileName TraceProfile; // 0x3EC(0x8)
	bool bTraceAffectsAimPitch; // 0x3F4(0x1)
	uint8_t Pad_0x3FD[0x3]; // 0x3FD(0x3)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x420 (Inherited: 0x400)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace
{
	float CollisionRadius; // 0x400(0x4)
	float CollisionHeight; // 0x404(0x4)
	uint8_t Pad_0x408[0x18]; // 0x408(0x18)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x440 (Inherited: 0x420)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace
{
	struct UObject* PlacedActorClass; // 0x420(0x8)
	struct UMaterialInterface* PlacedActorMaterial; // 0x428(0x8)
	uint8_t Pad_0x430[0x10]; // 0x430(0x10)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x3F0 (Inherited: 0x3F0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor
{
	float Radius; // 0x3E8(0x4)
};

// Object: Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x400 (Inherited: 0x400)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace
{
};

// Object: Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x300 (Inherited: 0x2E0)
struct AGameplayAbilityWorldReticle : AActor
{
	struct FWorldReticleParameters Parameters; // 0x2E0(0xC)
	bool bFaceOwnerFlat; // 0x2EC(0x1)
	bool bSnapToTargetedActor; // 0x2ED(0x1)
	bool bIsTargetValid; // 0x2EE(0x1)
	bool bIsTargetAnActor; // 0x2EF(0x1)
	struct APlayerController* MasterPC; // 0x2F0(0x8)
	struct AActor* TargetingActor; // 0x2F8(0x8)


	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0x14) ]
	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value);

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xC) ]
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value);

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnValidTargetChanged(bool bNewValue);

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(1) Size(0x1) ]
	void OnTargetingAnActor(bool bNewValue);

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnParametersInitialized();

	// Object: Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x310f174
	// Params: [ Num(1) Size(0x1) ]
	void FaceTowardSource(bool bFaceIn2D);
};

// Object: Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x318 (Inherited: 0x300)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle
{
	struct UCapsuleComponent* CollisionComponent; // 0x300(0x8)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x308(0x10)
};

// Object: Class GameplayAbilities.GameplayCueInterface
// Size: 0x28 (Inherited: 0x28)
struct IGameplayCueInterface : IInterface
{

	// Object: Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x310ff04
	// Params: [ Num(0) Size(0x0) ]
	void ForwardGameplayCueToParent();

	// Object: Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(2) Size(0xD8) ]
	void BlueprintCustomHandler(uint8_t EventType, struct FGameplayCueParameters Parameters);
};

// Object: Class GameplayAbilities.GameplayCueManager
// Size: 0x310 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset
{
	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x48(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0x98(0x50)
	uint8_t Pad_0xE8[0x1C8]; // 0xE8(0x1C8)
	struct TArray<struct UObject*> LoadedGameplayCueNotifyClasses; // 0x2B0(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // 0x2C0(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x2D0(0x10)
	int32_t GameplayCueSendContextCount; // 0x2E0(0x4)
	uint8_t Pad_0x2E4[0x4]; // 0x2E4(0x4)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x2E8(0x10)
	uint8_t Pad_0x2F8[0x18]; // 0x2F8(0x18)
};

// Object: Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x350 (Inherited: 0x2E0)
struct AGameplayCueNotify_Actor : AActor
{
	bool bAutoDestroyOnRemove; // 0x2E0(0x1)
	uint8_t Pad_0x2E1[0x3]; // 0x2E1(0x3)
	float AutoDestroyDelay; // 0x2E4(0x4)
	bool WarnIfTimelineIsStillRunning; // 0x2E8(0x1)
	bool WarnIfLatentActionIsStillRunning; // 0x2E9(0x1)
	uint8_t Pad_0x2EA[0x2]; // 0x2EA(0x2)
	struct FGameplayTag GameplayCueTag; // 0x2EC(0x8)
	uint8_t Pad_0x2F4[0x4]; // 0x2F4(0x4)
	struct FGameplayTagReferenceHelper ReferenceHelper; // 0x2F8(0x10)
	struct FName GameplayCueName; // 0x308(0x8)
	bool bAutoAttachToOwner; // 0x310(0x1)
	bool IsOverride; // 0x311(0x1)
	bool bUniqueInstancePerInstigator; // 0x312(0x1)
	bool bUniqueInstancePerSourceObject; // 0x313(0x1)
	bool bAllowMultipleOnActiveEvents; // 0x314(0x1)
	bool bAllowMultipleWhileActiveEvents; // 0x315(0x1)
	uint8_t Pad_0x316[0x2]; // 0x316(0x2)
	int32_t NumPreallocatedInstances; // 0x318(0x4)
	uint8_t Pad_0x31C[0x34]; // 0x31C(0x34)


	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x31166bc
	// Params: [ Num(3) Size(0xD9) ]
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x31164b4
	// Params: [ Num(3) Size(0xD9) ]
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	// Flags: [Native|Public]
	// Offset: 0x3116cf0
	// Params: [ Num(1) Size(0x8) ]
	void OnOwnerDestroyed(struct AActor* DestroyedActor);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x3116acc
	// Params: [ Num(3) Size(0xD9) ]
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x31168c4
	// Params: [ Num(3) Size(0xD9) ]
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0xE0) ]
	void K2_HandleGameplayCue(struct AActor* MyTarget, uint8_t EventType, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3116cd4
	// Params: [ Num(0) Size(0x0) ]
	void K2_EndGameplayCue();
};

// Object: Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x50 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject
{
	struct FGameplayTag GameplayCueTag; // 0x28(0x8)
	struct FGameplayTagReferenceHelper ReferenceHelper; // 0x30(0x10)
	struct FName GameplayCueName; // 0x40(0x8)
	bool IsOverride; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)


	// Object: Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x3117ea4
	// Params: [ Num(3) Size(0xD9) ]
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x3117c9c
	// Params: [ Num(3) Size(0xD9) ]
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x31182b4
	// Params: [ Num(3) Size(0xD9) ]
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.OnActive
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x31180ac
	// Params: [ Num(3) Size(0xD9) ]
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters);

	// Object: Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0xE0) ]
	void K2_HandleGameplayCue(struct AActor* MyTarget, uint8_t EventType, struct FGameplayCueParameters& Parameters);
};

// Object: Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x60 (Inherited: 0x50)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static
{
	struct USoundBase* Sound; // 0x50(0x8)
	struct UParticleSystem* ParticleSystem; // 0x58(0x8)
};

// Object: Class GameplayAbilities.GameplayCueSet
// Size: 0x90 (Inherited: 0x30)
struct UGameplayCueSet : UDataAsset
{
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x30(0x10)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
};

// Object: Class GameplayAbilities.GameplayCueTranslator
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator : UObject
{
};

// Object: Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator
{
};

// Object: Class GameplayAbilities.GameplayEffect
// Size: 0x898 (Inherited: 0x28)
struct UGameplayEffect : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	enum class EGameplayEffectDurationType DurationPolicy; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x1A8)
	struct FScalableFloat Period; // 0x1E0(0x20)
	bool bExecutePeriodicEffectOnApplication; // 0x200(0x1)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x201(0x1)
	uint8_t Pad_0x202[0x6]; // 0x202(0x6)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x208(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x218(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x228(0x20)
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x248(0x10)
	struct TArray<struct UGameplayEffect*> TargetEffectClasses; // 0x258(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x268(0x10)
	struct TArray<struct UGameplayEffect*> OverflowEffects; // 0x278(0x10)
	bool bDenyOverflowApplication; // 0x288(0x1)
	bool bClearStackOnOverflow; // 0x289(0x1)
	uint8_t Pad_0x28A[0x6]; // 0x28A(0x6)
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // 0x290(0x10)
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // 0x2A0(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x2B0(0x1)
	bool bSuppressStackingCues; // 0x2B1(0x1)
	uint8_t Pad_0x2B2[0x6]; // 0x2B2(0x6)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x2B8(0x10)
	struct UGameplayEffectUIData* UIData; // 0x2C8(0x8)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x2D0(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x330(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x390(0x50)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x3E0(0x50)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x430(0x50)
	struct FGameplayTagRequirements RemovalSourceTagRequirements; // 0x480(0x50)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x4D0(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x530(0x50)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x580(0x150)
	uint8_t Pad_0x6D0[0x8]; // 0x6D0(0x8)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x6D8(0x150)
	uint8_t Pad_0x828[0x1]; // 0x828(0x1)
	enum class EGameplayEffectStackingType StackingType; // 0x829(0x1)
	uint8_t Pad_0x82A[0x2]; // 0x82A(0x2)
	int32_t StackLimitCount; // 0x82C(0x4)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x830(0x1)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x831(0x1)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x832(0x1)
	uint8_t Pad_0x833[0x5]; // 0x833(0x5)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x838(0x10)
	struct TArray<struct FName> ScreenEffects; // 0x848(0x10)
	struct FGameplayTagContainer PostProcessEffectTags; // 0x858(0x20)
	struct FGameplayTagContainer CameraParticleTags; // 0x878(0x20)
};

// Object: Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38 (Inherited: 0x28)
struct UGameplayEffectCalculation : UObject
{
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x28(0x10)
};

// Object: Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectCustomApplicationRequirement : UObject
{

	// Object: Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x31219e8
	// Params: [ Num(4) Size(0x2A9) ]
	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC);
};

// Object: Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation
{
	bool bRequiresPassedInTags; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)


	// Object: Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x312214c
	// Params: [ Num(2) Size(0x110) ]
	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput);
};

// Object: Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject
{
};

// Object: Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x40 (Inherited: 0x28)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData
{
	struct FText Description; // 0x28(0x18)
};

// Object: Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation
{
	bool bAllowNonNetAuthorityDependencyRegistration; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)


	// Object: Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x3123ac4
	// Params: [ Num(2) Size(0x29C) ]
	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec);
};

// Object: Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1E8 (Inherited: 0x30)
struct UGameplayTagReponseTable : UDataAsset
{
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x30(0x10)
	uint8_t Pad_0x40[0x1A8]; // 0x40(0x1A8)


	// Object: Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x3124388
	// Params: [ Num(4) Size(0x1C) ]
	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t idx);
};

// Object: Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28 (Inherited: 0x28)
struct ITickableAttributeSetInterface : IInterface
{
};

} // namespace SDK
