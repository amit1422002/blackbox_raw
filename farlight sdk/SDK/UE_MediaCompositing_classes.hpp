// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0xE8 (Inherited: 0xD8)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection
{
	struct UMediaSource* MediaSource; // 0xD8(0x8)
	bool bLoop; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
};

// Object: Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack
{
};

// Object: Class MediaCompositing.MovieSceneMediaSection
// Size: 0x108 (Inherited: 0xD8)
struct UMovieSceneMediaSection : UMovieSceneSection
{
	struct UMediaSource* MediaSource; // 0xD8(0x8)
	bool bLooping; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x3]; // 0xE1(0x3)
	struct FFrameNumber StartFrameOffset; // 0xE4(0x4)
	struct UMediaTexture* MediaTexture; // 0xE8(0x8)
	struct UMediaSoundComponent* MediaSoundComponent; // 0xF0(0x8)
	bool bUseExternalMediaPlayer; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x100(0x8)
};

// Object: Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x58(0x10)
};

} // namespace SDK
