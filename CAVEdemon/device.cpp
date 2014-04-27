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

std::string device::getCodeNameButton(uint16_t code) {
    switch (code) {
        case KEY_RESERVED:
            return "";
        case KEY_ESC:
            return "";
        case KEY_1:
            return "";
        case KEY_2:
            return "";
        case KEY_3:
            return "";
        case KEY_4:
            return "";
        case KEY_5:
            return "";
        case KEY_6:
            return "";
        case KEY_7:
            return "";
        case KEY_8:
            return "";
        case KEY_9:
            return "";
        case KEY_0:
            return "";
        case KEY_MINUS:
            return "";
        case KEY_EQUAL:
            return "";
        case KEY_BACKSPACE:
            return "";
        case KEY_TAB:
            return "";
        case KEY_Q:
            return "";
        case KEY_W:
            return "";
        case KEY_E:
            return "";
        case KEY_R:
            return "";
        case KEY_T:
            return "";
        case KEY_Y:
            return "";
        case KEY_U:
            return "";
        case KEY_I:
            return "";
        case KEY_O:
            return "";
        case KEY_P:
            return "";
        case KEY_LEFTBRACE:
            return "";
        case
            KEY_RIGHTBRACE :
            return "";
        case
            KEY_ENTER :
            return "";
        case
            KEY_LEFTCTRL :
            return "";
        case
            KEY_A :
            return "";
        case
            KEY_S :
            return "";
        case
            KEY_D :
            return "";
        case
            KEY_F :
            return "";
        case
            KEY_G :
            return "";
        case
            KEY_H :
            return "";
        case
            KEY_J :
            return "";
        case
            KEY_K :
            return "";
        case
            KEY_L :
            return "";
        case KEY_SEMICOLON:
            return "";
        case
            KEY_APOSTROPHE :
            return "";
        case
            KEY_GRAVE :
            return "";
        case
            KEY_LEFTSHIFT :
            return "";
        case
            KEY_BACKSLASH :
            return "";
        case
            KEY_Z :
            return "";
        case
            KEY_X :
            return "";
        case
            KEY_C :
            return "";
        case
            KEY_V :
            return "";
        case
            KEY_B :
            return "";
        case
            KEY_N :
            return "";
        case
            KEY_M :
            return "";
        case
            KEY_COMMA :
            return "";
        case
            KEY_DOT :
            return "";
        case
            KEY_SLASH :
            return "";
        case
            KEY_RIGHTSHIFT :
            return "";
        case
            KEY_KPASTERISK :
            return "";
        case
            KEY_LEFTALT :
            return "";
        case
            KEY_SPACE :
            return "";
        case
            KEY_CAPSLOCK :
            return "";
        case
            KEY_F1 :
            return "";
        case
            KEY_F2 :
            return "";
        case
            KEY_F3 :
            return "";
        case
            KEY_F4 :
            return "";
        case
            KEY_F5 :
            return "";
        case
            KEY_F6 :
            return "";
        case
            KEY_F7 :
            return "";
        case
            KEY_F8 :
            return "";
        case
            KEY_F9 :
            return "";
        case
            KEY_F10 :
            return "";
        case
            KEY_NUMLOCK :
            return "";
        case
            KEY_SCROLLLOCK :
            return "";
        case
            KEY_KP7 :
            return "";
        case
            KEY_KP8 :
            return "";
        case
            KEY_KP9 :
            return "";
        case
            KEY_KPMINUS :
            return "";
        case
            KEY_KP4 :
            return "";
        case
            KEY_KP5 :
            return "";
        case
            KEY_KP6 :
            return "";
        case
            KEY_KPPLUS :
            return "";
        case
            KEY_KP1 :
            return "";
        case
            KEY_KP2 :
            return "";
        case
            KEY_KP3 :
            return "";
        case
            KEY_KP0 :
            return "";
        case
            KEY_KPDOT :
            return "";
        case
            KEY_ZENKAKUHANKAKU :
            return "";
        case
            KEY_102ND :
            return "";
        case
            KEY_F11 :
            return "";
        case
            KEY_F12 :
            return "";
        case
            KEY_RO :
            return "";
        case
            KEY_KATAKANA :
            return "";
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
            return "";
        case
            BTN_RIGHT :
            return "";
        case
            BTN_MIDDLE :
            return "";
        case
            BTN_SIDE :
            return "";
        case
            BTN_EXTRA :
            return "";
        case
            BTN_FORWARD :
            return "";
        case
            BTN_BACK :
            return "";
        case
            BTN_TASK :
            return "";
        case
            BTN_TRIGGER :
            return "";
        case
            BTN_THUMB :
            return "";
        case
            BTN_THUMB2 :
            return "";
        case
            BTN_TOP :
            return "";
        case
            BTN_TOP2 :
            return "";
        case
            BTN_PINKIE :
            return "";
        case
            BTN_BASE :
            return "";
        case
            BTN_BASE2 :
            return "";
        case
            BTN_BASE3 :
            return "";
        case
            BTN_BASE4 :
            return "";
        case
            BTN_BASE5 :
            return "";
        case
            BTN_BASE6 :
            return "";
        case
            BTN_DEAD :
            return "";
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
            return "";
        case
            BTN_TOOL_RUBBER :
            return "";
        case
            BTN_TOOL_BRUSH :
            return "";
        case
            BTN_TOOL_PENCIL :
            return "";
        case
            BTN_TOOL_AIRBRUSH :
            return "";
        case
            BTN_TOOL_FINGER :
            return "";
        case
            BTN_TOOL_MOUSE :
            return "";
        case
            BTN_TOOL_LENS :
            return "";
        case
            BTN_TOUCH :
            return "";
        case
            BTN_STYLUS :
            return "";
        case
            BTN_STYLUS2 :
            return "";
        case
            BTN_TOOL_DOUBLETAP :
            return "";
        case
            BTN_TOOL_TRIPLETAP :
            return "";
            //WHEEL
        case
            BTN_GEAR_DOWN :
            return "";
        case
            BTN_GEAR_UP :
            return "";
        case
            KEY_OK :
            return "";
        case
            KEY_SELECT :
            return "";
        case
            KEY_GOTO :
            return "";
        case
            KEY_CLEAR :
            return "";
        case
            KEY_POWER2 :
            return "";
        case
            KEY_OPTION :
            return "";
        case
            KEY_INFO :
            return "";
        case
            KEY_TIME :
            return "";
        case
            KEY_VENDOR :
            return "";
        case
            KEY_ARCHIVE :
            return "";
        case
            KEY_PROGRAM :
            return "";
        case
            KEY_CHANNEL :
            return "";
        case
            KEY_FAVORITES :
            return "";
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
            return "";
        case
            KEY_DEL_EOS :
            return "";
        case
            KEY_INS_LINE :
            return "";
        case
            KEY_DEL_LINE :
            return "";
        case
            KEY_FN :
            return "";
        case
            KEY_FN_ESC :
            return "";
        case
            KEY_FN_F1 :
            return "";
        case
            KEY_FN_F2 :
            return "";
        case
            KEY_FN_F3 :
            return "";
        case
            KEY_FN_F4 :
            return "";
        case
            KEY_FN_F5 :
            return "";
        case
            KEY_FN_F6 :
            return "";
        case
            KEY_FN_F7 :
            return "";
        case
            KEY_FN_F8 :
            return "";
        case
            KEY_FN_F9 :
            return "";
        case
            KEY_FN_F10 :
            return "";
        case
            KEY_FN_F11 :
            return "";
        case
            KEY_FN_F12 :
            return "";
        case
            KEY_FN_1 :
            return "";
        case
            KEY_FN_2 :
            return "";
        case
            KEY_FN_D :
            return "";
        case
            KEY_FN_E :
            return "";
        case
            KEY_FN_F :
            return "";
        case
            KEY_FN_S :
            return "";
        case
            KEY_FN_B :
            return "";
        case
            KEY_MAX :
            return "";
        default: return "UNKNOWN";
    }

}

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