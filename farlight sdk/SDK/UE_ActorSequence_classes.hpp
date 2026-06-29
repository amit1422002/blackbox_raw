// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class ActorSequence.ActorSequence
// Size: 0x370 (Inherited: 0x348)
struct UActorSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene; // 0x348(0x8)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x350(0x20)
};

// Object: Class ActorSequence.ActorSequenceComponent
// Size: 0x100 (Inherited: 0xD8)
struct UActorSequenceComponent : UActorComponent
{
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xD8(0x14)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct UActorSequence* Sequence; // 0xF0(0x8)
	struct UActorSequencePlayer* SequencePlayer; // 0xF8(0x8)
};

// Object: Class ActorSequence.ActorSequencePlayer
// Size: 0x888 (Inherited: 0x888)
struct UActorSequencePlayer : UMovieSceneSequencePlayer
{
};

} // namespace SDK
