class CCitadel_Ability_Magician_BigBolt : public C_CitadelBaseAbility
{
	GameTime_t m_flNextShootTime;
	int32 m_iBoltsFired;
	int32 m_iRemainingBolts;
	bool m_bPreppingShoot;
};
