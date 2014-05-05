/* 
 * File:   device.cpp
 * Author: marketa
 * 
 * Created on 25. duben 2014, 12:37
 */

#include "device.h"

device::device() {
}

device::~device() {
}

void device::close() {
}

void device::open() {
}

void device::acceptFeedback(std::shared_ptr<eventMessage> e) {
}

/**
 * 
 * @param code 
 * @return String with name of button
 */
std::string device::getCodeNameButton(uint16_t code) {
    switch (code) {
        case KEY_RESERVED:
            return "KEY_RESERVED";
        case KEY_ESC:
            return "KEY_ESC";
        case KEY_1:
            return "KEY_1";
        case KEY_2:
            return "KEY_2";
        case KEY_3:
            return "KEY_3";
        case KEY_4:
            return "KEY_4";
        case KEY_5:
            return "KEY_5";
        case KEY_6:
            return "KEY_6";
        case KEY_7:
            return "KEY_7";
        case KEY_8:
            return "KEY_8";
        case KEY_9:
            return "KEY_9";
        case KEY_0:
            return "KEY_0";
        case KEY_MINUS:
            return "KEY_MINUS";
        case KEY_EQUAL:
            return "KEY_EQUAL";
        case KEY_BACKSPACE:
            return "KEY_BACKSPACE";
        case KEY_TAB:
            return "KEY_TAB";
        case KEY_Q:
            return "KEY_Q";
        case KEY_W:
            return "KEY_W";
        case KEY_E:
            return "KEY_E";
        case KEY_R:
            return "KEY_R";
        case KEY_T:
            return "KEY_T";
        case KEY_Y:
            return "KEY_Y";
        case KEY_U:
            return "KEY_U";
        case KEY_I:
            return "KEY_I";
        case KEY_O:
            return "KEY_O";
        case KEY_P:
            return "KEY_P";
        case KEY_LEFTBRACE:
            return "KEY_LEFTBRACE";
        case
            KEY_RIGHTBRACE :
            return "KEY_RIGHTBRACE";
        case
            KEY_ENTER :
            return "KEY_ENTER";
        case
            KEY_LEFTCTRL :
            return "KEY_LEFTCTRL";
        case
            KEY_A :
            return "KEY_A";
        case
            KEY_S :
            return "KEY_S";
        case
            KEY_D :
            return "KEY_D";
        case
            KEY_F :
            return "KEY_F";
        case
            KEY_G :
            return "KEY_G";
        case
            KEY_H :
            return "KEY_H";
        case
            KEY_J :
            return "KEY_J";
        case
            KEY_K :
            return "KEY_K";
        case
            KEY_L :
            return "KEY_L";
        case KEY_SEMICOLON:
            return "KEY_EMICOLON";
        case
            KEY_APOSTROPHE :
            return "KEY_APOSTROPHE";
        case
            KEY_GRAVE :
            return "KEY_GRAVE";
        case
            KEY_LEFTSHIFT :
            return "KEY_LEFTSHIFT";
        case
            KEY_BACKSLASH :
            return "KEY_BACKSLASH";
        case
            KEY_Z :
            return "KEY_Z";
        case
            KEY_X :
            return "KEY_X";
        case
            KEY_C :
            return "KEY_C";
        case
            KEY_V :
            return "KEY_V";
        case
            KEY_B :
            return "KEY_B";
        case
            KEY_N :
            return "KEY_N";
        case
            KEY_M :
            return "KEY_M";
        case
            KEY_COMMA :
            return "KEY_COMMA";
        case
            KEY_DOT :
            return "KEY_DOT";
        case
            KEY_SLASH :
            return "KEY_SLASH";
        case
            KEY_RIGHTSHIFT :
            return "KEY_RIGHTSHIFT";
        case
            KEY_KPASTERISK :
            return "KEY_KPASTERISK";
        case
            KEY_LEFTALT :
            return "KEY_LEFTALT";
        case
            KEY_SPACE :
            return "KEY_SPACE";
        case
            KEY_CAPSLOCK :
            return "KEY_CAPSLOCK";
        case
            KEY_F1 :
            return "KEY_F1";
        case
            KEY_F2 :
            return "KEY_F2";
        case
            KEY_F3 :
            return "KEY_F3";
        case
            KEY_F4 :
            return "KEY_F4";
        case
            KEY_F5 :
            return "KEY_F5";
        case
            KEY_F6 :
            return "KEY_F6";
        case
            KEY_F7 :
            return "KEY_F7";
        case
            KEY_F8 :
            return "KEY_F8";
        case
            KEY_F9 :
            return "KEY_F9";
        case
            KEY_F10 :
            return "KEY_F10";
        case
            KEY_NUMLOCK :
            return "KEY_NUMLOCK";
        case
            KEY_SCROLLLOCK :
            return "KEY_SCROLLLOCK";
        case
            KEY_KP7 :
            return "KEY_KP7";
        case
            KEY_KP8 :
            return "KEY_KP8";
        case
            KEY_KP9 :
            return "KEY_KP9";
        case
            KEY_KPMINUS :
            return "KEY_KPMINUS";
        case
            KEY_KP4 :
            return "KEY_KP4";
        case
            KEY_KP5 :
            return "KEY_KP5";
        case
            KEY_KP6 :
            return "KEY_KP6";
        case
            KEY_KPPLUS :
            return "KEY_KPPLUS";
        case
            KEY_KP1 :
            return "KEY_KP1";
        case
            KEY_KP2 :
            return "KEY_KP2";
        case
            KEY_KP3 :
            return "KEY_KP3";
        case
            KEY_KP0 :
            return "KEY_KP0";
        case
            KEY_KPDOT :
            return "KEY_KPDOT";
        case
            KEY_ZENKAKUHANKAKU :
            return "KEY_ZENKAKUHANKAKU";
        case
            KEY_102ND :
            return "KEY_102ND";
        case
            KEY_F11 :
            return "KEY_F11";
        case
            KEY_F12 :
            return "KEY_F12";
        case
            KEY_RO :
            return "KEY_RO";
        case
            KEY_KATAKANA :
            return "KEY_KATAKANA";
        case
            KEY_HIRAGANA :
            return "";
        case
            KEY_HENKAN :
            return "";
        case
            KEY_KATAKANAHIRAGANA :
            return "";
        case
            KEY_MUHENKAN :
            return "";
        case
            KEY_KPJPCOMMA :
            return "";
        case
            KEY_KPENTER :
            return "";
        case
            KEY_RIGHTCTRL :
            return "";
        case
            KEY_KPSLASH :
            return "";
        case
            KEY_SYSRQ :
            return "";
        case
            KEY_RIGHTALT :
            return "";
        case
            KEY_LINEFEED :
            return "";
        case
            KEY_HOME :
            return "";
        case
            KEY_UP :
            return "";
        case
            KEY_PAGEUP :
            return "";
        case
            KEY_LEFT :
            return "";
        case
            KEY_RIGHT :
            return "";
        case
            KEY_END :
            return "";
        case
            KEY_DOWN :
            return "";
        case
            KEY_PAGEDOWN :
            return "";
        case
            KEY_INSERT :
            return "";
        case
            KEY_DELETE :
            return "";
        case
            KEY_MACRO :
            return "";
        case
            KEY_MUTE :
            return "";
        case
            KEY_VOLUMEDOWN :
            return "";
        case
            KEY_VOLUMEUP :
            return "";
        case
            KEY_POWER :
            return "";
        case
            KEY_KPEQUAL :
            return "";
        case
            KEY_KPPLUSMINUS :
            return "";
        case
            KEY_PAUSE :
            return "";
        case
            KEY_KPCOMMA :
            return "";
        case
            KEY_HANGUEL :
            return "";
        case
            KEY_HANJA :
            return "";
        case
            KEY_YEN :
            return "";
        case
            KEY_LEFTMETA :
            return "";
        case
            KEY_RIGHTMETA :
            return "";
        case
            KEY_COMPOSE :
            return "";
        case
            KEY_STOP :
            return "";
        case
            KEY_AGAIN :
            return "";
        case
            KEY_PROPS :
            return "";
        case
            KEY_UNDO :
            return "";
        case
            KEY_FRONT :
            return "";
        case
            KEY_COPY :
            return "";
        case
            KEY_OPEN :
            return "";
        case
            KEY_PASTE :
            return "";
        case
            KEY_FIND :
            return "";
        case
            KEY_CUT :
            return "";
        case
            KEY_HELP :
            return "";
        case
            KEY_MENU :
            return "";
        case
            KEY_CALC :
            return "";
        case
            KEY_SETUP :
            return "";
        case
            KEY_SLEEP :
            return "";
        case
            KEY_WAKEUP :
            return "";
        case
            KEY_FILE :
            return "";
        case
            KEY_SENDFILE :
            return "";
        case
            KEY_DELETEFILE :
            return "";
        case
            KEY_XFER :
            return "";
        case
            KEY_PROG1 :
            return "";
        case
            KEY_PROG2 :
            return "";
        case
            KEY_WWW :
            return "";
        case
            KEY_MSDOS :
            return "";
        case
            KEY_COFFEE :
            return "";
        case
            KEY_DIRECTION :
            return "";
        case
            KEY_CYCLEWINDOWS :
            return "";
        case
            KEY_MAIL :
            return "";
        case
            KEY_BOOKMARKS :
            return "";
        case
            KEY_COMPUTER :
            return "";
        case
            KEY_BACK :
            return "";
        case
            KEY_FORWARD :
            return "";
        case
            KEY_CLOSECD :
            return "";
        case
            KEY_EJECTCD :
            return "";
        case
            KEY_EJECTCLOSECD :
            return "";
        case
            KEY_NEXTSONG :
            return "";
        case
            KEY_PLAYPAUSE :
            return "";
        case
            KEY_PREVIOUSSONG :
            return "";
        case
            KEY_STOPCD :
            return "";
        case
            KEY_RECORD :
            return "";
        case
            KEY_REWIND :
            return "";
        case
            KEY_PHONE :
            return "";
        case
            KEY_ISO :
            return "";
        case
            KEY_CONFIG :
            return "";
        case
            KEY_HOMEPAGE :
            return "";
        case
            KEY_REFRESH :
            return "";
        case
            KEY_EXIT :
            return "";
        case
            KEY_MOVE :
            return "";
        case
            KEY_EDIT :
            return "";
        case
            KEY_SCROLLUP :
            return "";
        case
            KEY_SCROLLDOWN :
            return "";
        case
            KEY_KPLEFTPAREN :
            return "";
        case
            KEY_KPRIGHTPAREN :
            return "";
        case
            KEY_F13 :
            return "";
        case
            KEY_F14 :
            return "";
        case
            KEY_F15 :
            return "";
        case
            KEY_F16 :
            return "";
        case
            KEY_F17 :
            return "";
        case
            KEY_F18 :
            return "";
        case
            KEY_F19 :
            return "";
        case
            KEY_F20 :
            return "";
        case
            KEY_F21 :
            return "";
        case
            KEY_F22 :
            return "";
        case
            KEY_F23 :
            return "";
        case
            KEY_F24 :
            return "";
        case
            KEY_PLAYCD :
            return "";
        case
            KEY_PAUSECD :
            return "";
        case
            KEY_PROG3 :
            return "";
        case
            KEY_PROG4 :
            return "";
        case
            KEY_SUSPEND :
            return "";
        case
            KEY_CLOSE :
            return "";
        case
            KEY_PLAY :
            return "";
        case
            KEY_FASTFORWARD :
            return "";
        case
            KEY_BASSBOOST :
            return "";
        case
            KEY_PRINT :
            return "";
        case
            KEY_HP :
            return "";
        case
            KEY_CAMERA :
            return "";
        case
            KEY_SOUND :
            return "";
        case
            KEY_QUESTION :
            return "";
        case
            KEY_EMAIL :
            return "";
        case
            KEY_CHAT :
            return "";
        case
            KEY_SEARCH :
            return "";
        case
            KEY_CONNECT :
            return "";
        case
            KEY_FINANCE :
            return "";
        case
            KEY_SPORT :
            return "";
        case
            KEY_SHOP :
            return "";
        case
            KEY_ALTERASE :
            return "";
        case
            KEY_CANCEL :
            return "";
        case
            KEY_BRIGHTNESSDOWN :
            return "";
        case
            KEY_BRIGHTNESSUP :
            return "";
        case
            KEY_MEDIA :
            return "";
        case
            KEY_UNKNOWN :
            return "";
        case
            BTN_0 :
            return "";
        case
            BTN_1 :
            return "";
        case
            BTN_2 :
            return "";
        case
            BTN_3 :
            return "";
        case
            BTN_4 :
            return "";
        case
            BTN_5 :
            return "";
        case
            BTN_6 :
            return "";
        case
            BTN_7 :
            return "";
        case
            BTN_8 :
            return "";
        case
            BTN_9 :
            return "";
            
            //MOUSE
        case
            BTN_LEFT :
            return "BTN_LEFT";
        case
            BTN_RIGHT :
            return "BTN_RIGHT";
        case
            BTN_MIDDLE :
            return "BTN_MIDDLE";
        case
            BTN_SIDE :
            return "BTN_SIDE";
        case
            BTN_EXTRA :
            return "BTN_EXTRA";
        case
            BTN_FORWARD :
            return "BTN_FORWARD";
        case
            BTN_BACK :
            return "BTN_BACK";
        case
            BTN_TASK :
            return "BTN_TASK";
        case
            BTN_TRIGGER :
            return "BTN_TRIGGER";
        case
            BTN_THUMB :
            return "BTN_THUMB";
        case
            BTN_THUMB2 :
            return "BTN_THUMB2";
        case
            BTN_TOP :
            return "BTN_TOP";
        case
            BTN_TOP2 :
            return "BTN_TOP2";
        case
            BTN_PINKIE :
            return "BTN_PINKIE";
        case
            BTN_BASE :
            return "BTN_BASE";
        case
            BTN_BASE2 :
            return "BTN_BASE2";
        case
            BTN_BASE3 :
            return "BTN_BASE3";
        case
            BTN_BASE4 :
            return "BTN_BASE4";
        case
            BTN_BASE5 :
            return "BTN_BASE5";
        case
            BTN_BASE6 :
            return "BTN_BASE6";
        case
            BTN_DEAD :
            return "BTN_DEAD";
            ///GAMEPAD
        case
            BTN_A :
            return "BTN_A";
        case
            BTN_B :
            return "BTN_B";
        case
            BTN_C :
            return "BTN_C";
        case
            BTN_X :
            return "BTN_X";
        case
            BTN_Y :
            return "BTN_Y";
        case
            BTN_Z :
            return "BTN_Z";
        case
            BTN_TL :
            return "BTN_TL";
        case
            BTN_TR :
            return "BTN_TR";
        case
            BTN_TL2 :
            return "BTN_TL2";
        case
            BTN_TR2 :
            return "BTN_TR2";
        case
            BTN_SELECT :
            return "BTN_SELECT";
        case
            BTN_START :
            return "BTN_START";
        case
            BTN_MODE :
            return "BTN_MODE";
        case
            BTN_THUMBL :
            return "BTN_THUMBL";
        case
            BTN_THUMBR :
            return "THUMBR";
            
            // DIGI PEN
        case
            BTN_TOOL_PEN :
            return "BTN_TOOL_PEN";
        case
            BTN_TOOL_RUBBER :
            return "BTN_TOOL_RUBBER";
        case
            BTN_TOOL_BRUSH :
            return "BTN_TOOL_BRUSH";
        case
            BTN_TOOL_PENCIL :
            return "BTN_TOOL_PENCIL";
        case
            BTN_TOOL_AIRBRUSH :
            return "BTN_TOOL_AIRBRUSH";
        case
            BTN_TOOL_FINGER :
            return "BTN_TOOL_FINGER";
        case
            BTN_TOOL_MOUSE :
            return "BTN_TOOL_MOUSE";
        case
            BTN_TOOL_LENS :
            return "BTN_TOOL_LENS";
        case
            BTN_TOUCH :
            return "BTN_TOUCH";
        case
            BTN_STYLUS :
            return "BTN_STYLUS";
        case
            BTN_STYLUS2 :
            return "BTN_STYLUS2";
        case
            BTN_TOOL_DOUBLETAP :
            return "BTN_TOOL_DOUBLETAP";
        case
            BTN_TOOL_TRIPLETAP :
            return "BTN_TOOL_TRIPLETAP";
            //WHEEL
        case
            BTN_GEAR_DOWN :
            return "BTN_GEAR_DOWN";
        case
            BTN_GEAR_UP :
            return "BTN_GEAR_UP";
        case
            KEY_OK :
            return "KEY_OK";
        case
            KEY_SELECT :
            return "KEY_SELECT";
        case
            KEY_GOTO :
            return "KEY_GOTO";
        case
            KEY_CLEAR :
            return "KEY_CLEAR";
        case
            KEY_POWER2 :
            return "KEY_POWER2";
        case
            KEY_OPTION :
            return "KEY_OPTION";
        case
            KEY_INFO :
            return "KEY_INFO";
        case
            KEY_TIME :
            return "KEY_TIME";
        case
            KEY_VENDOR :
            return "KEY_VENDOR";
        case
            KEY_ARCHIVE :
            return "KEY_ARCHIVE";
        case
            KEY_PROGRAM :
            return "KEY_PROGRAM";
        case
            KEY_CHANNEL :
            return "KEY_CHANNE";
        case
            KEY_FAVORITES :
            return "KEY_FAVORITES";
        case
            KEY_EPG :
            return "";
        case
            KEY_PVR :
            return "";
        case
            KEY_MHP :
            return "";
        case
            KEY_LANGUAGE :
            return "";
        case
            KEY_TITLE :
            return "";
        case
            KEY_SUBTITLE :
            return "";
        case
            KEY_ANGLE :
            return "";
        case
            KEY_ZOOM :
            return "";
        case
            KEY_MODE :
            return "";
        case
            KEY_KEYBOARD :
            return "";
        case
            KEY_SCREEN :
            return "";
        case
            KEY_PC :
            return "";
        case
            KEY_TV :
            return "";
        case
            KEY_TV2 :
            return "";
        case
            KEY_VCR :
            return "";
        case
            KEY_VCR2 :
            return "";
        case
            KEY_SAT :
            return "";
        case
            KEY_SAT2 :
            return "";
        case
            KEY_CD :
            return "";
        case
            KEY_TAPE :
            return "";
        case
            KEY_RADIO :
            return "";
        case
            KEY_TUNER :
            return "";
        case
            KEY_PLAYER :
            return "";
        case
            KEY_TEXT :
            return "";
        case
            KEY_DVD :
            return "";
        case
            KEY_AUX :
            return "";
        case
            KEY_MP3 :
            return "";
        case
            KEY_AUDIO :
            return "";
        case
            KEY_VIDEO :
            return "";
        case
            KEY_DIRECTORY :
            return "";
        case
            KEY_LIST :
            return "";
        case
            KEY_MEMO :
            return "";
        case
            KEY_CALENDAR :
            return "";
        case
            KEY_RED :
            return "";
        case
            KEY_GREEN :
            return "";
        case
            KEY_YELLOW :
            return "";
        case
            KEY_BLUE :
            return "";
        case
            KEY_CHANNELUP :
            return "";
        case
            KEY_CHANNELDOWN :
            return "";
        case
            KEY_FIRST :
            return "";
        case
            KEY_LAST :
            return "";
        case
            KEY_AB :
            return "";
        case
            KEY_NEXT :
            return "";
        case
            KEY_RESTART :
            return "";
        case
            KEY_SLOW :
            return "";
        case
            KEY_SHUFFLE :
            return "";
        case
            KEY_BREAK :
            return "";
        case
            KEY_PREVIOUS :
            return "";
        case
            KEY_DIGITS :
            return "";
        case
            KEY_TEEN :
            return "";
        case
            KEY_TWEN :
            return "";
        case

            KEY_DEL_EOL :
            return "KEY_DEL_EOL";
        case
            KEY_DEL_EOS :
            return "KEY_DEL_EOS";
        case
            KEY_INS_LINE :
            return "KEY_INS_LINE";
        case
            KEY_DEL_LINE :
            return "KEY_DEL_LINE";
        case
            KEY_FN :
            return "KEY_FN_";
        case
            KEY_FN_ESC :
            return "KEY_FN_ESC";
        case
            KEY_FN_F1 :
            return "KEY_FN_F1";
        case
            KEY_FN_F2 :
            return "KEY_FN_F2";
        case
            KEY_FN_F3 :
            return "KEY_FN_F3";
        case
            KEY_FN_F4 :
            return "KEY_FN_F4";
        case
            KEY_FN_F5 :
            return "KEY_FN_F5";
        case
            KEY_FN_F6 :
            return "KEY_FN_F6";
        case
            KEY_FN_F7 :
            return "KEY_FN_F7";
        case
            KEY_FN_F8 :
            return "KEY_FN_F8";
        case
            KEY_FN_F9 :
            return "KEY_FN_F9";
        case
            KEY_FN_F10 :
            return "KEY_FN_F10";
        case
            KEY_FN_F11 :
            return "KEY_FN_F11";
        case
            KEY_FN_F12 :
            return "KEY_FN_F12";
        case
            KEY_FN_1 :
            return "KEY_FN_1";
        case
            KEY_FN_2 :
            return "KEY_FN_2";
        case
            KEY_FN_D :
            return "KEY_FN_D";
        case
            KEY_FN_E :
            return "KEY_FN_E";
        case
            KEY_FN_F :
            return "KEY_FN_F";
        case
            KEY_FN_S :
            return "KEY_FN_S";
        case
            KEY_FN_B :
            return "KEY_FN_B";
        case
            KEY_MAX :
            return "KEY_MAX";
        default: return "UNKNOWN";
    }

}
/**
 * 
 * @param code
 * @return name of axis.
 */
