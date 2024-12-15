
#include "vanilla-layout.h"

const __flash key_code vanilla_layout[VANILLA_LAYOUT_ROWS][VANILLA_LAYOUT_COLS] = {
  { KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DELETE },
  { KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPACE },
  { KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_BSLASH },
  { KC_CAPSLOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_ENTER, KC_HOME },
  { KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT, KC_UP, KC_PGUP },
  { KC_LCTRL, 0, KC_LGUI, KC_LALT, KC_SPACE, KC_END, KC_SPACE, KC_RCTRL, KC_RALT, 0, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDOWN },
};

