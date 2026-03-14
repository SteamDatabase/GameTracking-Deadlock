// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_BreakablePropHealthPickupVData",
//	"m_friendlyParticle": "",
//	"m_enemyParticle": "",
//	"m_friendlyModelParticle": "",
//	"m_enemyModelParticle": "",
//	"m_friendlyInteractiveParticle": "",
//	"m_enemyInteractiveParticle": "",
//	"m_gainedParticle": "",
//	"m_vacuumStartParticle": "",
//	"m_Color":
//	[
//		0,
//		0,
//		0,
//		0
//	],
//	"m_hModel": "",
//	"m_sDefaultMaterialGroupName": "",
//	"m_sNameLocString": "",
//	"m_nNameOffset": 60,
//	"m_bShowOnMinimap": false,
//	"m_bIsPermanentPickup": false,
//	"m_iTempParticleSheetIndex": -1,
//	"m_sMiniMapCssClass": "",
//	"m_flParticleRadius": 80.000000,
//	"m_sPickupSound": "",
//	"m_sSpawnSound": "",
//	"m_strVacuumStartSound": "",
//	"m_sAmbientSound": "",
//	"m_flPickupRadius":
//	{
//		"m_flBase": 0.000000,
//		"m_flPerMinuteAfterStart": 0.000000,
//		"m_flStartMinute": 0.000000,
//		"m_flMaxValue": 0.000000
//	},
//	"m_flPickupExpirationDuration":
//	{
//		"m_flBase": 0.000000,
//		"m_flPerMinuteAfterStart": 0.000000,
//		"m_flStartMinute": 0.000000,
//		"m_flMaxValue": 0.000000
//	},
//	"bPhysicallyDropToTheGroundOnSpawn": false,
//	"m_flSolidRadius": 5.000000,
//	"m_fInitialSpawnXYSpeed": 0.000000,
//	"m_fInitialSpawnZSpeed":
//	[
//		100.000000,
//		200.000000
//	],
//	"m_flFallGravity": 1.000000,
//	"m_flHoverOffset": 0.000000,
//	"m_bPicupIsVacuum": false,
//	"m_flInitialVacuumSideSpeed":
//	[
//		50.000000,
//		100.000000
//	],
//	"m_flInitialVacuumUpSpeed":
//	[
//		10.000000,
//		100.000000
//	],
//	"m_VacuumToPlayerSpeedCurve":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	},
//	"m_VacuumInitialVelSpeedCurve":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	},
//	"m_flVacuumCloseEnoughToPickup": 5.000000,
//	"m_EffectDistanceToRadiusRemap":
//	[
//		300.000000,
//		0.000000,
//		1.000000,
//		0.200000
//	],
//	"m_bSameTeamOnly": false,
//	"m_flOutlineRange": -1.000000,
//	"m_OutlineColor":
//	[
//		0,
//		0,
//		0,
//		0
//	],
//	"m_ParticleAOEHeal": "",
//	"m_flHealMaxHealthPercent":
//	{
//		"m_flBase": 0.000000,
//		"m_flPerMinuteAfterStart": 0.000000,
//		"m_flStartMinute": 0.000000,
//		"m_flMaxValue": 0.000000
//	},
//	"m_flHealFixed":
//	{
//		"m_flBase": 0.000000,
//		"m_flPerMinuteAfterStart": 0.000000,
//		"m_flStartMinute": 0.000000,
//		"m_flMaxValue": 0.000000
//	},
//	"m_flMissingPctHeal":
//	{
//		"m_flBase": 0.000000,
//		"m_flPerMinuteAfterStart": 0.000000,
//		"m_flStartMinute": 0.000000,
//		"m_flMaxValue": 0.000000
//	},
//	"m_flRegenMaxHealthPercent":
//	{
//		"m_flBase": 0.000000,
//		"m_flPerMinuteAfterStart": 0.000000,
//		"m_flStartMinute": 0.000000,
//		"m_flMaxValue": 0.000000
//	},
//	"m_flRegenFixed":
//	{
//		"m_flBase": 0.000000,
//		"m_flPerMinuteAfterStart": 0.000000,
//		"m_flStartMinute": 0.000000,
//		"m_flMaxValue": 0.000000
//	},
//	"m_flMissingPctRegen":
//	{
//		"m_flBase": 0.000000,
//		"m_flPerMinuteAfterStart": 0.000000,
//		"m_flStartMinute": 0.000000,
//		"m_flMaxValue": 0.000000
//	},
//	"m_bUseFixedDuration": true,
//	"m_flRegenDuration": 1.000000,
//	"m_flRegenDurationTroopers": 1.000000,
//	"m_flRegenTrooperMulti": 1.000000,
//	"m_flRegenHPS": 50.000000,
//	"m_RegenModifier":
//	{
//	},
//	"m_flAOERadius": 0.000000,
//	"m_AOETargetTypes": "",
//	"m_AOETargetFlags": "",
//	"m_AOELOSCheckType": "ELOSCheck_None"
//}
class CCitadel_BreakablePropHealthPickupVData : public CCitadel_BreakablePropPickupVData
{
	// MPropertyGroupName = "Visuals"
	// MPropertyFriendlyName = "AOE Heal Particle"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParticleAOEHeal;
	// MPropertyFriendlyName = "Instant max health heal percent"
	// MPropertyDescription = "Between 0 and 100, what percent of max health should a pickup heal instantly on pickup."
	TimeScalingValue_t m_flHealMaxHealthPercent;
	// MPropertyFriendlyName = "Instant heal"
	// MPropertyDescription = "Fixed amount to heal instantly on pickup"
	TimeScalingValue_t m_flHealFixed;
	// MPropertyFriendlyName = "Instant Percent Missing Heal"
	// MPropertyDescription = "Between 0 and 100, what percent of missing health to heal instantly"
	TimeScalingValue_t m_flMissingPctHeal;
	// MPropertyFriendlyName = "Max health regen percent"
	// MPropertyDescription = "Between 0 and 100, what percent of max health should a pickup regen over time"
	TimeScalingValue_t m_flRegenMaxHealthPercent;
	// MPropertyFriendlyName = "Regen"
	// MPropertyDescription = "Amount of health to regen over time"
	TimeScalingValue_t m_flRegenFixed;
	// MPropertyFriendlyName = "Percent Missing Regen"
	// MPropertyDescription = "Between 0 and 100, what percent of missing health to regen"
	TimeScalingValue_t m_flMissingPctRegen;
	// MPropertyStartGroup = "Regen Modifier Settings"
	bool m_bUseFixedDuration;
	// MPropertyDescription = "How long to apply total regen (HPS dynamically calculated)"
	float32 m_flRegenDuration;
	// MPropertyDescription = "How long to apply total regen (HPS dynamically calculated) for troopers"
	float32 m_flRegenDurationTroopers;
	// MPropertyDescription = "Amount to increase regen for troopers"
	float32 m_flRegenTrooperMulti;
	// MPropertyDescription = "How much HPS to provide (duration dynamically calculated)"
	float32 m_flRegenHPS;
	CEmbeddedSubclass< CCitadelModifier > m_RegenModifier;
	// MPropertyStartGroup = ""
	// MPropertyFriendlyName = "Heal AOE Radius"
	// MPropertyDescription = "When > 0, applies the heal to units within the radius"
	float32 m_flAOERadius;
	// MPropertyStartGroup = "AOE Heal Settings"
	// MPropertySuppressExpr = "m_flAOERadius == 0"
	// MPropertyFriendlyName = "Target Types"
	CITADEL_UNIT_TARGET_TYPE m_AOETargetTypes;
	// MPropertySuppressExpr = "m_flAOERadius == 0"
	// MPropertyFriendlyName = "Targeting Flags"
	CITADEL_UNIT_TARGET_FLAGS m_AOETargetFlags;
	// MPropertySuppressExpr = "m_flAOERadius == 0"
	// MPropertyFriendlyName = "LOS Method"
	ELOSCheck m_AOELOSCheckType;
};
