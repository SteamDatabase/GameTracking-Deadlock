// MNetworkVarNames = "HModelStrong m_hModel"
// MNetworkVarNames = "Vector m_vRootBoneOffset"
// MNetworkVarNames = "uint8 m_nRootBoneOffsetResetSerialNumber"
// MNetworkVarNames = "bool m_bClientClothCreationSuppressed"
// MNetworkVarNames = "MeshGroupMask_t m_MeshGroupMask"
// MNetworkVarNames = "int32 m_nBodyGroupChoices"
// MNetworkVarNames = "int8 m_nIdealMotionType"
class CModelState
{
	// MNetworkEnable
	// MNetworkChangeCallback = "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel;
	CUtlSymbolLarge m_ModelName;
	// MPhysPtr
	IPhysAggregateInstance* m_pVPhysicsAggregate;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnRootBoneOffsetChanged"
	Vector m_vRootBoneOffset;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnRootBoneOffsetResetChanged"
	uint8 m_nRootBoneOffsetResetSerialNumber;
	// MNetworkEnable
	bool m_bClientClothCreationSuppressed;
	// MNetworkEnable
	// MNetworkChangeCallback = "skeletonMeshGroupMaskChanged"
	uint64 m_MeshGroupMask;
	// MNetworkEnable
	// MNetworkChangeCallback = "bodyGroupChoiceChanged"
	CNetworkUtlVectorBase< int32 > m_nBodyGroupChoices;
	// MNetworkEnable
	// MNetworkChangeCallback = "skeletonMotionTypeChanged"
	int8 m_nIdealMotionType;
	int8 m_nForceLOD;
	int8 m_nClothUpdateFlags;
};
