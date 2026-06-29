// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class Synthesis.ModularSynthPresetBank
// Size: 0x38 (Inherited: 0x28)
struct UModularSynthPresetBank : UObject
{
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Object: Class Synthesis.ModularSynthLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary
{

	// Object: Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x5f88de4
	// Params: [ Num(3) Size(0xE8) ]
	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName);
};

// Object: Class Synthesis.ModularSynthComponent
// Size: 0xEA0 (Inherited: 0x820)
struct UModularSynthComponent : USynthComponent
{
	int32_t VoiceCount; // 0x820(0x4)
	uint8_t Pad_0x824[0x67C]; // 0x824(0x67C)


	// Object: Function Synthesis.ModularSynthComponent.SetSynthPreset
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f894ec
	// Params: [ Num(1) Size(0xD0) ]
	void SetSynthPreset(struct FModularSynthPreset& SynthPreset);

	// Object: Function Synthesis.ModularSynthComponent.SetSustainGain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a94c
	// Params: [ Num(1) Size(0x4) ]
	void SetSustainGain(float SustainGain);

	// Object: Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89a0c
	// Params: [ Num(1) Size(0x4) ]
	void SetStereoDelayWetlevel(float DelayWetlevel);

	// Object: Function Synthesis.ModularSynthComponent.SetStereoDelayTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89b5c
	// Params: [ Num(1) Size(0x4) ]
	void SetStereoDelayTime(float DelayTimeMsec);

	// Object: Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89964
	// Params: [ Num(1) Size(0x4) ]
	void SetStereoDelayRatio(float DelayRatio);

