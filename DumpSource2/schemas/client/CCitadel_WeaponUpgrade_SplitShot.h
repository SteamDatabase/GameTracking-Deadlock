// MNetworkVarNames = "bool m_bSplitShotActive"
class CCitadel_WeaponUpgrade_SplitShot : public CCitadel_Item
{
	ShotID_t m_nLastShotID;
	ShotID_t m_nLastHitShotID;
	int32 m_nWpnBatchCount;
	ShotID_t m_nLastBulletHitShotID;
	int32 m_nLastBulletHitCount;
	CHandle< C_BaseEntity > m_eLastBulletHitEnt;
	// MNetworkEnable
	bool m_bSplitShotActive;
};
