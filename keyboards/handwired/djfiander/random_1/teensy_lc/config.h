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
       * 12, 11, 10,  9,  8,
       * 23, 22, 21, 20, 19, 18, 17, 16, 15, 14
       */
#define MATRIX_COL_PINS { \
        C7, C6, C4, C3, D3,                     \
        C2, C1, D6, D5, B2, B3, B1, B0, C0, D1  \
    }

                        /*  1   2,  3,  4,  5 */
#define MATRIX_ROW_PINS { B17, D0, A1, A2, D7 }

#define UNUSED_PINS

#define LED_CAPS_LOCK_PIN B16    /* 0 */

#if 0
// i2c_master defines
#define I2C1_SCL_PIN B0 // A2 on pinout = B0
#define I2C1_SDA_PIN B1 // A3 on pinout = B1
#define I2C1_SCL_PAL_MODE PAL_MODE_ALTERNATIVE_2
#define I2C1_SDA_PAL_MODE PAL_MODE_ALTERNATIVE_2
#endif
