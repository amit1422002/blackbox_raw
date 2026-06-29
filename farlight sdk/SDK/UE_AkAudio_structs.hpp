// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
	EndOfEvent = 0,
	Marker = 2,
	Duration = 3,
	Starvation = 5,
	MusicPlayStarted = 7,
	MusicSyncBeat = 8,
	MusicSyncBar = 9,
	MusicSyncEntry = 10,
	MusicSyncExit = 11,
	MusicSyncGrid = 12,
	MusicSyncUserCue = 13,
	MusicSyncPoint = 14,
	MIDIEvent = 16,
	EAkCallbackType_MAX = 17
};

// Object: Enum AkAudio.EAkResult
enum class EAkResult : uint8_t
{
	NotImplemented = 0,
	Success = 1,
	Fail = 2,
	PartialSuccess = 3,
	NotCompatible = 4,
	AlreadyConnected = 5,
	InvalidFile = 7,
	AudioFileHeaderTooLarge = 8,
	MaxReached = 9,
	InvalidID = 14,
	IDNotFound = 15,
	InvalidInstanceID = 16,
	NoMoreData = 17,
	InvalidStateGroup = 20,
	ChildAlreadyHasAParent = 21,
	InvalidLanguage = 22,
	CannotAddItseflAsAChild = 23,
	InvalidParameter = 31,
	ElementAlreadyInList = 35,
	PathNotFound = 36,
	PathNoVertices = 37,
	PathNotRunning = 38,
	PathNotPaused = 39,
	PathNodeAlreadyInList = 40,
	PathNodeNotInList = 41,
	DataNeeded = 43,
	NoDataNeeded = 44,
	DataReady = 45,
	NoDataReady = 46,
	InsufficientMemory = 52,
	Cancelled = 53,
	UnknownBankID = 54,
	BankReadError = 56,
	InvalidSwitchType = 57,
	FormatNotReady = 63,
	WrongBankVersion = 64,
	FileNotFound = 66,
	DeviceNotReady = 67,
	BankAlreadyLoaded = 69,
	RenderedFX = 71,
	ProcessNeeded = 72,
	ProcessDone = 73,
	MemManagerNotInitialized = 74,
	StreamMgrNotInitialized = 75,
	SSEInstructionsNotSupported = 76,
	Busy = 77,
	UnsupportedChannelConfig = 78,
	PluginMediaNotAvailable = 79,
	MustBeVirtualized = 80,
	CommandTooLarge = 81,
	RejectedByFilter = 82,
	InvalidCustomPlatformName = 83,
	DLLCannotLoad = 84,
	DLLPathNotFound = 85,
	NoJavaVM = 86,
	OpenSLError = 87,
	PluginNotRegistered = 88,
	DataAlignmentError = 89,
	EAkResult_MAX = 90
};

// Object: Enum AkAudio.EGameplayVoiceType
enum class EGameplayVoiceType : uint8_t
{
	Passive = 0,
	QuickVoice = 1,
	WorldMark = 2,
	BattlegroundStronghold = 3,
	EGameplayVoiceType_MAX = 4
};

// Object: Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t
{
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2
};

// Object: Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t
{
	Default = 0,
	VoiceChat = 1,
	GameChat = 2,
	VideoRecording = 3,
	Measurement = 4,
	MoviePlayback = 5,
	VideoChat = 6,
	EAkAudioSessionMode_MAX = 7
};

// Object: Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4
};

// Object: Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t
{
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3
};

// Object: Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3
};

// Object: Enum AkAudio.EAudioAction
enum class EAudioAction : uint8_t
{
	Play = 0,
	Stop = 1,
	Pause = 2,
	Resume = 3,
	Break = 4,
	Discard = 5,
	Load = 6,
	Unload = 7,
	Reload = 8,
	SetValue = 9,
	Tick = 10,
	Register = 11,
	Unregister = 12,
	EAudioAction_MAX = 13
};

// Object: Enum AkAudio.EAudioObjectType
enum class EAudioObjectType : uint8_t
{
	Event = 0,
	Switch = 1,
	State = 2,
	RTPC = 3,
	SoundBank = 4,
	LowLevelInfo = 5,
	EAudioObjectType_MAX = 6
};

