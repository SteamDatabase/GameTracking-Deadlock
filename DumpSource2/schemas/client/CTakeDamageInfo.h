class CTakeDamageInfo
{
	Vector m_vecDamageForce;
	VectorWS m_vecDamagePosition;
	VectorWS m_vecReportedPosition;
	Vector m_vecDamageDirection;
	CHandle< C_BaseEntity > m_hInflictor;
	CHandle< C_BaseEntity > m_hAttacker;
	CHandle< C_BaseEntity > m_hAbility;
	float32 m_flDamage;
	float32 m_flTotalledDamage;
	DamageTypes_t m_bitsDamageType;
	int32 m_iDamageCustom;
	AmmoIndex_t m_iAmmoType;
	float32 m_flOriginalDamage;
	bool m_bShouldBleed;
	bool m_bShouldSpark;
	float32 m_flDamageAbsorbed;
	TakeDamageFlags_t m_nDamageFlags;
	// MNotSaved
	HitGroup_t m_iHitGroupId;
	// MNotSaved
	ECitadelDamageType m_eCitadelDamageType;
	// MNotSaved
	float32 m_flAfterBuffDamage;
	// MNotSaved
	float32 m_flPreResistDamage;
	// MNotSaved
	bool m_bEvaded;
	// MNotSaved
	Vector m_vecDamageNormal;
	// MNotSaved
	CHandle< C_BaseEntity > m_hOriginator;
	// MNotSaved
	int32 m_iBatchCount;
	// MNotSaved
	float32 m_flEffectiveness;
	// MNotSaved
	float32 m_timeDamage;
	// MNotSaved
	float32 m_flCritDamage;
	CUtlVector< DestructibleHitGroupToDestroy_t > m_nDestructibleHitGroupsToForceDestroy;
	// MNotSaved
	bool m_bInTakeDamageFlow;
};
