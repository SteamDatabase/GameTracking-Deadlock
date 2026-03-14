// MGetKV3ClassDefaults = {
//	"_class": "CNPC_Neutral_Hideout_RabbitVData",
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
//	"m_strDestroySound": "",
//	"m_flChaseMoveDistance": 500.000000
//}
class CNPC_Neutral_Hideout_RabbitVData : public CNPC_Neutral_Hideout_CatVData
{
	CRangeFloat m_flChaseMoveDistance;
};
