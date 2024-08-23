#pragma once

#include QMK_KEYBOARD_H

#include "quantum.h"

enum combos {
  SD_Q,
  XC_CTRL,
  YH_BSPC,
};

const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM yh_combo[] = {KC_Y, KC_H, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [SD_Q] = COMBO(sd_combo, KC_Q),
  [XC_CTRL] = COMBO(xc_combo, KC_LCTL),
  [YH_BSPC] = COMBO(yh_combo, KC_BSPC),
};
