/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Geeetech GT2650 pin assignments
 */

/**
 * Rev B   22 July 2018 - TH3D TUNED
 *
 */

#if !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "GT2560 Rev.B"
#endif

//#define DEFAULT_MACHINE_NAME    "GEEETECH2650"

//
// Servos
//
#define SERVO0_PIN         13

//
// Limit Switches
//
#define X_MIN_PIN          24
#define X_MAX_PIN          22
#define Y_MIN_PIN          28
#define Y_MAX_PIN          26
#define Z_MIN_PIN          30
#define Z_MAX_PIN          32

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  32
#endif

//
// Steppers
//
#define X_STEP_PIN         37
#define X_DIR_PIN          39
#define X_ENABLE_PIN       35

#define Y_STEP_PIN         31
#define Y_DIR_PIN          33
#define Y_ENABLE_PIN       29

#define Z_STEP_PIN         25
#define Z_DIR_PIN          23
#define Z_ENABLE_PIN       29

#define E0_STEP_PIN        46
#define E0_DIR_PIN         44
#define E0_ENABLE_PIN      12

#define E1_STEP_PIN        49
#define E1_DIR_PIN         47
#define E1_ENABLE_PIN      48

//
// Temperature Sensors
//
#define TEMP_0_PIN         11   // Analog Input
#define TEMP_1_PIN          3   // Analog Input
#define TEMP_BED_PIN       10   // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN        10
#define HEATER_1_PIN        3
#define HEATER_BED_PIN      4

#define FAN_PIN             9

//
// Misc. Functions
//
#define SDSS               53
#define LED_PIN             6
#define PS_ON_PIN          12
#define SUICIDE_PIN        54   // PIN that has to be turned on right after start, to keep power flowing.
#define CASE_LIGHT_PIN     21

//
// LCD / Controller
//
#if ENABLED(ULTRA_LCD)

  #define BEEPER_PIN 18

  #if ENABLED(NEWPANEL)

    #define LCD_PINS_RS     20
    #define LCD_PINS_ENABLE 17
    #define LCD_PINS_D4     16
    #define LCD_PINS_D5     21
    #define LCD_PINS_D6      5
    #define LCD_PINS_D7     36

    // buttons are directly attached
    #define BTN_EN1 42
    #define BTN_EN2 40
    #define BTN_ENC 19

    #define SD_DETECT_PIN 38

  #endif // !NEWPANEL

#endif // ULTRA_LCD
