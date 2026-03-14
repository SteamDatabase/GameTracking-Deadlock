class DestructiblePartDestructionRequest_t
{
	HitGroup_t m_nHitGroup;
	int32 m_nDamageLevel;
	EDestructibleParts_DestroyParameterFlags m_nDestroyFlags;
	DamageTypes_t m_nDamageType;
	float32 m_flBreakDamage;
	float32 m_flBreakDamageRadius;
	VectorWS m_vWsBreakDamageOrigin;
	Vector m_vWsBreakDamageForce;
};
