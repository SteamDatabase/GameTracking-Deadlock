// MNetworkVarNames = "int m_nSeasonal2025Level"
// MNetworkVarNames = "float m_flSeasonal2025LevelFrac"
// MNetworkVarNames = "GameTime_t m_flNextShotTime"
// MNetworkVarNames = "int m_nShotsRemaining"
class CCitadel_CosmeticItem_Snowball : public CCitadel_Item
{
	// MNetworkEnable
	int32 m_nSeasonal2025Level;
	// MNetworkEnable
	float32 m_flSeasonal2025LevelFrac;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextShotTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerExclusive"
	int32 m_nShotsRemaining;
};
