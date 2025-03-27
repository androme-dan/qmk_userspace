/*
Copyright 2024 Daniel Wieser <@androme-dan>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum layer_names {
    _COLEMAK,
    _NUMBER,
    _SYMBOL,
    _FUNCTION,
    _NAVIGATION,
};

// Layer keys
#define LT_NUM LT(_NUMBER, KC_SPC)
#define LT_SYM LT(_SYMBOL, KC_TAB)
#define LT_FUN LT(_FUNCTION, KC_ESC)
#define LT_NAV LT(_NAVIGATION, KC_BSPC)

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)

// Right-hand home row mods
#define HOME_N RSFT_T(KC_N)
#define HOME_E RCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_split_3x6_3_ex2(
        _______,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    QK_BOOT,     QK_BOOT,    KC_J,    KC_L,    KC_U,     KC_Y,    KC_QUOTE,  _______,
        KC_RALT,  HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,    QK_REBOOT,   QK_REBOOT,  KC_M,    HOME_N,  HOME_E,   HOME_I,  HOME_O,    KC_RALT,
        _______,  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                             KC_K,    KC_H,    KC_COMM,  KC_DOT,  KC_SLSH,   _______,
                                             LT_FUN,  LT_NUM,  LT_SYM,      KC_ENT,     LT_NAV,  KC_DEL

  ),
    [_NUMBER] = LAYOUT_split_3x6_3_ex2(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  KC_LBRC,  KC_7,   KC_8,  KC_9,  KC_RBRC,  _______,
        KC_RALT,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  _______,  _______,        _______,  KC_SCLN,  KC_4,   KC_5,  KC_6,  KC_EQL,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,                            KC_GRV,   KC_1,   KC_2,  KC_3,  KC_SLSH,  _______,
                                                _______,  _______,  _______,        KC_MINS,  KC_0,     KC_DOT

  ),
    [_SYMBOL] = LAYOUT_split_3x6_3_ex2(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  KC_LCBR,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RCBR,  _______,
        KC_RALT,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  _______,  _______,        _______,  KC_COLN,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_PLUS,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                            KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,  _______,
                                                _______,  _______,  _______,        KC_UNDS,  KC_LPRN,  KC_RPRN

  ),
    [_FUNCTION] = LAYOUT_split_3x6_3_ex2(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_PSCR,  KC_PWR,
        KC_RALT,  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  _______,  _______,        _______,  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_SCRL,  KC_SLEP,
        _______,  _______,  _______,  _______,  _______,  _______,                            KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_PAUS,  KC_WAKE,
                                                _______,  _______,  _______,        _______,  _______,  _______

  ),
    [_NAVIGATION] = LAYOUT_split_3x6_3_ex2(
        _______,  _______,  KC_PGUP,  KC_UP,    KC_PGDN,  _______,  _______,        _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,        _______,  _______,  KC_RSFT,  KC_RCTL,  KC_LALT,  KC_RGUI,  KC_RALT,
        _______,  _______,  KC_HOME,  _______,  KC_END,   _______,                            _______,  _______,  _______,  _______,  _______,  _______,
                                                _______,  _______,  _______,        _______,  _______,  _______

  )
};
