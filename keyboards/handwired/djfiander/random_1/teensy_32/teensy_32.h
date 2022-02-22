/* Copyright 2019
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

#pragma once

// TODO: including this causes "error: expected identifier before '(' token" errors
//#include "config_common.h"

      /*
       *  8,  9, 10, 11, 12, 14, 15, 16
       * 17, 18, 19, 20, 21, 22, 23
       */
#define MATRIX_COL_PINS { \
        D3, C3, C4, C6, C7, D1, C0, B0, \
        B1, B3, B2, D5, D6, C1, C2 \
    }

                        /*  1   2,   3,  5,  6 */
#define MATRIX_ROW_PINS { B17, D0, A12, D7, D4 }

#define LED_CAPS_LOCK_PIN B16    /* 0 */
