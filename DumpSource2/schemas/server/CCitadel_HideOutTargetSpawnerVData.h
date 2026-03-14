// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_HideOutTargetSpawnerVData",
//	"m_flThinkRate": 1.000000,
//	"m_flFirstThink": 4.000000,
//	"m_flPigeonMaxCount": 10,
//	"m_flBallMaxDist": 3000.000000,
//	"m_flBallGoalThresHold": 40.000000,
//	"m_BallScored": "",
//	"m_BallSpawned": ""
//}
class CCitadel_HideOutTargetSpawnerVData : public CEntitySubclassVDataBase
{
	float32 m_flThinkRate;
	float32 m_flFirstThink;
	// MPropertyStartGroup = "Pigeon Gameplay"
	int32 m_flPigeonMaxCount;
	// MPropertyStartGroup = "Ball Gameplay"
	float32 m_flBallMaxDist;
	float32 m_flBallGoalThresHold;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallScored;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallSpawned;
};
