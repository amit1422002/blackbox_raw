// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t
{
	Osc1Gain = 0,
	Osc1Frequency = 1,
	Osc1Pulsewidth = 2,
	Osc2Gain = 3,
	Osc2Frequency = 4,
	Osc2Pulsewidth = 5,
	FilterFrequency = 6,
	FilterQ = 7,
	Gain = 8,
	Pan = 9,
	LFO1Frequency = 10,
	LFO1Gain = 11,
	LFO2Frequency = 12,
	LFO2Gain = 13,
	Count = 14,
	ESynth1PatchDestination_MAX = 15
};

// Object: Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t
{
	LFO1 = 0,
	LFO2 = 1,
	Envelope = 2,
	BiasEnvelope = 3,
	Count = 4,
	ESynth1PatchSource_MAX = 5
};

// Object: Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t
{
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	ESynthStereoDelayMode_MAX = 4
};

// Object: Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t
{
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESynthFilterAlgorithm_MAX = 4
};

// Object: Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t
{
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESynthFilterType_MAX = 5
};

// Object: Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvBiasPatch_MAX = 9
};

// Object: Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t
{
	PatchToNone = 0,
	PatchToOscFreq = 1,
	PatchToFilterFreq = 2,
	PatchToFilterQ = 3,
	PatchToLFO1Gain = 4,
	PatchToLFO2Gain = 5,
	PatchToLFO1Freq = 6,
	PatchToLFO2Freq = 7,
	Count = 8,
	ESynthModEnvPatch_MAX = 9
};

// Object: Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
	PatchToNone = 0,
	PatchToGain = 1,
	PatchToOscFreq = 2,
	PatchToFilterFreq = 3,
	PatchToFilterQ = 4,
	PatchToOscPulseWidth = 5,
	PatchToOscPan = 6,
	PatchLFO1ToLFO2Frequency = 7,
	PatchLFO1ToLFO2Gain = 8,
	Count = 9,
	ESynthLFOPatchType_MAX = 10
};

// Object: Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t
{
	Sync = 0,
	OneShot = 1,
	Free = 2,
	Count = 3,
	ESynthLFOMode_MAX = 4
};

// Object: Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t
{
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	ESynthLFOType_MAX = 8
};

// Object: Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t
{
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Noise = 4,
	Count = 5,
	ESynth1OscType_MAX = 6
};

// Object: Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4
};

// Object: Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5
};

// Object: Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EEnvelopeFollowerPeakMode_MAX = 4
};

// Object: Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t
{
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESourceEffectFilterType_MAX = 5
};

// Object: Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t
{
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESourceEffectFilterCircuit_MAX = 4
};

// Object: Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t
{
	MidSide = 0,
	LeftRight = 1,
	count = 2,
	EStereoChannelMode_MAX = 3
};

// Object: Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t
{
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	Count = 7,
	EPhaserLFOType_MAX = 8
};

// Object: Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	Sine = 0,
	Saw = 1,
	Triangle = 2,
	Square = 3,
	Count = 4,
	ERingModulatorTypeSourceEffect_MAX = 5
};

// Object: Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t
{
	Normal = 0,
	Cross = 1,
	PingPong = 2,
	Count = 3,
	EStereoDelaySourceEffect_MAX = 4
};

// Object: Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	BlockSize256 = 0,
	BlockSize512 = 1,
	BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

// Object: Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t
{
	OnePole = 0,
	StateVariable = 1,
	Ladder = 2,
	Count = 3,
	ESubmixFilterAlgorithm_MAX = 4
};

// Object: Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t
{
	LowPass = 0,
	HighPass = 1,
	BandPass = 2,
	BandStop = 3,
	Count = 4,
	ESubmixFilterType_MAX = 5
};

// Object: Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t
{
	SendToChannel = 0,
	Panning = 1,
	Disabled = 2,
	ETapLineMode_MAX = 3
};

// Object: Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t
{
	FromBeginning = 0,
	FromCurrentPosition = 1,
	Count = 2,
	EGranularSynthSeekType_MAX = 3
};

