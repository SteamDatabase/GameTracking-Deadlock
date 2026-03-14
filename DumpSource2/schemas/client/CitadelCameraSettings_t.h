// MModelGameData
// MGetKV3ClassDefaults = {
//	"m_flCameraSideOffset": -34.000000,
//	"m_flCameraSideOffsetZiplining": 0.000000,
//	"m_flCameraBackOffset": 135.000000,
//	"m_flCameraBackOffsetAiming": 110.000000,
//	"m_flCameraHeightStanding": 86.000000,
//	"m_flCameraHeightCrouching": 55.000000,
//	"m_flCameraHeightOffsetZiplining": 0.000000,
//	"m_vCameraParrotOffset":
//	[
//		-10.000000,
//		-10.000000,
//		10.000000
//	]
//}
class CitadelCameraSettings_t
{
	float32 m_flCameraSideOffset;
	// MPropertyDescription = "An offset in addition to the base side offset while ziplining"
	float32 m_flCameraSideOffsetZiplining;
	float32 m_flCameraBackOffset;
	float32 m_flCameraBackOffsetAiming;
	float32 m_flCameraHeightStanding;
	float32 m_flCameraHeightCrouching;
	// MPropertyDescription = "An offset in addition to the base standing offset while ziplining"
	float32 m_flCameraHeightOffsetZiplining;
	// MPropertyDescription = "The target offset position of the camera when the character is backed up against a wall. X = forward/back. Y = right/left. Z = up/down. Use citadel_camera_parrot_pov 1 to tune. Requires Save & Recompile to apply."
	Vector m_vCameraParrotOffset;
};
