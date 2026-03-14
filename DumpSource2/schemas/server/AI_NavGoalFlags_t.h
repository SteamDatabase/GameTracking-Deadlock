enum AI_NavGoalFlags_t : uint32_t
{
	eYawToDest = 1,
	eDisableUpdateGoalPos = 2,
	eLocalSucceedOnWithinTolerance = 4,
	eGoalOffsetInLocalYaw = 8,
	eGoalOffsetInLocalSpace = 16,
	eDestInWorldSpace = 32,
	eDontLimitGoalOffset = 64,
	eInterruptPath = 128,
	eDisablePathSmoothing = 256,
	eClearGoalOffsetOnRepathForMovement = 512,
	eUseTargetPredictedPosition = 1024,
	eDisableTargetPredictedPositionForDynamicPathing = 2048,
	eDisableStopAtGoal = 4096,
	// MEnumeratorIsNotAFlag
	eDefault = 0,
};
