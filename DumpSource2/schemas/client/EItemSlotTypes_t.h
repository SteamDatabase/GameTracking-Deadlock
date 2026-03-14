enum EItemSlotTypes_t : uint8_t
{
	// MPropertyFriendlyName = "Invalid"
	EItemSlotType_Invalid = -1,
	// MPropertyFriendlyName = "Weapon"
	EItemSlotType_WeaponMod = 0,
	// MPropertyFriendlyName = "Armor"
	EItemSlotType_Armor = 1,
	// MPropertyFriendlyName = "Tech"
	EItemSlotType_Tech = 2,
	// MPropertyFriendlyName = "Universal"
	// MPropertySuppressEnumerator
	EItemSlotType_Universal = 3,
	// MPropertyFriendlyName = "Locked Universal"
	// MPropertySuppressEnumerator
	EItemSlotType_UniversalLocked = 4,
	// MPropertyFriendlyName = "All"
	// MPropertySuppressEnumerator
	EItemSlotType_All = 5,
	// MPropertyFriendlyName = "Favorites"
	// MPropertySuppressEnumerator
	EItemSlotType_Favorites = 6,
	// MPropertySuppressEnumerator
	EMaxItemSlotTypes = 7,
};
