// @AnubisCheatz
//
// sdk genrated by @crusher_14
//
// https://t.me/AnubisCheatz

#pragma once

namespace SDK
{

// Object: Class UIParticleSystem.ParticleSystemWidget
// Size: 0x170 (Inherited: 0x140)
struct UParticleSystemWidget : UWidget
{
	struct UParticleSystem* ParticleSystemTemplate; // 0x140(0x8)
	bool bReactivate; // 0x148(0x1)
	bool bActiveSysWhenInit; // 0x149(0x1)
	uint8_t Pad_0x14A[0x6]; // 0x14A(0x6)
	struct UParticleSystemComponent* WorldParticleComponent; // 0x150(0x8)
	struct AActor* WorldParticleActor; // 0x158(0x8)
	uint8_t Pad_0x160[0x10]; // 0x160(0x10)


	// Object: Function UIParticleSystem.ParticleSystemWidget.SetReactivate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x31732c0
	// Params: [ Num(1) Size(0x1) ]
	void SetReactivate(bool bActivateAndReset);

	// Object: Function UIParticleSystem.ParticleSystemWidget.ActivateParticles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3173370
	// Params: [ Num(2) Size(0x2) ]
	void ActivateParticles(bool bActive, bool bReset);
};

// Object: Class UIParticleSystem.UIParticleComponent
// Size: 0x890 (Inherited: 0x890)
struct UUIParticleComponent : UParticleSystemComponent
{
};

// Object: Class UIParticleSystem.UIParticleActor
// Size: 0x2E0 (Inherited: 0x2E0)
struct AUIParticleActor : AActor
{
};

} // namespace SDK
