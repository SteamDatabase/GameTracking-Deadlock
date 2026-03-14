enum StatusEffectProperty_t : uint32_t
{
	// MPropertyFriendlyName = "Don't show a status effect in the Important Box"
	EStatusEffect_None = 0,
	// MPropertyFriendlyName = "Shows EMP Status Effect in the Important Box"
	EStatusEffect_EMP = 1,
	// MPropertyFriendlyName = "Shows Stun Status Effect in the Important Box"
	EStatusEffect_Stun = 2,
	// MPropertyFriendlyName = "Shows Freeze Status Effect in the Important Box"
	EStatusEffect_Freeze = 3,
	// MPropertyFriendlyName = "Shows Burn Status Effect in the Important Box"
	EStatusEffect_Burn = 4,
	// MPropertyFriendlyName = "Shows Bleed Status Effect in the Important Box"
	EStatusEffect_Bleed = 5,
	// MPropertyFriendlyName = "Shows Sleep Status Effect in the Important Box"
	EStatusEffect_Sleep = 6,
	// MPropertyFriendlyName = "Shows Tethered Status Effect in the Important Box"
	EStatusEffect_Tethered = 7,
	// MPropertyFriendlyName = "Shows Immobilized Status Effect in the Important Box"
	EStatusEffect_Immobilized = 8,
	// MPropertyFriendlyName = "Shows Disarmed Status Effect in the Important Box"
	EStatusEffect_Disarmed = 9,
	// MPropertyFriendlyName = "Shows Invisible Status Effect in the Important Box"
	EStatusEffect_Invisible = 10,
	// MPropertyFriendlyName = "Shows Stacks Status Effect in the Important Box"
	EStatusEffect_Stacks = 11,
	// MPropertyFriendlyName = "Shows Infinite Clip Status Effect in the Important Box"
	EStatusEffect_InfiniteClip = 12,
	// MPropertyFriendlyName = "Shows Bullet Debuff Status Effect in the Important Box"
	EStatusEffect_BulletDebuff = 13,
	// MPropertyFriendlyName = "Shows Buff Status Effect in the Important Box"
	EStatusEffect_Buff = 14,
	// MPropertyFriendlyName = "Shows Petrify Status Effect in the Important Box"
	EStatusEffect_Petrify = 15,
	// MPropertyFriendlyName = "Shows Debuff Status Effect in the Important Box"
	EStatusEffect_CustomDebuff = 16,
	// MPropertyFriendlyName = "Shows Unstoppable Status Effect in the Important Box"
	EStatusEffect_Unstoppable = 17,
	// MPropertyFriendlyName = "Shows Displacement Status Effect in the Important Box"
	EStatusEffect_Displacement = 18,
	// MPropertyFriendlyName = "Shows Displacement Status Effect in the Important Box"
	EStatusEffect_Silence = 19,
	// MPropertySuppressEnumerator
	EStatusEffect_Count = 20,
};
