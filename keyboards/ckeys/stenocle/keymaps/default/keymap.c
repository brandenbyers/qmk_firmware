#include QMK_KEYBOARD_H
#include "keymap_steno.h"

enum layers {
  _BASE  // base layer
};

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Plover (http://opensteno.org)
 * ,----------------------------------------------------------------------------.
 * |  FN  |   S  |   T  |   P  |   H  |   *  |   F  |   P  |   L  |   T  |   D  |
 * |------+------+------+------+------+------|------+------+------+------+------|
 * |  PWR |   S  |   K  |   W  |   R  |   *  |   R  |   B  |   G  |   S  |   Z  |
 * |------+------+------+------+------+------+------+------+------+------+------`
 *                 |   #  |   A  |   O  |  |   E  |   U  |   #  |
 * `                --------------------------------------------
 */

  [_BASE] = LAYOUT(
    STN_FN,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
    STN_PWR, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                           STN_NA,   STN_A,   STN_O,  STN_E,   STN_U,   STN_NB
  ),
};

void matrix_init_user() {
  steno_set_mode(STENO_MODE_GEMINI); // or STENO_MODE_BOLT
}
