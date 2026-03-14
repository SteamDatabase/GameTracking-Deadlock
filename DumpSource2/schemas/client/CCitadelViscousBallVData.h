// MGetKV3ClassDefaults = {
//	"_class": "CCitadelViscousBallVData",
//	"m_sModelName": "",
//	"m_flPhysicsRadius": 0.000000
//}
class CCitadelViscousBallVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
	float32 m_flPhysicsRadius;
};
