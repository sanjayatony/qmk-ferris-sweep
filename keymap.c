// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#include "combos.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_TAB,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,  KC_I,    KC_O,   KC_P,
    KC_A, KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,  KC_K,    KC_L,   KC_SCLN,
    LSFT_T(KC_Z), KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,  KC_COMM, KC_DOT, LALT_T(KC_SLSH),
                                    KC_LGUI, LT(1, KC_ESC), LT(2, KC_SPC), MO(4)
  ),

  [1] = LAYOUT(
    KC_EXLM,    KC_AT,    KC_HASH,    KC_DLR,    KC_PERC,            KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_QUOT,    KC_DQT,
    KC_1, KC_2, KC_3, KC_4, KC_5,          KC_MINS, KC_EQUAL, KC_LPRN,   KC_LBRC, KC_LCBR,
    KC_6, KC_7, KC_8, KC_9, KC_0,         KC_UNDS, KC_PLUS, KC_RPRN, KC_RBRC, KC_RCBR,
                                    KC_TRNS, KC_TRNS, KC_ENT, MO(3)  
  ),

  [2] = LAYOUT(
    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,           KC_KB_MUTE,   KC_KB_VOLUME_DOWN,   KC_KB_VOLUME_UP,   KC_TRNS,   KC_BSPC,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_LEFT, KC_DOWN,  KC_UP, KC_RIGHT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_HOME, KC_END, KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT(
    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,           KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_GRV, KC_BACKSLASH,  KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TILDE, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [4] = LAYOUT(
    QK_BOOT,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_7,   KC_8,   KC_9,   KC_TRNS,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_0, KC_4,  KC_5, KC_6, KC_TRNS,
    KC_SLEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_1, KC_2, KC_3, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};