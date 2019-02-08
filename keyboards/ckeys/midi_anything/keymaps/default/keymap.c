#include QMK_KEYBOARD_H

enum layers {
  _BASE                // base layer
};

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* BASE (numpad)
   * ,-----.
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * |-----|
   * |     |
   * `-----'
   */
  [_BASE] = LAYOUT(
    KC_A, \
    KC_B, \
    KC_C, \
    KC_D, \
    KC_E, \
    KC_F, \
    KC_G, \
    KC_H, \
    KC_I, \
    KC_J, \
    KC_K, \
    KC_L, \
    KC_M, \
    KC_N, \
    KC_0, \
    KC_P, \
    KC_Q  \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
};
