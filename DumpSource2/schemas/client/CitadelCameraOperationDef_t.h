// MGetKV3ClassDefaults = Could not parse KV3 Defaults
class CitadelCameraOperationDef_t
{
	CameraOperation m_eCameraOperation;
	// MPropertySuppressExpr = "m_eCameraOperation == k_ECameraOp_Lag"
	// MPropertyDescription = "All operation source and target values are considered relative to the default values"
	bool m_bValuesAreRelative;
	float32 m_flDelay;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Maintain"
	// MPropertyDescription = "How long to hold the current value. Less than zero for an indefinite end."
	float32 m_flMaintainDuration;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Approach"
	// MPropertyDescription = "How fast to approach the target value"
	float32 m_flApproachSpeed;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Approach"
	// MPropertyDescription = "Acceleration as we approach the target value"
	float32 m_flApproachAcceleration;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Approach"
	// MPropertyDescription = "Minimum time to try approaching"
	float32 m_flApproachMinDuration;
	// MPropertySuppressExpr = "m_bApproachDefault == true || m_eCameraOperation != k_ECameraOp_Approach || m_nCameraParam == 4"
	// MPropertyDescription = "The target value"
	float32 m_flApproachTarget;
	// MPropertySuppressExpr = "m_bApproachDefault == true || m_eCameraOperation != k_ECameraOp_Approach || m_nCameraParam != 4"
	// MPropertyDescription = "The target value"
	Vector m_vApproachTarget;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Approach"
	// MPropertyDescription = "If true, approaches the dafault value.  If false, allows specifying a target value"
	bool m_bApproachDefault;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Spring"
	// MPropertyDescription = "Strength of the spring.  Larger is stronger"
	float32 m_flSpringStrength;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Spring"
	// MPropertyDescription = "Minimum speed of the spring.  Useful is the spring strength is low or the target is near."
	float32 m_flSpringMinSpeed;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Spring"
	// MPropertyDescription = "Maximum time to spring to the target"
	float32 m_flSpringMaxDuration;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Spring"
	// MPropertyDescription = "If true, spring to the default value.  If false, allows specifing the target value"
	bool m_bSpringToDefault;
	// MPropertySuppressExpr = "m_bSpringToDefault == true || m_eCameraOperation != k_ECameraOp_Spring || m_nCameraParam == 4"
	// MPropertyDescription = "The target value to spring to"
	float32 m_flSpringTarget;
	// MPropertySuppressExpr = "m_bSpringToDefault == true || m_eCameraOperation != k_ECameraOp_Spring || m_nCameraParam != 4"
	// MPropertyDescription = "The target value to spring to"
	Vector m_vSpringTarget;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lerp"
	// MPropertyDescription = "If true, start lerping from the current value.  If false, allows specifying the start lerp value"
	bool m_bLerpStartAtCurrent;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lerp"
	// MPropertyDescription = "If true, lerp to the default value.  If false, allows specifying the end lerp value"
	bool m_bLerpEndAtDefault;
	// MPropertySuppressExpr = "m_bLerpStartAtCurrent == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam == 4"
	// MPropertyDescription = "The start lerp value"
	float32 m_flLerpStart;
	// MPropertySuppressExpr = "m_bLerpEndAtDefault == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam == 4"
	// MPropertyDescription = "The end lerp value"
	float32 m_flLerpEnd;
	// MPropertySuppressExpr = "m_bLerpStartAtCurrent == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam != 4"
	// MPropertyDescription = "The start lerp value"
	Vector m_vLerpStart;
	// MPropertySuppressExpr = "m_bLerpEndAtDefault == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam != 4"
	// MPropertyDescription = "The end lerp value"
	Vector m_vLerpEnd;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lerp"
	// MPropertyAttributeRange = "0 1"
	// MPropertyDescription = "A bias on the lerp"
	float32 m_flLerpBias;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lerp"
	// MPropertyAttributeRange = "0 1"
	// MPropertyDescription = "A gain on the lerp"
	float32 m_flLerpGain;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lerp"
	// MPropertyDescription = "How long to lerp from start to end"
	float32 m_flLerpDuration;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lag"
	// MPropertyDescription = "Minimum time to have the spring active"
	float32 m_flLagMinDuration;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lag"
	// MPropertyDescription = "How long to let the value lag behind before springing to the default value"
	float32 m_flLagTime;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lag"
	// MPropertyDescription = "While lagging behind, the max value we can approach the target value."
	float32 m_flLagMaxSpeed;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lag"
	// MPropertyDescription = "Once the lag period is over, how strong the spring is that pulls the current value to the default value"
	float32 m_flLagSpringStrength;
	// MPropertySuppressExpr = "m_eCameraOperation != k_ECameraOp_Lag"
	// MPropertyDescription = "When true, the spring strength will scale up to try to keep the target on screen"
	bool m_bIncreaseSpringStrengthToKeepTargetOnScreen;
};
