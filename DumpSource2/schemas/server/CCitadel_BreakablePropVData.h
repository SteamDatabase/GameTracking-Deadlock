// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_BreakablePropVData",
//	"m_bBreakOnDodgeTouch": false,
//	"m_bRenderAfterDeath": false,
//	"m_bSolidAfterDeath": false,
//	"m_bIsPermanent": false,
//	"m_bDamagedByBullets": false,
//	"m_bDamagedByMelee": false,
//	"m_bDamagedByAbilities": false,
//	"m_hModel": "",
//	"m_sAnimgraphParamDamageReceived": "",
//	"m_sAnimgraphParamOnHit": "",
//	"m_sAnimgraphParamOnRespawn": "",
//	"m_sBreakSound": "",
//	"m_sSpawnSound": "",
//	"m_sDamageSound": "",
//	"m_sHeavyDamageSound": "",
//	"m_sHitIndicatorSound": "",
//	"m_iHealth": 0,
//	"m_flInitialSpawnTime": 180.000000,
//	"m_flRespawnTime": 180.000000,
//	"m_flInitialSpawnTimeTest": 1.000000,
//	"m_flRespawnTimeTest": 10.000000,
//	"m_bIsMantleable": false,
//	"m_flPrimaryDropChance": 0.000000,
//	"m_eRollType": "ECitadelRandomRoll_BreakableGoldPickup",
//	"m_vecPrimaryPickups":
//	[
//	],
//	"m_iMatchTimeMinsForLevel2Pickups": 10,
//	"m_vecPickups_lv2":
//	[
//	],
//	"m_iMatchTimeMinsForLevel3Pickups": 25,
//	"m_vecPickups_lv3":
//	[
//	],
//	"m_iLootListDeckSize": 1
//}
class CCitadel_BreakablePropVData : public CEntitySubclassVDataBase
{
	// MPropertyGroupName = "Behavior"
	// MPropertyDescription = "Should this breakable break if a player rolls or dodges into it?"
	// MPropertyFriendlyName = "Break On Dodge?"
	bool m_bBreakOnDodgeTouch;
	// MPropertyGroupName = "Behavior"
	// MPropertyDescription = "If checked, this breakble will stay after destroyed, rather than stop rendering. (useful for animating breakables that might want to stay in a final pose."
	// MPropertyFriendlyName = "Render while dead?"
	bool m_bRenderAfterDeath;
	// MPropertyGroupName = "Behavior"
	// MPropertyDescription = "If checked, this breakble will stay solid after death. (useful for animating breakables that might want to stay in a final pose."
	// MPropertyFriendlyName = "Solid while dead?"
	bool m_bSolidAfterDeath;
	// MPropertyGroupName = "Behavior"
	// MPropertyDescription = "If checked, will fire damage events to animgraph, but will not take damage, so it can't die."
	// MPropertyFriendlyName = "Is Permanent?"
	bool m_bIsPermanent;
	// MPropertyGroupName = "Behavior"
	// MPropertyDescription = "If checked, this breakble will takes damage from Bullets."
	// MPropertyFriendlyName = "Damaged by Bullets?"
	bool m_bDamagedByBullets;
	// MPropertyGroupName = "Behavior"
	// MPropertyDescription = "If checked, this breakble will takes damage from Melee."
	// MPropertyFriendlyName = "Damaged by Melee?"
	bool m_bDamagedByMelee;
	// MPropertyGroupName = "Behavior"
	// MPropertyDescription = "If checked, this breakble will takes damage from Abilities."
	// MPropertyFriendlyName = "Damaged by Abilities?"
	bool m_bDamagedByAbilities;
	// MPropertyStartGroup = "Visuals"
	// MPropertyDescription = "Model"
	// MPropertyProvidesEditContextString = "ToolEditContext_ID_VMDL"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel;
	// MPropertyFriendlyName = "Damage Received AnimGraph Parameter"
	// MPropertyDescription = "The animgraph parameter that's  describes how much damage the breakable has received. From 0 to 1 (no damage to dead)."
	// MPropertyAttributeEditor = "AnimGraphParam()"
	CGlobalSymbol m_sAnimgraphParamDamageReceived;
	// MPropertyFriendlyName = "On Hit AnimGraph Parameter"
	// MPropertyDescription = "The animgraph parameter that is set to true when damage the breakable was hit."
	// MPropertyAttributeEditor = "AnimGraphParam()"
	CGlobalSymbol m_sAnimgraphParamOnHit;
	// MPropertyFriendlyName = "On Respawn AnimGraph Parameter"
	// MPropertyDescription = "The animgraph parameter that is set to true the brekable is respawned."
	// MPropertyAttributeEditor = "AnimGraphParam()"
	CGlobalSymbol m_sAnimgraphParamOnRespawn;
	// MPropertyGroupName = "Audio"
	// MPropertyDescription = "3D Sound of the prop breaking"
	CSoundEventName m_sBreakSound;
	CSoundEventName m_sSpawnSound;
	// MPropertyGroupName = "Audio"
	// MPropertyDescription = "3D Sound of the prop taking damage"
	CSoundEventName m_sDamageSound;
	CSoundEventName m_sHeavyDamageSound;
	// MPropertyGroupName = "Audio"
	// MPropertyDescription = "Hit Indicator Sound. 2D Sound played to attacker and observers to indicate a hit."
	CSoundEventName m_sHitIndicatorSound;
	// MPropertyGroupName = "Attributes"
	// MPropertyDescription = "Health"
	int32 m_iHealth;
	// MPropertyStartGroup = "Attributes"
	// MPropertyDescription = "Respawn time"
	float32 m_flInitialSpawnTime;
	float32 m_flRespawnTime;
	float32 m_flInitialSpawnTimeTest;
	float32 m_flRespawnTimeTest;
	// MPropertyDescription = "Can be mantled?"
	bool m_bIsMantleable;
	// MPropertyDescription = "Chance for this to drop a primary reward, 0 - 100%, this rolls first"
	float32 m_flPrimaryDropChance;
	// MPropertyDescription = "Category for the random roller"
	ECitadelRandomRollTypes m_eRollType;
	// MPropertyStartGroup = "Level 1 Pickup rewards"
	// MPropertyDescription = "Primary Pickups are rolled first."
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecPrimaryPickups;
	// MPropertyDescription = "Level 2 Rewards"
	int32 m_iMatchTimeMinsForLevel2Pickups;
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecPickups_lv2;
	// MPropertyDescription = "Level 3 Rewards"
	int32 m_iMatchTimeMinsForLevel3Pickups;
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecPickups_lv3;
	// MPropertyDescription = "How many times each entry should be in the 'card deck'"
	int32 m_iLootListDeckSize;
};
