// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x118 (Inherited: 0xD8)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection
{
	struct FMovieSceneGeometryCacheParams Params; // 0xD8(0x40)
};

// Object: Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x58(0x10)
};

} // namespace SDK
