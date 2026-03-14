// MGetKV3ClassDefaults = {
//	"m_IdolModel": "",
//	"m_ParachuteModel": "",
//	"m_CrateModel": "",
//	"m_strLoopingSequenceName": "",
//	"m_IdolReturnLocationParticle": "",
//	"m_flIdolReturnLocationParticleScale": 1.000000,
//	"m_IdolSpawnLocationParticle": "",
//	"m_IdolDroppingParticle": "",
//	"m_flIdolDropHeight": 1800.000000,
//	"m_flIdolDropDuration": 25.000000
//}
class IdolParams_t
{
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_IdolModel;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ParachuteModel;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_CrateModel;
	CUtlString m_strLoopingSequenceName;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdolReturnLocationParticle;
	float32 m_flIdolReturnLocationParticleScale;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdolSpawnLocationParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdolDroppingParticle;
	float32 m_flIdolDropHeight;
	float32 m_flIdolDropDuration;
};
