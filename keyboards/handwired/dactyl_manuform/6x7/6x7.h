#pragma once

#include "dactyl_manuform.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_6x7( \
    L11, L12, L13, L14, L15, L16, L17,      \
    L21, L22, L23, L24, L25, L26, L27,      \
    L31, L32, L33, L34, L35, L36, L37,      \
    L41, L42, L43, L44, L45, L46, L47,      \
    L51, L52, L53, L54, L55, L56,           \
                        L61, L62,           \
                                  L57, L63, \
                                  L64, L65, \
         R11, R12, R13, R14, R15, R16, R17, \
         R21, R22, R23, R24, R25, R26, R27, \
         R31, R32, R33, R34, R35, R36, R37, \
         R41, R42, R43, R44, R45, R46, R47, \
              R52, R53, R54, R55, R56, R57, \
              R50, R51,                     \
    R62, R63,                               \
    R64, R65                                \
  ) \
  { \
    { L11,   L12,   L13, L14, L15, L16,   L17   }, \
    { L21,   L22,   L23, L24, L25, L26,   L27   }, \
    { L31,   L32,   L33, L34, L35, L36,   L37   }, \
    { L41,   L42,   L43, L44, L45, L46,   L47   }, \
    { L51,   L52,   L53, L54, L55, L56,   L57   }, \
    { KC_NO, KC_NO, L61, L62, L63, L64,   L65   }, \
    { R11,   R12,   R13, R14, R15, R16,   R17   }, \
    { R21,   R22,   R23, R24, R25, R26,   R27   }, \
    { R31,   R32,   R33, R34, R35, R36,   R37   }, \
    { KC_NO, R42,   R43, R44, R45, R46,   R47   }, \
    { KC_NO, R52,   R53, R54, R55, R56,   R57   }, \
    { KC_NO, R62,   R63, R64, R65, KC_NO, KC_NO }  \
}
