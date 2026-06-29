// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6
};

// Object: Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3
};

// Object: Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3
};

// Object: Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3
};

// Object: Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14
};

// Object: Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Never = 15,
	COND_MAX = 16
};

// Object: Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3
};

// Object: Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3
};

// Object: Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	MetersPerSecond = 12,
	KilometersPerHour = 13,
	MilesPerHour = 14,
	Celsius = 15,
	Farenheit = 16,
	Kelvin = 17,
	Micrograms = 18,
	Milligrams = 19,
	Grams = 20,
	Kilograms = 21,
	MetricTons = 22,
	Ounces = 23,
	Pounds = 24,
	Stones = 25,
	Newtons = 26,
	PoundsForce = 27,
	KilogramsForce = 28,
	Hertz = 29,
	Kilohertz = 30,
	Megahertz = 31,
	Gigahertz = 32,
	RevolutionsPerMinute = 33,
	Bytes = 34,
	Kilobytes = 35,
	Megabytes = 36,
	Gigabytes = 37,
	Terabytes = 38,
	Lumens = 39,
	Milliseconds = 40,
	Seconds = 41,
	Minutes = 42,
	Hours = 43,
	Days = 44,
	Months = 45,
	Years = 46,
	Multiplier = 47,
	Percentage = 48,
	Unspecified = 49,
	EUnit_MAX = 50
};

// Object: Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_R8_UINT = 57,
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR_0 = 64,
	PF_PLATFORM_HDR_1 = 65,
	PF_PLATFORM_HDR_2 = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_ETC2_R11_EAC = 69,
	PF_ETC2_RG11_EAC = 70,
	PF_MAX = 72
};

// Object: Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4
};

// Object: Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4
};

// Object: Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2
};

// Object: Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2
};

// Object: Enum CoreUObject.EPlatformSupportLevel
enum class EPlatformSupportLevel : uint8_t
{
	Platform_Level_Mobile = 0,
	Platform_Level_PC = 1,
	Platform_Level_MAX = 2
};

// Object: Enum CoreUObject.EPipelineSupportLevel
enum class EPipelineSupportLevel : uint8_t
{
	PSL_Mobile_Forward_LDR = 0,
	PSL_Mobile_Forward_HDR = 1,
	PSL_PC_Deferred = 2,
	PSL_MAX = 3
};

// Object: ScriptStruct CoreUObject.JoinabilitySettings
// Size: 0x14 (Inherited: 0x0)
struct FJoinabilitySettings
{
	struct FName SessionName; // 0x0(0x8)
	bool bPublicSearchable; // 0x8(0x1)
	bool bAllowInvites; // 0x9(0x1)
	bool bJoinViaPresence; // 0xA(0x1)
	bool bJoinViaPresenceFriendsOnly; // 0xB(0x1)
	int32_t MaxPlayers; // 0xC(0x4)
	int32_t MaxPartySize; // 0x10(0x4)
};

// Object: ScriptStruct CoreUObject.Default__ScriptStruct
// Size: 0x0 (Inherited: 0x0)
struct FDefault__ScriptStruct
{
};

// Object: ScriptStruct CoreUObject.UniqueNetIdWrapper
// Size: 0x1 (Inherited: 0x0)
struct FUniqueNetIdWrapper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct CoreUObject.Guid
// Size: 0x10 (Inherited: 0x0)
struct FGuid
{
	int32_t A; // 0x0(0x4)
	int32_t B; // 0x4(0x4)
	int32_t C; // 0x8(0x4)
	int32_t D; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Vector
// Size: 0xC (Inherited: 0x0)
struct FVector
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
};

// Object: ScriptStruct CoreUObject.Vector4
// Size: 0x10 (Inherited: 0x0)
struct FVector4
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
	float W; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Vector2D
// Size: 0x8 (Inherited: 0x0)
struct FVector2D
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.TwoVectors
// Size: 0x18 (Inherited: 0x0)
struct FTwoVectors
{
	struct FVector v1; // 0x0(0xC)
	struct FVector v2; // 0xC(0xC)
};

