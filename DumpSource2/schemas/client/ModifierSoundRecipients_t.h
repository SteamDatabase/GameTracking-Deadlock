enum ModifierSoundRecipients_t : uint32_t
{
	// MPropertyFriendlyName = "Always"
	MODIFIER_SOUND_RECIPIENT_ALWAYS = 0,
	// MPropertyFriendlyName = "Modifier Owner Is Local Player"
	MODIFIER_SOUND_RECIPIENT_PARENT_IS_LOCAL_PLAYER = 1,
	// MPropertyFriendlyName = "Modifier Owner on same team as Local Player"
	MODIFIER_SOUND_RECIPIENT_PARENT_ON_SAME_TEAM_AS_LOCAL_PLAYER = 2,
	// MPropertyFriendlyName = "Modifier Owner on opposite team as Local Player"
	MODIFIER_SOUND_RECIPIENT_PARENT_ON_OPPOSITE_TEAM_AS_LOCAL_PLAYER = 3,
};
