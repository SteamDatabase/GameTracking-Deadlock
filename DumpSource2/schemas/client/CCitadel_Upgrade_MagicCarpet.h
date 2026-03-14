// MNetworkVarNames = "bool m_bFlying"
// MNetworkVarNames = "bool m_bSummoning"
class CCitadel_Upgrade_MagicCarpet : public CCitadel_Item
{
	GameTime_t m_flFlyingStartTime;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bFlying;
	// MNetworkEnable
	// MNetworkUserGroup = "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSummoning;
};
