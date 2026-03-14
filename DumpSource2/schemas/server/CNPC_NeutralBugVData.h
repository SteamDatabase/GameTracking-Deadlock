// MGetKV3ClassDefaults = {
//	"_class": "CNPC_NeutralBugVData",
//	"m_iGoldReward": 0,
//	"m_flRadius": 20.000000,
//	"m_flDropDownRate": 40.000000,
//	"m_flRespawnTime": 30.000000,
//	"m_flRespawnTimeHeroTest": 5.000000,
//	"m_flWaitTimeMax": 5.000000,
//	"m_flPlayerCheckThink": 10.000000,
//	"m_flPlayerCheckDistanceM": 30.000000,
//	"m_flMaxMoveDistance": 100.000000,
//	"m_flMinMoveDistance": 20.000000,
//	"m_flMoveSpeedMin": 150.000000,
//	"m_flMoveSpeedMax": 200.000000,
//	"m_flValidDirectionDist": 200.000000,
//	"m_flValidMinDist": 20.000000,
//	"m_sModelName": "",
//	"m_DeathParticle": ""
//}
class CNPC_NeutralBugVData : public CEntitySubclassVDataBase
{
	int32 m_iGoldReward;
	float32 m_flRadius;
	float32 m_flDropDownRate;
	float32 m_flRespawnTime;
	float32 m_flRespawnTimeHeroTest;
	float32 m_flWaitTimeMax;
	float32 m_flPlayerCheckThink;
	float32 m_flPlayerCheckDistanceM;
	float32 m_flMaxMoveDistance;
	float32 m_flMinMoveDistance;
	float32 m_flMoveSpeedMin;
	float32 m_flMoveSpeedMax;
	float32 m_flValidDirectionDist;
	float32 m_flValidMinDist;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle;
};
