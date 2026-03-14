class COrbSpawner::Bounty_t
{
	int32 m_nGoldToGive;
	int32 m_nNumOrbs;
	EDenyDistributionType m_eDenyType;
	ECurrencySource m_eSource;
	CHandle< CCitadelPlayerPawn > m_hTarget;
};
