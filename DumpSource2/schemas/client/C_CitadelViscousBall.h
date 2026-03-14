class C_CitadelViscousBall : public CCitadelModelEntity
{
	CHandle< C_CitadelBaseAbility > m_hAbility;
	float32 m_flBallRadius;
	bool m_bNeedsPhysicsUpdate;
};
