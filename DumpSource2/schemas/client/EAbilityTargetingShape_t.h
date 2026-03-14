enum EAbilityTargetingShape_t : uint32_t
{
	CITADEL_ABILITY_TARGETING_SHAPE_NONE = 0,
	// MPropertyDescription = "Doesn't do anything but draw the sat sphere if CITADEL_ABILITY_BEHAVIOR_ALWAYS_PREVIEW_RADIUS is also set as a behavior."
	CITADEL_ABILITY_TARGETING_SHAPE_SPHERE = 1,
	// MPropertyDescription = "Draw the sat sphere for range, and use our line visualizer for our preview. Width is determined by GetAOERadius()."
	CITADEL_ABILITY_TARGETING_SHAPE_LINE = 2,
	// MPropertyDescription = "Use our aoe visualizer for our preview, and a sat sphere at destination. AOE is determined by GetAOERadius()."
	CITADEL_ABILITY_TARGETING_SHAPE_CIRCLE = 3,
	// MPropertyDescription = "THIS ONE ACTUALLY CHANGES TARGETING BEHAVIOR! Also use our cone visualizer for our preview, and a sat sphere at destination. AOE is determined by settings below, or by GetTargetingConeAngle if overridden."
	CITADEL_ABILITY_TARGETING_SHAPE_CONE = 4,
	// MPropertyDescription = "Draw a sat sphere, but no preview. Only partially implemented."
	CITADEL_ABILITY_TARGETING_SHAPE_CAPSULE = 5,
	// MPropertySuppressEnumerator
	CITADEL_ABILITY_TARGETING_SHAPE_COUNT = 6,
};
