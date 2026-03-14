enum NPC_STATE : uint32_t
{
	// MPropertySuppressEnumerator
	NPC_STATE_INVALID = -1,
	// MPropertySuppressEnumerator
	NPC_STATE_INIT = 0,
	// MPropertyFriendlyName = "Idle"
	NPC_STATE_IDLE = 1,
	// MPropertyFriendlyName = "Alert"
	NPC_STATE_ALERT = 2,
	// MPropertyFriendlyName = "Combat"
	NPC_STATE_COMBAT = 3,
	// MPropertySuppressEnumerator
	NPC_STATE_SCRIPT = 4,
	// MPropertyFriendlyName = "Dead"
	NPC_STATE_DEAD = 5,
	// MPropertyFriendlyName = "Inert"
	NPC_STATE_INERT = 6,
	// MPropertySuppressEnumerator
	NPC_STATE_SYNCHRONIZED_SECONDARY = 7,
	// MPropertySuppressEnumerator
	NUM_NPC_STATES = 8,
};