// Object: Enum AkAudio.AkCodecId
enum class EAkCodecId : uint8_t
{
	None = 0,
	PCM = 1,
	ADPCM = 2,
	XMA = 3,
	Vorbis = 4,
	AAC = 10,
	ATRAC9 = 12,
	OpusNX = 17,
	AkOpus = 19,
	AkOpusWEM = 20,
	AkCodecId_MAX = 21
};

// Object: Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
	AkMidiCcBankSelectCoarse = 0,
	AkMidiCcModWheelCoarse = 1,
	AkMidiCcBreathCtrlCoarse = 2,
	AkMidiCcCtrl3Coarse = 3,
	AkMidiCcFootPedalCoarse = 4,
	AkMidiCcPortamentoCoarse = 5,
	AkMidiCcDataEntryCoarse = 6,
	AkMidiCcVolumeCoarse = 7,
	AkMidiCcBalanceCoarse = 8,
	AkMidiCcCtrl9Coarse = 9,
	AkMidiCcPanPositionCoarse = 10,
	AkMidiCcExpressionCoarse = 11,
	AkMidiCcEffectCtrl1Coarse = 12,
	AkMidiCcEffectCtrl2Coarse = 13,
	AkMidiCcCtrl14Coarse = 14,
	AkMidiCcCtrl15Coarse = 15,
	AkMidiCcGenSlider1 = 16,
	AkMidiCcGenSlider2 = 17,
	AkMidiCcGenSlider3 = 18,
	AkMidiCcGenSlider4 = 19,
	AkMidiCcCtrl20Coarse = 20,
	AkMidiCcCtrl21Coarse = 21,
	AkMidiCcCtrl22Coarse = 22,
	AkMidiCcCtrl23Coarse = 23,
	AkMidiCcCtrl24Coarse = 24,
	AkMidiCcCtrl25Coarse = 25,
	AkMidiCcCtrl26Coarse = 26,
	AkMidiCcCtrl27Coarse = 27,
	AkMidiCcCtrl28Coarse = 28,
	AkMidiCcCtrl29Coarse = 29,
	AkMidiCcCtrl30Coarse = 30,
	AkMidiCcCtrl31Coarse = 31,
	AkMidiCcBankSelectFine = 32,
	AkMidiCcModWheelFine = 33,
	AkMidiCcBreathCtrlFine = 34,
	AkMidiCcCtrl3Fine = 35,
	AkMidiCcFootPedalFine = 36,
	AkMidiCcPortamentoFine = 37,
	AkMidiCcDataEntryFine = 38,
	AkMidiCcVolumeFine = 39,
	AkMidiCcBalanceFine = 40,
	AkMidiCcCtrl9Fine = 41,
	AkMidiCcPanPositionFine = 42,
	AkMidiCcExpressionFine = 43,
	AkMidiCcEffectCtrl1Fine = 44,
	AkMidiCcEffectCtrl2Fine = 45,
	AkMidiCcCtrl14Fine = 46,
	AkMidiCcCtrl15Fine = 47,
	AkMidiCcCtrl20Fine = 52,
	AkMidiCcCtrl21Fine = 53,
	AkMidiCcCtrl22Fine = 54,
	AkMidiCcCtrl23Fine = 55,
	AkMidiCcCtrl24Fine = 56,
	AkMidiCcCtrl25Fine = 57,
	AkMidiCcCtrl26Fine = 58,
	AkMidiCcCtrl27Fine = 59,
	AkMidiCcCtrl28Fine = 60,
	AkMidiCcCtrl29Fine = 61,
	AkMidiCcCtrl30Fine = 62,
	AkMidiCcCtrl31Fine = 63,
	AkMidiCcHoldPedal = 64,
	AkMidiCcPortamentoOnOff = 65,
	AkMidiCcSustenutoPedal = 66,
	AkMidiCcSoftPedal = 67,
	AkMidiCcLegatoPedal = 68,
	AkMidiCcHoldPedal2 = 69,
	AkMidiCcSoundVariation = 70,
	AkMidiCcSoundTimbre = 71,
	AkMidiCcSoundReleaseTime = 72,
	AkMidiCcSoundAttackTime = 73,
	AkMidiCcSoundBrightness = 74,
	AkMidiCcSoundCtrl6 = 75,
	AkMidiCcSoundCtrl7 = 76,
	AkMidiCcSoundCtrl8 = 77,
	AkMidiCcSoundCtrl9 = 78,
	AkMidiCcSoundCtrl10 = 79,
	AkMidiCcGeneralButton1 = 80,
	AkMidiCcGeneralButton2 = 81,
	AkMidiCcGeneralButton3 = 82,
	AkMidiCcGeneralButton4 = 83,
	AkMidiCcReverbLevel = 91,
	AkMidiCcTremoloLevel = 92,
	AkMidiCcChorusLevel = 93,
	AkMidiCcCelesteLevel = 94,
	AkMidiCcPhaserLevel = 95,
	AkMidiCcDataButtonP1 = 96,
	AkMidiCcDataButtonM1 = 97,
	AkMidiCcNonRegisterCoarse = 98,
	AkMidiCcNonRegisterFine = 99,
	AkMidiCcAllSoundOff = 120,
	AkMidiCcAllControllersOff = 121,
	AkMidiCcLocalKeyboard = 122,
	AkMidiCcAllNotesOff = 123,
	AkMidiCcOmniModeOff = 124,
	AkMidiCcOmniModeOn = 125,
	AkMidiCcOmniMonophonicOn = 126,
	AkMidiCcOmniPolyphonicOn = 127,
	EAkMidiCcValues_MAX = 128
};

