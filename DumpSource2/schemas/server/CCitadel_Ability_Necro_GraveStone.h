// MNetworkVarNames = "EHANDLE m_vecDeployedGravestones"
class CCitadel_Ability_Necro_GraveStone : public CCitadelBaseAbility
{
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecDeployedGravestones;
	Vector m_vCastPosition;
	QAngle m_qCastAngle;
};
