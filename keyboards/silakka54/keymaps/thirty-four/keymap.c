// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layers {
    BASE,
    SYM,
    NAV,
    NUM,
};

// Define the mod-tap keys for the home row
#define HRM_A LGUI_T(KC_A)
#define HRM_S LT(SYM, KC_S)
#define HRM_D LSFT_T(KC_D)
#define HRM_F LT(NAV, KC_F)

#define HRM_J LT(NUM, KC_J)
#define HRM_K RSFT_T(KC_K)
#define HRM_L LT(SYM, KC_L)
#define HRM_DASH RGUI_T(KC_MINUS)

#define HRM_V LCTL_T(KC_V)
#define HRM_M RCTL_T(KC_M)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//        ┌─────┬───────┬───────┬───────┬───────┬─────┐   ┌─────┬───────┬───────┬───────┬──────────┬─────┐
//        │     │       │       │       │       │     │   │     │       │       │       │          │     │
//        ├─────┼───────┼───────┼───────┼───────┼─────┤   ├─────┼───────┼───────┼───────┼──────────┼─────┤
//        │     │   q   │   w   │   e   │   r   │  t  │   │  y  │   u   │   i   │   o   │    p     │     │
//        ├─────┼───────┼───────┼───────┼───────┼─────┤   ├─────┼───────┼───────┼───────┼──────────┼─────┤
//        │     │ HRM_A │ HRM_S │ HRM_D │ HRM_F │  g  │   │  h  │ HRM_J │ HRM_K │ HRM_L │ HRM_DASH │     │
//        ├─────┼───────┼───────┼───────┼───────┼─────┤   ├─────┼───────┼───────┼───────┼──────────┼─────┤
//        │     │   z   │   x   │   c   │ HRM_V │  b  │   │  n  │ HRM_M │   ,   │   .   │    /     │     │
//        └─────┴───────┴───────┼───────┼───────┼─────┤   ├─────┼───────┼───────┼───────┴──────────┴─────┘
//                              │       │  tab  │ ent │   │ spc │  esc  │       │
//                              └───────┴───────┴─────┘   └─────┴───────┴───────┘
[BASE] = LAYOUT(
      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS,
      KC_TRNS , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,     KC_Y    , KC_U    , KC_I    , KC_O    , KC_P     , KC_TRNS,
      KC_TRNS , HRM_A   , HRM_S   , HRM_D   , HRM_F   , KC_G    ,     KC_H    , HRM_J   , HRM_K   , HRM_L   , HRM_DASH , KC_TRNS,
      KC_TRNS , KC_Z    , KC_X    , KC_C    , HRM_V   , KC_B    ,     KC_N    , HRM_M   , KC_COMM , KC_DOT  , KC_SLSH  , KC_TRNS,
                                    KC_TRNS , KC_TAB  , KC_ENT  ,     KC_SPC  , KC_ESC  , KC_TRNS
),

//        ┌─────┬─────┬─────┬─────┬─────┬─────┐   ┌──────┬──────┬──────┬──────┬─────┬─────┐
//        │  `  │ f1  │ f2  │ f3  │ f4  │ f5  │   │  f6  │  f7  │  f8  │  f9  │ f10 │ f11 │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├──────┼──────┼──────┼──────┼─────┼─────┤
//        │     │     │     │     │     │     │   │ pgup │ pgdn │ home │ end  │ del │ f12 │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├──────┼──────┼──────┼──────┼─────┼─────┤
//        │     │     │     │     │     │     │   │ left │ down │  up  │ rght │  [  │  ]  │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├──────┼──────┼──────┼──────┼─────┼─────┤
//        │     │     │     │     │     │     │   │      │      │      │      │     │     │
//        └─────┴─────┴─────┼─────┼─────┼─────┤   ├──────┼──────┼──────┼──────┴─────┴─────┘
//                          │     │     │     │   │      │      │      │
//                          └─────┴─────┴─────┘   └──────┴──────┴──────┘
[NAV] = LAYOUT(
      KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,     KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11 ,
      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_PGUP , KC_PGDN , KC_HOME , KC_END  , KC_DEL  , KC_F12 ,
      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_LBRC , KC_RBRC,
      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
                                    KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS
),

