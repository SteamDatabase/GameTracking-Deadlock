// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_SpiderAnimatingVData",
//	"m_sModelName": "",
//	"m_flModelScale": 0.000000,
//	"m_cGlowColor":
//	[
//		0,
//		0,
//		0,
//		0
//	]
//}
class CCitadel_SpiderAnimatingVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
	float32 m_flModelScale;
	Color m_cGlowColor;
};
