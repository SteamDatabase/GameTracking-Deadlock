// MVDataRoot
// MVDataSingleton
// MGetKV3ClassDefaults = {
//	"m_MusicCues":
//	{
//		"m_MusicStateData":
//		{
//		}
//	},
//	"m_Arpeggiators":
//	{
//	}
//}
class CitadelMusicData_t
{
	CitadelMusicCues_t m_MusicCues;
	CUtlHashtable< CUtlString, CitadelArpeggiator_t > m_Arpeggiators;
};
