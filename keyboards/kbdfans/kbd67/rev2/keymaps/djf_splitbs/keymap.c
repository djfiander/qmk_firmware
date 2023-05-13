/* Copyright 2020 'elmo-space'
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// mod-tap keys
#define CTL_CAPS LCTL_T(KC_CAPS)
#define CTL_APP  LCTL_T(KC_APP)

#define _BL 0
#define _FL 1
#define _RL 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = LAYOUT_65_ansi_split_bs(
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV, KC_DEL,  \
  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC, KC_HOME,   \
  CTL_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN,  KC_QUOT,             KC_ENT,       KC_PGUP, \
  KC_LSFT,      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                   KC_UP,   KC_PGDN, \
  MO(_FL), KC_LGUI,   KC_LALT,                   KC_SPC,                                  KC_RALT,   KC_RGUI, MO(_FL), KC_LEFT, KC_DOWN, KC_RGHT),

[_FL] = LAYOUT_65_ansi_split_bs(
  KC_GRAVE,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,  KC_INS,  \
  LCTL(KC_LALT), _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______,          KC_DEL, KC_END, \
  _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______,          _______,          _______, \
  KC_MEH,          _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______,          KC_MEH, _______, _______, \
  _______, MO(_RL), _______,                   _______,                            _______, MO(_RL),        _______,  _______, _______, _______),

[_RL] = LAYOUT_65_ansi_split_bs(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
  _______, _______, _______, _______, RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, \
  _______, _______, _______, _______, _______, QK_BOOT,   _______,   _______, _______, _______, _______,         _______, _______, _______, \
  _______, _______, _______,                   _______,                            _______, _______,         _______,  _______, _______, _______),

/* [_PL] = LAYOUT_65_ansi_split_bs( */
/*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \ */
/*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \ */
/*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, \ */
/*   _______,          _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______,         _______, _______, _______, \ */
/*   _______, _______, _______,                   _______,                            _______, _______,         _______,  _______, _______, _______), */
};