	// Object: Function Synthesis.ModularSynthComponent.SetStereoDelayMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89c04
	// Params: [ Num(1) Size(0x1) ]
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode);

	// Object: Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89cac
	// Params: [ Num(1) Size(0x1) ]
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);

	// Object: Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89ab4
	// Params: [ Num(1) Size(0x4) ]
	void SetStereoDelayFeedback(float DelayFeedback);

	// Object: Function Synthesis.ModularSynthComponent.SetSpread
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b244
	// Params: [ Num(1) Size(0x4) ]
	void SetSpread(float Spread);

	// Object: Function Synthesis.ModularSynthComponent.SetReleaseTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a8a4
	// Params: [ Num(1) Size(0x4) ]
	void SetReleaseTime(float ReleaseTimeMsec);

	// Object: Function Synthesis.ModularSynthComponent.SetPortamento
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b5dc
	// Params: [ Num(1) Size(0x4) ]
	void SetPortamento(float Portamento);

	// Object: Function Synthesis.ModularSynthComponent.SetPitchBend
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b684
	// Params: [ Num(1) Size(0x4) ]
	void SetPitchBend(float PitchBend);

	// Object: Function Synthesis.ModularSynthComponent.SetPan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b2ec
	// Params: [ Num(1) Size(0x4) ]
	void SetPan(float Pan);

	// Object: Function Synthesis.ModularSynthComponent.SetOscType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b9e4
	// Params: [ Num(2) Size(0x5) ]
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType);

	// Object: Function Synthesis.ModularSynthComponent.SetOscSync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b394
	// Params: [ Num(1) Size(0x1) ]
	void SetOscSync(bool bIsSynced);

	// Object: Function Synthesis.ModularSynthComponent.SetOscSemitones
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b814
	// Params: [ Num(2) Size(0x8) ]
	void SetOscSemitones(int32_t OscIndex, float Semitones);

	// Object: Function Synthesis.ModularSynthComponent.SetOscPulsewidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b4f4
	// Params: [ Num(2) Size(0x8) ]
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);

	// Object: Function Synthesis.ModularSynthComponent.SetOscOctave
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b8fc
	// Params: [ Num(2) Size(0x8) ]
	void SetOscOctave(int32_t OscIndex, float Octave);

	// Object: Function Synthesis.ModularSynthComponent.SetOscGainMod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8bbb4
	// Params: [ Num(2) Size(0x8) ]
	void SetOscGainMod(int32_t OscIndex, float OscGainMod);

	// Object: Function Synthesis.ModularSynthComponent.SetOscGain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8bc9c
	// Params: [ Num(2) Size(0x8) ]
	void SetOscGain(int32_t OscIndex, float OscGain);

	// Object: Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8bacc
	// Params: [ Num(2) Size(0x8) ]
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);

	// Object: Function Synthesis.ModularSynthComponent.SetOscCents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b72c
	// Params: [ Num(2) Size(0x8) ]
	void SetOscCents(int32_t OscIndex, float Cents);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a354
	// Params: [ Num(1) Size(0x4) ]
	void SetModEnvSustainGain(float SustainGain);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a2ac
	// Params: [ Num(1) Size(0x4) ]
	void SetModEnvReleaseTime(float Release);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvPatch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a7fc
	// Params: [ Num(1) Size(0x1) ]
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvInvert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a6a4
	// Params: [ Num(1) Size(0x1) ]
	void SetModEnvInvert(bool bInvert);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a54c
	// Params: [ Num(1) Size(0x4) ]
	void SetModEnvDepth(float Depth);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a3fc
	// Params: [ Num(1) Size(0x4) ]
	void SetModEnvDecayTime(float DecayTimeMsec);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a754
	// Params: [ Num(1) Size(0x1) ]
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a5f4
	// Params: [ Num(1) Size(0x1) ]
	void SetModEnvBiasInvert(bool bInvert);

	// Object: Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a4a4
	// Params: [ Num(1) Size(0x4) ]
	void SetModEnvAttackTime(float AttackTimeMsec);

	// Object: Function Synthesis.ModularSynthComponent.SetLFOType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8adbc
	// Params: [ Num(2) Size(0x5) ]
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType);

	// Object: Function Synthesis.ModularSynthComponent.SetLFOPatch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8abec
	// Params: [ Num(2) Size(0x5) ]
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType);

	// Object: Function Synthesis.ModularSynthComponent.SetLFOMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8acd4
	// Params: [ Num(2) Size(0x5) ]
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode);

	// Object: Function Synthesis.ModularSynthComponent.SetLFOGainMod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8aea4
	// Params: [ Num(2) Size(0x8) ]
	void SetLFOGainMod(int32_t LFOIndex, float GainMod);

	// Object: Function Synthesis.ModularSynthComponent.SetLFOGain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8af8c
	// Params: [ Num(2) Size(0x8) ]
	void SetLFOGain(int32_t LFOIndex, float Gain);

	// Object: Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b074
	// Params: [ Num(2) Size(0x8) ]
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);

	// Object: Function Synthesis.ModularSynthComponent.SetLFOFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b15c
	// Params: [ Num(2) Size(0x8) ]
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);

	// Object: Function Synthesis.ModularSynthComponent.SetGainDb
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8ab44
	// Params: [ Num(1) Size(0x4) ]
	void SetGainDb(float GainDb);

	// Object: Function Synthesis.ModularSynthComponent.SetFilterType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89e04
	// Params: [ Num(1) Size(0x1) ]
	void SetFilterType(enum class ESynthFilterType FilterType);

	// Object: Function Synthesis.ModularSynthComponent.SetFilterQMod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89eac
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterQMod(float FilterQ);

	// Object: Function Synthesis.ModularSynthComponent.SetFilterQ
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89f54
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterQ(float FilterQ);

	// Object: Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89ffc
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterFrequencyMod(float FilterFrequencyHz);

	// Object: Function Synthesis.ModularSynthComponent.SetFilterFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a0a4
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterFrequency(float FilterFrequencyHz);

	// Object: Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89d5c
	// Params: [ Num(1) Size(0x1) ]
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm);

	// Object: Function Synthesis.ModularSynthComponent.SetEnableUnison
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8b444
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableUnison(bool EnableUnison);

	// Object: Function Synthesis.ModularSynthComponent.SetEnableRetrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a14c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableRetrigger(bool RetriggerEnabled);

	// Object: Function Synthesis.ModularSynthComponent.SetEnablePolyphony
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8bd84
	// Params: [ Num(1) Size(0x1) ]
	void SetEnablePolyphony(bool bEnablePolyphony);

	// Object: Function Synthesis.ModularSynthComponent.SetEnablePatch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89294
	// Params: [ Num(3) Size(0x6) ]
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled);

	// Object: Function Synthesis.ModularSynthComponent.SetEnableLegato
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a1fc
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableLegato(bool LegatoEnabled);

	// Object: Function Synthesis.ModularSynthComponent.SetDecayTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8a9f4
	// Params: [ Num(1) Size(0x4) ]
	void SetDecayTime(float DecayTimeMsec);

	// Object: Function Synthesis.ModularSynthComponent.SetChorusFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f896bc
	// Params: [ Num(1) Size(0x4) ]
	void SetChorusFrequency(float Frequency);

	// Object: Function Synthesis.ModularSynthComponent.SetChorusFeedback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f89764
	// Params: [ Num(1) Size(0x4) ]
	void SetChorusFeedback(float Feedback);

	// Object: Function Synthesis.ModularSynthComponent.SetChorusEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f898b4
	// Params: [ Num(1) Size(0x1) ]
	void SetChorusEnabled(bool EnableChorus);

	// Object: Function Synthesis.ModularSynthComponent.SetChorusDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8980c
	// Params: [ Num(1) Size(0x4) ]
	void SetChorusDepth(float Depth);

	// Object: Function Synthesis.ModularSynthComponent.SetAttackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8aa9c
	// Params: [ Num(1) Size(0x4) ]
	void SetAttackTime(float AttackTimeMsec);

	// Object: Function Synthesis.ModularSynthComponent.NoteOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8bf6c
	// Params: [ Num(3) Size(0xC) ]
	void NoteOn(float Note, int32_t Velocity, float Duration);

	// Object: Function Synthesis.ModularSynthComponent.NoteOff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8be34
	// Params: [ Num(3) Size(0x6) ]
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);

	// Object: Function Synthesis.ModularSynthComponent.CreatePatch
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f89390
	// Params: [ Num(4) Size(0x20) ]
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault);
};

