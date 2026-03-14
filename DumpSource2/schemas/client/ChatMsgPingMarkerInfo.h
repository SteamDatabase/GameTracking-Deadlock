enum ChatMsgPingMarkerInfo : uint32_t
{
	// MPropertyFriendlyName = "Show Ping Indicator at Ping Location, Play Ping Sound, and Play VO"
	k_EPingMarkerInfo_ShowMarkerAndSound = 0,
	// MPropertyFriendlyName = "Show Ping Indicator on Pinging Player, Play Ping Sound, and Play VO"
	k_EPingMarkerInfo_ShowMarkerOnSender = 1,
	// MPropertyFriendlyName = "No Marker or Sound (just VO)"
	k_EPingMarkerInfo_HideMarkerAndSound = 2,
	// MPropertyFriendlyName = "Only Show Ping Indicator at Ping Location (no ping sound)"
	k_EPingMarkerInfo_OnlyShowMarker = 3,
	// MPropertyFriendlyName = "Only Play Ping Sound (and VO)"
	k_EPingMarkerInfo_OnlyPlaySound = 4,
	// MPropertyFriendlyName = "Only show on Minimap, no world, no sound"
	k_EPingMarkerInfo_OnlyMiniMap = 5,
};
