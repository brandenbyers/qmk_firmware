#include QMK_KEYBOARD_H

enum layers {
  _CHROMATIC   // pentatonic c major
};

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_CHROMATIC] = LAYOUT(
    MI_C, MI_Cs, MI_D, MI_Ds, MI_E, MI_F, MI_Fs, MI_G, MI_Gs, MI_A, MI_As, MI_B,    \
    MI_C_1, MI_Cs_1, MI_D_1, MI_D_1s, MI_E_1, MI_F_1, MI_Fs_1, MI_G_1, MI_Gs_1, MI_A_1, MI_As_1, MI_B_1,    \
    MI_C_2, MI_Cs_2, MI_D_2, MI_Ds_2, MI_E_2, MI_F_2, MI_Fs_2, MI_G_2, MI_Gs_2, MI_A_2, MI_As_2, MI_B_2,    \
    MI_C_3, MI_Cs_3, MI_D_3, MI_Ds_3, MI_E_3, MI_F_3, MI_Fs_3, MI_G_3, MI_Gs_3, MI_A_3, MI_As_3, MI_B_3,    \
    MI_C_4, MI_Cs_4, MI_D_4, MI_Ds_4, MI_E_4, MI_F_4, MI_Fs_4, MI_G_4, MI_Gs_4, MI_A_4, MI_As_4, MI_B_4,    \
    MI_C_5, MI_Cs_5, MI_D_5, MI_Ds_5, MI_E_5, MI_F_5, MI_Fs_5, MI_G_5, MI_Gs_5, MI_A_5, MI_As_5, MI_B_5,    \
    MI_C, MI_Cs, MI_D, MI_Ds, MI_E, MI_F, MI_Fs, MI_G, MI_Gs, MI_A, MI_As, MI_B,    \
    MI_C, MI_Cs, MI_D, MI_Ds, MI_E, MI_F, MI_Fs, MI_G, MI_Gs, MI_A, MI_As, MI_B,    \
    MI_C, MI_Cs, MI_D, MI_Ds, MI_E, MI_F, MI_Fs, MI_G, MI_Gs, MI_A, MI_As, MI_B,    \
    MI_C, MI_Cs, MI_D, MI_Ds, MI_E, MI_F, MI_Fs, MI_G, MI_Gs, MI_A, MI_As, MI_B,    \
    MI_C, MI_Cs, MI_D, MI_Ds, MI_E, MI_F, MI_Fs, MI_G, MI_Gs, MI_A, MI_As, MI_B,    \
    MI_C, MI_Cs, MI_D, MI_Ds, MI_E, MI_F, MI_Fs, MI_G, MI_Gs, MI_A, MI_As, MI_B,    \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
};
