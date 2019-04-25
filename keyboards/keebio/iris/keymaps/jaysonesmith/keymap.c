#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _WORKMAN 0
#define _SYMPAD 1 // Symbols and numpad
#define _DIRSIC 2 // Direction and music
#define _ADJUST 16

enum custom_keycodes {
  WORKMAN = SAFE_RANGE,
  SYMPAD,
  DIRSIC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_WORKMAN] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB,  KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,                               KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, KC_EQL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LSFT, KC_A,    KC_S,    KC_H,    KC_T,    KC_G,                               KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LCTL, KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,    KC_DEL,           KC_NO,   KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLASH,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LALT, KC_LGUI, LT(1, KC_BSPACE),          MO(2),   RSFT_T(KC_SPC), KC_ENT
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYMPAD] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_PSLS, KC_PAST, KC_PMNS, KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_CAPS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LPRN,                            KC_LBRC, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RPRN,                            KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_EXLM, KC_QUES, KC_NO,            KC_HOME,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_NO,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_NO,   KC_NO,   KC_TRNS,                   KC_END,   KC_P0,   KC_PDOT
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_DIRSIC] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LCTL, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_MPLY, KC_VOLD, KC_VOLU, KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_NO,   KC_NO,   KC_NO,                     KC_TRNS, KC_MPRV, KC_MNXT
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
    //,--------+--------+--------+--------+--------+--------.                          ,--------+--------+--------+--------+--------+--------.
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, \
    //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, \
    //|--------+--------+--------+--------+--------+--------|                          |--------+--------+--------+--------+--------+--------|
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, \
    //|--------+--------+--------+--------+--------+--------+--------.        ,--------|--------+--------+--------+--------+--------+--------|
        _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, \
    //`--------+--------+--------+----+---+--------+--------+--------/        \--------+--------+--------+---+----+--------+--------+--------'
                                        _______, _______, _______,                  _______, _______, _______
    //                                `--------+--------+--------'                `--------+--------+--------'
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case WORKMAN:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_WORKMAN);
      }
      return false;
      break;
    case SYMPAD:
      if (record->event.pressed) {
        layer_on(_SYMPAD);
        update_tri_layer(_SYMPAD, _DIRSIC, _ADJUST);
      } else {
        layer_off(_SYMPAD);
        update_tri_layer(_SYMPAD, _DIRSIC, _ADJUST);
      }
      return false;
      break;
    case DIRSIC:
      if (record->event.pressed) {
        layer_on(_DIRSIC);
        update_tri_layer(_SYMPAD, _DIRSIC, _ADJUST);
      } else {
        layer_off(_DIRSIC);
        update_tri_layer(_SYMPAD, _DIRSIC, _ADJUST);
      }
      return false;
      break;
  }
  return true;
}
