class CProjectile_Airheart_Package : public CBaseAnimGraph
{
	Vector m_vVelocity;
	float32 m_flFloorDist;
	bool m_bPunchedOnce;
	bool m_bOnGround;
	CCitadelBaseAbility* m_pAbility;
	float32 m_flStunDuration;
	float32 m_flStunRadius;
};
