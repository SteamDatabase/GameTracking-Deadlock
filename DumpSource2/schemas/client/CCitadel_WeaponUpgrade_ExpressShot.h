// MNetworkVarNames = "int m_iShotsToCreate"
// MNetworkVarNames = "bool m_bIsInExpressShot"
class CCitadel_WeaponUpgrade_ExpressShot : public CCitadel_Item
{
	// MNetworkEnable
	int32 m_iShotsToCreate;
	// MNetworkEnable
	bool m_bIsInExpressShot;
	GameTime_t m_tNextShotTime;
	bool m_bIsPrimaryProc;
};
