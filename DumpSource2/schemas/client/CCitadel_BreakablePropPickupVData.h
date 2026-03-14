// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_BreakablePropPickupVData",
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
//	]
//}
class CCitadel_BreakablePropPickupVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	// MPropertyFriendlyName = "Spawn Particle"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_friendlyParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_enemyParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_friendlyModelParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_enemyModelParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_friendlyInteractiveParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_enemyInteractiveParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_gainedParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_vacuumStartParticle;
	// MPropertyFriendlyName = "Spawn Particle Color"
	// MPropertyDescription = "Spawn Particle Color"
	Color m_Color;
	// MPropertyDescription = "Model"
	// MPropertyProvidesEditContextString = "ToolEditContext_ID_VMDL"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel;
	// MPropertyFriendlyName = "Material group"
	// MPropertyDescription = "Which material group of the model should be used?"
	CModelMaterialGroupName m_sDefaultMaterialGroupName;
	// MPropertyStartGroup = ""
	// MPropertyFriendlyName = "Pickup Name Loc String"
	CUtlString m_sNameLocString;
	int32 m_nNameOffset;
	// MPropertyFriendlyName = "Show On Minimap"
	bool m_bShowOnMinimap;
	bool m_bIsPermanentPickup;
	int32 m_iTempParticleSheetIndex;
	CUtlString m_sMiniMapCssClass;
	float32 m_flParticleRadius;
	// MPropertyStartGroup = "Audio"
	// MPropertyFriendlyName = "Pickup Sound"
	CSoundEventName m_sPickupSound;
	// MPropertyFriendlyName = "Spawn Sound"
	CSoundEventName m_sSpawnSound;
	// MPropertyFriendlyName = "Vacuum Start Sound"
	// MPropertyDescription = "Sound that plays when vacuuming starts and only for the vacuuming player"
	CSoundEventName m_strVacuumStartSound;
	// MPropertyFriendlyName = "Ambient Sound"
	CSoundEventName m_sAmbientSound;
	// MPropertyStartGroup = ""
	// MPropertyFriendlyName = "Pickup Radius"
	TimeScalingValue_t m_flPickupRadius;
	// MPropertyFriendlyName = "Pickup Expiration Duration"
	TimeScalingValue_t m_flPickupExpirationDuration;
	// MPropertyDescription = "When true, don't allow pickup until we've fallen to the ground"
	bool bPhysicallyDropToTheGroundOnSpawn;
	// MPropertyStartGroup = "Fall To Ground Settings"
	// MPropertyDescription = "Radius when solid and falling to the ground"
	// MPropertySuppressExpr = "bPhysicallyDropToTheGroundOnSpawn == false"
	float32 m_flSolidRadius;
	// MPropertySuppressExpr = "bPhysicallyDropToTheGroundOnSpawn == false"
	CRangeFloat m_fInitialSpawnXYSpeed;
	// MPropertySuppressExpr = "bPhysicallyDropToTheGroundOnSpawn == false"
	CRangeFloat m_fInitialSpawnZSpeed;
	// MPropertySuppressExpr = "bPhysicallyDropToTheGroundOnSpawn == false"
	float32 m_flFallGravity;
	// MPropertyDescription = "Optionally how far to hover off the ground"
	// MPropertySuppressExpr = "bPhysicallyDropToTheGroundOnSpawn == false"
	float32 m_flHoverOffset;
	// MPropertyStartGroup = ""
	// MPropertyDescription = "When true, the pickup will vacuum to the first player that gets within the pickup radius"
	bool m_bPicupIsVacuum;
	// MPropertyStartGroup = "Vacuum Settings"
	// MPropertySuppressExpr = "m_bPicupIsVacuum == false"
	CRangeFloat m_flInitialVacuumSideSpeed;
	// MPropertySuppressExpr = "m_bPicupIsVacuum == false"
	CRangeFloat m_flInitialVacuumUpSpeed;
	// MPropertySuppressExpr = "m_bPicupIsVacuum == false"
	CPiecewiseCurve m_VacuumToPlayerSpeedCurve;
	// MPropertySuppressExpr = "m_bPicupIsVacuum == false"
	CPiecewiseCurve m_VacuumInitialVelSpeedCurve;
	// MPropertySuppressExpr = "m_bPicupIsVacuum == false"
	float32 m_flVacuumCloseEnoughToPickup;
	// MPropertySuppressExpr = "m_bPicupIsVacuum == false"
	CRemapFloat m_EffectDistanceToRadiusRemap;
	// MPropertyStartGroup = ""
	// MPropertyDescription = "When set, only exists for the team the pickup is on"
	bool m_bSameTeamOnly;
	// MPropertyStartGroup = "Outline"
	float32 m_flOutlineRange;
	// MPropertyColorPlusAlpha
	Color m_OutlineColor;
};
