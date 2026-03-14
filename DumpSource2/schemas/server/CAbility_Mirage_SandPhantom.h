// MNetworkVarNames = "bool m_bHasVictims"
class CAbility_Mirage_SandPhantom : public CCitadelBaseAbility
{
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHasVictims;
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecVictimModifiers;
};
