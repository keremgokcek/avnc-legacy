/*
 * Copyright (c) 2020  Gaurav Ujjwal.
 *
 * SPDX-License-Identifier:  GPL-3.0-or-later
 *
 * See COPYING.txt for more details.
 */
#ifndef AVNC_KEYMAP_H
#define AVNC_KEYMAP_H

#include <rfb/keysym.h>

#define XF86XK_AudioLowerVolume  0x1008FF11
#define XF86XK_AudioRaiseVolume  0x1008FF13
#define XF86XK_AudioMute         0x1008FF12
#define XF86XK_MonBrightnessUp   0x1008FF02
#define XF86XK_MonBrightnessDown 0x1008FF03


constexpr int KEYMAP[] = {
        0,   //    AKEYCODE_UNKNOWN = 0,
        0,   //    AKEYCODE_SOFT_LEFT = 1,
        0,   //    AKEYCODE_SOFT_RIGHT = 2,
        0,   //    AKEYCODE_HOME = 3,
        0,   //    AKEYCODE_BACK = 4,
        0,   //    AKEYCODE_CALL = 5,
        0,   //    AKEYCODE_ENDCALL = 6,
        XK_0,   //    AKEYCODE_0 = 7,
        XK_1,   //    AKEYCODE_1 = 8,
        XK_2,   //    AKEYCODE_2 = 9,
        XK_3,   //    AKEYCODE_3 = 10,
        XK_4,   //    AKEYCODE_4 = 11,
        XK_5,   //    AKEYCODE_5 = 12,
        XK_6,   //    AKEYCODE_6 = 13,
        XK_7,   //    AKEYCODE_7 = 14,
        XK_8,   //    AKEYCODE_8 = 15,
        XK_9,   //    AKEYCODE_9 = 16,
        XK_asterisk,   //    AKEYCODE_STAR = 17,
        XK_numbersign,   //    AKEYCODE_POUND = 18,
        XK_Up,   //    AKEYCODE_DPAD_UP = 19,
        XK_Down,   //    AKEYCODE_DPAD_DOWN = 20,
        XK_Left,   //    AKEYCODE_DPAD_LEFT = 21,
        XK_Right,   //    AKEYCODE_DPAD_RIGHT = 22,
        0,   //    AKEYCODE_DPAD_CENTER = 23,
        XF86XK_AudioRaiseVolume,   //    AKEYCODE_VOLUME_UP = 24,
        XF86XK_AudioLowerVolume,   //    AKEYCODE_VOLUME_DOWN = 25,
        0,   //    AKEYCODE_POWER = 26,
        0,   //    AKEYCODE_CAMERA = 27,
        0,   //    AKEYCODE_CLEAR = 28,
        XK_a,   //    AKEYCODE_A = 29,
        XK_b,   //    AKEYCODE_B = 30,
        XK_c,   //    AKEYCODE_C = 31,
        XK_d,   //    AKEYCODE_D = 32,
        XK_e,   //    AKEYCODE_E = 33,
        XK_f,   //    AKEYCODE_F = 34,
        XK_g,   //    AKEYCODE_G = 35,
        XK_h,   //    AKEYCODE_H = 36,
        XK_i,   //    AKEYCODE_I = 37,
        XK_j,   //    AKEYCODE_J = 38,
        XK_k,   //    AKEYCODE_K = 39,
        XK_l,   //    AKEYCODE_L = 40,
        XK_m,   //    AKEYCODE_M = 41,
        XK_n,   //    AKEYCODE_N = 42,
        XK_o,   //    AKEYCODE_O = 43,
        XK_p,   //    AKEYCODE_P = 44,
        XK_q,   //    AKEYCODE_Q = 45,
        XK_r,   //    AKEYCODE_R = 46,
        XK_s,   //    AKEYCODE_S = 47,
        XK_t,   //    AKEYCODE_T = 48,
        XK_u,   //    AKEYCODE_U = 49,
        XK_v,   //    AKEYCODE_V = 50,
        XK_w,   //    AKEYCODE_W = 51,
        XK_x,   //    AKEYCODE_X = 52,
        XK_y,   //    AKEYCODE_Y = 53,
        XK_z,   //    AKEYCODE_Z = 54,
        XK_comma,   //    AKEYCODE_COMMA = 55,
        XK_period,   //    AKEYCODE_PERIOD = 56,
        XK_Alt_L,   //    AKEYCODE_ALT_LEFT = 57,
        XK_Alt_R,   //    AKEYCODE_ALT_RIGHT = 58,
        XK_Shift_L,   //    AKEYCODE_SHIFT_LEFT = 59,
        XK_Shift_R,   //    AKEYCODE_SHIFT_RIGHT = 60,
        XK_Tab,   //    AKEYCODE_TAB = 61,
        XK_space,   //    AKEYCODE_SPACE = 62,
        0,   //    AKEYCODE_SYM = 63,
        0,   //    AKEYCODE_EXPLORER = 64,
        0,   //    AKEYCODE_ENVELOPE = 65,
        XK_Return,   //    AKEYCODE_ENTER = 66,
        XK_BackSpace,   //    AKEYCODE_DEL = 67,
        XK_grave,   //    AKEYCODE_GRAVE = 68,
        XK_minus,   //    AKEYCODE_MINUS = 69,
        XK_equal,   //    AKEYCODE_EQUALS = 70,
        XK_bracketleft,   //    AKEYCODE_LEFT_BRACKET = 71,
        XK_bracketright,   //    AKEYCODE_RIGHT_BRACKET = 72,
        XK_backslash,   //    AKEYCODE_BACKSLASH = 73,
        XK_semicolon,   //    AKEYCODE_SEMICOLON = 74,
        XK_apostrophe,   //    AKEYCODE_APOSTROPHE = 75,
        XK_slash,   //    AKEYCODE_SLASH = 76,
        XK_at,   //    AKEYCODE_AT = 77,
        0,   //    AKEYCODE_NUM = 78,
        0,   //    AKEYCODE_HEADSETHOOK = 79,
        0,   //    AKEYCODE_FOCUS = 80,
        XK_plus,   //    AKEYCODE_PLUS = 81,
        0,   //    AKEYCODE_MENU = 82,
        0,   //    AKEYCODE_NOTIFICATION = 83,
        0,   //    AKEYCODE_SEARCH = 84,
        0,   //    AKEYCODE_MEDIA_PLAY_PAUSE = 85,
        0,   //    AKEYCODE_MEDIA_STOP = 86,
        0,   //    AKEYCODE_MEDIA_NEXT = 87,
        0,   //    AKEYCODE_MEDIA_PREVIOUS = 88,
        0,   //    AKEYCODE_MEDIA_REWIND = 89,
        0,   //    AKEYCODE_MEDIA_FAST_FORWARD = 90,
        0,   //    AKEYCODE_MUTE = 91,
        XK_Page_Up,   //    AKEYCODE_PAGE_UP = 92,
        XK_Page_Down,   //    AKEYCODE_PAGE_DOWN = 93,
        0,   //    AKEYCODE_PICTSYMBOLS = 94,
        0,   //    AKEYCODE_SWITCH_CHARSET = 95,
        0,   //    AKEYCODE_BUTTON_A = 96,
        0,   //    AKEYCODE_BUTTON_B = 97,
        0,   //    AKEYCODE_BUTTON_C = 98,
        0,   //    AKEYCODE_BUTTON_X = 99,
        0,   //    AKEYCODE_BUTTON_Y = 100,
        0,   //    AKEYCODE_BUTTON_Z = 101,
        0,   //    AKEYCODE_BUTTON_L1 = 102,
        0,   //    AKEYCODE_BUTTON_R1 = 103,
        0,   //    AKEYCODE_BUTTON_L2 = 104,
        0,   //    AKEYCODE_BUTTON_R2 = 105,
        0,   //    AKEYCODE_BUTTON_THUMBL = 106,
        0,   //    AKEYCODE_BUTTON_THUMBR = 107,
        0,   //    AKEYCODE_BUTTON_START = 108,
        0,   //    AKEYCODE_BUTTON_SELECT = 109,
        0,   //    AKEYCODE_BUTTON_MODE = 110,
        XK_Escape,   //    AKEYCODE_ESCAPE = 111,
        XK_Delete,   //    AKEYCODE_FORWARD_DEL = 112,
        XK_Control_L,   //    AKEYCODE_CTRL_LEFT = 113,
        XK_Control_R,   //    AKEYCODE_CTRL_RIGHT = 114,
        XK_Caps_Lock,   //    AKEYCODE_CAPS_LOCK = 115,
        XK_Scroll_Lock,   //    AKEYCODE_SCROLL_LOCK = 116,
        XK_Meta_L,   //    AKEYCODE_META_LEFT = 117,
        XK_Meta_R,   //    AKEYCODE_META_RIGHT = 118,
        0,   //    AKEYCODE_FUNCTION = 119,
        XK_Sys_Req,   //    AKEYCODE_SYSRQ = 120,
        XK_Break,   //    AKEYCODE_BREAK = 121,
        XK_Home,   //    AKEYCODE_MOVE_HOME = 122,
        XK_End,   //    AKEYCODE_MOVE_END = 123,
        XK_Insert,   //    AKEYCODE_INSERT = 124,
        0,   //    AKEYCODE_FORWARD = 125,
        0,   //    AKEYCODE_MEDIA_PLAY = 126,
        0,   //    AKEYCODE_MEDIA_PAUSE = 127,
        0,   //    AKEYCODE_MEDIA_CLOSE = 128,
        0,   //    AKEYCODE_MEDIA_EJECT = 129,
        0,   //    AKEYCODE_MEDIA_RECORD = 130,
        XK_F1,   //    AKEYCODE_F1 = 131,
        XK_F2,   //    AKEYCODE_F2 = 132,
        XK_F3,   //    AKEYCODE_F3 = 133,
        XK_F4,   //    AKEYCODE_F4 = 134,
        XK_F5,   //    AKEYCODE_F5 = 135,
        XK_F6,   //    AKEYCODE_F6 = 136,
        XK_F7,   //    AKEYCODE_F7 = 137,
        XK_F8,   //    AKEYCODE_F8 = 138,
        XK_F9,   //    AKEYCODE_F9 = 139,
        XK_F10,   //    AKEYCODE_F10 = 140,
        XK_F11,   //    AKEYCODE_F11 = 141,
        XK_F12,   //    AKEYCODE_F12 = 142,
        XK_Num_Lock,   //    AKEYCODE_NUM_LOCK = 143,
        XK_KP_0,   //    AKEYCODE_NUMPAD_0 = 144,
        XK_KP_1,   //    AKEYCODE_NUMPAD_1 = 145,
        XK_KP_2,   //    AKEYCODE_NUMPAD_2 = 146,
        XK_KP_3,   //    AKEYCODE_NUMPAD_3 = 147,
        XK_KP_4,   //    AKEYCODE_NUMPAD_4 = 148,
        XK_KP_5,   //    AKEYCODE_NUMPAD_5 = 149,
        XK_KP_6,   //    AKEYCODE_NUMPAD_6 = 150,
        XK_KP_7,   //    AKEYCODE_NUMPAD_7 = 151,
        XK_KP_8,   //    AKEYCODE_NUMPAD_8 = 152,
        XK_KP_9,   //    AKEYCODE_NUMPAD_9 = 153,
        XK_KP_Divide,   //    AKEYCODE_NUMPAD_DIVIDE = 154,
        XK_KP_Multiply,   //    AKEYCODE_NUMPAD_MULTIPLY = 155,
        XK_KP_Subtract,   //    AKEYCODE_NUMPAD_SUBTRACT = 156,
        XK_KP_Add,   //    AKEYCODE_NUMPAD_ADD = 157,
        XK_KP_Decimal,   //    AKEYCODE_NUMPAD_DOT = 158,
        0,   //    AKEYCODE_NUMPAD_COMMA = 159,
        XK_KP_Enter,   //    AKEYCODE_NUMPAD_ENTER = 160,
        XK_KP_Equal,   //    AKEYCODE_NUMPAD_EQUALS = 161,
        0,   //    AKEYCODE_NUMPAD_LEFT_PAREN = 162,
        0,   //    AKEYCODE_NUMPAD_RIGHT_PAREN = 163,
        XF86XK_AudioMute,   //    AKEYCODE_VOLUME_MUTE = 164,
        0,   //    AKEYCODE_INFO = 165,
        0,   //    AKEYCODE_CHANNEL_UP = 166,
        0,   //    AKEYCODE_CHANNEL_DOWN = 167,
        0,   //    AKEYCODE_ZOOM_IN = 168,
        0,   //    AKEYCODE_ZOOM_OUT = 169,
        0,   //    AKEYCODE_TV = 170,
        0,   //    AKEYCODE_WINDOW = 171,
        0,   //    AKEYCODE_GUIDE = 172,
        0,   //    AKEYCODE_DVR = 173,
        0,   //    AKEYCODE_BOOKMARK = 174,
        0,   //    AKEYCODE_CAPTIONS = 175,
        0,   //    AKEYCODE_SETTINGS = 176,
        0,   //    AKEYCODE_TV_POWER = 177,
        0,   //    AKEYCODE_TV_INPUT = 178,
        0,   //    AKEYCODE_STB_POWER = 179,
        0,   //    AKEYCODE_STB_INPUT = 180,
        0,   //    AKEYCODE_AVR_POWER = 181,
        0,   //    AKEYCODE_AVR_INPUT = 182,
        0,   //    AKEYCODE_PROG_RED = 183,
        0,   //    AKEYCODE_PROG_GREEN = 184,
        0,   //    AKEYCODE_PROG_YELLOW = 185,
        0,   //    AKEYCODE_PROG_BLUE = 186,
        0,   //    AKEYCODE_APP_SWITCH = 187,
        0,   //    AKEYCODE_BUTTON_1 = 188,
        0,   //    AKEYCODE_BUTTON_2 = 189,
        0,   //    AKEYCODE_BUTTON_3 = 190,
        0,   //    AKEYCODE_BUTTON_4 = 191,
        0,   //    AKEYCODE_BUTTON_5 = 192,
        0,   //    AKEYCODE_BUTTON_6 = 193,
        0,   //    AKEYCODE_BUTTON_7 = 194,
        0,   //    AKEYCODE_BUTTON_8 = 195,
        0,   //    AKEYCODE_BUTTON_9 = 196,
        0,   //    AKEYCODE_BUTTON_10 = 197,
        0,   //    AKEYCODE_BUTTON_11 = 198,
        0,   //    AKEYCODE_BUTTON_12 = 199,
        0,   //    AKEYCODE_BUTTON_13 = 200,
        0,   //    AKEYCODE_BUTTON_14 = 201,
        0,   //    AKEYCODE_BUTTON_15 = 202,
        0,   //    AKEYCODE_BUTTON_16 = 203,
        0,   //    AKEYCODE_LANGUAGE_SWITCH = 204,
        0,   //    AKEYCODE_MANNER_MODE = 205,
        0,   //    AKEYCODE_3D_MODE = 206,
        0,   //    AKEYCODE_CONTACTS = 207,
        0,   //    AKEYCODE_CALENDAR = 208,
        0,   //    AKEYCODE_MUSIC = 209,
        0,   //    AKEYCODE_CALCULATOR = 210,
        0,   //    AKEYCODE_ZENKAKU_HANKAKU = 211,
        0,   //    AKEYCODE_EISU = 212,
        0,   //    AKEYCODE_MUHENKAN = 213,
        0,   //    AKEYCODE_HENKAN = 214,
        0,   //    AKEYCODE_KATAKANA_HIRAGANA = 215,
        0,   //    AKEYCODE_YEN = 216,
        0,   //    AKEYCODE_RO = 217,
        0,   //    AKEYCODE_KANA = 218,
        0,   //    AKEYCODE_ASSIST = 219,
        0,   //    AKEYCODE_BRIGHTNESS_DOWN = 220,
        0,   //    AKEYCODE_BRIGHTNESS_UP = 221,
        0,   //    AKEYCODE_MEDIA_AUDIO_TRACK = 222,
        0,   //    AKEYCODE_SLEEP = 223,
        0,   //    AKEYCODE_WAKEUP = 224,
        0,   //    AKEYCODE_PAIRING = 225,
        0,   //    AKEYCODE_MEDIA_TOP_MENU = 226,
        0,   //    AKEYCODE_11 = 227,
        0,   //    AKEYCODE_12 = 228,
        0,   //    AKEYCODE_LAST_CHANNEL = 229,
        0,   //    AKEYCODE_TV_DATA_SERVICE = 230,
        0,   //    AKEYCODE_VOICE_ASSIST = 231,
        0,   //    AKEYCODE_TV_RADIO_SERVICE = 232,
        0,   //    AKEYCODE_TV_TELETEXT = 233,
        0,   //    AKEYCODE_TV_NUMBER_ENTRY = 234,
        0,   //    AKEYCODE_TV_TERRESTRIAL_ANALOG = 235,
        0,   //    AKEYCODE_TV_TERRESTRIAL_DIGITAL = 236,
        0,   //    AKEYCODE_TV_SATELLITE = 237,
        0,   //    AKEYCODE_TV_SATELLITE_BS = 238,
        0,   //    AKEYCODE_TV_SATELLITE_CS = 239,
        0,   //    AKEYCODE_TV_SATELLITE_SERVICE = 240,
        0,   //    AKEYCODE_TV_NETWORK = 241,
        0,   //    AKEYCODE_TV_ANTENNA_CABLE = 242,
        0,   //    AKEYCODE_TV_INPUT_HDMI_1 = 243,
        0,   //    AKEYCODE_TV_INPUT_HDMI_2 = 244,
        0,   //    AKEYCODE_TV_INPUT_HDMI_3 = 245,
        0,   //    AKEYCODE_TV_INPUT_HDMI_4 = 246,
        0,   //    AKEYCODE_TV_INPUT_COMPOSITE_1 = 247,
        0,   //    AKEYCODE_TV_INPUT_COMPOSITE_2 = 248,
        0,   //    AKEYCODE_TV_INPUT_COMPONENT_1 = 249,
        0,   //    AKEYCODE_TV_INPUT_COMPONENT_2 = 250,
        0,   //    AKEYCODE_TV_INPUT_VGA_1 = 251,
        0,   //    AKEYCODE_TV_AUDIO_DESCRIPTION = 252,
        0,   //    AKEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP = 253,
        0,   //    AKEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN = 254,
        0,   //    AKEYCODE_TV_ZOOM_MODE = 255,
        0,   //    AKEYCODE_TV_CONTENTS_MENU = 256,
        0,   //    AKEYCODE_TV_MEDIA_CONTEXT_MENU = 257,
        0,   //    AKEYCODE_TV_TIMER_PROGRAMMING = 258,
        0,   //    AKEYCODE_HELP = 259,
        0,   //    AKEYCODE_NAVIGATE_PREVIOUS = 260,
        0,   //    AKEYCODE_NAVIGATE_NEXT = 261,
        0,   //    AKEYCODE_NAVIGATE_IN = 262,
        0,   //    AKEYCODE_NAVIGATE_OUT = 263,
        0,   //    AKEYCODE_STEM_PRIMARY = 264,
        0,   //    AKEYCODE_STEM_1 = 265,
        0,   //    AKEYCODE_STEM_2 = 266,
        0,   //    AKEYCODE_STEM_3 = 267,
        0,   //    AKEYCODE_DPAD_UP_LEFT = 268,
        0,   //    AKEYCODE_DPAD_DOWN_LEFT = 269,
        0,   //    AKEYCODE_DPAD_UP_RIGHT = 270,
        0,   //    AKEYCODE_DPAD_DOWN_RIGHT = 271,
        0,   //    AKEYCODE_MEDIA_SKIP_FORWARD = 272,
        0,   //    AKEYCODE_MEDIA_SKIP_BACKWARD = 273,
        0,   //    AKEYCODE_MEDIA_STEP_FORWARD = 274,
        0,   //    AKEYCODE_MEDIA_STEP_BACKWARD = 275,
        0,   //    AKEYCODE_SOFT_SLEEP = 276,
        0,   //    AKEYCODE_CUT = 277,
        0,   //    AKEYCODE_COPY = 278,
        0,   //    AKEYCODE_PASTE = 279,
        0,   //    AKEYCODE_SYSTEM_NAVIGATION_UP = 280,
        0,   //    AKEYCODE_SYSTEM_NAVIGATION_DOWN = 281,
        0,   //    AKEYCODE_SYSTEM_NAVIGATION_LEFT = 282,
        0,   //    AKEYCODE_SYSTEM_NAVIGATION_RIGHT = 283,
        0,   //    AKEYCODE_ALL_APPS = 284,
        0,   //    AKEYCODE_REFRESH = 285,
        0,   //    AKEYCODE_THUMBS_UP = 286,
        0,   //    AKEYCODE_THUMBS_DOWN = 287,
        0   //    AKEYCODE_PROFILE_SWITCH = 288 */
};

constexpr size_t KEYMAP_LENGTH = sizeof(KEYMAP) / sizeof(KEYMAP[0]);

#endif //AVNC_KEYMAP_H