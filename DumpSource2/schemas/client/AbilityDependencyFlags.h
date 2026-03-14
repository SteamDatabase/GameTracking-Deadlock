enum AbilityDependencyFlags : uint16_t
{
	None = 0,
	// MPropertyFriendlyName = "Link Imbues"
	// MPropertyDescription = "Imbues applied to this or the dependant shall be applied to the other"
	LinkImbues = 1,
	// MPropertyFriendlyName = "Link Upgrades"
	// MPropertyDescription = "Upgrades applied to this or the dependant shall be applied to the other"
	LinkUpgrades = 2,
	// MPropertyFriendlyName = "Display as Sub-Ability"
	// MPropertyDescription = "Show this dependant in our ability icons as a sub-ability"
	DisplayAsSubAbility = 4,
};