std::string device::getCodeNameRelAxis(uint16_t code) {
    switch (code) {
        case REL_X:
            return "REL_X";
        case REL_Y:
            return "REL_Y";
        case REL_Z:
            return "REL_Z";
        case REL_RX:
            return "REL_RX";
        case REL_RY:
            return "REL_RY";
        case REL_RZ:
            return "REL_RZ";
        case REL_HWHEEL:
            return "REL_HWHEEL";
        case REL_DIAL:
            return "REL_DIAL";
        case REL_WHEEL:
            return "REL_WHEEL";
        case REL_MISC:
            return "REL_MISC";
        case REL_MAX:
            return "REL_MAX";
    }
}

/**
 * 
 * @param code
 * @return Name of axis.
 */
std::string device::getCodeNameAbsAxis(uint16_t code) {
    switch (code) {
        case ABS_X:
            return "ABS_X";
        case ABS_Y:
            return "ABS_Y";
        case ABS_Z:
            return "ABS_Z";
        case ABS_RX:
            return "ABS_RX";
        case ABS_RY:
            return "ABS_RY";
        case ABS_RZ:
            return "ABS_RZ";
        case ABS_THROTTLE:
            return "ABS_THROTTLE";
        case ABS_RUDDER:
            return "ABS_RUDDER";
        case ABS_WHEEL:
            return "ABS_WHEEL";
        case ABS_GAS:
            return "ABS_GAS";
        case ABS_BRAKE:
            return "ABS_BRAKE";
        case ABS_HAT0X:
            return "ABS_HAT0X";
        case ABS_HAT0Y:
            return "ABS_HAT0Y";
        case ABS_HAT1X:
            return "ABS_HAT1X";
        case ABS_HAT1Y:
            return "ABS_HAT1Y";
        case ABS_HAT2X:
            return "ABS_HAT2X";
        case ABS_HAT2Y:
            return "ABS_HAT2Y";
        case ABS_HAT3X:
            return "ABS_HAT3X";
        case ABS_HAT3Y:
            return "ABS_HAT3Y";
        case ABS_PRESSURE:
            return "ABS_PRESSURE";
        case ABS_DISTANCE:
            return "ABS_DISTANCE";
        case ABS_TILT_X:
            return "ABS_TILT_X";
        case ABS_TILT_Y:
            return "ABS_TILT_Y";
        case ABS_TOOL_WIDTH:
            return "ABS_TOOL_WIDTH";
        case ABS_VOLUME:
            return "ABS_VOLUME";
        case ABS_MISC:
            return "ABS_MISC";
        case ABS_MAX:
            return "ABS_MAX";

        default: return "unknown";

    }

}