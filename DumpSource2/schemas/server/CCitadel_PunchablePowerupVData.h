// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_PunchablePowerupVData",
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
//	"m_sModifer":
//	{
//	},
//	"m_AuraModifier":
//	{
//	},
//	"m_iHitsRequired": 1,
//	"m_flCollisionRadius": 40.000000,
//	"m_flCenterHeightOffset": 40.000000,
//	"m_DamagedParticle": "",
//	"m_sHitSound": ""
//}
class CCitadel_PunchablePowerupVData : public CCitadel_BreakablePropModifierPickupVData
{
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier;
	int32 m_iHitsRequired;
	float32 m_flCollisionRadius;
	float32 m_flCenterHeightOffset;
	// MPropertyStartGroup = "Visuals"
	// MPropertyFriendlyName = "Damaged Particle"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagedParticle;
	// MPropertyGroupName = "Audio"
	CSoundEventName m_sHitSound;
};
