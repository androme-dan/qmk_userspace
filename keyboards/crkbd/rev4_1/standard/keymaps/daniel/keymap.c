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
};

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
        _______,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    QK_BOOT,     QK_BOOT,    KC_J,     KC_L,    KC_U,     KC_Y,    KC_QUOTE,  _______,
        KC_RALT,  HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,    QK_REBOOT,   QK_REBOOT,  KC_M,     HOME_N,  HOME_E,   HOME_I,  HOME_O,    KC_RALT,
        _______,  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                             KC_K,     KC_H,    KC_COMM,  KC_DOT,  KC_SLSH,   _______,
                                             KC_ESC,  KC_SPC,  KC_TAB,      KC_ENT,     KC_BSPC,  KC_DEL

  )
};
