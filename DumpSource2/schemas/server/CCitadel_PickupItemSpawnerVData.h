// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_PickupItemSpawnerVData",
//	"m_hModel": "",
//	"m_flModelScale": 1.000000,
//	"m_InactiveParticle": "",
//	"m_ActiveParticle": "",
//	"m_vecPrimaryPickups":
//	[
//	],
//	"m_sSinglePickupOverride": "",
//	"m_flInitialSpawnTime": 600.000000,
//	"m_flRespawnTime": 300.000000,
//	"m_flInitialSpawnTimeTest": 1.000000,
//	"m_flRespawnTimeTest": 20.000000,
//	"m_bRespawnTimerStartsAfterPickup": false
//}
class CCitadel_PickupItemSpawnerVData : public CEntitySubclassVDataBase
{
	// MPropertyGroupName = "Visuals"
	// MPropertyDescription = "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel;
	float32 m_flModelScale;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InactiveParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParticle;
	// MPropertyStartGroup = "Pickup rewards"
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecPrimaryPickups;
	// MPropertyDescription = "Ignore Primary Pickups and only spawn one type"
	CSubclassName< 0 > m_sSinglePickupOverride;
	// MPropertyStartGroup = "Gameplay"
	// MPropertyDescription = "Set to -1 to not spawn until invoked by another system"
	float32 m_flInitialSpawnTime;
	float32 m_flRespawnTime;
	// MPropertyDescription = "Set to -1 to not spawn until invoked by another system"
	float32 m_flInitialSpawnTimeTest;
	float32 m_flRespawnTimeTest;
	bool m_bRespawnTimerStartsAfterPickup;
};
