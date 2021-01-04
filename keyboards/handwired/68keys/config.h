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

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCAFE
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER David J. Fiander
#define PRODUCT      handwired-68keys

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: MCU pins used for columns, left to right
 * ROWS: MCU pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
/*                       23, 22, 21, 20, 19 */
#define MATRIX_ROW_PINS {C2, C1, D6, D5, B2}

/*
  This layout keeps groups of pins on the same side of
  the board, so that I can use chunks of ribbon cable.

         0,  1,  2,  3,
         4,  5,  6,  7,
         8,  9, 10, 11, (12 is caps lock indicator)
        14, 15, 16 (Skip LED pin 13)
*/
#define MATRIX_COL_PINS {  \
        B16, B17, D0, A12, \
        A13,  D7, D4,  D2, \
        D3,   C3, C4,  C6, \
        D1,   C0, B0      \
    }

//#define LED_PIN_ON_STATE 1 /* 1 for HIGH (default), 0 for LOW */
#define LED_CAPS_LOCK_PIN C7    /* 12 */

#define UNUSED_PINS {          \
        B3, B1, C8, C9, E1,    \
        B19, A5, C10, C11, E0, \
        B18, A4, C5            \
    }


/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* If defined, GRAVE_ESC will always act as ESC when ALT is
 * held.
 */
#define GRAVE_ESC_ALT_OVERRIDE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