// Object: Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x2C]; // 0x40(0x2C)
	struct FSourceEffectBitCrusherSettings Settings; // 0x6C(0x8)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)


	// Object: Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f8edc8
	// Params: [ Num(1) Size(0x8) ]
	void SetSettings(struct FSourceEffectBitCrusherSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectChorusPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectChorusPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x3C]; // 0x40(0x3C)
	struct FSourceEffectChorusSettings Settings; // 0x7C(0x18)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)


	// Object: Function Synthesis.SourceEffectChorusPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f8f1c4
	// Params: [ Num(1) Size(0x18) ]
	void SetSettings(struct FSourceEffectChorusSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xB8 (Inherited: 0x40)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x4C]; // 0x40(0x4C)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0x8C(0x28)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)


	// Object: Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f8f708
	// Params: [ Num(1) Size(0x28) ]
	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings);
};

// Object: Class Synthesis.EnvelopeFollowerListener
// Size: 0xF8 (Inherited: 0xD8)
struct UEnvelopeFollowerListener : UActorComponent
{
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xD8(0x10)
	uint8_t Pad_0xE8[0x10]; // 0xE8(0x10)
};

// Object: Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x70(0xC)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)


	// Object: Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8fe1c
	// Params: [ Num(1) Size(0x8) ]
	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener);

	// Object: Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f8ff6c
	// Params: [ Num(1) Size(0xC) ]
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings);

	// Object: Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f8fec4
	// Params: [ Num(1) Size(0x8) ]
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener);
};

