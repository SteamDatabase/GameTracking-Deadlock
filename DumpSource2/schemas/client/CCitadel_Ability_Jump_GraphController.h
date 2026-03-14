// MGetKV3ClassDefaults = {
//	"_class": "CCitadel_Ability_Jump_GraphController",
//	"m_hExternalGraph": 4294967295,
//	"m_bDashJump": null,
//	"m_bJump": null,
//	"m_pszLaunchType": null
//}
class CCitadel_Ability_Jump_GraphController : public CCitadelBaseAbilityGraphController
{
	CAnimGraphParamRef< bool > m_bDashJump;
	CAnimGraphParamRef< bool > m_bJump;
	CAnimGraphParamRef< char* > m_pszLaunchType;
};