// Object: Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t
{
	Rectangular = 0,
	Triangle = 1,
	DownwardTriangle = 2,
	UpwardTriangle = 3,
	ExponentialDecay = 4,
	ExponentialIncrease = 5,
	Gaussian = 6,
	Hanning = 7,
	Lanczos = 8,
	Cosine = 9,
	CosineSquared = 10,
	Welch = 11,
	Blackman = 12,
	BlackmanHarris = 13,
	Count = 14,
	EGranularSynthEnvelopeType_MAX = 15
};

// Object: Enum Synthesis.CurveInterpolationType
enum class ECurveInterpolationType : uint8_t
{
	AUTOINTERP = 0,
	LINEAR = 1,
	CONSTANT = 2,
	CurveInterpolationType_MAX = 3
};

// Object: Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t
{
	FromBeginning = 0,
	FromCurrentPosition = 1,
	FromEnd = 2,
	Count = 3,
	ESamplePlayerSeekType_MAX = 4
};

// Object: Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t
{
	Medium = 0,
	Large = 1,
	Count = 2,
	ESynthKnobSize_MAX = 3
};

// Object: Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t
{
	Light = 0,
	Dark = 1,
	Count = 2,
	ESynthSlateColorStyle_MAX = 3
};

// Object: Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t
{
	Small = 0,
	Medium = 1,
	Large = 2,
	Count = 3,
	ESynthSlateSizeType_MAX = 4
};

// Object: ScriptStruct Synthesis.ModularSynthPresetBankEntry
// Size: 0xE0 (Inherited: 0x0)
struct FModularSynthPresetBankEntry
{
	struct FString PresetName; // 0x0(0x10)
	struct FModularSynthPreset Preset; // 0x10(0xD0)
};

// Object: ScriptStruct Synthesis.ModularSynthPreset
// Size: 0xD0 (Inherited: 0x8)
struct FModularSynthPreset : FTableRowBase
{
	uint8_t bEnablePolyphony : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	enum class ESynth1OscType Osc1Type; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
	float Osc1Gain; // 0xC(0x4)
	float Osc1Octave; // 0x10(0x4)
	float Osc1Semitones; // 0x14(0x4)
	float Osc1Cents; // 0x18(0x4)
	float Osc1PulseWidth; // 0x1C(0x4)
	enum class ESynth1OscType Osc2Type; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float Osc2Gain; // 0x24(0x4)
	float Osc2Octave; // 0x28(0x4)
	float Osc2Semitones; // 0x2C(0x4)
	float Osc2Cents; // 0x30(0x4)
	float Osc2PulseWidth; // 0x34(0x4)
	float Portamento; // 0x38(0x4)
	uint8_t bEnableUnison : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t bEnableOscillatorSync : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t BitPad_0x3C_2 : 6; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	float Spread; // 0x40(0x4)
	float Pan; // 0x44(0x4)
	float LFO1Frequency; // 0x48(0x4)
	float LFO1Gain; // 0x4C(0x4)
	enum class ESynthLFOType LFO1Type; // 0x50(0x1)
	enum class ESynthLFOMode LFO1Mode; // 0x51(0x1)
	enum class ESynthLFOPatchType LFO1PatchType; // 0x52(0x1)
	uint8_t Pad_0x53[0x1]; // 0x53(0x1)
	float LFO2Frequency; // 0x54(0x4)
	float LFO2Gain; // 0x58(0x4)
	enum class ESynthLFOType LFO2Type; // 0x5C(0x1)
	enum class ESynthLFOMode LFO2Mode; // 0x5D(0x1)
	enum class ESynthLFOPatchType LFO2PatchType; // 0x5E(0x1)
	uint8_t Pad_0x5F[0x1]; // 0x5F(0x1)
	float GainDb; // 0x60(0x4)
	float AttackTime; // 0x64(0x4)
	float DecayTime; // 0x68(0x4)
	float SustainGain; // 0x6C(0x4)
	float ReleaseTime; // 0x70(0x4)
	enum class ESynthModEnvPatch ModEnvPatchType; // 0x74(0x1)
	enum class ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x75(0x1)
	uint8_t bInvertModulationEnvelope : 1; // 0x76(0x1), Mask(0x1)
	uint8_t bInvertModulationEnvelopeBias : 1; // 0x76(0x1), Mask(0x2)
	uint8_t BitPad_0x76_2 : 6; // 0x76(0x1)
	uint8_t Pad_0x77[0x1]; // 0x77(0x1)
	float ModulationEnvelopeDepth; // 0x78(0x4)
	float ModulationEnvelopeAttackTime; // 0x7C(0x4)
	float ModulationEnvelopeDecayTime; // 0x80(0x4)
	float ModulationEnvelopeSustainGain; // 0x84(0x4)
	float ModulationEnvelopeReleaseTime; // 0x88(0x4)
	uint8_t bLegato : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t bRetrigger : 1; // 0x8C(0x1), Mask(0x2)
	uint8_t BitPad_0x8C_2 : 6; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	float FilterFrequency; // 0x90(0x4)
	float FilterQ; // 0x94(0x4)
	enum class ESynthFilterType FilterType; // 0x98(0x1)
	enum class ESynthFilterAlgorithm FilterAlgorithm; // 0x99(0x1)
	uint8_t bStereoDelayEnabled : 1; // 0x9A(0x1), Mask(0x1)
	uint8_t BitPad_0x9A_1 : 7; // 0x9A(0x1)
	enum class ESynthStereoDelayMode StereoDelayMode; // 0x9B(0x1)
	float StereoDelayTime; // 0x9C(0x4)
	float StereoDelayFeedback; // 0xA0(0x4)
	float StereoDelayWetlevel; // 0xA4(0x4)
	float StereoDelayRatio; // 0xA8(0x4)
	uint8_t bChorusEnabled : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t BitPad_0xAC_1 : 7; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	float ChorusDepth; // 0xB0(0x4)
	float ChorusFeedback; // 0xB4(0x4)
	float ChorusFrequency; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct TArray<struct FEpicSynth1Patch> Patches; // 0xC0(0x10)
};

