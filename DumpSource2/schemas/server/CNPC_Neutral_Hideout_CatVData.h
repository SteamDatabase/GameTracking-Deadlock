// MGetKV3ClassDefaults = {
//	"_class": "CNPC_Neutral_Hideout_CatVData",
//	"m_flCollisionRadius": 120.000000,
//	"m_flTraceRadius": 30.000000,
//	"m_flTraceDistancePerIteration": 20.000000,
//	"m_iMaxTraceIterations": 40,
//	"m_flStepUpHeight": 128.000000,
//	"m_flParticleRadius": 1.000000,
//	"m_flLifeTime": 10.000000,
//	"m_iHitsToDisappear": 5,
//	"m_flRespawnTime": 4.000000,
//	"m_flModelScale": 0.500000,
//	"m_flWalkSpeed": 200.000000,
//	"m_flRunSpeed": 400.000000,
//	"m_flRunDistanceMax": 1200.000000,
//	"m_flDropDownRate": 40.000000,
//	"m_flDistTolerance": 16.000000,
//	"m_flValidDirectionDist": 150.000000,
//	"m_flMoveAwayTime": 10.000000,
//	"m_flChaseDistanceStart": 300.000000,
//	"m_flChaseDistanceEnd": 400.000000,
//	"m_flChaseDistTolerance": 32.000000,
//	"m_flChaseAtTarget": 8.000000,
//	"m_flBallSpeedMin": 200.000000,
//	"m_hModel": "",
//	"m_SpawnParticle": "",
//	"m_AmbientParticle": "",
//	"m_DestroyParticle": "",
//	"m_strDestroySound": ""
//}
class CNPC_Neutral_Hideout_CatVData : public CEntitySubclassVDataBase
{
	float32 m_flCollisionRadius;
	float32 m_flTraceRadius;
	float32 m_flTraceDistancePerIteration;
	int32 m_iMaxTraceIterations;
	float32 m_flStepUpHeight;
	float32 m_flParticleRadius;
	CRangeFloat m_flLifeTime;
	CRangeInt m_iHitsToDisappear;
	float32 m_flRespawnTime;
	CRangeFloat m_flModelScale;
	float32 m_flWalkSpeed;
	float32 m_flRunSpeed;
	CRangeFloat m_flRunDistanceMax;
	float32 m_flDropDownRate;
	float32 m_flDistTolerance;
	float32 m_flValidDirectionDist;
	CRangeFloat m_flMoveAwayTime;
	float32 m_flChaseDistanceStart;
	float32 m_flChaseDistanceEnd;
	float32 m_flChaseDistTolerance;
	float32 m_flChaseAtTarget;
	float32 m_flBallSpeedMin;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_strDestroySound;
};
