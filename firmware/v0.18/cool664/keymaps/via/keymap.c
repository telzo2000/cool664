// Copyright 2021 m.ki (@telzo2000)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_QWERTY] = LAYOUT_ortho_5x5(
    KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,     KC_9,    KC_0,      KC_BSPC,
    KC_INSERT,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,      KC_BSPC,
    KC_TAB,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,     KC_L,    KC_MINUS,  KC_ENT,
    KC_INSERT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,KC_3,KC_4,                KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_UP,     KC_SLSH, 
    KC_LSFT,    KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE,LT(_LOWER,KC_SPACE),KC_1, KC_2,LT(_RAISE,KC_SPACE),KC_SPACE, KC_RCTL,KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  
  [_LOWER] = LAYOUT_ortho_5x5(
     KC_ESC,     KC_1,    KC_2,   KC_3,   KC_4,    KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,  KC_BSPC,
    KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_LCTL,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_ENT,
    KC_NO, KC_PPLS,    KC_PMNS,    KC_PAST,    KC_PSLS,    KC_PEQL,KC_3,KC_4,    KC_GRV,    KC_F1,    RSFT(KC_LBRC),   RSFT(KC_RBRC),  RSFT(KC_MINS), KC_RSFT,
  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE,LT(_LOWER,KC_SPACE),KC_1, KC_2,LT(_RAISE,KC_SPACE),KC_SPACE, KC_RCTL,KC_LEFT, KC_DOWN, KC_RIGHT
  ) ,
 
  
  [_RAISE] = LAYOUT_ortho_5x5(
     KC_ESC,     KC_1,    KC_2,   KC_3,   KC_4,    KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,  KC_BSPC,
    KC_TAB,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_DEL,
    KC_LCTL,  KC_AT,    KC_BSLS,    KC_SCLN,   RSFT(KC_SCLN), KC_QUOT,    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_EQL, KC_ENT,
    KC_NO, RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,KC_3,KC_4,    RGB_SAD,    RGB_VAI,    KC_LBRC,   KC_RBRC,  KC_SLASH, KC_RSFT,
KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE,LT(_LOWER,KC_SPACE),KC_1, KC_2,LT(_RAISE,KC_SPACE),KC_SPACE, KC_RCTL,KC_LEFT, KC_DOWN, KC_RIGHT
  ) 
};
