// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layers {
    BASE,
    SYM,
    NAV,
    NUM,
};

// Define the mod-tap keys for the home row
#define HRM_A    LGUI_T(KC_A)
#define HRM_S    LT(SYM, KC_S)
#define HRM_D    LSFT_T(KC_D)
#define HRM_F    LCTL_T(KC_F)

#define HRM_J    RCTL_T(KC_J)
#define HRM_K    RSFT_T(KC_K)
#define HRM_L    LT(SYM, KC_L)
#define HRM_SCLN RGUI_T(KC_SCLN)

#define HRM_V    LALT_T(KC_V)
#define HRM_M    RALT_T(KC_M)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_BSPC, HRM_A,   HRM_S,   HRM_D,   HRM_F,   KC_G,                        KC_H,    HRM_J,   HRM_K,   HRM_L,   HRM_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    HRM_V,   KC_B,                        KC_N,    HRM_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LGUI, MO(NAV), KC_ENT,    KC_SPC,  KC_ESC,  KC_RALT
    ),

    [NAV] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_DEL,  KC_F12,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LBRC, KC_RBRC,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [SYM] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_GRV,  KC_LABK, KC_RABK, KC_MINS, KC_PIPE,                     KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR,  KC_TRNS, KC_TRNS,
        KC_TRNS, KC_EXLM, KC_ASTR, KC_SLASH,KC_PEQL, KC_AMPR,                     KC_HASH, KC_LPRN, KC_RPRN, KC_SCLN, KC_DQUO, KC_TRNS,
        KC_TRNS, KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,                     KC_AT,   KC_COLN, KC_COMM, KC_DOT,  KC_QUOT, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [NUM] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),
};
// clang-format on