// Object: Class Synthesis.SourceEffectEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectEQPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x38]; // 0x40(0x38)
	struct FSourceEffectEQSettings Settings; // 0x78(0x10)


	// Object: Function Synthesis.SourceEffectEQPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f904cc
	// Params: [ Num(1) Size(0x10) ]
	void SetSettings(struct FSourceEffectEQSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFilterPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	struct FSourceEffectFilterSettings Settings; // 0x70(0xC)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)


	// Object: Function Synthesis.SourceEffectFilterPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f909d0
	// Params: [ Num(1) Size(0xC) ]
	void SetSettings(struct FSourceEffectFilterSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x70(0xC)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)


	// Object: Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f90de8
	// Params: [ Num(1) Size(0xC) ]
	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x70(0xC)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)


	// Object: Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f91284
	// Params: [ Num(1) Size(0xC) ]
	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectPannerPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectPannerPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x2C]; // 0x40(0x2C)
	struct FSourceEffectPannerSettings Settings; // 0x6C(0x8)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)


	// Object: Function Synthesis.SourceEffectPannerPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f916a0
	// Params: [ Num(1) Size(0x8) ]
	void SetSettings(struct FSourceEffectPannerSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectPhaserPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x34]; // 0x40(0x34)
	struct FSourceEffectPhaserSettings Settings; // 0x74(0x10)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)


	// Object: Function Synthesis.SourceEffectPhaserPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f91b28
	// Params: [ Num(1) Size(0x10) ]
	void SetSettings(struct FSourceEffectPhaserSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectRingModulationPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x38]; // 0x40(0x38)
	struct FSourceEffectRingModulationSettings Settings; // 0x78(0x14)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)


	// Object: Function Synthesis.SourceEffectRingModulationPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f91fd0
	// Params: [ Num(1) Size(0x14) ]
	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings);
};

// Object: Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x3C]; // 0x40(0x3C)
	struct FSourceEffectSimpleDelaySettings Settings; // 0x7C(0x18)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)


	// Object: Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f923e8
	// Params: [ Num(1) Size(0x18) ]
	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings);
};

// Object: Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x38]; // 0x40(0x38)
	struct FSourceEffectStereoDelaySettings Settings; // 0x78(0x14)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)


	// Object: Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f92894
	// Params: [ Num(1) Size(0x14) ]
	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings);
};

// Object: Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset
{
	uint8_t Pad_0x40[0x2C]; // 0x40(0x2C)
	struct FSourceEffectWaveShaperSettings Settings; // 0x6C(0x8)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)


	// Object: Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f92ca4
	// Params: [ Num(1) Size(0x8) ]
	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings);
};

// Object: Class Synthesis.AudioImpulseResponse
// Size: 0x58 (Inherited: 0x28)
struct UAudioImpulseResponse : UObject
{
	struct TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x4)
	int32_t SampleRate; // 0x3C(0x4)
	float NormalizationVolumeDb; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<float> IRData; // 0x48(0x10)
};

// Object: Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xB8 (Inherited: 0x40)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset
{
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x40(0x20)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x60(0x8)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x68(0x1)
	bool bEnableHardwareAcceleration; // 0x69(0x1)
	uint8_t Pad_0x6A[0x4E]; // 0x6A(0x4E)


	// Object: Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f93388
	// Params: [ Num(1) Size(0x20) ]
	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings);

	// Object: Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f932e0
	// Params: [ Num(1) Size(0x8) ]
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse);
};

// Object: Class Synthesis.SubmixEffectDelayPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	struct FSubmixEffectDelaySettings Settings; // 0x70(0xC)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0x7C(0xC)


	// Object: Function Synthesis.SubmixEffectDelayPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f9a738
	// Params: [ Num(1) Size(0xC) ]
	void SetSettings(struct FSubmixEffectDelaySettings& InSettings);

	// Object: Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9a674
	// Params: [ Num(1) Size(0x4) ]
	void SetInterpolationTime(float Time);

	// Object: Function Synthesis.SubmixEffectDelayPreset.SetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9a5cc
	// Params: [ Num(1) Size(0x4) ]
	void SetDelay(float Length);

	// Object: Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9a71c
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxDelayInMilliseconds();
};

// Object: Class Synthesis.SubmixEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	struct FSubmixEffectFilterSettings Settings; // 0x70(0xC)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)


	// Object: Function Synthesis.SubmixEffectFilterPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f9b1b4
	// Params: [ Num(1) Size(0xC) ]
	void SetSettings(struct FSubmixEffectFilterSettings& InSettings);

	// Object: Function Synthesis.SubmixEffectFilterPreset.SetFilterType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9b10c
	// Params: [ Num(1) Size(0x1) ]
	void SetFilterType(enum class ESubmixFilterType InType);

	// Object: Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9adc4
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterQMod(float InQ);

	// Object: Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ae6c
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterQ(float InQ);

	// Object: Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9af14
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterCutoffFrequencyMod(float InFrequency);

	// Object: Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9afbc
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterCutoffFrequency(float InFrequency);

	// Object: Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9b064
	// Params: [ Num(1) Size(0x1) ]
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm);
};

