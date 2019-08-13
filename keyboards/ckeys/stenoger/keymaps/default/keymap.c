#include QMK_KEYBOARD_H
#include "keymap_steno.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  LAYOUT(
    STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  STN_N6,       STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,  STN_NC,
    STN_FN,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,      STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
    STN_PWR, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,      STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                                        STN_A,   STN_O,        STN_E,   STN_U
  ),
};

void matrix_init_user() {
  steno_set_mode(STENO_MODE_GEMINI); // or STENO_MODE_BOLT
}
