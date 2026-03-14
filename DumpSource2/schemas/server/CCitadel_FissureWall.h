class CCitadel_FissureWall : public CBaseAnimGraph
{
	Vector m_vStartPos;
	Vector m_vEndPos;
	GameTime_t m_flStartEmitTime;
	GameTime_t m_flEndEmitTime;
	bool m_bSolid;
	int32 m_nTouchCount;
};
