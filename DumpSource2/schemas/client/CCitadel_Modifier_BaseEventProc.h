class CCitadel_Modifier_BaseEventProc : public CCitadelModifier
{
	CUtlVector< C_BaseEntity* > m_vecProcdUnitsThisShot;
	CUtlVector< C_BaseEntity* > m_vecTrackedUnitsThisFrame;
	ShotID_t m_nLastShotId;
};
