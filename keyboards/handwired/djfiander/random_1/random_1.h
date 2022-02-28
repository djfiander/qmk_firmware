#pragma once

#include "quantum.h"

// readability
#define XXX KC_NO

/* Random 60% "ANSI" layout
   * ,----------------------------------------------------------------.
   * | 00 |01| 02| 03| 04| 05| 06| 07| 08| 09| 0a| 0b| 0c| 0d    | 0e |
   * |----------------------------------------------------------------|
   * | 10  | 11| 12| 13| 14| 15| 16| 17| 18| 19| 1a| 1b| 1c|  1d | 1e |
   * |----------------------------------------------------------------|
   * | 20    | 21| 22| 23| 24| 25| 26| 27| 28| 29| 2a| 2b| 2d    | 2e |
   * |----------------------------------------------------------------|
   * | 30     | 32| 33| 34| 35| 36| 37| 38| 39| 3a| 3b|    3c| 3d| 3e |
   * |----------------------------------------------------------------|
   * | 40 | 41 | 42 |        45             | 49| 4a|  4b| 4c| 4d| 4e |
   * `----------------------------------------------------------------'
 */
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array

#define LAYOUT_random_test( \
    k00, k01, k02, \
    k10, k11, k12, \
         k21, k22, \
         k31, k32 \
    ) { \
        { k00, k01, k02 }, \
        { k10, k11, k12 }, \
        { XXX, k21, k22 }, \
        { XXX, k31, k32 } \
}

#define LAYOUT_random_1( \
    k00, k01, k02, k03, k04,      k06,      k08,      k0a, k0b, k0c, k0d, k0e, \
    k10, k11, k12, k13, k14,      k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
         k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, \
         k31, k32, k33,                k37,                k3b, k3c, k3d, k3e, \
    k40, k41, k42, k43, k44, k45, k46, k47,      k49,      k4b, k4c, k4d, k4e  \
) { \
 {k00, k01, k02, k03, k04, XXX, k06, XXX, k08, XXX, k0a, k0b, k0c, k0d, k0e}, \
 {k10, k11, k12, k13, k14, XXX, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e}, \
 {XXX, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e}, \
 {XXX, k31, k32, k33, XXX, XXX, XXX, k37, XXX, XXX, XXX, k3b, k3c, k3d, k3e}, \
 {k40, k41, k42, k43, k44, k45, k46, k47, XXX, k49, XXX, k4b, k4c, k4d, k4e} \
}
