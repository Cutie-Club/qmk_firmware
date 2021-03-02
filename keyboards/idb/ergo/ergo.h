/* Copyright 2021 Amber Holly
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

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT_all( \
    k00, k01, k02, k03, k04, k05, k06,      k08, k09, k010, k011, k012, k013, k014, k015, k016, \
    k10, k11, k12, k13, k14, k15, k16, k17,      k19, k110, k111, k112, k113, k114, k115,       \
    k20, k21, k22, k23, k24, k25, k26, k27,      k29, k210, k211, k212, k213, k214, k215,       \
    k30, k31, k32, k33, k34, k35, k36,      k38, k39, k310, k311, k312, k313, k314, k315,       \
    k40, k41, k42,      k44,      k46,      k48, k49, k410,       k412, k413, k414              \
) { \
   { k00, k01, k02, k03, k04, k05, k06, KC_NO, k08,   k09, k010, k011,  k012, k013, k014,  k015, k016  }, \
   { k10, k11, k12, k13, k14, k15, k16, k17,   KC_NO, k19, k110, k111,  k112, k113, k114,  k115, KC_NO }, \
   { k20, k21, k22, k23, k24, k25, k26, k27,   KC_NO, k29, k210, k211,  k212, k213, k214,  k215, KC_NO }, \
   { k30, k31, k32, k33, k34, k35, k36, KC_NO, k38,   k39, k310, k311,  k312, k313, k314,  k315, KC_NO }, \
   { k40, k41, k42, KC_NO, k44, KC_NO, k46, KC_NO,    k48,  k49, k410, KC_NO, k412, k413, k414, KC_NO, KC_NO }  \
}
