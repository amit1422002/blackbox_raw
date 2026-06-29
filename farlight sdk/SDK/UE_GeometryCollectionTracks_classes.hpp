// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x108 (Inherited: 0xD8)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection
{
	struct FMovieSceneGeometryCollectionParams Params; // 0xD8(0x30)
};

// Object: Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x58(0x10)
};

} // namespace SDK
