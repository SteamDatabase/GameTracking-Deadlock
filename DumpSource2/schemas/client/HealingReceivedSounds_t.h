// MGetKV3ClassDefaults = {
//	"m_strDirectHealingSmall": "",
//	"m_strDirectHealingMedium": "",
//	"m_HOTLoopSounds":
//	{
//	},
//	"m_nPriority": 1,
//	"m_strHOTToppedOff": ""
//}
class HealingReceivedSounds_t
{
	// MPropertyDescription = "A direct healing ability was applied to us"
	CSoundEventName m_strDirectHealingSmall;
	// MPropertyDescription = "A direct healing ability was applied to us"
	CSoundEventName m_strDirectHealingMedium;
	// MPropertyDescription = "The loop sounds to play when we have any Heal Over Time (HOT)"
	CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_HOTLoopSounds;
	// MPropertyDescription = "The priority level for the generic HOT Loop"
	int32 m_nPriority;
	// MPropertyDescription = "When a HOT has topped off the player"
	CSoundEventName m_strHOTToppedOff;
};
