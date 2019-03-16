#include QMK_KEYBOARD_H

enum layers {
  _BEEP,           // default layer
};

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//             ┌────┐                                                 ┌────┐
//             │████│ MIDI ANY v1                           cKeys.org │████│
// ┌───────┐   │████│                                                 │████│    ┌───────┐
// │███████│01 │████│                                                 │████│  27│       │
// └───────┘   └────┘                                                 └────┘    └───────┘
// ┌───────┐                                                                    ┌───────┐
// │       │02                                                                26│       │
// └───────┘                                                                    └───────┘
// ┌───────┐                                                                    ┌───────┐
// │       │03                  ____  ____  ____  ____  ____                  25│       │
// └───────┘                   (  _ \(  __)(  __)(  _ \/ ___)                   └───────┘
// ┌───────┐                    ) _ ( ) _)  ) _)  ) __/\___ \                   ┌───────┐
// │ MODES │04                 (____/(____)(____)(__)  (____/                 24│       │
// └───────┘                                 ___                                └───────┘
// ┌───────┐                                ( _ \                               ┌───────┐
// │RECORD │05                             / _  /                             23│       │
// └───────┘                               \__\_)                               └───────┘
// ┌───────┐                     ____   __    __  ____  ____                    ┌───────┐
// │ STOP  │06                  (  _ \ /  \  /  \(  _ \/ ___)                 22│       │
// └───────┘                     ) _ ((  O )(  O )) __/\___ \                   └───────┘
// ┌───────┐                    (____/ \__/  \__/(__)  (____/                   ┌───────┐
// │ PLAY  │07                                                                21│       │
// └───────┘                                                                    └───────┘
// ┌───────┐                                                                    ┌───────┐
// │ SPEED │08                                                                20│       │
// └───────┘     10     11     12     13     14     15     16     17     18     └───────┘
// ┌───────┐   ┌────┐ ┌────┐ ┌────┐ ┌────┐ ┌────┐ ┌────┐ ┌────┐ ┌────┐ ┌────┐   ┌───────┐
// │  SLOW │09 │    │ │    │ │    │ │    │ │    │ │    │ │    │ │    │ │    │ 19│       │
// └───────┘   │    │ │    │ │    │ │    │ │    │ │    │ │    │ │    │ │    │   └───────┘
//             │    │ │    │ │    │ │    │ │    │ │    │ │    │ │    │ │    │
//             └────┘ └────┘ └────┘ └────┘ └────┘ └────┘ └────┘ └────┘ └────┘

  [_BEEP] = LAYOUT(
    _______, \
    _______,  \
    MU_MOD,  \
    KC_LCTL, \
    KC_LALT, \
    KC_LGUI, \
    KC_UP,   \
    KC_DOWN, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX, \
    XXXXXXX  \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
};