// Object: Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint16_t
{
	AkMidiEventTypeInvalid = 0,
	AkMidiEventTypeNoteOff = 128,
	AkMidiEventTypeNoteOn = 144,
	AkMidiEventTypeNoteAftertouch = 160,
	AkMidiEventTypeController = 176,
	AkMidiEventTypeProgramChange = 192,
	AkMidiEventTypeChannelAftertouch = 208,
	AkMidiEventTypePitchBend = 224,
	AkMidiEventTypeSysex = 240,
	AkMidiEventTypeEscape = 247,
	AkMidiEventTypeMeta = 255,
	EAkMidiEventType_MAX = 256
};

// Object: Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t
{
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5
};

// Object: Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
	Log3 = 0,
	Sine = 1,
	Log1 = 2,
	InvSCurve = 3,
	Linear = 4,
	SCurve = 5,
	Exp1 = 6,
	SineRecip = 7,
	Exp3 = 8,
	LastFadeCurve = 9,
	Constant = 10,
	EAkCurveInterpolation_MAX = 11
};

// Object: Enum AkAudio.AkActionOnEventType
enum class EAkActionOnEventType : uint8_t
{
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5
};

// Object: Enum AkAudio.AkMultiPositionType
enum class EAkMultiPositionType : uint8_t
{
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3
};

// Object: Enum AkAudio.AkSpeakerConfiguration
enum class EAkSpeakerConfiguration : uint32_t
{
	Ak_Speaker_Front_Left = 1,
	Ak_Speaker_Front_Right = 2,
	Ak_Speaker_Front_Center = 4,
	Ak_Speaker_Low_Frequency = 8,
	Ak_Speaker_Back_Left = 16,
	Ak_Speaker_Back_Right = 32,
	Ak_Speaker_Back_Center = 256,
	Ak_Speaker_Side_Left = 512,
	Ak_Speaker_Side_Right = 1024,
	Ak_Speaker_Top = 2048,
	Ak_Speaker_Height_Front_Left = 4096,
	Ak_Speaker_Height_Front_Center = 8192,
	Ak_Speaker_Height_Front_Right = 16384,
	Ak_Speaker_Height_Back_Left = 32768,
	Ak_Speaker_Height_Back_Center = 65536,
	Ak_Speaker_Height_Back_Right = 131072,
	Ak_Speaker_MAX = 131073
};

