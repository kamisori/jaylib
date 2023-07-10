#define RAYGUI_IMPLEMENTATION
#define RAYGUI_SUPPORT_ICONS
#define GUI_TEXTBOX_EXTENDED_IMPLEMENTATION
// #define RLGL_IMPLEMENTATION
// #define RLGL_STANDALONE
// #define RLGL_SUPPORT_TRACELOG
#include <raylib.h>
#include <raygui.h>
#include <gui_textbox_extended.h>
#include <janet.h>

#include "types.h"

#include "core.h"
#include "shapes.h"
#include "audio.h"
#include "gestures.h"
#include "text.h"
#include "image.h"
#include "3d.h"
#include "gui.h"

JANET_MODULE_ENTRY(JanetTable *env) {
    janet_cfuns(env, "jaylib", core_cfuns);
    janet_cfuns(env, "jaylib", shapes_cfuns);
    janet_cfuns(env, "jaylib", audio_cfuns);
    janet_cfuns(env, "jaylib", gesture_cfuns);
    janet_cfuns(env, "jaylib", text_cfuns);
    janet_cfuns(env, "jaylib", image_cfuns);
    janet_cfuns(env, "jaylib", threed_cfuns);
    janet_cfuns(env, "jaylib", gui_cfuns);
}
