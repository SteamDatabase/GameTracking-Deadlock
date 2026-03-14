class CCitadel_Modifier_BaseBulletPreRollProc : public CCitadel_Modifier_BaseEventProc
{
	ShotID_t m_nSuppressProcShotID;
	CUtlVector< BulletID_t > m_vecProcdBulletIDs;
};
