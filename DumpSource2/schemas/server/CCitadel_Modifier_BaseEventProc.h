class CCitadel_Modifier_BaseEventProc : public CCitadelModifier
{
	CUtlVector< CBaseEntity* > m_vecProcdUnitsThisShot;
	CUtlVector< CBaseEntity* > m_vecTrackedUnitsThisFrame;
	ShotID_t m_nLastShotId;
};
