#pragma once

#include <cstdint>

// Farlight 84 ARM64 — from farlight sdk/Offsets.hpp + UE_* SDK class layouts.
// Re-dump after each game patch.

namespace FarlightOff
{

// --- libUE4.so globals (farlight sdk/Offsets.hpp UEPointers) ---
constexpr uintptr_t GWorld             = 0xD078858;
constexpr uintptr_t GEngine            = 0xD078610;
constexpr uintptr_t GNames               = 0xCEE0B48;
constexpr uintptr_t GUObjectArray        = 0xCEECA58;
// Resolved at runtime via dlsym("GNativeAndroidApp") when zero.
constexpr uintptr_t GNativeAndroidApp    = 0x0;

// --- UWorld ---
constexpr uintptr_t GameState            = 0x1A0;
constexpr uintptr_t OwningGameInstance   = 0x1F8;

// --- UGameInstance / ULocalPlayer / UPlayer ---
constexpr uintptr_t LocalPlayers         = 0x38;
constexpr uintptr_t PlayerController       = 0x30;

// --- APlayerController ---
constexpr uintptr_t AcknowledgedPawn       = 0x378;
constexpr uintptr_t PlayerCameraManager    = 0x390;

// --- APlayerCameraManager / FCameraCacheEntry / FMinimalViewInfo ---
constexpr uintptr_t CameraCache          = 0x350;
constexpr uintptr_t CameraCachePOV       = 0x10;
constexpr uintptr_t POVLocation          = 0x0;
constexpr uintptr_t POVRotation          = 0xC;
constexpr uintptr_t POVFOV               = 0x80;
constexpr uintptr_t POVAspectRatio       = 0x98;

// --- AGameStateBase / APlayerState ---
constexpr uintptr_t PlayerArray          = 0x318;
constexpr uintptr_t PawnPrivate          = 0x348;

// --- APawn / AActor / USceneComponent ---
constexpr uintptr_t PlayerState          = 0x300;
constexpr uintptr_t RootComponent        = 0x1B0;
constexpr uintptr_t ComponentToWorld     = 0x1D0;
constexpr uintptr_t CompWorldTranslation = ComponentToWorld + 0x10;

// --- ACharacter ---
constexpr uintptr_t Mesh                 = 0x340;
constexpr uintptr_t CharacterMovement    = 0x348;
constexpr uintptr_t CapsuleComponent     = 0x350;
constexpr uintptr_t CrouchedEyeHeight    = 0x3EC;

// --- UCharacterMovementComponent ---
constexpr uintptr_t LastUpdateLocation   = 0x280;

// --- ASolarCharacterBase / GAS health ---
constexpr uintptr_t SolarAbilitySystemComponent = 0x6B8;
constexpr uintptr_t SpawnedAttributes    = 0x168;
constexpr uintptr_t MaxHealthAttr        = 0x30;
constexpr uintptr_t CurrentHealthAttr    = 0x40;
constexpr uintptr_t AttributeCurrentValue = 0xC;

// --- ASolarPlayerState / ASolarTeamInfo ---
constexpr uintptr_t TeamInfo             = 0xFD8;
constexpr uintptr_t bIsSameTeamWithLocalPlayer = 0x830;
constexpr uintptr_t TeamID               = 0x2F8;

constexpr int       MaxPlayerScan        = 128;
constexpr float     MaxDistanceM         = 600.f;

} // namespace FarlightOff