// Object: Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x34]; // 0x40(0x34)
	struct FSubmixEffectFlexiverbSettings Settings; // 0x74(0x10)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)


	// Object: Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f9b73c
	// Params: [ Num(1) Size(0x10) ]
	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings);
};

// Object: Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xB0 (Inherited: 0x40)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x40]; // 0x40(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0x80(0x18)
	uint8_t Pad_0x98[0x18]; // 0x98(0x18)


	// Object: Function Synthesis.SubmixEffectTapDelayPreset.SetTap
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f9bf14
	// Params: [ Num(2) Size(0x1C) ]
	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo);

	// Object: Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f9c168
	// Params: [ Num(1) Size(0x18) ]
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings);

	// Object: Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9bc98
	// Params: [ Num(1) Size(0x4) ]
	void SetInterpolationTime(float Time);

	// Object: Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9c00c
	// Params: [ Num(1) Size(0x4) ]
	void RemoveTap(int32_t TapId);

	// Object: Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f9bd5c
	// Params: [ Num(1) Size(0x10) ]
	void GetTapIds(struct TArray<int32_t>& TapIds);

	// Object: Function Synthesis.SubmixEffectTapDelayPreset.GetTap
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f9be1c
	// Params: [ Num(2) Size(0x1C) ]
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo);

	// Object: Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9bd40
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxDelayInMilliseconds();

	// Object: Function Synthesis.SubmixEffectTapDelayPreset.AddTap
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5f9c0b4
	// Params: [ Num(1) Size(0x4) ]
	void AddTap(int32_t& TapId);
};

// Object: Class Synthesis.Synth2DSlider
// Size: 0x7C0 (Inherited: 0x140)
struct USynth2DSlider : UWidget
{
	float ValueX; // 0x140(0x4)
	float ValueY; // 0x144(0x4)
	struct FDelegate ValueXDelegate; // 0x148(0x10)
	struct FDelegate ValueYDelegate; // 0x158(0x10)
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
	struct FSynth2DSliderStyle WidgetStyle; // 0x170(0x5C0)
	struct FLinearColor SliderHandleColor; // 0x730(0x10)
	bool IndentHandle; // 0x740(0x1)
	bool Locked; // 0x741(0x1)
	uint8_t Pad_0x742[0x2]; // 0x742(0x2)
	float StepSize; // 0x744(0x4)
	bool IsFocusable; // 0x748(0x1)
	uint8_t Pad_0x749[0x7]; // 0x749(0x7)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x750(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x760(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x770(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x780(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x790(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x7A0(0x10)
	uint8_t Pad_0x7B0[0x10]; // 0x7B0(0x10)


	// Object: Function Synthesis.Synth2DSlider.SetValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5f9cb24
	// Params: [ Num(1) Size(0x8) ]
	void SetValue(struct FVector2D InValue);

	// Object: Function Synthesis.Synth2DSlider.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9c91c
	// Params: [ Num(1) Size(0x4) ]
	void SetStepSize(float InValue);

	// Object: Function Synthesis.Synth2DSlider.SetSliderHandleColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5f9c874
	// Params: [ Num(1) Size(0x10) ]
	void SetSliderHandleColor(struct FLinearColor InValue);

	// Object: Function Synthesis.Synth2DSlider.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9c9c4
	// Params: [ Num(1) Size(0x1) ]
	void SetLocked(bool InValue);

	// Object: Function Synthesis.Synth2DSlider.SetIndentHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ca74
	// Params: [ Num(1) Size(0x1) ]
	void SetIndentHandle(bool InValue);

	// Object: Function Synthesis.Synth2DSlider.GetValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f9cbc8
	// Params: [ Num(1) Size(0x8) ]
	struct FVector2D GetValue();
};

// Object: Class Synthesis.GranularSynth
// Size: 0xBE0 (Inherited: 0x820)
struct UGranularSynth : USynthComponent
{
	struct USoundWave* GranulatedSoundWave; // 0x820(0x8)
	uint8_t Pad_0x828[0x3B8]; // 0x828(0x3B8)


