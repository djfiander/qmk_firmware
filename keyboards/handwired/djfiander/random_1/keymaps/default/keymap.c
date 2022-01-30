#include QMK_KEYBOARD_H

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* |R   3   Alt  Z   7   Win  Shift    T   Ctrl X   Win  Caps L |
 * |S   B   F   L   Fn   U   .   Alt  N   ;   4   H   '   \     |
 * |Backspa 9   V   E   `   I   Q   O   K   5   M   -   A   [   |
 * |Enter    1   P                            Y   G   C   Tab   |
 * |/   6   =   W   2   8   0   J   Shift      Ctrl D   ]   ,   |
 */
    LAYOUT_random_1(
        KC_R  ,   KC_3  ,  KC_LALT  ,   KC_Z  ,   KC_7  ,  KC_LWIN  ,      KC_LSFT      ,   KC_T  ,  KC_LCTL  ,   KC_X  ,  KC_LWIN  ,    KC_CAPS    ,
        KC_S  ,   KC_B  ,   KC_F  ,   KC_L  ,   MO(1)   ,   KC_U  ,  KC_DOT ,  KC_LALT  ,   KC_N  , KC_SCLN ,   KC_4  ,   KC_H  , KC_QUOT ,   KC_BSLS   ,
        KC_BSPC     ,   KC_9  ,   KC_V  ,   KC_E  , KC_GRAVE,   KC_I  ,   KC_Q  ,   KC_O  ,   KC_K  ,   KC_5  ,   KC_M  , KC_MINS ,   KC_A  , KC_LBRC ,
        KC_ENT      ,   KC_1  ,   KC_P  ,                       KC_SPC                      ,   KC_Y  ,   KC_G  ,   KC_C  ,    KC_TAB   ,
        KC_SLSH ,   KC_6  ,  KC_EQL ,   KC_W  ,   KC_2  ,   KC_8  ,   KC_0  ,   KC_J  ,        KC_LSFT        ,  KC_LCTL  ,   KC_D  , KC_RBRC , KC_COMM ),

/* |   F3           F7                                          |
 * |  RESET    ->   Fn                       F4  <-             |
 * |  Del  F9                          Up  F5                   |
 * |        F1                                                  |
 * |   F6          F2  F8  F0   Dn                              |
 */
    LAYOUT_random_1(
        ______  ,   KC_F3  ,  ______  ,   ______  ,   KC_F7  ,  ______  ,      ______      ,   ______  ,  ______  ,   ______  ,  ______  ,    ______    ,
        ______  ,   RESET  ,   ______  ,   KC_RIGHT  ,   ______   ,   ______  ,  ______ ,  ______  ,   ______  , ______ ,   KC_F4  ,______  , ______ ,______   ,
        KC_DEL     ,   KC_F9  , ______  , ______  , ______,  ______  ,  ______  ,  ______  , KC_UP  ,   KC_F5  , ______  ,______ , ______  , ______ ,
        ______      ,   KC_F1  , ______  ,                       ______                      ,   ______  ,   ______  , ______  , ______   ,
        ______ ,   KC_F6  , ______ , ______  ,   KC_F2  ,   KC_F8  ,   KC_F10  ,   KC_DOWN  , ______        ,  ______  , ______  , ______ , ______ )
};
