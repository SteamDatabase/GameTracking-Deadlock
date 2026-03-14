// MNetworkVarNames = "EHANDLE m_vecDeployedGravestones"
class CCitadel_Ability_Necro_GraveStone : public C_CitadelBaseAbility
{
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecDeployedGravestones;
	Vector m_vCastPosition;
	QAngle m_qCastAngle;
};
