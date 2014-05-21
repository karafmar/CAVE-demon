
/*!@file    device.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
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
 * Gives name of a button.
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
        case KEY_HIRAGANA:
            return "KEY_HIRAGANA";
            break;
        case KEY_HENKAN:
            return "KEY_HENKAN";
            break;
        case KEY_KATAKANAHIRAGANA:
            return "KEY_KATAKANAHIRAGANA";
            break;
        case KEY_MUHENKAN:
            return "KEY_MUHENKAN";
            break;
        case KEY_KPJPCOMMA:
            return "KEY_KPJPCOMMA";
            break;
        case KEY_KPENTER:
            return "KEY_KPENTER";
            break;
        case KEY_RIGHTCTRL:
            return "KEY_RIGHTCTRL";
            break;
        case KEY_KPSLASH:
            return "KEY_KPSLASH";
            break;
        case KEY_SYSRQ:
            return "KEY_SYSRQ";
            break;
        case KEY_RIGHTALT:
            return "KEY_RIGHTALT";
            break;
        case KEY_LINEFEED:
            return "KEY_LINEFEED";
            break;
        case KEY_HOME:
            return "KEY_HOME";
            break;
        case KEY_UP:
            return "KEY_UP";
            break;
        case KEY_PAGEUP:
            return "KEY_PAGEUP";
            break;
        case KEY_LEFT:
            return "KEY_LEFT";
            break;
        case KEY_RIGHT:
            return "KEY_RIGHT";
            break;
        case KEY_END:
            return "KEY_END";
            break;
        case KEY_DOWN:
            return "KEY_DOWN";
            break;
        case KEY_PAGEDOWN:
            return "KEY_PAGEDOWN";
            break;
        case KEY_INSERT:
            return "KEY_INSERT";
            break;
        case KEY_DELETE:
            return "KEY_DELETE";
            break;
        case KEY_MACRO:
            return "KEY_MACRO";
            break;
        case KEY_VOLUMEDOWN:
            return "KEY_VOLUMEDOWN";
            break;
        case KEY_VOLUMEUP:
            return "KEY_VOLUMEUP";
            break;
        case KEY_POWER:
            return "KEY_POWER";
            break;
        case KEY_KPEQUAL:
            return "KEY_KPEQUAL";
            break;
        case KEY_KPPLUSMINUS:
            return "KEY_KPPLUSMINUS";
            break;
        case KEY_PAUSE:
            return "KEY_PAUSE";
            break;
        case KEY_SCALE:
            return "KEY_SCALE";
            break;
        case KEY_KPCOMMA:
            return "KEY_KPCOMMA";
            break;
        case KEY_HANGEUL:
            return "KEY_HANGEUL";
            break;
        case KEY_HANJA:
            return "KEY_HANJA";
            break;
        case KEY_YEN:
            return "KEY_YEN";
            break;
        case KEY_LEFTMETA:
            return "KEY_LEFTMETA";
            break;
        case KEY_RIGHTMETA:
            return "KEY_RIGHTMETA";
            break;
        case KEY_COMPOSE:
            return "KEY_COMPOSE";
            break;
        case KEY_STOP:
            return "KEY_STOP";
            break;
        case KEY_AGAIN:
            return "KEY_AGAIN";
            break;
        case KEY_PROPS:
            return "KEY_PROPS";
            break;
        case KEY_UNDO:
            return "KEY_UNDO";
            break;
        case KEY_FRONT:
            return "KEY_FRONT";
            break;
        case KEY_COPY:
            return "KEY_COPY";
            break;
        case KEY_OPEN:
            return "KEY_OPEN";
            break;
        case KEY_PASTE:
            return "KEY_PASTE";
            break;
        case KEY_FIND:
            return "KEY_FIND";
            break;
        case KEY_CUT:
            return "KEY_CUT";
            break;
        case KEY_HELP:
            return "KEY_HELP";
            break;
        case KEY_MENU:
            return "KEY_MENU";
            break;
        case KEY_CALC:
            return "KEY_CALC";
            break;
        case KEY_SETUP:
            return "KEY_SETUP";
            break;
        case KEY_SLEEP:
            return "KEY_SLEEP";
            break;
        case KEY_WAKEUP:
            return "KEY_WAKEUP";
            break;
        case KEY_FILE:
            return "KEY_FILE";
            break;
        case KEY_SENDFILE:
            return "KEY_SENDFILE";
            break;
        case KEY_DELETEFILE:
            return "KEY_DELETEFILE";
            break;
        case KEY_XFER:
            return "KEY_XFER";
            break;
        case KEY_PROG1:
            return "KEY_PROG1";
            break;
        case KEY_PROG2:
            return "KEY_PROG2";
            break;
        case KEY_WWW:
            return "KEY_WWW";
            break;
        case KEY_MSDOS:
            return "KEY_MSDOS";
            break;
        case KEY_SCREENLOCK:
            return "KEY_SCREENLOCK";
            break;
        case KEY_DIRECTION:
            return "KEY_DIRECTION";
            break;
        case KEY_CYCLEWINDOWS:
            return "KEY_CYCLEWINDOWS";
            break;
        case KEY_MAIL:
            return "KEY_MAIL";
            break;
        case KEY_BOOKMARKS:
            return "KEY_BOOKMARKS";
            break;
        case KEY_COMPUTER:
            return "KEY_COMPUTER";
            break;
        case KEY_BACK:
            return "KEY_BACK";
            break;
        case KEY_FORWARD:
            return "KEY_FORWARD";
            break;
        case KEY_CLOSECD:
            return "KEY_CLOSECD";
            break;
        case KEY_EJECTCD:
            return "KEY_EJECTCD";
            break;
        case KEY_EJECTCLOSECD:
            return "KEY_EJECTCLOSECD";
            break;
        case KEY_NEXTSONG:
            return "KEY_NEXTSONG";
            break;
        case KEY_PLAYPAUSE:
            return "KEY_PLAYPAUSE";
            break;
        case KEY_PREVIOUSSONG:
            return "KEY_PREVIOUSSONG";
            break;
        case KEY_STOPCD:
            return "KEY_STOPCD";
            break;
        case KEY_RECORD:
            return "KEY_RECORD";
            break;
        case KEY_REWIND:
            return "KEY_REWIND";
            break;
        case KEY_PHONE:
            return "KEY_PHONE";
            break;
        case KEY_ISO:
            return "KEY_ISO";
            break;
        case KEY_CONFIG:
            return "KEY_CONFIG";
            break;
        case KEY_HOMEPAGE:
            return "KEY_HOMEPAGE";
            break;
        case KEY_REFRESH:
            return "KEY_REFRESH";
            break;
        case KEY_EXIT:
            return "KEY_EXIT";
            break;
        case KEY_MOVE:
            return "KEY_MOVE";
            break;
        case KEY_EDIT:
            return "KEY_EDIT";
            break;
        case KEY_SCROLLUP:
            return "KEY_SCROLLUP";
            break;
        case KEY_SCROLLDOWN:
            return "KEY_SCROLLDOWN";
            break;
        case KEY_KPLEFTPAREN:
            return "KEY_KPLEFTPAREN";
            break;
        case KEY_KPRIGHTPAREN:
            return "KEY_KPRIGHTPAREN";
            break;
        case KEY_NEW:
            return "KEY_NEW";
            break;
        case KEY_REDO:
            return "KEY_REDO";
            break;
        case KEY_F13:
            return "KEY_F13";
            break;
        case KEY_F14:
            return "KEY_F14";
            break;
        case KEY_F15:
            return "KEY_F15";
            break;
        case KEY_F16:
            return "KEY_F16";
            break;
        case KEY_F17:
            return "KEY_F17";
            break;
        case KEY_F18:
            return "KEY_F18";
            break;
        case KEY_F19:
            return "KEY_F19";
            break;
        case KEY_F20:
            return "KEY_F20";
            break;
        case KEY_F21:
            return "KEY_F21";
            break;
        case KEY_F22:
            return "KEY_F22";
            break;
        case KEY_F23:
            return "KEY_F23";
            break;
        case KEY_F24:
            return "KEY_F24";
            break;
        case KEY_PLAYCD:
            return "KEY_PLAYCD";
            break;
        case KEY_PAUSECD:
            return "KEY_PAUSECD";
            break;
        case KEY_PROG3:
            return "KEY_PROG3";
            break;
        case KEY_PROG4:
            return "KEY_PROG4";
            break;
        case KEY_DASHBOARD:
            return "KEY_DASHBOARD";
            break;
        case KEY_SUSPEND:
            return "KEY_SUSPEND";
            break;
        case KEY_CLOSE:
            return "KEY_CLOSE";
            break;
        case KEY_PLAY:
            return "KEY_PLAY";
            break;
        case KEY_FASTFORWARD:
            return "KEY_FASTFORWARD";
            break;
        case KEY_BASSBOOST:
            return "KEY_BASSBOOST";
            break;
        case KEY_PRINT:
            return "KEY_PRINT";
            break;
        case KEY_HP:
            return "KEY_HP";
            break;
        case KEY_CAMERA:
            return "KEY_CAMERA";
            break;
        case KEY_SOUND:
            return "KEY_SOUND";
            break;
        case KEY_QUESTION:
            return "KEY_QUESTION";
            break;
        case KEY_EMAIL:
            return "KEY_EMAIL";
            break;
        case KEY_CHAT:
            return "KEY_CHAT";
            break;
        case KEY_SEARCH:
            return "KEY_SEARCH";
            break;
        case KEY_CONNECT:
            return "KEY_CONNECT";
            break;
        case KEY_FINANCE:
            return "KEY_FINANCE";
            break;
        case KEY_SPORT:
            return "KEY_SPORT";
            break;
        case KEY_SHOP:
            return "KEY_SHOP";
            break;
        case KEY_ALTERASE:
            return "KEY_ALTERASE";
            break;
        case KEY_CANCEL:
            return "KEY_CANCEL";
            break;
        case KEY_BRIGHTNESSDOWN:
            return "KEY_BRIGHTNESSDOWN";
            break;
        case KEY_BRIGHTNESSUP:
            return "KEY_BRIGHTNESSUP";
            break;
        case KEY_MEDIA:
            return "KEY_MEDIA";
            break;
        case KEY_SWITCHVIDEOMODE:
            return "KEY_SWITCHVIDEOMODE";
            break;
        case KEY_KBDILLUMTOGGLE:
            return "KEY_KBDILLUMTOGGLE";
            break;
        case KEY_KBDILLUMDOWN:
            return "KEY_KBDILLUMDOWN";
            break;
        case KEY_KBDILLUMUP:
            return "KEY_KBDILLUMUP";
            break;
        case KEY_SEND:
            return "KEY_SEND";
            break;
        case KEY_REPLY:
            return "KEY_REPLY";
            break;
        case KEY_FORWARDMAIL:
            return "KEY_FORWARDMAIL";
            break;
        case KEY_SAVE:
            return "KEY_SAVE";
            break;
        case KEY_DOCUMENTS:
            return "KEY_DOCUMENTS";
            break;
        case KEY_BATTERY:
            return "KEY_BATTERY";
            break;
        case KEY_BLUETOOTH:
            return "KEY_BLUETOOTH";
            break;
        case KEY_WLAN:
            return "KEY_WLAN";
            break;
        case KEY_UWB:
            return "KEY_UWB";
            break;
        case KEY_UNKNOWN:
            return "KEY_UNKNOWN";
            break;
        case KEY_VIDEO_NEXT:
            return "KEY_VIDEO_NEXT";
            break;
        case KEY_VIDEO_PREV:
            return "KEY_VIDEO_PREV";
            break;
        case KEY_BRIGHTNESS_CYCLE:
            return "KEY_BRIGHTNESS_CYCLE";
            break;
        case KEY_BRIGHTNESS_ZERO:
            return "KEY_BRIGHTNESS_ZERO";
            break;
        case KEY_DISPLAY_OFF:
            return "KEY_DISPLAY_OFF";
            break;
        case KEY_WIMAX:
            return "KEY_WIMAX";
            break;
        case KEY_RFKILL:
            return "KEY_RFKILL";
            break;
        case KEY_MICMUTE:
            return "KEY_MICMUTE";
            break;
        case KEY_EPG:
            return "KEY_EPG";
            break;
        case KEY_PVR:
            return "KEY_PVR";
            break;
        case KEY_MHP:
            return "KEY_MHP";
            break;
        case KEY_LANGUAGE:
            return "KEY_LANGUAGE";
            break;
        case KEY_TITLE:
            return "KEY_TITLE";
            break;
        case KEY_SUBTITLE:
            return "KEY_SUBTITLE";
            break;
        case KEY_ANGLE:
            return "KEY_ANGLE";
            break;
        case KEY_ZOOM:
            return "KEY_ZOOM";
            break;
        case KEY_MODE:
            return "KEY_MODE";
            break;
        case KEY_KEYBOARD:
            return "KEY_KEYBOARD";
            break;
        case KEY_SCREEN:
            return "KEY_SCREEN";
            break;
        case KEY_PC:
            return "KEY_PC";
            break;
        case KEY_TV:
            return "KEY_TV";
            break;
        case KEY_TV2:
            return "KEY_TV2";
            break;
        case KEY_VCR:
            return "KEY_VCR";
            break;
        case KEY_VCR2:
            return "KEY_VCR2";
            break;
        case KEY_SAT:
            return "KEY_SAT";
            break;
        case KEY_SAT2:
            return "KEY_SAT2";
            break;
        case KEY_CD:
            return "KEY_CD";
            break;
        case KEY_TAPE:
            return "KEY_TAPE";
            break;
        case KEY_RADIO:
            return "KEY_RADIO";
            break;
        case KEY_TUNER:
            return "KEY_TUNER";
            break;
        case KEY_PLAYER:
            return "KEY_PLAYER";
            break;
        case KEY_TEXT:
            return "KEY_TEXT";
            break;
        case KEY_DVD:
            return "KEY_DVD";
            break;
        case KEY_AUX:
            return "KEY_AUX";
            break;
        case KEY_MP3:
            return "KEY_MP3";
            break;
        case KEY_AUDIO:
            return "KEY_AUDIO";
            break;
        case KEY_VIDEO:
            return "KEY_VIDEO";
            break;
        case KEY_DIRECTORY:
            return "KEY_DIRECTORY";
            break;
        case KEY_LIST:
            return "KEY_LIST";
            break;
        case KEY_MEMO:
            return "KEY_MEMO";
            break;
        case KEY_CALENDAR:
            return "KEY_CALENDAR";
            break;
        case KEY_RED:
            return "KEY_RED";
            break;
        case KEY_GREEN:
            return "KEY_GREEN";
            break;
        case KEY_YELLOW:
            return "KEY_YELLOW";
            break;
        case KEY_BLUE:
            return "KEY_BLUE";
            break;
        case KEY_CHANNELUP:
            return "KEY_CHANNELUP";
            break;
        case KEY_CHANNELDOWN:
            return "KEY_CHANNELDOWN";
            break;
        case KEY_FIRST:
            return "KEY_FIRST";
            break;
        case KEY_LAST:
            return "KEY_LAST";
            break;
        case KEY_AB:
            return "KEY_AB";
            break;
        case KEY_NEXT:
            return "KEY_NEXT";
            break;
        case KEY_RESTART:
            return "KEY_RESTART";
            break;
        case KEY_SLOW:
            return "KEY_SLOW";
            break;
        case KEY_SHUFFLE:
            return "KEY_SHUFFLE";
            break;
        case KEY_BREAK:
            return "KEY_BREAK";
            break;
        case KEY_PREVIOUS:
            return "KEY_PREVIOUS";
            break;
        case KEY_DIGITS:
            return "KEY_DIGITS";
            break;
        case KEY_TEEN:
            return "KEY_TEEN";
            break;
        case KEY_TWEN:
            return "KEY_TWEN";
            break;
        case KEY_VIDEOPHONE:
            return "KEY_VIDEOPHONE";
            break;
        case KEY_GAMES:
            return "KEY_GAMES";
            break;
        case KEY_ZOOMIN:
            return "KEY_ZOOMIN";
            break;
        case KEY_ZOOMOUT:
            return "KEY_ZOOMOUT";
            break;
        case KEY_ZOOMRESET:
            return "KEY_ZOOMRESET";
            break;
        case KEY_WORDPROCESSOR:
            return "KEY_WORDPROCESSOR";
            break;
        case KEY_EDITOR:
            return "KEY_EDITOR";
            break;
        case KEY_SPREADSHEET:
            return "KEY_SPREADSHEET";
            break;
        case KEY_GRAPHICSEDITOR:
            return "KEY_GRAPHICSEDITOR";
            break;
        case KEY_PRESENTATION:
            return "KEY_PRESENTATION";
            break;
        case KEY_DATABASE:
            return "KEY_DATABASE";
            break;
        case KEY_NEWS:
            return "KEY_NEWS";
            break;
        case KEY_VOICEMAIL:
            return "KEY_VOICEMAIL";
            break;
        case KEY_ADDRESSBOOK:
            return "KEY_ADDRESSBOOK";
            break;
        case KEY_MESSENGER:
            return "KEY_MESSENGER";
            break;
        case KEY_DISPLAYTOGGLE:
            return "KEY_DISPLAYTOGGLE";
            break;
        case KEY_SPELLCHECK:
            return "KEY_SPELLCHECK";
            break;
        case KEY_LOGOFF:
            return "KEY_LOGOFF";
            break;
        case KEY_DOLLAR:
            return "KEY_DOLLAR";
            break;
        case KEY_EURO:
            return "KEY_EURO";
            break;
        case KEY_FRAMEBACK:
            return "KEY_FRAMEBACK";
            break;
        case KEY_FRAMEFORWARD:
            return "KEY_FRAMEFORWARD";
            break;
        case KEY_CONTEXT_MENU:
            return "KEY_CONTEXT_MENU";
            break;
        case KEY_MEDIA_REPEAT:
            return "KEY_MEDIA_REPEAT";
            break;
        case KEY_10CHANNELSUP:
            return "KEY_10CHANNELSUP";
            break;
        case KEY_10CHANNELSDOWN:
            return "KEY_10CHANNELSDOWN";
            break;
        case KEY_IMAGES:
            return "KEY_IMAGES";
            break;
        case KEY_BRL_DOT1:
            return "KEY_BRL_DOT1";
            break;
        case KEY_BRL_DOT2:
            return "KEY_BRL_DOT2";
            break;
        case KEY_BRL_DOT3:
            return "KEY_BRL_DOT3";
            break;
        case KEY_BRL_DOT4:
            return "KEY_BRL_DOT4";
            break;
        case KEY_BRL_DOT5:
            return "KEY_BRL_DOT5";
            break;
        case KEY_BRL_DOT6:
            return "KEY_BRL_DOT6";
            break;
        case KEY_BRL_DOT7:
            return "KEY_BRL_DOT7";
            break;
        case KEY_BRL_DOT8:
            return "KEY_BRL_DOT8";
            break;
        case KEY_BRL_DOT9:
            return "KEY_BRL_DOT9";
            break;
        case KEY_BRL_DOT10:
            return "KEY_BRL_DOT10";
            break;
        case KEY_NUMERIC_0:
            return "KEY_NUMERIC_0";
            break;
        case KEY_NUMERIC_1:
            return "KEY_NUMERIC_1";
            break;
        case KEY_NUMERIC_2:
            return "KEY_NUMERIC_2";
            break;
        case KEY_NUMERIC_3:
            return "KEY_NUMERIC_3";
            break;
        case KEY_NUMERIC_4:
            return "KEY_NUMERIC_4";
            break;
        case KEY_NUMERIC_5:
            return "KEY_NUMERIC_5";
            break;
        case KEY_NUMERIC_6:
            return "KEY_NUMERIC_6";
            break;
        case KEY_NUMERIC_7:
            return "KEY_NUMERIC_7";
            break;
        case KEY_NUMERIC_8:
            return "KEY_NUMERIC_8";
            break;
        case KEY_NUMERIC_9:
            return "KEY_NUMERIC_9";
            break;
        case KEY_NUMERIC_STAR:
            return "KEY_NUMERIC_STAR";
            break;
        case KEY_NUMERIC_POUND:
            return "KEY_NUMERIC_POUND";
            break;
        case KEY_CAMERA_FOCUS:
            return "KEY_CAMERA_FOCUS";
            break;
        case KEY_WPS_BUTTON:
            return "KEY_WPS_BUTTON";
            break;
        case KEY_TOUCHPAD_TOGGLE:
            return "KEY_TOUCHPAD_TOGGLE";
            break;
        case KEY_TOUCHPAD_ON:
            return "KEY_TOUCHPAD_ON";
            break;
        case KEY_TOUCHPAD_OFF:
            return "KEY_TOUCHPAD_OFF";
            break;
        case KEY_CAMERA_ZOOMIN:
            return "KEY_CAMERA_ZOOMIN";
            break;
        case KEY_CAMERA_ZOOMOUT:
            return "KEY_CAMERA_ZOOMOUT";
            break;
        case KEY_CAMERA_UP:
            return "KEY_CAMERA_UP";
            break;
        case KEY_CAMERA_DOWN:
            return "KEY_CAMERA_DOWN";
            break;
        case KEY_CAMERA_LEFT:
            return "KEY_CAMERA_LEFT";
            break;
        case KEY_CAMERA_RIGHT:
            return "KEY_CAMERA_RIGHT";
            break;
        case KEY_MIN_INTERESTING:
            return "KEY_MIN_INTERESTING";
            break;
        case KEY_MAX:
            return "KEY_MAX";
            break;
        case KEY_CNT:
            return "KEY_CNT";
            break;

        default: return "UNKNOWN";
    }

}

/**
 * Gives name of an axis.
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
        default: return "UNKNOWN";
    }
}

/**
 * Gives name of an axis.
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