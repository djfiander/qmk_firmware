#include QMK_KEYBOARD_H

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* |R   3   Alt  Z   7   Win  Shift    T   Ctrl X   Win  Caps L |
 * |S   B   F   L   Fn   U   .   Alt  N   ;   4   H   '   \     |
 * |Backspa 9   V   E   `   I   Q   O   K   5   M   -   A   [   |
 * |Enter    1   P                            Y   G   C   Tab   |
 * |/   6   =   W   2   8   0   J   Shift      Ctrl D   ]   ,   |
 */
    LAYOUT_random_test(
        KC_R  ,   KC_3  ,  KC_LALT,
        KC_S  ,   KC_B  ,   KC_F  ,
                  KC_BSPC     ,   KC_9,
                  KC_ENT      ,   KC_1)
};