// Object: Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	Ak_Parent = 0,
	Ak_MainMix = 1,
	Ak_Passthrough = 2,
	Ak_LFE = 3,
	AK_Audio_Objects = 4,
	Ak_1_0 = 5,
	Ak_2_0 = 6,
	Ak_2_1 = 7,
	Ak_3_0 = 8,
	Ak_3_1 = 9,
	Ak_4_0 = 10,
	Ak_4_1 = 11,
	Ak_5_0 = 12,
	Ak_5_1 = 13,
	Ak_7_1 = 14,
	Ak_5_1_2 = 15,
	Ak_7_1_2 = 16,
	Ak_7_1_4 = 17,
	Ak_Auro_9_1 = 18,
	Ak_Auro_10_1 = 19,
	Ak_Auro_11_1 = 20,
	Ak_Auro_13_1 = 21,
	Ak_Ambisonics_1st_order = 22,
	Ak_Ambisonics_2nd_order = 23,
	Ak_Ambisonics_3rd_order = 24,
	Ak_Ambisonics_4th_order = 25,
	Ak_Ambisonics_5th_order = 26,
	AkChannelConfiguration_MAX = 27
};

// Object: Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2
};

// Object: Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2
};

// Object: Enum AkAudio.EAkAudioContext
enum class EAkAudioContext : uint8_t
{
	Foreign = 0,
	GameplayAudio = 1,
	EditorAudio = 2,
	AlwaysActive = 3,
	EAkAudioContext_MAX = 4
};

// Object: Enum AkAudio.AkMeshType
enum class EAkMeshType : uint8_t
{
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2
};

// Object: Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t
{
	Socket = 0,
	HTCS = 1,
	EAkCommSystem_MAX = 2
};

// Object: Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t
{
	FrontLeft = 0,
	FrontRight = 1,
	FrontCenter = 2,
	LowFrequency = 3,
	BackLeft = 4,
	BackRight = 5,
	BackCenter = 8,
	SideLeft = 9,
	SideRight = 10,
	Top = 11,
	HeightFrontLeft = 12,
	HeightFrontCenter = 13,
	HeightFrontRight = 14,
	HeightBackLeft = 15,
	HeightBackCenter = 16,
	HeightBackRight = 17,
	EAkChannelMask_MAX = 18
};

// Object: Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t
{
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3
};

// Object: Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t
{
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2
};

// Object: Enum AkAudio.EPooledEmitterStatus
enum class EPooledEmitterStatus : uint8_t
{
	Registered = 0,
	Playing = 1,
	Stopped = 2,
	Locked = 3,
	Unregistered = 4,
	EPooledEmitterStatus_MAX = 5
};

// Object: Enum AkAudio.EAkFitToGeometryMode
enum class EAkFitToGeometryMode : uint8_t
{
	OrientedBox = 0,
	AlignedBox = 1,
	ConvexPolyhedron = 2,
	EAkFitToGeometryMode_MAX = 3
};

// Object: Enum AkAudio.EBankLoadStatus
enum class EBankLoadStatus : uint8_t
{
	Unloaded = 0,
	InQueue = 1,
	AsyncLoading = 2,
	AsyncUnloading = 3,
	Loaded = 4,
	Error = 5,
	EBankLoadStatus_MAX = 6
};

// Object: Enum AkAudio.EVoicePriorityGroupType
enum class EVoicePriorityGroupType : uint8_t
{
	Invalid = 0,
	Character = 1,
	BattleBroadcast = 2,
	EVoicePriorityGroupType_MAX = 3
};

// Object: Enum AkAudio.EEventPriorityStatus
enum class EEventPriorityStatus : uint8_t
{
	Available = 0,
	Waiting = 1,
	WaitingForPlayImmediately = 2,
	Playing = 3,
	Stopped = 4,
	EEventPriorityStatus_MAX = 5
};