	// Object: Function Synthesis.GranularSynth.SetSustainGain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9dca0
	// Params: [ Num(1) Size(0x4) ]
	void SetSustainGain(float SustainGain);

	// Object: Function Synthesis.GranularSynth.SetSoundWave
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9de98
	// Params: [ Num(1) Size(0x8) ]
	void SetSoundWave(struct USoundWave* InSoundWave);

	// Object: Function Synthesis.GranularSynth.SetScrubMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9d2cc
	// Params: [ Num(1) Size(0x1) ]
	void SetScrubMode(bool bScrubMode);

	// Object: Function Synthesis.GranularSynth.SetReleaseTimeMsec
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9dbf8
	// Params: [ Num(1) Size(0x4) ]
	void SetReleaseTimeMsec(float ReleaseTimeMsec);

	// Object: Function Synthesis.GranularSynth.SetPlayheadTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9d1a4
	// Params: [ Num(3) Size(0x9) ]
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType);

	// Object: Function Synthesis.GranularSynth.SetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9d740
	// Params: [ Num(1) Size(0x4) ]
	void SetPlaybackSpeed(float InPlayheadRate);

	// Object: Function Synthesis.GranularSynth.SetGrainVolume
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5f9d578
	// Params: [ Num(2) Size(0xC) ]
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange);

	// Object: Function Synthesis.GranularSynth.SetGrainsPerSecond
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9d938
	// Params: [ Num(1) Size(0x4) ]
	void SetGrainsPerSecond(float InGrainsPerSecond);

	// Object: Function Synthesis.GranularSynth.SetGrainProbability
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9d890
	// Params: [ Num(1) Size(0x4) ]
	void SetGrainProbability(float InGrainProbability);

	// Object: Function Synthesis.GranularSynth.SetGrainPitch
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5f9d65c
	// Params: [ Num(2) Size(0xC) ]
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange);

	// Object: Function Synthesis.GranularSynth.SetGrainPan
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5f9d494
	// Params: [ Num(2) Size(0xC) ]
	void SetGrainPan(float BasePan, struct FVector2D PanRange);

	// Object: Function Synthesis.GranularSynth.SetGrainEnvelopeType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9d7e8
	// Params: [ Num(1) Size(0x1) ]
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType);

	// Object: Function Synthesis.GranularSynth.SetGrainDuration
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5f9d3b0
	// Params: [ Num(2) Size(0xC) ]
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange);

	// Object: Function Synthesis.GranularSynth.SetDecayTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9dd48
	// Params: [ Num(1) Size(0x4) ]
	void SetDecayTime(float DecayTimeMsec);

	// Object: Function Synthesis.GranularSynth.SetAttackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ddf0
	// Params: [ Num(1) Size(0x4) ]
	void SetAttackTime(float AttackTimeMsec);

	// Object: Function Synthesis.GranularSynth.NoteOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9dad0
	// Params: [ Num(3) Size(0xC) ]
	void NoteOn(float Note, int32_t Velocity, float Duration);

	// Object: Function Synthesis.GranularSynth.NoteOff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9d9e0
	// Params: [ Num(2) Size(0x5) ]
	void NoteOff(float Note, bool bKill);

	// Object: Function Synthesis.GranularSynth.IsLoaded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f9d138
	// Params: [ Num(1) Size(0x1) ]
	bool IsLoaded();

	// Object: Function Synthesis.GranularSynth.GetSampleDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f9d37c
	// Params: [ Num(1) Size(0x4) ]
	float GetSampleDuration();

	// Object: Function Synthesis.GranularSynth.GetCurrentPlayheadTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f9d170
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentPlayheadTime();
};

// Object: Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170 (Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject
{
	struct FString PresetName; // 0x28(0x10)
	uint8_t bLockKeyframesToGridBool : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t LockKeyframesToGrid; // 0x3C(0x4)
	int32_t WaveTableResolution; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	uint8_t bNormalizeWaveTables : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x117]; // 0x59(0x117)
};

