class CAI_InterestTarget
{
	CHandle< CBaseEntity > m_hTarget;
	VectorWS m_vPosition;
	Vector m_vDirection;
	bool m_bDiscardOutsideViewcone;
	ChoreoLookAtMode_t m_nLookAtMode;
	ChoreoLookAtSpeed_t m_nLookAtSpeed;
	CAI_InterestTarget::Type_t m_eType;
	WorldGroupId_t m_nWorldGroupId;
	GameTime_t m_flEndTime;
};
