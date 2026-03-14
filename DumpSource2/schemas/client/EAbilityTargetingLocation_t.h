enum EAbilityTargetingLocation_t : uint32_t
{
	// MPropertyDescription = "Has no targeting location. Idk what this does."
	CITADEL_ABILITY_TARGETING_LOCATION_NONE = 0,
	// MPropertyDescription = "Targets the caster, and sets the position to be the caster's center."
	CITADEL_ABILITY_TARGETING_LOCATION_SELF = 1,
	// MPropertyDescription = "Targets a specific unit that passes the filter. Can target multiple entities, by increasing the AbilityUnitTargetLimit property."
	CITADEL_ABILITY_TARGETING_LOCATION_UNIT = 2,
	// MPropertyDescription = "Targets a SURFACE (not the ground), and fails if no surface is within reach of AbilityRange."
	CITADEL_ABILITY_TARGETING_LOCATION_GROUND = 3,
	// MPropertyDescription = "Targets a unit closest to the surface center.  If there is no unit, functions like TARGETING_LOCATION_GROUND"
	CITADEL_ABILITY_TARGETING_LOCATION_UNIT_OR_GROUND = 4,
	// MPropertyDescription = "Targets the ground a fixed distance away from the caster, and drop down. Fails if no target is found."
	CITADEL_ABILITY_TARGETING_LOCATION_FIXED_RANGE_GROUND = 5,
	// MPropertyDescription = "Targets a position on the minimap. Dunno how this handles elevation."
	CITADEL_ABILITY_TARGETING_LOCATION_MINIMAP_GROUND = 6,
	// MPropertyDescription = "Targets a unit on the minimap that passes the filter."
	CITADEL_ABILITY_TARGETING_LOCATION_MINIMAP_UNIT = 7,
	CITADEL_ABILITY_TARGETING_LOCATION_CUSTOM = 8,
	// MPropertyDescription = "Deployment targeting. Specifics around the location is defined by DeploymentInfo_t."
	CITADEL_ABILITY_TARGETING_LOCATION_DEPLOYED_OBJECT = 9,
	// MPropertySuppressEnumerator
	CITADEL_ABILITY_TARGETING_LOCATION_COUNT = 10,
};
