// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_CatAnimatingVData",
//	"m_sModelName": "",
//	"m_cGlowColor":
//	[
//		0,
//		0,
//		0,
//		0
//	]
//}
class CCitadel_CatAnimatingVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
	Color m_cGlowColor;
};
