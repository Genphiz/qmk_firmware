/* Copyright 2020 2022 Luca Mazzilli <setmaat@gmail.com>
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0C45
#define PRODUCT_ID      0x8006
#define DEVICE_VER      0x0001

#define MANUFACTURER    Aukey
#define PRODUCT         KMG12
#define DESCRIPTION     KMG12

/* key matrix size */
#define MATRIX_ROWS 6 //had to use 8 row to map the additional 2 underglow rows (LED_MATRIX_ROWS is ignored in initing the array g_led_config)
#define MATRIX_COLS 21

#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { D4, D3, B15, B14, B13, B6, D6, D5, A8, A9, A10, A11, A12, A13, A14, B0, B1, B2, B3, B4, B5 }
#define MATRIX_ROW_PINS { C15, D11, D10, D9, D8, D7 } //had to use 8 row to map the underglow

//#define UNUSED_PINS { C13, C14 } //P2.13, P2.14 have no trace on PCB

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

/* Enable NKRO - Up to 248 keys at the same time. */
#define FORCE_NKRO

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

//#define LED_NUM_LOCK_PIN    B13
//#define LED_CAPS_LOCK_PIN   B14
//#define LED_SCROLL_LOCK_PIN B12
#define LED_PIN_ON_STATE    0

#include "config_led.h"

//rgb effects/* Disable RGB lighting when PC is in suspend */
#define RGB_DISABLE_WHEN_USB_SUSPENDED

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
// #define ENABLE_RGB_MATRIX_BAND_SAT
// #define ENABLE_RGB_MATRIX_BAND_VAL
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
// #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
//#define ENABLE_RGB_MATRIX_RAINDROPS
// #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #define ENABLE_RGB_MATRIX_HUE_BREATHING
// #define ENABLE_RGB_MATRIX_HUE_PENDULUM
// #define ENABLE_RGB_MATRIX_HUE_WAVE
// #define ENABLE_RGB_MATRIX_PIXEL_RAIN
// #define ENABLE_RGB_MATRIX_PIXEL_FLOW
// #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
//#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
//#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
//#define ENABLE_RGB_MATRIX_SPLASH
//#define ENABLE_RGB_MATRIX_MULTISPLASH
//#define ENABLE_RGB_MATRIX_SOLID_SPLASH
//#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
