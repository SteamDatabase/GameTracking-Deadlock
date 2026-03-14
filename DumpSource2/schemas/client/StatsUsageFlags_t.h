enum StatsUsageFlags_t : uint32_t
{
	None = 0,
	// MPropertySuppressEnumerator
	IntrinsicallyProvidedInModifier = 1,
	// MPropertyFriendlyName = "Provided in ability code via MModifierFunction to caster"
	IntrinsicallyProvidedInAbility = 2,
	// MPropertyFriendlyName = "Has some condition to be applied (Close Range, High Health Pct, "
	ConditionallyApplied = 4,
	// MPropertyFriendlyName = "Don't show deltas because it's being applied to an enemy. i.e. We don't want to show fire rate or movement slow on yourself."
	ConditionallyEnemyApplied = 8,
};
