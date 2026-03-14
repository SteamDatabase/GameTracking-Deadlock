enum EAbilityRequirements_t : uint16_t
{
	// MPropertyFriendlyName = "None"
	ERequirementNone = 0,
	// MPropertyFriendlyName = "Requires Charges Ability"
	ERequirementChargedAbility = 1,
	// MPropertyFriendlyName = "Requires Channelled Abillity"
	ERequirementChannelledAbility = 2,
	// MPropertyFriendlyName = "Requires Non-Charges ULT"
	ERequirementNonChargedULT = 4,
	// MPropertyFriendlyName = "Requires Street Brawl"
	ERequirementStreetBrawl = 8,
};
