// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3
};

// Object: Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6
};

// Object: Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5
};

// Object: Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8
};

// Object: Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4
};

// Object: Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6
};

// Object: Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};

// Object: Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4
};

// Object: Enum Engine.ETeleportType
enum class ETeleportType : uint8_t
{
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3
};

// Object: Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

// Object: Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

// Object: Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11
};

// Object: Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12
};

// Object: Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	EScreenOrientation_MAX = 7
};

// Object: Enum Engine.EApplicationState
enum class EApplicationState : uint8_t
{
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4
};

// Object: Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33
};

// Object: Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4
};

// Object: Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33
};

// Object: Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3
};

// Object: Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2
};

// Object: Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags_MAX = 5
};

// Object: Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
	MSR_1x1 = 0,
	MSR_2x1 = 1,
	MSR_1x2 = 2,
	MSR_2x2 = 3,
	MSR_4x2 = 4,
	MSR_2x4 = 5,
	MSR_4x4 = 6,
	MSR_Count = 7,
	MSR_MAX = 8
};

// Object: Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4
};

// Object: Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2
};

// Object: Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4
};

// Object: Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};

// Object: Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3
};

// Object: Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2
};

// Object: Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3
};

// Object: Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 5
};

// Object: Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

// Object: Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4
};

// Object: Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

// Object: Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Object: Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

// Object: Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7
};

// Object: Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERSM_Default = 0,
	ERSM_255 = 1,
	ERSM_1 = 2,
	ERSM_2 = 3,
	ERSM_4 = 4,
	ERSM_8 = 5,
	ERSM_16 = 6,
	ERSM_32 = 7,
	ERSM_64 = 8,
	ERSM_128 = 9,
	ERSM_MAX = 10
};

// Object: Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3
};

// Object: Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};

// Object: Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

// Object: Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4
};

// Object: Enum Engine.ELightmapType
enum class ELightmapType : uint8_t
{
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3
};

// Object: Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3
};

// Object: Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

// Object: Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7
};

// Object: Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

// Object: Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

// Object: Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Object: Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5
};

// Object: Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9
};

// Object: Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Object: Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2
};

// Object: Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3
};

// Object: Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};

// Object: Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4
};

// Object: Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6
};

// Object: Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4
};

// Object: Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4
};

// Object: Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4
};

// Object: Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

// Object: Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4
};

// Object: Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};

// Object: Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Object: Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3
};

// Object: Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5
};

// Object: Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

// Object: Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3
};

// Object: Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};

// Object: Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2
};

// Object: Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2
};

// Object: Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3
};

// Object: Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Object: Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

// Object: Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

// Object: Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

// Object: Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};

// Object: Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
	Auto = 0,
	Disabled = 1,
	Enabled = 2,
	ESkinCacheUsage_MAX = 3
};

// Object: Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3
};

// Object: Enum Engine.EClothMassMode
enum class EClothMassMode : uint8_t
{
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4
};

// Object: Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};

// Object: Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};

// Object: Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	EAlphaBlendOption_MAX = 15
};

// Object: Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5
};

// Object: Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

// Object: Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3
};

// Object: Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

// Object: Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 4,
	AACF_DriveMaterial_DEPRECATED = 8,
	AACF_Metadata = 16,
	AACF_DriveTrack = 32,
	AACF_Disabled = 64,
	AACF_MAX = 65
};

// Object: Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

// Object: Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4
};

// Object: Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4
};

// Object: Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3
};

// Object: Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

// Object: Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5
};

// Object: Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3
};

// Object: Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4
};

// Object: Enum Engine.EMontageBlendMode
enum class EMontageBlendMode : uint8_t
{
	Standard = 0,
	Inertialization = 1,
	EMontageBlendMode_MAX = 2
};

// Object: Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2
};

// Object: Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3
};

// Object: Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3
};

// Object: Enum Engine.EInertializationState
enum class EInertializationState : uint8_t
{
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3
};

// Object: Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3
};

// Object: Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2
};

// Object: Enum Engine.ECopyType
enum class ECopyType : uint8_t
{
	PlainProperty = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3,
	NameProperty = 4,
	ECopyType_MAX = 5
};

// Object: Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2
};

// Object: Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4
};

// Object: Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4
};

// Object: Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3
};

// Object: Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3
};

// Object: Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3
};

// Object: Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2
};

// Object: Enum Engine.EComponentType
enum class EComponentType : uint8_t
{
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	EComponentType_MAX = 11
};

// Object: Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7
};

// Object: Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2
};

// Object: Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	Override = 0,
	DoNotOverride = 1,
	NormalizeByWeight = 2,
	BlendByWeight = 3,
	UseBasePose = 4,
	UseMaxValue = 5,
	UseMinValue = 6,
	ECurveBlendOption_MAX = 7
};

// Object: Enum Engine.ESlotBlendMode
enum class ESlotBlendMode : uint8_t
{
	BlendByWeight = 0,
	DoNotOverrideSource = 1,
	DoNotOverrideSlot = 2,
	DoNotOverrideSourceOrSlot = 3,
	ESlotBlendMode_MAX = 4
};

// Object: Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

// Object: Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering = 0,
	LOD = 1,
	SignificanceLevel = 2,
	ENotifyFilterType_MAX = 3
};

// Object: Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2
};

// Object: Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3
};

// Object: Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

// Object: Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3
};

// Object: Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5
};

// Object: Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3
};

// Object: Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4
};

// Object: Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6
};

// Object: Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5
};

// Object: Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6
};

// Object: Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3
};

// Object: Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3
};

// Object: Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2
};

// Object: Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint16_t
{
	Low16000Hz = 16000,
	Normal24000Hz = 24000,
	EVoiceSampleRate_MAX = 24001
};

// Object: Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5
};

// Object: Enum Engine.EBlendProfileMode
enum class EBlendProfileMode : uint8_t
{
	TimeFactor = 0,
	WeightFactor = 1,
	BlendMask = 2,
	EBlendProfileMode_MAX = 3
};

// Object: Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3
};

// Object: Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3
};

// Object: Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3
};

// Object: Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3
};

// Object: Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

// Object: Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

// Object: Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2
};

// Object: Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3
};

// Object: Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4
};

// Object: Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

// Object: Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

// Object: Enum Engine.ESolarOscillatorType
enum class ESolarOscillatorType : uint8_t
{
	Default = 0,
	CustomOscillator = 1,
	ESolarOscillatorType_MAX = 2
};

// Object: Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Object: Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
	SineWave = 0,
	PerlinNoise = 1,
	VariableHalfPeriodSinWave = 2,
	EOscillatorWaveform_MAX = 3
};

// Object: Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2
};

// Object: Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2
};

// Object: Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

// Object: Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2
};

// Object: Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3
};

// Object: Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3
};

// Object: Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2
};

// Object: Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2
};

// Object: Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4
};

// Object: Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

// Object: Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

// Object: Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

// Object: Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3
};

// Object: Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3
};

// Object: Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5
};

// Object: Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4
};

// Object: Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

// Object: Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2
};

// Object: Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX = 6
};

// Object: Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

// Object: Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7
};

// Object: Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

// Object: Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_LODColoration = 18,
	VMI_QuadOverdraw = 19,
	VMI_PrimitiveDistanceAccuracy = 20,
	VMI_MeshUVDensityAccuracy = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration = 23,
	VMI_GroupLODColoration = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution = 26,
	VMI_PathTracing = 27,
	VMI_RayTracingDebug = 28,
	VMI_TexelDensity = 30,
	VMI_SoftwareOcclusion = 33,
	VMI_Max = 34,
	VMI_Unknown = 255
};

// Object: Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8,
	EDemoPlayFailure_MAX = 9
};

// Object: Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2
};

// Object: Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5
};

// Object: Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};

// Object: Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2
};

// Object: Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2
};

// Object: Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3
};

// Object: Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3
};

// Object: Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Cyan = 3,
	Magenta = 4,
	Yellow = 5,
	White = 6,
	Black = 7,
	MAX = 8
};

// Object: Enum Engine.ELandscapeSplineSegmentSurface
enum class ELandscapeSplineSegmentSurface : uint8_t
{
	SegmentSurfaceType_Default = 0,
	SegmentSurfaceType1 = 1,
	SegmentSurfaceType2 = 2,
	SegmentSurfaceType3 = 3,
	SegmentSurfaceType4 = 4,
	SegmentSurfaceType5 = 5,
	SegmentSurfaceType6 = 6,
	SegmentSurfaceType7 = 7,
	SegmentSurfaceType8 = 8,
	SegmentSurfaceType_Max = 9,
	ELandscapeSplineSegmentSurface_MAX = 10
};

// Object: Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7
};

// Object: Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2
};

// Object: Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3
};

// Object: Enum Engine.ELightProxyMeshGenMethod
enum class ELightProxyMeshGenMethod : uint8_t
{
	RayTrace = 0,
	VDB = 1,
	ELightProxyMeshGenMethod_MAX = 2
};

// Object: Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

// Object: Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3
};

// Object: Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3
};

// Object: Enum Engine.ELightMapBuildTargetPlatform
enum class ELightMapBuildTargetPlatform : uint8_t
{
	LMBuildTargetPlatform_Mobile = 0,
	LMBuildTargetPlatform_PC = 1,
	LMBuildTargetPlatform_MAX = 2
};

// Object: Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

// Object: Enum Engine.EMaterialDepthCompare
enum class EMaterialDepthCompare : uint8_t
{
	MDC_DepthNearOrEqual = 0,
	MDC_DepthNear = 1,
	MDC_DepthFartherOrEqual = 2,
	MDC_DepthFarther = 3,
	MDC_Equal = 4,
	MDC_NotEqual = 5,
	MDC_Never = 6,
	MDC_Always = 7,
	MDC_Count = 8,
	MDC_MAX = 9
};

// Object: Enum Engine.EMainPassMaterialStencilCompare
enum class EMainPassMaterialStencilCompare : uint8_t
{
	MTSC_Equal = 0,
	MTSC_NotEqual = 1,
	MTSC_Always = 2,
	MTSC_Count = 3,
	MTSC_MAX = 4
};

// Object: Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8,
	MSC_MAX = 9
};

// Object: Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17
};

// Object: Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3
};

// Object: Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_SingleLayerWater = 10,
	MSM_ThinTranslucent = 11,
	MSM_DefaultLitLowQuality = 12,
	MSM_UnlitShadow = 13,
	MSM_VertexLight = 14,
	MSM_VertexLight_Foliage = 15,
	MSM_NUM = 16,
	MSM_FromMaterialExpression = 17,
	MSM_MAX = 18
};

// Object: Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2
};

// Object: Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3
};

// Object: Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 3,
	Force16BitsPerChannel = 5,
	EGBufferFormat_MAX = 6
};

// Object: Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3
};

// Object: Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_BaseColrAndShadow = 8,
	SCS_FinalColorHDR = 9,
	SCS_FinalToneCurveHDR = 10,
	SCS_FinalColorHDRAlpha = 11,
	SCS_MAX = 12
};

// Object: Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3
};

// Object: Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2
};

// Object: Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

// Object: Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3
};

// Object: Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_MAX = 7
};

// Object: Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

// Object: Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

// Object: Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2
};

// Object: Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

// Object: Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

// Object: Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};

// Object: Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

// Object: Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4
};

// Object: Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5
};

// Object: Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Object: Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3
};

// Object: Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3
};

// Object: Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3
};

// Object: Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6
};

// Object: Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4
};

// Object: Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3
};

// Object: Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3
};

// Object: Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6
};

// Object: Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4
};

// Object: Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3
};

// Object: Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14
};

// Object: Enum Engine.EMapBuildDataQuality
enum class EMapBuildDataQuality : uint8_t
{
	HQ = 0,
	LQ = 1,
	Combine = 2,
	EMapBuildDataQuality_MAX = 3
};

// Object: Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

// Object: Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

// Object: Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_MAX = 17
};

// Object: Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

// Object: Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3
};

// Object: Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4
};

// Object: Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3
};

// Object: Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5
};

// Object: Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

// Object: Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_Texture2DArray = 6,
	FunctionInput_VolumeTexture = 7,
	FunctionInput_StaticBool = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal = 10,
	FunctionInput_MAX = 11
};

// Object: Enum Engine.ELMOverrideMode
enum class ELMOverrideMode : uint8_t
{
	Override = 0,
	Fade = 1,
	ELMOverrideMode_MAX = 2
};

// Object: Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

// Object: Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3
};

// Object: Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};

// Object: Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2
};

// Object: Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7
};

// Object: Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5
};

// Object: Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

// Object: Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4
};

// Object: Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6
};

// Object: Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6
};

// Object: Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6
};

// Object: Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

// Object: Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure = 12,
	MEVP_MAX = 13
};

// Object: Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

// Object: Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3
};

// Object: Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_Water = 14,
	MATUSAGE_HairStrands = 15,
	MATUSAGE_LidarPointCloud = 16,
	MATUSAGE_MAX = 17
};

// Object: Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3
};

// Object: Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2
};

// Object: Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4
};

// Object: Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28,
	PPI_WorldTangent = 29,
	PPI_Anisotropy = 30,
	PPI_GBufferStencil = 31,
	PPI_MAX = 32
};

// Object: Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface = 0,
	MD_SurfaceInstance = 1,
	MD_DeferredDecal = 2,
	MD_LightFunction = 3,
	MD_Volume = 4,
	MD_PostProcess = 5,
	MD_UI = 6,
	MD_RuntimeVirtualTexture = 7,
	MD_MAX = 8
};

// Object: Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t
{
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2
};

// Object: Enum Engine.EUVOutput
enum class EUVOutput : uint8_t
{
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2
};

// Object: Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2
};

// Object: Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4
};

// Object: Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3
};

// Object: Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3
};

// Object: Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};

// Object: Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6
};

// Object: Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3
};

// Object: Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

// Object: Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

// Object: Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5
};

// Object: Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4
};

// Object: Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8
};

// Object: Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3
};

// Object: Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3
};

// Object: Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Object: Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3
};

// Object: Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

// Object: Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

// Object: Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

// Object: Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};

// Object: Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5
};

// Object: Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_Advanced = 3,
	PDM_Ultimate = 4,
	PDM_MAX = 5
};

// Object: Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

// Object: Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

// Object: Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

// Object: Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

// Object: Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5
};

// Object: Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

// Object: Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

// Object: Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

// Object: Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3
};

// Object: Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

// Object: Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

// Object: Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

// Object: Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Object: Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

// Object: Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

// Object: Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

// Object: Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

// Object: Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3
};

// Object: Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

// Object: Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8
};

// Object: Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

// Object: Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

// Object: Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

// Object: Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

// Object: Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

// Object: Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

// Object: Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

// Object: Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_VelocityLocal = 4,
	PSA_AwayFromCenter = 5,
	PSA_TypeSpecific = 6,
	PSA_FacingCameraDistanceBlend = 7,
	PSA_MAX = 8
};

// Object: Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3
};

// Object: Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Object: Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2
};

// Object: Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

// Object: Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

// Object: Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_VectorUnitRand = 8,
	PSPT_MAX = 9
};

// Object: Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5
};

// Object: Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4
};

// Object: Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3
};

// Object: Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2
};

// Object: Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5
};

// Object: Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Object: Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3
};

// Object: Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4
};

// Object: Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4
};

// Object: Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	EMobileMSAASampleCount_MAX = 9
};

// Object: Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	ECompositingSampleCount_MAX = 9
};

// Object: Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3
};

// Object: Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2
};

// Object: Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2
};

// Object: Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2
};

// Object: Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3
};

// Object: Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23
};

// Object: Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2
};

// Object: Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_MAX = 5
};

// Object: Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2
};

// Object: Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	Orientation = 0,
	Translation = 1,
	MAX = 2
};

// Object: Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};

// Object: Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	UseSensitiveLiftoffCheck = 1,
	DisablePartialEndTick = 2,
	IgnoreZAccumulate = 4,
	ERootMotionSourceSettingsFlags_MAX = 5
};

// Object: Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared = 1,
	Finished = 2,
	MarkedForRemoval = 4,
	ERootMotionSourceStatusFlags_MAX = 5
};

// Object: Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2
};

// Object: Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
	BaseColor = 0,
	BaseColor_Normal_DEPRECATED = 1,
	BaseColor_Normal_Specular = 2,
	BaseColor_Normal_Specular_YCoCg = 3,
	BaseColor_Normal_Specular_Mask_YCoCg = 4,
	WorldHeight = 5,
	Count = 6,
	ERuntimeVirtualTextureMaterialType_MAX = 7
};

// Object: Enum Engine.ELightUnits
enum class ELightUnits : uint8_t
{
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3
};

// Object: Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4
};

// Object: Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

// Object: Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3
};

// Object: Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Anisotropy = 9,
	MP_Normal = 10,
	MP_Tangent = 11,
	MP_WorldPositionOffset = 12,
	MP_WorldDisplacement = 13,
	MP_TessellationMultiplier = 14,
	MP_SubsurfaceColor = 15,
	MP_CustomData0 = 16,
	MP_CustomData1 = 17,
	MP_AmbientOcclusion = 18,
	MP_Refraction = 19,
	MP_CustomizedUVs0 = 20,
	MP_CustomizedUVs1 = 21,
	MP_CustomizedUVs2 = 22,
	MP_CustomizedUVs3 = 23,
	MP_CustomizedUVs4 = 24,
	MP_CustomizedUVs5 = 25,
	MP_CustomizedUVs6 = 26,
	MP_CustomizedUVs7 = 27,
	MP_PixelDepthOffset = 28,
	MP_ShadingModel = 29,
	MP_MaterialAttributes = 31,
	MP_CustomOutput = 32,
	MP_MAX = 33
};

// Object: Enum Engine.ESkeletalMeshLODGroup
enum class ESkeletalMeshLODGroup : uint8_t
{
	SkeletalMeshLODGroup_None = 0,
	T1 = 1,
	T2 = 2,
	T3 = 3,
	T4 = 4,
	SkeletalMeshLODGroup_Max = 5,
	ESkeletalMeshLODGroup_MAX = 6
};

// Object: Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2
};

// Object: Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4
};

// Object: Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4
};

// Object: Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4
};

// Object: Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3
};

// Object: Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

// Object: Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3
};

// Object: Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

// Object: Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};

// Object: Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2
};

// Object: Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

// Object: Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};

// Object: Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

// Object: Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3
};

// Object: Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3
};

// Object: Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3
};

// Object: Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2
};

// Object: Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2
};

// Object: Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

// Object: Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3
};

// Object: Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count = 7,
	EMaxConcurrentResolutionRule_MAX = 8
};

// Object: Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25
};

// Object: Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

// Object: Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2
};

// Object: Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};

// Object: Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3
};

// Object: Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2
};

// Object: Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
	VerySmall_64 = 0,
	Small_256 = 1,
	Medium_512 = 2,
	Large_1024 = 3,
	VeryLarge_2048 = 4,
	ESoundWaveFFTSize_MAX = 5
};

// Object: Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8
};

// Object: Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint16_t
{
	Inherited = 0,
	RetainOnLoad = 1,
	PrimeOnLoad = 2,
	LoadOnDemand = 3,
	ForceInline = 4,
	Uninitialized = 255,
	ESoundWaveLoadingBehavior_MAX = 256
};

// Object: Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2
};

// Object: Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5
};

// Object: Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3
};

// Object: Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

// Object: Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

// Object: Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

// Object: Enum Engine.EStaticMeshLODGroup
enum class EStaticMeshLODGroup : uint8_t
{
	LevelArchitecture = 0,
	SmallProp = 1,
	LargeProp = 2,
	Deco = 3,
	Vista = 4,
	Foliage = 5,
	HighDetail = 6,
	StaticMeshLODGroup_Max = 7,
	EStaticMeshLODGroup_MAX = 8
};

// Object: Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4
};

// Object: Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

// Object: Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5
};

// Object: Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_TwelveVertices = 2,
	BVC_SixteenVertices = 3,
	BVC_MAX = 4
};

// Object: Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4
};

// Object: Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3
};

// Object: Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6,
	TLCA_MAX = 7
};

// Object: Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

// Object: Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7,
	TSF_G16 = 8,
	TSF_MAX = 9
};

// Object: Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3
};

// Object: Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

// Object: Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

// Object: Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

// Object: Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_MAX = 12
};

// Object: Enum Engine.ETextureClass
enum class ETextureClass : uint8_t
{
	Invalid = 0,
	TwoD = 1,
	Cube = 2,
	Array = 3,
	CubeArray = 4,
	Volume = 5,
	TwoDDynamic = 6,
	RenderTarget = 7,
	Other2DNoSource = 8,
	OtherUnknown = 9,
	ETextureClass_MAX = 10
};

// Object: Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3
};

// Object: Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5
};

// Object: Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3
};

// Object: Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_Unfiltered = 20,
	TMGS_MAX = 21
};

// Object: Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_Project01 = 34,
	TEXTUREGROUP_Project02 = 35,
	TEXTUREGROUP_Project03 = 36,
	TEXTUREGROUP_Project04 = 37,
	TEXTUREGROUP_Project05 = 38,
	TEXTUREGROUP_Project06 = 39,
	TEXTUREGROUP_Project07 = 40,
	TEXTUREGROUP_Project08 = 41,
	TEXTUREGROUP_Project09 = 42,
	TEXTUREGROUP_Project10 = 43,
	TEXTUREGROUP_Project11 = 44,
	TEXTUREGROUP_Project12 = 45,
	TEXTUREGROUP_Project13 = 46,
	TEXTUREGROUP_Project14 = 47,
	TEXTUREGROUP_Project15 = 48,
	TEXTUREGROUP_MAX = 49
};

// Object: Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_RGBA8_SRGB = 3,
	RTF_R16f = 4,
	RTF_RG16f = 5,
	RTF_RGBA16f = 6,
	RTF_R32f = 7,
	RTF_RG32f = 8,
	RTF_RGBA32f = 9,
	RTF_RGB10A2 = 10,
	RTF_MAX = 11
};

// Object: Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};

// Object: Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2
};

// Object: Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

// Object: Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

// Object: Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

// Object: Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

// Object: Enum Engine.EFontDPI
enum class EFontDPI : uint8_t
{
	Standard = 0,
	Unreal = 1,
	Custom = 2,
	EFontDPI_MAX = 3
};

// Object: Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	AutoScale = 4,
	Custom = 5,
	EUIScalingRule_MAX = 6
};

// Object: Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4
};

// Object: Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Object: Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2
};

// Object: Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5
};

// Object: Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2
};

// Object: Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3
};

