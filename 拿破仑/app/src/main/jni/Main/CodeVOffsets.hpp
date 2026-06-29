#pragma once

#include <cstdint>

// Code V ARM64 — updated from dwdw SDK dump + CN community chains (2025 build).
// Re-scan libUE4 globals after each game patch.

namespace CodeVOff
{

// --- libUE4.so globals ---
//constexpr uintptr_t MatrixRoot         = 0xB242C00; // was Napoleon 0xB025890
//constexpr uintptr_t GlobalRoot         = 0xB226540; // was Napoleon 0xB0091D0
constexpr uintptr_t GNativeAndroidApp  = 0xAE4E828; // was Napoleon 0xACCAB18

constexpr uintptr_t MatrixChain1       = 0x10;
constexpr uintptr_t MatrixChain2       = 0x8;
constexpr uintptr_t MatrixBase         = 0x690;

constexpr uintptr_t WorldChain1        = 0x70;
constexpr uintptr_t WorldChain2        = 0x70;
constexpr uintptr_t SelfChain1         = 0x30;
constexpr uintptr_t SelfPawn           = 0x2F8;

// --- UWorld / GameState ---
constexpr uintptr_t GameState          = 0x198;
constexpr uintptr_t PlayerArray        = 0x2E0; // TArray.Data at this offset
constexpr uintptr_t PlayerArrayCount   = 0x2E8; // TArray.Count (Data + 8)

// --- APawn / APlayerState ---
constexpr uintptr_t PlayerState        = 0x2E8;
constexpr uintptr_t PawnPrivate        = 0x328;
constexpr uintptr_t CampID             = 0x4AC; // was Napoleon 0x49C

// --- Humanoid filter (ACharacter::CrouchedEyeHeight) ---
constexpr uintptr_t PawnHeightCheck    = 0x3FC;
constexpr float     PawnHeightValue    = 58.0f;

// --- Position: decrypted movement (preferred) ---
constexpr uintptr_t CVCharacterMovement = 0x1E78;
constexpr uintptr_t MovementWorldPos   = 0x270;

// --- Position: Napoleon legacy (CapsuleComponent world pos) ---
constexpr uintptr_t CapsuleComponent   = 0x338;
constexpr uintptr_t CompWorldPos       = 0x1F0;

// --- Self position: Napoleon mesh chain fallback ---
constexpr uintptr_t SelfPosChain[] = {0x330, 0x148, 0x330, 0x530, 0x710};
constexpr uintptr_t SelfPosFinal     = 0x8;

// --- Health ---
constexpr uintptr_t HealthRoot         = 0x6E8;
constexpr uintptr_t HealthMid          = 0x158;
constexpr uintptr_t HealthCur          = 0xE8;
constexpr uintptr_t HealthMax          = 0xF0; // HealthCur + 8

// --- Misc ---
constexpr uintptr_t LocalCampRelation  = 0x920;
constexpr int       MaxPlayerScan      = 1000;
constexpr float     MaxDistanceM       = 600.f;

} // namespace CodeVOff
