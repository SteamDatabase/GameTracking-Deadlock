// MGetKV3ClassDefaults = {
//	"_class": "CNPC_SimpleAnimatingAIVData",
//	"m_sModelName": ""
//}
class CNPC_SimpleAnimatingAIVData : public CEntitySubclassVDataBase
{
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
};
