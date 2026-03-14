// MNetworkVarNames = "int m_nUniqueID"
// MNetworkVarNames = "uint32 m_unAccountID"
// MNetworkVarNames = "uint32 m_unTraceID"
// MNetworkVarNames = "Vector m_vecEndPos"
// MNetworkVarNames = "Vector m_vecStart"
// MNetworkVarNames = "Vector m_vecLeft"
// MNetworkVarNames = "Vector m_vecNormal"
// MNetworkVarNames = "CPlayerSlot m_nPlayerSlot"
// MNetworkVarNames = "int m_nEntity"
// MNetworkVarNames = "int m_nHitbox"
// MNetworkVarNames = "float m_flCreationTime"
// MNetworkVarNames = "int m_nTintID"
// MNetworkVarNames = "uint8 m_nVersion"
// MNetworkVarNames = "CUtlString m_sTextureName"
// MNetworkVarNames = "CUtlString m_sTextureNameDamaged"
// MNetworkVarNames = "CUtlString m_sSoundNameDamaged"
// MNetworkVarNames = "bool m_bDamaged"
class C_PlayerSprayDecal : public C_BaseModelEntity
{
	// MNetworkEnable
	int32 m_nUniqueID;
	// MNetworkEnable
	uint32 m_unAccountID;
	// MNetworkEnable
	uint32 m_unTraceID;
	// MNetworkEnable
	Vector m_vecEndPos;
	// MNetworkEnable
	Vector m_vecStart;
	// MNetworkEnable
	Vector m_vecLeft;
	// MNetworkEnable
	Vector m_vecNormal;
	// MNetworkEnable
	CPlayerSlot m_nPlayerSlot;
	// MNetworkEnable
	int32 m_nEntity;
	// MNetworkEnable
	int32 m_nHitbox;
	// MNetworkEnable
	float32 m_flCreationTime;
	// MNetworkEnable
	int32 m_nTintID;
	// MNetworkEnable
	uint8 m_nVersion;
	// MNetworkEnable
	CUtlString m_sTextureName;
	// MNetworkEnable
	CUtlString m_sTextureNameDamaged;
	// MNetworkEnable
	CUtlString m_sSoundNameDamaged;
	// MNetworkEnable
	bool m_bDamaged;
	CPlayerSprayDecalRenderHelper m_SprayRenderHelper;
};
