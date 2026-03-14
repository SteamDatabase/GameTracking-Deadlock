class CPointModifierThinker : public CBaseEntity
{
	CModifierHandleTyped< CCitadelModifier > m_hModifier;
	bool m_bSendToClients;
};
