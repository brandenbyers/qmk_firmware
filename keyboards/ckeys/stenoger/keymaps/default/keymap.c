#include QMK_KEYBOARD_H

enum layers {
  _BASE  // base layer
};

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* BASE (numpad)
  [_BASE] = LAYOUT(
    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, \
    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, \
    KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, \
    KC_A, KC_A, KC_A, KC_A,                  \
    KC_A_1, KC_A, KC_A, KC_KC,                  \
    KC_A, KC_A, KC_A, KC_A \
  ),

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
};