// Object: Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xF40 (Inherited: 0x820)
struct USynthComponentMonoWaveTable : USynthComponent
{
	struct FMulticastInlineDelegate OnTableAltered; // 0x820(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x830(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x840(0x8)
	uint8_t Pad_0x848[0x6F8]; // 0x848(0x6F8)


	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa01bc
	// Params: [ Num(1) Size(0x4) ]
	void SetWaveTablePosition(float InPosition);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa045c
	// Params: [ Num(1) Size(0x1) ]
	void SetSustainPedalState(bool InSustainPedalState);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ff08
	// Params: [ Num(1) Size(0x1) ]
	void SetPosLfoType(enum class ESynthLFOType InLfoType);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa0058
	// Params: [ Num(1) Size(0x4) ]
	void SetPosLfoFrequency(float InLfoFrequency);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ffb0
	// Params: [ Num(1) Size(0x4) ]
	void SetPosLfoDepth(float InLfoDepth);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f120
	// Params: [ Num(1) Size(0x4) ]
	void SetPositionEnvelopeSustainGain(float InSustainGain);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f078
	// Params: [ Num(1) Size(0x4) ]
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9efc8
	// Params: [ Num(1) Size(0x1) ]
	void SetPositionEnvelopeInvert(bool bInInvert);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ee70
	// Params: [ Num(1) Size(0x4) ]
	void SetPositionEnvelopeDepth(float InDepth);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f1c8
	// Params: [ Num(1) Size(0x4) ]
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ef18
	// Params: [ Num(1) Size(0x1) ]
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9edc8
	// Params: [ Num(1) Size(0x4) ]
	void SetPositionEnvelopeBiasDepth(float InDepth);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f270
	// Params: [ Num(1) Size(0x4) ]
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9fdb8
	// Params: [ Num(1) Size(0x4) ]
	void SetLowPassFilterResonance(float InNewQ);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9fe60
	// Params: [ Num(1) Size(0x4) ]
	void SetLowPassFilterFrequency(float InNewFrequency);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa0264
	// Params: [ Num(1) Size(0x4) ]
	void SetFrequencyWithMidiNote(float InMidiNote);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa030c
	// Params: [ Num(1) Size(0x4) ]
	void SetFrequencyPitchBend(float FrequencyOffsetCents);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa03b4
	// Params: [ Num(1) Size(0x4) ]
	void SetFrequency(float FrequencyHz);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f670
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterEnvelopeSustainGain(float InSustainGain);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f5c8
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f718
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f518
	// Params: [ Num(1) Size(0x1) ]
	void SetFilterEnvelopeInvert(bool bInInvert);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f3c0
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterEnvelopeDepth(float InDepth);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f468
	// Params: [ Num(1) Size(0x1) ]
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f318
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterEnvelopeBiasDepth(float InDepth);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f7c0
	// Params: [ Num(1) Size(0x4) ]
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ec64
	// Params: [ Num(4) Size(0xD) ]
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9ea7c
	// Params: [ Num(3) Size(0x9) ]
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9eb70
	// Params: [ Num(3) Size(0x9) ]
	bool SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType, int32_t TableIndex);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9fbc0
	// Params: [ Num(1) Size(0x4) ]
	void SetAmpEnvelopeSustainGain(float InSustainGain);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9fb18
	// Params: [ Num(1) Size(0x4) ]
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9fa68
	// Params: [ Num(1) Size(0x1) ]
	void SetAmpEnvelopeInvert(bool bInInvert);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f910
	// Params: [ Num(1) Size(0x4) ]
	void SetAmpEnvelopeDepth(float InDepth);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9fc68
	// Params: [ Num(1) Size(0x4) ]
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f9b8
	// Params: [ Num(1) Size(0x1) ]
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9f868
	// Params: [ Num(1) Size(0x4) ]
	void SetAmpEnvelopeBiasDepth(float InDepth);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9fd10
	// Params: [ Num(1) Size(0x4) ]
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa0114
	// Params: [ Num(1) Size(0x4) ]
	void RefreshWaveTable(int32_t Index);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa0100
	// Params: [ Num(0) Size(0x0) ]
	void RefreshAllWaveTables();

	// Object: Function Synthesis.SynthComponentMonoWaveTable.NoteOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa05b4
	// Params: [ Num(2) Size(0x8) ]
	void NoteOn(float InMidiNote, float InVelocity);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.NoteOff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa050c
	// Params: [ Num(1) Size(0x4) ]
	void NoteOff(float InMidiNote);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa0698
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumTableEntries();

	// Object: Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f9ed98
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxTableIndex();

	// Object: Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5f9e8e4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex);

	// Object: Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5f9e9cc
	// Params: [ Num(2) Size(0x8) ]
	float GetCurveTangent(int32_t TableIndex);
};

