// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_FissureWallVData",
//	"m_nMeleeHits": 4,
//	"m_HitSound": "",
//	"m_DestroySound": "",
//	"m_DestroyParticle": ""
//}
class CCitadel_FissureWallVData : public CEntitySubclassVDataBase
{
	int32 m_nMeleeHits;
	// MPropertyGroupName = "Sounds"
	CSoundEventName m_HitSound;
	CSoundEventName m_DestroySound;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle;
};
