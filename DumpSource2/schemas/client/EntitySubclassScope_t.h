enum EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = -1,
	// MPropertyFriendlyName = "Misc"
	// MEntitySubclassScopeFile = "scripts/misc.vdata"
	SUBCLASS_SCOPE_MISC = 0,
	// MPropertyFriendlyName = "Precipitation"
	// MEntitySubclassScopeFile = "scripts/precipitation.vdata"
	SUBCLASS_SCOPE_PRECIPITATION = 1,
	// MPropertyFriendlyName = "Modifiers"
	// MEntitySubclassScopeFile = "scripts/modifiers.vdata"
	SUBCLASS_SCOPE_MODIFIERS = 2,
	// MPropertyFriendlyName = "NPCUnit"
	// MEntitySubclassScopeFile = "scripts/npc_units.vdata"
	SUBCLASS_SCOPE_NPC_UNITS = 3,
	// MPropertyFriendlyName = "Abilities"
	// MEntitySubclassScopeFile = "scripts/abilities.vdata"
	SUBCLASS_SCOPE_ABILITIES = 4,
	// MPropertyFriendlyName = "ScaleFunctions"
	// MEntitySubclassScopeFile = "scripts/scale_functions.vdata"
	SUBCLASS_SCOPE_SCALE_FUNCTIONS = 5,
	// MPropertyFriendlyName = "Loot Tables"
	// MEntitySubclassScopeFile = "scripts/loot_tables.vdata"
	SUBCLASS_SCOPE_LOOT_TABLES = 6,
	SUBCLASS_SCOPE_COUNT = 7,
};
