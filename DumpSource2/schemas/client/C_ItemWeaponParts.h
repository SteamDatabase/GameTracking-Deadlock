// MNetworkVarNames = "CHandle< C_BasePlayerPawn > m_hTouchedPlayeres"
class C_ItemWeaponParts : public CBaseAnimGraph
{
	// MNetworkEnable
	// MNotSaved
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_hTouchedPlayeres;
};
