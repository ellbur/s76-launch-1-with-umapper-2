
#pragma once

#include <inttypes.h>
#include <stdbool.h>

#include "../quantum/keycode.h"
#include "../quantum/keycodes.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_KEYS 0xE8
typedef unsigned int key_code;
    
#define KC_SCOLON KC_SEMICOLON
#define KC_LSHIFT KC_LEFT_SHIFT
#define KC_RSHIFT KC_RIGHT_SHIFT
#define KC_CAPSLOCK KC_CAPS_LOCK
#define KC_LBRACKET KC_LEFT_BRACKET
#define KC_RBRACKET KC_RIGHT_BRACKET
#define KC_BSLASH KC_BACKSLASH
#define KC_PGDOWN KC_PAGE_DOWN
#define KC_BSPACE KC_BACKSPACE
#define KC_LCTRL KC_LEFT_CTRL
#define KC_RCTRL KC_RIGHT_CTRL

#ifdef __cplusplus
}
#endif