// Object: ScriptStruct Synthesis.EpicSynth1Patch
// Size: 0x18 (Inherited: 0x0)
struct FEpicSynth1Patch
{
	enum class ESynth1PatchSource PatchSource; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FSynth1PatchCable> PatchCables; // 0x8(0x10)
};

// Object: ScriptStruct Synthesis.Synth1PatchCable
// Size: 0x8 (Inherited: 0x0)
struct FSynth1PatchCable
{
	float Depth; // 0x0(0x4)
	enum class ESynth1PatchDestination Destination; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Synthesis.PatchId
// Size: 0x4 (Inherited: 0x0)
struct FPatchId
{
	int32_t ID; // 0x0(0x4)
};

// Object: ScriptStruct Synthesis.SourceEffectBitCrusherSettings
// Size: 0x8 (Inherited: 0x0)
struct FSourceEffectBitCrusherSettings
{
	float CrushedSampleRate; // 0x0(0x4)
	float CrushedBits; // 0x4(0x4)
};

// Object: ScriptStruct Synthesis.SourceEffectChorusSettings
// Size: 0x18 (Inherited: 0x0)
struct FSourceEffectChorusSettings
{
	float Depth; // 0x0(0x4)
	float Frequency; // 0x4(0x4)
	float Feedback; // 0x8(0x4)
	float WetLevel; // 0xC(0x4)
	float DryLevel; // 0x10(0x4)
	float Spread; // 0x14(0x4)
};

// Object: ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
// Size: 0x28 (Inherited: 0x0)
struct FSourceEffectDynamicsProcessorSettings
{
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
	enum class ESourceEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float LookAheadMsec; // 0x4(0x4)
	float AttackTimeMsec; // 0x8(0x4)
	float ReleaseTimeMsec; // 0xC(0x4)
	float ThresholdDb; // 0x10(0x4)
	float Ratio; // 0x14(0x4)
	float KneeBandwidthDb; // 0x18(0x4)
	float InputGainDb; // 0x1C(0x4)
	float OutputGainDb; // 0x20(0x4)
	uint8_t bStereoLinked : 1; // 0x24(0x1), Mask(0x1)
	uint8_t bAnalogMode : 1; // 0x24(0x1), Mask(0x2)
	uint8_t BitPad_0x24_2 : 6; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
// Size: 0xC (Inherited: 0x0)
struct FSourceEffectEnvelopeFollowerSettings
{
	float AttackTime; // 0x0(0x4)
	float ReleaseTime; // 0x4(0x4)
	enum class EEnvelopeFollowerPeakMode PeakMode; // 0x8(0x1)
	bool bIsAnalogMode; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Synthesis.SourceEffectEQSettings
// Size: 0x10 (Inherited: 0x0)
struct FSourceEffectEQSettings
{
	struct TArray<struct FSourceEffectEQBand> EQBands; // 0x0(0x10)
};

// Object: ScriptStruct Synthesis.SourceEffectEQBand
// Size: 0x10 (Inherited: 0x0)
struct FSourceEffectEQBand
{
	float Frequency; // 0x0(0x4)
	float Bandwidth; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
	uint8_t bEnabled : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Synthesis.SourceEffectFilterSettings
// Size: 0xC (Inherited: 0x0)
struct FSourceEffectFilterSettings
{
	enum class ESourceEffectFilterCircuit FilterCircuit; // 0x0(0x1)
	enum class ESourceEffectFilterType FilterType; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float CutoffFrequency; // 0x4(0x4)
	float FilterQ; // 0x8(0x4)
};

// Object: ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
// Size: 0xC (Inherited: 0x0)
struct FSourceEffectFoldbackDistortionSettings
{
	float InputGainDb; // 0x0(0x4)
	float ThresholdDb; // 0x4(0x4)
	float OutputGainDb; // 0x8(0x4)
};

// Object: ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
// Size: 0xC (Inherited: 0x0)
struct FSourceEffectMidSideSpreaderSettings
{
	enum class EStereoChannelMode InputMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float SpreadAmount; // 0x4(0x4)
	enum class EStereoChannelMode OutputMode; // 0x8(0x1)
	bool bEqualPower; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Synthesis.SourceEffectPannerSettings
// Size: 0x8 (Inherited: 0x0)
struct FSourceEffectPannerSettings
{
	float Spread; // 0x0(0x4)
	float Pan; // 0x4(0x4)
};

// Object: ScriptStruct Synthesis.SourceEffectPhaserSettings
// Size: 0x10 (Inherited: 0x0)
struct FSourceEffectPhaserSettings
{
	float WetLevel; // 0x0(0x4)
	float Frequency; // 0x4(0x4)
	float Feedback; // 0x8(0x4)
	enum class EPhaserLFOType LFOType; // 0xC(0x1)
	bool UseQuadraturePhase; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
};

// Object: ScriptStruct Synthesis.SourceEffectRingModulationSettings
// Size: 0x14 (Inherited: 0x0)
struct FSourceEffectRingModulationSettings
{
	enum class ERingModulatorTypeSourceEffect ModulatorType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Frequency; // 0x4(0x4)
	float Depth; // 0x8(0x4)
	float DryLevel; // 0xC(0x4)
	float WetLevel; // 0x10(0x4)
};

// Object: ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
// Size: 0x18 (Inherited: 0x0)
struct FSourceEffectSimpleDelaySettings
{
	float SpeedOfSound; // 0x0(0x4)
	float DelayAmount; // 0x4(0x4)
	float DryAmount; // 0x8(0x4)
	float WetAmount; // 0xC(0x4)
	float Feedback; // 0x10(0x4)
	uint8_t bDelayBasedOnDistance : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct Synthesis.SourceEffectStereoDelaySettings
// Size: 0x14 (Inherited: 0x0)
struct FSourceEffectStereoDelaySettings
{
	enum class EStereoDelaySourceEffect DelayMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DelayTimeMsec; // 0x4(0x4)
	float Feedback; // 0x8(0x4)
	float DelayRatio; // 0xC(0x4)
	float WetLevel; // 0x10(0x4)
};

// Object: ScriptStruct Synthesis.SourceEffectWaveShaperSettings
// Size: 0x8 (Inherited: 0x0)
struct FSourceEffectWaveShaperSettings
{
	float amount; // 0x0(0x4)
	float OutputGainDb; // 0x4(0x4)
};

// Object: ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
// Size: 0x20 (Inherited: 0x0)
struct FSubmixEffectConvolutionReverbSettings
{
	float NormalizationVolumeDb; // 0x0(0x4)
	float SurroundRearChannelBleedDb; // 0x4(0x4)
	bool bInvertRearChannelBleedPhase; // 0x8(0x1)
	bool bSurroundRearChannelFlip; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
	float SurroundRearChannelBleedAmount; // 0xC(0x4)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x10(0x8)
	bool AllowHArdwareAcceleration; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct Synthesis.SubmixEffectDelaySettings
// Size: 0xC (Inherited: 0x0)
struct FSubmixEffectDelaySettings
{
	float MaximumDelayLength; // 0x0(0x4)
	float InterpolationTime; // 0x4(0x4)
	float DelayLength; // 0x8(0x4)
};

// Object: ScriptStruct Synthesis.SubmixEffectFilterSettings
// Size: 0xC (Inherited: 0x0)
struct FSubmixEffectFilterSettings
{
	enum class ESubmixFilterType FilterType; // 0x0(0x1)
	enum class ESubmixFilterAlgorithm FilterAlgorithm; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float FilterFrequency; // 0x4(0x4)
	float FilterQ; // 0x8(0x4)
};

// Object: ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
// Size: 0x10 (Inherited: 0x0)
struct FSubmixEffectFlexiverbSettings
{
	float PreDelay; // 0x0(0x4)
	float DecayTime; // 0x4(0x4)
	float RoomDampening; // 0x8(0x4)
	int32_t Complexity; // 0xC(0x4)
};

// Object: ScriptStruct Synthesis.SubmixEffectTapDelaySettings
// Size: 0x18 (Inherited: 0x0)
struct FSubmixEffectTapDelaySettings
{
	float MaximumDelayLength; // 0x0(0x4)
	float InterpolationTime; // 0x4(0x4)
	struct TArray<struct FTapDelayInfo> Taps; // 0x8(0x10)
};

// Object: ScriptStruct Synthesis.TapDelayInfo
// Size: 0x18 (Inherited: 0x0)
struct FTapDelayInfo
{
	enum class ETapLineMode TapLineMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DelayLength; // 0x4(0x4)
	float Gain; // 0x8(0x4)
	int32_t OutputChannel; // 0xC(0x4)
	float PanInDegrees; // 0x10(0x4)
	int32_t TapId; // 0x14(0x4)
};

// Object: ScriptStruct Synthesis.Synth2DSliderStyle
// Size: 0x5C0 (Inherited: 0x8)
struct FSynth2DSliderStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush NormalThumbImage; // 0x10(0x120)
	struct FSlateBrush DisabledThumbImage; // 0x130(0x120)
	struct FSlateBrush NormalBarImage; // 0x250(0x120)
	struct FSlateBrush DisabledBarImage; // 0x370(0x120)
	struct FSlateBrush BackgroundImage; // 0x490(0x120)
	float BarThickness; // 0x5B0(0x4)
	uint8_t Pad_0x5B4[0xC]; // 0x5B4(0xC)
};

// Object: ScriptStruct Synthesis.SynthKnobStyle
// Size: 0x4A0 (Inherited: 0x8)
struct FSynthKnobStyle : FSlateWidgetStyle
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FSlateBrush LargeKnob; // 0x10(0x120)
	struct FSlateBrush LargeKnobOverlay; // 0x130(0x120)
	struct FSlateBrush MediumKnob; // 0x250(0x120)
	struct FSlateBrush MediumKnobOverlay; // 0x370(0x120)
	float MinValueAngle; // 0x490(0x4)
	float MaxValueAngle; // 0x494(0x4)
	enum class ESynthKnobSize KnobSize; // 0x498(0x1)
	uint8_t Pad_0x499[0x7]; // 0x499(0x7)
};

// Object: ScriptStruct Synthesis.SynthSlateStyle
// Size: 0x10 (Inherited: 0x8)
struct FSynthSlateStyle : FSlateWidgetStyle
{
	enum class ESynthSlateSizeType SizeType; // 0x8(0x1)
	enum class ESynthSlateColorStyle ColorStyle; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

} // namespace SDK
