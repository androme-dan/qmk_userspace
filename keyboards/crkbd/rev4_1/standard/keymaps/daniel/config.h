#pragma once

// Set timing for tap-hold
#define TAPPING_TERM 150
#define QUICK_TAP_TERM 0

// Caps word https://docs.qmk.fm/#/feature_caps_word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// Default RGB config is EEPROM is cleared
#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_DEFAULT_HUE 148
    #define RGB_MATRIX_DEFAULT_SAT 255
    #define RGB_MATRIX_DEFAULT_SPD 50
    #define RGB_MATRIX_HUE_STEP 5
    #define RGB_MATRIX_SAT_STEP 5
    #define RGB_MATRIX_VAL_STEP 5
    #define RGB_MATRIX_SPD_STEP 5
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#endif
