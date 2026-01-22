"use strict";
/// <reference path="../citadel.d.ts" />
/// <reference path="../async.ts" />
let gProgressSequence = null;
function AnimateProgressScreen() {
    DoProgressAnimation();
}
async function DoProgressAnimation() {
    if (gProgressSequence && !gProgressSequence.IsFinished())
        gProgressSequence.Abort();
    gProgressSequence = new Async.SequenceController();
    let screen = $.GetContextPanel();
    let playerAccolades = screen.FindChildInLayoutFile("Accolades");
    // Reset to the initial state
    screen.RemoveClass('ShowPlayerHero');
    for (let i = 0; i < playerAccolades.GetChildCount(); ++i) {
        playerAccolades.GetChild(i).RemoveClass('ShowAccolade');
    }
    // Now do the actual sequence
    screen.AddClass('ShowPlayerHero');
    await gProgressSequence.Delay(2.0);
    for (let i = 0; i < playerAccolades.GetChildCount(); ++i) {
        let accoladePanel = playerAccolades.GetChild(i);
        accoladePanel.AddClass('ShowAccolade');
        await gProgressSequence.Delay(0.5);
    }
    gProgressSequence.EndSkipping();
    await gProgressSequence.Delay(3.0);
    screen.NotifyFinishedAnimating();
}
function SkipForward() {
    if (!gProgressSequence)
        return;
    gProgressSequence.Skip();
}
function ShowScreenNoAnimation() {
    let screen = $.GetContextPanel();
    let playerAccolades = screen.FindChildInLayoutFile("Accolades");
    screen.AddClass('ShowPlayerHero');
    for (let i = 0; i < playerAccolades.GetChildCount(); ++i) {
        let accoladePanel = playerAccolades.GetChild(i);
        accoladePanel.AddClass('ShowAccolade');
    }
}
