#pragma once

#include "config_common.h"

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: MCU pins used for columns, left to right
 * ROWS: MCU pins used for rows, top to bottom
 * DIODE_DIRECTION:
 *     COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *     ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

/*
 * Bad pins:
 *    A8-A12:      USB
 *    B2:          BOOT1
 */
#define MATRIX_ROW_PINS { \
    A5, A6, A7, B0, B1 \
}

#define MATRIX_COL_PINS { \
        A12, A15, B3, B4, B5, B6, B7, \
        B8,  B9,  A0, A1, A2, A3, A4  \
}

#define UNUSED_PINS

#define LED_PIN_ON_STATE 1      /* 1 for HIGH, 0 for LOW */
#define LED_CAPS_LOCK_PIN B12