// Object: ScriptStruct CoreUObject.Plane
// Size: 0x10 (Inherited: 0xC)
struct FPlane : FVector
{
	float W; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Rotator
// Size: 0xC (Inherited: 0x0)
struct FRotator
{
	float Pitch; // 0x0(0x4)
	float Yaw; // 0x4(0x4)
	float Roll; // 0x8(0x4)
};

// Object: ScriptStruct CoreUObject.Quat
// Size: 0x10 (Inherited: 0x0)
struct FQuat
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
	float W; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.PackedNormal
// Size: 0x4 (Inherited: 0x0)
struct FPackedNormal
{
	uint8_t X; // 0x0(0x1)
	uint8_t Y; // 0x1(0x1)
	uint8_t Z; // 0x2(0x1)
	uint8_t W; // 0x3(0x1)
};

// Object: ScriptStruct CoreUObject.PackedRGB10A2N
// Size: 0x4 (Inherited: 0x0)
struct FPackedRGB10A2N
{
	int32_t Packed; // 0x0(0x4)
};

// Object: ScriptStruct CoreUObject.PackedRGBA16N
// Size: 0x8 (Inherited: 0x0)
struct FPackedRGBA16N
{
	int32_t XY; // 0x0(0x4)
	int32_t ZW; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.IntPoint
// Size: 0x8 (Inherited: 0x0)
struct FIntPoint
{
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.IntVector
// Size: 0xC (Inherited: 0x0)
struct FIntVector
{
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
	int32_t Z; // 0x8(0x4)
};

// Object: ScriptStruct CoreUObject.Color
// Size: 0x4 (Inherited: 0x0)
struct FColor
{
	uint8_t B; // 0x0(0x1)
	uint8_t G; // 0x1(0x1)
	uint8_t R; // 0x2(0x1)
	uint8_t A; // 0x3(0x1)
};

// Object: ScriptStruct CoreUObject.LinearColor
// Size: 0x10 (Inherited: 0x0)
struct FLinearColor
{
	float R; // 0x0(0x4)
	float G; // 0x4(0x4)
	float B; // 0x8(0x4)
	float A; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Box
// Size: 0x1C (Inherited: 0x0)
struct FBox
{
	struct FVector Min; // 0x0(0xC)
	struct FVector Max; // 0xC(0xC)
	uint8_t IsValid; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct CoreUObject.Box2D
// Size: 0x14 (Inherited: 0x0)
struct FBox2D
{
	struct FVector2D Min; // 0x0(0x8)
	struct FVector2D Max; // 0x8(0x8)
	uint8_t bIsValid; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x1C (Inherited: 0x0)
struct FBoxSphereBounds
{
	struct FVector Origin; // 0x0(0xC)
	struct FVector BoxExtent; // 0xC(0xC)
	float SphereRadius; // 0x18(0x4)
};

// Object: ScriptStruct CoreUObject.OrientedBox
// Size: 0x3C (Inherited: 0x0)
struct FOrientedBox
{
	struct FVector Center; // 0x0(0xC)
	struct FVector AxisX; // 0xC(0xC)
	struct FVector AxisY; // 0x18(0xC)
	struct FVector AxisZ; // 0x24(0xC)
	float ExtentX; // 0x30(0x4)
	float ExtentY; // 0x34(0x4)
	float ExtentZ; // 0x38(0x4)
};

// Object: ScriptStruct CoreUObject.Matrix
// Size: 0x40 (Inherited: 0x0)
struct FMatrix
{
	struct FPlane XPlane; // 0x0(0x10)
	struct FPlane YPlane; // 0x10(0x10)
	struct FPlane ZPlane; // 0x20(0x10)
	struct FPlane WPlane; // 0x30(0x10)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14 (Inherited: 0x0)
struct FInterpCurvePointFloat
{
	float InVal; // 0x0(0x4)
	float OutVal; // 0x4(0x4)
	float ArriveTangent; // 0x8(0x4)
	float LeaveTangent; // 0xC(0x4)
	uint8_t InterpMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveFloat
{
	struct TArray<struct FInterpCurvePointFloat> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x20 (Inherited: 0x0)
struct FInterpCurvePointVector2D
{
	float InVal; // 0x0(0x4)
	struct FVector2D OutVal; // 0x4(0x8)
	struct FVector2D ArriveTangent; // 0xC(0x8)
	struct FVector2D LeaveTangent; // 0x14(0x8)
	uint8_t InterpMode; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveVector2D
{
	struct TArray<struct FInterpCurvePointVector2D> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x2C (Inherited: 0x0)
struct FInterpCurvePointVector
{
	float InVal; // 0x0(0x4)
	struct FVector OutVal; // 0x4(0xC)
	struct FVector ArriveTangent; // 0x10(0xC)
	struct FVector LeaveTangent; // 0x1C(0xC)
	uint8_t InterpMode; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveVector
{
	struct TArray<struct FInterpCurvePointVector> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x50 (Inherited: 0x0)
struct FInterpCurvePointQuat
{
	float InVal; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FQuat OutVal; // 0x10(0x10)
	struct FQuat ArriveTangent; // 0x20(0x10)
	struct FQuat LeaveTangent; // 0x30(0x10)
	uint8_t InterpMode; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)
};

// Object: ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveQuat
{
	struct TArray<struct FInterpCurvePointQuat> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0x50 (Inherited: 0x0)
struct FInterpCurvePointTwoVectors
{
	float InVal; // 0x0(0x4)
	struct FTwoVectors OutVal; // 0x4(0x18)
	struct FTwoVectors ArriveTangent; // 0x1C(0x18)
	struct FTwoVectors LeaveTangent; // 0x34(0x18)
	uint8_t InterpMode; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveTwoVectors
{
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38 (Inherited: 0x0)
struct FInterpCurvePointLinearColor
{
	float InVal; // 0x0(0x4)
	struct FLinearColor OutVal; // 0x4(0x10)
	struct FLinearColor ArriveTangent; // 0x14(0x10)
	struct FLinearColor LeaveTangent; // 0x24(0x10)
	uint8_t InterpMode; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveLinearColor
{
	struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.Transform
// Size: 0x30 (Inherited: 0x0)
struct FTransform
{
	struct FQuat Rotation; // 0x0(0x10)
	struct FVector Translation; // 0x10(0xC)
	struct FVector Scale3D; // 0x1C(0xC)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct CoreUObject.RandomStream
// Size: 0x18 (Inherited: 0x0)
struct FRandomStream
{
	int32_t InitialSeed; // 0x0(0x4)
	int32_t Seed; // 0x4(0x4)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct CoreUObject.DateTime
// Size: 0x8 (Inherited: 0x0)
struct FDateTime
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.FrameNumber
// Size: 0x4 (Inherited: 0x0)
struct FFrameNumber
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct CoreUObject.FrameRate
// Size: 0x8 (Inherited: 0x0)
struct FFrameRate
{
	int32_t Numerator; // 0x0(0x4)
	int32_t Denominator; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.FrameTime
// Size: 0x8 (Inherited: 0x0)
struct FFrameTime
{
	struct FFrameNumber FrameNumber; // 0x0(0x4)
	float SubFrame; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.QualifiedFrameTime
// Size: 0x10 (Inherited: 0x0)
struct FQualifiedFrameTime
{
	struct FFrameTime Time; // 0x0(0x8)
	struct FFrameRate Rate; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.Timecode
// Size: 0x14 (Inherited: 0x0)
struct FTimecode
{
	int32_t Hours; // 0x0(0x4)
	int32_t Minutes; // 0x4(0x4)
	int32_t Seconds; // 0x8(0x4)
	int32_t Frames; // 0xC(0x4)
	bool bDropFrameFormat; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.Timespan
// Size: 0x8 (Inherited: 0x0)
struct FTimespan
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.SoftObjectPath
// Size: 0x18 (Inherited: 0x0)
struct FSoftObjectPath
{
	struct FName AssetPathName; // 0x0(0x8)
	struct FString SubPathString; // 0x8(0x10)
};

// Object: ScriptStruct CoreUObject.SoftClassPath
// Size: 0x18 (Inherited: 0x18)
struct FSoftClassPath : FSoftObjectPath
{
};

// Object: ScriptStruct CoreUObject.PrimaryAssetType
// Size: 0x8 (Inherited: 0x0)
struct FPrimaryAssetType
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.PrimaryAssetId
// Size: 0x10 (Inherited: 0x0)
struct FPrimaryAssetId
{
	struct FPrimaryAssetType PrimaryAssetType; // 0x0(0x8)
	struct FName PrimaryAssetName; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.FallbackStruct
// Size: 0x1 (Inherited: 0x0)
struct FFallbackStruct
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x8 (Inherited: 0x0)
struct FFloatRangeBound
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Value; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.FloatRange
// Size: 0x10 (Inherited: 0x0)
struct FFloatRange
{
	struct FFloatRangeBound LowerBound; // 0x0(0x8)
	struct FFloatRangeBound UpperBound; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x8 (Inherited: 0x0)
struct FInt32RangeBound
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Value; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.Int32Range
// Size: 0x10 (Inherited: 0x0)
struct FInt32Range
{
	struct FInt32RangeBound LowerBound; // 0x0(0x8)
	struct FInt32RangeBound UpperBound; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.FloatInterval
// Size: 0x8 (Inherited: 0x0)
struct FFloatInterval
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.Int32Interval
// Size: 0x8 (Inherited: 0x0)
struct FInt32Interval
{
	int32_t Min; // 0x0(0x4)
	int32_t Max; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.PolyglotTextData
// Size: 0xB8 (Inherited: 0x0)
struct FPolyglotTextData
{
	enum class ELocalizedTextSourceCategory Category; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString NativeCulture; // 0x8(0x10)
	struct FString Namespace; // 0x18(0x10)
	struct FString Key; // 0x28(0x10)
	struct FString NativeString; // 0x38(0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings; // 0x48(0x50)
	bool bIsMinimalPatch; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FText CachedText; // 0xA0(0x18)
};

// Object: ScriptStruct CoreUObject.AutomationEvent
// Size: 0x38 (Inherited: 0x0)
struct FAutomationEvent
{
	enum class EAutomationEventType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Message; // 0x8(0x10)
	struct FString Context; // 0x18(0x10)
	struct FGuid Artifact; // 0x28(0x10)
};

// Object: ScriptStruct CoreUObject.AutomationExecutionEntry
// Size: 0x58 (Inherited: 0x0)
struct FAutomationExecutionEntry
{
	struct FAutomationEvent Event; // 0x0(0x38)
	struct FString Filename; // 0x38(0x10)
	int32_t LineNumber; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FDateTime Timestamp; // 0x50(0x8)
};

} // namespace SDK
