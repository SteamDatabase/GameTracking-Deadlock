// MGetKV3ClassDefaults = {
//	"_class": "CDestructableBuildingVData",
//	"m_flEnemyTrooperProtectionRange": 1575.000000,
//	"m_flTrooperJumpRange": 800.000000,
//	"m_flFinishedDyingThink": 5.000000,
//	"m_sAmberModelName": "",
//	"m_sSapphModelName": "",
//	"m_AmberDeathParticle": "",
//	"m_SapphDeathParticle": "",
//	"m_AmberDeathSound": "",
//	"m_SapphDeathSound": "",
//	"m_iMaxHealthFinal": 13000,
//	"m_iMaxHealthGenerator": 5000,
//	"m_iMaxHealthGeneratorSecond": 10000,
//	"m_PowerGenerator":
//	{
//	},
//	"m_ObjectiveRegen":
//	{
//	},
//	"m_BackdoorBulletResistModifier":
//	{
//	},
//	"m_BackdoorProtectionModifier":
//	{
//	},
//	"m_RangedArmorModifier":
//	{
//	}
//}
class CDestructableBuildingVData : public CEntitySubclassVDataBase
{
	float32 m_flEnemyTrooperProtectionRange;
	float32 m_flTrooperJumpRange;
	float32 m_flFinishedDyingThink;
	// MPropertyStartGroup = "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sAmberModelName;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sSapphModelName;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberDeathParticle;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphDeathParticle;
	// MPropertyStartGroup = "Sounds"
	CSoundEventName m_AmberDeathSound;
	CSoundEventName m_SapphDeathSound;
	// MPropertyStartGroup = "GamePlay"
	int32 m_iMaxHealthFinal;
	int32 m_iMaxHealthGenerator;
	int32 m_iMaxHealthGeneratorSecond;
	// MPropertyStartGroup = "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PowerGenerator;
	CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen;
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier;
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier;
	CEmbeddedSubclass< CCitadelModifier > m_RangedArmorModifier;
};
