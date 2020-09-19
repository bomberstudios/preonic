#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 12
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_INTERVAL 100
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40


// prevent holdback of 1-3 key TxBolt chords
// #define PREVENT_STUCK_MODIFIERS

// fix dual function timing
#define PERMISSIVE_HOLD

// if we dont set this, MOD_TAP is unusable when typing fast,
// because `la` is converted to `å` for example
#define IGNORE_MOD_TAP_INTERRUPT

// Leader Key
// #define LEADER_TIMEOUT 300
// #define LEADER_PER_KEY_TIMING

// Adding LT to the backspace key results in half the deletes I do failing because I don't release it fast enough. This should fix it...
//#define RETRO_TAPPING

#define TAPPING_TERM 200
