enum ECitadelPingMessageRecipients_t : uint32_t
{
	// MPropertyFriendlyName = "Global Sound - Allied Players"
	k_ECitadelRecipients_GlobalFriendlyTeam = 0,
	// MPropertyFriendlyName = "Ping Target and Pinging Player only"
	k_ECitadelRecipients_RecipientAndPlayer = 1,
	// MPropertyFriendlyName = "Allied Players around Pinging Player"
	k_ECitadelRecipients_RecipientsAroundPlayer = 2,
	// MPropertyFriendlyName = "Global Sound - Allied and Enemy Players"
	k_ECitadelRecipients_GlobalAllChat = 3,
};