// Object: ScriptStruct Engine.DistributionLookupTable
// Size: 0x20 (Inherited: 0x0)
struct FDistributionLookupTable
{
	float TimeScale; // 0x0(0x4)
	float TimeBias; // 0x4(0x4)
	struct TArray<float> Values; // 0x8(0x10)
	uint8_t Op; // 0x18(0x1)
	uint8_t EntryCount; // 0x19(0x1)
	uint8_t EntryStride; // 0x1A(0x1)
	uint8_t SubEntryStride; // 0x1B(0x1)
	uint8_t LockFlag; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.RawDistribution
// Size: 0x20 (Inherited: 0x0)
struct FRawDistribution
{
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// Object: ScriptStruct Engine.FloatDistribution
// Size: 0x20 (Inherited: 0x0)
struct FFloatDistribution
{
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// Object: ScriptStruct Engine.VectorDistribution
// Size: 0x20 (Inherited: 0x0)
struct FVectorDistribution
{
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// Object: ScriptStruct Engine.Vector4Distribution
// Size: 0x20 (Inherited: 0x0)
struct FVector4Distribution
{
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// Object: ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x8 (Inherited: 0x0)
struct FFloatRK4SpringInterpolator
{
	float StiffnessConstant; // 0x0(0x4)
	float DampeningRatio; // 0x4(0x4)
};

// Object: ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x8 (Inherited: 0x0)
struct FVectorRK4SpringInterpolator
{
	float StiffnessConstant; // 0x0(0x4)
	float DampeningRatio; // 0x4(0x4)
};

// Object: ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x0)
struct FFormatArgumentData
{
	struct FString ArgumentName; // 0x0(0x10)
	uint8_t ArgumentValueType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FText ArgumentValue; // 0x18(0x18)
	int32_t ArgumentValueInt; // 0x30(0x4)
	float ArgumentValueFloat; // 0x34(0x4)
	enum class ETextGender ArgumentValueGender; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct Engine.ExpressionInput
// Size: 0xC (Inherited: 0x0)
struct FExpressionInput
{
	int32_t OutputIndex; // 0x0(0x4)
	struct FName ExpressionName; // 0x4(0x8)
};

// Object: ScriptStruct Engine.MaterialAttributesInput
// Size: 0x10 (Inherited: 0xC)
struct FMaterialAttributesInput : FExpressionInput
{
	int32_t PropertyConnectedBitmask; // 0xC(0x4)
};

// Object: ScriptStruct Engine.ExpressionOutput
// Size: 0x8 (Inherited: 0x0)
struct FExpressionOutput
{
	struct FName OutputName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.MaterialInput
// Size: 0xC (Inherited: 0x0)
struct FMaterialInput
{
	int32_t OutputIndex; // 0x0(0x4)
	struct FName ExpressionName; // 0x4(0x8)
};

// Object: ScriptStruct Engine.ColorMaterialInput
// Size: 0xC (Inherited: 0xC)
struct FColorMaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.ScalarMaterialInput
// Size: 0xC (Inherited: 0xC)
struct FScalarMaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.ShadingModelMaterialInput
// Size: 0xC (Inherited: 0xC)
struct FShadingModelMaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.VectorMaterialInput
// Size: 0xC (Inherited: 0xC)
struct FVectorMaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.Vector2MaterialInput
// Size: 0xC (Inherited: 0xC)
struct FVector2MaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.HitResult
// Size: 0x88 (Inherited: 0x0)
struct FHitResult
{
	uint8_t bBlockingHit : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bStartPenetrating : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t FaceIndex; // 0x4(0x4)
	float Time; // 0x8(0x4)
	float Distance; // 0xC(0x4)
	struct FVector_NetQuantize Location; // 0x10(0xC)
	struct FVector_NetQuantize ImpactPoint; // 0x1C(0xC)
	struct FVector_NetQuantizeNormal Normal; // 0x28(0xC)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0xC)
	struct FVector_NetQuantize TraceStart; // 0x40(0xC)
	struct FVector_NetQuantize TraceEnd; // 0x4C(0xC)
	float PenetrationDepth; // 0x58(0x4)
	int32_t Item; // 0x5C(0x4)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x60(0x8)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x68(0x8)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x70(0x8)
	struct FName BoneName; // 0x78(0x8)
	struct FName MyBoneName; // 0x80(0x8)
};

// Object: ScriptStruct Engine.Vector_NetQuantize
// Size: 0xC (Inherited: 0xC)
struct FVector_NetQuantize : FVector
{
};

// Object: ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0xC (Inherited: 0xC)
struct FVector_NetQuantizeNormal : FVector
{
};

// Object: ScriptStruct Engine.BranchingPointNotifyPayload
// Size: 0x20 (Inherited: 0x0)
struct FBranchingPointNotifyPayload
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x0)
struct FSimpleMemberReference
{
	struct UObject* MemberParent; // 0x0(0x8)
	struct FName MemberName; // 0x8(0x8)
	struct FGuid MemberGuid; // 0x10(0x10)
};

// Object: ScriptStruct Engine.TickFunction
// Size: 0x28 (Inherited: 0x0)
struct FTickFunction
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint8_t TickGroup; // 0x8(0x1)
	uint8_t EndTickGroup; // 0x9(0x1)
	uint8_t bTickEvenWhenPaused : 1; // 0xA(0x1), Mask(0x1)
	uint8_t bCanEverTick : 1; // 0xA(0x1), Mask(0x2)
	uint8_t bStartWithTickEnabled : 1; // 0xA(0x1), Mask(0x4)
	uint8_t bAllowTickOnDedicatedServer : 1; // 0xA(0x1), Mask(0x8)
	uint8_t BitPad_0xA_4 : 4; // 0xA(0x1)
	uint8_t Pad_0xB[0x1]; // 0xB(0x1)
	float TickInterval; // 0xC(0x4)
	uint8_t Pad_0x10[0x18]; // 0x10(0x18)
};

// Object: ScriptStruct Engine.ActorComponentTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorComponentTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.SubtitleCue
// Size: 0x20 (Inherited: 0x0)
struct FSubtitleCue
{
	struct FText Text; // 0x0(0x18)
	float Time; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.InterpControlPoint
// Size: 0x1C (Inherited: 0x0)
struct FInterpControlPoint
{
	struct FVector PositionControlPoint; // 0x0(0xC)
	bool bPositionIsRelative; // 0xC(0x1)
	uint8_t Pad_0xD[0xF]; // 0xD(0xF)
};

// Object: ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 (Inherited: 0x0)
struct FPlatformInterfaceDelegateResult
{
	bool bSuccessful; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FPlatformInterfaceData Data; // 0x8(0x30)
};

// Object: ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 (Inherited: 0x0)
struct FPlatformInterfaceData
{
	struct FName DataName; // 0x0(0x8)
	uint8_t Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t IntValue; // 0xC(0x4)
	float FloatValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* ObjectValue; // 0x28(0x8)
};

// Object: ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x0)
struct FDebugFloatHistory
{
	struct TArray<float> Samples; // 0x0(0x10)
	float MaxSamples; // 0x10(0x4)
	float MinValue; // 0x14(0x4)
	float MaxValue; // 0x18(0x4)
	bool bAutoAdjustMinMax; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.LatentActionInfo
// Size: 0x18 (Inherited: 0x0)
struct FLatentActionInfo
{
	int32_t Linkage; // 0x0(0x4)
	int32_t UUID; // 0x4(0x4)
	struct FName ExecutionFunction; // 0x8(0x8)
	struct UObject* CallbackTarget; // 0x10(0x8)
};

// Object: ScriptStruct Engine.TimerHandle
// Size: 0x8 (Inherited: 0x0)
struct FTimerHandle
{
	uint64_t Handle; // 0x0(0x8)
};

// Object: ScriptStruct Engine.CollisionProfileName
// Size: 0x8 (Inherited: 0x0)
struct FCollisionProfileName
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct Engine.GenericStruct
// Size: 0x4 (Inherited: 0x0)
struct FGenericStruct
{
	int32_t Data; // 0x0(0x4)
};

// Object: ScriptStruct Engine.UserActivity
// Size: 0x18 (Inherited: 0x0)
struct FUserActivity
{
	struct FString ActionName; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct Engine.FastArraySerializerItem
// Size: 0xC (Inherited: 0x0)
struct FFastArraySerializerItem
{
	int32_t ReplicationID; // 0x0(0x4)
	int32_t ReplicationKey; // 0x4(0x4)
	int32_t MostRecentArrayReplicationKey; // 0x8(0x4)
};

// Object: ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x0)
struct FCurveTableRowHandle
{
	struct UCurveTable* CurveTable; // 0x0(0x8)
	struct FName RowName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.Vector_NetQuantize10
// Size: 0xC (Inherited: 0xC)
struct FVector_NetQuantize10 : FVector
{
};

// Object: ScriptStruct Engine.Vector_NetQuantize100
// Size: 0xC (Inherited: 0xC)
struct FVector_NetQuantize100 : FVector
{
};

// Object: ScriptStruct Engine.FastArraySerializer
// Size: 0x108 (Inherited: 0x0)
struct FFastArraySerializer
{
	uint8_t Pad_0x0[0x54]; // 0x0(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x4)
	uint8_t Pad_0x58[0xA8]; // 0x58(0xA8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
};

// Object: ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 (Inherited: 0x0)
struct FWalkableSlopeOverride
{
	uint8_t WalkableSlopeBehavior; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float WalkableSlopeAngle; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.BodyInstance
// Size: 0x130 (Inherited: 0x0)
struct FBodyInstance
{
	uint8_t Pad_0x0[0x6]; // 0x0(0x6)
	uint8_t ObjectType; // 0x6(0x1)
	uint8_t Pad_0x7[0x1]; // 0x7(0x1)
	uint8_t CollisionEnabled; // 0x8(0x1)
	uint8_t Pad_0x9[0x1]; // 0x9(0x1)
	enum class ESleepFamily SleepFamily; // 0xA(0x1)
	uint8_t DOFMode; // 0xB(0x1)
	uint8_t bUseCCD : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bIgnoreAnalyticCollisions : 1; // 0xC(0x1), Mask(0x2)
	uint8_t bNotifyRigidBodyCollision : 1; // 0xC(0x1), Mask(0x4)
	uint8_t BitPad_0xC_3 : 1; // 0xC(0x1)
	uint8_t bSimulatePhysics : 1; // 0xC(0x1), Mask(0x10)
	uint8_t bOverrideMass : 1; // 0xC(0x1), Mask(0x20)
	uint8_t bEnableGravity : 1; // 0xC(0x1), Mask(0x40)
	uint8_t bAutoWeld : 1; // 0xC(0x1), Mask(0x80)
	uint8_t bStartAwake : 1; // 0xD(0x1), Mask(0x1)
	uint8_t bGenerateWakeEvents : 1; // 0xD(0x1), Mask(0x2)
	uint8_t bUpdateMassWhenScaleChanges : 1; // 0xD(0x1), Mask(0x4)
	uint8_t bLockTranslation : 1; // 0xD(0x1), Mask(0x8)
	uint8_t bLockRotation : 1; // 0xD(0x1), Mask(0x10)
	uint8_t bLockXTranslation : 1; // 0xD(0x1), Mask(0x20)
	uint8_t bLockYTranslation : 1; // 0xD(0x1), Mask(0x40)
	uint8_t bLockZTranslation : 1; // 0xD(0x1), Mask(0x80)
	uint8_t bLockXRotation : 1; // 0xE(0x1), Mask(0x1)
	uint8_t bLockYRotation : 1; // 0xE(0x1), Mask(0x2)
	uint8_t bLockZRotation : 1; // 0xE(0x1), Mask(0x4)
	uint8_t bOverrideMaxAngularVelocity : 1; // 0xE(0x1), Mask(0x8)
	uint8_t BitPad_0xE_4 : 2; // 0xE(0x1)
	uint8_t bOverrideMaxDepenetrationVelocity : 1; // 0xE(0x1), Mask(0x40)
	uint8_t bOverrideWalkableSlopeOnInstance : 1; // 0xE(0x1), Mask(0x80)
	uint8_t bInterpolateWhenSubStepping : 1; // 0xF(0x1), Mask(0x1)
	uint8_t BitPad_0xF_1 : 7; // 0xF(0x1)
	uint8_t Pad_0x10[0xC]; // 0x10(0xC)
	struct FName CollisionProfileName; // 0x1C(0x8)
	uint8_t PositionSolverIterationCount; // 0x24(0x1)
	uint8_t VelocitySolverIterationCount; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	struct FCollisionResponse CollisionResponses; // 0x28(0x30)
	float MaxDepenetrationVelocity; // 0x58(0x4)
	float MassInKgOverride; // 0x5C(0x4)
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
	float LinearDamping; // 0x68(0x4)
	float AngularDamping; // 0x6C(0x4)
	struct FVector CustomDOFPlaneNormal; // 0x70(0xC)
	struct FVector COMNudge; // 0x7C(0xC)
	float MassScale; // 0x88(0x4)
	struct FVector InertiaTensorScale; // 0x8C(0xC)
	uint8_t Pad_0x98[0x10]; // 0x98(0x10)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xA8(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xB8(0x8)
	float MaxAngularVelocity; // 0xC0(0x4)
	float CustomSleepThresholdMultiplier; // 0xC4(0x4)
	float StabilizationThresholdMultiplier; // 0xC8(0x4)
	float PhysicsBlendWeight; // 0xCC(0x4)
	uint8_t Pad_0xD0[0x60]; // 0xD0(0x60)
};

// Object: ScriptStruct Engine.CollisionResponse
// Size: 0x30 (Inherited: 0x0)
struct FCollisionResponse
{
	struct FCollisionResponseContainer ResponseToChannels; // 0x0(0x20)
	struct TArray<struct FResponseChannel> ResponseArray; // 0x20(0x10)
};

// Object: ScriptStruct Engine.ResponseChannel
// Size: 0xC (Inherited: 0x0)
struct FResponseChannel
{
	struct FName Channel; // 0x0(0x8)
	uint8_t Response; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x0)
struct FCollisionResponseContainer
{
	uint8_t WorldStatic; // 0x0(0x1)
	uint8_t WorldDynamic; // 0x1(0x1)
	uint8_t Pawn; // 0x2(0x1)
	uint8_t Visibility; // 0x3(0x1)
	uint8_t Camera; // 0x4(0x1)
	uint8_t PhysicsBody; // 0x5(0x1)
	uint8_t Vehicle; // 0x6(0x1)
	uint8_t Destructible; // 0x7(0x1)
	uint8_t EngineTraceChannel1; // 0x8(0x1)
	uint8_t EngineTraceChannel2; // 0x9(0x1)
	uint8_t EngineTraceChannel3; // 0xA(0x1)
	uint8_t EngineTraceChannel4; // 0xB(0x1)
	uint8_t EngineTraceChannel5; // 0xC(0x1)
	uint8_t EngineTraceChannel6; // 0xD(0x1)
	uint8_t GameTraceChannel1; // 0xE(0x1)
	uint8_t GameTraceChannel2; // 0xF(0x1)
	uint8_t GameTraceChannel3; // 0x10(0x1)
	uint8_t GameTraceChannel4; // 0x11(0x1)
	uint8_t GameTraceChannel5; // 0x12(0x1)
	uint8_t GameTraceChannel6; // 0x13(0x1)
	uint8_t GameTraceChannel7; // 0x14(0x1)
	uint8_t GameTraceChannel8; // 0x15(0x1)
	uint8_t GameTraceChannel9; // 0x16(0x1)
	uint8_t GameTraceChannel10; // 0x17(0x1)
	uint8_t GameTraceChannel11; // 0x18(0x1)
	uint8_t GameTraceChannel12; // 0x19(0x1)
	uint8_t GameTraceChannel13; // 0x1A(0x1)
	uint8_t GameTraceChannel14; // 0x1B(0x1)
	uint8_t GameTraceChannel15; // 0x1C(0x1)
	uint8_t GameTraceChannel16; // 0x1D(0x1)
	uint8_t GameTraceChannel17; // 0x1E(0x1)
	uint8_t GameTraceChannel18; // 0x1F(0x1)
};

// Object: ScriptStruct Engine.CustomPrimitiveData
// Size: 0x10 (Inherited: 0x0)
struct FCustomPrimitiveData
{
	struct TArray<float> Data; // 0x0(0x10)
};

// Object: ScriptStruct Engine.LightingChannels
// Size: 0x1 (Inherited: 0x0)
struct FLightingChannels
{
	uint8_t bChannel0 : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bChannel1 : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bChannel2 : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
};

// Object: ScriptStruct Engine.MultipassAttribute
// Size: 0x10 (Inherited: 0x0)
struct FMultipassAttribute
{
	struct UMaterialInterface* MultipassMaterial; // 0x0(0x8)
	bool bUseIndependentAttribute; // 0x8(0x1)
	bool bForceFrontFaceCull; // 0x9(0x1)
	bool bIgnoreTranslucentSection; // 0xA(0x1)
	bool bIgnoreMaskedSection; // 0xB(0x1)
	int32_t MultiplePassTranslucencySortPriority; // 0xC(0x4)
};

// Object: ScriptStruct Engine.PerSectionMultipassAttribute
// Size: 0x10 (Inherited: 0x0)
struct FPerSectionMultipassAttribute
{
	int32_t SectionIndex; // 0x0(0x4)
	uint8_t bEnableMultiPass : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct UMaterialInterface* PerSectionMultipassMaterial; // 0x8(0x8)
};

// Object: ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x0)
struct FDataTableRowHandle
{
	struct UDataTable* DataTable; // 0x0(0x8)
	struct FName RowName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.RepAttachment
// Size: 0x40 (Inherited: 0x0)
struct FRepAttachment
{
	struct AActor* AttachParent; // 0x0(0x8)
	struct FVector_NetQuantize100 LocationOffset; // 0x8(0xC)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0xC)
	struct FRotator RotationOffset; // 0x20(0xC)
	struct FName AttachSocket; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct USceneComponent* AttachComponent; // 0x38(0x8)
};

// Object: ScriptStruct Engine.RepMovement
// Size: 0x38 (Inherited: 0x0)
struct FRepMovement
{
	struct FVector LinearVelocity; // 0x0(0xC)
	struct FVector AngularVelocity; // 0xC(0xC)
	struct FVector Location; // 0x18(0xC)
	struct FRotator Rotation; // 0x24(0xC)
	uint8_t Pad_0x30[0x4]; // 0x30(0x4)
	uint8_t bSimulatedPhysicSleep : 1; // 0x34(0x1), Mask(0x1)
	uint8_t bRepPhysics : 1; // 0x34(0x1), Mask(0x2)
	uint8_t BitPad_0x34_2 : 6; // 0x34(0x1)
	enum class EVectorQuantization LocationQuantizationLevel; // 0x35(0x1)
	enum class EVectorQuantization VelocityQuantizationLevel; // 0x36(0x1)
	enum class ERotatorQuantization RotationQuantizationLevel; // 0x37(0x1)
};

// Object: ScriptStruct Engine.ActorTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.MovementProperties
// Size: 0x1 (Inherited: 0x0)
struct FMovementProperties
{
	uint8_t bCanCrouch : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bCanJump : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bCanWalk : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bCanSwim : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bCanFly : 1; // 0x0(0x1), Mask(0x10)
	uint8_t BitPad_0x0_5 : 3; // 0x0(0x1)
};

// Object: ScriptStruct Engine.NavAgentProperties
// Size: 0x30 (Inherited: 0x1)
struct FNavAgentProperties : FMovementProperties
{
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AgentRadius; // 0x4(0x4)
	float AgentHeight; // 0x8(0x4)
	float AgentStepHeight; // 0xC(0x4)
	float NavWalkingSearchHeightScale; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FSoftClassPath PreferredNavData; // 0x18(0x18)
};

// Object: ScriptStruct Engine.FindFloorResult
// Size: 0x94 (Inherited: 0x0)
struct FFindFloorResult
{
	uint8_t bBlockingHit : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bWalkableFloor : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bLineTrace : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FloorDist; // 0x4(0x4)
	float LineDist; // 0x8(0x4)
	struct FHitResult HitResult; // 0xC(0x88)
};

// Object: ScriptStruct Engine.NavAvoidanceMask
// Size: 0x4 (Inherited: 0x0)
struct FNavAvoidanceMask
{
	uint8_t bGroup0 : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bGroup1 : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bGroup2 : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bGroup3 : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bGroup4 : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bGroup5 : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bGroup6 : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bGroup7 : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bGroup8 : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bGroup9 : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bGroup10 : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bGroup11 : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bGroup12 : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bGroup13 : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bGroup14 : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bGroup15 : 1; // 0x1(0x1), Mask(0x80)
	uint8_t bGroup16 : 1; // 0x2(0x1), Mask(0x1)
	uint8_t bGroup17 : 1; // 0x2(0x1), Mask(0x2)
	uint8_t bGroup18 : 1; // 0x2(0x1), Mask(0x4)
	uint8_t bGroup19 : 1; // 0x2(0x1), Mask(0x8)
	uint8_t bGroup20 : 1; // 0x2(0x1), Mask(0x10)
	uint8_t bGroup21 : 1; // 0x2(0x1), Mask(0x20)
	uint8_t bGroup22 : 1; // 0x2(0x1), Mask(0x40)
	uint8_t bGroup23 : 1; // 0x2(0x1), Mask(0x80)
	uint8_t bGroup24 : 1; // 0x3(0x1), Mask(0x1)
	uint8_t bGroup25 : 1; // 0x3(0x1), Mask(0x2)
	uint8_t bGroup26 : 1; // 0x3(0x1), Mask(0x4)
	uint8_t bGroup27 : 1; // 0x3(0x1), Mask(0x8)
	uint8_t bGroup28 : 1; // 0x3(0x1), Mask(0x10)
	uint8_t bGroup29 : 1; // 0x3(0x1), Mask(0x20)
	uint8_t bGroup30 : 1; // 0x3(0x1), Mask(0x40)
	uint8_t bGroup31 : 1; // 0x3(0x1), Mask(0x80)
};

// Object: ScriptStruct Engine.RootMotionMovementParams
// Size: 0x40 (Inherited: 0x0)
struct FRootMotionMovementParams
{
	bool bHasRootMotion; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float BlendWeight; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform RootMotionTransform; // 0x10(0x30)
};

// Object: ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x38 (Inherited: 0x0)
struct FRootMotionSourceGroup
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
	uint8_t bHasAdditiveSources : 1; // 0x28(0x1), Mask(0x1)
	uint8_t bHasOverrideSources : 1; // 0x28(0x1), Mask(0x2)
	uint8_t bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28(0x1), Mask(0x4)
	uint8_t bIsAdditiveVelocityApplied : 1; // 0x28(0x1), Mask(0x8)
	uint8_t BitPad_0x28_4 : 4; // 0x28(0x1)
	struct FRootMotionSourceSettings LastAccumulatedSettings; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2C(0xC)
};

// Object: ScriptStruct Engine.RootMotionSourceSettings
// Size: 0x1 (Inherited: 0x0)
struct FRootMotionSourceSettings
{
	uint8_t Flags; // 0x0(0x1)
};

// Object: ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x88 (Inherited: 0x0)
struct FRuntimeFloatCurve
{
	struct FRichCurve EditorCurveData; // 0x0(0x80)
	struct UCurveFloat* ExternalCurve; // 0x80(0x8)
};

// Object: ScriptStruct Engine.IndexedCurve
// Size: 0x68 (Inherited: 0x0)
struct FIndexedCurve
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x8(0x60)
};

// Object: ScriptStruct Engine.KeyHandleMap
// Size: 0x60 (Inherited: 0x0)
struct FKeyHandleMap
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct Engine.RealCurve
// Size: 0x70 (Inherited: 0x68)
struct FRealCurve : FIndexedCurve
{
	float DefaultValue; // 0x68(0x4)
	uint8_t PreInfinityExtrap; // 0x6C(0x1)
	uint8_t PostInfinityExtrap; // 0x6D(0x1)
	uint8_t Pad_0x6E[0x2]; // 0x6E(0x2)
};

// Object: ScriptStruct Engine.RichCurve
// Size: 0x80 (Inherited: 0x70)
struct FRichCurve : FRealCurve
{
	struct TArray<struct FRichCurveKey> Keys; // 0x70(0x10)
};

// Object: ScriptStruct Engine.RichCurveKey
// Size: 0x1C (Inherited: 0x0)
struct FRichCurveKey
{
	uint8_t InterpMode; // 0x0(0x1)
	uint8_t TangentMode; // 0x1(0x1)
	uint8_t TangentWeightMode; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float Time; // 0x4(0x4)
	float Value; // 0x8(0x4)
	float ArriveTangent; // 0xC(0x4)
	float ArriveTangentWeight; // 0x10(0x4)
	float LeaveTangent; // 0x14(0x4)
	float LeaveTangentWeight; // 0x18(0x4)
};

// Object: ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x28 (Inherited: 0x1)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper
{
	uint8_t Pad_0x1[0x17]; // 0x1(0x17)
	struct TArray<uint8_t> ReplicationBytes; // 0x18(0x10)
};

// Object: ScriptStruct Engine.RepRootMotionMontage
// Size: 0x98 (Inherited: 0x0)
struct FRepRootMotionMontage
{
	bool bIsActive; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UAnimMontage* AnimMontage; // 0x8(0x8)
	float Position; // 0x10(0x4)
	struct FVector_NetQuantize100 Location; // 0x14(0xC)
	struct FRotator Rotation; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x8)
	struct FName MovementBaseBoneName; // 0x38(0x8)
	bool bRelativePosition; // 0x40(0x1)
	bool bRelativeRotation; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48(0x38)
	struct FVector_NetQuantize10 Acceleration; // 0x80(0xC)
	struct FVector_NetQuantize10 LinearVelocity; // 0x8C(0xC)
};

// Object: ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0xA0 (Inherited: 0x0)
struct FSimulatedRootMotionReplicatedMove
{
	float Time; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FRepRootMotionMontage RootMotion; // 0x8(0x98)
};

// Object: ScriptStruct Engine.BasedMovementInfo
// Size: 0x30 (Inherited: 0x0)
struct FBasedMovementInfo
{
	struct UPrimitiveComponent* MovementBase; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
	struct FVector_NetQuantize100 Location; // 0x10(0xC)
	struct FRotator Rotation; // 0x1C(0xC)
	bool bServerHasBaseComponent; // 0x28(0x1)
	bool bRelativeRotation; // 0x29(0x1)
	bool bServerHasVelocity; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
};

// Object: ScriptStruct Engine.DamageEvent
// Size: 0x10 (Inherited: 0x0)
struct FDamageEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UDamageType* DamageTypeClass; // 0x8(0x8)
};

// Object: ScriptStruct Engine.PointDamageEvent
// Size: 0xA8 (Inherited: 0x10)
struct FPointDamageEvent : FDamageEvent
{
	float Damage; // 0x10(0x4)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x14(0xC)
	struct FHitResult HitInfo; // 0x20(0x88)
};

// Object: ScriptStruct Engine.Timeline
// Size: 0x98 (Inherited: 0x0)
struct FTimeline
{
	uint8_t LengthMode; // 0x0(0x1)
	uint8_t bLooping : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bReversePlayback : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bPlaying : 1; // 0x1(0x1), Mask(0x4)
	uint8_t BitPad_0x1_3 : 5; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float Length; // 0x4(0x4)
	float PlayRate; // 0x8(0x4)
	float Position; // 0xC(0x4)
	struct TArray<struct FTimelineEventEntry> Events; // 0x10(0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x20(0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x30(0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x40(0x10)
	struct FDelegate TimelinePostUpdateFunc; // 0x50(0x10)
	struct FDelegate TimelineFinishedFunc; // 0x60(0x10)
	struct TWeakObjectPtr<struct UObject> PropertySetObject; // 0x70(0x8)
	struct FName DirectionPropertyName; // 0x78(0x8)
	uint8_t Pad_0x80[0x18]; // 0x80(0x18)
};

// Object: ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x40 (Inherited: 0x0)
struct FTimelineLinearColorTrack
{
	struct UCurveLinearColor* LinearColorCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName LinearColorPropertyName; // 0x20(0x8)
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: ScriptStruct Engine.TimelineFloatTrack
// Size: 0x40 (Inherited: 0x0)
struct FTimelineFloatTrack
{
	struct UCurveFloat* FloatCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName FloatPropertyName; // 0x20(0x8)
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: ScriptStruct Engine.TimelineVectorTrack
// Size: 0x40 (Inherited: 0x0)
struct FTimelineVectorTrack
{
	struct UCurveVector* VectorCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName VectorPropertyName; // 0x20(0x8)
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: ScriptStruct Engine.TimelineEventEntry
// Size: 0x14 (Inherited: 0x0)
struct FTimelineEventEntry
{
	float Time; // 0x0(0x4)
	struct FDelegate EventFunc; // 0x4(0x10)
};

// Object: ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x18 (Inherited: 0x0)
struct FLightmassPrimitiveSettings
{
	uint8_t bUseTwoSidedLighting : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bShadowIndirectOnly : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bUseEmissiveForStaticLighting : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bUseVertexNormalForHemisphereGather : 1; // 0x0(0x1), Mask(0x8)
	uint8_t BitPad_0x0_4 : 4; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float EmissiveLightFalloffExponent; // 0x4(0x4)
	float EmissiveLightExplicitInfluenceRadius; // 0x8(0x4)
	float EmissiveBoost; // 0xC(0x4)
	float DiffuseBoost; // 0x10(0x4)
	float FullyOccludedSamplesFraction; // 0x14(0x4)
};

// Object: ScriptStruct Engine.StreamingTextureBuildInfo
// Size: 0xC (Inherited: 0x0)
struct FStreamingTextureBuildInfo
{
	uint32_t PackedRelativeBox; // 0x0(0x4)
	int32_t TextureLevelIndex; // 0x4(0x4)
	float TexelFactor; // 0x8(0x4)
};

// Object: ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0x98 (Inherited: 0x0)
struct FStaticMeshComponentLODInfo
{
	uint8_t Pad_0x0[0x98]; // 0x0(0x98)
};

// Object: ScriptStruct Engine.ForceFeedbackParameters
// Size: 0x24 (Inherited: 0x0)
struct FForceFeedbackParameters
{
	struct FName Tag; // 0x0(0x8)
	bool bLooping; // 0x8(0x1)
	bool bIgnoreTimeDilation; // 0x9(0x1)
	bool bPlayWhilePaused; // 0xA(0x1)
	uint8_t Pad_0xB[0x1]; // 0xB(0x1)
	float BaseAmplitudeScale; // 0xC(0x4)
	float AdditionalAmplitudeScale; // 0x10(0x4)
	struct FName LeftTriggerMappingKey; // 0x14(0x8)
	struct FName RightTriggerMappingKey; // 0x1C(0x8)
};

// Object: ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x18 (Inherited: 0x0)
struct FViewTargetTransitionParams
{
	float BlendTime; // 0x0(0x4)
	uint8_t BlendFunction; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float BlendExp; // 0x8(0x4)
	uint8_t bLockOutgoing : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bWaitScoutViewBeforeAssign : 1; // 0xC(0x1), Mask(0x2)
	uint8_t BitPad_0xC_2 : 6; // 0xC(0x1)
	uint8_t Pad_0xD[0xB]; // 0xD(0xB)
};

// Object: ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// Size: 0x10 (Inherited: 0x0)
struct FUpdateLevelStreamingLevelStatus
{
	struct FName PackageName; // 0x0(0x8)
	int32_t LODIndex; // 0x8(0x4)
	uint8_t bNewShouldBeLoaded : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bNewShouldBeVisible : 1; // 0xC(0x1), Mask(0x2)
	uint8_t bNewShouldBlockOnLoad : 1; // 0xC(0x1), Mask(0x4)
	uint8_t BitPad_0xC_3 : 5; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.CameraUpdateData
// Size: 0x30 (Inherited: 0x0)
struct FCameraUpdateData
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// Size: 0x14 (Inherited: 0x0)
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName PackageName; // 0x0(0x8)
	struct FName Filename; // 0x8(0x8)
	uint8_t bIsVisible : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x30 (Inherited: 0x0)
struct FActiveForceFeedbackEffect
{
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x0(0x8)
	uint8_t Pad_0x8[0x28]; // 0x8(0x28)
};

// Object: ScriptStruct Engine.PostProcessSettings
// Size: 0x600 (Inherited: 0x0)
struct FPostProcessSettings
{
	uint8_t bOverride_LDRSaturation : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_LDRContrast : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverride_LDRBrightness : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bOverride_NightfellOpacity : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bOverride_NightfellFadeness : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bOverride_NightfellRadius : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bOverride_NightfellSecondRadius : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bOverride_NightfellLocation : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bOverride_NightfellSecondLocation : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bOverride_WhiteTemp : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bOverride_WhiteTint : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bOverride_ColorSaturation : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bOverride_ColorContrast : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bOverride_ColorGamma : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bOverride_ColorGain : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bOverride_ColorOffset : 1; // 0x1(0x1), Mask(0x80)
	uint8_t bOverride_ColorSaturationShadows : 1; // 0x2(0x1), Mask(0x1)
	uint8_t bOverride_ColorContrastShadows : 1; // 0x2(0x1), Mask(0x2)
	uint8_t bOverride_ColorGammaShadows : 1; // 0x2(0x1), Mask(0x4)
	uint8_t bOverride_ColorGainShadows : 1; // 0x2(0x1), Mask(0x8)
	uint8_t bOverride_ColorOffsetShadows : 1; // 0x2(0x1), Mask(0x10)
	uint8_t bOverride_ColorSaturationMidtones : 1; // 0x2(0x1), Mask(0x20)
	uint8_t bOverride_ColorContrastMidtones : 1; // 0x2(0x1), Mask(0x40)
	uint8_t bOverride_ColorGammaMidtones : 1; // 0x2(0x1), Mask(0x80)
	uint8_t bOverride_ColorGainMidtones : 1; // 0x3(0x1), Mask(0x1)
	uint8_t bOverride_ColorOffsetMidtones : 1; // 0x3(0x1), Mask(0x2)
	uint8_t bOverride_ColorSaturationHighlights : 1; // 0x3(0x1), Mask(0x4)
	uint8_t bOverride_ColorContrastHighlights : 1; // 0x3(0x1), Mask(0x8)
	uint8_t bOverride_ColorGammaHighlights : 1; // 0x3(0x1), Mask(0x10)
	uint8_t bOverride_ColorGainHighlights : 1; // 0x3(0x1), Mask(0x20)
	uint8_t bOverride_ColorOffsetHighlights : 1; // 0x3(0x1), Mask(0x40)
	uint8_t bOverride_ColorCorrectionShadowsMax : 1; // 0x3(0x1), Mask(0x80)
	uint8_t bOverride_ColorCorrectionHighlightsMin : 1; // 0x4(0x1), Mask(0x1)
	uint8_t bOverride_BlueCorrection : 1; // 0x4(0x1), Mask(0x2)
	uint8_t bOverride_ExpandGamut : 1; // 0x4(0x1), Mask(0x4)
	uint8_t bOverride_FilmWhitePoint : 1; // 0x4(0x1), Mask(0x8)
	uint8_t bOverride_FilmSaturation : 1; // 0x4(0x1), Mask(0x10)
	uint8_t bOverride_FilmChannelMixerRed : 1; // 0x4(0x1), Mask(0x20)
	uint8_t bOverride_FilmChannelMixerGreen : 1; // 0x4(0x1), Mask(0x40)
	uint8_t bOverride_FilmChannelMixerBlue : 1; // 0x4(0x1), Mask(0x80)
	uint8_t bOverride_FilmContrast : 1; // 0x5(0x1), Mask(0x1)
	uint8_t bOverride_FilmDynamicRange : 1; // 0x5(0x1), Mask(0x2)
	uint8_t bOverride_FilmHealAmount : 1; // 0x5(0x1), Mask(0x4)
	uint8_t bOverride_FilmToeAmount : 1; // 0x5(0x1), Mask(0x8)
	uint8_t bOverride_FilmShadowTint : 1; // 0x5(0x1), Mask(0x10)
	uint8_t bOverride_FilmShadowTintBlend : 1; // 0x5(0x1), Mask(0x20)
	uint8_t bOverride_FilmShadowTintAmount : 1; // 0x5(0x1), Mask(0x40)
	uint8_t bOverride_FilmSlope : 1; // 0x5(0x1), Mask(0x80)
	uint8_t bOverride_FilmToe : 1; // 0x6(0x1), Mask(0x1)
	uint8_t bOverride_FilmShoulder : 1; // 0x6(0x1), Mask(0x2)
	uint8_t bOverride_FilmBlackClip : 1; // 0x6(0x1), Mask(0x4)
	uint8_t bOverride_FilmWhiteClip : 1; // 0x6(0x1), Mask(0x8)
	uint8_t bOverride_SceneColorTint : 1; // 0x6(0x1), Mask(0x10)
	uint8_t bOverride_SceneFringeIntensity : 1; // 0x6(0x1), Mask(0x20)
	uint8_t bOverride_ChromaticAberrationStartOffset : 1; // 0x6(0x1), Mask(0x40)
	uint8_t bOverride_AmbientCubemapTint : 1; // 0x6(0x1), Mask(0x80)
	uint8_t bOverride_AmbientCubemapIntensity : 1; // 0x7(0x1), Mask(0x1)
	uint8_t bOverride_BloomMethod : 1; // 0x7(0x1), Mask(0x2)
	uint8_t bOverride_BloomIntensity : 1; // 0x7(0x1), Mask(0x4)
	uint8_t bOverride_BloomThreshold : 1; // 0x7(0x1), Mask(0x8)
	uint8_t bOverride_Bloom1Tint : 1; // 0x7(0x1), Mask(0x10)
	uint8_t bOverride_Bloom1Size : 1; // 0x7(0x1), Mask(0x20)
	uint8_t bOverride_Bloom2Size : 1; // 0x7(0x1), Mask(0x40)
	uint8_t bOverride_Bloom2Tint : 1; // 0x7(0x1), Mask(0x80)
	uint8_t bOverride_Bloom3Tint : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bOverride_Bloom3Size : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bOverride_Bloom4Tint : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bOverride_Bloom4Size : 1; // 0x8(0x1), Mask(0x8)
	uint8_t bOverride_Bloom5Tint : 1; // 0x8(0x1), Mask(0x10)
	uint8_t bOverride_Bloom5Size : 1; // 0x8(0x1), Mask(0x20)
	uint8_t bOverride_Bloom6Tint : 1; // 0x8(0x1), Mask(0x40)
	uint8_t bOverride_Bloom6Size : 1; // 0x8(0x1), Mask(0x80)
	uint8_t bOverride_BloomSizeScale : 1; // 0x9(0x1), Mask(0x1)
	uint8_t bOverride_BloomConvolutionTexture : 1; // 0x9(0x1), Mask(0x2)
	uint8_t bOverride_BloomConvolutionSize : 1; // 0x9(0x1), Mask(0x4)
	uint8_t bOverride_BloomConvolutionCenterUV : 1; // 0x9(0x1), Mask(0x8)
	uint8_t bOverride_BloomConvolutionPreFilter : 1; // 0x9(0x1), Mask(0x10)
	uint8_t bOverride_BloomConvolutionPreFilterMin : 1; // 0x9(0x1), Mask(0x20)
	uint8_t bOverride_BloomConvolutionPreFilterMax : 1; // 0x9(0x1), Mask(0x40)
	uint8_t bOverride_BloomConvolutionPreFilterMult : 1; // 0x9(0x1), Mask(0x80)
	uint8_t bOverride_BloomConvolutionBufferScale : 1; // 0xA(0x1), Mask(0x1)
	uint8_t bOverride_BloomDirtMaskIntensity : 1; // 0xA(0x1), Mask(0x2)
	uint8_t bOverride_BloomDirtMaskTint : 1; // 0xA(0x1), Mask(0x4)
	uint8_t bOverride_BloomDirtMask : 1; // 0xA(0x1), Mask(0x8)
	uint8_t bOverride_CameraShutterSpeed : 1; // 0xA(0x1), Mask(0x10)
	uint8_t bOverride_CameraISO : 1; // 0xA(0x1), Mask(0x20)
	uint8_t bOverride_AutoExposureMethod : 1; // 0xA(0x1), Mask(0x40)
	uint8_t bOverride_AutoExposureLowPercent : 1; // 0xA(0x1), Mask(0x80)
	uint8_t bOverride_AutoExposureHighPercent : 1; // 0xB(0x1), Mask(0x1)
	uint8_t bOverride_AutoExposureMinBrightness : 1; // 0xB(0x1), Mask(0x2)
	uint8_t bOverride_AutoExposureMaxBrightness : 1; // 0xB(0x1), Mask(0x4)
	uint8_t bOverride_AutoExposureCalibrationConstant : 1; // 0xB(0x1), Mask(0x8)
	uint8_t bOverride_AutoExposureSpeedUp : 1; // 0xB(0x1), Mask(0x10)
	uint8_t bOverride_AutoExposureSpeedDown : 1; // 0xB(0x1), Mask(0x20)
	uint8_t bOverride_AutoExposureBias : 1; // 0xB(0x1), Mask(0x40)
	uint8_t bOverride_AutoExposureBiasCurve : 1; // 0xB(0x1), Mask(0x80)
	uint8_t bOverride_AutoExposureMeterMask : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xC(0x1), Mask(0x2)
	uint8_t bOverride_HistogramLogMin : 1; // 0xC(0x1), Mask(0x4)
	uint8_t bOverride_HistogramLogMax : 1; // 0xC(0x1), Mask(0x8)
	uint8_t bOverride_LensFlareIntensity : 1; // 0xC(0x1), Mask(0x10)
	uint8_t bOverride_LensFlareTint : 1; // 0xC(0x1), Mask(0x20)
	uint8_t bOverride_LensFlareTints : 1; // 0xC(0x1), Mask(0x40)
	uint8_t bOverride_LensFlareBokehSize : 1; // 0xC(0x1), Mask(0x80)
	uint8_t bOverride_LensFlareBokehShape : 1; // 0xD(0x1), Mask(0x1)
	uint8_t bOverride_LensFlareThreshold : 1; // 0xD(0x1), Mask(0x2)
	uint8_t bOverride_VignetteIntensity : 1; // 0xD(0x1), Mask(0x4)
	uint8_t bOverride_GrainIntensity : 1; // 0xD(0x1), Mask(0x8)
	uint8_t bOverride_GrainJitter : 1; // 0xD(0x1), Mask(0x10)
	uint8_t bOverride_AmbientOcclusionIntensity : 1; // 0xD(0x1), Mask(0x20)
	uint8_t bOverride_AmbientOcclusionStaticFraction : 1; // 0xD(0x1), Mask(0x40)
	uint8_t bOverride_AmbientOcclusionRadius : 1; // 0xD(0x1), Mask(0x80)
	uint8_t bOverride_AmbientOcclusionFadeDistance : 1; // 0xE(0x1), Mask(0x1)
	uint8_t bOverride_AmbientOcclusionFadeRadius : 1; // 0xE(0x1), Mask(0x2)
	uint8_t bOverride_AmbientOcclusionDistance : 1; // 0xE(0x1), Mask(0x4)
	uint8_t bOverride_AmbientOcclusionRadiusInWS : 1; // 0xE(0x1), Mask(0x8)
	uint8_t bOverride_AmbientOcclusionPower : 1; // 0xE(0x1), Mask(0x10)
	uint8_t bOverride_AmbientOcclusionBias : 1; // 0xE(0x1), Mask(0x20)
	uint8_t bOverride_AmbientOcclusionQuality : 1; // 0xE(0x1), Mask(0x40)
	uint8_t bOverride_AmbientOcclusionMipBlend : 1; // 0xE(0x1), Mask(0x80)
	uint8_t bOverride_AmbientOcclusionMipScale : 1; // 0xF(0x1), Mask(0x1)
	uint8_t bOverride_AmbientOcclusionMipThreshold : 1; // 0xF(0x1), Mask(0x2)
	uint8_t bOverride_RayTracingAO : 1; // 0xF(0x1), Mask(0x4)
	uint8_t bOverride_RayTracingAOSamplesPerPixel : 1; // 0xF(0x1), Mask(0x8)
	uint8_t bOverride_LPVIntensity : 1; // 0xF(0x1), Mask(0x10)
	uint8_t bOverride_LPVDirectionalOcclusionIntensity : 1; // 0xF(0x1), Mask(0x20)
	uint8_t bOverride_LPVDirectionalOcclusionRadius : 1; // 0xF(0x1), Mask(0x40)
	uint8_t bOverride_LPVDiffuseOcclusionExponent : 1; // 0xF(0x1), Mask(0x80)
	uint8_t bOverride_LPVSpecularOcclusionExponent : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bOverride_LPVSpecularOcclusionIntensity : 1; // 0x10(0x1), Mask(0x4)
	uint8_t bOverride_LPVSize : 1; // 0x10(0x1), Mask(0x8)
	uint8_t bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x10(0x1), Mask(0x10)
	uint8_t bOverride_LPVSecondaryBounceIntensity : 1; // 0x10(0x1), Mask(0x20)
	uint8_t bOverride_LPVGeometryVolumeBias : 1; // 0x10(0x1), Mask(0x40)
	uint8_t bOverride_LPVVplInjectionBias : 1; // 0x10(0x1), Mask(0x80)
	uint8_t bOverride_LPVEmissiveInjectionIntensity : 1; // 0x11(0x1), Mask(0x1)
	uint8_t bOverride_LPVFadeRange : 1; // 0x11(0x1), Mask(0x2)
	uint8_t bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x11(0x1), Mask(0x4)
	uint8_t bOverride_IndirectLightingColor : 1; // 0x11(0x1), Mask(0x8)
	uint8_t bOverride_IndirectLightingIntensity : 1; // 0x11(0x1), Mask(0x10)
	uint8_t bOverride_ColorGradingIntensity : 1; // 0x11(0x1), Mask(0x20)
	uint8_t bOverride_ColorGradingLUT : 1; // 0x11(0x1), Mask(0x40)
	uint8_t bOverride_DepthOfFieldFocalDistance : 1; // 0x11(0x1), Mask(0x80)
	uint8_t bOverride_DepthOfFieldFgdCocScale : 1; // 0x12(0x1), Mask(0x1)
	uint8_t bOverride_WeaponDepthOfFieldFocalDistance : 1; // 0x12(0x1), Mask(0x2)
	uint8_t bOverride_WeaponDepthOfFieldFgdCocScale : 1; // 0x12(0x1), Mask(0x4)
	uint8_t bOverride_DepthOfFieldFstop : 1; // 0x12(0x1), Mask(0x8)
	uint8_t bOverride_DepthOfFieldMinFstop : 1; // 0x12(0x1), Mask(0x10)
	uint8_t bOverride_DepthOfFieldBladeCount : 1; // 0x12(0x1), Mask(0x20)
	uint8_t bOverride_DepthOfFieldSensorWidth : 1; // 0x12(0x1), Mask(0x40)
	uint8_t bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x12(0x1), Mask(0x80)
	uint8_t bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x13(0x1), Mask(0x1)
	uint8_t bOverride_DepthOfFieldFocalRegion : 1; // 0x13(0x1), Mask(0x2)
	uint8_t bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x13(0x1), Mask(0x4)
	uint8_t bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x13(0x1), Mask(0x8)
	uint8_t bOverride_DepthOfFieldScale : 1; // 0x13(0x1), Mask(0x10)
	uint8_t bOverride_DepthOfFieldNearBlurSize : 1; // 0x13(0x1), Mask(0x20)
	uint8_t bOverride_DepthOfFieldFarBlurSize : 1; // 0x13(0x1), Mask(0x40)
	uint8_t bOverride_MobileHQGaussian : 1; // 0x13(0x1), Mask(0x80)
	uint8_t bOverride_DepthOfFieldOcclusion : 1; // 0x14(0x1), Mask(0x1)
	uint8_t bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x14(0x1), Mask(0x2)
	uint8_t bOverride_DepthOfFieldVignetteSize : 1; // 0x14(0x1), Mask(0x4)
	uint8_t bOverride_MotionBlurAmount : 1; // 0x14(0x1), Mask(0x8)
	uint8_t bOverride_MotionBlurMax : 1; // 0x14(0x1), Mask(0x10)
	uint8_t bOverride_MotionBlurTargetFPS : 1; // 0x14(0x1), Mask(0x20)
	uint8_t bOverride_MotionBlurPerObjectSize : 1; // 0x14(0x1), Mask(0x40)
	uint8_t bOverride_ScreenPercentage : 1; // 0x14(0x1), Mask(0x80)
	uint8_t bOverride_ScreenSpaceReflectionIntensity : 1; // 0x15(0x1), Mask(0x1)
	uint8_t bOverride_ScreenSpaceReflectionQuality : 1; // 0x15(0x1), Mask(0x2)
	uint8_t bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x15(0x1), Mask(0x4)
	uint8_t bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x15(0x1), Mask(0x8)
	uint8_t bOverride_ReflectionsType : 1; // 0x15(0x1), Mask(0x10)
	uint8_t bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x15(0x1), Mask(0x20)
	uint8_t bOverride_RayTracingReflectionsMaxBounces : 1; // 0x15(0x1), Mask(0x40)
	uint8_t bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x15(0x1), Mask(0x80)
	uint8_t bOverride_RayTracingReflectionsShadows : 1; // 0x16(0x1), Mask(0x1)
	uint8_t bOverride_RayTracingReflectionsTranslucency : 1; // 0x16(0x1), Mask(0x2)
	uint8_t bOverride_TranslucencyType : 1; // 0x16(0x1), Mask(0x4)
	uint8_t bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x16(0x1), Mask(0x8)
	uint8_t bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x16(0x1), Mask(0x10)
	uint8_t bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x16(0x1), Mask(0x20)
	uint8_t bOverride_RayTracingTranslucencyShadows : 1; // 0x16(0x1), Mask(0x40)
	uint8_t bOverride_RayTracingTranslucencyRefraction : 1; // 0x16(0x1), Mask(0x80)
	uint8_t bOverride_RayTracingGI : 1; // 0x17(0x1), Mask(0x1)
	uint8_t bOverride_RayTracingGIMaxBounces : 1; // 0x17(0x1), Mask(0x2)
	uint8_t bOverride_RayTracingGISamplesPerPixel : 1; // 0x17(0x1), Mask(0x4)
	uint8_t bOverride_PathTracingMaxBounces : 1; // 0x17(0x1), Mask(0x8)
	uint8_t bOverride_PathTracingSamplesPerPixel : 1; // 0x17(0x1), Mask(0x10)
	uint8_t bMobileHQGaussian : 1; // 0x17(0x1), Mask(0x20)
	uint8_t BitPad_0x17_6 : 2; // 0x17(0x1)
	uint8_t BloomMethod; // 0x18(0x1)
	uint8_t AutoExposureMethod; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	float WhiteTemp; // 0x1C(0x4)
	float WhiteTint; // 0x20(0x4)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
	struct FVector4 LDRSaturation; // 0x30(0x10)
	struct FVector4 LDRContrast; // 0x40(0x10)
	struct FVector4 LDRBrightness; // 0x50(0x10)
	float NightfellRadius; // 0x60(0x4)
	float NightfellSecondRadius; // 0x64(0x4)
	float NightfellOpacity; // 0x68(0x4)
	float NightfellFadeness; // 0x6C(0x4)
	struct FVector4 NightfellLocation; // 0x70(0x10)
	struct FVector4 NightfellSecondLocation; // 0x80(0x10)
	struct FVector4 ColorSaturation; // 0x90(0x10)
	struct FVector4 ColorContrast; // 0xA0(0x10)
	struct FVector4 ColorGamma; // 0xB0(0x10)
	struct FVector4 ColorGain; // 0xC0(0x10)
	struct FVector4 ColorOffset; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x10]; // 0xE0(0x10)
	struct FVector4 ColorSaturationShadows; // 0xF0(0x10)
	struct FVector4 ColorContrastShadows; // 0x100(0x10)
	struct FVector4 ColorGammaShadows; // 0x110(0x10)
	struct FVector4 ColorGainShadows; // 0x120(0x10)
	struct FVector4 ColorOffsetShadows; // 0x130(0x10)
	struct FVector4 ColorSaturationMidtones; // 0x140(0x10)
	struct FVector4 ColorContrastMidtones; // 0x150(0x10)
	struct FVector4 ColorGammaMidtones; // 0x160(0x10)
	struct FVector4 ColorGainMidtones; // 0x170(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x180(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x190(0x10)
	struct FVector4 ColorContrastHighlights; // 0x1A0(0x10)
	struct FVector4 ColorGammaHighlights; // 0x1B0(0x10)
	struct FVector4 ColorGainHighlights; // 0x1C0(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x1D0(0x10)
	float ColorCorrectionHighlightsMin; // 0x1E0(0x4)
	float ColorCorrectionShadowsMax; // 0x1E4(0x4)
	float BlueCorrection; // 0x1E8(0x4)
	float ExpandGamut; // 0x1EC(0x4)
	float FilmSlope; // 0x1F0(0x4)
	float FilmToe; // 0x1F4(0x4)
	float FilmShoulder; // 0x1F8(0x4)
	float FilmBlackClip; // 0x1FC(0x4)
	float FilmWhiteClip; // 0x200(0x4)
	struct FLinearColor FilmWhitePoint; // 0x204(0x10)
	struct FLinearColor FilmShadowTint; // 0x214(0x10)
	float FilmShadowTintBlend; // 0x224(0x4)
	float FilmShadowTintAmount; // 0x228(0x4)
	float FilmSaturation; // 0x22C(0x4)
	struct FLinearColor FilmChannelMixerRed; // 0x230(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x240(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x250(0x10)
	float FilmContrast; // 0x260(0x4)
	float FilmToeAmount; // 0x264(0x4)
	float FilmHealAmount; // 0x268(0x4)
	float FilmDynamicRange; // 0x26C(0x4)
	struct FLinearColor SceneColorTint; // 0x270(0x10)
	float SceneFringeIntensity; // 0x280(0x4)
	float ChromaticAberrationStartOffset; // 0x284(0x4)
	float BloomIntensity; // 0x288(0x4)
	float BloomThreshold; // 0x28C(0x4)
	float BloomSizeScale; // 0x290(0x4)
	float Bloom1Size; // 0x294(0x4)
	float Bloom2Size; // 0x298(0x4)
	float Bloom3Size; // 0x29C(0x4)
	float Bloom4Size; // 0x2A0(0x4)
	float Bloom5Size; // 0x2A4(0x4)
	float Bloom6Size; // 0x2A8(0x4)
	struct FLinearColor Bloom1Tint; // 0x2AC(0x10)
	struct FLinearColor Bloom2Tint; // 0x2BC(0x10)
	struct FLinearColor Bloom3Tint; // 0x2CC(0x10)
	struct FLinearColor Bloom4Tint; // 0x2DC(0x10)
	struct FLinearColor Bloom5Tint; // 0x2EC(0x10)
	struct FLinearColor Bloom6Tint; // 0x2FC(0x10)
	float BloomConvolutionSize; // 0x30C(0x4)
	struct UTexture2D* BloomConvolutionTexture; // 0x310(0x8)
	struct FVector2D BloomConvolutionCenterUV; // 0x318(0x8)
	float BloomConvolutionPreFilterMin; // 0x320(0x4)
	float BloomConvolutionPreFilterMax; // 0x324(0x4)
	float BloomConvolutionPreFilterMult; // 0x328(0x4)
	float BloomConvolutionBufferScale; // 0x32C(0x4)
	struct UTexture* BloomDirtMask; // 0x330(0x8)
	float BloomDirtMaskIntensity; // 0x338(0x4)
	struct FLinearColor BloomDirtMaskTint; // 0x33C(0x10)
	struct FLinearColor AmbientCubemapTint; // 0x34C(0x10)
	float AmbientCubemapIntensity; // 0x35C(0x4)
	struct UTextureCube* AmbientCubemap; // 0x360(0x8)
	float CameraShutterSpeed; // 0x368(0x4)
	float CameraISO; // 0x36C(0x4)
	float DepthOfFieldFstop; // 0x370(0x4)
	float DepthOfFieldMinFstop; // 0x374(0x4)
	int32_t DepthOfFieldBladeCount; // 0x378(0x4)
	float AutoExposureBias; // 0x37C(0x4)
	float AutoExposureBiasBackup; // 0x380(0x4)
	uint8_t bOverride_AutoExposureBiasBackup : 1; // 0x384(0x1), Mask(0x1)
	uint8_t AutoExposureApplyPhysicalCameraExposure : 1; // 0x384(0x1), Mask(0x2)
	uint8_t BitPad_0x384_2 : 6; // 0x384(0x1)
	uint8_t Pad_0x385[0x3]; // 0x385(0x3)
	struct UCurveFloat* AutoExposureBiasCurve; // 0x388(0x8)
	struct UTexture* AutoExposureMeterMask; // 0x390(0x8)
	float AutoExposureLowPercent; // 0x398(0x4)
	float AutoExposureHighPercent; // 0x39C(0x4)
	float AutoExposureMinBrightness; // 0x3A0(0x4)
	float AutoExposureMaxBrightness; // 0x3A4(0x4)
	float AutoExposureSpeedUp; // 0x3A8(0x4)
	float AutoExposureSpeedDown; // 0x3AC(0x4)
	float HistogramLogMin; // 0x3B0(0x4)
	float HistogramLogMax; // 0x3B4(0x4)
	float AutoExposureCalibrationConstant; // 0x3B8(0x4)
	float LensFlareIntensity; // 0x3BC(0x4)
	struct FLinearColor LensFlareTint; // 0x3C0(0x10)
	float LensFlareBokehSize; // 0x3D0(0x4)
	float LensFlareThreshold; // 0x3D4(0x4)
	struct UTexture* LensFlareBokehShape; // 0x3D8(0x8)
	struct FLinearColor LensFlareTints[0x8]; // 0x3E0(0x80)
	float VignetteIntensity; // 0x460(0x4)
	float GrainJitter; // 0x464(0x4)
	float GrainIntensity; // 0x468(0x4)
	float AmbientOcclusionIntensity; // 0x46C(0x4)
	uint8_t bOverride_SSGIAOIntensity : 1; // 0x470(0x1), Mask(0x1)
	uint8_t BitPad_0x470_1 : 7; // 0x470(0x1)
	uint8_t Pad_0x471[0x3]; // 0x471(0x3)
	float SSGIAOIntensity; // 0x474(0x4)
	uint8_t bOverride_SSGIDiffuseIntensity : 1; // 0x478(0x1), Mask(0x1)
	uint8_t BitPad_0x478_1 : 7; // 0x478(0x1)
	uint8_t Pad_0x479[0x3]; // 0x479(0x3)
	float SSGIDiffuseIntensity; // 0x47C(0x4)
	float AmbientOcclusionStaticFraction; // 0x480(0x4)
	float AmbientOcclusionRadius; // 0x484(0x4)
	uint8_t AmbientOcclusionRadiusInWS : 1; // 0x488(0x1), Mask(0x1)
	uint8_t BitPad_0x488_1 : 7; // 0x488(0x1)
	uint8_t Pad_0x489[0x3]; // 0x489(0x3)
	float AmbientOcclusionFadeDistance; // 0x48C(0x4)
	float AmbientOcclusionFadeRadius; // 0x490(0x4)
	float AmbientOcclusionDistance; // 0x494(0x4)
	float AmbientOcclusionPower; // 0x498(0x4)
	float AmbientOcclusionBias; // 0x49C(0x4)
	float AmbientOcclusionQuality; // 0x4A0(0x4)
	float AmbientOcclusionMipBlend; // 0x4A4(0x4)
	float AmbientOcclusionMipScale; // 0x4A8(0x4)
	float AmbientOcclusionMipThreshold; // 0x4AC(0x4)
	uint8_t RayTracingAO : 1; // 0x4B0(0x1), Mask(0x1)
	uint8_t BitPad_0x4B0_1 : 7; // 0x4B0(0x1)
	uint8_t Pad_0x4B1[0x3]; // 0x4B1(0x3)
	int32_t RayTracingAOSamplesPerPixel; // 0x4B4(0x4)
	struct FLinearColor IndirectLightingColor; // 0x4B8(0x10)
	float IndirectLightingIntensity; // 0x4C8(0x4)
	enum class ERayTracingGlobalIlluminationType RayTracingGIType; // 0x4CC(0x1)
	uint8_t Pad_0x4CD[0x3]; // 0x4CD(0x3)
	int32_t RayTracingGIMaxBounces; // 0x4D0(0x4)
	int32_t RayTracingGISamplesPerPixel; // 0x4D4(0x4)
	float ColorGradingIntensity; // 0x4D8(0x4)
	uint8_t Pad_0x4DC[0x4]; // 0x4DC(0x4)
	struct UTexture* ColorGradingLUT; // 0x4E0(0x8)
	float DepthOfFieldSensorWidth; // 0x4E8(0x4)
	float DepthOfFieldFocalDistance; // 0x4EC(0x4)
	float DepthOfFieldFgdCocScale; // 0x4F0(0x4)
	float WeaponDepthOfFieldFocalDistance; // 0x4F4(0x4)
	float WeaponDepthOfFieldFgdCocScale; // 0x4F8(0x4)
	float DepthOfFieldDepthBlurAmount; // 0x4FC(0x4)
	float DepthOfFieldDepthBlurRadius; // 0x500(0x4)
	float DepthOfFieldFocalRegion; // 0x504(0x4)
	float DepthOfFieldNearTransitionRegion; // 0x508(0x4)
	float DepthOfFieldFarTransitionRegion; // 0x50C(0x4)
	float DepthOfFieldScale; // 0x510(0x4)
	float DepthOfFieldNearBlurSize; // 0x514(0x4)
	float DepthOfFieldFarBlurSize; // 0x518(0x4)
	float DepthOfFieldOcclusion; // 0x51C(0x4)
	float DepthOfFieldSkyFocusDistance; // 0x520(0x4)
	float DepthOfFieldVignetteSize; // 0x524(0x4)
	float MotionBlurAmount; // 0x528(0x4)
	float MotionBlurMax; // 0x52C(0x4)
	int32_t MotionBlurTargetFPS; // 0x530(0x4)
	float MotionBlurPerObjectSize; // 0x534(0x4)
	float LPVIntensity; // 0x538(0x4)
	float LPVVplInjectionBias; // 0x53C(0x4)
	float LPVSize; // 0x540(0x4)
	float LPVSecondaryOcclusionIntensity; // 0x544(0x4)
	float LPVSecondaryBounceIntensity; // 0x548(0x4)
	float LPVGeometryVolumeBias; // 0x54C(0x4)
	float LPVEmissiveInjectionIntensity; // 0x550(0x4)
	float LPVDirectionalOcclusionIntensity; // 0x554(0x4)
	float LPVDirectionalOcclusionRadius; // 0x558(0x4)
	float LPVDiffuseOcclusionExponent; // 0x55C(0x4)
	float LPVSpecularOcclusionExponent; // 0x560(0x4)
	float LPVDiffuseOcclusionIntensity; // 0x564(0x4)
	float LPVSpecularOcclusionIntensity; // 0x568(0x4)
	enum class EReflectionsType ReflectionsType; // 0x56C(0x1)
	uint8_t Pad_0x56D[0x3]; // 0x56D(0x3)
	float ScreenSpaceReflectionIntensity; // 0x570(0x4)
	float ScreenSpaceReflectionQuality; // 0x574(0x4)
	float ScreenSpaceReflectionMaxRoughness; // 0x578(0x4)
	float RayTracingReflectionsMaxRoughness; // 0x57C(0x4)
	int32_t RayTracingReflectionsMaxBounces; // 0x580(0x4)
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x584(0x4)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x588(0x1)
	uint8_t RayTracingReflectionsTranslucency : 1; // 0x589(0x1), Mask(0x1)
	uint8_t BitPad_0x589_1 : 7; // 0x589(0x1)
	enum class ETranslucencyType TranslucencyType; // 0x58A(0x1)
	uint8_t Pad_0x58B[0x1]; // 0x58B(0x1)
	float RayTracingTranslucencyMaxRoughness; // 0x58C(0x4)
	int32_t RayTracingTranslucencyRefractionRays; // 0x590(0x4)
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x594(0x4)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x598(0x1)
	uint8_t RayTracingTranslucencyRefraction : 1; // 0x599(0x1), Mask(0x1)
	uint8_t BitPad_0x599_1 : 7; // 0x599(0x1)
	uint8_t Pad_0x59A[0x2]; // 0x59A(0x2)
	int32_t PathTracingMaxBounces; // 0x59C(0x4)
	int32_t PathTracingSamplesPerPixel; // 0x5A0(0x4)
	float PathTracingMaxPathExposure; // 0x5A4(0x4)
	uint8_t PathTracingEnableDenoiser : 1; // 0x5A8(0x1), Mask(0x1)
	uint8_t PathTracingEnableEmissive : 1; // 0x5A8(0x1), Mask(0x2)
	uint8_t BitPad_0x5A8_2 : 6; // 0x5A8(0x1)
	uint8_t Pad_0x5A9[0x3]; // 0x5A9(0x3)
	float PathTracingFilterWidth; // 0x5AC(0x4)
	float LPVFadeRange; // 0x5B0(0x4)
	float LPVDirectionalOcclusionFadeRange; // 0x5B4(0x4)
	float ScreenPercentage; // 0x5B8(0x4)
	uint8_t bUseMobileRamp : 1; // 0x5BC(0x1), Mask(0x1)
	uint8_t BitPad_0x5BC_1 : 7; // 0x5BC(0x1)
	uint8_t Pad_0x5BD[0x3]; // 0x5BD(0x3)
	struct FMobileRampSettings MobileRampSettings; // 0x5C0(0x30)
	struct FWeightedBlendables WeightedBlendables; // 0x5F0(0x10)
};

// Object: ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x0)
struct FWeightedBlendables
{
	struct TArray<struct FWeightedBlendable> Array; // 0x0(0x10)
};

// Object: ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x0)
struct FWeightedBlendable
{
	float Weight; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UObject* Object; // 0x8(0x8)
};

// Object: ScriptStruct Engine.MobileRampSettings
// Size: 0x30 (Inherited: 0x0)
struct FMobileRampSettings
{
	struct UTexture2D* MobileRampTexture; // 0x0(0x8)
	float MobileRampDesaturation; // 0x8(0x4)
	float MobileRampRevertColor; // 0xC(0x4)
	float MobileRampSmoothStepMax; // 0x10(0x4)
	float MobileRampSmoothStepMin; // 0x14(0x4)
	float MobileRampContrast; // 0x18(0x4)
	struct FLinearColor MobileRampColorTint; // 0x1C(0x10)
	float MobileRampAdjustBlend; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.CameraCacheEntry
// Size: 0x710 (Inherited: 0x0)
struct FCameraCacheEntry
{
	float Timestamp; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FMinimalViewInfo POV; // 0x10(0x700)
};

// Object: ScriptStruct Engine.MinimalViewInfo
// Size: 0x700 (Inherited: 0x0)
struct FMinimalViewInfo
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	uint8_t Pad_0x18[0x68]; // 0x18(0x68)
	float FOV; // 0x80(0x4)
	float DesiredFOV; // 0x84(0x4)
	float FirstPersonFOV; // 0x88(0x4)
	float OrthoWidth; // 0x8C(0x4)
	float OrthoNearClipPlane; // 0x90(0x4)
	float OrthoFarClipPlane; // 0x94(0x4)
	float AspectRatio; // 0x98(0x4)
	uint8_t bConstrainAspectRatio : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t bUseFirstPersonParameters : 1; // 0x9C(0x1), Mask(0x2)
	uint8_t bUseFieldOfViewForLOD : 1; // 0x9C(0x1), Mask(0x4)
	uint8_t BitPad_0x9C_3 : 5; // 0x9C(0x1)
	uint8_t ProjectionMode; // 0x9D(0x1)
	uint8_t Pad_0x9E[0x2]; // 0x9E(0x2)
	float PostProcessBlendWeight; // 0xA0(0x4)
	uint8_t Pad_0xA4[0xC]; // 0xA4(0xC)
	struct FPostProcessSettings PostProcessSettings; // 0xB0(0x600)
	struct FVector2D OffCenterProjectionOffset; // 0x6B0(0x8)
	uint8_t Pad_0x6B8[0x48]; // 0x6B8(0x48)
};

// Object: ScriptStruct Engine.TViewTarget
// Size: 0xE20 (Inherited: 0x0)
struct FTViewTarget
{
	struct AActor* Target; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FMinimalViewInfo POV; // 0x10(0x700)
	uint8_t Pad_0x710[0x700]; // 0x710(0x700)
	struct APlayerState* PlayerState; // 0xE10(0x8)
	uint8_t Pad_0xE18[0x8]; // 0xE18(0x8)
};

// Object: ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size: 0x3C (Inherited: 0x0)
struct FSkelMeshSkinWeightInfo
{
	int32_t Bones[0xC]; // 0x0(0x30)
	uint8_t Weights[0xC]; // 0x30(0xC)
};

// Object: ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x28 (Inherited: 0x0)
struct FSkelMeshComponentLODInfo
{
	struct TArray<bool> HiddenMaterials; // 0x0(0x10)
	uint8_t Pad_0x10[0x18]; // 0x10(0x18)
};

// Object: ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x0)
struct FPoseSnapshot
{
	struct TArray<struct FTransform> LocalTransforms; // 0x0(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x8)
	struct FName SnapshotName; // 0x28(0x8)
	bool bIsValid; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x18 (Inherited: 0x0)
struct FSingleAnimationPlayData
{
	struct UAnimationAsset* AnimToPlay; // 0x0(0x8)
	uint8_t bSavedLooping : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bSavedPlaying : 1; // 0x8(0x1), Mask(0x2)
	uint8_t BitPad_0x8_2 : 6; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float SavedPosition; // 0xC(0x4)
	float SavedPlayRate; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.TableRowBase
// Size: 0x8 (Inherited: 0x0)
struct FTableRowBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.ActorComponentInstanceData
// Size: 0x58 (Inherited: 0x0)
struct FActorComponentInstanceData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UObject* SourceComponentTemplate; // 0x8(0x8)
	enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t SourceComponentTypeSerializedIndex; // 0x14(0x4)
	struct TArray<uint8_t> SavedProperties; // 0x18(0x10)
	struct TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28(0x10)
	struct TArray<struct UObject*> ReferencedObjects; // 0x38(0x10)
	struct TArray<struct FName> ReferencedNames; // 0x48(0x10)
};

// Object: ScriptStruct Engine.ActorComponentDuplicatedObjectData
// Size: 0x10 (Inherited: 0x0)
struct FActorComponentDuplicatedObjectData
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimNode_Base
// Size: 0x10 (Inherited: 0x0)
struct FAnimNode_Base
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimNode_CustomProperty
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_CustomProperty : FAnimNode_Base
{
	struct TArray<struct FName> SourcePropertyNames; // 0x10(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x20(0x10)
	struct UObject* TargetInstance; // 0x30(0x8)
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
};

// Object: ScriptStruct Engine.PoseLinkBase
// Size: 0x10 (Inherited: 0x0)
struct FPoseLinkBase
{
	int32_t LinkID; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
};

// Object: ScriptStruct Engine.PoseLink
// Size: 0x10 (Inherited: 0x10)
struct FPoseLink : FPoseLinkBase
{
};

// Object: ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x0)
struct FInputScaleBiasClamp
{
	bool bMapRange; // 0x0(0x1)
	bool bClampResult; // 0x1(0x1)
	bool bInterpResult; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FInputRange InRange; // 0x4(0x8)
	struct FInputRange OutRange; // 0xC(0x8)
	float Scale; // 0x14(0x4)
	float Bias; // 0x18(0x4)
	float ClampMin; // 0x1C(0x4)
	float ClampMax; // 0x20(0x4)
	float InterpSpeedIncreasing; // 0x24(0x4)
	float InterpSpeedDecreasing; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.InputRange
// Size: 0x8 (Inherited: 0x0)
struct FInputRange
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// Object: ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x48 (Inherited: 0x0)
struct FInputAlphaBoolBlend
{
	float BlendInTime; // 0x0(0x4)
	float BlendOutTime; // 0x4(0x4)
	enum class EAlphaBlendOption BlendOption; // 0x8(0x1)
	bool bInitialized; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct UCurveFloat* CustomCurve; // 0x10(0x8)
	struct FAlphaBlend AlphaBlend; // 0x18(0x30)
};

// Object: ScriptStruct Engine.AlphaBlend
// Size: 0x30 (Inherited: 0x0)
struct FAlphaBlend
{
	struct UCurveFloat* CustomCurve; // 0x0(0x8)
	float BlendTime; // 0x8(0x4)
	uint8_t Pad_0xC[0x18]; // 0xC(0x18)
	enum class EAlphaBlendOption BlendOption; // 0x24(0x1)
	uint8_t Pad_0x25[0xB]; // 0x25(0xB)
};

// Object: ScriptStruct Engine.InputScaleBias
// Size: 0x8 (Inherited: 0x0)
struct FInputScaleBias
{
	float Scale; // 0x0(0x4)
	float Bias; // 0x4(0x4)
};

// Object: ScriptStruct Engine.AnimInstanceProxy
// Size: 0x7A0 (Inherited: 0x0)
struct FAnimInstanceProxy
{
	uint8_t Pad_0x0[0x7A0]; // 0x0(0x7A0)
};

// Object: ScriptStruct Engine.KeyHandleLookupTable
// Size: 0x60 (Inherited: 0x0)
struct FKeyHandleLookupTable
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x0)
struct FInputBlendPose
{
	struct TArray<struct FBranchFilter> BranchFilters; // 0x0(0x10)
};

// Object: ScriptStruct Engine.BranchFilter
// Size: 0xC (Inherited: 0x0)
struct FBranchFilter
{
	struct FName BoneName; // 0x0(0x8)
	int32_t BlendDepth; // 0x8(0x4)
};

// Object: ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x0)
struct FDirectoryPath
{
	struct FString Path; // 0x0(0x10)
};

// Object: ScriptStruct Engine.BoneReference
// Size: 0x10 (Inherited: 0x0)
struct FBoneReference
{
	struct FName BoneName; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x10 (Inherited: 0x10)
struct FComponentSpacePoseLink : FPoseLinkBase
{
};

// Object: ScriptStruct Engine.RuntimeVectorCurve
// Size: 0x188 (Inherited: 0x0)
struct FRuntimeVectorCurve
{
	struct FRichCurve VectorCurves[0x3]; // 0x0(0x180)
	struct UCurveVector* ExternalCurve; // 0x180(0x8)
};

// Object: ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x0)
struct FFilePath
{
	struct FString FilePath; // 0x0(0x10)
};

// Object: ScriptStruct Engine.PerPlatformFloat
// Size: 0x4 (Inherited: 0x0)
struct FPerPlatformFloat
{
	float Default; // 0x0(0x4)
};

// Object: ScriptStruct Engine.PerPlatformInt
// Size: 0x4 (Inherited: 0x0)
struct FPerPlatformInt
{
	int32_t Default; // 0x0(0x4)
};

// Object: ScriptStruct Engine.PerPlatformBool
// Size: 0x1 (Inherited: 0x0)
struct FPerPlatformBool
{
	bool Default; // 0x0(0x1)
};

// Object: ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x208 (Inherited: 0x0)
struct FRuntimeCurveLinearColor
{
	struct FRichCurve ColorCurves[0x4]; // 0x0(0x200)
	struct UCurveLinearColor* ExternalCurve; // 0x200(0x8)
};

// Object: ScriptStruct Engine.SplineCurves
// Size: 0x68 (Inherited: 0x0)
struct FSplineCurves
{
	struct FInterpCurveVector Position; // 0x0(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
	struct USplineMetadata* MetaData; // 0x60(0x8)
};

// Object: ScriptStruct Engine.FOscillator
// Size: 0xC (Inherited: 0x0)
struct FFOscillator
{
	float Amplitude; // 0x0(0x4)
	float Frequency; // 0x4(0x4)
	uint8_t InitialOffset; // 0x8(0x1)
	enum class EOscillatorWaveform Waveform; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Engine.NavAgentSelector
// Size: 0x4 (Inherited: 0x0)
struct FNavAgentSelector
{
	uint8_t bSupportsAgent0 : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bSupportsAgent1 : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bSupportsAgent2 : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bSupportsAgent3 : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bSupportsAgent4 : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bSupportsAgent5 : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bSupportsAgent6 : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bSupportsAgent7 : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bSupportsAgent8 : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bSupportsAgent9 : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bSupportsAgent10 : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bSupportsAgent11 : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bSupportsAgent12 : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bSupportsAgent13 : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bSupportsAgent14 : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bSupportsAgent15 : 1; // 0x1(0x1), Mask(0x80)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
};

// Object: ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base
{
	int32_t GroupIndex; // 0x10(0x4)
	uint8_t GroupRole; // 0x14(0x1)
	uint8_t bUseMainInstanceSyncGroup : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	bool bIgnoreForRelevancyTest; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
	struct FName AnimNodeTag; // 0x18(0x8)
	uint8_t Pad_0x20[0x4]; // 0x20(0x4)
	float BlendWeight; // 0x24(0x4)
	float InternalTimeAccumulator; // 0x28(0x4)
	uint8_t Pad_0x2C[0x14]; // 0x2C(0x14)
};

// Object: ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x8 (Inherited: 0x0)
struct FPerBoneBlendWeight
{
	int32_t SourceIndex; // 0x0(0x4)
	float BlendWeight; // 0x4(0x4)
};

// Object: ScriptStruct Engine.PerBoneBlendWeightArray
// Size: 0x20 (Inherited: 0x0)
struct FPerBoneBlendWeightArray
{
	struct TArray<int32_t> SourceIndices; // 0x0(0x10)
	struct TArray<float> BlendWeights; // 0x10(0x10)
};

// Object: ScriptStruct Engine.SolverIterations
// Size: 0x18 (Inherited: 0x0)
struct FSolverIterations
{
	int32_t SolverIterations; // 0x0(0x4)
	int32_t JointIterations; // 0x4(0x4)
	int32_t CollisionIterations; // 0x8(0x4)
	int32_t SolverPushOutIterations; // 0xC(0x4)
	int32_t JointPushOutIterations; // 0x10(0x4)
	int32_t CollisionPushOutIterations; // 0x14(0x4)
};

// Object: ScriptStruct Engine.AnimNode_Root
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_Root : FAnimNode_Base
{
	struct FPoseLink Result; // 0x10(0x10)
	struct FName Name; // 0x20(0x8)
	struct FName Group; // 0x28(0x8)
};

// Object: ScriptStruct Engine.AnimCurveParam
// Size: 0xC (Inherited: 0x0)
struct FAnimCurveParam
{
	struct FName Name; // 0x0(0x8)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct Engine.SceneComponentInstanceData
// Size: 0xA8 (Inherited: 0x58)
struct FSceneComponentInstanceData : FActorComponentInstanceData
{
	struct TMap<struct USceneComponent*, struct FTransform> AttachedInstanceComponents; // 0x58(0x50)
};

// Object: ScriptStruct Engine.PoolActorReferencer
// Size: 0x10 (Inherited: 0x0)
struct FPoolActorReferencer
{
	struct UObject* Referencer; // 0x0(0x8)
	struct FName PropertyName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.KAggregateGeom
// Size: 0x58 (Inherited: 0x0)
struct FKAggregateGeom
{
	struct TArray<struct FKSphereElem> SphereElems; // 0x0(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20(0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30(0x10)
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: ScriptStruct Engine.KShapeElem
// Size: 0x30 (Inherited: 0x0)
struct FKShapeElem
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float RestOffset; // 0x8(0x4)
	struct FName Name; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	uint8_t bContributeToMass : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x17]; // 0x19(0x17)
};

// Object: ScriptStruct Engine.KTaperedCapsuleElem
// Size: 0x58 (Inherited: 0x30)
struct FKTaperedCapsuleElem : FKShapeElem
{
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float Radius0; // 0x48(0x4)
	float Radius1; // 0x4C(0x4)
	float Length; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct Engine.KConvexElem
// Size: 0xB0 (Inherited: 0x30)
struct FKConvexElem : FKShapeElem
{
	struct TArray<struct FVector> VertexData; // 0x30(0x10)
	struct TArray<int32_t> IndexData; // 0x40(0x10)
	struct FBox ElemBox; // 0x50(0x1C)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FTransform Transform; // 0x70(0x30)
	uint8_t Pad_0xA0[0x10]; // 0xA0(0x10)
};

// Object: ScriptStruct Engine.KSphylElem
// Size: 0x50 (Inherited: 0x30)
struct FKSphylElem : FKShapeElem
{
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float Radius; // 0x48(0x4)
	float Length; // 0x4C(0x4)
};

// Object: ScriptStruct Engine.KBoxElem
// Size: 0x58 (Inherited: 0x30)
struct FKBoxElem : FKShapeElem
{
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float X; // 0x48(0x4)
	float Y; // 0x4C(0x4)
	float Z; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct Engine.KSphereElem
// Size: 0x40 (Inherited: 0x30)
struct FKSphereElem : FKShapeElem
{
	struct FVector Center; // 0x30(0xC)
	float Radius; // 0x3C(0x4)
};

// Object: ScriptStruct Engine.AlphaBlendArgs
// Size: 0x10 (Inherited: 0x0)
struct FAlphaBlendArgs
{
	struct UCurveFloat* CustomCurve; // 0x0(0x8)
	float BlendTime; // 0x8(0x4)
	enum class EAlphaBlendOption BlendOption; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.AnimationGroupReference
// Size: 0x18 (Inherited: 0x0)
struct FAnimationGroupReference
{
	struct FName GroupName; // 0x0(0x8)
	uint8_t GroupRole; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UAnimBlueprint* MainAnimBlueprint; // 0x10(0x8)
};

// Object: ScriptStruct Engine.AnimGroupInstance
// Size: 0x70 (Inherited: 0x0)
struct FAnimGroupInstance
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: ScriptStruct Engine.AnimTickRecord
// Size: 0x48 (Inherited: 0x0)
struct FAnimTickRecord
{
	struct UAnimationAsset* SourceAsset; // 0x0(0x8)
	uint8_t Pad_0x8[0x40]; // 0x8(0x40)
};

// Object: ScriptStruct Engine.MarkerSyncAnimPosition
// Size: 0x14 (Inherited: 0x0)
struct FMarkerSyncAnimPosition
{
	struct FName PreviousMarkerName; // 0x0(0x8)
	struct FName NextMarkerName; // 0x8(0x8)
	float PositionBetweenMarkers; // 0x10(0x4)
};

// Object: ScriptStruct Engine.BlendFilter
// Size: 0x78 (Inherited: 0x0)
struct FBlendFilter
{
	uint8_t Pad_0x0[0x78]; // 0x0(0x78)
};

// Object: ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x0)
struct FBlendSampleData
{
	int32_t SampleDataIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UAnimSequence* Animation; // 0x8(0x8)
	float TotalWeight; // 0x10(0x4)
	float Time; // 0x14(0x4)
	float PreviousTime; // 0x18(0x4)
	float SamplePlayRate; // 0x1C(0x4)
	uint8_t Pad_0x20[0x20]; // 0x20(0x20)
};

// Object: ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x10 (Inherited: 0x0)
struct FAnimationRecordingSettings
{
	bool bRecordInWorldSpace; // 0x0(0x1)
	bool bRemoveRootAnimation; // 0x1(0x1)
	bool bAutoSaveAsset; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float SampleRate; // 0x4(0x4)
	float Length; // 0x8(0x4)
	uint8_t InterpMode; // 0xC(0x1)
	uint8_t TangentMode; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
};

// Object: ScriptStruct Engine.ComponentSpacePose
// Size: 0x20 (Inherited: 0x0)
struct FComponentSpacePose
{
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// Object: ScriptStruct Engine.LocalSpacePose
// Size: 0x20 (Inherited: 0x0)
struct FLocalSpacePose
{
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// Object: ScriptStruct Engine.NamedTransform
// Size: 0x40 (Inherited: 0x0)
struct FNamedTransform
{
	struct FTransform Value; // 0x0(0x30)
	struct FName Name; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct Engine.NamedColor
// Size: 0xC (Inherited: 0x0)
struct FNamedColor
{
	struct FColor Value; // 0x0(0x4)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Engine.NamedVector
// Size: 0x14 (Inherited: 0x0)
struct FNamedVector
{
	struct FVector Value; // 0x0(0xC)
	struct FName Name; // 0xC(0x8)
};

// Object: ScriptStruct Engine.NamedFloat
// Size: 0xC (Inherited: 0x0)
struct FNamedFloat
{
	float Value; // 0x0(0x4)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 (Inherited: 0x0)
struct FAnimParentNodeAssetOverride
{
	struct UAnimationAsset* NewAsset; // 0x0(0x8)
	struct FGuid ParentNodeGuid; // 0x8(0x10)
};

// Object: ScriptStruct Engine.AnimGroupInfo
// Size: 0x18 (Inherited: 0x0)
struct FAnimGroupInfo
{
	struct FName Name; // 0x0(0x8)
	struct FLinearColor Color; // 0x8(0x10)
};

// Object: ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x1 (Inherited: 0x0)
struct FAnimBlueprintDebugData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x1 (Inherited: 0x0)
struct FAnimationFrameSnapshot
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.StateMachineDebugData
// Size: 0xB0 (Inherited: 0x0)
struct FStateMachineDebugData
{
	uint8_t Pad_0x0[0xB0]; // 0x0(0xB0)
};

// Object: ScriptStruct Engine.StateMachineStateDebugData
// Size: 0x10 (Inherited: 0x0)
struct FStateMachineStateDebugData
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimBlueprintFunctionData
// Size: 0x40 (Inherited: 0x0)
struct FAnimBlueprintFunctionData
{
	struct TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0(0x20)
	struct TArray<struct TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20(0x10)
	struct TArray<struct TFieldPath<FProperty>> InputProperties; // 0x30(0x10)
};

// Object: ScriptStruct Engine.AnimGraphBlendOptions
// Size: 0x8 (Inherited: 0x0)
struct FAnimGraphBlendOptions
{
	float BlendInTime; // 0x0(0x4)
	float BlendOutTime; // 0x4(0x4)
};

// Object: ScriptStruct Engine.GraphAssetPlayerInformation
// Size: 0x10 (Inherited: 0x0)
struct FGraphAssetPlayerInformation
{
	struct TArray<int32_t> PlayerNodeIndices; // 0x0(0x10)
};

// Object: ScriptStruct Engine.CachedPoseIndices
// Size: 0x10 (Inherited: 0x0)
struct FCachedPoseIndices
{
	struct TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimBlueprintFunction
// Size: 0x68 (Inherited: 0x0)
struct FAnimBlueprintFunction
{
	struct FName Name; // 0x0(0x8)
	struct FName Group; // 0x8(0x8)
	int32_t OutputPoseNodeIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FName> InputPoseNames; // 0x18(0x10)
	struct TArray<int32_t> InputPoseNodeIndices; // 0x28(0x10)
	uint8_t Pad_0x38[0x28]; // 0x38(0x28)
	bool bImplemented; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x0)
struct FAnimTrack
{
	struct TArray<struct FAnimSegment> AnimSegments; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x0)
struct FAnimSegment
{
	struct UAnimSequenceBase* AnimReference; // 0x0(0x8)
	float StartPos; // 0x8(0x4)
	float AnimStartTime; // 0xC(0x4)
	float AnimEndTime; // 0x10(0x4)
	float AnimPlayRate; // 0x14(0x4)
	int32_t LoopingCount; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 (Inherited: 0x0)
struct FRootMotionExtractionStep
{
	struct UAnimSequence* AnimSequence; // 0x0(0x8)
	float StartPosition; // 0x8(0x4)
	float EndPosition; // 0xC(0x4)
};

// Object: ScriptStruct Engine.AnimationErrorStats
// Size: 0x10 (Inherited: 0x0)
struct FAnimationErrorStats
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x0)
struct FRawCurveTracks
{
	struct TArray<struct FFloatCurve> FloatCurves; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimCurveBase
// Size: 0x18 (Inherited: 0x0)
struct FAnimCurveBase
{
	struct FName LastObservedName; // 0x0(0x8)
	struct FSmartName Name; // 0x8(0xC)
	int32_t CurveTypeFlags; // 0x14(0x4)
};

// Object: ScriptStruct Engine.SmartName
// Size: 0xC (Inherited: 0x0)
struct FSmartName
{
	struct FName DisplayName; // 0x0(0x8)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct Engine.FloatCurve
// Size: 0x98 (Inherited: 0x18)
struct FFloatCurve : FAnimCurveBase
{
	struct FRichCurve FloatCurve; // 0x18(0x80)
};

// Object: ScriptStruct Engine.TransformCurve
// Size: 0x4E0 (Inherited: 0x18)
struct FTransformCurve : FAnimCurveBase
{
	struct FVectorCurve TranslationCurve; // 0x18(0x198)
	struct FVectorCurve RotationCurve; // 0x1B0(0x198)
	struct FVectorCurve ScaleCurve; // 0x348(0x198)
};

// Object: ScriptStruct Engine.VectorCurve
// Size: 0x198 (Inherited: 0x18)
struct FVectorCurve : FAnimCurveBase
{
	struct FRichCurve FloatCurves[0x3]; // 0x18(0x180)
};

// Object: ScriptStruct Engine.AnimBlendInfo
// Size: 0x10 (Inherited: 0x0)
struct FAnimBlendInfo
{
	struct UAnimSequenceBase* AnimReference; // 0x0(0x8)
	float Time; // 0x8(0x4)
	float Weight; // 0xC(0x4)
};

// Object: ScriptStruct Engine.SlotEvaluationPose
// Size: 0x40 (Inherited: 0x0)
struct FSlotEvaluationPose
{
	uint8_t AdditiveType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Weight; // 0x4(0x4)
	uint8_t Pad_0x8[0x38]; // 0x8(0x38)
};

// Object: ScriptStruct Engine.A2Pose
// Size: 0x10 (Inherited: 0x0)
struct FA2Pose
{
	struct TArray<struct FTransform> Bones; // 0x0(0x10)
};

// Object: ScriptStruct Engine.A2CSPose
// Size: 0x28 (Inherited: 0x10)
struct FA2CSPose : FA2Pose
{
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
	struct TArray<uint8_t> ComponentSpaceFlags; // 0x18(0x10)
};

// Object: ScriptStruct Engine.OverrideAssetsTagForFilter
// Size: 0x50 (Inherited: 0x0)
struct FOverrideAssetsTagForFilter
{
	struct TSet<struct FName> Tags; // 0x0(0x50)
};

// Object: ScriptStruct Engine.OverrideAnimGUIDs
// Size: 0x50 (Inherited: 0x0)
struct FOverrideAnimGUIDs
{
	struct TSet<struct FGuid> Guids; // 0x0(0x50)
};

// Object: ScriptStruct Engine.QueuedDrawDebugItem
// Size: 0x68 (Inherited: 0x0)
struct FQueuedDrawDebugItem
{
	uint8_t ItemType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector StartLoc; // 0x4(0xC)
	struct FVector EndLoc; // 0x10(0xC)
	struct FVector Center; // 0x1C(0xC)
	struct FRotator Rotation; // 0x28(0xC)
	float Radius; // 0x34(0x4)
	float Size; // 0x38(0x4)
	int32_t Segments; // 0x3C(0x4)
	struct FColor Color; // 0x40(0x4)
	bool bPersistentLines; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	float LifeTime; // 0x48(0x4)
	float Thickness; // 0x4C(0x4)
	struct FString Message; // 0x50(0x10)
	struct FVector2D TextScale; // 0x60(0x8)
};

// Object: ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x0)
struct FAnimLinkableElement
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UAnimMontage* LinkedMontage; // 0x8(0x8)
	int32_t SlotIndex; // 0x10(0x4)
	int32_t SegmentIndex; // 0x14(0x4)
	uint8_t LinkMethod; // 0x18(0x1)
	uint8_t CachedLinkMethod; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	float SegmentBeginTime; // 0x1C(0x4)
	float SegmentLength; // 0x20(0x4)
	float LinkValue; // 0x24(0x4)
	struct UAnimSequenceBase* LinkedSequence; // 0x28(0x8)
};

// Object: ScriptStruct Engine.AnimMontageInstance
// Size: 0x1C0 (Inherited: 0x0)
struct FAnimMontageInstance
{
	struct UAnimMontage* Montage; // 0x0(0x8)
	uint8_t Pad_0x8[0x20]; // 0x8(0x20)
	bool bPlaying; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float DefaultBlendTimeMultiplier; // 0x2C(0x4)
	uint8_t Pad_0x30[0xC0]; // 0x30(0xC0)
	struct TArray<int32_t> NextSections; // 0xF0(0x10)
	struct TArray<int32_t> PrevSections; // 0x100(0x10)
	uint8_t Pad_0x110[0x10]; // 0x110(0x10)
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x120(0x10)
	float Position; // 0x130(0x4)
	float PlayRate; // 0x134(0x4)
	struct FAlphaBlend Blend; // 0x138(0x30)
	uint8_t Pad_0x168[0x34]; // 0x168(0x34)
	int32_t DisableRootMotionCount; // 0x19C(0x4)
	uint8_t Pad_0x1A0[0x20]; // 0x1A0(0x20)
};

// Object: ScriptStruct Engine.AnimNotifyEvent
// Size: 0xC0 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement
{
	float DisplayTime; // 0x30(0x4)
	float TriggerTimeOffset; // 0x34(0x4)
	float EndTriggerTimeOffset; // 0x38(0x4)
	float TriggerWeightThreshold; // 0x3C(0x4)
	struct FName NotifyName; // 0x40(0x8)
	struct UAnimNotify* Notify; // 0x48(0x8)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x8)
	float Duration; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool bConvertedFromBranchingPoint; // 0x90(0x1)
	uint8_t MontageTickType; // 0x91(0x1)
	uint8_t Pad_0x92[0x2]; // 0x92(0x2)
	float NotifyTriggerChance; // 0x94(0x4)
	uint8_t NotifyFilterType; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	int32_t NotifyFilterLOD; // 0x9C(0x4)
	int32_t NotifyFilterSignificanceLevel; // 0xA0(0x4)
	bool bTriggerOnDedicatedServer; // 0xA4(0x1)
	bool bTriggerOnFollower; // 0xA5(0x1)
	uint8_t Pad_0xA6[0x2]; // 0xA6(0x2)
	int32_t TrackIndex; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x14]; // 0xAC(0x14)
};

// Object: ScriptStruct Engine.BranchingPointMarker
// Size: 0xC (Inherited: 0x0)
struct FBranchingPointMarker
{
	int32_t NotifyIndex; // 0x0(0x4)
	float TriggerTime; // 0x4(0x4)
	uint8_t NotifyEventType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.MontageBlendSettings
// Size: 0x20 (Inherited: 0x0)
struct FMontageBlendSettings
{
	struct UBlendProfile* BlendProfile; // 0x0(0x8)
	struct FAlphaBlendArgs Blend; // 0x8(0x10)
	enum class EMontageBlendMode BlendMode; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement
{
	struct FName EventName; // 0x30(0x8)
	float DisplayTime; // 0x38(0x4)
	float TriggerTimeOffset; // 0x3C(0x4)
};

// Object: ScriptStruct Engine.SlotAnimationTrack
// Size: 0x18 (Inherited: 0x0)
struct FSlotAnimationTrack
{
	struct FName SlotName; // 0x0(0x8)
	struct FAnimTrack AnimTrack; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CompositeSection
// Size: 0x58 (Inherited: 0x30)
struct FCompositeSection : FAnimLinkableElement
{
	struct FName SectionName; // 0x30(0x8)
	float StartTime; // 0x38(0x4)
	struct FName NextSectionName; // 0x3C(0x8)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x48(0x10)
};

// Object: ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0x130 (Inherited: 0x10)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float Alpha; // 0x34(0x4)
	uint8_t bAlphaBoolEnabled : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x8)
	struct FInputScaleBias AlphaScaleBias; // 0x90(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98(0x30)
	int32_t LODThreshold; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	bool bUseOneMinusCurveValue; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct TArray<struct FBranchFilter> BranchFilters; // 0xD8(0x10)
	uint8_t Pad_0xE8[0x18]; // 0xE8(0x18)
	struct TArray<int32_t> BranchFilterBoneIndices; // 0x100(0x10)
	struct FGuid SkeletonGuid; // 0x110(0x10)
	struct FGuid VirtualBoneGuid; // 0x120(0x10)
};

// Object: ScriptStruct Engine.AnimNode_Inertialization
// Size: 0x100 (Inherited: 0x10)
struct FAnimNode_Inertialization : FAnimNode_Base
{
	struct FPoseLink Source; // 0x10(0x10)
	struct UBlendProfile* DefaultBlendProfile; // 0x20(0x8)
	struct TArray<struct FName> FilteredCurves; // 0x28(0x10)
	uint8_t Pad_0x38[0x68]; // 0x38(0x68)
	struct TArray<struct FInertializationRequest> RequestQueue; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x50]; // 0xB0(0x50)
};

// Object: ScriptStruct Engine.InertializationRequest
// Size: 0x10 (Inherited: 0x0)
struct FInertializationRequest
{
	float Duration; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UBlendProfile* BlendProfile; // 0x8(0x8)
};

// Object: ScriptStruct Engine.InertializationPoseDiff
// Size: 0x28 (Inherited: 0x0)
struct FInertializationPoseDiff
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct Engine.InertializationCurveDiff
// Size: 0x8 (Inherited: 0x0)
struct FInertializationCurveDiff
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.InertializationBoneDiff
// Size: 0x3C (Inherited: 0x0)
struct FInertializationBoneDiff
{
	uint8_t Pad_0x0[0x3C]; // 0x0(0x3C)
};

// Object: ScriptStruct Engine.InertializationPose
// Size: 0x90 (Inherited: 0x0)
struct FInertializationPose
{
	uint8_t Pad_0x0[0x90]; // 0x0(0x90)
};

// Object: ScriptStruct Engine.AnimNode_LinkedAnimGraph
// Size: 0xA8 (Inherited: 0x58)
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty
{
	struct TArray<struct FPoseLink> InputPoses; // 0x58(0x10)
	struct TArray<struct FName> InputPoseNames; // 0x68(0x10)
	struct UAnimInstance* InstanceClass; // 0x78(0x8)
	struct FName Tag; // 0x80(0x8)
	uint8_t bUseMainInstanceSyncGroup : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x17]; // 0x89(0x17)
	uint8_t bReceiveNotifiesFromLinkedInstances : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t bPropagateNotifiesToLinkedInstances : 1; // 0xA0(0x1), Mask(0x2)
	uint8_t BitPad_0xA0_2 : 6; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
};

// Object: ScriptStruct Engine.AnimNode_LinkedAnimLayer
// Size: 0xC0 (Inherited: 0xA8)
struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph
{
	struct IAnimLayerInterface* Interface; // 0xA8(0x8)
	struct FName Layer; // 0xB0(0x8)
	bool bEnableDeferredConstructAnimInstance; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
};

// Object: ScriptStruct Engine.AnimNode_LinkedInputPose
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_LinkedInputPose : FAnimNode_Base
{
	struct FName Name; // 0x10(0x8)
	struct FName Graph; // 0x18(0x8)
	struct FPoseLink InputPose; // 0x20(0x10)
	uint8_t Pad_0x30[0x48]; // 0x30(0x48)
};

// Object: ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xC0 (Inherited: 0x10)
struct FAnimNode_SaveCachedPose : FAnimNode_Base
{
	struct FPoseLink Pose; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x8)
	uint8_t Pad_0x28[0x4]; // 0x28(0x4)
	bool bEnableInitializeFromResetChild; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x93]; // 0x2D(0x93)
};

// Object: ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x88 (Inherited: 0x40)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase
{
	struct UAnimSequenceBase* Sequence; // 0x40(0x8)
	float PlayRateBasis; // 0x48(0x4)
	float PlayRate; // 0x4C(0x4)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x50(0x30)
	float StartPosition; // 0x80(0x4)
	bool bLoopAnimation; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
};

// Object: ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xB0 (Inherited: 0x10)
struct FAnimNode_StateMachine : FAnimNode_Base
{
	int32_t StateMachineIndexInClass; // 0x10(0x4)
	int32_t MaxTransitionsPerFrame; // 0x14(0x4)
	bool bSkipFirstUpdateTransition; // 0x18(0x1)
	bool bReinitializeOnBecomingRelevant; // 0x19(0x1)
	uint8_t Pad_0x1A[0x96]; // 0x1A(0x96)
};

// Object: ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x30 (Inherited: 0x0)
struct FAnimationPotentialTransition
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0xC8 (Inherited: 0x0)
struct FAnimationActiveTransitionEntry
{
	uint8_t Pad_0x0[0xB8]; // 0x0(0xB8)
	struct UBlendProfile* BlendProfile; // 0xB8(0x8)
	uint8_t Pad_0xC0[0x8]; // 0xC0(0x8)
};

// Object: ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base
{
	uint8_t Pad_0x10[0x38]; // 0x10(0x38)
	int32_t FramesToCachePose; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	uint8_t DataSource; // 0x50(0x1)
	uint8_t EvaluatorMode; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
};

// Object: ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_TransitionResult : FAnimNode_Base
{
	bool bCanEnterTransition; // 0x10(0x1)
	uint8_t Pad_0x11[0x17]; // 0x11(0x17)
};

// Object: ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_UseCachedPose : FAnimNode_Base
{
	struct FPoseLink LinkToCachingNode; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x8)
};

// Object: ScriptStruct Engine.ExposedValueHandler
// Size: 0x48 (Inherited: 0x0)
struct FExposedValueHandler
{
	struct FName BoundFunction; // 0x0(0x8)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x8(0x10)
	struct UFunction* Function; // 0x18(0x8)
	struct TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20(0x20)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x0)
struct FExposedValueCopyRecord
{
	struct FName SourcePropertyName; // 0x0(0x8)
	struct FName SourceSubPropertyName; // 0x8(0x8)
	int32_t SourceArrayIndex; // 0x10(0x4)
	bool bInstanceIsTarget; // 0x14(0x1)
	enum class EPostCopyOperation PostCopyOperation; // 0x15(0x1)
	enum class ECopyType CopyType; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
	struct TFieldPath<FProperty> DestProperty; // 0x18(0x20)
	int32_t DestArrayIndex; // 0x38(0x4)
	int32_t Size; // 0x3C(0x4)
	struct TFieldPath<FProperty> CachedSourceProperty; // 0x40(0x20)
	struct TFieldPath<FProperty> CachedSourceStructSubProperty; // 0x60(0x20)
};

// Object: ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base
{
	struct FPoseLink LocalPose; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimNotifyQueue
// Size: 0x80 (Inherited: 0x0)
struct FAnimNotifyQueue
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x20(0x10)
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x30(0x50)
};

// Object: ScriptStruct Engine.AnimNotifyArray
// Size: 0x10 (Inherited: 0x0)
struct FAnimNotifyArray
{
	struct TArray<struct FAnimNotifyEventReference> Notifies; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimNotifyEventReference
// Size: 0x10 (Inherited: 0x0)
struct FAnimNotifyEventReference
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UObject* NotifySource; // 0x8(0x8)
};

// Object: ScriptStruct Engine.CompressedTrack
// Size: 0x38 (Inherited: 0x0)
struct FCompressedTrack
{
	struct TArray<uint8_t> ByteStream; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float Mins[0x3]; // 0x20(0xC)
	float Ranges[0x3]; // 0x2C(0xC)
};

// Object: ScriptStruct Engine.CurveTrack
// Size: 0x18 (Inherited: 0x0)
struct FCurveTrack
{
	struct FName CurveName; // 0x0(0x8)
	struct TArray<float> CurveWeights; // 0x8(0x10)
};

// Object: ScriptStruct Engine.ScaleTrack
// Size: 0x20 (Inherited: 0x0)
struct FScaleTrack
{
	struct TArray<struct FVector> ScaleKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// Object: ScriptStruct Engine.RotationTrack
// Size: 0x20 (Inherited: 0x0)
struct FRotationTrack
{
	struct TArray<struct FQuat> RotKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// Object: ScriptStruct Engine.TranslationTrack
// Size: 0x20 (Inherited: 0x0)
struct FTranslationTrack
{
	struct TArray<struct FVector> PosKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 (Inherited: 0x0)
struct FAnimSequenceTrackContainer
{
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x0(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// Object: ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 (Inherited: 0x0)
struct FRawAnimSequenceTrack
{
	struct TArray<struct FVector> PosKeys; // 0x0(0x10)
	struct TArray<struct FQuat> RotKeys; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// Object: ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 (Inherited: 0x0)
struct FAnimSetMeshLinkup
{
	struct TArray<int32_t> BoneToTrackTable; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size: 0x8F0 (Inherited: 0x7A0)
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x7A0[0x150]; // 0x7A0(0x150)
};

// Object: ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_SingleNode : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10(0x10)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
};

// Object: ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 (Inherited: 0x0)
struct FBakedAnimationStateMachine
{
	struct FName MachineName; // 0x0(0x8)
	int32_t InitialState; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FBakedAnimationState> States; // 0x10(0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20(0x10)
};

// Object: ScriptStruct Engine.AnimationStateBase
// Size: 0x8 (Inherited: 0x0)
struct FAnimationStateBase
{
	struct FName StateName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x40 (Inherited: 0x8)
struct FAnimationTransitionBetweenStates : FAnimationStateBase
{
	int32_t PreviousState; // 0x8(0x4)
	int32_t NextState; // 0xC(0x4)
	float CrossfadeDuration; // 0x10(0x4)
	int32_t StartNotify; // 0x14(0x4)
	int32_t EndNotify; // 0x18(0x4)
	int32_t InterruptNotify; // 0x1C(0x4)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct UCurveFloat* CustomCurve; // 0x28(0x8)
	struct UBlendProfile* BlendProfile; // 0x30(0x8)
	uint8_t LogicType; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct Engine.BakedAnimationState
// Size: 0x58 (Inherited: 0x0)
struct FBakedAnimationState
{
	struct FName StateName; // 0x0(0x8)
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x8(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x4)
	int32_t StartNotify; // 0x1C(0x4)
	int32_t EndNotify; // 0x20(0x4)
	int32_t FullyBlendedNotify; // 0x24(0x4)
	bool bIsAConduit; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t EntryRuleNodeIndex; // 0x2C(0x4)
	struct TArray<int32_t> PlayerNodeIndices; // 0x30(0x10)
	struct TArray<int32_t> LayerNodeIndices; // 0x40(0x10)
	bool bAlwaysResetOnEntry; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct Engine.BakedStateExitTransition
// Size: 0x20 (Inherited: 0x0)
struct FBakedStateExitTransition
{
	int32_t CanTakeDelegateIndex; // 0x0(0x4)
	int32_t CustomResultNodeIndex; // 0x4(0x4)
	int32_t TransitionIndex; // 0x8(0x4)
	bool bDesiredTransitionReturnValue; // 0xC(0x1)
	bool bAutomaticRemainingTimeRule; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	struct TArray<int32_t> PoseEvaluatorLinks; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimationState
// Size: 0x28 (Inherited: 0x8)
struct FAnimationState : FAnimationStateBase
{
	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x8(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x4)
	int32_t StartNotify; // 0x1C(0x4)
	int32_t EndNotify; // 0x20(0x4)
	int32_t FullyBlendedNotify; // 0x24(0x4)
};

// Object: ScriptStruct Engine.AnimationTransitionRule
// Size: 0x10 (Inherited: 0x0)
struct FAnimationTransitionRule
{
	struct FName RuleToExecute; // 0x0(0x8)
	bool TransitionReturnVal; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t TransitionIndex; // 0xC(0x4)
};

// Object: ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x4 (Inherited: 0x0)
struct FTrackToSkeletonMap
{
	int32_t BoneTreeIndex; // 0x0(0x4)
};

// Object: ScriptStruct Engine.MarkerSyncData
// Size: 0x20 (Inherited: 0x0)
struct FMarkerSyncData
{
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x0(0x10)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimSyncMarker
// Size: 0xC (Inherited: 0x0)
struct FAnimSyncMarker
{
	struct FName MarkerName; // 0x0(0x8)
	float Time; // 0x8(0x4)
};

// Object: ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x0)
struct FAnimNotifyTrack
{
	struct FName TrackName; // 0x0(0x8)
	struct FLinearColor TrackColor; // 0x8(0x10)
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
};

// Object: ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 (Inherited: 0x0)
struct FPerBoneBlendWeights
{
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AssetImportInfo
// Size: 0x1 (Inherited: 0x0)
struct FAssetImportInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// Size: 0x38 (Inherited: 0x0)
struct FPrimaryAssetRulesCustomOverride
{
	struct FPrimaryAssetType PrimaryAssetType; // 0x0(0x8)
	struct FDirectoryPath FilterDirectory; // 0x8(0x10)
	struct FString FilterString; // 0x18(0x10)
	struct FPrimaryAssetRules Rules; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct Engine.PrimaryAssetRules
// Size: 0xC (Inherited: 0x0)
struct FPrimaryAssetRules
{
	int32_t Priority; // 0x0(0x4)
	int32_t ChunkID; // 0x4(0x4)
	bool bApplyRecursively; // 0x8(0x1)
	enum class EPrimaryAssetCookRule CookRule; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x1C (Inherited: 0x0)
struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId PrimaryAssetId; // 0x0(0x10)
	struct FPrimaryAssetRules Rules; // 0x10(0xC)
};

// Object: ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 (Inherited: 0x0)
struct FAssetManagerRedirect
{
	struct FString Old; // 0x0(0x10)
	struct FString New; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AssetManagerSearchRules
// Size: 0x50 (Inherited: 0x0)
struct FAssetManagerSearchRules
{
	struct TArray<struct FString> AssetScanPaths; // 0x0(0x10)
	struct TArray<struct FString> IncludePatterns; // 0x10(0x10)
	struct TArray<struct FString> ExcludePatterns; // 0x20(0x10)
	struct UObject* AssetBaseClass; // 0x30(0x8)
	bool bHasBlueprintClasses; // 0x38(0x1)
	bool bForceSynchronousScan; // 0x39(0x1)
	bool bSkipVirtualPathExpansion; // 0x3A(0x1)
	bool bSkipManagerIncludeCheck; // 0x3B(0x1)
	uint8_t Pad_0x3C[0x14]; // 0x3C(0x14)
};

// Object: ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x88 (Inherited: 0x0)
struct FPrimaryAssetTypeInfo
{
	struct FName PrimaryAssetType; // 0x0(0x8)
	struct TSoftClassPtr<struct UObject*> AssetBaseClass; // 0x8(0x28)
	struct UObject* AssetBaseClassLoaded; // 0x30(0x8)
	bool bHasBlueprintClasses; // 0x38(0x1)
	bool bIsEditorOnly; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	struct TArray<struct FDirectoryPath> Directories; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x50(0x10)
	struct FPrimaryAssetRules Rules; // 0x60(0xC)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct FString> AssetScanPaths; // 0x70(0x10)
	bool bIsDynamicAsset; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	int32_t NumberOfAssets; // 0x84(0x4)
};

// Object: ScriptStruct Engine.AssetMapping
// Size: 0x10 (Inherited: 0x0)
struct FAssetMapping
{
	struct UAnimationAsset* SourceAsset; // 0x0(0x8)
	struct UAnimationAsset* TargetAsset; // 0x8(0x8)
};

// Object: ScriptStruct Engine.AtmospherePrecomputeInstanceData
// Size: 0x138 (Inherited: 0xA8)
struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xA8[0x90]; // 0xA8(0x90)
};

// Object: ScriptStruct Engine.AtmospherePrecomputeParameters
// Size: 0x2C (Inherited: 0x0)
struct FAtmospherePrecomputeParameters
{
	float DensityHeight; // 0x0(0x4)
	float DecayHeight; // 0x4(0x4)
	int32_t MaxScatteringOrder; // 0x8(0x4)
	int32_t TransmittanceTexWidth; // 0xC(0x4)
	int32_t TransmittanceTexHeight; // 0x10(0x4)
	int32_t IrradianceTexWidth; // 0x14(0x4)
	int32_t IrradianceTexHeight; // 0x18(0x4)
	int32_t InscatterAltitudeSampleNum; // 0x1C(0x4)
	int32_t InscatterMuNum; // 0x20(0x4)
	int32_t InscatterMuSNum; // 0x24(0x4)
	int32_t InscatterNuNum; // 0x28(0x4)
};

// Object: ScriptStruct Engine.BaseAttenuationSettings
// Size: 0xB0 (Inherited: 0x0)
struct FBaseAttenuationSettings
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x8(0x1)
	uint8_t AttenuationShape; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
	float dBAttenuationAtMax; // 0xC(0x4)
	enum class ENaturalSoundFalloffMode FalloffMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector AttenuationShapeExtents; // 0x14(0xC)
	float ConeOffset; // 0x20(0x4)
	float FalloffDistance; // 0x24(0x4)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x28(0x88)
};

// Object: ScriptStruct Engine.AudioComponentParam
// Size: 0x20 (Inherited: 0x0)
struct FAudioComponentParam
{
	struct FName ParamName; // 0x0(0x8)
	float FloatParam; // 0x8(0x4)
	bool BoolParam; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	int32_t IntParam; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct USoundWave* SoundWaveParam; // 0x18(0x8)
};

// Object: ScriptStruct Engine.AudioEffectParameters
// Size: 0x8 (Inherited: 0x0)
struct FAudioEffectParameters
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.AudioReverbEffect
// Size: 0x48 (Inherited: 0x8)
struct FAudioReverbEffect : FAudioEffectParameters
{
	uint8_t Pad_0x8[0x40]; // 0x8(0x40)
};

// Object: ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 (Inherited: 0x0)
struct FAudioQualitySettings
{
	struct FText DisplayName; // 0x0(0x18)
	int32_t MaxChannels; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x0)
struct FInteriorSettings
{
	bool bIsWorldSettings; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ExteriorVolume; // 0x4(0x4)
	float ExteriorTime; // 0x8(0x4)
	float ExteriorLPF; // 0xC(0x4)
	float ExteriorLPFTime; // 0x10(0x4)
	float InteriorVolume; // 0x14(0x4)
	float InteriorTime; // 0x18(0x4)
	float InteriorLPF; // 0x1C(0x4)
	float InteriorLPFTime; // 0x20(0x4)
};

// Object: ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x0)
struct FLaunchOnTestSettings
{
	struct FFilePath LaunchOnTestmap; // 0x0(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// Object: ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x20 (Inherited: 0x0)
struct FEditorMapPerformanceTestDefinition
{
	struct FSoftObjectPath PerformanceTestmap; // 0x0(0x18)
	int32_t TestTimer; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1F0 (Inherited: 0x0)
struct FBuildPromotionTestSettings
{
	struct FFilePath DefaultStaticMeshAsset; // 0x0(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1C0(0x20)
	struct FFilePath SourceControlMaterial; // 0x1E0(0x10)
};

// Object: ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x0)
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath NewProjectFolderOverride; // 0x0(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)
};

// Object: ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x0)
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath BlueprintAsset; // 0x0(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// Object: ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x0)
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition Diffuse; // 0x0(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xA0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xC0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xE0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)
};

// Object: ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x0)
struct FEditorImportWorkflowDefinition
{
	struct FFilePath ImportFilePath; // 0x0(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)
};

// Object: ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x0)
struct FImportFactorySettingValues
{
	struct FString SettingName; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

// Object: ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 (Inherited: 0x0)
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath FirstMeshPath; // 0x0(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// Object: ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x0)
struct FParticleEditorPromotionSettings
{
	struct FFilePath DefaultParticleAsset; // 0x0(0x10)
};

// Object: ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x0)
struct FMaterialEditorPromotionSettings
{
	struct FFilePath DefaultMaterialAsset; // 0x0(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// Object: ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x0)
struct FEditorImportExportTestDefinition
{
	struct FFilePath ImportFilePath; // 0x0(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)
};

// Object: ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x0)
struct FExternalToolDefinition
{
	struct FString ToolName; // 0x0(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// Object: ScriptStruct Engine.NavAvoidanceData
// Size: 0x3C (Inherited: 0x0)
struct FNavAvoidanceData
{
	uint8_t Pad_0x0[0x3C]; // 0x0(0x3C)
};

// Object: ScriptStruct Engine.BandwidthTestGenerator
// Size: 0x20 (Inherited: 0x0)
struct FBandwidthTestGenerator
{
	struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; // 0x0(0x10)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct Engine.BandwidthTestItem
// Size: 0x10 (Inherited: 0x0)
struct FBandwidthTestItem
{
	struct TArray<uint8_t> Kilobyte; // 0x0(0x10)
};

// Object: ScriptStruct Engine.BlendProfileBoneEntry
// Size: 0x14 (Inherited: 0x0)
struct FBlendProfileBoneEntry
{
	struct FBoneReference BoneReference; // 0x0(0x10)
	float BlendScale; // 0x10(0x4)
};

// Object: ScriptStruct Engine.PerBoneInterpolation
// Size: 0x14 (Inherited: 0x0)
struct FPerBoneInterpolation
{
	struct FBoneReference BoneReference; // 0x0(0x10)
	float InterpolationSpeedPerSec; // 0x10(0x4)
};

// Object: ScriptStruct Engine.GridBlendSample
// Size: 0x1C (Inherited: 0x0)
struct FGridBlendSample
{
	struct FEditorElement GridElement; // 0x0(0x18)
	float BlendWeight; // 0x18(0x4)
};

// Object: ScriptStruct Engine.EditorElement
// Size: 0x18 (Inherited: 0x0)
struct FEditorElement
{
	int32_t Indices[0x3]; // 0x0(0xC)
	float Weights[0x3]; // 0xC(0xC)
};

// Object: ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x0)
struct FBlendSample
{
	struct UAnimSequence* Animation; // 0x0(0x8)
	struct FVector SampleValue; // 0x8(0xC)
	float RateScale; // 0x14(0x4)
};

// Object: ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x0)
struct FBlendParameter
{
	struct FString DisplayName; // 0x0(0x10)
	float Min; // 0x10(0x4)
	float Max; // 0x14(0x4)
	int32_t GridNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.InterpolationParameter
// Size: 0x8 (Inherited: 0x0)
struct FInterpolationParameter
{
	float InterpolationTime; // 0x0(0x4)
	uint8_t InterpolationType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.BPEditorBookmarkNode
// Size: 0x38 (Inherited: 0x0)
struct FBPEditorBookmarkNode
{
	struct FGuid NodeGuid; // 0x0(0x10)
	struct FGuid ParentGuid; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
};

// Object: ScriptStruct Engine.EditedDocumentInfo
// Size: 0x30 (Inherited: 0x0)
struct FEditedDocumentInfo
{
	struct FSoftObjectPath EditedObjectPath; // 0x0(0x18)
	struct FVector2D SavedViewOffset; // 0x18(0x8)
	float SavedZoomAmount; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UObject* EditedObject; // 0x28(0x8)
};

// Object: ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 (Inherited: 0x0)
struct FBPInterfaceDescription
{
	struct IInterface* Interface; // 0x0(0x8)
	struct TArray<struct UEdGraph*> Graphs; // 0x8(0x10)
};

// Object: ScriptStruct Engine.BPVariableDescription
// Size: 0xD0 (Inherited: 0x0)
struct FBPVariableDescription
{
	struct FName VarName; // 0x0(0x8)
	struct FGuid VarGuid; // 0x8(0x10)
	struct FEdGraphPinType VarType; // 0x18(0x58)
	struct FString FriendlyName; // 0x70(0x10)
	struct FText Category; // 0x80(0x18)
	uint64_t PropertyFlags; // 0x98(0x8)
	struct FName RepNotifyFunc; // 0xA0(0x8)
	uint8_t ReplicationCondition; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xB0(0x10)
	struct FString DefaultValue; // 0xC0(0x10)
};

// Object: ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x18 (Inherited: 0x0)
struct FBPVariableMetaDataEntry
{
	struct FName DataKey; // 0x0(0x8)
	struct FString DataValue; // 0x8(0x10)
};

// Object: ScriptStruct Engine.EdGraphPinType
// Size: 0x58 (Inherited: 0x0)
struct FEdGraphPinType
{
	struct FName PinCategory; // 0x0(0x8)
	struct FName PinSubCategory; // 0x8(0x8)
	struct TWeakObjectPtr<struct UObject> PinSubCategoryObject; // 0x10(0x8)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x18(0x20)
	struct FEdGraphTerminalType PinValueType; // 0x38(0x1C)
	enum class EPinContainerType ContainerType; // 0x54(0x1)
	uint8_t bIsArray : 1; // 0x55(0x1), Mask(0x1)
	uint8_t bIsReference : 1; // 0x55(0x1), Mask(0x2)
	uint8_t bIsConst : 1; // 0x55(0x1), Mask(0x4)
	uint8_t bIsWeakPointer : 1; // 0x55(0x1), Mask(0x8)
	uint8_t BitPad_0x55_4 : 4; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
};

// Object: ScriptStruct Engine.EdGraphTerminalType
// Size: 0x1C (Inherited: 0x0)
struct FEdGraphTerminalType
{
	struct FName TerminalCategory; // 0x0(0x8)
	struct FName TerminalSubCategory; // 0x8(0x8)
	struct TWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // 0x10(0x8)
	bool bTerminalIsConst; // 0x18(0x1)
	bool bTerminalIsWeakPointer; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
};

// Object: ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size: 0x1 (Inherited: 0x0)
struct FBlueprintMacroCosmeticInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.CompilerNativizationOptions
// Size: 0x80 (Inherited: 0x0)
struct FCompilerNativizationOptions
{
	struct FName PlatformName; // 0x0(0x8)
	bool ServerOnlyPlatform; // 0x8(0x1)
	bool ClientOnlyPlatform; // 0x9(0x1)
	bool bExcludeMonolithicHeaders; // 0xA(0x1)
	bool bBluePrintRecursiveNavizedHeaders; // 0xB(0x1)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FName> ExcludedModules; // 0x10(0x10)
	struct TSet<struct FSoftObjectPath> ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// Object: ScriptStruct Engine.BPComponentClassOverride
// Size: 0x10 (Inherited: 0x0)
struct FBPComponentClassOverride
{
	struct FName ComponentName; // 0x0(0x8)
	struct UObject* ComponentClass; // 0x8(0x8)
};

// Object: ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size: 0x48 (Inherited: 0x0)
struct FBlueprintCookedComponentInstancingData
{
	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0(0x10)
	uint8_t Pad_0x10[0x11]; // 0x10(0x11)
	bool bHasValidCookedData; // 0x21(0x1)
	uint8_t Pad_0x22[0x26]; // 0x22(0x26)
};

// Object: ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size: 0x18 (Inherited: 0x0)
struct FBlueprintComponentChangedPropertyInfo
{
	struct FName PropertyName; // 0x0(0x8)
	int32_t ArrayIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UStruct* PropertyScope; // 0x10(0x8)
};

// Object: ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 (Inherited: 0x0)
struct FEventGraphFastCallPair
{
	struct UFunction* FunctionToPatch; // 0x0(0x8)
	int32_t EventGraphCallOffset; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Engine.BlueprintDebugData
// Size: 0x1 (Inherited: 0x0)
struct FBlueprintDebugData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x8 (Inherited: 0x0)
struct FPointerToUberGraphFrame
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x190 (Inherited: 0x0)
struct FDebuggingInfoForSingleFunction
{
	uint8_t Pad_0x0[0x190]; // 0x0(0x190)
};

// Object: ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 (Inherited: 0x0)
struct FNodeToCodeAssociation
{
	uint8_t Pad_0x0[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct Engine.AnimCurveType
// Size: 0x2 (Inherited: 0x0)
struct FAnimCurveType
{
	uint8_t Pad_0x0[0x2]; // 0x0(0x2)
};

// Object: ScriptStruct Engine.BookmarkBaseJumpToSettings
// Size: 0x1 (Inherited: 0x0)
struct FBookmarkBaseJumpToSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.BookmarkJumpToSettings
// Size: 0x1 (Inherited: 0x1)
struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings
{
};

// Object: ScriptStruct Engine.Bookmark2DJumpToSettings
// Size: 0x1 (Inherited: 0x0)
struct FBookmark2DJumpToSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.GeomSelection
// Size: 0xC (Inherited: 0x0)
struct FGeomSelection
{
	int32_t Type; // 0x0(0x4)
	int32_t Index; // 0x4(0x4)
	int32_t SelectionIndex; // 0x8(0x4)
};

// Object: ScriptStruct Engine.BuilderPoly
// Size: 0x20 (Inherited: 0x0)
struct FBuilderPoly
{
	struct TArray<int32_t> VertexIndices; // 0x0(0x10)
	int32_t Direction; // 0x10(0x4)
	struct FName ItemName; // 0x14(0x8)
	int32_t PolyFlags; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.CachedAnimTransitionData
// Size: 0x24 (Inherited: 0x0)
struct FCachedAnimTransitionData
{
	struct FName StateMachineName; // 0x0(0x8)
	struct FName FromStateName; // 0x8(0x8)
	struct FName ToStateName; // 0x10(0x8)
	uint8_t Pad_0x18[0xC]; // 0x18(0xC)
};

// Object: ScriptStruct Engine.CachedAnimRelevancyData
// Size: 0x1C (Inherited: 0x0)
struct FCachedAnimRelevancyData
{
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	uint8_t Pad_0x10[0xC]; // 0x10(0xC)
};

// Object: ScriptStruct Engine.CachedAnimAssetPlayerData
// Size: 0x18 (Inherited: 0x0)
struct FCachedAnimAssetPlayerData
{
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct Engine.CachedAnimStateArray
// Size: 0x18 (Inherited: 0x0)
struct FCachedAnimStateArray
{
	struct TArray<struct FCachedAnimStateData> States; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct Engine.CachedAnimStateData
// Size: 0x1C (Inherited: 0x0)
struct FCachedAnimStateData
{
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	uint8_t Pad_0x10[0xC]; // 0x10(0xC)
};

// Object: ScriptStruct Engine.ActiveCameraShakeInfo
// Size: 0x10 (Inherited: 0x0)
struct FActiveCameraShakeInfo
{
	struct UCameraShake* ShakeInstance; // 0x0(0x8)
	struct TWeakObjectPtr<struct UCameraShakeSourceComponent> ShakeSource; // 0x8(0x8)
};

// Object: ScriptStruct Engine.PooledCameraShakes
// Size: 0x10 (Inherited: 0x0)
struct FPooledCameraShakes
{
	struct TArray<struct UCameraShake*> PooledShakes; // 0x0(0x10)
};

// Object: ScriptStruct Engine.VOscillator
// Size: 0x24 (Inherited: 0x0)
struct FVOscillator
{
	struct FFOscillator X; // 0x0(0xC)
	struct FFOscillator Y; // 0xC(0xC)
	struct FFOscillator Z; // 0x18(0xC)
};

// Object: ScriptStruct Engine.ROscillator
// Size: 0x24 (Inherited: 0x0)
struct FROscillator
{
	struct FFOscillator Pitch; // 0x0(0xC)
	struct FFOscillator Yaw; // 0xC(0xC)
	struct FFOscillator Roll; // 0x18(0xC)
};

// Object: ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x1 (Inherited: 0x0)
struct FDummySpacerCameraTypes
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.CanvasIcon
// Size: 0x18 (Inherited: 0x0)
struct FCanvasIcon
{
	struct UTexture* Texture; // 0x0(0x8)
	float U; // 0x8(0x4)
	float V; // 0xC(0x4)
	float UL; // 0x10(0x4)
	float VL; // 0x14(0x4)
};

// Object: ScriptStruct Engine.WrappedStringElement
// Size: 0x18 (Inherited: 0x0)
struct FWrappedStringElement
{
	struct FString Value; // 0x0(0x10)
	struct FVector2D LineExtent; // 0x10(0x8)
};

// Object: ScriptStruct Engine.TextSizingParameters
// Size: 0x28 (Inherited: 0x0)
struct FTextSizingParameters
{
	float DrawX; // 0x0(0x4)
	float DrawY; // 0x4(0x4)
	float DrawXL; // 0x8(0x4)
	float DrawYL; // 0xC(0x4)
	struct FVector2D Scaling; // 0x10(0x8)
	struct UFont* DrawFont; // 0x18(0x8)
	struct FVector2D SpacingAdjust; // 0x20(0x8)
};

// Object: ScriptStruct Engine.ChildActorComponentInstanceData
// Size: 0xD8 (Inherited: 0xA8)
struct FChildActorComponentInstanceData : FSceneComponentInstanceData
{
	struct AActor* ChildActorClass; // 0xA8(0x8)
	struct FName ChildActorName; // 0xB0(0x8)
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xB8(0x10)
	uint8_t Pad_0xC8[0x10]; // 0xC8(0x10)
};

// Object: ScriptStruct Engine.ChildActorAttachedActorInfo
// Size: 0x40 (Inherited: 0x0)
struct FChildActorAttachedActorInfo
{
	struct TWeakObjectPtr<struct AActor> Actor; // 0x0(0x8)
	struct FName SocketName; // 0x8(0x8)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// Object: ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x0)
struct FCustomProfile
{
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CustomChannelSetup
// Size: 0xC (Inherited: 0x0)
struct FCustomChannelSetup
{
	uint8_t Channel; // 0x0(0x1)
	uint8_t DefaultResponse; // 0x1(0x1)
	bool bTraceType; // 0x2(0x1)
	bool bStaticObject; // 0x3(0x1)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x48 (Inherited: 0x0)
struct FCollisionResponseTemplate
{
	struct FName Name; // 0x0(0x8)
	uint8_t CollisionEnabled; // 0x8(0x1)
	uint8_t Pad_0x9[0x1]; // 0x9(0x1)
	bool bCanModify; // 0xA(0x1)
	uint8_t Pad_0xB[0x21]; // 0xB(0x21)
	struct FName ObjectTypeName; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x38(0x10)
};

// Object: ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x18 (Inherited: 0x0)
struct FBlueprintComponentDelegateBinding
{
	struct FName ComponentPropertyName; // 0x0(0x8)
	struct FName DelegatePropertyName; // 0x8(0x8)
	struct FName FunctionNameToBind; // 0x10(0x8)
};

// Object: ScriptStruct Engine.MeshUVChannelInfo
// Size: 0x14 (Inherited: 0x0)
struct FMeshUVChannelInfo
{
	bool bInitialized; // 0x0(0x1)
	bool bOverrideDensities; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float LocalUVDensities[0x4]; // 0x4(0x10)
};

// Object: ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 (Inherited: 0x0)
struct FAutoCompleteNode
{
	int32_t IndexChar; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> AutoCompleteListIndices; // 0x8(0x10)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

// Object: ScriptStruct Engine.AngularDriveConstraint
// Size: 0x4C (Inherited: 0x0)
struct FAngularDriveConstraint
{
	struct FConstraintDrive TwistDrive; // 0x0(0x10)
	struct FConstraintDrive SwingDrive; // 0x10(0x10)
	struct FConstraintDrive SlerpDrive; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0xC)
	struct FVector AngularVelocityTarget; // 0x3C(0xC)
	uint8_t AngularDriveMode; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
};

// Object: ScriptStruct Engine.ConstraintDrive
// Size: 0x10 (Inherited: 0x0)
struct FConstraintDrive
{
	float Stiffness; // 0x0(0x4)
	float Damping; // 0x4(0x4)
	float MaxForce; // 0x8(0x4)
	uint8_t bEnablePositionDrive : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bEnableVelocityDrive : 1; // 0xC(0x1), Mask(0x2)
	uint8_t BitPad_0xC_2 : 6; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.LinearDriveConstraint
// Size: 0x4C (Inherited: 0x0)
struct FLinearDriveConstraint
{
	struct FVector PositionTarget; // 0x0(0xC)
	struct FVector VelocityTarget; // 0xC(0xC)
	struct FConstraintDrive XDrive; // 0x18(0x10)
	struct FConstraintDrive YDrive; // 0x28(0x10)
	struct FConstraintDrive ZDrive; // 0x38(0x10)
	uint8_t bEnablePositionDrive : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
};

// Object: ScriptStruct Engine.ConstraintInstance
// Size: 0x1B8 (Inherited: 0x0)
struct FConstraintInstance
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
	struct FName JointName; // 0x18(0x8)
	struct FName ConstraintBone1; // 0x20(0x8)
	struct FName ConstraintBone2; // 0x28(0x8)
	struct FVector Pos1; // 0x30(0xC)
	struct FVector PriAxis1; // 0x3C(0xC)
	struct FVector SecAxis1; // 0x48(0xC)
	struct FVector Pos2; // 0x54(0xC)
	struct FVector PriAxis2; // 0x60(0xC)
	struct FVector SecAxis2; // 0x6C(0xC)
	struct FRotator AngularRotationOffset; // 0x78(0xC)
	uint8_t bScaleLinearLimits : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t Pad_0x85[0x7]; // 0x85(0x7)
	struct FConstraintProfileProperties ProfileInstance; // 0x8C(0x104)
	uint8_t Pad_0x190[0x28]; // 0x190(0x28)
};

// Object: ScriptStruct Engine.ConstraintProfileProperties
// Size: 0x104 (Inherited: 0x0)
struct FConstraintProfileProperties
{
	float ProjectionLinearTolerance; // 0x0(0x4)
	float ProjectionAngularTolerance; // 0x4(0x4)
	float LinearBreakThreshold; // 0x8(0x4)
	float AngularBreakThreshold; // 0xC(0x4)
	struct FLinearConstraint LinearLimit; // 0x10(0x1C)
	struct FConeConstraint ConeLimit; // 0x2C(0x20)
	struct FTwistConstraint TwistLimit; // 0x4C(0x1C)
	struct FLinearDriveConstraint LinearDrive; // 0x68(0x4C)
	struct FAngularDriveConstraint AngularDrive; // 0xB4(0x4C)
	uint8_t bDisableCollision : 1; // 0x100(0x1), Mask(0x1)
	uint8_t bParentDominates : 1; // 0x100(0x1), Mask(0x2)
	uint8_t bEnableProjection : 1; // 0x100(0x1), Mask(0x4)
	uint8_t bAngularBreakable : 1; // 0x100(0x1), Mask(0x8)
	uint8_t bLinearBreakable : 1; // 0x100(0x1), Mask(0x10)
	uint8_t BitPad_0x100_5 : 3; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
};

// Object: ScriptStruct Engine.ConstraintBaseParams
// Size: 0x14 (Inherited: 0x0)
struct FConstraintBaseParams
{
	float Stiffness; // 0x0(0x4)
	float Damping; // 0x4(0x4)
	float Restitution; // 0x8(0x4)
	float ContactDistance; // 0xC(0x4)
	uint8_t bSoftConstraint : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct Engine.TwistConstraint
// Size: 0x1C (Inherited: 0x14)
struct FTwistConstraint : FConstraintBaseParams
{
	float TwistLimitDegrees; // 0x14(0x4)
	uint8_t TwistMotion; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct Engine.ConeConstraint
// Size: 0x20 (Inherited: 0x14)
struct FConeConstraint : FConstraintBaseParams
{
	float Swing1LimitDegrees; // 0x14(0x4)
	float Swing2LimitDegrees; // 0x18(0x4)
	uint8_t Swing1Motion; // 0x1C(0x1)
	uint8_t Swing2Motion; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
};

// Object: ScriptStruct Engine.LinearConstraint
// Size: 0x1C (Inherited: 0x14)
struct FLinearConstraint : FConstraintBaseParams
{
	float Limit; // 0x14(0x4)
	uint8_t XMotion; // 0x18(0x1)
	uint8_t YMotion; // 0x19(0x1)
	uint8_t ZMotion; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct Engine.CullDistanceSizePair
// Size: 0x8 (Inherited: 0x0)
struct FCullDistanceSizePair
{
	float Size; // 0x0(0x4)
	float CullDistance; // 0x4(0x4)
};

// Object: ScriptStruct Engine.NamedCurveValue
// Size: 0xC (Inherited: 0x0)
struct FNamedCurveValue
{
	struct FName Name; // 0x0(0x8)
	float Value; // 0x8(0x4)
};

// Object: ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x0)
struct FDataTableCategoryHandle
{
	struct UDataTable* DataTable; // 0x0(0x8)
	struct FName ColumnName; // 0x8(0x8)
	struct FName RowContents; // 0x10(0x8)
};

// Object: ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// Size: 0x10 (Inherited: 0x0)
struct FDebugCameraControllerSettingsViewModeIndex
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint8_t ViewModeIndex; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 (Inherited: 0x0)
struct FDebugDisplayProperty
{
	struct UObject* Obj; // 0x0(0x8)
	struct UObject* WithinClass; // 0x8(0x8)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct Engine.DebugTextInfo
// Size: 0x60 (Inherited: 0x0)
struct FDebugTextInfo
{
	struct AActor* SrcActor; // 0x0(0x8)
	struct FVector SrcActorOffset; // 0x8(0xC)
	struct FVector SrcActorDesiredOffset; // 0x14(0xC)
	struct FString DebugText; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x4)
	float Duration; // 0x34(0x4)
	struct FColor TextColor; // 0x38(0x4)
	uint8_t bAbsoluteLocation : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t bKeepAttachedToActor : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t bDrawShadow : 1; // 0x3C(0x1), Mask(0x4)
	uint8_t BitPad_0x3C_3 : 5; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FVector OrigActorLocation; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct UFont* Font; // 0x50(0x8)
	float FontScale; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct Engine.DelayedPhysicsContainer
// Size: 0x50 (Inherited: 0x0)
struct FDelayedPhysicsContainer
{
	struct TSet<struct UPrimitiveComponent*> Components; // 0x0(0x50)
};

// Object: ScriptStruct Engine.SpatialHashingKey
// Size: 0x18 (Inherited: 0x0)
struct FSpatialHashingKey
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct Engine.MulticastRecordOptions
// Size: 0x18 (Inherited: 0x0)
struct FMulticastRecordOptions
{
	struct FString FuncPathName; // 0x0(0x10)
	bool bServerSkip; // 0x10(0x1)
	bool bClientSkip; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct Engine.RollbackNetStartupActorInfo
// Size: 0xB0 (Inherited: 0x0)
struct FRollbackNetStartupActorInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UObject* Archetype; // 0x8(0x8)
	uint8_t Pad_0x10[0x90]; // 0x10(0x90)
	struct TArray<struct UObject*> ObjReferences; // 0xA0(0x10)
};

// Object: ScriptStruct Engine.MeshDeviceLODSettings
// Size: 0xC (Inherited: 0x0)
struct FMeshDeviceLODSettings
{
	struct FName LODGroupName; // 0x0(0x8)
	int32_t MinLODToLoad; // 0x8(0x4)
};

// Object: ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x0)
struct FDialogueWaveParameter
{
	struct UDialogueWave* DialogueWave; // 0x0(0x8)
	struct FDialogueContext Context; // 0x8(0x18)
};

// Object: ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x0)
struct FDialogueContext
{
	struct UDialogueVoice* Speaker; // 0x0(0x8)
	struct TArray<struct UDialogueVoice*> Targets; // 0x8(0x10)
};

// Object: ScriptStruct Engine.DialogueContextMapping
// Size: 0x38 (Inherited: 0x0)
struct FDialogueContextMapping
{
	struct FDialogueContext Context; // 0x0(0x18)
	struct USoundWave* SoundWave; // 0x18(0x8)
	struct FString LocalizationKeyFormat; // 0x20(0x10)
	struct UDialogueSoundWaveProxy* Proxy; // 0x30(0x8)
};

// Object: ScriptStruct Engine.RawDistributionFloat
// Size: 0x30 (Inherited: 0x20)
struct FRawDistributionFloat : FRawDistribution
{
	float MinValue; // 0x20(0x4)
	float MaxValue; // 0x24(0x4)
	struct UDistributionFloat* Distribution; // 0x28(0x8)
};

// Object: ScriptStruct Engine.RawDistributionVector
// Size: 0x48 (Inherited: 0x20)
struct FRawDistributionVector : FRawDistribution
{
	float MinValue; // 0x20(0x4)
	float MaxValue; // 0x24(0x4)
	struct FVector MinValueVec; // 0x28(0xC)
	struct FVector MaxValueVec; // 0x34(0xC)
	struct UDistributionVector* Distribution; // 0x40(0x8)
};

// Object: ScriptStruct Engine.GraphReference
// Size: 0x20 (Inherited: 0x0)
struct FGraphReference
{
	struct UEdGraph* MacroGraph; // 0x0(0x8)
	struct UBlueprint* GraphBlueprint; // 0x8(0x8)
	struct FGuid GraphGuid; // 0x10(0x10)
};

// Object: ScriptStruct Engine.EdGraphPinReference
// Size: 0x18 (Inherited: 0x0)
struct FEdGraphPinReference
{
	struct TWeakObjectPtr<struct UEdGraphNode> OwningNode; // 0x0(0x8)
	struct FGuid PinId; // 0x8(0x10)
};

// Object: ScriptStruct Engine.EdGraphSchemaAction
// Size: 0x100 (Inherited: 0x0)
struct FEdGraphSchemaAction
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FText MenuDescription; // 0x8(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32_t Grouping; // 0x68(0x4)
	int32_t SectionID; // 0x6C(0x4)
	struct TArray<struct FString> MenuDescriptionArray; // 0x70(0x10)
	struct TArray<struct FString> FullSearchTitlesArray; // 0x80(0x10)
	struct TArray<struct FString> FullSearchKeywordsArray; // 0x90(0x10)
	struct TArray<struct FString> FullSearchCategoryArray; // 0xA0(0x10)
	struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xB0(0x10)
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xC0(0x10)
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xD0(0x10)
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xE0(0x10)
	struct FString SearchText; // 0xF0(0x10)
};

// Object: ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0x108 (Inherited: 0x100)
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction
{
	struct UEdGraphNode* NodeTemplate; // 0x100(0x8)
};

// Object: ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x0)
struct FPluginRedirect
{
	struct FString OldPluginName; // 0x0(0x10)
	struct FString NewPluginName; // 0x10(0x10)
};

// Object: ScriptStruct Engine.StructRedirect
// Size: 0x10 (Inherited: 0x0)
struct FStructRedirect
{
	struct FName OldStructName; // 0x0(0x8)
	struct FName NewStructName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.ClassRedirect
// Size: 0x3C (Inherited: 0x0)
struct FClassRedirect
{
	struct FName ObjectName; // 0x0(0x8)
	struct FName OldClassName; // 0x8(0x8)
	struct FName NewClassName; // 0x10(0x8)
	struct FName OldSubobjName; // 0x18(0x8)
	struct FName NewSubobjName; // 0x20(0x8)
	struct FName NewClassClass; // 0x28(0x8)
	struct FName NewClassPackage; // 0x30(0x8)
	bool InstanceOnly; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
};

// Object: ScriptStruct Engine.GameNameRedirect
// Size: 0x10 (Inherited: 0x0)
struct FGameNameRedirect
{
	struct FName OldGameName; // 0x0(0x8)
	struct FName NewGameName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.ScreenMessageString
// Size: 0x30 (Inherited: 0x0)
struct FScreenMessageString
{
	uint64_t Key; // 0x0(0x8)
	struct FString ScreenMessage; // 0x8(0x10)
	struct FColor DisplayColor; // 0x18(0x4)
	float TimeToDisplay; // 0x1C(0x4)
	float CurrentTimeDisplayed; // 0x20(0x4)
	struct FVector2D TextScale; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.DropNoteInfo
// Size: 0x28 (Inherited: 0x0)
struct FDropNoteInfo
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	struct FString Comment; // 0x18(0x10)
};

// Object: ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x0)
struct FStatColorMapping
{
	struct FString StatName; // 0x0(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	uint8_t DisableBlend : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct Engine.StatColorMapEntry
// Size: 0x8 (Inherited: 0x0)
struct FStatColorMapEntry
{
	float In; // 0x0(0x4)
	struct FColor Out; // 0x4(0x4)
};

// Object: ScriptStruct Engine.WorldContext
// Size: 0x280 (Inherited: 0x0)
struct FWorldContext
{
	uint8_t Pad_0x0[0xD0]; // 0x0(0xD0)
	struct FURL LastURL; // 0xD0(0x68)
	struct FURL LastRemoteURL; // 0x138(0x68)
	struct UPendingNetGame* PendingNetGame; // 0x1A0(0x8)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1A8(0x10)
	uint8_t Pad_0x1B8[0x10]; // 0x1B8(0x10)
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // 0x1C8(0x10)
	uint8_t Pad_0x1D8[0x18]; // 0x1D8(0x18)
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // 0x1F0(0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200(0x10)
	struct UGameViewportClient* GameViewport; // 0x210(0x8)
	struct UGameInstance* OwningGameInstance; // 0x218(0x8)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x220(0x10)
	uint8_t Pad_0x230[0x50]; // 0x230(0x50)
};

// Object: ScriptStruct Engine.NamedNetDriver
// Size: 0x10 (Inherited: 0x0)
struct FNamedNetDriver
{
	struct UNetDriver* NetDriver; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.LevelStreamingStatus
// Size: 0x10 (Inherited: 0x0)
struct FLevelStreamingStatus
{
	struct FName PackageName; // 0x0(0x8)
	uint8_t bShouldBeLoaded : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bShouldBeVisible : 1; // 0x8(0x1), Mask(0x2)
	uint8_t BitPad_0x8_2 : 6; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	uint32_t LODIndex; // 0xC(0x4)
};

// Object: ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 (Inherited: 0x0)
struct FFullyLoadedPackagesInfo
{
	uint8_t FullyLoadType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Tag; // 0x8(0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x28(0x10)
};

// Object: ScriptStruct Engine.URL
// Size: 0x68 (Inherited: 0x0)
struct FURL
{
	struct FString Protocol; // 0x0(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x4)
	int32_t Valid; // 0x24(0x4)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
};

// Object: ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 (Inherited: 0x0)
struct FNetDriverDefinition
{
	struct FName DefName; // 0x0(0x8)
	struct FName DriverClassName; // 0x8(0x8)
	struct FName DriverClassNameFallback; // 0x10(0x8)
};

// Object: ScriptStruct Engine.ExposureSettings
// Size: 0x8 (Inherited: 0x0)
struct FExposureSettings
{
	float FixedEV100; // 0x0(0x4)
	bool bFixed; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.TickPrerequisite
// Size: 0x10 (Inherited: 0x0)
struct FTickPrerequisite
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.LightingInfluenceMesh
// Size: 0x40 (Inherited: 0x0)
struct FLightingInfluenceMesh
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct Engine.CanvasUVTri
// Size: 0x60 (Inherited: 0x0)
struct FCanvasUVTri
{
	struct FVector2D V0_Pos; // 0x0(0x8)
	struct FVector2D V0_UV; // 0x8(0x8)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x8)
	struct FVector2D V1_UV; // 0x28(0x8)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x8)
	struct FVector2D V2_UV; // 0x48(0x8)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// Object: ScriptStruct Engine.FontRenderInfo
// Size: 0x28 (Inherited: 0x0)
struct FFontRenderInfo
{
	uint8_t bClipText : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bEnableShadow : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FDepthFieldGlowInfo GlowInfo; // 0x4(0x24)
};

// Object: ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x24 (Inherited: 0x0)
struct FDepthFieldGlowInfo
{
	uint8_t bEnableGlow : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FLinearColor GlowColor; // 0x4(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x8)
	struct FVector2D GlowInnerRadius; // 0x1C(0x8)
};

// Object: ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x0)
struct FRedirector
{
	struct FName OldName; // 0x0(0x8)
	struct FName NewName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.CollectionReference
// Size: 0x8 (Inherited: 0x0)
struct FCollectionReference
{
	struct FName CollectionName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.ComponentReference
// Size: 0x28 (Inherited: 0x0)
struct FComponentReference
{
	struct AActor* OtherActor; // 0x0(0x8)
	struct FName ComponentProperty; // 0x8(0x8)
	struct FString PathToComponent; // 0x10(0x10)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x8 (Inherited: 0x0)
struct FConstrainComponentPropName
{
	struct FName ComponentName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.RadialDamageEvent
// Size: 0x40 (Inherited: 0x10)
struct FRadialDamageEvent : FDamageEvent
{
	struct FRadialDamageParams Params; // 0x10(0x14)
	struct FVector Origin; // 0x24(0xC)
	struct TArray<struct FHitResult> ComponentHits; // 0x30(0x10)
};

// Object: ScriptStruct Engine.RadialDamageParams
// Size: 0x14 (Inherited: 0x0)
struct FRadialDamageParams
{
	float BaseDamage; // 0x0(0x4)
	float MinimumDamage; // 0x4(0x4)
	float InnerRadius; // 0x8(0x4)
	float OuterRadius; // 0xC(0x4)
	float DamageFalloff; // 0x10(0x4)
};

// Object: ScriptStruct Engine.SkeletalMeshBuildSettings
// Size: 0x14 (Inherited: 0x0)
struct FSkeletalMeshBuildSettings
{
	uint8_t bRecomputeNormals : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bRecomputeTangents : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bUseMikkTSpace : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bComputeWeightedNormals : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bRemoveDegenerates : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bUseHighPrecisionTangentBasis : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bUseFullPrecisionUVs : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bBuildAdjacencyBuffer : 1; // 0x0(0x1), Mask(0x80)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ThresholdPosition; // 0x4(0x4)
	float ThresholdTangentNormal; // 0x8(0x4)
	float ThresholdUV; // 0xC(0x4)
	float MorphThresholdPosition; // 0x10(0x4)
};

// Object: ScriptStruct Engine.MeshBuildSettings
// Size: 0x30 (Inherited: 0x0)
struct FMeshBuildSettings
{
	uint8_t bUseMikkTSpace : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bRecomputeNormals : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bRecomputeTangents : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bComputeWeightedNormals : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bRemoveDegenerates : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bBuildAdjacencyBuffer : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bBuildReversedIndexBuffer : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bUseHighPrecisionTangentBasis : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bUseFullPrecisionUVs : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bGenerateLightmapUVs : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bSupportFaceRemap : 1; // 0x1(0x1), Mask(0x8)
	uint8_t BitPad_0x1_4 : 4; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t MinLightmapResolution; // 0x4(0x4)
	int32_t SrcLightmapIndex; // 0x8(0x4)
	int32_t DstLightmapIndex; // 0xC(0x4)
	float BuildScale; // 0x10(0x4)
	struct FVector BuildScale3D; // 0x14(0xC)
	float DistanceFieldResolutionScale; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x28(0x8)
};

// Object: ScriptStruct Engine.POV
// Size: 0x1C (Inherited: 0x0)
struct FPOV
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	float FOV; // 0x18(0x4)
};

// Object: ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0x88 (Inherited: 0x0)
struct FAnimUpdateRateParameters
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
	enum class EUpdateRateShiftBucket ShiftBucket; // 0x1(0x1)
	uint8_t bInterpolateSkippedFrames : 1; // 0x2(0x1), Mask(0x1)
	uint8_t bShouldUseLodMap : 1; // 0x2(0x1), Mask(0x2)
	uint8_t bShouldUseMinLod : 1; // 0x2(0x1), Mask(0x4)
	uint8_t bSkipUpdate : 1; // 0x2(0x1), Mask(0x8)
	uint8_t bSkipEvaluation : 1; // 0x2(0x1), Mask(0x10)
	uint8_t BitPad_0x2_5 : 3; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	int32_t UpdateRate; // 0x4(0x4)
	int32_t EvaluationRate; // 0x8(0x4)
	float TickedPoseOffestTime; // 0xC(0x4)
	float AdditionalTime; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int32_t BaseNonRenderedUpdateRate; // 0x18(0x4)
	int32_t MaxEvalRateForInterpolation; // 0x1C(0x4)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20(0x10)
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30(0x50)
	int32_t SkippedUpdateFrames; // 0x80(0x4)
	int32_t SkippedEvalFrames; // 0x84(0x4)
};

// Object: ScriptStruct Engine.AnimSlotDesc
// Size: 0xC (Inherited: 0x0)
struct FAnimSlotDesc
{
	struct FName SlotName; // 0x0(0x8)
	int32_t NumChannels; // 0x8(0x4)
};

// Object: ScriptStruct Engine.AnimSlotInfo
// Size: 0x18 (Inherited: 0x0)
struct FAnimSlotInfo
{
	struct FName SlotName; // 0x0(0x8)
	struct TArray<float> ChannelWeights; // 0x8(0x10)
};

// Object: ScriptStruct Engine.MTDResult
// Size: 0x10 (Inherited: 0x0)
struct FMTDResult
{
	struct FVector Direction; // 0x0(0xC)
	float Distance; // 0xC(0x4)
};

// Object: ScriptStruct Engine.OverlapResult
// Size: 0x18 (Inherited: 0x0)
struct FOverlapResult
{
	struct TWeakObjectPtr<struct AActor> Actor; // 0x0(0x8)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x8(0x8)
	uint8_t Pad_0x10[0x4]; // 0x10(0x4)
	uint8_t bBlockingHit : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct Engine.PrimitiveMaterialRef
// Size: 0x18 (Inherited: 0x0)
struct FPrimitiveMaterialRef
{
	struct UPrimitiveComponent* Primitive; // 0x0(0x8)
	struct UDecalComponent* Decal; // 0x8(0x8)
	int32_t ElementIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.SwarmDebugOptions
// Size: 0x4 (Inherited: 0x0)
struct FSwarmDebugOptions
{
	uint8_t bDistributionEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bForceContentExport : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bInitialized : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct Engine.LightmassDebugOptions
// Size: 0x58 (Inherited: 0x0)
struct FLightmassDebugOptions
{
	uint8_t bDebugMode : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bStatsEnabled : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bGatherBSPSurfacesAcrossComponents : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float CoplanarTolerance; // 0x4(0x4)
	uint8_t bUseImmediateImport : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bImmediateProcessMappings : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bSortMappings : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bDumpBinaryFiles : 1; // 0x8(0x1), Mask(0x8)
	uint8_t bDebugMaterials : 1; // 0x8(0x1), Mask(0x10)
	uint8_t bPadMappings : 1; // 0x8(0x1), Mask(0x20)
	uint8_t bDebugPaddings : 1; // 0x8(0x1), Mask(0x40)
	uint8_t bOnlyCalcDebugTexelMappings : 1; // 0x8(0x1), Mask(0x80)
	uint8_t bUseRandomColors : 1; // 0x9(0x1), Mask(0x1)
	uint8_t bColorBordersGreen : 1; // 0x9(0x1), Mask(0x2)
	uint8_t bColorByExecutionTime : 1; // 0x9(0x1), Mask(0x4)
	uint8_t BitPad_0x9_3 : 5; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
	float ExecutionTimeDivisor; // 0xC(0x4)
	bool bTraceEnabled; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString TraceHost; // 0x18(0x10)
	struct FString TraceChannels; // 0x28(0x10)
	bool bSplunkReportEnabled; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FString SplunkAddress; // 0x40(0x10)
	int32_t SplunkUdpPort; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct Engine.LightmassLightSettings
// Size: 0xC (Inherited: 0x0)
struct FLightmassLightSettings
{
	float IndirectLightingSaturation; // 0x0(0x4)
	float ShadowExponent; // 0x4(0x4)
	bool bUseAreaShadowsForStationaryLight; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 (Inherited: 0xC)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	float LightSourceAngle; // 0xC(0x4)
};

// Object: ScriptStruct Engine.LightmassPointLightSettings
// Size: 0xC (Inherited: 0xC)
struct FLightmassPointLightSettings : FLightmassLightSettings
{
};

// Object: ScriptStruct Engine.PointLightPoxyMeshBuildSettings
// Size: 0x14 (Inherited: 0x0)
struct FPointLightPoxyMeshBuildSettings
{
	enum class ELightProxyMeshGenMethod LightProxyMeshGenMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	uint32_t Rings; // 0x4(0x4)
	uint32_t Sides; // 0x8(0x4)
	uint32_t OutputResolution; // 0xC(0x4)
	float VoxelSize; // 0x10(0x4)
};

// Object: ScriptStruct Engine.BasedPosition
// Size: 0x38 (Inherited: 0x0)
struct FBasedPosition
{
	struct AActor* Base; // 0x0(0x8)
	struct FVector Position; // 0x8(0xC)
	struct FVector CachedBaseLocation; // 0x14(0xC)
	struct FRotator CachedBaseRotation; // 0x20(0xC)
	struct FVector CachedTransPosition; // 0x2C(0xC)
};

// Object: ScriptStruct Engine.FractureEffect
// Size: 0x10 (Inherited: 0x0)
struct FFractureEffect
{
	struct UParticleSystem* ParticleSystem; // 0x0(0x8)
	struct USoundBase* Sound; // 0x8(0x8)
};

// Object: ScriptStruct Engine.CollisionImpactData
// Size: 0x28 (Inherited: 0x0)
struct FCollisionImpactData
{
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x0(0x10)
	struct FVector TotalNormalImpulse; // 0x10(0xC)
	struct FVector TotalFrictionImpulse; // 0x1C(0xC)
};

// Object: ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x30 (Inherited: 0x0)
struct FRigidBodyContactInfo
{
	struct FVector ContactPosition; // 0x0(0xC)
	struct FVector ContactNormal; // 0xC(0xC)
	float ContactPenetration; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UPhysicalMaterial* PhysMaterial[0x2]; // 0x20(0x10)
};

// Object: ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x34 (Inherited: 0x0)
struct FRigidBodyErrorCorrection
{
	float PingExtrapolation; // 0x0(0x4)
	float PingLimit; // 0x4(0x4)
	float ErrorPerLinearDifference; // 0x8(0x4)
	float ErrorPerAngularDifference; // 0xC(0x4)
	float MaxRestoredStateError; // 0x10(0x4)
	float MaxLinearHardSnapDistance; // 0x14(0x4)
	float PositionLerp; // 0x18(0x4)
	float AngleLerp; // 0x1C(0x4)
	float LinearVelocityCoefficient; // 0x20(0x4)
	float AngularVelocityCoefficient; // 0x24(0x4)
	float ErrorAccumulationSeconds; // 0x28(0x4)
	float ErrorAccumulationDistanceSq; // 0x2C(0x4)
	float ErrorAccumulationSimilarity; // 0x30(0x4)
};

// Object: ScriptStruct Engine.RigidBodyState
// Size: 0x40 (Inherited: 0x0)
struct FRigidBodyState
{
	struct FVector_NetQuantize100 Position; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 LinVel; // 0x20(0xC)
	struct FVector_NetQuantize100 AngVel; // 0x2C(0xC)
	uint8_t Flags; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct Engine.MaterialShadingModelField
// Size: 0x2 (Inherited: 0x0)
struct FMaterialShadingModelField
{
	uint16_t ShadingModelField; // 0x0(0x2)
};

// Object: ScriptStruct Engine.SLDirectionalLightScattering
// Size: 0x20 (Inherited: 0x0)
struct FSLDirectionalLightScattering
{
	float DirectionalInscatteringExponent_M; // 0x0(0x4)
	float DirectionalInscatteringStartDistance_M; // 0x4(0x4)
	float DirectionalInscatteringMaxDistance_M; // 0x8(0x4)
	struct FLinearColor DirectionalInscatteringColor_M; // 0xC(0x10)
	float DirectionalInscatteringGamma_M; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.SLHeightFogData
// Size: 0x10 (Inherited: 0x0)
struct FSLHeightFogData
{
	float HFogHeight; // 0x0(0x4)
	float HFogHeightFalloff; // 0x4(0x4)
	float HStartDistance; // 0x8(0x4)
	float HMaxFadingDistance; // 0xC(0x4)
};

// Object: ScriptStruct Engine.SLDistanceFogData
// Size: 0x18 (Inherited: 0x0)
struct FSLDistanceFogData
{
	float DFogHeight; // 0x0(0x4)
	float DFogFallOff; // 0x4(0x4)
	float DMaxDistance; // 0x8(0x4)
	float DFogGamma; // 0xC(0x4)
	float DMaxOpacity; // 0x10(0x4)
	float DStartDistance; // 0x14(0x4)
};

// Object: ScriptStruct Engine.ExponentialHeightFogData
// Size: 0xC (Inherited: 0x0)
struct FExponentialHeightFogData
{
	float FogDensity; // 0x0(0x4)
	float FogHeightFalloff; // 0x4(0x4)
	float FogHeightOffset; // 0x8(0x4)
};

// Object: ScriptStruct Engine.FontCharacter
// Size: 0x18 (Inherited: 0x0)
struct FFontCharacter
{
	int32_t StartU; // 0x0(0x4)
	int32_t StartV; // 0x4(0x4)
	int32_t USize; // 0x8(0x4)
	int32_t VSize; // 0xC(0x4)
	uint8_t TextureIndex; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t VerticalOffset; // 0x14(0x4)
};

// Object: ScriptStruct Engine.FontFacePlatformRasterizationOverrides
// Size: 0x3 (Inherited: 0x0)
struct FFontFacePlatformRasterizationOverrides
{
	enum class EFontRasterizationMode MsdfOverride; // 0x0(0x1)
	enum class EFontRasterizationMode SdfOverride; // 0x1(0x1)
	enum class EFontRasterizationMode SdfApproximationOverride; // 0x2(0x1)
};

// Object: ScriptStruct Engine.FontImportOptionsData
// Size: 0xA8 (Inherited: 0x0)
struct FFontImportOptionsData
{
	struct FString FontName; // 0x0(0x10)
	float Height; // 0x10(0x4)
	uint8_t bEnableAntialiasing : 1; // 0x14(0x1), Mask(0x1)
	uint8_t bEnableBold : 1; // 0x14(0x1), Mask(0x2)
	uint8_t bEnableItalic : 1; // 0x14(0x1), Mask(0x4)
	uint8_t bEnableUnderline : 1; // 0x14(0x1), Mask(0x8)
	uint8_t bAlphaOnly : 1; // 0x14(0x1), Mask(0x10)
	uint8_t BitPad_0x14_5 : 3; // 0x14(0x1)
	uint8_t CharacterSet; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FString Chars; // 0x18(0x10)
	struct FString UnicodeRange; // 0x28(0x10)
	struct FString CharsFilePath; // 0x38(0x10)
	struct FString CharsFileWildcard; // 0x48(0x10)
	uint8_t bCreatePrintableOnly : 1; // 0x58(0x1), Mask(0x1)
	uint8_t bIncludeASCIIRange : 1; // 0x58(0x1), Mask(0x2)
	uint8_t BitPad_0x58_2 : 6; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	struct FLinearColor ForegroundColor; // 0x5C(0x10)
	uint8_t bEnableDropShadow : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	int32_t TexturePageWidth; // 0x70(0x4)
	int32_t TexturePageMaxHeight; // 0x74(0x4)
	int32_t XPadding; // 0x78(0x4)
	int32_t YPadding; // 0x7C(0x4)
	int32_t ExtendBoxTop; // 0x80(0x4)
	int32_t ExtendBoxBottom; // 0x84(0x4)
	int32_t ExtendBoxRight; // 0x88(0x4)
	int32_t ExtendBoxLeft; // 0x8C(0x4)
	uint8_t bEnableLegacyMode : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	int32_t Kerning; // 0x94(0x4)
	uint8_t bUseDistanceFieldAlpha : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	int32_t DistanceFieldScaleFactor; // 0x9C(0x4)
	float DistanceFieldScanRadiusScale; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xB0 (Inherited: 0xB0)
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings
{
};

// Object: ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0x90 (Inherited: 0x0)
struct FForceFeedbackChannelDetails
{
	uint8_t bAffectsLeftLarge : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bAffectsLeftSmall : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bAffectsRightLarge : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bAffectsRightSmall : 1; // 0x0(0x1), Mask(0x8)
	uint8_t BitPad_0x0_4 : 4; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FRuntimeFloatCurve Curve; // 0x8(0x88)
};

// Object: ScriptStruct Engine.PredictProjectilePathResult
// Size: 0xB8 (Inherited: 0x0)
struct FPredictProjectilePathResult
{
	struct TArray<struct FPredictProjectilePathPointData> PathData; // 0x0(0x10)
	struct FPredictProjectilePathPointData LastTraceDestination; // 0x10(0x1C)
	struct FHitResult HitResult; // 0x2C(0x88)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct Engine.PredictProjectilePathPointData
// Size: 0x1C (Inherited: 0x0)
struct FPredictProjectilePathPointData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	float Time; // 0x18(0x4)
};

// Object: ScriptStruct Engine.PredictProjectilePathParams
// Size: 0x80 (Inherited: 0x0)
struct FPredictProjectilePathParams
{
	struct FVector StartLocation; // 0x0(0xC)
	struct FVector LaunchVelocity; // 0xC(0xC)
	bool bTraceWithCollision; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float ProjectileRadius; // 0x1C(0x4)
	float MaxSimTime; // 0x20(0x4)
	float MaxMovingDistance; // 0x24(0x4)
	struct FVector InitStartLocation; // 0x28(0xC)
	bool bTraceWithChannel; // 0x34(0x1)
	uint8_t TraceChannel; // 0x35(0x1)
	uint8_t Pad_0x36[0x2]; // 0x36(0x2)
	struct TArray<uint8_t> ObjectTypes; // 0x38(0x10)
	struct TArray<struct FName> OnlyInfluencedActorTags; // 0x48(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x58(0x10)
	float SimFrequency; // 0x68(0x4)
	float OverrideGravityZ; // 0x6C(0x4)
	float HorizontalDeceleration; // 0x70(0x4)
	uint8_t DrawDebugType; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)
	float DrawDebugTime; // 0x78(0x4)
	bool bTraceComplex; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
};

// Object: ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x18 (Inherited: 0x0)
struct FActiveHapticFeedbackEffect
{
	struct UHapticFeedbackEffect_Base* HapticEffect; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0x110 (Inherited: 0x0)
struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve Frequency; // 0x0(0x88)
	struct FRuntimeFloatCurve Amplitude; // 0x88(0x88)
};

// Object: ScriptStruct Engine.ClusterNode
// Size: 0x40 (Inherited: 0x0)
struct FClusterNode
{
	struct FVector BoundMin; // 0x0(0xC)
	int32_t FirstChild; // 0xC(0x4)
	struct FVector BoundMax; // 0x10(0xC)
	int32_t LastChild; // 0x1C(0x4)
	int32_t FirstInstance; // 0x20(0x4)
	int32_t LastInstance; // 0x24(0x4)
	struct FVector MinInstanceScale; // 0x28(0xC)
	struct FVector MaxInstanceScale; // 0x34(0xC)
};

// Object: ScriptStruct Engine.ClusterNode_DEPRECATED
// Size: 0x28 (Inherited: 0x0)
struct FClusterNode_DEPRECATED
{
	struct FVector BoundMin; // 0x0(0xC)
	int32_t FirstChild; // 0xC(0x4)
	struct FVector BoundMax; // 0x10(0xC)
	int32_t LastChild; // 0x1C(0x4)
	int32_t FirstInstance; // 0x20(0x4)
	int32_t LastInstance; // 0x24(0x4)
};

// Object: ScriptStruct Engine.HLODProxyMesh
// Size: 0x30 (Inherited: 0x0)
struct FHLODProxyMesh
{
	struct TLazyObjectPtr<struct ALODActor> LODActor; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UStaticMesh* StaticMesh; // 0x20(0x8)
	struct FName Key; // 0x28(0x8)
};

// Object: ScriptStruct Engine.ImportanceTexture
// Size: 0x50 (Inherited: 0x0)
struct FImportanceTexture
{
	struct FIntPoint Size; // 0x0(0x8)
	int32_t NumMips; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<float> MarginalCDF; // 0x10(0x10)
	struct TArray<float> ConditionalCDF; // 0x20(0x10)
	struct TArray<struct FColor> TextureData; // 0x30(0x10)
	struct TWeakObjectPtr<struct UTexture2D> Texture; // 0x40(0x8)
	uint8_t Weighting; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x78 (Inherited: 0x0)
struct FComponentOverrideRecord
{
	struct UObject* ComponentClass; // 0x0(0x8)
	struct UActorComponent* ComponentTemplate; // 0x8(0x8)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30(0x48)
};

// Object: ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x0)
struct FComponentKey
{
	struct UObject* OwnerClass; // 0x0(0x8)
	struct FName SCSVariableName; // 0x8(0x8)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// Object: ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x4 (Inherited: 0x0)
struct FBlueprintInputDelegateBinding
{
	uint8_t bConsumeInput : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bExecuteWhenPaused : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverrideParentBinding : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x18 (Inherited: 0x4)
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding
{
	struct FName InputActionName; // 0x4(0x8)
	uint8_t InputKeyEvent; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName FunctionNameToBind; // 0x10(0x8)
};

// Object: ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x14 (Inherited: 0x4)
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding
{
	struct FName InputAxisName; // 0x4(0x8)
	struct FName FunctionNameToBind; // 0xC(0x8)
};

// Object: ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x28 (Inherited: 0x4)
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding
{
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FKey AxisKey; // 0x8(0x18)
	struct FName FunctionNameToBind; // 0x20(0x8)
};

// Object: ScriptStruct Engine.CachedKeyToActionInfo
// Size: 0x70 (Inherited: 0x0)
struct FCachedKeyToActionInfo
{
	struct UPlayerInput* PlayerInput; // 0x0(0x8)
	uint8_t Pad_0x8[0x68]; // 0x8(0x68)
};

// Object: ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x4)
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding
{
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FInputChord InputChord; // 0x8(0x20)
	uint8_t InputKeyEvent; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FName FunctionNameToBind; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0xC (Inherited: 0x4)
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding
{
	uint8_t InputKeyEvent; // 0x1(0x1)
	struct FName FunctionNameToBind; // 0x4(0x8)
};

// Object: ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// Size: 0x140 (Inherited: 0xA8)
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData
{
	struct UStaticMesh* StaticMesh; // 0xA8(0x8)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xB0(0x40)
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xF0(0x10)
	struct TArray<float> PerInstanceSMCustomData; // 0x100(0x10)
	uint8_t Pad_0x110[0x20]; // 0x110(0x20)
	int32_t InstancingRandomSeed; // 0x130(0x4)
	uint8_t Pad_0x134[0xC]; // 0x134(0xC)
};

// Object: ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x40 (Inherited: 0x0)
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix Transform; // 0x0(0x40)
};

// Object: ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// Size: 0x40 (Inherited: 0x0)
struct FInstancedStaticMeshLightMapInstanceData
{
	struct FTransform Transform; // 0x0(0x30)
	struct TArray<struct FGuid> MapBuildDataIds; // 0x30(0x10)
};

// Object: ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x8 (Inherited: 0x0)
struct FInstancedStaticMeshMappingInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.IntegralCurve
// Size: 0x80 (Inherited: 0x68)
struct FIntegralCurve : FIndexedCurve
{
	struct TArray<struct FIntegralKey> Keys; // 0x68(0x10)
	int32_t DefaultValue; // 0x78(0x4)
	bool bUseDefaultValueBeforeFirstKey; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
};

// Object: ScriptStruct Engine.IntegralKey
// Size: 0x8 (Inherited: 0x0)
struct FIntegralKey
{
	float Time; // 0x0(0x4)
	int32_t Value; // 0x4(0x4)
};

// Object: ScriptStruct Engine.CurveEdTab
// Size: 0x30 (Inherited: 0x0)
struct FCurveEdTab
{
	struct FString TabName; // 0x0(0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10(0x10)
	float ViewStartInput; // 0x20(0x4)
	float ViewEndInput; // 0x24(0x4)
	float ViewStartOutput; // 0x28(0x4)
	float ViewEndOutput; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.CurveEdEntry
// Size: 0x38 (Inherited: 0x0)
struct FCurveEdEntry
{
	struct UObject* CurveObject; // 0x0(0x8)
	struct FColor CurveColor; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString CurveName; // 0x10(0x10)
	int32_t bHideCurve; // 0x20(0x4)
	int32_t bColorCurve; // 0x24(0x4)
	int32_t bFloatingPointColorCurve; // 0x28(0x4)
	int32_t bClamp; // 0x2C(0x4)
	float ClampLow; // 0x30(0x4)
	float ClampHigh; // 0x34(0x4)
};

// Object: ScriptStruct Engine.InterpEdSelKey
// Size: 0x18 (Inherited: 0x0)
struct FInterpEdSelKey
{
	struct UInterpGroup* Group; // 0x0(0x8)
	struct UInterpTrack* Track; // 0x8(0x8)
	int32_t KeyIndex; // 0x10(0x4)
	float UnsnappedPosition; // 0x14(0x4)
};

// Object: ScriptStruct Engine.CameraPreviewInfo
// Size: 0x30 (Inherited: 0x0)
struct FCameraPreviewInfo
{
	struct APawn* PawnClass; // 0x0(0x8)
	struct UAnimSequence* AnimSeq; // 0x8(0x8)
	struct FVector Location; // 0x10(0xC)
	struct FRotator Rotation; // 0x1C(0xC)
	struct APawn* PawnInst; // 0x28(0x8)
};

// Object: ScriptStruct Engine.SubTrackGroup
// Size: 0x28 (Inherited: 0x0)
struct FSubTrackGroup
{
	struct FString GroupName; // 0x0(0x10)
	struct TArray<int32_t> TrackIndices; // 0x10(0x10)
	uint8_t bIsCollapsed : 1; // 0x20(0x1), Mask(0x1)
	uint8_t bIsSelected : 1; // 0x20(0x1), Mask(0x2)
	uint8_t BitPad_0x20_2 : 6; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct Engine.SupportedSubTrackInfo
// Size: 0x20 (Inherited: 0x0)
struct FSupportedSubTrackInfo
{
	struct UInterpTrack* SupportedClass; // 0x0(0x8)
	struct FString SubTrackName; // 0x8(0x10)
	int32_t GroupIndex; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.AnimControlTrackKey
// Size: 0x20 (Inherited: 0x0)
struct FAnimControlTrackKey
{
	float StartTime; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UAnimSequence* AnimSeq; // 0x8(0x8)
	float AnimStartOffset; // 0x10(0x4)
	float AnimEndOffset; // 0x14(0x4)
	float AnimPlayRate; // 0x18(0x4)
	uint8_t bLooping : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t bReverse : 1; // 0x1C(0x1), Mask(0x2)
	uint8_t BitPad_0x1C_2 : 6; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.BoolTrackKey
// Size: 0x8 (Inherited: 0x0)
struct FBoolTrackKey
{
	float Time; // 0x0(0x4)
	uint8_t Value : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.DirectorTrackCut
// Size: 0x14 (Inherited: 0x0)
struct FDirectorTrackCut
{
	float Time; // 0x0(0x4)
	float TransitionTime; // 0x4(0x4)
	struct FName TargetCamGroup; // 0x8(0x8)
	int32_t ShotNumber; // 0x10(0x4)
};

// Object: ScriptStruct Engine.EventTrackKey
// Size: 0xC (Inherited: 0x0)
struct FEventTrackKey
{
	float Time; // 0x0(0x4)
	struct FName EventName; // 0x4(0x8)
};

// Object: ScriptStruct Engine.InterpLookupTrack
// Size: 0x10 (Inherited: 0x0)
struct FInterpLookupTrack
{
	struct TArray<struct FInterpLookupPoint> Points; // 0x0(0x10)
};

// Object: ScriptStruct Engine.InterpLookupPoint
// Size: 0xC (Inherited: 0x0)
struct FInterpLookupPoint
{
	struct FName GroupName; // 0x0(0x8)
	float Time; // 0x8(0x4)
};

// Object: ScriptStruct Engine.ParticleReplayTrackKey
// Size: 0xC (Inherited: 0x0)
struct FParticleReplayTrackKey
{
	float Time; // 0x0(0x4)
	float Duration; // 0x4(0x4)
	int32_t ClipIDNumber; // 0x8(0x4)
};

// Object: ScriptStruct Engine.SoundTrackKey
// Size: 0x18 (Inherited: 0x0)
struct FSoundTrackKey
{
	float Time; // 0x0(0x4)
	float Volume; // 0x4(0x4)
	float Pitch; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct USoundBase* Sound; // 0x10(0x8)
};

// Object: ScriptStruct Engine.ToggleTrackKey
// Size: 0x8 (Inherited: 0x0)
struct FToggleTrackKey
{
	float Time; // 0x0(0x4)
	uint8_t ToggleAction; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.VisibilityTrackKey
// Size: 0x8 (Inherited: 0x0)
struct FVisibilityTrackKey
{
	float Time; // 0x0(0x4)
	uint8_t Action; // 0x4(0x1)
	uint8_t ActiveCondition; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
};

// Object: ScriptStruct Engine.VectorSpringState
// Size: 0x18 (Inherited: 0x0)
struct FVectorSpringState
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct Engine.FloatSpringState
// Size: 0x8 (Inherited: 0x0)
struct FFloatSpringState
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.DrawToRenderTargetContext
// Size: 0x10 (Inherited: 0x0)
struct FDrawToRenderTargetContext
{
	struct UTextureRenderTarget2D* RenderTarget; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.LatentActionManager
// Size: 0x60 (Inherited: 0x0)
struct FLatentActionManager
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct Engine.LayerActorStats
// Size: 0x10 (Inherited: 0x0)
struct FLayerActorStats
{
	struct UObject* Type; // 0x0(0x8)
	int32_t Total; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// Size: 0x38 (Inherited: 0x0)
struct FReplicatedStaticActorDestructionInfo
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
	struct UObject* ObjClass; // 0x30(0x8)
};

// Object: ScriptStruct Engine.LevelSimplificationDetails
// Size: 0x12C (Inherited: 0x0)
struct FLevelSimplificationDetails
{
	bool bCreatePackagePerAsset; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DetailsPercentage; // 0x4(0x4)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x8(0x88)
	bool bOverrideLandscapeExportLOD; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	int32_t LandscapeExportLOD; // 0x94(0x4)
	struct FMaterialProxySettings LandscapeMaterialSettings; // 0x98(0x88)
	bool bBakeFoliageToLandscape; // 0x120(0x1)
	bool bBakeGrassToLandscape; // 0x121(0x1)
	bool bGenerateMeshNormalMap; // 0x122(0x1)
	bool bGenerateMeshMetallicMap; // 0x123(0x1)
	bool bGenerateMeshRoughnessMap; // 0x124(0x1)
	bool bGenerateMeshSpecularMap; // 0x125(0x1)
	bool bGenerateLandscapeNormalMap; // 0x126(0x1)
	bool bGenerateLandscapeMetallicMap; // 0x127(0x1)
	bool bGenerateLandscapeRoughnessMap; // 0x128(0x1)
	bool bGenerateLandscapeSpecularMap; // 0x129(0x1)
	uint8_t Pad_0x12A[0x2]; // 0x12A(0x2)
};

// Object: ScriptStruct Engine.MaterialProxySettings
// Size: 0x88 (Inherited: 0x0)
struct FMaterialProxySettings
{
	struct FIntPoint TextureSize; // 0x0(0x8)
	float GutterSpace; // 0x8(0x4)
	float MetallicConstant; // 0xC(0x4)
	float RoughnessConstant; // 0x10(0x4)
	float AnisotropyConstant; // 0x14(0x4)
	float SpecularConstant; // 0x18(0x4)
	float OpacityConstant; // 0x1C(0x4)
	float OpacityMaskConstant; // 0x20(0x4)
	float AmbientOcclusionConstant; // 0x24(0x4)
	uint8_t TextureSizingType; // 0x28(0x1)
	uint8_t MaterialMergeType; // 0x29(0x1)
	uint8_t BlendMode; // 0x2A(0x1)
	uint8_t bAllowTwoSidedMaterial : 1; // 0x2B(0x1), Mask(0x1)
	uint8_t bNormalMap : 1; // 0x2B(0x1), Mask(0x2)
	uint8_t bTangentMap : 1; // 0x2B(0x1), Mask(0x4)
	uint8_t bMetallicMap : 1; // 0x2B(0x1), Mask(0x8)
	uint8_t bRoughnessMap : 1; // 0x2B(0x1), Mask(0x10)
	uint8_t bAnisotropyMap : 1; // 0x2B(0x1), Mask(0x20)
	uint8_t bSpecularMap : 1; // 0x2B(0x1), Mask(0x40)
	uint8_t bEmissiveMap : 1; // 0x2B(0x1), Mask(0x80)
	uint8_t bOpacityMap : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t bOpacityMaskMap : 1; // 0x2C(0x1), Mask(0x2)
	uint8_t bAmbientOcclusionMap : 1; // 0x2C(0x1), Mask(0x4)
	uint8_t BitPad_0x2C_3 : 5; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct FIntPoint DiffuseTextureSize; // 0x30(0x8)
	struct FIntPoint NormalTextureSize; // 0x38(0x8)
	struct FIntPoint TangentTextureSize; // 0x40(0x8)
	struct FIntPoint MetallicTextureSize; // 0x48(0x8)
	struct FIntPoint RoughnessTextureSize; // 0x50(0x8)
	struct FIntPoint AnisotropyTextureSize; // 0x58(0x8)
	struct FIntPoint SpecularTextureSize; // 0x60(0x8)
	struct FIntPoint EmissiveTextureSize; // 0x68(0x8)
	struct FIntPoint OpacityTextureSize; // 0x70(0x8)
	struct FIntPoint OpacityMaskTextureSize; // 0x78(0x8)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x8)
};

// Object: ScriptStruct Engine.StreamableTextureInstance
// Size: 0x28 (Inherited: 0x0)
struct FStreamableTextureInstance
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct Engine.DynamicTextureInstance
// Size: 0x38 (Inherited: 0x28)
struct FDynamicTextureInstance : FStreamableTextureInstance
{
	struct UTexture2D* Texture; // 0x28(0x8)
	bool bAttached; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float OriginalRadius; // 0x34(0x4)
};

// Object: ScriptStruct Engine.LevelSolarDecorationLightMapGUIDArray
// Size: 0x20 (Inherited: 0x0)
struct FLevelSolarDecorationLightMapGUIDArray
{
	struct TArray<struct FGuid> MapBuildDataIdArray; // 0x0(0x10)
	struct TArray<uint32_t> LODNumArray; // 0x10(0x10)
};

// Object: ScriptStruct Engine.PrecomputedLightInstanceData
// Size: 0x100 (Inherited: 0xA8)
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct FTransform Transform; // 0xB0(0x30)
	struct FGuid LightGuid; // 0xE0(0x10)
	int32_t PreviewShadowMapChannel; // 0xF0(0x4)
	uint8_t Pad_0xF4[0xC]; // 0xF4(0xC)
};

// Object: ScriptStruct Engine.ConvexClipVolume
// Size: 0x10 (Inherited: 0x0)
struct FConvexClipVolume
{
	struct TArray<struct FPlane> Planes; // 0x0(0x10)
};

// Object: ScriptStruct Engine.BatchedPoint
// Size: 0x28 (Inherited: 0x0)
struct FBatchedPoint
{
	struct FVector Position; // 0x0(0xC)
	struct FLinearColor Color; // 0xC(0x10)
	float PointSize; // 0x1C(0x4)
	float RemainingLifeTime; // 0x20(0x4)
	uint8_t DepthPriority; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct Engine.BatchedLine
// Size: 0x34 (Inherited: 0x0)
struct FBatchedLine
{
	struct FVector Start; // 0x0(0xC)
	struct FVector End; // 0xC(0xC)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x4)
	float RemainingLifeTime; // 0x2C(0x4)
	uint8_t DepthPriority; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
};

// Object: ScriptStruct Engine.ClientReceiveData
// Size: 0x40 (Inherited: 0x0)
struct FClientReceiveData
{
	struct APlayerController* LocalPC; // 0x0(0x8)
	struct FName MessageType; // 0x8(0x8)
	int32_t MessageIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString MessageString; // 0x18(0x10)
	struct APlayerState* RelatedPlayerState_1; // 0x28(0x8)
	struct APlayerState* RelatedPlayerState_2; // 0x30(0x8)
	struct UObject* OptionalObject; // 0x38(0x8)
};

// Object: ScriptStruct Engine.ParameterGroupData
// Size: 0x18 (Inherited: 0x0)
struct FParameterGroupData
{
	struct FString GroupName; // 0x0(0x10)
	int32_t GroupSortPriority; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 (Inherited: 0x0)
struct FMaterialSpriteElement
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x8(0x8)
	uint8_t bSizeIsInScreenSpace : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float BaseSizeX; // 0x14(0x4)
	float BaseSizeY; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x8)
};

// Object: ScriptStruct Engine.MaterialCachedExpressionData
// Size: 0x228 (Inherited: 0x0)
struct FMaterialCachedExpressionData
{
	struct FMaterialCachedParameters Parameters; // 0x0(0x1A0)
	struct TArray<struct UObject*> ReferencedTextures; // 0x1A0(0x10)
	struct TArray<struct FMaterialFunctionInfo> FunctionInfos; // 0x1B0(0x10)
	struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x1C0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayers; // 0x1D0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayerBlends; // 0x1E0(0x10)
	struct TArray<struct ULandscapeGrassType*> GrassTypes; // 0x1F0(0x10)
	struct TArray<struct FName> DynamicParameterNames; // 0x200(0x10)
	struct TArray<bool> QualityLevelsUsed; // 0x210(0x10)
	uint8_t bHasRuntimeVirtualTextureOutput : 1; // 0x220(0x1), Mask(0x1)
	uint8_t bHasSceneColor : 1; // 0x220(0x1), Mask(0x2)
	uint8_t BitPad_0x220_2 : 6; // 0x220(0x1)
	uint8_t Pad_0x221[0x7]; // 0x221(0x7)
};

// Object: ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 (Inherited: 0x0)
struct FMaterialParameterCollectionInfo
{
	struct FGuid StateId; // 0x0(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x8)
};

// Object: ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 (Inherited: 0x0)
struct FMaterialFunctionInfo
{
	struct FGuid StateId; // 0x0(0x10)
	struct UMaterialFunctionInterface* Function; // 0x10(0x8)
};

// Object: ScriptStruct Engine.MaterialCachedParameters
// Size: 0x1A0 (Inherited: 0x0)
struct FMaterialCachedParameters
{
	struct FMaterialCachedParameterEntry Entries[0x5]; // 0x0(0x140)
	struct TArray<float> ScalarValues; // 0x140(0x10)
	struct TArray<struct FLinearColor> VectorValues; // 0x150(0x10)
	struct TArray<struct UTexture*> TextureValues; // 0x160(0x10)
	struct TArray<struct UFont*> FontValues; // 0x170(0x10)
	struct TArray<int32_t> FontPageValues; // 0x180(0x10)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190(0x10)
};

// Object: ScriptStruct Engine.MaterialCachedParameterEntry
// Size: 0x40 (Inherited: 0x0)
struct FMaterialCachedParameterEntry
{
	struct TArray<uint64_t> NameHashes; // 0x0(0x10)
	struct TArray<struct FMaterialParameterInfo> ParameterInfos; // 0x10(0x10)
	struct TArray<struct FGuid> ExpressionGuids; // 0x20(0x10)
	struct TArray<bool> Overrides; // 0x30(0x10)
};

// Object: ScriptStruct Engine.MaterialParameterInfo
// Size: 0x10 (Inherited: 0x0)
struct FMaterialParameterInfo
{
	struct FName Name; // 0x0(0x8)
	uint8_t Association; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t Index; // 0xC(0x4)
};

// Object: ScriptStruct Engine.ParameterChannelNames
// Size: 0x60 (Inherited: 0x0)
struct FParameterChannelNames
{
	struct FText R; // 0x0(0x18)
	struct FText G; // 0x18(0x18)
	struct FText B; // 0x30(0x18)
	struct FText A; // 0x48(0x18)
};

// Object: ScriptStruct Engine.CustomDefine
// Size: 0x20 (Inherited: 0x0)
struct FCustomDefine
{
	struct FString DefineName; // 0x0(0x10)
	struct FString DefineValue; // 0x10(0x10)
};

// Object: ScriptStruct Engine.CustomOutput
// Size: 0xC (Inherited: 0x0)
struct FCustomOutput
{
	struct FName OutputName; // 0x0(0x8)
	uint8_t OutputType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.CustomInput
// Size: 0x1C (Inherited: 0x0)
struct FCustomInput
{
	struct FName InputName; // 0x0(0x8)
	struct FExpressionInput Input; // 0x8(0xC)
	uint8_t Pad_0x14[0x8]; // 0x14(0x8)
};

// Object: ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x20 (Inherited: 0x0)
struct FFunctionExpressionOutput
{
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0(0x8)
	struct FGuid ExpressionOutputId; // 0x8(0x10)
	struct FExpressionOutput Output; // 0x18(0x8)
};

// Object: ScriptStruct Engine.FunctionExpressionInput
// Size: 0x30 (Inherited: 0x0)
struct FFunctionExpressionInput
{
	struct UMaterialExpressionFunctionInput* ExpressionInput; // 0x0(0x8)
	struct FGuid ExpressionInputId; // 0x8(0x10)
	struct FExpressionInput Input; // 0x18(0xC)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
};

// Object: ScriptStruct Engine.FontParameterValue
// Size: 0x30 (Inherited: 0x0)
struct FFontParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct UFont* FontValue; // 0x10(0x8)
	int32_t FontPage; // 0x18(0x4)
	struct FGuid ExpressionGUID; // 0x1C(0x10)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// Size: 0x28 (Inherited: 0x0)
struct FRuntimeVirtualTextureParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct URuntimeVirtualTexture* ParameterValue; // 0x10(0x8)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// Object: ScriptStruct Engine.TextureParameterValue
// Size: 0x28 (Inherited: 0x0)
struct FTextureParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct UTexture* ParameterValue; // 0x10(0x8)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// Object: ScriptStruct Engine.VectorParameterValue
// Size: 0x30 (Inherited: 0x0)
struct FVectorParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FGuid ExpressionGUID; // 0x20(0x10)
};

// Object: ScriptStruct Engine.ScalarParameterValue
// Size: 0x24 (Inherited: 0x0)
struct FScalarParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	float ParameterValue; // 0x10(0x4)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// Object: ScriptStruct Engine.ScalarParameterAtlasInstanceData
// Size: 0x58 (Inherited: 0x0)
struct FScalarParameterAtlasInstanceData
{
	bool bIsUsedAsAtlasPosition; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8(0x28)
	struct TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30(0x28)
};

// Object: ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x10 (Inherited: 0x0)
struct FMaterialInstanceBasePropertyOverrides
{
	uint8_t bOverride_OpacityMaskClipValue : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_BlendMode : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverride_ShadingModel : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bOverride_DitheredLODTransition : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bOverride_CastDynamicShadowAsMasked : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bOverride_TwoSided : 1; // 0x0(0x1), Mask(0x20)
	uint8_t TwoSided : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bOverride_AllowTwosidedFallback : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bAllowTwosidedFallback : 1; // 0x1(0x1), Mask(0x1)
	uint8_t DitheredLODTransition : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bCastDynamicShadowAsMasked : 1; // 0x1(0x1), Mask(0x4)
	uint8_t BitPad_0x1_3 : 5; // 0x1(0x1)
	uint8_t BlendMode; // 0x2(0x1)
	uint8_t ShadingModel; // 0x3(0x1)
	float OpacityMaskClipValue; // 0x4(0x4)
	uint8_t bOverride_ShadingRate : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t ShadingRate; // 0x9(0x1)
	uint8_t bOverride_SupportMobileDynamicPointLight : 1; // 0xA(0x1), Mask(0x1)
	uint8_t SupportMobileDynamicPointLight : 1; // 0xA(0x1), Mask(0x2)
	uint8_t bOverride_SupportDynamicInstance : 1; // 0xA(0x1), Mask(0x4)
	uint8_t SupportDynamicInstance : 1; // 0xA(0x1), Mask(0x8)
	uint8_t bOverride_HasStaticLightingData : 1; // 0xA(0x1), Mask(0x10)
	uint8_t HasStaticLightingData : 1; // 0xA(0x1), Mask(0x20)
	uint8_t bOverride_HasCustomPrimitiveData : 1; // 0xA(0x1), Mask(0x40)
	uint8_t HasCustomPrimitiveData : 1; // 0xA(0x1), Mask(0x80)
	uint8_t bOverride_SupportGpuTrailInterpolation : 1; // 0xB(0x1), Mask(0x1)
	uint8_t SupportGpuTrailInterpolation : 1; // 0xB(0x1), Mask(0x2)
	uint8_t bOverride_FinalOpaqueStage : 1; // 0xB(0x1), Mask(0x4)
	uint8_t FinalOpaqueStage : 1; // 0xB(0x1), Mask(0x8)
	uint8_t bOverride_OpaqueSortPriority : 1; // 0xB(0x1), Mask(0x10)
	uint8_t BitPad_0xB_5 : 3; // 0xB(0x1)
	uint8_t OpaqueSortPriority; // 0xC(0x1)
	uint8_t bOverride_MainPassStencilWriteEnable : 1; // 0xD(0x1), Mask(0x1)
	uint8_t MainPassStencilWriteEnable : 1; // 0xD(0x1), Mask(0x2)
	uint8_t bOverride_MainPassStencilRefValue : 1; // 0xD(0x1), Mask(0x4)
	uint8_t BitPad_0xD_3 : 5; // 0xD(0x1)
	uint8_t MainPassStencilRefValue; // 0xE(0x1)
	uint8_t bOverride_ForceD3DHighMaterialQuality : 1; // 0xF(0x1), Mask(0x1)
	uint8_t ForceD3DHighMaterialQuality : 1; // 0xF(0x1), Mask(0x2)
	uint8_t bOverride_DisableTAAByOpacity : 1; // 0xF(0x1), Mask(0x4)
	uint8_t DisableTAAByOpacity : 1; // 0xF(0x1), Mask(0x8)
	uint8_t bOverride_SupportRenderAfterUpscale : 1; // 0xF(0x1), Mask(0x10)
	uint8_t bSupportRenderAfterUpscale : 1; // 0xF(0x1), Mask(0x20)
	uint8_t BitPad_0xF_6 : 2; // 0xF(0x1)
};

// Object: ScriptStruct Engine.MaterialTextureInfo
// Size: 0x10 (Inherited: 0x0)
struct FMaterialTextureInfo
{
	float SamplingScale; // 0x0(0x4)
	int32_t UVChannelIndex; // 0x4(0x4)
	struct FName TextureName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x10 (Inherited: 0x0)
struct FLightmassMaterialInterfaceSettings
{
	float EmissiveBoost; // 0x0(0x4)
	float DiffuseBoost; // 0x4(0x4)
	float ExportResolutionScale; // 0x8(0x4)
	uint8_t bCastShadowAsMasked : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bOverrideCastShadowAsMasked : 1; // 0xC(0x1), Mask(0x2)
	uint8_t bOverrideEmissiveBoost : 1; // 0xC(0x1), Mask(0x4)
	uint8_t bOverrideDiffuseBoost : 1; // 0xC(0x1), Mask(0x8)
	uint8_t bOverrideExportResolutionScale : 1; // 0xC(0x1), Mask(0x10)
	uint8_t BitPad_0xC_5 : 3; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.MaterialLayersFunctions
// Size: 0x40 (Inherited: 0x0)
struct FMaterialLayersFunctions
{
	struct TArray<struct UMaterialFunctionInterface*> Layers; // 0x0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> Blends; // 0x10(0x10)
	struct TArray<bool> LayerStates; // 0x20(0x10)
	struct FString KeyString; // 0x30(0x10)
};

// Object: ScriptStruct Engine.CollectionParameterBase
// Size: 0x18 (Inherited: 0x0)
struct FCollectionParameterBase
{
	struct FName ParameterName; // 0x0(0x8)
	struct FGuid ID; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CollectionVectorParameter
// Size: 0x28 (Inherited: 0x18)
struct FCollectionVectorParameter : FCollectionParameterBase
{
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// Object: ScriptStruct Engine.CollectionScalarParameter
// Size: 0x1C (Inherited: 0x18)
struct FCollectionScalarParameter : FCollectionParameterBase
{
	float DefaultValue; // 0x18(0x4)
};

// Object: ScriptStruct Engine.InterpGroupActorInfo
// Size: 0x18 (Inherited: 0x0)
struct FInterpGroupActorInfo
{
	struct FName ObjectName; // 0x0(0x8)
	struct TArray<struct AActor*> Actors; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CameraCutInfo
// Size: 0x10 (Inherited: 0x0)
struct FCameraCutInfo
{
	struct FVector Location; // 0x0(0xC)
	float Timestamp; // 0xC(0x4)
};

// Object: ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x0)
struct FMemberReference
{
	struct UObject* MemberParent; // 0x0(0x8)
	struct FString MemberScope; // 0x8(0x10)
	struct FName MemberName; // 0x18(0x8)
	struct FGuid MemberGuid; // 0x20(0x10)
	bool bSelfContext; // 0x30(0x1)
	bool bWasDeprecated; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
};

// Object: ScriptStruct Engine.MeshInstancingSettings
// Size: 0x18 (Inherited: 0x0)
struct FMeshInstancingSettings
{
	struct AActor* ActorClassToUse; // 0x0(0x8)
	int32_t InstanceReplacementThreshold; // 0x8(0x4)
	enum class EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xC(0x1)
	bool bSkipMeshesWithVertexColors; // 0xD(0x1)
	bool bUseHLODVolumes; // 0xE(0x1)
	uint8_t Pad_0xF[0x1]; // 0xF(0x1)
	struct UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10(0x8)
};

// Object: ScriptStruct Engine.MeshMergingSettings
// Size: 0xA8 (Inherited: 0x0)
struct FMeshMergingSettings
{
	int32_t TargetLightMapResolution; // 0x0(0x4)
	enum class EUVOutput OutputUVs[0x8]; // 0x4(0x8)
	struct FMaterialProxySettings MaterialSettings; // 0xC(0x88)
	int32_t GutterSize; // 0x94(0x4)
	int32_t SpecificLOD; // 0x98(0x4)
	enum class EMeshLODSelectionType LODSelectionType; // 0x9C(0x1)
	uint8_t bGenerateLightMapUV : 1; // 0x9D(0x1), Mask(0x1)
	uint8_t bComputedLightMapResolution : 1; // 0x9D(0x1), Mask(0x2)
	uint8_t bPivotPointAtZero : 1; // 0x9D(0x1), Mask(0x4)
	uint8_t bMergePhysicsData : 1; // 0x9D(0x1), Mask(0x8)
	uint8_t bMergeMaterials : 1; // 0x9D(0x1), Mask(0x10)
	uint8_t bCreateMergedMaterial : 1; // 0x9D(0x1), Mask(0x20)
	uint8_t bBakeVertexDataToMesh : 1; // 0x9D(0x1), Mask(0x40)
	uint8_t bUseVertexDataForBakingMaterial : 1; // 0x9D(0x1), Mask(0x80)
	uint8_t bUseTextureBinning : 1; // 0x9E(0x1), Mask(0x1)
	uint8_t bReuseMeshLightmapUVs : 1; // 0x9E(0x1), Mask(0x2)
	uint8_t bMergeEquivalentMaterials : 1; // 0x9E(0x1), Mask(0x4)
	uint8_t bUseLandscapeCulling : 1; // 0x9E(0x1), Mask(0x8)
	uint8_t bUseLandscapeRoadMode : 1; // 0x9E(0x1), Mask(0x10)
	uint8_t bAutoPlacingMergedRoad : 1; // 0x9E(0x1), Mask(0x20)
	uint8_t bIncludeImposters : 1; // 0x9E(0x1), Mask(0x40)
	uint8_t bAllowDistanceField : 1; // 0x9E(0x1), Mask(0x80)
	uint8_t Pad_0x9F[0x1]; // 0x9F(0x1)
	int32_t LandscapeRoadSplitFactor; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: ScriptStruct Engine.MeshProxySettings
// Size: 0xA8 (Inherited: 0x0)
struct FMeshProxySettings
{
	int32_t ScreenSize; // 0x0(0x4)
	float VoxelSize; // 0x4(0x4)
	struct FMaterialProxySettings MaterialSettings; // 0x8(0x88)
	float MergeDistance; // 0x90(0x4)
	struct FColor UnresolvedGeometryColor; // 0x94(0x4)
	float MaxRayCastDist; // 0x98(0x4)
	float HardAngleThreshold; // 0x9C(0x4)
	int32_t LightMapResolution; // 0xA0(0x4)
	uint8_t NormalCalculationMethod; // 0xA4(0x1)
	uint8_t LandscapeCullingPrecision; // 0xA5(0x1)
	uint8_t bCalculateCorrectLODModel : 1; // 0xA6(0x1), Mask(0x1)
	uint8_t bOverrideVoxelSize : 1; // 0xA6(0x1), Mask(0x2)
	uint8_t bOverrideTransferDistance : 1; // 0xA6(0x1), Mask(0x4)
	uint8_t bUseHardAngleThreshold : 1; // 0xA6(0x1), Mask(0x8)
	uint8_t bComputeLightMapResolution : 1; // 0xA6(0x1), Mask(0x10)
	uint8_t bRecalculateNormals : 1; // 0xA6(0x1), Mask(0x20)
	uint8_t bUseLandscapeCulling : 1; // 0xA6(0x1), Mask(0x40)
	uint8_t bAllowAdjacency : 1; // 0xA6(0x1), Mask(0x80)
	uint8_t bAllowDistanceField : 1; // 0xA7(0x1), Mask(0x1)
	uint8_t bReuseMeshLightmapUVs : 1; // 0xA7(0x1), Mask(0x2)
	uint8_t bCreateCollision : 1; // 0xA7(0x1), Mask(0x4)
	uint8_t bAllowVertexColors : 1; // 0xA7(0x1), Mask(0x8)
	uint8_t bGenerateLightmapUVs : 1; // 0xA7(0x1), Mask(0x10)
	uint8_t BitPad_0xA7_5 : 3; // 0xA7(0x1)
};

// Object: ScriptStruct Engine.MeshReductionSettings
// Size: 0x24 (Inherited: 0x0)
struct FMeshReductionSettings
{
	float PercentTriangles; // 0x0(0x4)
	float PercentVertices; // 0x4(0x4)
	float MaxDeviation; // 0x8(0x4)
	float PixelError; // 0xC(0x4)
	float WeldingThreshold; // 0x10(0x4)
	float HardAngleThreshold; // 0x14(0x4)
	int32_t BaseLODModel; // 0x18(0x4)
	uint8_t SilhouetteImportance; // 0x1C(0x1)
	uint8_t TextureImportance; // 0x1D(0x1)
	uint8_t ShadingImportance; // 0x1E(0x1)
	uint8_t bRecalculateNormals : 1; // 0x1F(0x1), Mask(0x1)
	uint8_t bGenerateUniqueLightmapUVs : 1; // 0x1F(0x1), Mask(0x2)
	uint8_t bKeepSymmetry : 1; // 0x1F(0x1), Mask(0x4)
	uint8_t bVisibilityAided : 1; // 0x1F(0x1), Mask(0x8)
	uint8_t bCullOccluded : 1; // 0x1F(0x1), Mask(0x10)
	uint8_t BitPad_0x1F_5 : 3; // 0x1F(0x1)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20(0x1)
	uint8_t VisibilityAggressiveness; // 0x21(0x1)
	uint8_t VertexColorImportance; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
};

// Object: ScriptStruct Engine.PurchaseInfo
// Size: 0x40 (Inherited: 0x0)
struct FPurchaseInfo
{
	struct FString Identifier; // 0x0(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString DisplayDescription; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// Object: ScriptStruct Engine.NameCurve
// Size: 0x78 (Inherited: 0x68)
struct FNameCurve : FIndexedCurve
{
	struct TArray<struct FNameCurveKey> Keys; // 0x68(0x10)
};

// Object: ScriptStruct Engine.NameCurveKey
// Size: 0xC (Inherited: 0x0)
struct FNameCurveKey
{
	float Time; // 0x0(0x4)
	struct FName Value; // 0x4(0x8)
};

// Object: ScriptStruct Engine.NavDataConfig
// Size: 0x78 (Inherited: 0x30)
struct FNavDataConfig : FNavAgentProperties
{
	struct FName Name; // 0x30(0x8)
	struct FColor Color; // 0x38(0x4)
	struct FVector DefaultQueryExtent; // 0x3C(0xC)
	struct AActor* NavigationDataClass; // 0x48(0x8)
	struct TSoftClassPtr<struct AActor*> NavDataClass; // 0x50(0x28)
};

// Object: ScriptStruct Engine.NavigationLinkBase
// Size: 0x30 (Inherited: 0x0)
struct FNavigationLinkBase
{
	float LeftProjectHeight; // 0x0(0x4)
	float MaxFallDownLength; // 0x4(0x4)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
	float SnapRadius; // 0xC(0x4)
	float SnapHeight; // 0x10(0x4)
	struct FNavAgentSelector SupportedAgents; // 0x14(0x4)
	uint8_t bSupportsAgent0 : 1; // 0x18(0x1), Mask(0x1)
	uint8_t bSupportsAgent1 : 1; // 0x18(0x1), Mask(0x2)
	uint8_t bSupportsAgent2 : 1; // 0x18(0x1), Mask(0x4)
	uint8_t bSupportsAgent3 : 1; // 0x18(0x1), Mask(0x8)
	uint8_t bSupportsAgent4 : 1; // 0x18(0x1), Mask(0x10)
	uint8_t bSupportsAgent5 : 1; // 0x18(0x1), Mask(0x20)
	uint8_t bSupportsAgent6 : 1; // 0x18(0x1), Mask(0x40)
	uint8_t bSupportsAgent7 : 1; // 0x18(0x1), Mask(0x80)
	uint8_t bSupportsAgent8 : 1; // 0x19(0x1), Mask(0x1)
	uint8_t bSupportsAgent9 : 1; // 0x19(0x1), Mask(0x2)
	uint8_t bSupportsAgent10 : 1; // 0x19(0x1), Mask(0x4)
	uint8_t bSupportsAgent11 : 1; // 0x19(0x1), Mask(0x8)
	uint8_t bSupportsAgent12 : 1; // 0x19(0x1), Mask(0x10)
	uint8_t bSupportsAgent13 : 1; // 0x19(0x1), Mask(0x20)
	uint8_t bSupportsAgent14 : 1; // 0x19(0x1), Mask(0x40)
	uint8_t bSupportsAgent15 : 1; // 0x19(0x1), Mask(0x80)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	uint8_t Direction; // 0x1C(0x1)
	uint8_t bUseSnapHeight : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t bSnapToCheapestArea : 1; // 0x1D(0x1), Mask(0x2)
	uint8_t bCustomFlag0 : 1; // 0x1D(0x1), Mask(0x4)
	uint8_t bCustomFlag1 : 1; // 0x1D(0x1), Mask(0x8)
	uint8_t bCustomFlag2 : 1; // 0x1D(0x1), Mask(0x10)
	uint8_t bCustomFlag3 : 1; // 0x1D(0x1), Mask(0x20)
	uint8_t bCustomFlag4 : 1; // 0x1D(0x1), Mask(0x40)
	uint8_t bCustomFlag5 : 1; // 0x1D(0x1), Mask(0x80)
	uint8_t bCustomFlag6 : 1; // 0x1E(0x1), Mask(0x1)
	uint8_t bCustomFlag7 : 1; // 0x1E(0x1), Mask(0x2)
	uint8_t BitPad_0x1E_2 : 6; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	struct UNavAreaBase* AreaClass; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.NavigationSegmentLink
// Size: 0x60 (Inherited: 0x30)
struct FNavigationSegmentLink : FNavigationLinkBase
{
	struct FVector LeftStart; // 0x30(0xC)
	struct FVector LeftEnd; // 0x3C(0xC)
	struct FVector RightStart; // 0x48(0xC)
	struct FVector RightEnd; // 0x54(0xC)
};

// Object: ScriptStruct Engine.NavigationLink
// Size: 0x48 (Inherited: 0x30)
struct FNavigationLink : FNavigationLinkBase
{
	struct FVector Left; // 0x30(0xC)
	struct FVector Right; // 0x3C(0xC)
};

// Object: ScriptStruct Engine.ChannelDefinition
// Size: 0x28 (Inherited: 0x0)
struct FChannelDefinition
{
	struct FName ChannelName; // 0x0(0x8)
	struct FName ClassName; // 0x8(0x8)
	struct UObject* ChannelClass; // 0x10(0x8)
	int32_t StaticChannelIndex; // 0x18(0x4)
	bool bTickOnCreate; // 0x1C(0x1)
	bool bServerOpen; // 0x1D(0x1)
	bool bClientOpen; // 0x1E(0x1)
	bool bInitialServer; // 0x1F(0x1)
	bool bInitialClient; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct Engine.PacketSimulationSettings
// Size: 0x34 (Inherited: 0x0)
struct FPacketSimulationSettings
{
	int32_t PktLoss; // 0x0(0x4)
	int32_t PktLossMaxSize; // 0x4(0x4)
	int32_t PktLossMinSize; // 0x8(0x4)
	int32_t PktOrder; // 0xC(0x4)
	int32_t PktDup; // 0x10(0x4)
	int32_t PktLag; // 0x14(0x4)
	int32_t PktLagVariance; // 0x18(0x4)
	int32_t PktLagMin; // 0x1C(0x4)
	int32_t PktLagMax; // 0x20(0x4)
	int32_t PktIncomingLagMin; // 0x24(0x4)
	int32_t PktIncomingLagMax; // 0x28(0x4)
	int32_t PktIncomingLoss; // 0x2C(0x4)
	int32_t PktJitter; // 0x30(0x4)
};

// Object: ScriptStruct Engine.NetworkEmulationProfileDescription
// Size: 0x20 (Inherited: 0x0)
struct FNetworkEmulationProfileDescription
{
	struct FString ProfileName; // 0x0(0x10)
	struct FString ToolTip; // 0x10(0x10)
};

// Object: ScriptStruct Engine.NodeItem
// Size: 0x40 (Inherited: 0x0)
struct FNodeItem
{
	struct FName ParentName; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
};

// Object: ScriptStruct Engine.ParticleBurst
// Size: 0xC (Inherited: 0x0)
struct FParticleBurst
{
	int32_t Count; // 0x0(0x4)
	int32_t CountLow; // 0x4(0x4)
	float Time; // 0x8(0x4)
};

// Object: ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 (Inherited: 0x0)
struct FParticleRandomSeedInfo
{
	struct FName ParameterName; // 0x0(0x8)
	uint8_t bGetSeedFromInstance : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bInstanceSeedIsIndex : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bResetSeedOnEmitterLooping : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bRandomlySelectSeedArray : 1; // 0x8(0x1), Mask(0x8)
	uint8_t BitPad_0x8_4 : 4; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<int32_t> RandomSeeds; // 0x10(0x10)
};

// Object: ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 (Inherited: 0x0)
struct FParticleCurvePair
{
	struct FString CurveName; // 0x0(0x10)
	struct UObject* CurveObject; // 0x10(0x8)
};

// Object: ScriptStruct Engine.BeamModifierOptions
// Size: 0x4 (Inherited: 0x0)
struct FBeamModifierOptions
{
	uint8_t bModify : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bScale : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bLock : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x28 (Inherited: 0x0)
struct FParticleEvent_GenerateInfo
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Frequency; // 0x4(0x4)
	int32_t ParticleFrequency; // 0x8(0x4)
	uint8_t FirstTimeOnly : 1; // 0xC(0x1), Mask(0x1)
	uint8_t LastTimeOnly : 1; // 0xC(0x1), Mask(0x2)
	uint8_t UseReflectedImpactVector : 1; // 0xC(0x1), Mask(0x4)
	uint8_t bUseOrbitOffset : 1; // 0xC(0x1), Mask(0x8)
	uint8_t BitPad_0xC_4 : 4; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName CustomName; // 0x10(0x8)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18(0x10)
};

// Object: ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x14 (Inherited: 0x0)
struct FLocationBoneSocketInfo
{
	struct FName BoneSocketName; // 0x0(0x8)
	struct FVector Offset; // 0x8(0xC)
};

// Object: ScriptStruct Engine.OrbitOptions
// Size: 0x4 (Inherited: 0x0)
struct FOrbitOptions
{
	uint8_t bProcessDuringSpawn : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bProcessDuringUpdate : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bUseEmitterTime : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x40 (Inherited: 0x0)
struct FEmitterDynamicParameter
{
	struct FName ParamName; // 0x0(0x8)
	uint8_t bUseEmitterTime : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bSpawnTimeOnly : 1; // 0x8(0x1), Mask(0x2)
	uint8_t BitPad_0x8_2 : 6; // 0x8(0x1)
	uint8_t ValueMethod; // 0x9(0x1)
	uint8_t bScaleVelocityByParamValue : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
	struct FRawDistributionFloat ParamValue; // 0x10(0x30)
};

// Object: ScriptStruct Engine.BeamTargetData
// Size: 0xC (Inherited: 0x0)
struct FBeamTargetData
{
	struct FName TargetName; // 0x0(0x8)
	float TargetPercentage; // 0x8(0x4)
};

// Object: ScriptStruct Engine.GPUSpriteResourceData
// Size: 0x160 (Inherited: 0x0)
struct FGPUSpriteResourceData
{
	struct TArray<struct FColor> QuantizedColorSamples; // 0x0(0x10)
	struct TArray<struct FColor> QuantizedMiscSamples; // 0x10(0x10)
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 ColorBias; // 0x40(0x10)
	struct FVector4 MiscScale; // 0x50(0x10)
	struct FVector4 MiscBias; // 0x60(0x10)
	struct FVector4 SimulationAttrCurveScale; // 0x70(0x10)
	struct FVector4 SimulationAttrCurveBias; // 0x80(0x10)
	struct FVector4 SubImageSize; // 0x90(0x10)
	struct FVector4 SizeBySpeed; // 0xA0(0x10)
	struct FVector ConstantAcceleration; // 0xB0(0xC)
	struct FVector OrbitOffsetBase; // 0xBC(0xC)
	struct FVector OrbitOffsetRange; // 0xC8(0xC)
	struct FVector OrbitFrequencyBase; // 0xD4(0xC)
	struct FVector OrbitFrequencyRange; // 0xE0(0xC)
	struct FVector OrbitPhaseBase; // 0xEC(0xC)
	struct FVector OrbitPhaseRange; // 0xF8(0xC)
	float GlobalVectorFieldScale; // 0x104(0x4)
	float GlobalVectorFieldTightness; // 0x108(0x4)
	float PerParticleVectorFieldScale; // 0x10C(0x4)
	float PerParticleVectorFieldBias; // 0x110(0x4)
	float DragCoefficientScale; // 0x114(0x4)
	float DragCoefficientBias; // 0x118(0x4)
	float ResilienceScale; // 0x11C(0x4)
	float ResilienceBias; // 0x120(0x4)
	float CollisionRadiusScale; // 0x124(0x4)
	float CollisionRadiusBias; // 0x128(0x4)
	float CollisionTimeBias; // 0x12C(0x4)
	float CollisionRandomSpread; // 0x130(0x4)
	float CollisionRandomDistribution; // 0x134(0x4)
	float OneMinusFriction; // 0x138(0x4)
	float RotationRateScale; // 0x13C(0x4)
	float CameraMotionBlurAmount; // 0x140(0x4)
	uint8_t ScreenAlignment; // 0x144(0x1)
	uint8_t LockAxisFlag; // 0x145(0x1)
	uint8_t Pad_0x146[0x2]; // 0x146(0x2)
	struct FVector2D PivotOffset; // 0x148(0x8)
	uint8_t bRemoveHMDRoll : 1; // 0x150(0x1), Mask(0x1)
	uint8_t BitPad_0x150_1 : 7; // 0x150(0x1)
	uint8_t Pad_0x151[0x3]; // 0x151(0x3)
	float MinFacingCameraBlendDistance; // 0x154(0x4)
	float MaxFacingCameraBlendDistance; // 0x158(0x4)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
};

// Object: ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x270 (Inherited: 0x0)
struct FGPUSpriteEmitterInfo
{
	struct UParticleModuleRequired* RequiredModule; // 0x0(0x8)
	struct UParticleModuleSpawn* SpawnModule; // 0x8(0x8)
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10(0x8)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xA0(0x20)
	struct FFloatDistribution DragCoefficient; // 0xC0(0x20)
	struct FFloatDistribution PointAttractorStrength; // 0xE0(0x20)
	struct FFloatDistribution Resilience; // 0x100(0x20)
	struct FVector ConstantAcceleration; // 0x120(0xC)
	struct FVector PointAttractorPosition; // 0x12C(0xC)
	float PointAttractorRadiusSq; // 0x138(0x4)
	struct FVector OrbitOffsetBase; // 0x13C(0xC)
	struct FVector OrbitOffsetRange; // 0x148(0xC)
	struct FVector2D InvMaxSize; // 0x154(0x8)
	float InvRotationRateScale; // 0x15C(0x4)
	float MaxLifetime; // 0x160(0x4)
	int32_t MaxParticleCount; // 0x164(0x4)
	uint8_t ScreenAlignment; // 0x168(0x1)
	uint8_t LockAxisFlag; // 0x169(0x1)
	uint8_t bEnableCollision : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t BitPad_0x16A_1 : 7; // 0x16A(0x1)
	uint8_t CollisionMode; // 0x16B(0x1)
	uint8_t bRemoveHMDRoll : 1; // 0x16C(0x1), Mask(0x1)
	uint8_t BitPad_0x16C_1 : 7; // 0x16C(0x1)
	uint8_t Pad_0x16D[0x3]; // 0x16D(0x3)
	float MinFacingCameraBlendDistance; // 0x170(0x4)
	float MaxFacingCameraBlendDistance; // 0x174(0x4)
	struct FRawDistributionVector DynamicColor; // 0x178(0x48)
	struct FRawDistributionFloat DynamicAlpha; // 0x1C0(0x30)
	struct FRawDistributionVector DynamicColorScale; // 0x1F0(0x48)
	struct FRawDistributionFloat DynamicAlphaScale; // 0x238(0x30)
	uint8_t Pad_0x268[0x8]; // 0x268(0x8)
};

// Object: ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0x70 (Inherited: 0x0)
struct FGPUSpriteLocalVectorFieldInfo
{
	struct UVectorField* Field; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator MinInitialRotation; // 0x40(0xC)
	struct FRotator MaxInitialRotation; // 0x4C(0xC)
	struct FRotator RotationRate; // 0x58(0xC)
	float Intensity; // 0x64(0x4)
	float Tightness; // 0x68(0x4)
	uint8_t bIgnoreComponentTransform : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t bTileX : 1; // 0x6C(0x1), Mask(0x2)
	uint8_t bTileY : 1; // 0x6C(0x1), Mask(0x4)
	uint8_t bTileZ : 1; // 0x6C(0x1), Mask(0x8)
	uint8_t bUseFixDT : 1; // 0x6C(0x1), Mask(0x10)
	uint8_t BitPad_0x6C_5 : 3; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x10 (Inherited: 0x0)
struct FNamedEmitterMaterial
{
	struct FName Name; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// Object: ScriptStruct Engine.LODSoloTrack
// Size: 0x10 (Inherited: 0x0)
struct FLODSoloTrack
{
	struct TArray<uint8_t> SoloEnableSetting; // 0x0(0x10)
};

// Object: ScriptStruct Engine.ParticleSystemLOD
// Size: 0x1 (Inherited: 0x0)
struct FParticleSystemLOD
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x0)
struct FParticleSysParam
{
	struct FName Name; // 0x0(0x8)
	uint8_t ParamType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Scalar; // 0xC(0x4)
	float Scalar_Low; // 0x10(0x4)
	struct FVector Vector; // 0x14(0xC)
	struct FVector Vector_Low; // 0x20(0xC)
	struct FColor Color; // 0x2C(0x4)
	struct AActor* Actor; // 0x30(0x8)
	struct UMaterialInterface* Material; // 0x38(0x8)
	uint8_t Pad_0x40[0x40]; // 0x40(0x40)
};

// Object: ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FParticleSystemWorldManagerTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 (Inherited: 0x0)
struct FParticleSystemReplayFrame
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 (Inherited: 0x0)
struct FParticleEmitterReplayFrame
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.FreezablePerPlatformInt
// Size: 0x4 (Inherited: 0x0)
struct FFreezablePerPlatformInt
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
};

// Object: ScriptStruct Engine.PhysicalAnimationData
// Size: 0x24 (Inherited: 0x0)
struct FPhysicalAnimationData
{
	struct FName BodyName; // 0x0(0x8)
	uint8_t bIsLocalSimulation : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float OrientationStrength; // 0xC(0x4)
	float AngularVelocityStrength; // 0x10(0x4)
	float PositionStrength; // 0x14(0x4)
	float VelocityStrength; // 0x18(0x4)
	float MaxLinearForce; // 0x1C(0x4)
	float MaxAngularForce; // 0x20(0x4)
};

// Object: ScriptStruct Engine.TireFrictionScalePair
// Size: 0x10 (Inherited: 0x0)
struct FTireFrictionScalePair
{
	struct UTireType* TireType; // 0x0(0x8)
	float FrictionScale; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Engine.PhysicalAnimationProfile
// Size: 0x2C (Inherited: 0x0)
struct FPhysicalAnimationProfile
{
	struct FName ProfileName; // 0x0(0x8)
	struct FPhysicalAnimationData PhysicalAnimationData; // 0x8(0x24)
};

// Object: ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size: 0x10C (Inherited: 0x0)
struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties ProfileProperties; // 0x0(0x104)
	struct FName ProfileName; // 0x104(0x8)
};

// Object: ScriptStruct Engine.ChaosPhysicsSettings
// Size: 0x3 (Inherited: 0x0)
struct FChaosPhysicsSettings
{
	enum class EChaosThreadingMode DefaultThreadingModel; // 0x0(0x1)
	enum class EChaosSolverTickMode DedicatedThreadTickMode; // 0x1(0x1)
	enum class EChaosBufferMode DedicatedThreadBufferMode; // 0x2(0x1)
};

// Object: ScriptStruct Engine.PhysicalSurfaceName
// Size: 0xC (Inherited: 0x0)
struct FPhysicalSurfaceName
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Engine.DelegateArray
// Size: 0x10 (Inherited: 0x0)
struct FDelegateArray
{
	struct TArray<struct FDelegate> Delegates; // 0x0(0x10)
};

// Object: ScriptStruct Engine.InputActionSpeechMapping
// Size: 0x10 (Inherited: 0x0)
struct FInputActionSpeechMapping
{
	struct FName ActionName; // 0x0(0x8)
	struct FName SpeechKeyword; // 0x8(0x8)
};

// Object: ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 (Inherited: 0x0)
struct FInputAxisKeyMapping
{
	struct FName AxisName; // 0x0(0x8)
	float Scale; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FKey Key; // 0x10(0x18)
};

// Object: ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x0)
struct FInputActionKeyMapping
{
	struct FName ActionName; // 0x0(0x8)
	uint8_t bShift : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bCtrl : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bAlt : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bCmd : 1; // 0x8(0x1), Mask(0x8)
	uint8_t BitPad_0x8_4 : 4; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FKey Key; // 0x10(0x18)
};

// Object: ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x18 (Inherited: 0x0)
struct FInputAxisConfigEntry
{
	struct FName AxisKeyName; // 0x0(0x8)
	struct FInputAxisProperties AxisProperties; // 0x8(0x10)
};

// Object: ScriptStruct Engine.InputAxisProperties
// Size: 0x10 (Inherited: 0x0)
struct FInputAxisProperties
{
	float DeadZone; // 0x0(0x4)
	float Sensitivity; // 0x4(0x4)
	float Exponent; // 0x8(0x4)
	uint8_t bInvert : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.KeyBind
// Size: 0x30 (Inherited: 0x0)
struct FKeyBind
{
	struct FKey Key; // 0x0(0x18)
	struct FString Command; // 0x18(0x10)
	uint8_t Control : 1; // 0x28(0x1), Mask(0x1)
	uint8_t Shift : 1; // 0x28(0x1), Mask(0x2)
	uint8_t Alt : 1; // 0x28(0x1), Mask(0x4)
	uint8_t Cmd : 1; // 0x28(0x1), Mask(0x8)
	uint8_t bIgnoreCtrl : 1; // 0x28(0x1), Mask(0x10)
	uint8_t bIgnoreShift : 1; // 0x28(0x1), Mask(0x20)
	uint8_t bIgnoreAlt : 1; // 0x28(0x1), Mask(0x40)
	uint8_t bIgnoreCmd : 1; // 0x28(0x1), Mask(0x80)
	uint8_t bDisabled : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

// Object: ScriptStruct Engine.PlayerMuteList
// Size: 0x38 (Inherited: 0x0)
struct FPlayerMuteList
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
	bool bHasVoiceHandshakeCompleted; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t VoiceChannelIdx; // 0x34(0x4)
};

// Object: ScriptStruct Engine.PoseDataContainer
// Size: 0x90 (Inherited: 0x0)
struct FPoseDataContainer
{
	struct TArray<struct FSmartName> PoseNames; // 0x0(0x10)
	struct TArray<struct FName> Tracks; // 0x10(0x10)
	struct TMap<struct FName, int32_t> TrackMap; // 0x20(0x50)
	struct TArray<struct FPoseData> Poses; // 0x70(0x10)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// Object: ScriptStruct Engine.PoseData
// Size: 0x70 (Inherited: 0x0)
struct FPoseData
{
	struct TArray<struct FTransform> LocalSpacePose; // 0x0(0x10)
	struct TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10(0x50)
	struct TArray<float> CurveData; // 0x60(0x10)
};

// Object: ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 (Inherited: 0x0)
struct FPreviewAssetAttachContainer
{
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x0(0x10)
};

// Object: ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x38 (Inherited: 0x0)
struct FPreviewAttachedObjectPair
{
	struct TSoftObjectPtr<UObject> AttachedObject; // 0x0(0x28)
	struct UObject* Object; // 0x28(0x8)
	struct FName AttachedTo; // 0x30(0x8)
};

// Object: ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x28 (Inherited: 0x0)
struct FPreviewMeshCollectionEntry
{
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0(0x28)
};

// Object: ScriptStruct Engine.PrimitiveComponentInstanceData
// Size: 0xF0 (Inherited: 0xA8)
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct FTransform ComponentTransform; // 0xB0(0x30)
	int32_t VisibilityId; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct UPrimitiveComponent* LODParent; // 0xE8(0x8)
};

// Object: ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x38 (Inherited: 0x0)
struct FSpriteCategoryInfo
{
	struct FName Category; // 0x0(0x8)
	struct FText DisplayName; // 0x8(0x18)
	struct FText Description; // 0x20(0x18)
};

// Object: ScriptStruct Engine.LevelNameAndTime
// Size: 0x18 (Inherited: 0x0)
struct FLevelNameAndTime
{
	struct FString LevelName; // 0x0(0x10)
	uint32_t LevelChangeTimeInMS; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.ReverbSettings
// Size: 0x20 (Inherited: 0x0)
struct FReverbSettings
{
	bool bApplyReverb; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UReverbEffect* ReverbEffect; // 0x8(0x8)
	struct USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10(0x8)
	float Volume; // 0x18(0x4)
	float FadeTime; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.CompressedRichCurve
// Size: 0x18 (Inherited: 0x0)
struct FCompressedRichCurve
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct Engine.TransformBase
// Size: 0x28 (Inherited: 0x0)
struct FTransformBase
{
	struct FName Node; // 0x0(0x8)
	struct FTransformBaseConstraint Constraints[0x2]; // 0x8(0x20)
};

// Object: ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 (Inherited: 0x0)
struct FTransformBaseConstraint
{
	struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x0(0x10)
};

// Object: ScriptStruct Engine.RigTransformConstraint
// Size: 0x10 (Inherited: 0x0)
struct FRigTransformConstraint
{
	uint8_t TranformType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName ParentSpace; // 0x4(0x8)
	float Weight; // 0xC(0x4)
};

// Object: ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x0)
struct FNode
{
	struct FName Name; // 0x0(0x8)
	struct FName ParentName; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool bAdvanced; // 0x50(0x1)
	uint8_t Pad_0x51[0xF]; // 0x51(0xF)
};

// Object: ScriptStruct Engine.RootMotionSource
// Size: 0x90 (Inherited: 0x0)
struct FRootMotionSource
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint16_t Priority; // 0x8(0x2)
	uint16_t LocalID; // 0xA(0x2)
	enum class ERootMotionAccumulateMode AccumulateMode; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName InstanceName; // 0x10(0x8)
	float StartTime; // 0x18(0x4)
	float CurrentTime; // 0x1C(0x4)
	float PreviousTime; // 0x20(0x4)
	float Duration; // 0x24(0x4)
	struct FRootMotionSourceStatus Status; // 0x28(0x1)
	struct FRootMotionSourceSettings Settings; // 0x29(0x1)
	bool bInLocalSpace; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
	struct FRootMotionMovementParams RootMotionParams; // 0x30(0x40)
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x70(0x14)
	uint8_t Pad_0x84[0xC]; // 0x84(0xC)
};

// Object: ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size: 0x14 (Inherited: 0x0)
struct FRootMotionFinishVelocitySettings
{
	enum class ERootMotionFinishVelocityMode Mode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector SetVelocity; // 0x4(0xC)
	float ClampVelocity; // 0x10(0x4)
};

// Object: ScriptStruct Engine.RootMotionSourceStatus
// Size: 0x1 (Inherited: 0x0)
struct FRootMotionSourceStatus
{
	uint8_t Flags; // 0x0(0x1)
};

// Object: ScriptStruct Engine.RootMotionSource_JumpForce
// Size: 0xC0 (Inherited: 0x90)
struct FRootMotionSource_JumpForce : FRootMotionSource
{
	struct FRotator Rotation; // 0x84(0xC)
	float Distance; // 0x90(0x4)
	float Height; // 0x94(0x4)
	bool bDisableTimeout; // 0x98(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xA0(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0xA8(0x8)
	uint8_t Pad_0xB5[0xB]; // 0xB5(0xB)
};

// Object: ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size: 0xC0 (Inherited: 0x90)
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource
{
	struct FVector StartLocation; // 0x84(0xC)
	struct FVector InitialTargetLocation; // 0x90(0xC)
	struct FVector TargetLocation; // 0x9C(0xC)
	bool bRestrictSpeedToExpected; // 0xA8(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xB0(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0xB8(0x8)
};

// Object: ScriptStruct Engine.RootMotionSource_MoveToForce
// Size: 0xB0 (Inherited: 0x90)
struct FRootMotionSource_MoveToForce : FRootMotionSource
{
	struct FVector StartLocation; // 0x84(0xC)
	struct FVector TargetLocation; // 0x90(0xC)
	bool bRestrictSpeedToExpected; // 0x9C(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xA0(0x8)
};

// Object: ScriptStruct Engine.RootMotionSource_RadialForce
// Size: 0xD0 (Inherited: 0x90)
struct FRootMotionSource_RadialForce : FRootMotionSource
{
	struct FVector Location; // 0x84(0xC)
	struct AActor* LocationActor; // 0x90(0x8)
	float Radius; // 0x98(0x4)
	float Strength; // 0x9C(0x4)
	bool bIsPush; // 0xA0(0x1)
	bool bNoZForce; // 0xA1(0x1)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xA8(0x8)
	struct UCurveFloat* StrengthOverTime; // 0xB0(0x8)
	bool bUseFixedWorldDirection; // 0xB8(0x1)
	struct FRotator FixedWorldDirection; // 0xBC(0xC)
	uint8_t Pad_0xCB[0x5]; // 0xCB(0x5)
};

// Object: ScriptStruct Engine.RootMotionSource_ConstantForce
// Size: 0xA0 (Inherited: 0x90)
struct FRootMotionSource_ConstantForce : FRootMotionSource
{
	struct FVector Force; // 0x84(0xC)
	struct UCurveFloat* StrengthOverTime; // 0x90(0x8)
};

// Object: ScriptStruct Engine.CameraExposureSettings
// Size: 0x40 (Inherited: 0x0)
struct FCameraExposureSettings
{
	uint8_t Method; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float LowPercent; // 0x4(0x4)
	float HighPercent; // 0x8(0x4)
	float MinBrightness; // 0xC(0x4)
	float MaxBrightness; // 0x10(0x4)
	float SpeedUp; // 0x14(0x4)
	float SpeedDown; // 0x18(0x4)
	float Bias; // 0x1C(0x4)
	struct UCurveFloat* BiasCurve; // 0x20(0x8)
	struct UTexture* MeterMask; // 0x28(0x8)
	float HistogramLogMin; // 0x30(0x4)
	float HistogramLogMax; // 0x34(0x4)
	float CalibrationConstant; // 0x38(0x4)
	uint8_t ApplyPhysicalCameraExposure : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct Engine.LensSettings
// Size: 0xE0 (Inherited: 0x0)
struct FLensSettings
{
	struct FLensBloomSettings Bloom; // 0x0(0xB8)
	struct FLensImperfectionSettings Imperfections; // 0xB8(0x20)
	float ChromaticAberration; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: ScriptStruct Engine.LensImperfectionSettings
// Size: 0x20 (Inherited: 0x0)
struct FLensImperfectionSettings
{
	struct UTexture* DirtMask; // 0x0(0x8)
	float DirtMaskIntensity; // 0x8(0x4)
	struct FLinearColor DirtMaskTint; // 0xC(0x10)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.LensBloomSettings
// Size: 0xB8 (Inherited: 0x0)
struct FLensBloomSettings
{
	struct FGaussianSumBloomSettings GaussianSum; // 0x0(0x84)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FConvolutionBloomSettings Convolution; // 0x88(0x28)
	uint8_t Method; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x7]; // 0xB1(0x7)
};

// Object: ScriptStruct Engine.ConvolutionBloomSettings
// Size: 0x28 (Inherited: 0x0)
struct FConvolutionBloomSettings
{
	struct UTexture2D* Texture; // 0x0(0x8)
	float Size; // 0x8(0x4)
	struct FVector2D CenterUV; // 0xC(0x8)
	float PreFilterMin; // 0x14(0x4)
	float PreFilterMax; // 0x18(0x4)
	float PreFilterMult; // 0x1C(0x4)
	float BufferScale; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.GaussianSumBloomSettings
// Size: 0x84 (Inherited: 0x0)
struct FGaussianSumBloomSettings
{
	float Intensity; // 0x0(0x4)
	float Threshold; // 0x4(0x4)
	float SizeScale; // 0x8(0x4)
	float Filter1Size; // 0xC(0x4)
	float Filter2Size; // 0x10(0x4)
	float Filter3Size; // 0x14(0x4)
	float Filter4Size; // 0x18(0x4)
	float Filter5Size; // 0x1C(0x4)
	float Filter6Size; // 0x20(0x4)
	struct FLinearColor Filter1Tint; // 0x24(0x10)
	struct FLinearColor Filter2Tint; // 0x34(0x10)
	struct FLinearColor Filter3Tint; // 0x44(0x10)
	struct FLinearColor Filter4Tint; // 0x54(0x10)
	struct FLinearColor Filter5Tint; // 0x64(0x10)
	struct FLinearColor Filter6Tint; // 0x74(0x10)
};

// Object: ScriptStruct Engine.FilmStockSettings
// Size: 0x14 (Inherited: 0x0)
struct FFilmStockSettings
{
	float Slope; // 0x0(0x4)
	float Toe; // 0x4(0x4)
	float Shoulder; // 0x8(0x4)
	float BlackClip; // 0xC(0x4)
	float WhiteClip; // 0x10(0x4)
};

// Object: ScriptStruct Engine.ColorGradingSettings
// Size: 0x190 (Inherited: 0x0)
struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings Global; // 0x0(0x60)
	struct FColorGradePerRangeSettings Shadows; // 0x60(0x60)
	struct FColorGradePerRangeSettings Midtones; // 0xC0(0x60)
	struct FColorGradePerRangeSettings Highlights; // 0x120(0x60)
	float ShadowsMax; // 0x180(0x4)
	float HighlightsMin; // 0x184(0x4)
	uint8_t Pad_0x188[0x8]; // 0x188(0x8)
};

// Object: ScriptStruct Engine.ColorGradePerRangeSettings
// Size: 0x60 (Inherited: 0x0)
struct FColorGradePerRangeSettings
{
	struct FVector4 Saturation; // 0x0(0x10)
	struct FVector4 Contrast; // 0x10(0x10)
	struct FVector4 Gamma; // 0x20(0x10)
	struct FVector4 Gain; // 0x30(0x10)
	struct FVector4 Offset; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
};

// Object: ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x0)
struct FEngineShowFlagsSetting
{
	struct FString ShowFlagName; // 0x0(0x10)
	bool Enabled; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct Engine.SceneViewExtensionIsActiveFunctor
// Size: 0x50 (Inherited: 0x0)
struct FSceneViewExtensionIsActiveFunctor
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct Engine.SimpleCurve
// Size: 0x80 (Inherited: 0x70)
struct FSimpleCurve : FRealCurve
{
	uint8_t InterpMode; // 0x6E(0x1)
	struct TArray<struct FSimpleCurveKey> Keys; // 0x70(0x10)
};

// Object: ScriptStruct Engine.SimpleCurveKey
// Size: 0x8 (Inherited: 0x0)
struct FSimpleCurveKey
{
	float Time; // 0x0(0x4)
	float Value; // 0x4(0x4)
};

// Object: ScriptStruct Engine.SkeletalMaterial
// Size: 0x28 (Inherited: 0x0)
struct FSkeletalMaterial
{
	struct UMaterialInterface* MaterialInterface; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	struct FMeshUVChannelInfo UVChannelData; // 0x10(0x14)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x70 (Inherited: 0x0)
struct FClothingAssetData_Legacy
{
	struct FName AssetName; // 0x0(0x8)
	struct FString ApexFileName; // 0x8(0x10)
	bool bClothPropertiesChanged; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1C(0x50)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x0)
struct FClothPhysicsProperties_Legacy
{
	float VerticalResistance; // 0x0(0x4)
	float HorizontalResistance; // 0x4(0x4)
	float BendResistance; // 0x8(0x4)
	float ShearResistance; // 0xC(0x4)
	float Friction; // 0x10(0x4)
	float Damping; // 0x14(0x4)
	float TetherStiffness; // 0x18(0x4)
	float TetherLimit; // 0x1C(0x4)
	float Drag; // 0x20(0x4)
	float StiffnessFrequency; // 0x24(0x4)
	float GravityScale; // 0x28(0x4)
	float MassScale; // 0x2C(0x4)
	float InertiaBlend; // 0x30(0x4)
	float SelfCollisionThickness; // 0x34(0x4)
	float SelfCollisionSquashScale; // 0x38(0x4)
	float SelfCollisionStiffness; // 0x3C(0x4)
	float SolverFrequency; // 0x40(0x4)
	float FiberCompression; // 0x44(0x4)
	float FiberExpansion; // 0x48(0x4)
	float FiberResistance; // 0x4C(0x4)
};

// Object: ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0xB8 (Inherited: 0x0)
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat ScreenSize; // 0x0(0x4)
	float LODHysteresis; // 0x4(0x4)
	struct TArray<int32_t> LODMaterialMap; // 0x8(0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18(0x14)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2C(0x3C)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x68(0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x78(0x10)
	float WeightOfPrioritization; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct UAnimSequence* BakePose; // 0x90(0x8)
	struct UAnimSequence* BakePoseOverride; // 0x98(0x8)
	struct FString SourceImportFilename; // 0xA0(0x10)
	enum class ESkinCacheUsage SkinCacheUsage; // 0xB0(0x1)
	uint8_t bHasBeenSimplified : 1; // 0xB1(0x1), Mask(0x1)
	uint8_t bHasPerLODVertexColors : 1; // 0xB1(0x1), Mask(0x2)
	uint8_t bAllowCPUAccess : 1; // 0xB1(0x1), Mask(0x4)
	uint8_t bSupportUniformlyDistributedSampling : 1; // 0xB1(0x1), Mask(0x8)
	uint8_t BitPad_0xB1_4 : 4; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
};

// Object: ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x3C (Inherited: 0x0)
struct FSkeletalMeshOptimizationSettings
{
	uint8_t TerminationCriterion; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float NumOfTrianglesPercentage; // 0x4(0x4)
	float NumOfVertPercentage; // 0x8(0x4)
	uint32_t MaxNumOfTriangles; // 0xC(0x4)
	uint32_t MaxNumOfVerts; // 0x10(0x4)
	float MaxDeviationPercentage; // 0x14(0x4)
	uint8_t ReductionMethod; // 0x18(0x1)
	uint8_t SilhouetteImportance; // 0x19(0x1)
	uint8_t TextureImportance; // 0x1A(0x1)
	uint8_t ShadingImportance; // 0x1B(0x1)
	uint8_t SkinningImportance; // 0x1C(0x1)
	uint8_t bRemapMorphTargets : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t bRecalcNormals : 1; // 0x1D(0x1), Mask(0x2)
	uint8_t BitPad_0x1D_2 : 6; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	float WeldingThreshold; // 0x20(0x4)
	float NormalsThreshold; // 0x24(0x4)
	int32_t MaxBonesPerVertex; // 0x28(0x4)
	uint8_t bEnforceBoneBoundaries : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float VolumeImportance; // 0x30(0x4)
	uint8_t bLockEdges : 1; // 0x34(0x1), Mask(0x1)
	uint8_t bLockColorBounaries : 1; // 0x34(0x1), Mask(0x2)
	uint8_t BitPad_0x34_2 : 6; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	int32_t BaseLOD; // 0x38(0x4)
};

// Object: ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size: 0x58 (Inherited: 0x0)
struct FSkeletalMeshClothBuildParams
{
	struct TWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // 0x0(0x8)
	int32_t TargetLod; // 0x8(0x4)
	bool bRemapParameters; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FString AssetName; // 0x10(0x10)
	int32_t LODIndex; // 0x20(0x4)
	int32_t SourceSection; // 0x24(0x4)
	bool bRemoveFromMesh; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x30(0x28)
};

// Object: ScriptStruct Engine.BoneMirrorExport
// Size: 0x14 (Inherited: 0x0)
struct FBoneMirrorExport
{
	struct FName BoneName; // 0x0(0x8)
	struct FName SourceBoneName; // 0x8(0x8)
	uint8_t BoneFlipAxis; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct Engine.BoneMirrorInfo
// Size: 0x8 (Inherited: 0x0)
struct FBoneMirrorInfo
{
	int32_t SourceIndex; // 0x0(0x4)
	uint8_t BoneFlipAxis; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentClothTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x80 (Inherited: 0x0)
struct FSkeletalMeshLODGroupSettings
{
	struct FPerPlatformFloat ScreenSize; // 0x0(0x4)
	float LODHysteresis; // 0x4(0x4)
	enum class EBoneFilterActionOption BoneFilterActionOption; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FBoneFilter> BoneList; // 0x10(0x10)
	struct TArray<struct FName> BonesToPrioritize; // 0x20(0x10)
	float WeightOfPrioritization; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UAnimSequence* BakePose; // 0x38(0x8)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x3C)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct Engine.BoneFilter
// Size: 0xC (Inherited: 0x0)
struct FBoneFilter
{
	bool bExcludeSelf; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName BoneName; // 0x4(0x8)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingInfo
// Size: 0x30 (Inherited: 0x0)
struct FSkeletalMeshSamplingInfo
{
	struct TArray<struct FSkeletalMeshSamplingRegion> Regions; // 0x0(0x10)
	struct FSkeletalMeshSamplingBuiltData BuiltData; // 0x10(0x20)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// Size: 0x20 (Inherited: 0x0)
struct FSkeletalMeshSamplingBuiltData
{
	struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10(0x10)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// Size: 0x78 (Inherited: 0x0)
struct FSkeletalMeshSamplingRegionBuiltData
{
	uint8_t Pad_0x0[0x78]; // 0x0(0x78)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// Size: 0x48 (Inherited: 0x0)
struct FSkeletalMeshSamplingLODBuiltData
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingRegion
// Size: 0x30 (Inherited: 0x0)
struct FSkeletalMeshSamplingRegion
{
	struct FName Name; // 0x0(0x8)
	int32_t LODIndex; // 0x8(0x4)
	uint8_t bSupportUniformlyDistributedSampling : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20(0x10)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// Size: 0xC (Inherited: 0x0)
struct FSkeletalMeshSamplingRegionBoneFilter
{
	struct FName BoneName; // 0x0(0x8)
	uint8_t bIncludeOrExclude : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bApplyToChildren : 1; // 0x8(0x1), Mask(0x2)
	uint8_t BitPad_0x8_2 : 6; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// Size: 0x8 (Inherited: 0x0)
struct FSkeletalMeshSamplingRegionMaterialFilter
{
	struct FName MaterialName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.VirtualBone
// Size: 0x18 (Inherited: 0x0)
struct FVirtualBone
{
	struct FName SourceBoneName; // 0x0(0x8)
	struct FName TargetBoneName; // 0x8(0x8)
	struct FName VirtualBoneName; // 0x10(0x8)
};

// Object: ScriptStruct Engine.AnimSlotGroup
// Size: 0x18 (Inherited: 0x0)
struct FAnimSlotGroup
{
	struct FName GroupName; // 0x0(0x8)
	struct TArray<struct FName> SlotNames; // 0x8(0x10)
};

// Object: ScriptStruct Engine.RigConfiguration
// Size: 0x18 (Inherited: 0x0)
struct FRigConfiguration
{
	struct URig* Rig; // 0x0(0x8)
	struct TArray<struct FNameMapping> BoneMappingTable; // 0x8(0x10)
};

// Object: ScriptStruct Engine.NameMapping
// Size: 0x10 (Inherited: 0x0)
struct FNameMapping
{
	struct FName NodeName; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 (Inherited: 0x0)
struct FBoneReductionSetting
{
	struct TArray<struct FName> BonesToRemove; // 0x0(0x10)
};

// Object: ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x0)
struct FReferencePose
{
	struct FName PoseName; // 0x0(0x8)
	struct TArray<struct FTransform> ReferencePose; // 0x8(0x10)
};

// Object: ScriptStruct Engine.BoneNode
// Size: 0x10 (Inherited: 0x0)
struct FBoneNode
{
	struct FName Name; // 0x0(0x8)
	int32_t ParentIndex; // 0x8(0x4)
	uint8_t TranslationRetargetingMode; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 (Inherited: 0x0)
struct FSkeletonToMeshLinkup
{
	struct TArray<int32_t> SkeletonToMeshTable; // 0x0(0x10)
	struct TArray<int32_t> MeshToSkeletonTable; // 0x10(0x10)
};

// Object: ScriptStruct Engine.SkinWeightProfileInfo
// Size: 0x10 (Inherited: 0x0)
struct FSkinWeightProfileInfo
{
	struct FName Name; // 0x0(0x8)
	struct FPerPlatformBool DefaultProfile; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FPerPlatformInt DefaultProfileFromLODIndex; // 0xC(0x4)
};

// Object: ScriptStruct Engine.TentDistribution
// Size: 0xC (Inherited: 0x0)
struct FTentDistribution
{
	float TipAltitude; // 0x0(0x4)
	float TipValue; // 0x4(0x4)
	float Width; // 0x8(0x4)
};

// Object: ScriptStruct Engine.PrecomputedSkyLightInstanceData
// Size: 0x160 (Inherited: 0xA8)
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData
{
	struct FGuid LightGuid; // 0xA8(0x10)
	float AverageBrightness; // 0xB8(0x4)
	uint8_t Pad_0xBC[0xA4]; // 0xBC(0xA4)
};

// Object: ScriptStruct Engine.SmartNameContainer
// Size: 0x50 (Inherited: 0x0)
struct FSmartNameContainer
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct Engine.SmartNameMapping
// Size: 0x70 (Inherited: 0x0)
struct FSmartNameMapping
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: ScriptStruct Engine.CurveMetaData
// Size: 0x20 (Inherited: 0x0)
struct FCurveMetaData
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x3A0 (Inherited: 0xB0)
struct FSoundAttenuationSettings : FBaseAttenuationSettings
{
	uint8_t bAttenuate : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t bSpatialize : 1; // 0xB0(0x1), Mask(0x2)
	uint8_t bAttenuateWithLPF : 1; // 0xB0(0x1), Mask(0x4)
	uint8_t bEnableListenerFocus : 1; // 0xB0(0x1), Mask(0x8)
	uint8_t bEnableFocusInterpolation : 1; // 0xB0(0x1), Mask(0x10)
	uint8_t bEnableOcclusion : 1; // 0xB0(0x1), Mask(0x20)
	uint8_t bUseComplexCollisionForOcclusion : 1; // 0xB0(0x1), Mask(0x40)
	uint8_t bEnableReverbSend : 1; // 0xB0(0x1), Mask(0x80)
	uint8_t bEnablePriorityAttenuation : 1; // 0xB1(0x1), Mask(0x1)
	uint8_t bApplyNormalizationToStereoSounds : 1; // 0xB1(0x1), Mask(0x2)
	uint8_t bEnableLogFrequencyScaling : 1; // 0xB1(0x1), Mask(0x4)
	uint8_t bEnableSubmixSends : 1; // 0xB1(0x1), Mask(0x8)
	uint8_t BitPad_0xB1_4 : 4; // 0xB1(0x1)
	uint8_t SpatializationAlgorithm; // 0xB2(0x1)
	uint8_t Pad_0xB3[0x1]; // 0xB3(0x1)
	float BinauralRadius; // 0xB4(0x4)
	enum class EAirAbsorptionMethod AbsorptionMethod; // 0xB8(0x1)
	uint8_t OcclusionTraceChannel; // 0xB9(0x1)
	enum class EReverbSendMethod ReverbSendMethod; // 0xBA(0x1)
	enum class EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xBB(0x1)
	float OmniRadius; // 0xBC(0x4)
	float StereoSpread; // 0xC0(0x4)
	float LPFRadiusMin; // 0xC4(0x4)
	float LPFRadiusMax; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xD0(0x88)
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158(0x88)
	float LPFFrequencyAtMin; // 0x1E0(0x4)
	float LPFFrequencyAtMax; // 0x1E4(0x4)
	float HPFFrequencyAtMin; // 0x1E8(0x4)
	float HPFFrequencyAtMax; // 0x1EC(0x4)
	float FocusAzimuth; // 0x1F0(0x4)
	float NonFocusAzimuth; // 0x1F4(0x4)
	float FocusDistanceScale; // 0x1F8(0x4)
	float NonFocusDistanceScale; // 0x1FC(0x4)
	float FocusPriorityScale; // 0x200(0x4)
	float NonFocusPriorityScale; // 0x204(0x4)
	float FocusVolumeAttenuation; // 0x208(0x4)
	float NonFocusVolumeAttenuation; // 0x20C(0x4)
	float FocusAttackInterpSpeed; // 0x210(0x4)
	float FocusReleaseInterpSpeed; // 0x214(0x4)
	float OcclusionLowPassFilterFrequency; // 0x218(0x4)
	float OcclusionVolumeAttenuation; // 0x21C(0x4)
	float OcclusionInterpolationTime; // 0x220(0x4)
	float ReverbWetLevelMin; // 0x224(0x4)
	float ReverbWetLevelMax; // 0x228(0x4)
	float ReverbDistanceMin; // 0x22C(0x4)
	float ReverbDistanceMax; // 0x230(0x4)
	float ManualReverbSendLevel; // 0x234(0x4)
	struct FRuntimeFloatCurve CustomReverbSendCurve; // 0x238(0x88)
	struct TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2C0(0x10)
	float PriorityAttenuationMin; // 0x2D0(0x4)
	float PriorityAttenuationMax; // 0x2D4(0x4)
	float PriorityAttenuationDistanceMin; // 0x2D8(0x4)
	float PriorityAttenuationDistanceMax; // 0x2DC(0x4)
	float ManualPriorityAttenuation; // 0x2E0(0x4)
	uint8_t Pad_0x2E4[0x4]; // 0x2E4(0x4)
	struct FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2E8(0x88)
	struct FSoundAttenuationPluginSettings PluginSettings; // 0x370(0x30)
};

// Object: ScriptStruct Engine.SoundAttenuationPluginSettings
// Size: 0x30 (Inherited: 0x0)
struct FSoundAttenuationPluginSettings
{
	struct TArray<struct USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0(0x10)
	struct TArray<struct UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10(0x10)
	struct TArray<struct UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20(0x10)
};

// Object: ScriptStruct Engine.AttenuationSubmixSendSettings
// Size: 0xA8 (Inherited: 0x0)
struct FAttenuationSubmixSendSettings
{
	struct USoundSubmix* Submix; // 0x0(0x8)
	enum class ESubmixSendMethod SubmixSendMethod; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float SubmixSendLevelMin; // 0xC(0x4)
	float SubmixSendLevelMax; // 0x10(0x4)
	float SubmixSendDistanceMin; // 0x14(0x4)
	float SubmixSendDistanceMax; // 0x18(0x4)
	float ManualSubmixSendLevel; // 0x1C(0x4)
	struct FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20(0x88)
};

// Object: ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x0)
struct FPassiveSoundMixModifier
{
	struct USoundMix* SoundMix; // 0x0(0x8)
	float MinVolumeThreshold; // 0x8(0x4)
	float MaxVolumeThreshold; // 0xC(0x4)
};

// Object: ScriptStruct Engine.SoundClassProperties
// Size: 0x58 (Inherited: 0x0)
struct FSoundClassProperties
{
	float Volume; // 0x0(0x4)
	float Pitch; // 0x4(0x4)
	float LowPassFilterFrequency; // 0x8(0x4)
	float AttenuationDistanceScale; // 0xC(0x4)
	float StereoBleed; // 0x10(0x4)
	float LFEBleed; // 0x14(0x4)
	float VoiceCenterChannelVolume; // 0x18(0x4)
	float RadioFilterVolume; // 0x1C(0x4)
	float RadioFilterVolumeThreshold; // 0x20(0x4)
	uint8_t bApplyEffects : 1; // 0x24(0x1), Mask(0x1)
	uint8_t bAlwaysPlay : 1; // 0x24(0x1), Mask(0x2)
	uint8_t bIsUISound : 1; // 0x24(0x1), Mask(0x4)
	uint8_t bIsMusic : 1; // 0x24(0x1), Mask(0x8)
	uint8_t bCenterChannelOnly : 1; // 0x24(0x1), Mask(0x10)
	uint8_t bApplyAmbientVolumes : 1; // 0x24(0x1), Mask(0x20)
	uint8_t bReverb : 1; // 0x24(0x1), Mask(0x40)
	uint8_t BitPad_0x24_7 : 1; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float Default2DReverbSendAmount; // 0x28(0x4)
	uint8_t OutputTarget; // 0x2C(0x1)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
	struct USoundSubmix* DefaultSubmix; // 0x30(0x8)
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
};

// Object: ScriptStruct Engine.SoundClassEditorData
// Size: 0x8 (Inherited: 0x0)
struct FSoundClassEditorData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.SoundConcurrencySettings
// Size: 0x1C (Inherited: 0x0)
struct FSoundConcurrencySettings
{
	int32_t MaxCount; // 0x0(0x4)
	uint8_t bLimitToOwner : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t ResolutionRule; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	float VolumeScale; // 0x8(0x4)
	float VolumeScaleAttackTime; // 0xC(0x4)
	uint8_t bVolumeScaleCanRelease : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float VolumeScaleReleaseTime; // 0x14(0x4)
	float VoiceStealReleaseTime; // 0x18(0x4)
};

// Object: ScriptStruct Engine.SoundNodeEditorData
// Size: 0x8 (Inherited: 0x0)
struct FSoundNodeEditorData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.SourceEffectChainEntry
// Size: 0x10 (Inherited: 0x0)
struct FSourceEffectChainEntry
{
	struct USoundEffectSourcePreset* Preset; // 0x0(0x8)
	uint8_t bBypass : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x0)
struct FSoundGroup
{
	uint8_t SoundGroup; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString DisplayName; // 0x8(0x10)
	uint8_t bAlwaysDecompressOnLoad : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float DecompressedDuration; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.SoundClassAdjuster
// Size: 0x20 (Inherited: 0x0)
struct FSoundClassAdjuster
{
	struct USoundClass* SoundClassObject; // 0x0(0x8)
	float VolumeAdjuster; // 0x8(0x4)
	float PitchAdjuster; // 0xC(0x4)
	float LowPassFilterFrequency; // 0x10(0x4)
	uint8_t bApplyToChildren : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float VoiceCenterChannelVolumeAdjuster; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.AudioEQEffect
// Size: 0x40 (Inherited: 0x8)
struct FAudioEQEffect : FAudioEffectParameters
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	float FrequencyCenter0; // 0x10(0x4)
	float Gain0; // 0x14(0x4)
	float Bandwidth0; // 0x18(0x4)
	float FrequencyCenter1; // 0x1C(0x4)
	float Gain1; // 0x20(0x4)
	float Bandwidth1; // 0x24(0x4)
	float FrequencyCenter2; // 0x28(0x4)
	float Gain2; // 0x2C(0x4)
	float Bandwidth2; // 0x30(0x4)
	float FrequencyCenter3; // 0x34(0x4)
	float Gain3; // 0x38(0x4)
	float Bandwidth3; // 0x3C(0x4)
};

// Object: ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x0)
struct FDistanceDatum
{
	float FadeInDistanceStart; // 0x0(0x4)
	float FadeInDistanceEnd; // 0x4(0x4)
	float FadeOutDistanceStart; // 0x8(0x4)
	float FadeOutDistanceEnd; // 0xC(0x4)
	float Volume; // 0x10(0x4)
};

// Object: ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x20 (Inherited: 0x0)
struct FModulatorContinuousParams
{
	struct FName ParameterName; // 0x0(0x8)
	float Default; // 0x8(0x4)
	float MinInput; // 0xC(0x4)
	float MaxInput; // 0x10(0x4)
	float MinOutput; // 0x14(0x4)
	float MaxOutput; // 0x18(0x4)
	uint8_t ParamMode; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.SoundSourceBusSendInfo
// Size: 0xB0 (Inherited: 0x0)
struct FSoundSourceBusSendInfo
{
	enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct USoundSourceBus* SoundSourceBus; // 0x8(0x8)
	float SendLevel; // 0x10(0x4)
	float MinSendLevel; // 0x14(0x4)
	float MaxSendLevel; // 0x18(0x4)
	float MinSendDistance; // 0x1C(0x4)
	float MaxSendDistance; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// Object: ScriptStruct Engine.SoundSubmixSendInfo
// Size: 0xB0 (Inherited: 0x0)
struct FSoundSubmixSendInfo
{
	enum class ESendLevelControlMethod SendLevelControlMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct USoundSubmixBase* SoundSubmix; // 0x8(0x8)
	float SendLevel; // 0x10(0x4)
	float MinSendLevel; // 0x14(0x4)
	float MaxSendLevel; // 0x18(0x4)
	float MinSendDistance; // 0x1C(0x4)
	float MaxSendDistance; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// Object: ScriptStruct Engine.SoundWaveEnvelopeTimeData
// Size: 0x8 (Inherited: 0x0)
struct FSoundWaveEnvelopeTimeData
{
	float Amplitude; // 0x0(0x4)
	float TimeSec; // 0x4(0x4)
};

// Object: ScriptStruct Engine.SoundWaveSpectralTimeData
// Size: 0x18 (Inherited: 0x0)
struct FSoundWaveSpectralTimeData
{
	struct TArray<struct FSoundWaveSpectralDataEntry> Data; // 0x0(0x10)
	float TimeSec; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.SoundWaveSpectralDataEntry
// Size: 0x8 (Inherited: 0x0)
struct FSoundWaveSpectralDataEntry
{
	float Magnitude; // 0x0(0x4)
	float NormalizedMagnitude; // 0x4(0x4)
};

// Object: ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// Size: 0x10 (Inherited: 0x0)
struct FSoundWaveEnvelopeDataPerSound
{
	float Envelope; // 0x0(0x4)
	float PlaybackTime; // 0x4(0x4)
	struct USoundWave* SoundWave; // 0x8(0x8)
};

// Object: ScriptStruct Engine.SoundWaveSpectralDataPerSound
// Size: 0x20 (Inherited: 0x0)
struct FSoundWaveSpectralDataPerSound
{
	struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x0(0x10)
	float PlaybackTime; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct USoundWave* SoundWave; // 0x18(0x8)
};

// Object: ScriptStruct Engine.SoundWaveSpectralData
// Size: 0xC (Inherited: 0x0)
struct FSoundWaveSpectralData
{
	float FrequencyHz; // 0x0(0x4)
	float Magnitude; // 0x4(0x4)
	float NormalizedMagnitude; // 0x8(0x4)
};

// Object: ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x20 (Inherited: 0x0)
struct FStreamedAudioPlatformData
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct Engine.SplineInstanceData
// Size: 0x180 (Inherited: 0xA8)
struct FSplineInstanceData : FSceneComponentInstanceData
{
	bool bSplineHasBeenEdited; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct FSplineCurves SplineCurves; // 0xB0(0x68)
	struct FSplineCurves SplineCurvesPreUCS; // 0x118(0x68)
};

// Object: ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x0)
struct FSplinePoint
{
	float InputKey; // 0x0(0x4)
	struct FVector Position; // 0x4(0xC)
	struct FVector ArriveTangent; // 0x10(0xC)
	struct FVector LeaveTangent; // 0x1C(0xC)
	struct FRotator Rotation; // 0x28(0xC)
	struct FVector Scale; // 0x34(0xC)
	uint8_t Type; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
};

// Object: ScriptStruct Engine.SplineMeshInstanceData
// Size: 0xD8 (Inherited: 0xA8)
struct FSplineMeshInstanceData : FSceneComponentInstanceData
{
	struct FVector StartPos; // 0xA8(0xC)
	struct FVector EndPos; // 0xB4(0xC)
	struct FVector StartTangent; // 0xC0(0xC)
	struct FVector EndTangent; // 0xCC(0xC)
};

// Object: ScriptStruct Engine.SplineMeshParams
// Size: 0x58 (Inherited: 0x0)
struct FSplineMeshParams
{
	struct FVector StartPos; // 0x0(0xC)
	struct FVector StartTangent; // 0xC(0xC)
	struct FVector2D StartScale; // 0x18(0x8)
	float StartRoll; // 0x20(0x4)
	struct FVector2D StartOffset; // 0x24(0x8)
	struct FVector EndPos; // 0x2C(0xC)
	struct FVector2D EndScale; // 0x38(0x8)
	struct FVector EndTangent; // 0x40(0xC)
	float EndRoll; // 0x4C(0x4)
	struct FVector2D EndOffset; // 0x50(0x8)
};

// Object: ScriptStruct Engine.LODRange
// Size: 0x8 (Inherited: 0x0)
struct FLODRange
{
	int32_t MinLOD; // 0x0(0x4)
	int32_t MaxLOD; // 0x4(0x4)
};

// Object: ScriptStruct Engine.MaterialRemapIndex
// Size: 0x18 (Inherited: 0x0)
struct FMaterialRemapIndex
{
	uint32_t ImportVersionKey; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> MaterialRemap; // 0x8(0x10)
};

// Object: ScriptStruct Engine.StaticMaterial
// Size: 0x30 (Inherited: 0x0)
struct FStaticMaterial
{
	struct UMaterialInterface* MaterialInterface; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	struct FName ImportedMaterialSlotName; // 0x10(0x8)
	struct FMeshUVChannelInfo UVChannelData; // 0x18(0x14)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x28 (Inherited: 0x0)
struct FAssetEditorOrbitCameraPosition
{
	bool bIsSet; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector CamOrbitPoint; // 0x4(0xC)
	struct FVector CamOrbitZoom; // 0x10(0xC)
	struct FRotator CamOrbitRotation; // 0x1C(0xC)
};

// Object: ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 (Inherited: 0x0)
struct FMeshSectionInfoMap
{
	struct TMap<uint32_t, struct FMeshSectionInfo> Map; // 0x0(0x50)
};

// Object: ScriptStruct Engine.MeshSectionInfo
// Size: 0x8 (Inherited: 0x0)
struct FMeshSectionInfo
{
	int32_t MaterialIndex; // 0x0(0x4)
	bool bEnableCollision; // 0x4(0x1)
	bool bCastShadow; // 0x5(0x1)
	bool bForceOpaque; // 0x6(0x1)
	uint8_t Pad_0x7[0x1]; // 0x7(0x1)
};

// Object: ScriptStruct Engine.StaticMeshSourceModel
// Size: 0x70 (Inherited: 0x0)
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings BuildSettings; // 0x0(0x30)
	struct FMeshReductionSettings ReductionSettings; // 0x30(0x24)
	float LODDistance; // 0x54(0x4)
	struct FPerPlatformFloat ScreenSize; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString SourceImportFilename; // 0x60(0x10)
};

// Object: ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1C (Inherited: 0x0)
struct FStaticMeshOptimizationSettings
{
	uint8_t ReductionMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float NumOfTrianglesPercentage; // 0x4(0x4)
	float MaxDeviationPercentage; // 0x8(0x4)
	float WeldingThreshold; // 0xC(0x4)
	bool bRecalcNormals; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float NormalsThreshold; // 0x14(0x4)
	uint8_t SilhouetteImportance; // 0x18(0x1)
	uint8_t TextureImportance; // 0x19(0x1)
	uint8_t ShadingImportance; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct Engine.StaticMeshComponentInstanceData
// Size: 0x130 (Inherited: 0xF0)
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData
{
	struct UStaticMesh* StaticMesh; // 0xF0(0x8)
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0xF8(0x10)
	struct TArray<struct FGuid> CachedStaticLighting; // 0x108(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x118(0x10)
	uint8_t Pad_0x128[0x8]; // 0x128(0x8)
};

// Object: ScriptStruct Engine.StaticMeshVertexColorLODData
// Size: 0x28 (Inherited: 0x0)
struct FStaticMeshVertexColorLODData
{
	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x0(0x10)
	struct TArray<struct FColor> VertexBufferColors; // 0x10(0x10)
	uint32_t LODIndex; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.PaintedVertex
// Size: 0x20 (Inherited: 0x0)
struct FPaintedVertex
{
	struct FVector Position; // 0x0(0xC)
	struct FColor Color; // 0xC(0x4)
	struct FVector4 Normal; // 0x10(0x10)
};

// Object: ScriptStruct Engine.StaticMeshLODInfoSetting
// Size: 0x28 (Inherited: 0x0)
struct FStaticMeshLODInfoSetting
{
	struct FPerPlatformFloat ScreenSize; // 0x0(0x4)
	struct FMeshReductionSettings ReductionSettings; // 0x4(0x24)
};

// Object: ScriptStruct Engine.StaticParameterSet
// Size: 0x40 (Inherited: 0x0)
struct FStaticParameterSet
{
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x0(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10(0x10)
	struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20(0x10)
	struct TArray<struct FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30(0x10)
};

// Object: ScriptStruct Engine.StaticParameterBase
// Size: 0x24 (Inherited: 0x0)
struct FStaticParameterBase
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	bool bOverride; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// Object: ScriptStruct Engine.StaticMaterialLayersParameter
// Size: 0x68 (Inherited: 0x24)
struct FStaticMaterialLayersParameter : FStaticParameterBase
{
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FMaterialLayersFunctions Value; // 0x28(0x40)
};

// Object: ScriptStruct Engine.StaticTerrainLayerWeightParameter
// Size: 0x2C (Inherited: 0x24)
struct FStaticTerrainLayerWeightParameter : FStaticParameterBase
{
	int32_t WeightmapIndex; // 0x24(0x4)
	bool bWeightBasedBlend; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
};

// Object: ScriptStruct Engine.StaticComponentMaskParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticComponentMaskParameter : FStaticParameterBase
{
	bool R; // 0x24(0x1)
	bool G; // 0x25(0x1)
	bool B; // 0x26(0x1)
	bool A; // 0x27(0x1)
};

// Object: ScriptStruct Engine.StaticSwitchParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticSwitchParameter : FStaticParameterBase
{
	bool Value; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct Engine.EquirectProps
// Size: 0x48 (Inherited: 0x0)
struct FEquirectProps
{
	struct FBox2D LeftUVRect; // 0x0(0x14)
	struct FBox2D RightUVRect; // 0x14(0x14)
	struct FVector2D LeftScale; // 0x28(0x8)
	struct FVector2D RightScale; // 0x30(0x8)
	struct FVector2D LeftBias; // 0x38(0x8)
	struct FVector2D RightBias; // 0x40(0x8)
};

// Object: ScriptStruct Engine.StringCurve
// Size: 0x88 (Inherited: 0x68)
struct FStringCurve : FIndexedCurve
{
	struct FString DefaultValue; // 0x68(0x10)
	struct TArray<struct FStringCurveKey> Keys; // 0x78(0x10)
};

// Object: ScriptStruct Engine.StringCurveKey
// Size: 0x18 (Inherited: 0x0)
struct FStringCurveKey
{
	float Time; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString Value; // 0x8(0x10)
};

// Object: ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x8C (Inherited: 0x0)
struct FSubsurfaceProfileStruct
{
	struct FLinearColor SurfaceAlbedo; // 0x0(0x10)
	struct FLinearColor MeanFreePathColor; // 0x10(0x10)
	float MeanFreePathDistance; // 0x20(0x4)
	float WorldUnitScale; // 0x24(0x4)
	bool bEnableBurley; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float ScatterRadius; // 0x2C(0x4)
	struct FLinearColor SubsurfaceColor; // 0x30(0x10)
	struct FLinearColor FalloffColor; // 0x40(0x10)
	struct FLinearColor BoundaryColorBleed; // 0x50(0x10)
	float ExtinctionScale; // 0x60(0x4)
	float NormalScale; // 0x64(0x4)
	float ScatteringDistribution; // 0x68(0x4)
	float IOR; // 0x6C(0x4)
	float Roughness0; // 0x70(0x4)
	float Roughness1; // 0x74(0x4)
	float LobeMix; // 0x78(0x4)
	struct FLinearColor TransmissionTintColor; // 0x7C(0x10)
};

// Object: ScriptStruct Engine.TextureFormatSettings
// Size: 0x2 (Inherited: 0x0)
struct FTextureFormatSettings
{
	uint8_t CompressionSettings; // 0x0(0x1)
	uint8_t CompressionNoAlpha : 1; // 0x1(0x1), Mask(0x1)
	uint8_t CompressionNone : 1; // 0x1(0x1), Mask(0x2)
	uint8_t CompressionYCoCg : 1; // 0x1(0x1), Mask(0x4)
	uint8_t SRGB : 1; // 0x1(0x1), Mask(0x8)
	uint8_t BitPad_0x1_4 : 4; // 0x1(0x1)
};

// Object: ScriptStruct Engine.TexturePlatformData
// Size: 0x40 (Inherited: 0x0)
struct FTexturePlatformData
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct Engine.TextureSource
// Size: 0x30 (Inherited: 0x0)
struct FTextureSource
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct Engine.TextureSourceBlock
// Size: 0x18 (Inherited: 0x0)
struct FTextureSourceBlock
{
	int32_t BlockX; // 0x0(0x4)
	int32_t BlockY; // 0x4(0x4)
	int32_t SizeX; // 0x8(0x4)
	int32_t SizeY; // 0xC(0x4)
	int32_t NumSlices; // 0x10(0x4)
	int32_t NumMips; // 0x14(0x4)
};

// Object: ScriptStruct Engine.TextureLODGroup
// Size: 0x74 (Inherited: 0x0)
struct FTextureLODGroup
{
	uint8_t Group; // 0x0(0x1)
	uint8_t Pad_0x1[0xB]; // 0x1(0xB)
	int32_t LODBias; // 0xC(0x4)
	int32_t LODBias_Smaller; // 0x10(0x4)
	int32_t LODBias_Smallest; // 0x14(0x4)
	int32_t LODBias_Runtime; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int32_t LODBias_GraphicsMemory; // 0x20(0x4)
	int32_t LODBias_SmallerGraphicsMemory; // 0x24(0x4)
	int32_t LODBias_SmallestGraphicsMemory; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FName LobbyMinMagFilter; // 0x30(0x8)
	uint8_t Pad_0x38[0x4]; // 0x38(0x4)
	int32_t NumStreamedMips; // 0x3C(0x4)
	uint8_t MipGenSettings; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	int32_t MinLODSize; // 0x44(0x4)
	int32_t MaxLODSize; // 0x48(0x4)
	int32_t MaxLODSize_Smaller; // 0x4C(0x4)
	int32_t MaxLODSize_Smallest; // 0x50(0x4)
	int32_t OptionalLODBias; // 0x54(0x4)
	int32_t OptionalMaxLODSize; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FName MinMagFilter; // 0x60(0x8)
	struct FName MipFilter; // 0x68(0x8)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x70(0x1)
	bool DuplicateNonOptionalMips; // 0x71(0x1)
	uint8_t Pad_0x72[0x2]; // 0x72(0x2)
};

// Object: ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// Size: 0x30 (Inherited: 0x0)
struct FStreamingRenderAssetPrimitiveInfo
{
	struct UStreamableRenderAsset* RenderAsset; // 0x0(0x8)
	struct FBoxSphereBounds Bounds; // 0x8(0x1C)
	float TexelFactor; // 0x24(0x4)
	uint32_t PackedRelativeBox; // 0x28(0x4)
	uint8_t bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct Engine.TTTrackBase
// Size: 0x18 (Inherited: 0x0)
struct FTTTrackBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FName TrackName; // 0x8(0x8)
	bool bIsExternalCurve; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct Engine.TTPropertyTrack
// Size: 0x20 (Inherited: 0x18)
struct FTTPropertyTrack : FTTTrackBase
{
	struct FName PropertyName; // 0x14(0x8)
};

// Object: ScriptStruct Engine.TTLinearColorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTLinearColorTrack : FTTPropertyTrack
{
	struct UCurveLinearColor* CurveLinearColor; // 0x20(0x8)
};

// Object: ScriptStruct Engine.TTVectorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTVectorTrack : FTTPropertyTrack
{
	struct UCurveVector* CurveVector; // 0x20(0x8)
};

// Object: ScriptStruct Engine.TTFloatTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTFloatTrack : FTTPropertyTrack
{
	struct UCurveFloat* CurveFloat; // 0x20(0x8)
};

// Object: ScriptStruct Engine.TTEventTrack
// Size: 0x28 (Inherited: 0x18)
struct FTTEventTrack : FTTTrackBase
{
	struct FName FunctionName; // 0x14(0x8)
	struct UCurveFloat* CurveKeys; // 0x20(0x8)
};

// Object: ScriptStruct Engine.TimeStretchCurveInstance
// Size: 0x30 (Inherited: 0x0)
struct FTimeStretchCurveInstance
{
	bool bHasValidData; // 0x0(0x1)
	uint8_t Pad_0x1[0x2F]; // 0x1(0x2F)
};

// Object: ScriptStruct Engine.TimeStretchCurve
// Size: 0x28 (Inherited: 0x0)
struct FTimeStretchCurve
{
	float SamplingRate; // 0x0(0x4)
	float CurveValueMinPrecision; // 0x4(0x4)
	struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x8(0x10)
	float Sum_dT_i_by_C_i[0x3]; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.TimeStretchCurveMarker
// Size: 0x10 (Inherited: 0x0)
struct FTimeStretchCurveMarker
{
	float Time[0x3]; // 0x0(0xC)
	float Alpha; // 0xC(0x4)
};

// Object: ScriptStruct Engine.TouchInputControl
// Size: 0x68 (Inherited: 0x0)
struct FTouchInputControl
{
	struct UTexture2D* Image1; // 0x0(0x8)
	struct UTexture2D* Image2; // 0x8(0x8)
	struct FVector2D Center; // 0x10(0x8)
	struct FVector2D VisualSize; // 0x18(0x8)
	struct FVector2D ThumbSize; // 0x20(0x8)
	struct FVector2D InteractionSize; // 0x28(0x8)
	struct FVector2D InputScale; // 0x30(0x8)
	struct FKey MainInputKey; // 0x38(0x18)
	struct FKey AltInputKey; // 0x50(0x18)
};

// Object: ScriptStruct Engine.HardwareCursorReference
// Size: 0x10 (Inherited: 0x0)
struct FHardwareCursorReference
{
	struct FName CursorPath; // 0x0(0x8)
	struct FVector2D HotSpot; // 0x8(0x8)
};

// Object: ScriptStruct Engine.GlobalColorThemeData
// Size: 0x30 (Inherited: 0x0)
struct FGlobalColorThemeData
{
	struct FString Desc; // 0x0(0x10)
	struct FString Tag; // 0x10(0x10)
	struct TArray<struct FLinearColor> Colors; // 0x20(0x10)
};

// Object: ScriptStruct Engine.VirtualTextureBuildSettings
// Size: 0xC (Inherited: 0x0)
struct FVirtualTextureBuildSettings
{
	int32_t TileSize; // 0x0(0x4)
	int32_t TileBorderSize; // 0x4(0x4)
	bool bEnableCompressCrunch; // 0x8(0x1)
	bool bEnableCompressZlib; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Engine.VirtualTextureSpacePoolConfig
// Size: 0x20 (Inherited: 0x0)
struct FVirtualTextureSpacePoolConfig
{
	int32_t MinTileSize; // 0x0(0x4)
	int32_t MaxTileSize; // 0x4(0x4)
	struct TArray<uint8_t> Formats; // 0x8(0x10)
	int32_t SizeInMegabyte; // 0x18(0x4)
	bool bAllowSizeScale; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.VoiceSettings
// Size: 0x18 (Inherited: 0x0)
struct FVoiceSettings
{
	struct USceneComponent* ComponentToAttachTo; // 0x0(0x8)
	struct USoundAttenuation* AttenuationSettings; // 0x8(0x8)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x10(0x8)
};

// Object: ScriptStruct Engine.StreamingLevelsToConsider
// Size: 0x30 (Inherited: 0x0)
struct FStreamingLevelsToConsider
{
	struct TArray<struct FLevelStreamingWrapper> StreamingLevels; // 0x0(0x10)
	uint8_t Pad_0x10[0x20]; // 0x10(0x20)
};

// Object: ScriptStruct Engine.LevelStreamingWrapper
// Size: 0x8 (Inherited: 0x0)
struct FLevelStreamingWrapper
{
	struct ULevelStreaming* StreamingLevel; // 0x0(0x8)
};

// Object: ScriptStruct Engine.LevelCollection
// Size: 0x78 (Inherited: 0x0)
struct FLevelCollection
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AGameStateBase* GameState; // 0x8(0x8)
	struct UNetDriver* NetDriver; // 0x10(0x8)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x8)
	struct ULevel* PersistentLevel; // 0x20(0x8)
	struct TSet<struct ULevel*> Levels; // 0x28(0x50)
};

// Object: ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FEndPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FStartPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 (Inherited: 0x0)
struct FLevelViewportInfo
{
	struct FVector CamPosition; // 0x0(0xC)
	struct FRotator CamRotation; // 0xC(0xC)
	float CamOrthoZoom; // 0x18(0x4)
	bool CamUpdated; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.OverrideLayerConfig
// Size: 0xC (Inherited: 0x0)
struct FOverrideLayerConfig
{
	bool bDistanceStreamingEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float StreamingDistance; // 0x4(0x4)
	float StreamingDistancePC; // 0x8(0x4)
};

// Object: ScriptStruct Engine.WorldPSCPool
// Size: 0x58 (Inherited: 0x0)
struct FWorldPSCPool
{
	struct TMap<struct UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; // 0x0(0x50)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: ScriptStruct Engine.PSCPool
// Size: 0x10 (Inherited: 0x0)
struct FPSCPool
{
	struct TArray<struct FPSCPoolElem> FreeElements; // 0x0(0x10)
};

// Object: ScriptStruct Engine.PSCPoolElem
// Size: 0x10 (Inherited: 0x0)
struct FPSCPoolElem
{
	struct UParticleSystemComponent* PSC; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.RenderScalabilitySetting
// Size: 0x4 (Inherited: 0x0)
struct FRenderScalabilitySetting
{
	float MinScreenRadiusScaleForCSMDepth; // 0x0(0x4)
};

// Object: ScriptStruct Engine.BroadphaseSettings
// Size: 0x40 (Inherited: 0x0)
struct FBroadphaseSettings
{
	bool bUseMBPOnClient; // 0x0(0x1)
	bool bUseMBPOnServer; // 0x1(0x1)
	bool bUseMBPOuterBounds; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FBox MBPBounds; // 0x4(0x1C)
	struct FBox MBPOuterBounds; // 0x20(0x1C)
	uint32_t MBPNumSubdivs; // 0x3C(0x4)
};

// Object: ScriptStruct Engine.HierarchicalSimplification
// Size: 0x168 (Inherited: 0x0)
struct FHierarchicalSimplification
{
	float TransitionScreenSize; // 0x0(0x4)
	float OverrideDrawDistance; // 0x4(0x4)
	uint8_t bUseOverrideDrawDistance : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bAllowSpecificExclusion : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bSimplifyMesh : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bOnlyGenerateClustersForVolumes : 1; // 0x8(0x1), Mask(0x8)
	uint8_t bReusePreviousLevelClusters : 1; // 0x8(0x1), Mask(0x10)
	uint8_t BitPad_0x8_5 : 3; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FMeshProxySettings ProxySetting; // 0xC(0xA8)
	struct FMeshMergingSettings MergeSetting; // 0xB4(0xA8)
	float DesiredBoundRadius; // 0x15C(0x4)
	float DesiredFillingPercentage; // 0x160(0x4)
	int32_t MinNumberOfActorsToBuild; // 0x164(0x4)
};

// Object: ScriptStruct Engine.NetViewer
// Size: 0x30 (Inherited: 0x0)
struct FNetViewer
{
	struct UNetConnection* Connection; // 0x0(0x8)
	struct AActor* InViewer; // 0x8(0x8)
	struct AActor* ViewTarget; // 0x10(0x8)
	struct FVector ViewLocation; // 0x18(0xC)
	struct FVector ViewDir; // 0x24(0xC)
};

// Object: ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x58 (Inherited: 0x0)
struct FLightmassWorldInfoSettings
{
	float StaticLightingLevelScale; // 0x0(0x4)
	int32_t NumIndirectLightingBounces; // 0x4(0x4)
	int32_t NumSkyLightingBounces; // 0x8(0x4)
	float IndirectLightingQuality; // 0xC(0x4)
	float IndirectLightingSmoothness; // 0x10(0x4)
	struct FColor EnvironmentColor; // 0x14(0x4)
	float EnvironmentIntensity; // 0x18(0x4)
	float EmissiveBoost; // 0x1C(0x4)
	float DiffuseBoost; // 0x20(0x4)
	uint8_t VolumeLightingMethod; // 0x24(0x1)
	uint8_t bUseAmbientOcclusion : 1; // 0x25(0x1), Mask(0x1)
	uint8_t bGenerateAmbientOcclusionMaterialMask : 1; // 0x25(0x1), Mask(0x2)
	uint8_t bVisualizeMaterialDiffuse : 1; // 0x25(0x1), Mask(0x4)
	uint8_t bVisualizeAmbientOcclusion : 1; // 0x25(0x1), Mask(0x8)
	uint8_t bCompressLightmaps : 1; // 0x25(0x1), Mask(0x10)
	uint8_t BitPad_0x25_5 : 3; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	float VolumetricLightmapDetailCellSize; // 0x28(0x4)
	int32_t VolumetricLightmapBrickSize; // 0x2C(0x4)
	int32_t VolumetricLightmapMaxRefinementLevels; // 0x30(0x4)
	int32_t VolumetricLightmapGridNum; // 0x34(0x4)
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x38(0x4)
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x3C(0x4)
	float VolumeLightSamplePlacementScale; // 0x40(0x4)
	float DirectIlluminationOcclusionFraction; // 0x44(0x4)
	float IndirectIlluminationOcclusionFraction; // 0x48(0x4)
	float OcclusionExponent; // 0x4C(0x4)
	float FullyOccludedSamplesFraction; // 0x50(0x4)
	float MaxOcclusionDistance; // 0x54(0x4)
};

// Object: UserDefinedStruct Engine.Default__UserDefinedStruct
// Size: 0x0 (Inherited: 0x0)
struct FDefault__UserDefinedStruct
{
};

} // namespace SDK
