// MNetworkVarNames = "VectorWS m_vecPosition"
// MNetworkVarNames = "VectorWS m_vecTravellingPosition"
// MNetworkVarNames = "VectorWS m_vecInitialPosition"
// MNetworkVarNames = "GameTime_t m_CastTime"
// MNetworkVarNames = "Vector m_vecDirection"
// MNetworkVarNames = "Vector m_vecLeft"
// MNetworkVarNames = "float m_Length"
// MNetworkVarNames = "bool m_bTraveling"
// MNetworkVarNames = "bool m_bPreview"
class CCitadel_Ability_FissureWall : public CCitadelBaseAbility
{
	// MNetworkEnable
	VectorWS m_vecPosition;
	// MNetworkEnable
	VectorWS m_vecTravellingPosition;
	// MNetworkEnable
	VectorWS m_vecInitialPosition;
	// MNetworkEnable
	GameTime_t m_CastTime;
	// MNetworkEnable
	Vector m_vecDirection;
	// MNetworkEnable
	Vector m_vecLeft;
	// MNetworkEnable
	float32 m_Length;
	// MNetworkEnable
	bool m_bTraveling;
	// MNetworkEnable
	bool m_bPreview;
};
