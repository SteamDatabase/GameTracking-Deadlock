class CCitadelViscousBall : public CCitadelModelEntity
{
	CHandle< CCitadelBaseAbility > m_hAbility;
	float32 m_flBallRadius;
	bool m_bNeedsPhysicsUpdate;
};
