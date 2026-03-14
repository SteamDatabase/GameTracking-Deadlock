// MGetKV3ClassDefaults = {
//	"m_strDamageReceiveDefault": "",
//	"m_strDamageReceiveNPC": "",
//	"m_strDamageReceiveDOT": "",
//	"m_strDamageReceiveMeleeNPC": "",
//	"m_strDamageReceiveMelee": "",
//	"m_strDamageReceiveShield": ""
//}
class DamageReceivedSounds_t
{
	// MPropertyDescription = "When a specific damage received can not be selected"
	CSoundEventName m_strDamageReceiveDefault;
	// MPropertyDescription = "When NPC damage is received"
	CSoundEventName m_strDamageReceiveNPC;
	// MPropertyDescription = "When DOT damage is received"
	CSoundEventName m_strDamageReceiveDOT;
	// MPropertyDescription = "When NPC melee damage is received"
	CSoundEventName m_strDamageReceiveMeleeNPC;
	// MPropertyDescription = "When melee damage is received"
	CSoundEventName m_strDamageReceiveMelee;
	// MPropertyDescription = "When damage to player shield is received"
	CSoundEventName m_strDamageReceiveShield;
};
