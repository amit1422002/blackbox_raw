// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x58 (Inherited: 0x28)
struct UMovieSceneCaptureProtocolBase : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
	enum class EMovieSceneCaptureProtocolState State; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)


	// Object: Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b6b148
	// Params: [ Num(1) Size(0x1) ]
	bool IsCapturing();

	// Object: Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b6b194
	// Params: [ Num(1) Size(0x1) ]
	enum class EMovieSceneCaptureProtocolState GetState();
};

// Object: Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{
};

// Object: Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x58 (Inherited: 0x58)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{
};

// Object: Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x90 (Inherited: 0x58)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{
	struct FString Filename; // 0x58(0x10)
	uint8_t Pad_0x68[0x28]; // 0x68(0x28)
};

// Object: Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{
};

// Object: Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xC0 (Inherited: 0x58)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58(0x10)
	bool bCaptureFramesInHDR; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	int32_t HDRCompressionQuality; // 0x6C(0x4)
	uint8_t CaptureGamut; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct FSoftObjectPath PostProcessingMaterial; // 0x78(0x18)
	bool bDisableScreenPercentage; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0x98(0x8)
	uint8_t Pad_0xA0[0x20]; // 0xA0(0x20)
};

// Object: Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x60 (Inherited: 0x58)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase
{
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xD0 (Inherited: 0x60)
struct UImageSequenceProtocol : UFrameGrabberProtocol
{
	uint8_t Pad_0x60[0x70]; // 0x60(0x70)
};

// Object: Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xD8 (Inherited: 0xD0)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol
{
	int32_t CompressionQuality; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
};

// Object: Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xD0 (Inherited: 0xD0)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol
{
};

// Object: Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xD8 (Inherited: 0xD8)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol
{
};

// Object: Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xD8 (Inherited: 0xD8)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol
{
};

// Object: Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xE0 (Inherited: 0xD0)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol
{
	bool bCompressed; // 0xD0(0x1)
	uint8_t CaptureGamut; // 0xD1(0x1)
	uint8_t Pad_0xD2[0xE]; // 0xD2(0xE)
};

// Object: Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x28 (Inherited: 0x28)
struct IMovieSceneCaptureInterface : IInterface
{
};

// Object: Class MovieSceneCapture.MovieSceneCapture
// Size: 0x220 (Inherited: 0x28)
struct UMovieSceneCapture : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FSoftClassPath ImageCaptureProtocolType; // 0x38(0x18)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x50(0x18)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68(0x8)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70(0x8)
	struct FMovieSceneCaptureSettings Settings; // 0x78(0x70)
	bool bUseSeparateProcess; // 0xE8(0x1)
	bool bCloseEditorWhenCaptureStarts; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x6]; // 0xEA(0x6)
	struct FString AdditionalCommandLineArguments; // 0xF0(0x10)
	struct FString InheritedCommandLineArguments; // 0x100(0x10)
	uint8_t Pad_0x110[0x110]; // 0x110(0x110)


	// Object: Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b6a5f0
	// Params: [ Num(1) Size(0x8) ]
	void SetImageCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType);

	// Object: Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b6a548
	// Params: [ Num(1) Size(0x8) ]
	void SetAudioCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType);

	// Object: Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b6a6b4
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();

	// Object: Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b6a698
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};

// Object: Class MovieSceneCapture.LevelCapture
// Size: 0x240 (Inherited: 0x220)
struct ULevelCapture : UMovieSceneCapture
{
	bool bAutoStartCapture; // 0x220(0x1)
	uint8_t Pad_0x221[0xB]; // 0x221(0xB)
	struct FGuid PrerequisiteActorId; // 0x22C(0x10)
	uint8_t Pad_0x23C[0x4]; // 0x23C(0x4)
};

// Object: Class MovieSceneCapture.MovieSceneBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function MovieSceneCapture.MovieSceneBlueprintLibrary.StopCapture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9b6a07c
	// Params: [ Num(0) Size(0x0) ]
	void StopCapture();

	// Object: Function MovieSceneCapture.MovieSceneBlueprintLibrary.StartCapture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9b6a090
	// Params: [ Num(1) Size(0x1) ]
	bool StartCapture();

	// Object: Function MovieSceneCapture.MovieSceneBlueprintLibrary.Release
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9b6a0c8
	// Params: [ Num(0) Size(0x0) ]
	void Release();

	// Object: Function MovieSceneCapture.MovieSceneBlueprintLibrary.PauseCapture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9b6a068
	// Params: [ Num(0) Size(0x0) ]
	void PauseCapture();

	// Object: Function MovieSceneCapture.MovieSceneBlueprintLibrary.Initialize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9b6a0dc
	// Params: [ Num(4) Size(0x19) ]
	bool Initialize(struct FString OutputFile, int32_t FrameRate, int32_t CompressQuality);
};

// Object: Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureEnvironment : UObject
{

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9b6ac08
	// Params: [ Num(1) Size(0x1) ]
	bool IsCaptureInProgress();

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9b6ac74
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCaptureFrameNumber();

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x9b6ac40
	// Params: [ Num(1) Size(0x4) ]
	float GetCaptureElapsedTime();

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9b6abd4
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();

	// Object: Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9b6aba0
	// Params: [ Num(1) Size(0x8) ]
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
};

// Object: Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xD8 (Inherited: 0x58)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
	struct UWorld* World; // 0x58(0x8)
	uint8_t Pad_0x60[0x78]; // 0x60(0x78)


	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b6bb50
	// Params: [ Num(0) Size(0x0) ]
	void StopCapturingFinalPixels();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b6bb64
	// Params: [ Num(1) Size(0x50) ]
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID);

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b6bc4c
	// Params: [ Num(2) Size(0x58) ]
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& BufferID);

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnWarmUp();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnTick();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnStartCapture();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x9b6bdb4
	// Params: [ Num(1) Size(0x1) ]
	bool OnSetup();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnPreTick();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(3) Size(0x70) ]
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics);

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnPauseCapture();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnFinalize();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnCaptureFrame();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	// Flags: [Native|Event|Protected|BlueprintEvent|Const]
	// Offset: 0x9b6bd74
	// Params: [ Num(1) Size(0x1) ]
	bool OnCanFinalize();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x88270d8
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginFinalize();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b6ba38
	// Params: [ Num(1) Size(0x10) ]
	struct FFrameMetrics GetCurrentFrameMetrics();

	// Object: Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9b6ba54
	// Params: [ Num(2) Size(0x20) ]
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics);
};

// Object: Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xE0 (Inherited: 0xD8)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol
{
	enum class EDesiredImageFormat Format; // 0xD8(0x1)
	bool bEnableCompression; // 0xD9(0x1)
	uint8_t Pad_0xDA[0x2]; // 0xDA(0x2)
	int32_t CompressionQuality; // 0xDC(0x4)


	// Object: Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b6c870
	// Params: [ Num(4) Size(0x71) ]
	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData);

	// Object: Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9b6caa4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GenerateFilenameForCurrentFrame();

	// Object: Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9b6cb40
	// Params: [ Num(3) Size(0x68) ]
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& StreamID);
};

// Object: Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x78 (Inherited: 0x60)
struct UVideoCaptureProtocol : UFrameGrabberProtocol
{
	bool bUseCompression; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	float CompressionQuality; // 0x64(0x4)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
};

} // namespace SDK
