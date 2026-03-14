// MGetKV3ClassDefaults = {
//	"m_HeroID": 0,
//	"m_strPosterImage": "",
//	"m_strPosterImageDamaged": "",
//	"m_strPosterImageThumbnail": "",
//	"m_strDamagedSound": "Cosmetics.HeroPoster.Destroy"
//}
class CitadelVotingPosterHeroData_t
{
	HeroID_t m_HeroID;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strPosterImage;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strPosterImageDamaged;
	CPanoramaImageName m_strPosterImageThumbnail;
	CSoundEventName m_strDamagedSound;
};
