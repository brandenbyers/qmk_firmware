#include QMK_KEYBOARD_H

enum layers {
  _BASE  // base layer
};

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,     KC_G, KC_H, KC_I, KC_J, KC_K, KC_L,
    KC_M, KC_N, KC_O, KC_P, KC_Q, KC_R,     KC_S, KC_T, KC_U, KC_V, KC_W, KC_X,
    KC_Y, KC_Z, KC_1, KC_2, KC_3, KC_4,     KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
                        KC_MINS, KC_EQL, KC_LBRC, KC_RBRC
  ),
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
// };
