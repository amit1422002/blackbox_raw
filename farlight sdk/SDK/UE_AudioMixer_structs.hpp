// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	EAudioSpectrumType_MAX = 2
};

// Object: Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4
};

// Object: Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	EFFTPeakInterpolationMethod_MAX = 3
};

// Object: Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8_t
{
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};

// Object: ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x50 (Inherited: 0x0)
struct FSubmixEffectDynamicsProcessorSettings
{
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float InputGainDb; // 0x4(0x4)
	float ThresholdDb; // 0x8(0x4)
	float Ratio; // 0xC(0x4)
	float KneeBandwidthDb; // 0x10(0x4)
	float LookAheadMsec; // 0x14(0x4)
	float AttackTimeMsec; // 0x18(0x4)
	float ReleaseTimeMsec; // 0x1C(0x4)
	struct USoundSubmix* ExternalSubmix; // 0x20(0x8)
	uint8_t bChannelLinked : 1; // 0x28(0x1), Mask(0x1)
	uint8_t bAnalogMode : 1; // 0x28(0x1), Mask(0x2)
	uint8_t bKeyAudition : 1; // 0x28(0x1), Mask(0x4)
	uint8_t BitPad_0x28_3 : 5; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float KeyGainDb; // 0x2C(0x4)
	float OutputGainDb; // 0x30(0x4)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34(0xC)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Size: 0xC (Inherited: 0x0)
struct FSubmixEffectDynamicProcessorFilterSettings
{
	uint8_t bEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Cutoff; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
};

// Object: ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size: 0x10 (Inherited: 0x0)
struct FSubmixEffectSubmixEQSettings
{
	struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x0(0x10)
};

// Object: ScriptStruct AudioMixer.SubmixEffectEQBand
// Size: 0x10 (Inherited: 0x0)
struct FSubmixEffectEQBand
{
	float Frequency; // 0x0(0x4)
	float Bandwidth; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
	uint8_t bEnabled : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x34 (Inherited: 0x0)
struct FSubmixEffectReverbSettings
{
	float Density; // 0x0(0x4)
	float Diffusion; // 0x4(0x4)
	float Gain; // 0x8(0x4)
	float GainHF; // 0xC(0x4)
	float DecayTime; // 0x10(0x4)
	float DecayHFRatio; // 0x14(0x4)
	float ReflectionsGain; // 0x18(0x4)
	float ReflectionsDelay; // 0x1C(0x4)
	float LateGain; // 0x20(0x4)
	float LateDelay; // 0x24(0x4)
	float AirAbsorptionGainHF; // 0x28(0x4)
	float WetLevel; // 0x2C(0x4)
	float DryLevel; // 0x30(0x4)
};

// Object: ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// Size: 0x38 (Inherited: 0x0)
struct FSubmixEffectReverbFastSettings
{
	bool bBypass; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Density; // 0x4(0x4)
	float Diffusion; // 0x8(0x4)
	float Gain; // 0xC(0x4)
	float GainHF; // 0x10(0x4)
	float DecayTime; // 0x14(0x4)
	float DecayHFRatio; // 0x18(0x4)
	float ReflectionsGain; // 0x1C(0x4)
	float ReflectionsDelay; // 0x20(0x4)
	float LateGain; // 0x24(0x4)
	float LateDelay; // 0x28(0x4)
	float AirAbsorptionGainHF; // 0x2C(0x4)
	float WetLevel; // 0x30(0x4)
	float DryLevel; // 0x34(0x4)
};

} // namespace SDK
