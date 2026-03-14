// MNetworkVarNames = "Vector m_vLaunchTarget"
// MNetworkVarNames = "float m_flLaunchSpeed"
class CCitadelCatapultTrigger : public C_BaseTrigger
{
	// MNetworkEnable
	Vector m_vLaunchTarget;
	// MNetworkEnable
	float32 m_flLaunchSpeed;
	CUtlSymbolLarge m_nameTarget;
};