// Object: Class Synthesis.SynthSamplePlayer
// Size: 0x950 (Inherited: 0x820)
struct USynthSamplePlayer : USynthComponent
{
	struct USoundWave* SoundWave; // 0x820(0x8)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x828(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x838(0x10)
	uint8_t Pad_0x848[0x108]; // 0x848(0x108)


	// Object: Function Synthesis.SynthSamplePlayer.SetSoundWave
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa3a00
	// Params: [ Num(1) Size(0x8) ]
	void SetSoundWave(struct USoundWave* InSoundWave);

	// Object: Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa3694
	// Params: [ Num(1) Size(0x4) ]
	void SetScrubTimeWidth(float InScrubTimeWidthSec);

	// Object: Function Synthesis.SynthSamplePlayer.SetScrubMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa373c
	// Params: [ Num(1) Size(0x1) ]
	void SetScrubMode(bool bScrubMode);

	// Object: Function Synthesis.SynthSamplePlayer.SetPitch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa391c
	// Params: [ Num(2) Size(0x8) ]
	void SetPitch(float InPitch, float TimeSec);

	// Object: Function Synthesis.SynthSamplePlayer.SeekToTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa37ec
	// Params: [ Num(3) Size(0x6) ]
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap);

	// Object: Function Synthesis.SynthSamplePlayer.IsLoaded
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5fa35c0
	// Params: [ Num(1) Size(0x1) ]
	bool IsLoaded();

	// Object: Function Synthesis.SynthSamplePlayer.GetSampleDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5fa3660
	// Params: [ Num(1) Size(0x4) ]
	float GetSampleDuration();

	// Object: Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5fa362c
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentPlaybackProgressTime();

	// Object: Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5fa35f8
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentPlaybackProgressPercent();
};

// Object: Class Synthesis.SynthKnob
// Size: 0x6B0 (Inherited: 0x140)
struct USynthKnob : UWidget
{
	float Value; // 0x140(0x4)
	float StepSize; // 0x144(0x4)
	float MouseSpeed; // 0x148(0x4)
	float MouseFineTuneSpeed; // 0x14C(0x4)
	uint8_t ShowTooltipInfo : 1; // 0x150(0x1), Mask(0x1)
	uint8_t BitPad_0x150_1 : 7; // 0x150(0x1)
	uint8_t Pad_0x151[0x7]; // 0x151(0x7)
	struct FText ParameterName; // 0x158(0x18)
	struct FText ParameterUnits; // 0x170(0x18)
	struct FDelegate ValueDelegate; // 0x188(0x10)
	uint8_t Pad_0x198[0x8]; // 0x198(0x8)
	struct FSynthKnobStyle WidgetStyle; // 0x1A0(0x4A0)
	bool Locked; // 0x640(0x1)
	bool IsFocusable; // 0x641(0x1)
	uint8_t Pad_0x642[0x6]; // 0x642(0x6)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x648(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x658(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x668(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x678(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x688(0x10)
	uint8_t Pad_0x698[0x18]; // 0x698(0x18)


	// Object: Function Synthesis.SynthKnob.SetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa4164
	// Params: [ Num(1) Size(0x4) ]
	void SetValue(float InValue);

	// Object: Function Synthesis.SynthKnob.SetStepSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa400c
	// Params: [ Num(1) Size(0x4) ]
	void SetStepSize(float InValue);

	// Object: Function Synthesis.SynthKnob.SetLocked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5fa40b4
	// Params: [ Num(1) Size(0x1) ]
	void SetLocked(bool InValue);

	// Object: Function Synthesis.SynthKnob.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5fa420c
	// Params: [ Num(1) Size(0x4) ]
	float GetValue();
};

} // namespace SDK