//        ┌─────┬─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┬─────┐
//        │     │     │     │     │     │     │   │     │     │     │     │     │     │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┼─────┤
//        │     │  `  │  <  │  >  │  -  │  |  │   │  ^  │  {  │  }  │  $  │     │     │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┼─────┤
//        │     │  !  │  *  │  /  │  =  │  &  │   │  #  │  (  │  )  │  ;  │  "  │     │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┼─────┤
//        │     │  ~  │  +  │  [  │  ]  │  %  │   │  @  │  :  │  ,  │  .  │  '  │     │
//        └─────┴─────┴─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┴─────┴─────┘
//                          │     │     │     │   │     │     │     │
//                          └─────┴─────┴─────┘   └─────┴─────┴─────┘
[SYM] = LAYOUT(
      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS  , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
      KC_TRNS , KC_GRV  , KC_LABK , KC_RABK  , KC_MINS , KC_PIPE ,     KC_CIRC , KC_LCBR , KC_RCBR , KC_DLR  , KC_TRNS , KC_TRNS,
      KC_TRNS , KC_EXLM , KC_ASTR , KC_SLASH , KC_EQL  , KC_AMPR ,     KC_HASH , KC_LPRN , KC_RPRN , KC_SCLN , KC_DQUO , KC_TRNS,
      KC_TRNS , KC_TILD , KC_PLUS , KC_LBRC  , KC_RBRC , KC_PERC ,     KC_AT   , KC_COLN , KC_COMM , KC_DOT  , KC_QUOT , KC_TRNS,
                                    KC_TRNS  , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS
),

//        ┌─────┬─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────────┬──────┬─────────┬────────┬─────┐
//        │     │     │     │     │     │     │   │     │         │      │         │        │     │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────────┼──────┼─────────┼────────┼─────┤
//        │     │  /  │  9  │  8  │  7  │  *  │   │     │    [    │  ]   │ QK_BOOT │ QK_RBT │     │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────────┼──────┼─────────┼────────┼─────┤
//        │     │  -  │  3  │  2  │  1  │  +  │   │     │  lsft   │ lgui │  lctl   │  lalt  │     │
//        ├─────┼─────┼─────┼─────┼─────┼─────┤   ├─────┼─────────┼──────┼─────────┼────────┼─────┤
//        │     │  x  │  6  │  5  │  4  │  %  │   │     │         │      │         │        │     │
//        └─────┴─────┴─────┼─────┼─────┼─────┤   ├─────┼─────────┼──────┼─────────┴────────┴─────┘
//                          │     │  0  │     │   │     │ QK_LLCK │      │
//                          └─────┴─────┴─────┘   └─────┴─────────┴──────┘
[NUM] = LAYOUT(
      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
      KC_TRNS , KC_SLSH , KC_9    , KC_8    , KC_7    , KC_ASTR ,     KC_TRNS , KC_LBRC , KC_RBRC , QK_BOOT , QK_RBT  , KC_TRNS,
      KC_TRNS , KC_MINS , KC_3    , KC_2    , KC_1    , KC_PLUS ,     KC_TRNS , KC_LSFT , KC_LGUI , KC_LCTL , KC_LALT , KC_TRNS,
      KC_TRNS , KC_X    , KC_6    , KC_5    , KC_4    , KC_PERC ,     KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS,
                                    KC_TRNS , KC_0    , KC_TRNS ,     KC_TRNS , QK_LLCK , KC_TRNS
)
};
// clang-format on

///////////////////////////////////////////////////////////////////////////////
// Speculative hold (https://docs.qmk.fm/tap_hold#speculative-hold)
///////////////////////////////////////////////////////////////////////////////
// bool get_speculative_hold(uint16_t keycode, keyrecord_t* record) {
//     //enable true for all modifiers
//     return true;
//
//     // switch (keycode) { // These keys may be speculatively held.
//     //     case LCTL_T(KC_ESC):
//     //     case LSFT_T(KC_Z):
//     //     case RSFT_T(KC_SLSH):
//     //         return true;
//     // }
//     // return false; // Disable otherwise.
// }

///////////////////////////////////////////////////////////////////////////////
// Combos (https://docs.qmk.fm/features/combo)
///////////////////////////////////////////////////////////////////////////////
const uint16_t caps_combo[] PROGMEM  = {KC_C, KC_COMM, COMBO_END};
const uint16_t x_c_combo[] PROGMEM   = {KC_X, KC_C, COMBO_END};
const uint16_t i_o_combo[] PROGMEM   = {KC_I, KC_O, COMBO_END};
const uint16_t w_e_combo[] PROGMEM   = {KC_W, KC_E, COMBO_END};
const uint16_t quote_combo[] PROGMEM = {RCTL_T(KC_M), KC_COMM, COMBO_END};
// clang-format off
combo_t key_combos[] = {
    COMBO(caps_combo,  CW_TOGG),  // C + , => Caps Word
    COMBO(x_c_combo,   KC_BSLS),
    COMBO(i_o_combo,   KC_BSPC),  // I + O => Backspace
    COMBO(w_e_combo,   KC_ESC),   // W + E => Esc
    COMBO(quote_combo, KC_QUOT),  // M + , => '
};
