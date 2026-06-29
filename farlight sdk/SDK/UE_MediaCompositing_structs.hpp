// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// Size: 0x50 (Inherited: 0x40)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct UMediaSource* MediaSource; // 0x40(0x8)
	struct FFrameNumber SectionStartFrame; // 0x48(0x4)
	bool bLoop; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size: 0x48 (Inherited: 0x18)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneMediaSectionParams Params; // 0x18(0x30)
};

// Object: ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneMediaSectionParams
{
	struct UMediaSoundComponent* MediaSoundComponent; // 0x0(0x8)
	struct UMediaSource* MediaSource; // 0x8(0x8)
	struct UMediaTexture* MediaTexture; // 0x10(0x8)
	struct UMediaPlayer* MediaPlayer; // 0x18(0x8)
	struct FFrameNumber SectionStartFrame; // 0x20(0x4)
	struct FFrameNumber SectionEndFrame; // 0x24(0x4)
	bool bLooping; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FFrameNumber StartFrameOffset; // 0x2C(0x4)
};

} // namespace SDK
