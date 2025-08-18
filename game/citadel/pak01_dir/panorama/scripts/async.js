"use strict";
/// <reference path="citadel.d.ts" />
var Async;
(function (Async) {
    /**
     * Returns a `Promise` that will resolve after `fDelay` seconds.
     */
    function Delay(fDelay) {
        return new Promise(resolve => $.Schedule(fDelay, () => resolve()));
    }
    Async.Delay = Delay;
    /**
     * Returns a `Promise` that will resolve during the next frame.
     */
    function NextFrame() {
        return Delay(0.0);
    }
    Async.NextFrame = NextFrame;
    function UnhandledEvent(sEvent, ...opts) {
        let predicate = null;
        if (typeof opts[0] === "function")
            predicate = opts[0];
        else if (opts.length > 0) {
            predicate = function (...args) {
                for (let i = 0; i < opts.length; i++) {
                    const opt = opts[i];
                    const arg = args[i];
                    if (opt !== arg)
                        return false;
                }
                return true;
            };
        }
        return new Promise(resolve => {
            const nHandlerId = $.RegisterForUnhandledEvent(sEvent, function (...args) {
                if (predicate == null || predicate(...args)) {
                    $.UnregisterForUnhandledEvent(sEvent, nHandlerId);
                    resolve(args);
                }
            });
        });
    }
    Async.UnhandledEvent = UnhandledEvent;
    /**
     * A controller object that allows you to abort any process observing the `signal` member.
     */
    class AbortController {
        signal;
        _aborted = false;
        constructor() {
            const controller = this;
            this.signal = { get aborted() { return controller._aborted; } };
        }
        abort() {
            this._aborted = true;
        }
    }
    Async.AbortController = AbortController;
    function Condition(predicate, abortSignal) {
        return new Promise(async (resolve) => {
            while (abortSignal === undefined || !abortSignal.aborted) {
                if (predicate()) {
                    resolve();
                    return;
                }
                await NextFrame();
            }
        });
    }
    Async.Condition = Condition;
    /**
     * Runs the `sequenceFn`, awaiting the result of every yield, and not resuming the `sequenceFn` if `abortSignal` has aborted.
     * Returns a `Promise` that resolve `true` on completion or `false` if `abortSignal` was aborted.
     */
    function RunSequence(sequenceFn, abortSignal) {
        return new Promise(async (resolve) => {
            const generator = sequenceFn(abortSignal || new Async.AbortController().signal);
            let value;
            while (true) {
                const iterResult = await generator.next(value);
                if (iterResult.done) {
                    resolve(true);
                    return;
                }
                value = await iterResult.value;
                if (abortSignal && abortSignal.aborted) {
                    resolve(false);
                    return;
                }
            }
        });
    }
    Async.RunSequence = RunSequence;
    /**
     * Utility class for scheduling relative to a point in time.
     * @example
     * const timestamp = new TimeStamp();
     * await timestamp.Delay( 1 );
     * $.Msg( "1 second later" );
     * await timestamp.Delay( 2 );
     * $.Msg( "2 seconds later" );
     * await timestamp.Delay( 3 );
     * $.Msg( "3 seconds later" );
     */
    class TimeStamp {
        frameTime = $.FrameTime();
        /**
         * Schedule a function to be run later, relative to when this `TimeStamp` was created.
         */
        Schedule(fDelay, fn) {
            const fDelayFromNow = fDelay - ($.FrameTime() - this.frameTime);
            $.Schedule(fDelayFromNow, fn);
        }
        Delay(fDelay, value) {
            return new Promise(resolve => this.Schedule(fDelay, () => resolve(value)));
        }
    }
    Async.TimeStamp = TimeStamp;
    class SequenceController {
        m_promise;
        m_resolve;
        m_reject;
        m_aborted = false;
        m_finished = false;
        m_skipPromise;
        m_skipFn;
        m_skipping = false;
        m_sounds = [];
        constructor() {
            this.m_promise = new Promise((resolve, reject) => {
                this.m_resolve = resolve;
                this.m_reject = reject;
            });
            this.m_skipPromise = new Promise(resolve => this.m_skipFn = resolve);
        }
        GetPromise() {
            return this.m_promise;
        }
        IsFinished() {
            return this.m_finished;
        }
        Finish() {
            this.m_finished = true;
            this.m_resolve();
        }
        IsAborted() {
            return this.m_aborted;
        }
        Abort() {
            this.m_aborted = true;
            this.m_finished = true;
            this.m_reject();
        }
        Skip() {
            if (!this.m_skipping) {
                this.m_skipping = true;
                this.m_skipFn();
            }
        }
        IsSkipping() {
            return this.m_skipping;
        }
        EndSkipping() {
            this.m_skipping = false;
            this.m_skipPromise = new Promise(resolve => this.m_skipFn = resolve);
        }
        async WaitFor(predicate) {
            while (!predicate(this.m_aborted, this.m_skipping))
                await Async.NextFrame();
        }
        Run(action) {
            if (!this.m_aborted)
                action();
        }
        async Delay(fDelay) {
            if (this.m_aborted || this.m_skipping)
                return Promise.resolve();
            await Promise.any([Async.Delay(fDelay), this.m_skipPromise, this.m_promise]);
        }
        UnskippableDelay(fDelay) {
            return Promise.any([Async.Delay(fDelay), this.m_promise]);
        }
    }
    Async.SequenceController = SequenceController;
})(Async || (Async = {}));
