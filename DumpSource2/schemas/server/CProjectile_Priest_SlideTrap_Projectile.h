// MNetworkVarNames = "float m_flRangeAtCast"
// MNetworkVarNames = "bool m_bArmed"
// MNetworkVarNames = "bool m_bMoving"
class CProjectile_Priest_SlideTrap_Projectile : public CCitadelProjectile
{
	// MNetworkEnable
	float32 m_flRangeAtCast;
	// MNetworkEnable
	bool m_bArmed;
	// MNetworkEnable
	bool m_bMoving;
	bool m_bFinished;
};
