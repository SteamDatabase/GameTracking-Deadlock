// MNetworkVarNames = "float m_flRangeAtCast"
// MNetworkVarNames = "bool m_bArmed"
// MNetworkVarNames = "bool m_bMoving"
class CProjectile_Priest_SlideTrap_Projectile : public C_CitadelProjectile
{
	// MNetworkEnable
	float32 m_flRangeAtCast;
	// MNetworkEnable
	bool m_bArmed;
	// MNetworkEnable
	bool m_bMoving;
	bool m_bFinished;
};
