#ifndef BAMBOO_01_4096_H_
#define BAMBOO_01_4096_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include PGMSPACE_INCLUDE_H

#define BAMBOO_01_4096_NUM_CELLS 4096
#define BAMBOO_01_4096_SAMPLERATE 16384

const int8_t __attribute__((section(".progmem.data"))) BAMBOO_01_4096_DATA []  = {0, 1, -1, 1, -1, 0, 1, -1, 0, -1, 0,
                -1, 0, 0, -1, -6, -29, -70, -96, -71, -16, 15, 13, 13, 53, 105, 126, 110, 34,
                -32, -49, -62, -45, -10, 29, 56, 29, -8, -56, -89, -72, -71, -28, 46, 82, 70, 1,
                -57, -85, -60, 15, 48, 71, 61, 17, -27, -61, -27, 2, 26, 63, 50, 43, 13, -53,
                -67, -39, 35, 84, 64, 20, -27, -40, -40, -30, -5, 6, 28, 17, -23, -35, -44, -30,
                -11, 9, 25, 14, -5, -37, -44, -2, 19, 15, 9, 3, 5, 4, 4, 5, 13, 24, 20, 15, 8,
                1, 2, -1, 6, 14, 13, 2, -21, -29, -8, 13, 13, -7, -24, -27, -21, -11, -14, -18,
                -9, 1, -1, -10, -13, -15, -10, 0, 7, 15, 16, 7, 1, 0, 10, 13, 9, 9, 15, 22, 22,
                10, -4, -9, -4, 4, 8, 11, 6, -3, -17, -23, -21, -13, 0, 4, 2, -1, -16, -30, -36,
                -24, 0, 18, 19, 5, -8, -14, -10, -1, 10, 20, 24, 20, 9, -3, -10, -6, 5, 19, 29,
                26, 14, -2, -12, -10, -2, 3, 5, 2, -3, -12, -21, -25, -19, -7, 1, 3, -3, -11,
                -15, -14, -9, -4, -3, -6, -7, -4, 0, 7, 13, 13, 10, 7, 6, 6, 7, 8, 11, 15, 16,
                10, 2, -2, -3, 0, 2, 1, -5, -12, -16, -14, -10, -7, -6, -10, -12, -9, -7, -6,
                -10, -12, -8, -2, 3, 3, 1, 0, -2, -3, -1, 6, 14, 18, 19, 14, 8, 3, 1, 3, 8, 12,
                9, 4, 0, -8, -10, -5, 1, 6, 1, -4, -10, -15, -15, -16, -12, -5, 0, 0, -6, -15,
                -16, -13, -4, 5, 12, 13, 9, 2, -3, -2, 1, 9, 16, 18, 17, 11, 4, -2, -2, 2, 8,
                10, 7, -1, -10, -12, -9, -4, -3, -5, -7, -6, -10, -12, -11, -11, -9, -8, -8, -5,
                -4, -4, -3, -1, 1, 2, 2, 4, 9, 10, 6, 5, 5, 8, 10, 10, 8, 7, 5, 1, 0, 2, 3, 3,
                1, -4, -7, -10, -10, -10, -9, -7, -7, -10, -10, -12, -13, -9, -4, 0, -2, -5, -7,
                -4, 1, 8, 8, 9, 9, 8, 7, 6, 8, 9, 13, 13, 9, 7, 1, -2, -1, 2, 6, 3, 0, -3, -9,
                -11, -13, -9, -3, -3, -5, -11, -16, -15, -11, -4, -1, 3, 1, -3, -4, -6, -2, 6,
                11, 14, 12, 8, 4, 4, 7, 10, 12, 10, 6, 2, -2, -2, -1, 1, 3, 0, -1, -3, -6, -8,
                -8, -6, -4, -7, -9, -13, -14, -12, -8, -3, 0, -1, -3, -3, -1, 1, 4, 4, 7, 8, 6,
                1, 0, 1, 6, 9, 9, 9, 7, 5, 3, 3, 4, 2, 1, -1, -1, -5, -9, -9, -8, -7, -6, -7,
                -8, -10, -10, -9, -7, -5, -4, -5, -4, -2, 0, 0, 0, 2, 5, 8, 10, 9, 7, 6, 7, 7,
                8, 9, 6, 5, 3, 2, 1, 0, -1, -2, -4, -4, -7, -8, -8, -7, -7, -7, -7, -9, -7, -6,
                -5, -4, -3, -3, -2, 0, 0, 0, 1, 2, 4, 6, 6, 6, 7, 6, 6, 6, 8, 9, 8, 5, 1, 0, 0,
                -2, -2, -1, 1, -2, -6, -10, -12, -10, -7, -4, -4, -6, -8, -9, -6, -4, -3, -1,
                -2, 0, 0, 0, 0, 0, 4, 7, 7, 9, 6, 5, 6, 6, 6, 5, 6, 5, 3, 2, 0, -2, -3, -4, -3,
                -4, -6, -6, -9, -9, -10, -7, -6, -6, -6, -6, -6, -4, -4, -2, 0, 2, 3, 3, 3, 3,
                3, 5, 6, 8, 7, 6, 4, 4, 5, 5, 5, 4, 3, 1, -1, -2, -3, -5, -6, -5, -3, -2, -5,
                -7, -9, -8, -5, -4, -4, -5, -4, -4, -4, -4, -3, 0, 4, 5, 5, 4, 3, 4, 5, 7, 7, 6,
                5, 4, 3, 3, 2, 4, 4, 1, -1, -2, -4, -5, -5, -5, -5, -5, -6, -7, -8, -7, -5, -5,
                -3, -1, -2, -3, -3, -3, -1, 0, 1, 3, 3, 4, 4, 4, 4, 5, 5, 7, 6, 4, 4, 2, 0, 1,
                1, 1, -1, -3, -3, -5, -5, -5, -5, -5, -4, -4, -7, -8, -9, -6, -5, -2, -1, -2,
                -1, -2, -1, 0, 1, 4, 6, 5, 5, 4, 4, 4, 4, 5, 6, 6, 4, 2, 3, 1, 0, 0, -1, -1, -2,
                -3, -5, -5, -5, -6, -5, -6, -7, -6, -5, -5, -4, -4, -3, -2, -1, 0, 0, 2, 3, 3,
                3, 4, 4, 3, 3, 4, 6, 5, 5, 4, 3, 2, 1, 1, 0, 0, 0, -3, -4, -5, -6, -7, -5, -6,
                -4, -4, -5, -6, -6, -6, -4, -4, -1, -1, 0, 0, -1, 0, 1, 3, 4, 6, 6, 6, 4, 3, 4,
                3, 4, 4, 3, 3, 2, 0, -1, -2, -2, -2, -3, -4, -4, -5, -6, -6, -7, -6, -4, -4, -4,
                -4, -4, -4, -4, -2, -1, 0, 1, 2, 3, 3, 4, 5, 6, 5, 6, 6, 5, 4, 4, 3, 2, 1, 0,
                -1, -1, -1, -2, -3, -2, -4, -4, -5, -6, -6, -6, -5, -5, -4, -4, -4, -4, -3, -2,
                -1, 1, 1, 1, 1, 1, 2, 3, 4, 4, 6, 6, 4, 4, 3, 2, 2, 2, 3, 3, 1, -1, -2, -4, -4,
                -4, -4, -4, -4, -4, -5, -5, -5, -4, -4, -4, -3, -4, -2, -2, -2, -1, 0, 2, 3, 3,
                3, 3, 3, 3, 4, 5, 5, 4, 3, 3, 2, 1, 1, 1, 0, 0, -1, -2, -3, -3, -4, -3, -4, -4,
                -4, -5, -6, -4, -4, -3, -3, -3, -2, -1, -2, 0, 0, 1, 2, 3, 3, 3, 4, 4, 4, 5, 4,
                4, 3, 3, 2, 1, 0, 0, -1, -1, -1, -2, -3, -4, -4, -3, -3, -5, -4, -6, -6, -5, -3,
                -3, -3, -3, -2, -1, 0, -1, 0, 2, 3, 2, 3, 3, 2, 3, 4, 5, 4, 4, 3, 1, 1, 1, 0, 0,
                -1, 0, -1, -3, -3, -4, -3, -3, -3, -4, -5, -5, -6, -4, -3, -3, -3, -2, -2, 0, 0,
                1, 2, 2, 2, 3, 2, 2, 3, 4, 4, 5, 3, 2, 2, 2, 1, 2, 1, 0, -1, -2, -3, -3, -3, -3,
                -4, -3, -4, -4, -5, -5, -4, -4, -3, -2, -2, -2, -1, 0, 0, 1, 2, 2, 3, 2, 2, 2,
                2, 3, 4, 3, 3, 2, 2, 2, 1, 2, 1, 0, -1, -1, -2, -3, -3, -3, -4, -4, -4, -4, -4,
                -4, -3, -4, -3, -3, -2, -1, -1, -1, 0, 0, 1, 2, 2, 3, 3, 3, 4, 2, 3, 3, 2, 2, 2,
                1, 1, 0, 1, 0, -1, -1, -3, -3, -3, -4, -4, -4, -4, -3, -4, -3, -3, -3, -3, -3,
                -2, -1, -1, 0, 0, 1, 0, 2, 2, 3, 3, 4, 3, 2, 2, 2, 3, 2, 2, 2, 1, 0, -1, 0, -2,
                -2, -2, -3, -3, -3, -4, -5, -4, -5, -4, -3, -4, -3, -3, -2, -1, -1, -1, 0, 1, 1,
                1, 2, 2, 3, 3, 3, 2, 3, 3, 2, 3, 2, 2, 0, 1, 0, -1, -1, -1, -3, -2, -3, -3, -4,
                -4, -4, -4, -4, -3, -3, -3, -3, -3, -1, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 3, 3,
                3, 3, 2, 2, 2, 2, 1, 1, 0, -1, -1, -2, -3, -2, -3, -3, -3, -4, -3, -4, -4, -4,
                -3, -2, -2, -2, -2, -2, -1, 0, 0, 1, 1, 1, 2, 2, 1, 2, 2, 2, 3, 3, 2, 2, 1, 1,
                0, 0, -1, 0, -1, -2, -2, -2, -3, -4, -3, -3, -3, -3, -4, -3, -3, -3, -2, -2, -2,
                -1, 0, 0, 0, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3, 2, 1, 2, 1, 1, 1, 1, 0, 0, -1, -2,
                -2, -2, -3, -2, -3, -3, -4, -3, -4, -3, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 1,
                1, 2, 1, 2, 1, 2, 3, 2, 2, 2, 1, 1, 0, 1, -1, 0, -1, -1, -2, -2, -2, -2, -3, -4,
                -3, -3, -4, -3, -2, -3, -2, -2, -2, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2,
                2, 2, 1, 1, 1, 0, 0, 0, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3, -3, -4, -3, -2,
                -2, -2, -2, -2, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0,
                0, -1, -1, -1, -2, -2, -3, -3, -2, -3, -3, -3, -2, -3, -2, -2, -2, -1, -1, -1,
                0, 0, 0, 1, 1, 1, 1, 2, 1, 2, 2, 2, 3, 1, 1, 1, 1, 1, 0, -1, 0, -1, -2, -1, -2,
                -2, -2, -2, -3, -4, -3, -3, -3, -2, -2, -2, -2, -2, -1, 0, 0, 0, 0, 1, 1, 1, 1,
                2, 1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 0, 0, -1, -1, -1, -2, -2, -3, -2, -2, -2, -3,
                -2, -3, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1,
                1, 0, 1, 0, 0, 0, -1, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2,
                -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0,
                -1, -2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0,
                1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 0, -1, -1, -2, -2, -2, -2, -2,
                -2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -1, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1,
                1, 1, 1, 2, 1, 1, 1, 1, 0, 1, 0, 0, -1, -2, -1, -2, -2, -2, -3, -2, -2, -2, -2,
                -2, -2, -2, -2, -2, -2, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1,
                1, 1, 1, 0, 0, -1, -2, -1, -1, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2,
                -1, 0, -1, 0, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1,
                -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, 0, -1, 0, 0, 1,
                0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2,
                -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, 0, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1,
                1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, 0, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
                -2, -1, -1, -2, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1,
                -1, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -2, -2, -2, -1, -1, -1, -1, 0,
                -1, 0, -1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
                -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0,
                0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
                -2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
                0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -2, -1, -1, -2, -1, -1, -1, -1,
                -1, -1, -1, -1, 0, -1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0,
                -1, -1, -1, -1, -1, -2, -2, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
                -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 1, 1,
                1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
                -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0,
                0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
                0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, -1, 0, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
                0, -1, 0, 0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0,
                0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1,
                -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0,
                -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
                0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0,
                0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
                0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1,
                -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
                0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
                -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0,
                -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0,
                0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1,
                -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
                0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1,
                0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1,
                -1, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
                0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, -1,
                -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0,
                0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
                -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1,
                0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1,
                -1, 0, -1, 0, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
                -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1,
                -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
                0, -1, 0, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1,
                -1, 0, 0, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0,
                -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0,
                0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1,
                -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
                0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0,
                0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
                0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1,
                0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0,
                0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0,
                -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
                -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0,
                0, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0,
                -1, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0,
                -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
                -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1,
                0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1,
                0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, };

#endif /* BAMBOO_01_4096_H_ */
