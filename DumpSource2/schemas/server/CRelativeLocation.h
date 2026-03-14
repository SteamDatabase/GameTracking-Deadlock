class CRelativeLocation
{
	RelativeLocationType_t m_Type;
	Vector m_vRelativeOffset;
	VectorWS m_vWorldSpacePos;
	CHandle< CBaseEntity > m_hEntity;
	uint32 m_nNavAreaID;
	uint32 m_nSpaceBlockID;
};
