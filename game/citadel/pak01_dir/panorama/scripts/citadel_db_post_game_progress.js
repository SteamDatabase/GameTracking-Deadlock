"use strict";
/// <reference path="citadel.d.ts" />
/// <reference path="async.ts" />
let gAsyncAbort = null;
function TestProgressAnimation(strTestScreen) {
    let data = {
        match_id: "0",
        winning_team: 0 /* ECitadelLobbyTeam.k_ECitadelLobbyTeam_Team0 */,
        local_player: {
            player_slot: 0,
            account_id: 85501006,
            hero_id: 63,
            hero_xp: 2500,
            team: 0 /* ECitadelLobbyTeam.k_ECitadelLobbyTeam_Team0 */,
            match_hero_xp: 100,
            match_outcome_sound: "Generated.Inferno.Hero.Pick.VO",
            mvp_rank: 0,
            accolades: [
                {
                    accolade_id: 1,
                    accolade_name: "#Citadel_VData_accolades_assists_FlavorName",
                    accolade_desc: "#Citadel_VData_accolades_assists_Description:p",
                    accolade_stars_achieved: 3,
                    accolade_stat_value: 23,
                },
                {
                    accolade_id: 2,
                    accolade_name: "#Citadel_VData_accolades_returned_idol_FlavorName",
                    accolade_desc: "#Citadel_VData_accolades_returned_idol_Description:p",
                    accolade_stars_achieved: 2,
                    accolade_stat_value: 2,
                },
                {
                    accolade_id: 3,
                    accolade_name: "#Citadel_VData_accolades_breakables_destroyed_FlavorName",
                    accolade_desc: "#Citadel_VData_accolades_breakables_destroyed_Description:p",
                    accolade_stars_achieved: 1,
                    accolade_stat_value: 123,
                },
            ],
        },
        mvp_data: {
            players: [
                {
                    player_slot: 1,
                    account_id: 108002,
                    hero_id: 6,
                    hero_xp: 0,
                    team: 0 /* ECitadelLobbyTeam.k_ECitadelLobbyTeam_Team0 */,
                    match_hero_xp: 100,
                    match_outcome_sound: "Generated.Inferno.Hero.Pick.VO",
                    mvp_rank: 1,
                    accolades: [
                        {
                            accolade_id: 1,
                            accolade_name: "#Citadel_VData_accolades_assists_FlavorName",
                            accolade_desc: "Citadel_VData_accolades_assists_Description:p",
                            accolade_stars_achieved: 3,
                            accolade_stat_value: 23,
                        },
                        {
                            accolade_id: 2,
                            accolade_name: "#Citadel_VData_accolades_returned_idol_FlavorName",
                            accolade_desc: "#Citadel_VData_accolades_returned_idol_Description:p",
                            accolade_stars_achieved: 2,
                            accolade_stat_value: 2,
                        },
                        {
                            accolade_id: 3,
                            accolade_name: "#Citadel_VData_accolades_breakables_destroyed_FlavorName",
                            accolade_desc: "#Citadel_VData_accolades_breakables_destroyed_Description:p",
                            accolade_stars_achieved: 1,
                            accolade_stat_value: 123,
                        },
                    ],
                },
                {
                    player_slot: 2,
                    account_id: 85501006,
                    hero_id: 63,
                    hero_xp: 0,
                    team: 1 /* ECitadelLobbyTeam.k_ECitadelLobbyTeam_Team1 */,
                    match_hero_xp: 100,
                    match_outcome_sound: "Generated.Inferno.Hero.Pick.VO",
                    mvp_rank: 2,
                    accolades: [
                        {
                            accolade_id: 1,
                            accolade_name: "#Citadel_VData_accolades_player_damage_FlavorName",
                            accolade_desc: "#Citadel_VData_accolades_player_damage_Description:p",
                            accolade_stars_achieved: 3,
                            accolade_stat_value: 83435,
                        },
                        {
                            accolade_id: 2,
                            accolade_name: "#Citadel_VData_accolades_killstreak_kills_FlavorName",
                            accolade_desc: "#Citadel_VData_accolades_killstreak_kills_Description:p",
                            accolade_stars_achieved: 2,
                            accolade_stat_value: 5,
                        },
                    ],
                },
                {
                    player_slot: 3,
                    account_id: 85502759,
                    hero_id: 2,
                    hero_xp: 0,
                    team: 0 /* ECitadelLobbyTeam.k_ECitadelLobbyTeam_Team0 */,
                    match_hero_xp: 100,
                    match_outcome_sound: "Generated.Inferno.Hero.Pick.VO",
                    mvp_rank: 3,
                    accolades: [
                        {
                            accolade_id: 1,
                            accolade_name: "#Citadel_VData_accolades_long_distance_kills_FlavorName",
                            accolade_desc: "#Citadel_VData_accolades_long_distance_kills_Description:p",
                            accolade_stars_achieved: 3,
                            accolade_stat_value: 8,
                        },
                        {
                            accolade_id: 2,
                            accolade_name: "#Citadel_VData_accolades_ability_damage_FlavorName",
                            accolade_desc: "#Citadel_VData_accolades_ability_damage_Description:p",
                            accolade_stars_achieved: 2,
                            accolade_stat_value: 9345,
                        },
                    ],
                },
            ]
        },
    };
    StartProgressAnimation(data, strTestScreen);
}
let gPostGameProgressSequence = null;
function StartProgressAnimation(data, strTestScreen) {
    $.Msg("Running progress sequence:");
    $.Msg(JSON.stringify(data));
    if (gPostGameProgressSequence && !gPostGameProgressSequence.IsFinished())
        gPostGameProgressSequence.Abort();
    gPostGameProgressSequence = new Async.SequenceController();
    const panel = $.GetContextPanel();
    DoProgressAnimation(panel, gPostGameProgressSequence, data, strTestScreen);
}
function ProgressSequenceSkip() {
    if (gPostGameProgressSequence)
        gPostGameProgressSequence.Skip();
}
function BShouldShowScreen(strTestScreen, strScreenName) {
    if (strTestScreen == "")
        return true;
    if (strTestScreen == strScreenName)
        return true;
    return false;
}
async function DoProgressAnimation(panel, sequence, data, strTestScreen) {
    let arrScreens = [
        {
            screen: new MVPScreen(),
            strTestName: "mvp",
            bEnabled: true,
        },
        {
            screen: new PlayerProgressScreen(),
            strTestName: "player",
            bEnabled: true,
        },
    ];
    // First, initialize any screens we're going to show
    for (let i = 0; i < arrScreens.length; ++i) {
        let bScreenEnabled = true;
        if (!BShouldShowScreen(strTestScreen, arrScreens[i].strTestName)) {
            bScreenEnabled = false;
        }
        if (bScreenEnabled && !arrScreens[i].screen.BInitScreen(panel, data)) {
            bScreenEnabled = false;
        }
        arrScreens[i].bEnabled = bScreenEnabled;
    }
    panel.AddClass("LoadingScreens");
    // Wait one frame so that all the loading actually kicks in.
    await sequence.Delay(0.0);
    // Now wait to let any async loading finish
    for (let i = 0; i < arrScreens.length; ++i) {
        if (!arrScreens[i].bEnabled)
            continue;
        await arrScreens[i].screen.WaitForScreenToLoad(panel, sequence, data);
    }
    panel.RemoveClass("LoadingScreens");
    // Now do the animation
    for (let i = 0; i < arrScreens.length; ++i) {
        if (!arrScreens[i].bEnabled)
            continue;
        await arrScreens[i].screen.AnimateScreen(panel, sequence, data, strTestScreen == arrScreens[i].strTestName);
    }
    sequence.Finish();
    $.DispatchEvent('CitadelPostGameProgressFinished', data.match_id);
}
function EnsureSnippetList(parent, strSnippetName, nCount) {
    while (parent.GetChildCount() < nCount) {
        let child = $.CreatePanel("Panel", parent, '');
        child.BLoadLayoutSnippet(strSnippetName);
    }
    while (parent.GetChildCount() > nCount) {
        // todo(ericl): is there a way to delete not async?
        parent.GetChild(parent.GetChildCount() - 1).DeleteAsync(0.0);
    }
}
function SetupAccolades(parent, accolades, nMaxCount) {
    let nCount = Math.min(nMaxCount, accolades.length);
    EnsureSnippetList(parent, "Accolade", nCount);
    for (let i = 0; i < nCount; ++i) {
        let accoladePanel = parent.GetChild(i);
        let accoladeStarsPanel = accoladePanel.FindChildInLayoutFile('AccoladeStars');
        let accolade = accolades[i];
        accoladePanel.SetDialogVariableLocString("accolade_title", accolade.accolade_name);
        accoladePanel.SetDialogVariableInt("stat_value", accolade.accolade_stat_value);
        accoladePanel.SetDialogVariablePluralLocStringIntNested("accolade_desc", accolade.accolade_desc, accolade.accolade_stat_value);
        accoladePanel.SwitchClass("accolade_stars", "StarsAchieved" + accolade.accolade_stars_achieved);
        accoladePanel.RemoveClass('ShowAccolade');
        EnsureSnippetList(accoladeStarsPanel, 'AccoladeStar', accolade.accolade_stars_achieved);
    }
}
// ----------------------------------------------------------------------------
function GetMVPPlayerByRank(mvpData, mvpRank) {
    for (let i = 0; i < mvpData.players.length; ++i) {
        if (mvpData.players[i].mvp_rank == mvpRank)
            return mvpData.players[i];
    }
    return undefined;
}
function GetMVPPlayer(mvpData) {
    return GetMVPPlayerByRank(mvpData, 1);
}
function GetHonorableMentions(mvpData) {
    let ret = [];
    let honorableMention = GetMVPPlayerByRank(mvpData, 2);
    if (honorableMention) {
        ret.push(honorableMention);
    }
    honorableMention = GetMVPPlayerByRank(mvpData, 3);
    if (honorableMention) {
        ret.push(honorableMention);
    }
    return ret;
}
class MVPScreen {
    BInitScreen(panel, data) {
        let mvpData = data.mvp_data;
        if (mvpData.players.length == 0)
            return false;
        let mvpPlayer = GetMVPPlayer(data.mvp_data);
        if (mvpPlayer == undefined)
            return false;
        let mvpScreen = panel.FindChildInLayoutFile('MVPScreen');
        let mvpHeroScene = mvpScreen.FindChildInLayoutFile('MVPHeroScenePanel');
        let mvpHeroLogo = mvpScreen.FindChildInLayoutFile('MVPHeroLogo');
        let mvpAccolades = mvpScreen.FindChildInLayoutFile('MVPAccolades');
        let mvpPlayerName = mvpScreen.FindChildInLayoutFile('MVPPlayerName');
        let honorableMentions = mvpScreen.FindChildInLayoutFile("HonorableMentions");
        mvpHeroScene.heroid = mvpPlayer.hero_id;
        mvpHeroLogo.heroid = mvpPlayer.hero_id;
        mvpScreen.SetDialogVariableInt("mvp_hero_id", mvpPlayer.hero_id);
        mvpScreen.SwitchClass("mvp_team_class", mvpPlayer.team == 0 /* ECitadelLobbyTeam.k_ECitadelLobbyTeam_Team0 */ ? "MVPTeam1" : "MVPTeam2");
        mvpPlayerName.SetPlayerOrBot(mvpPlayer.account_id, mvpPlayer.hero_id);
        SetupAccolades(mvpAccolades, mvpPlayer.accolades, 3);
        let arrHonorableMentions = GetHonorableMentions(data.mvp_data);
        EnsureSnippetList(honorableMentions, "MVPHonorableMention", arrHonorableMentions.length);
        for (let i = 0; i < arrHonorableMentions.length; ++i) {
            let honorableMention = honorableMentions.GetChild(i);
            let honorableMentionData = arrHonorableMentions[i];
            let honorableMentionHeroScene = honorableMention.FindChildInLayoutFile('HeroScenePanel');
            let honorableMentionHeroLogo = honorableMention.FindChildInLayoutFile('HeroLogo');
            let honorableMentionAccolades = honorableMention.FindChildInLayoutFile('Accolades');
            let honorableMentionPlayerName = honorableMention.FindChildInLayoutFile('PlayerName');
            honorableMentionHeroScene.heroid = honorableMentionData.hero_id;
            honorableMentionHeroLogo.heroid = honorableMentionData.hero_id;
            honorableMention.SetDialogVariableInt("hero_id", honorableMentionData.hero_id);
            honorableMention.SwitchClass("honorable_mention_team", honorableMentionData.team == 0 /* ECitadelLobbyTeam.k_ECitadelLobbyTeam_Team0 */ ? "Team1" : "Team2");
            honorableMentionPlayerName.SetPlayerOrBot(honorableMentionData.account_id, honorableMentionData.hero_id);
            SetupAccolades(honorableMentionAccolades, honorableMentionData.accolades, 2);
        }
        mvpScreen.RemoveClass('ShowProgressScreen');
        mvpScreen.RemoveClass('ShowMVPTitle');
        mvpScreen.RemoveClass('ShowMVPHero');
        for (let i = 0; i < mvpAccolades.GetChildCount(); ++i) {
            let accoladePanel = mvpAccolades.GetChild(i);
            accoladePanel.RemoveClass('ShowAccolade');
        }
        for (let i = 0; i < honorableMentions.GetChildCount(); ++i) {
            let honorableMention = honorableMentions.GetChild(i);
            honorableMention.RemoveClass('ShowHonorableMention');
        }
        return true;
    }
    async WaitForScreenToLoad(panel, sequence, data) {
        let mvpScreen = panel.FindChildInLayoutFile('MVPScreen');
        let mvpHeroScene = mvpScreen.FindChildInLayoutFile('MVPHeroScenePanel');
        return sequence.WaitFor(() => mvpHeroScene.BHasClass("SceneLoaded"));
    }
    async AnimateScreen(panel, sequence, data, bPauseAtEnd) {
        let mvpScreen = panel.FindChildInLayoutFile('MVPScreen');
        let mvpData = data.mvp_data;
        let mvpPlayer = GetMVPPlayer(mvpData);
        let mvpAccolades = mvpScreen.FindChildInLayoutFile('MVPAccolades');
        let honorableMentions = mvpScreen.FindChildInLayoutFile("HonorableMentions");
        mvpScreen.AddClass("ShowProgressScreen");
        await sequence.Delay(0.0);
        mvpScreen.AddClass('ShowMVPTitle');
        await sequence.Delay(0.3);
        mvpScreen.AddClass('ShowMVPHero');
        await sequence.Delay(0.6);
        for (let i = 0; i < mvpAccolades.GetChildCount(); ++i) {
            let accoladePanel = mvpAccolades.GetChild(i);
            accoladePanel.AddClass('ShowAccolade');
            await sequence.Delay(0.3);
        }
        await sequence.Delay(2.0);
        for (let i = 0; i < honorableMentions.GetChildCount(); ++i) {
            let honorableMention = honorableMentions.GetChild(i);
            honorableMention.AddClass('ShowHonorableMention');
            await sequence.Delay(2.0);
        }
        sequence.EndSkipping();
        await sequence.Delay(3.0);
        if (bPauseAtEnd) {
            await sequence.Delay(1000.0);
        }
        mvpScreen.RemoveClass("ShowProgressScreen");
        await sequence.Delay(0.5);
        return Promise.resolve();
    }
}
// ----------------------------------------------------------------------------
class PlayerProgressScreen {
    BInitScreen(panel, data) {
        let playerData = data.local_player;
        if (playerData.accolades.length == 0)
            return false;
        // If the local player was also the MVP, don't bother showing this screen since the data is redundant
        if (data.mvp_data.players.length > 0 && data.mvp_data.players[0].player_slot == playerData.player_slot)
            return false;
        let playerScreen = panel.FindChildInLayoutFile('PlayerProgressScreen');
        let playerHeroScene = playerScreen.FindChildInLayoutFile('PlayerProgressHeroScenePanel');
        let playerHeroLogo = playerScreen.FindChildInLayoutFile('PlayerProgressHeroLogo');
        let playerAccolades = playerScreen.FindChildInLayoutFile('PlayerProgressAccolades');
        let playerHeroBadge = playerScreen.FindChildInLayoutFile('PlayerProgressHeroBadge');
        let playerPlayerName = playerScreen.FindChildInLayoutFile('PlayerProgressPlayerName');
        playerHeroScene.heroid = playerData.hero_id;
        playerHeroLogo.heroid = playerData.hero_id;
        playerHeroBadge.heroid = playerData.hero_id;
        playerPlayerName.SetPlayerOrBot(playerData.account_id, playerData.hero_id);
        SetupAccolades(playerAccolades, playerData.accolades, 3);
        return true;
    }
    async WaitForScreenToLoad(panel, sequence, data) {
        let playerData = data.local_player;
        let playerScreen = panel.FindChildInLayoutFile('PlayerProgressScreen');
        let playerHeroScene = playerScreen.FindChildInLayoutFile('PlayerProgressHeroScenePanel');
        return sequence.WaitFor(() => playerHeroScene.BHasClass("SceneLoaded"));
    }
    async AnimateScreen(panel, sequence, data, bPauseAtEnd) {
        let playerScreen = panel.FindChildInLayoutFile('PlayerProgressScreen');
        let playerAccolades = playerScreen.FindChildInLayoutFile('PlayerProgressAccolades');
        playerScreen.AddClass("ShowProgressScreen");
        await sequence.Delay(0.0);
        playerScreen.AddClass('ShowPlayerHero');
        await sequence.Delay(2.0);
        for (let i = 0; i < playerAccolades.GetChildCount(); ++i) {
            let accoladePanel = playerAccolades.GetChild(i);
            accoladePanel.AddClass('ShowAccolade');
            await sequence.Delay(0.5);
        }
        await sequence.Delay(2.0);
        sequence.EndSkipping();
        // A little delay at the end
        await sequence.Delay(0.5);
        if (bPauseAtEnd) {
            await sequence.Delay(1000.0);
        }
        playerScreen.RemoveClass("ShowProgressScreen");
        await sequence.Delay(0.5);
    }
}
