#include <map>

std::map<unsigned, std::string> keyboard_event_mapping = {
    {0, "RESERVED"},
    {1, "ESC"},
    {2, "1"},
    {3, "2"},
    {4, "3"},
    {5, "4"},
    {6, "5"},
    {7, "6"},
    {8, "7"},
    {9, "8"},
    {10, "9"},
    {11, "0"},
    {12, "MINUS"},
    {13, "EQUAL"},
    {14, "BACKSPACE"},
    {15, "TAB"},
    {16, "Q"},
    {17, "W"},
    {18, "E"},
    {19, "R"},
    {20, "T"},
    {21, "Y"},
    {22, "U"},
    {23, "I"},
    {24, "O"},
    {25, "P"},
    {26, "LEFTBRACE"},
    {27, "RIGHTBRACE"},
    {28, "ENTER"},
    {29, "LEFTCTRL"},
    {30, "A"},
    {31, "S"},
    {32, "D"},
    {33, "F"},
    {34, "G"},
    {35, "H"},
    {36, "J"},
    {37, "K"},
    {38, "L"},
    {39, "SEMICOLON"},
    {40, "APOSTROPHE"},
    {41, "GRAVE"},
    {42, "LEFTSHIFT"},
    {43, "BACKSLASH"},
    {44, "Z"},
    {45, "X"},
    {46, "C"},
    {47, "V"},
    {48, "B"},
    {49, "N"},
    {50, "M"},
    {51, "COMMA"},
    {52, "DOT"},
    {53, "SLASH"},
    {54, "RIGHTSHIFT"},
    {55, "KPASTERISK"},
    {56, "LEFTALT"},
    {57, "SPACE"},
    {58, "CAPSLOCK"},
    {59, "F1"},
    {60, "F2"},
    {61, "F3"},
    {62, "F4"},
    {63, "F5"},
    {64, "F6"},
    {65, "F7"},
    {66, "F8"},
    {67, "F9"},
    {68, "F10"},
    {69, "NUMLOCK"},
    {70, "SCROLLLOCK"},
    {71, "KP7"},
    {72, "KP8"},
    {73, "KP9"},
    {74, "KPMINUS"},
    {75, "KP4"},
    {76, "KP5"},
    {77, "KP6"},
    {78, "KPPLUS"},
    {79, "KP1"},
    {80, "KP2"},
    {81, "KP3"},
    {82, "KP0"},
    {83, "KPDOT"},
    {85, "ZENKAKUHANKAKU"},
    {86, "102ND"},
    {87, "F11"},
    {88, "F12"},
    {89, "RO"},
    {90, "KATAKANA"},
    {91, "HIRAGANA"},
    {92, "HENKAN"},
    {93, "KATAKANAHIRAGANA"},
    {94, "MUHENKAN"},
    {95, "KPJPCOMMA"},
    {96, "KPENTER"},
    {97, "RIGHTCTRL"},
    {98, "KPSLASH"},
    {99, "SYSRQ"},
    {100, "RIGHTALT"},
    {101, "LINEFEED"},
    {102, "HOME"},
    {103, "UP"},
    {104, "PAGEUP"},
    {105, "LEFT"},
    {106, "RIGHT"},
    {107, "END"},
    {108, "DOWN"},
    {109, "PAGEDOWN"},
    {110, "INSERT"},
    {111, "DELETE"},
    {112, "MACRO"},
    {113, "MUTE"},
    {114, "VOLUMEDOWN"},
    {115, "VOLUMEUP"},
    {116, "POWER"},
    {117, "KPEQUAL"},
    {118, "KPPLUSMINUS"},
    {119, "PAUSE"},
    {120, "SCALE"},
    {121, "KPCOMMA"},
    {122, "HANGEUL"},
    {123, "HANJA"},
    {124, "YEN"},
    {125, "LEFTMETA"},
    {126, "RIGHTMETA"},
    {127, "COMPOSE"},
    {128, "STOP"},
    {129, "AGAIN"},
    {130, "PROPS"},
    {131, "UNDO"},
    {132, "FRONT"},
    {133, "COPY"},
    {134, "OPEN"},
    {135, "PASTE"},
    {136, "FIND"},
    {137, "CUT"},
    {138, "HELP"},
    {139, "MENU"},
    {140, "CALC"},
    {141, "SETUP"},
    {142, "SLEEP"},
    {143, "WAKEUP"},
    {144, "FILE"},
    {145, "SENDFILE"},
    {146, "DELETEFILE"},
    {147, "XFER"},
    {148, "PROG1"},
    {149, "PROG2"},
    {150, "WWW"},
    {151, "MSDOS"},
    {152, "COFFEE"},
    {153, "ROTATE_DISPLAY"},
    {154, "CYCLEWINDOWS"},
    {155, "MAIL"},
    {156, "BOOKMARKS"},
    {157, "COMPUTER"},
    {158, "BACK"},
    {159, "FORWARD"},
    {160, "CLOSECD"},
    {161, "EJECTCD"},
    {162, "EJECTCLOSECD"},
    {163, "NEXTSONG"},
    {164, "PLAYPAUSE"},
    {165, "PREVIOUSSONG"},
    {166, "STOPCD"},
    {167, "RECORD"},
    {168, "REWIND"},
    {169, "PHONE"},
    {170, "ISO"},
    {171, "CONFIG"},
    {172, "HOMEPAGE"},
    {173, "REFRESH"},
    {174, "EXIT"},
    {175, "MOVE"},
    {176, "EDIT"},
    {177, "SCROLLUP"},
    {178, "SCROLLDOWN"},
    {179, "KPLEFTPAREN"},
    {180, "KPRIGHTPAREN"},
    {181, "NEW"},
    {182, "REDO"},
    {183, "F13"},
    {184, "F14"},
    {185, "F15"},
    {186, "F16"},
    {187, "F17"},
    {188, "F18"},
    {189, "F19"},
    {190, "F20"},
    {191, "F21"},
    {192, "F22"},
    {193, "F23"},
    {194, "F24"},
    {200, "PLAYCD"},
    {201, "PAUSECD"},
    {202, "PROG3"},
    {203, "PROG4"},
    {204, "DASHBOARD"},
    {205, "SUSPEND"},
    {206, "CLOSE"},
    {207, "PLAY"},
    {208, "FASTFORWARD"},
    {209, "BASSBOOST"},
    {210, "PRINT"},
    {211, "HP"},
    {212, "CAMERA"},
    {213, "SOUND"},
    {214, "QUESTION"},
    {215, "EMAIL"},
    {216, "CHAT"},
    {217, "SEARCH"},
    {218, "CONNECT"},
    {219, "FINANCE"},
    {220, "SPORT"},
    {221, "SHOP"},
    {222, "ALTERASE"},
    {223, "CANCEL"},
    {224, "BRIGHTNESSDOWN"},
    {225, "BRIGHTNESSUP"},
    {226, "MEDIA"},
    {227, "SWITCHVIDEOMODE"},
    {228, "KBDILLUMTOGGLE"},
    {229, "KBDILLUMDOWN"},
    {230, "KBDILLUMUP"},
    {231, "SEND"},
    {232, "REPLY"},
    {233, "FORWARDMAIL"},
    {234, "SAVE"},
    {235, "DOCUMENTS"},
    {236, "BATTERY"},
    {237, "BLUETOOTH"},
    {238, "WLAN"},
    {239, "UWB"},
    {240, "UNKNOWN"},
    {241, "VIDEO_NEXT"},
    {242, "VIDEO_PREV"},
    {243, "BRIGHTNESS_CYCLE"},
    {244, "BRIGHTNESS_AUTO"},
    {245, "DISPLAY_OFF"},
    {246, "WWAN"},
    {247, "RFKILL"},
    {248, "MICMUTE"},
    {0x160, "OK"},
    {0x161, "SELECT"},
    {0x162, "GOTO"},
    {0x163, "CLEAR"},
    {0x164, "POWER2"},
    {0x165, "OPTION"},
    {0x166, "INFO"},
    {0x167, "TIME"},
    {0x168, "VENDOR"},
    {0x169, "ARCHIVE"},
    {0x16a, "PROGRAM"},
    {0x16b, "CHANNEL"},
    {0x16c, "FAVORITES"},
    {0x16d, "EPG"},
    {0x16e, "PVR"},
    {0x16f, "MHP"},
    {0x170, "LANGUAGE"},
    {0x171, "TITLE"},
    {0x172, "SUBTITLE"},
    {0x173, "ANGLE"},
    {0x174, "FULL_SCREEN"},
    {0x175, "MODE"},
    {0x176, "KEYBOARD"},
    {0x177, "ASPECT_RATIO"},
    {0x178, "PC"},
    {0x179, "TV"},
    {0x17a, "TV2"},
    {0x17b, "VCR"},
    {0x17c, "VCR2"},
    {0x17d, "SAT"},
    {0x17e, "SAT2"},
    {0x17f, "CD"},
    {0x180, "TAPE"},
    {0x181, "RADIO"},
    {0x182, "TUNER"},
    {0x183, "PLAYER"},
    {0x184, "TEXT"},
    {0x185, "DVD"},
    {0x186, "AUX"},
    {0x187, "MP3"},
    {0x188, "AUDIO"},
    {0x189, "VIDEO"},
    {0x18a, "DIRECTORY"},
    {0x18b, "LIST"},
    {0x18c, "MEMO"},
    {0x18d, "CALENDAR"},
    {0x18e, "RED"},
    {0x18f, "GREEN"},
    {0x190, "YELLOW"},
    {0x191, "BLUE"},
    {0x192, "CHANNELUP"},
    {0x193, "CHANNELDOWN"},
    {0x194, "FIRST"},
    {0x195, "LAST"},
    {0x196, "AB"},
    {0x197, "NEXT"},
    {0x198, "RESTART"},
    {0x199, "SLOW"},
    {0x19a, "SHUFFLE"},
    {0x19b, "BREAK"},
    {0x19c, "PREVIOUS"},
    {0x19d, "DIGITS"},
    {0x19e, "TEEN"},
    {0x19f, "TWEN"},
    {0x1a0, "VIDEOPHONE"},
    {0x1a1, "GAMES"},
    {0x1a2, "ZOOMIN"},
    {0x1a3, "ZOOMOUT"},
    {0x1a4, "ZOOMRESET"},
    {0x1a5, "WORDPROCESSOR"},
    {0x1a6, "EDITOR"},
    {0x1a7, "SPREADSHEET"},
    {0x1a8, "GRAPHICSEDITOR"},
    {0x1a9, "PRESENTATION"},
    {0x1aa, "DATABASE"},
    {0x1ab, "NEWS"},
    {0x1ac, "VOICEMAIL"},
    {0x1ad, "ADDRESSBOOK"},
    {0x1ae, "MESSENGER"},
    {0x1af, "DISPLAYTOGGLE"},
    {0x1b0, "SPELLCHECK"},
    {0x1b1, "LOGOFF"},
    {0x1b2, "DOLLAR"},
    {0x1b3, "EURO"},
    {0x1b4, "FRAMEBACK"},
    {0x1b5, "FRAMEFORWARD"},
    {0x1b6, "CONTEXT_MENU"},
    {0x1b7, "MEDIA_REPEAT"},
    {0x1b8, "10CHANNELSUP"},
    {0x1b9, "10CHANNELSDOWN"},
    {0x1ba, "IMAGES"},
    {0x1c0, "DEL_EOL"},
    {0x1c1, "DEL_EOS"},
    {0x1c2, "INS_LINE"},
    {0x1c3, "DEL_LINE"},
    {0x1d0, "FN"},
    {0x1d1, "FN_ESC"},
    {0x1d2, "FN_F1"},
    {0x1d3, "FN_F2"},
    {0x1d4, "FN_F3"},
    {0x1d5, "FN_F4"},
    {0x1d6, "FN_F5"},
    {0x1d7, "FN_F6"},
    {0x1d8, "FN_F7"},
    {0x1d9, "FN_F8"},
    {0x1da, "FN_F9"},
    {0x1db, "FN_F10"},
    {0x1dc, "FN_F11"},
    {0x1dd, "FN_F12"},
    {0x1de, "FN_1"},
    {0x1df, "FN_2"},
    {0x1e0, "FN_D"},
    {0x1e1, "FN_E"},
    {0x1e2, "FN_F"},
    {0x1e3, "FN_S"},
    {0x1e4, "FN_B"},
    {0x1f1, "BRL_DOT1"},
    {0x1f2, "BRL_DOT2"},
    {0x1f3, "BRL_DOT3"},
    {0x1f4, "BRL_DOT4"},
    {0x1f5, "BRL_DOT5"},
    {0x1f6, "BRL_DOT6"},
    {0x1f7, "BRL_DOT7"},
    {0x1f8, "BRL_DOT8"},
    {0x1f9, "BRL_DOT9"},
    {0x1fa, "BRL_DOT10"},
    {0x200, "NUMERIC_0"},
    {0x201, "NUMERIC_1"},
    {0x202, "NUMERIC_2"},
    {0x203, "NUMERIC_3"},
    {0x204, "NUMERIC_4"},
    {0x205, "NUMERIC_5"},
    {0x206, "NUMERIC_6"},
    {0x207, "NUMERIC_7"},
    {0x208, "NUMERIC_8"},
    {0x209, "NUMERIC_9"},
    {0x20a, "NUMERIC_STAR"},
    {0x20b, "NUMERIC_POUND"},
    {0x20c, "NUMERIC_A"},
    {0x20d, "NUMERIC_B"},
    {0x20e, "NUMERIC_C"},
    {0x20f, "NUMERIC_D"},
    {0x210, "CAMERA_FOCUS"},
    {0x211, "WPS_BUTTON"},
    {0x212, "TOUCHPAD_TOGGLE"},
    {0x213, "TOUCHPAD_ON"},
    {0x214, "TOUCHPAD_OFF"},
    {0x215, "CAMERA_ZOOMIN"},
    {0x216, "CAMERA_ZOOMOUT"},
    {0x217, "CAMERA_UP"},
    {0x218, "CAMERA_DOWN"},
    {0x219, "CAMERA_LEFT"},
    {0x21a, "CAMERA_RIGHT"},
    {0x21b, "ATTENDANT_ON"},
    {0x21c, "ATTENDANT_OFF"},
    {0x21d, "ATTENDANT_TOGGLE"},
    {0x21e, "LIGHTS_TOGGLE"},
    {0x230, "ALS_TOGGLE"},
    {0x231, "ROTATE_LOCK_TOGGLE"},
    {0x240, "BUTTONCONFIG"},
    {0x241, "TASKMANAGER"},
    {0x242, "JOURNAL"},
    {0x243, "CONTROLPANEL"},
    {0x244, "APPSELECT"},
    {0x245, "SCREENSAVER"},
    {0x246, "VOICECOMMAND"},
    {0x247, "ASSISTANT"},
    {0x248, "KBD_LAYOUT_NEXT"},
    {0x250, "BRIGHTNESS_MIN"},
    {0x251, "BRIGHTNESS_MAX"},
    {0x260, "KBDINPUTASSIST_PREV"},
    {0x261, "KBDINPUTASSIST_NEXT"},
    {0x262, "KBDINPUTASSIST_PREVGROUP"},
    {0x263, "KBDINPUTASSIST_NEXTGROUP"},
    {0x264, "KBDINPUTASSIST_ACCEPT"},
    {0x265, "KBDINPUTASSIST_CANCEL"},
    {0x266, "RIGHT_UP"},
    {0x267, "RIGHT_DOWN"},
    {0x268, "LEFT_UP"},
    {0x269, "LEFT_DOWN"},
    {0x26a, "ROOT_MENU"},
    {0x26b, "MEDIA_TOP_MENU"},
    {0x26c, "NUMERIC_11"},
    {0x26d, "NUMERIC_12"},
    {0x26e, "AUDIO_DESC"},
    {0x26f, "3D_MODE"},
    {0x270, "NEXT_FAVORITE"},
    {0x271, "STOP_RECORD"},
    {0x272, "PAUSE_RECORD"},
    {0x273, "VOD"},
    {0x274, "UNMUTE"},
    {0x275, "FASTREVERSE"},
    {0x276, "SLOWREVERSE"},
    {0x277, "DATA"},
    {0x278, "ONSCREEN_KEYBOARD"},
    {0x2ff, "MAX"},

};