// Object: ScriptStruct AkAudio.AKWaapiJsonObject
// Size: 0x10 (Inherited: 0x0)
struct FAKWaapiJsonObject
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkWaapiSubscriptionId
// Size: 0x8 (Inherited: 0x0)
struct FAkWaapiSubscriptionId
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct AkAudio.EventWithPriorityCallbackData
// Size: 0x50 (Inherited: 0x0)
struct FEventWithPriorityCallbackData
{
	uint16_t VoiceType; // 0x0(0x2)
	uint16_t VoiceTypeSecond; // 0x2(0x2)
	uint16_t SpecialBehaviorUID; // 0x4(0x2)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FString NickName; // 0x8(0x10)
	int32_t LocalizationID; // 0x18(0x4)
	int32_t LocalizationIDSecond; // 0x1C(0x4)
	struct FString EventNameSecond; // 0x20(0x10)
	int32_t PosInTeam; // 0x30(0x4)
	bool bIsLocalPlayer; // 0x34(0x1)
	enum class EGameplayVoiceType GameplayVoiceType; // 0x35(0x1)
	uint8_t Pad_0x36[0x2]; // 0x36(0x2)
	struct FString InteractionUniqueID; // 0x38(0x10)
	uint8_t IgnoreTeammatePos; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct AkAudio.AkAdvancedInitializationSettings
// Size: 0x2C (Inherited: 0x0)
struct FAkAdvancedInitializationSettings
{
	uint32_t IO_MemorySize; // 0x0(0x4)
	uint32_t IO_Granularity; // 0x4(0x4)
	float TargetAutoStreamBufferLength; // 0x8(0x4)
	bool UseStreamCache; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	uint32_t MaximumPinnedBytesInCache; // 0x10(0x4)
	bool EnableGameSyncPreparation; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	uint32_t ContinuousPlaybackLookAhead; // 0x18(0x4)
	uint32_t MonitorQueuePoolSize; // 0x1C(0x4)
	uint32_t MaximumHardwareTimeoutMs; // 0x20(0x4)
	bool DebugOutOfRangeCheckEnabled; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float DebugOutOfRangeLimit; // 0x28(0x4)
};

// Object: ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size: 0x30 (Inherited: 0x2C)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{
	bool EnableMultiCoreRendering; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size: 0x38 (Inherited: 0x30)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t AudioAPI; // 0x30(0x4)
	bool RoundFrameSizeToHardwareSize; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct AkAudio.AkAudioParamsRTPC
// Size: 0x18 (Inherited: 0x0)
struct FAkAudioParamsRTPC
{
	struct FString Name; // 0x0(0x10)
	float Value; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct AkAudio.AkAudioParamsSwitch
// Size: 0x20 (Inherited: 0x0)
struct FAkAudioParamsSwitch
{
	struct FString GroupName; // 0x0(0x10)
	struct FString Name; // 0x10(0x10)
};

// Object: ScriptStruct AkAudio.AkAudioSession
// Size: 0xC (Inherited: 0x0)
struct FAkAudioSession
{
	enum class EAkAudioSessionCategory AudioSessionCategory; // 0x0(0x4)
	uint32_t AudioSessionCategoryOptions; // 0x4(0x4)
	enum class EAkAudioSessionMode AudioSessionMode; // 0x8(0x4)
};

// Object: ScriptStruct AkAudio.AkExternalSourceInfo
// Size: 0x38 (Inherited: 0x0)
struct FAkExternalSourceInfo
{
	struct FString ExternalSrcName; // 0x0(0x10)
	enum class EAkCodecId CodecID; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString Filename; // 0x18(0x10)
	struct UAkExternalMediaAsset* ExternalSourceAsset; // 0x28(0x8)
	bool IsStreamed; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct AkAudio.AkSegmentInfo
// Size: 0x24 (Inherited: 0x0)
struct FAkSegmentInfo
{
	int32_t CurrentPosition; // 0x0(0x4)
	int32_t PreEntryDuration; // 0x4(0x4)
	int32_t ActiveDuration; // 0x8(0x4)
	int32_t PostExitDuration; // 0xC(0x4)
	int32_t RemainingLookAheadTime; // 0x10(0x4)
	float BeatDuration; // 0x14(0x4)
	float BarDuration; // 0x18(0x4)
	float GridDuration; // 0x1C(0x4)
	float GridOffset; // 0x20(0x4)
};

// Object: ScriptStruct AkAudio.AkMidiEventBase
// Size: 0x2 (Inherited: 0x0)
struct FAkMidiEventBase
{
	enum class EAkMidiEventType Type; // 0x0(0x1)
	uint8_t Chan; // 0x1(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiProgramChange
// Size: 0x3 (Inherited: 0x2)
struct FAkMidiProgramChange : FAkMidiEventBase
{
	uint8_t ProgramNum; // 0x2(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size: 0x3 (Inherited: 0x2)
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{
	uint8_t Value; // 0x2(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size: 0x4 (Inherited: 0x2)
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{
	uint8_t Note; // 0x2(0x1)
	uint8_t Value; // 0x3(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiPitchBend
// Size: 0x8 (Inherited: 0x2)
struct FAkMidiPitchBend : FAkMidiEventBase
{
	uint8_t ValueLsb; // 0x2(0x1)
	uint8_t ValueMsb; // 0x3(0x1)
	int32_t FullValue; // 0x4(0x4)
};

// Object: ScriptStruct AkAudio.AkMidiCc
// Size: 0x4 (Inherited: 0x2)
struct FAkMidiCc : FAkMidiEventBase
{
	enum class EAkMidiCcValues Cc; // 0x2(0x1)
	uint8_t Value; // 0x3(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiNoteOnOff
// Size: 0x4 (Inherited: 0x2)
struct FAkMidiNoteOnOff : FAkMidiEventBase
{
	uint8_t Note; // 0x2(0x1)
	uint8_t Velocity; // 0x3(0x1)
};

// Object: ScriptStruct AkAudio.AkMidiGeneric
// Size: 0x4 (Inherited: 0x2)
struct FAkMidiGeneric : FAkMidiEventBase
{
	uint8_t Param1; // 0x2(0x1)
	uint8_t Param2; // 0x3(0x1)
};

// Object: ScriptStruct AkAudio.AkOutputSettings
// Size: 0x18 (Inherited: 0x0)
struct FAkOutputSettings
{
	struct FString AudioDeviceSharesetName; // 0x0(0x10)
	int32_t IdDevice; // 0x10(0x4)
	enum class EPanningRule PanRule; // 0x14(0x1)
	enum class EAkChannelConfiguration ChannelConfig; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct AkAudio.AkChannelMask
// Size: 0x4 (Inherited: 0x0)
struct FAkChannelMask
{
	int32_t ChannelMask; // 0x0(0x4)
};

// Object: ScriptStruct AkAudio.AkGeometrySurfaceOverride
// Size: 0x18 (Inherited: 0x0)
struct FAkGeometrySurfaceOverride
{
	struct UAkAcousticTexture* AcousticTexture; // 0x0(0x8)
	bool bEnableOcclusionOverride; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float OcclusionValue; // 0xC(0x4)
	float SurfaceArea; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct AkAudio.AkGeometryData
// Size: 0x50 (Inherited: 0x0)
struct FAkGeometryData
{
	struct TArray<struct FVector> Vertices; // 0x0(0x10)
	struct TArray<struct FAkAcousticSurface> Surfaces; // 0x10(0x10)
	struct TArray<struct FAkTriangle> Triangles; // 0x20(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideOcclusion; // 0x40(0x10)
};

// Object: ScriptStruct AkAudio.AkTriangle
// Size: 0x8 (Inherited: 0x0)
struct FAkTriangle
{
	uint16_t Point0; // 0x0(0x2)
	uint16_t Point1; // 0x2(0x2)
	uint16_t Point2; // 0x4(0x2)
	uint16_t Surface; // 0x6(0x2)
};

// Object: ScriptStruct AkAudio.AkAcousticSurface
// Size: 0x18 (Inherited: 0x0)
struct FAkAcousticSurface
{
	uint32_t Texture; // 0x0(0x4)
	float Occlusion; // 0x4(0x4)
	struct FString Name; // 0x8(0x10)
};

// Object: ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// Size: 0x30 (Inherited: 0x30)
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	bool UseHeadMountedDisplayAudioDevice; // 0x2D(0x1)
};

// Object: ScriptStruct AkAudio.AkPluginInfo
// Size: 0x28 (Inherited: 0x0)
struct FAkPluginInfo
{
	struct FString Name; // 0x0(0x10)
	uint32_t PluginID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString DLL; // 0x18(0x10)
};

// Object: ScriptStruct AkAudio.AkCommonInitializationSettings
// Size: 0x60 (Inherited: 0x0)
struct FAkCommonInitializationSettings
{
	uint32_t MaximumNumberOfMemoryPools; // 0x0(0x4)
	uint32_t MaximumNumberOfPositioningPaths; // 0x4(0x4)
	uint32_t CommandQueueSize; // 0x8(0x4)
	uint32_t SamplesPerFrame; // 0xC(0x4)
	struct FAkMainOutputSettings MainOutputSettings; // 0x10(0x28)
	float StreamingLookAheadRatio; // 0x38(0x4)
	uint16_t NumberOfRefillsInVoice; // 0x3C(0x2)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FAkSpatialAudioSettings SpatialAudioSettings; // 0x40(0x20)
};

// Object: ScriptStruct AkAudio.AkSpatialAudioSettings
// Size: 0x20 (Inherited: 0x0)
struct FAkSpatialAudioSettings
{
	uint32_t MaxSoundPropagationDepth; // 0x0(0x4)
	float MovementThreshold; // 0x4(0x4)
	uint32_t NumberOfPrimaryRays; // 0x8(0x4)
	uint32_t ReflectionOrder; // 0xC(0x4)
	float MaximumPathLength; // 0x10(0x4)
	float CPULimitPercentage; // 0x14(0x4)
	bool EnableDiffractionOnReflections; // 0x18(0x1)
	bool EnableGeometricDiffractionAndTransmission; // 0x19(0x1)
	bool CalcEmitterVirtualPosition; // 0x1A(0x1)
	bool UseObstruction; // 0x1B(0x1)
	bool UseOcclusion; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct AkAudio.AkMainOutputSettings
// Size: 0x28 (Inherited: 0x0)
struct FAkMainOutputSettings
{
	struct FString AudioDeviceShareset; // 0x0(0x10)
	uint32_t DeviceID; // 0x10(0x4)
	enum class EAkPanningRule PanningRule; // 0x14(0x4)
	enum class EAkChannelConfigType ChannelConfigType; // 0x18(0x4)
	uint32_t ChannelMask; // 0x1C(0x4)
	uint32_t NumberOfChannels; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// Size: 0x68 (Inherited: 0x60)
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{
	uint32_t SampleRate; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct AkAudio.AkCommunicationSettings
// Size: 0x20 (Inherited: 0x0)
struct FAkCommunicationSettings
{
	uint32_t PoolSize; // 0x0(0x4)
	uint16_t DiscoveryBroadcastPort; // 0x4(0x2)
	uint16_t CommandPort; // 0x6(0x2)
	uint16_t NotificationPort; // 0x8(0x2)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct FString NetworkName; // 0x10(0x10)
};

// Object: ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{
	enum class EAkCommSystem CommunicationSystem; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{
	bool InitializeSystemComms; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct AkAudio.AkBoolPropertyToControl
// Size: 0x10 (Inherited: 0x0)
struct FAkBoolPropertyToControl
{
	struct FString ItemProperty; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkPropertyToControl
// Size: 0x10 (Inherited: 0x0)
struct FAkPropertyToControl
{
	struct FString ItemProperty; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
// Size: 0x38 (Inherited: 0x30)
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t ACPBatchBufferSize; // 0x30(0x4)
	bool UseHardwareCodecLowLatencyMode; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct AkAudio.AkReverbDescriptor
// Size: 0x28 (Inherited: 0x0)
struct FAkReverbDescriptor
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct AkAudio.AkAcousticTextureParams
// Size: 0x20 (Inherited: 0x0)
struct FAkAcousticTextureParams
{
	struct FVector4 AbsorptionValues; // 0x0(0x10)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// Size: 0x30 (Inherited: 0x0)
struct FAkGeometrySurfacePropertiesToMap
{
	struct TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0(0x28)
	float OcclusionValue; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct AkAudio.AkWwiseItemToControl
// Size: 0x40 (Inherited: 0x0)
struct FAkWwiseItemToControl
{
	struct FAkWwiseObjectDetails ItemPicked; // 0x0(0x30)
	struct FString ItemPath; // 0x30(0x10)
};

// Object: ScriptStruct AkAudio.AkWwiseObjectDetails
// Size: 0x30 (Inherited: 0x0)
struct FAkWwiseObjectDetails
{
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemPath; // 0x10(0x10)
	struct FString ItemID; // 0x20(0x10)
};

// Object: ScriptStruct AkAudio.AkSurfacePoly
// Size: 0x18 (Inherited: 0x0)
struct FAkSurfacePoly
{
	struct UAkAcousticTexture* Texture; // 0x0(0x8)
	float Occlusion; // 0x8(0x4)
	bool EnableSurface; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float SurfaceArea; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct AkAudio.AkSurfaceEdgeInfo
// Size: 0x28 (Inherited: 0x0)
struct FAkSurfaceEdgeInfo
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct AkAudio.AkSurfaceEdgeVerts
// Size: 0x18 (Inherited: 0x0)
struct FAkSurfaceEdgeVerts
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct AkAudio.AkWaapiFieldNames
// Size: 0x10 (Inherited: 0x0)
struct FAkWaapiFieldNames
{
	struct FString FieldName; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkWaapiUri
// Size: 0x10 (Inherited: 0x0)
struct FAkWaapiUri
{
	struct FString Uri; // 0x0(0x10)
};

// Object: ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// Size: 0x34 (Inherited: 0x30)
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	bool UseHeadMountedDisplayAudioDevice; // 0x2D(0x1)
	uint32_t MaxSystemAudioObjects; // 0x30(0x4)
};

// Object: ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
// Size: 0x8 (Inherited: 0x0)
struct FAkXboxOneApuHeapInitializationSettings
{
	uint32_t CachedSize; // 0x0(0x4)
	uint32_t NonCachedSize; // 0x4(0x4)
};

// Object: ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
// Size: 0x34 (Inherited: 0x30)
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint16_t MaximumNumberOfXMAVoices; // 0x2E(0x2)
	bool UseHardwareCodecLowLatencyMode; // 0x30(0x1)
	uint8_t Pad_0x33[0x1]; // 0x33(0x1)
};

// Object: ScriptStruct AkAudio.EventCooldownData
// Size: 0x50 (Inherited: 0x0)
struct FEventCooldownData
{
	struct TMap<struct FString, float> Data; // 0x0(0x50)
};

// Object: ScriptStruct AkAudio.CachedGameSyncData
// Size: 0xA0 (Inherited: 0x0)
struct FCachedGameSyncData
{
	struct TMap<struct FString, float> RTPCData; // 0x0(0x50)
	struct TMap<struct FString, struct FString> SwitchData; // 0x50(0x50)
};

// Object: ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAkAudioEventSection* Section; // 0x18(0x8)
};

// Object: ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAkAudioRTPCSection* Section; // 0x18(0x8)
};

// Object: ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneFloatChannelSerializationHelper
{
	uint8_t PreInfinityExtrap; // 0x0(0x1)
	uint8_t PostInfinityExtrap; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<int32_t> Times; // 0x8(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18(0x10)
	float DefaultValue; // 0x28(0x4)
	bool bHasDefaultValue; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneFloatValueSerializationHelper
{
	float Value; // 0x0(0x4)
	uint8_t InterpMode; // 0x4(0x1)
	uint8_t TangentMode; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x8(0x14)
};

// Object: ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneTangentDataSerializationHelper
{
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	uint8_t TangentWeightMode; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float ArriveTangentWeight; // 0xC(0x4)
	float LeaveTangentWeight; // 0x10(0x4)
};

// Object: ScriptStruct AkAudio.WwiseDataRow
// Size: 0x20 (Inherited: 0x8)
struct FWwiseDataRow : FTableRowBase
{
	struct FName SoundbankName; // 0x8(0x8)
	struct FName EventName; // 0x10(0x8)
	bool bHasEventLowMemory; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

} // namespace SDK
