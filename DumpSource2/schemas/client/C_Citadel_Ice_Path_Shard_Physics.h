// MNetworkExcludeByName = "m_hModel"
// MNetworkVarNames = "ice_path_shard_model_desc_t m_ShardDesc"
// MNetworkVarNames = "QAngle m_qForward"
// MNetworkVarNames = "GameTime_t m_flStartTime"
// MNetworkVarNames = "GameTime_t m_flEndTime"
// MNetworkVarNames = "float m_flShardWidth"
class C_Citadel_Ice_Path_Shard_Physics : public C_BaseModelEntity
{
	// MNetworkEnable
	// MNotSaved
	ice_path_shard_model_desc_t m_ShardDesc;
	// MNetworkEnable
	QAngle m_qForward;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnStartTimeChanged"
	GameTime_t m_flStartTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnEndTimeChanged"
	GameTime_t m_flEndTime;
	// MNetworkEnable
	float32 m_flShardWidth;
};
