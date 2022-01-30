/*
Copyright 2020 David J. Fiander

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCAFE
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0001
#define MANUFACTURER David J. Fiander
#define PRODUCT      Random Keyboard No. 1

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

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

#define MATRIX_ROW_PINS { \
        A1, A2, A3, A4, A5     \
}

#define MATRIX_COL_PINS {                   \
        A6, A7, A8, A9, A10,                     \
        A11, A12, A13, A14, A15,                 \
        B0, B1, B2, B3                                \
}

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define LED_PIN_ON_STATE 1      /* 1 for HIGH, 0 for LOW */
#define LED_CAPS_LOCK_PIN B4

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
