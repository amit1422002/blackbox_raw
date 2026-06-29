// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class AudioMixer.SynthComponent
// Size: 0x820 (Inherited: 0x350)
struct USynthComponent : USceneComponent
{
	uint8_t bAutoDestroy : 1; // 0x344(0x1), Mask(0x1)
	uint8_t bStopWhenOwnerDestroyed : 1; // 0x344(0x1), Mask(0x2)
	uint8_t bAllowSpatialization : 1; // 0x344(0x1), Mask(0x4)
	uint8_t bOverrideAttenuation : 1; // 0x344(0x1), Mask(0x8)
	uint8_t bOutputToBusOnly : 1; // 0x344(0x1), Mask(0x10)
	struct USoundAttenuation* AttenuationSettings; // 0x348(0x8)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x350(0x3A0)
	struct USoundConcurrency* ConcurrencySettings; // 0x6F0(0x8)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x6F8(0x50)
	struct USoundClass* SoundClass; // 0x748(0x8)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x750(0x8)
	struct USoundSubmixBase* SoundSubmix; // 0x758(0x8)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x760(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x770(0x10)
	struct FSoundModulation Modulation; // 0x780(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x790(0x10)
	uint8_t bIsUISound : 1; // 0x7A0(0x1), Mask(0x1)
	uint8_t bIsPreviewSound : 1; // 0x7A0(0x1), Mask(0x2)
	int32_t EnvelopeFollowerAttackTime; // 0x7A4(0x4)
	int32_t EnvelopeFollowerReleaseTime; // 0x7A8(0x4)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x7B0(0x10)
	uint8_t BitPad_0x7C0_7 : 1; // 0x7C0(0x1)
	uint8_t Pad_0x7C1[0x1F]; // 0x7C1(0x1F)
	struct USynthSound* Synth; // 0x7E0(0x8)
	struct UAudioComponent* AudioComponent; // 0x7E8(0x8)
	uint8_t Pad_0x7F0[0x30]; // 0x7F0(0x30)


	// Object: Function AudioMixer.SynthComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9a111f4
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function AudioMixer.SynthComponent.Start
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9a11208
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function AudioMixer.SynthComponent.SetVolumeMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9a11114
	// Params: [ Num(1) Size(0x4) ]
	void SetVolumeMultiplier(float VolumeMultiplier);

	// Object: Function AudioMixer.SynthComponent.SetSubmixSend
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9a1102c
	// Params: [ Num(2) Size(0xC) ]
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel);

	// Object: Function AudioMixer.SynthComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9a111bc
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();
};

// Object: Class AudioMixer.AudioGenerator
// Size: 0xA8 (Inherited: 0x28)
struct UAudioGenerator : UObject
{
	uint8_t Pad_0x28[0x80]; // 0x28(0x80)
};

// Object: Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0d284
	// Params: [ Num(2) Size(0x8) ]
	float TrimAudioCache(float InMegabytesToFree);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0e094
	// Params: [ Num(7) Size(0x48) ]
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0dc40
	// Params: [ Num(2) Size(0x10) ]
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0e2e8
	// Params: [ Num(3) Size(0x18) ]
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0dd14
	// Params: [ Num(6) Size(0x18) ]
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0d590
	// Params: [ Num(4) Size(0x15) ]
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0deec
	// Params: [ Num(2) Size(0x10) ]
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0e4d4
	// Params: [ Num(4) Size(0x20) ]
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0e62c
	// Params: [ Num(3) Size(0x14) ]
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0e740
	// Params: [ Num(3) Size(0x18) ]
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0d6e8
	// Params: [ Num(3) Size(0x14) ]
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0ea10
	// Params: [ Num(2) Size(0x10) ]
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0d3c4
	// Params: [ Num(2) Size(0x18) ]
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0d32c
	// Params: [ Num(1) Size(0x8) ]
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0dfc0
	// Params: [ Num(2) Size(0x10) ]
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a0d910
	// Params: [ Num(4) Size(0x30) ]
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0d4ac
	// Params: [ Num(3) Size(0x14) ]
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a0daa8
	// Params: [ Num(4) Size(0x30) ]
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0e400
	// Params: [ Num(2) Size(0x10) ]
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0e978
	// Params: [ Num(1) Size(0x8) ]
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0e854
	// Params: [ Num(4) Size(0x1C) ]
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0d7fc
	// Params: [ Num(3) Size(0x20) ]
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry entry);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9a0eae4
	// Params: [ Num(2) Size(0x10) ]
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset);
};

// Object: Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x108 (Inherited: 0x40)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x78]; // 0x40(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xB8(0x50)


	// Object: Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a0f750
	// Params: [ Num(1) Size(0x50) ]
	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings);

	// Object: Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9a0f860
	// Params: [ Num(1) Size(0x8) ]
	void SetExternalSubmix(struct USoundSubmix* Submix);
};

// Object: Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x38]; // 0x40(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x78(0x10)


	// Object: Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a0fe2c
	// Params: [ Num(1) Size(0x10) ]
	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings);
};

// Object: Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xD0 (Inherited: 0x40)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x58]; // 0x40(0x58)
	struct FSubmixEffectReverbSettings Settings; // 0x98(0x34)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)


	// Object: Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9a10248
	// Params: [ Num(3) Size(0x10) ]
	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);

	// Object: Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a1036c
	// Params: [ Num(1) Size(0x34) ]
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings);
};

// Object: Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xD8 (Inherited: 0x40)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x5C]; // 0x40(0x5C)
	struct FSubmixEffectReverbFastSettings Settings; // 0x9C(0x38)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)


	// Object: Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9a10830
	// Params: [ Num(3) Size(0x10) ]
	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);

	// Object: Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9a10954
	// Params: [ Num(1) Size(0x38) ]
	void SetSettings(struct FSubmixEffectReverbFastSettings& InSettings);
};

// Object: Class AudioMixer.SynthSound
// Size: 0x380 (Inherited: 0x360)
struct USynthSound : USoundWaveProcedural
{
	struct USynthComponent* OwningSynthComponent; // 0x360(0x8)
	uint8_t Pad_0x368[0x18]; // 0x368(0x18)
};

} // namespace SDK
