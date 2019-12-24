#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default DVORAK layer
________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|  ESC   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   | DEL    |  PGUP  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        | BACK   |        |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  [ {   |  ] }   | SPACE  |  PGDN  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
    |        |        |        |        |        |        |        |        |        |        |        |  ?     |   +    |        |
    |  TAB   |   '"   |   ,<   |   .>   |   P    |   Y    |   F    |   G    |   C    |   R    |   L    |  /     |   =    |  |   \ |
    |________|________|________|________|________|________|________|________|________|________|________|________|________|________|
      |        |        |        |        |        |        |        |        |        |        |        |   _    |        |
      | CTRL   |   A    |   O    |   E    |   U    |   I    |   D    |   H    |   T    |   N    |   S    |   -    | ENTER  |
      |________|________|________|________|________|________|________|________|________|________|________|________|________|____
          |        |        |        |        |        |        |        |        |        |        |        |        |        |
          | SHIFT  |   ;:   |   Q    |   J    |   K    |   X    |   B    |   M    |   W    |    V   |   Z    | SHIFT  |   UP   |
      ____|________|________|________|________|________|________|________|________|________|________|________|________|________|_________
      |        |        |        |        |                 |                 |        |        |        |   |        |        |        |
      |  CTRL  |   Z    |  LALT  |  LGUI  |      SPACE      |        FN       |  RALT  |  RGUI  | RCTRL  |   |  LEFT  |  DOWN  | RIGHT  |
      |________|________|________|________|_________________|_________________|________|________|________|   |________|________|________|
*/

  [0] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_PGUP,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSPC, KC_PGDN,
        KC_TAB, KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL, KC_BSLS,
           KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS, KC_ENT,
               KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,   KC_RSFT, KC_UP,
           KC_LCTL, KC_Z,    KC_LALT, KC_LGUI,      KC_SPC,              MO(2),     KC_RALT, KC_RGUI, KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT
  ),

  /* Layer 1, QWERTY layer
________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|  ESC   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   | DEL    |  PGUP  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        | BACK   |        |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | SPACE  |  PGDN  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
    |        |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |        |
    |  TAB   |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \ |
    |________|________|________|________|________|________|________|________|________|________|________|________|________|________|
      |        |        |        |        |        |        |        |        |        |        |   ;    |   '    |        |
      | CTRL   |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    | ENTER  |
      |________|________|________|________|________|________|________|________|________|________|________|________|________|____
          |        |        |        |        |        |        |        |        |   ,    |    .   |   /    |        |        |
          | SHIFT  |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    | SHIFT  |   UP   |
      ____|________|________|________|________|________|________|________|________|________|________|________|________|________|_________
      |        |        |        |        |                 |                 |        |        |        |   |        |        |        |
      | CTRL   |   Z    |  LALT  | LGUI   |    SPACE        |        FN       |  RALT  |  RGUI  | RCTRL  |   |  LEFT  |  DOWN  | RIGHT  |
      |________|________|________|________|_________________|_________________|________|________|________|   |________|________|________|
*/

  [1] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_PGUP,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PGDN,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
          KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
              KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT, KC_UP,
          KC_LCTL, MO(1),    KC_LALT, KC_LGUI,      KC_SPC,           MO(2),        KC_RALT, KC_RGUI, KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT
  ),

   /* Layer 2, function layer
________________________________________________________________________________________________________________________________________
|ACTIVATE|ACTIVATE|        |        |        |        |        |        |        |        |        |        |        |        |        |
| DVORAK | QWERTY |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
    |        |        |        |        |        |        |        |        |        |        | VOLUME | VOLUME | VOLUME |        |
    |        |  HOME  |   UP   |   END  |  PGUP  |        | DELETE |        |        |        | DOWN   | UP     | MUTE   |        |
    |________|________|________|________|________|________|________|________|________|________|________|________|________|________|
      |        |        |        |        |        |        |        |        |        |        |        |        |        |
      |        |  LEFT  |  DOWN  |  RIGHT |  PGDN  |        |  LEFT  |  DOWN  |   UP   | RIGHT  |        |        |        |
      |________|________|________|________|________|________|________|________|________|________|________|________|________|____
          |        |        |        |        |        |        |        | PLAY/  | MEDIA  | MEDIA  |        |        |        |
          |        |        |        |        |        |        |        | PAUSE  | PREV   | NEXT   |        |        |  PGUP  |
      ____|________|________|________|________|________|________|________|________|________|________|________|________|________|_________
      |        |        |       |        |                 |                 |        |        |        |    |        |        |        |
      |        |        |       |        |    BACKSPACE    |                 |        |        |        |    |  HOME  |  PGDN  |  END   |
      |________|________|_______|________|_________________|_________________|________|________|________|    |________|________|________|

*/

  [2] = LAYOUT(
    TO(0),     TO(1), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS,
          KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS,  KC_PGUP,
        KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,      KC_BSPC,          KC_TRNS,      KC_TRNS,   KC_TRNS, KC_TRNS,   KC_HOME, KC_PGDN, KC_END
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
