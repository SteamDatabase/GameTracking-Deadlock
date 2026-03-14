// MNetworkVarNames = "AbilityID_t m_SourceAbilityID"
// MNetworkVarNames = "EntitySubclassID_t m_vecImbuedAbilities"
// MNetworkVarNames = "EModifierValue m_eValType"
// MNetworkVarNames = "float m_flValue"
class DynamicAbilityValues_t
{
	// MNetworkEnable
	CUtlStringToken m_SourceAbilityID;
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities;
	// MNetworkEnable
	EModifierValue m_eValType;
	// MNetworkEnable
	float32 m_flValue;
};
