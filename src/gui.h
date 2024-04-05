static const KeyDef gui_control_state [] = {
    {"state-disabled", STATE_DISABLED},
    {"state-focused", STATE_FOCUSED},
    {"state-normal", STATE_NORMAL},
    {"state-pressed", STATE_PRESSED},
};

static int jaylib_getgui_control_state(const Janet *argv, int32_t n) {
    return jaylib_castdef(argv, n, gui_control_state, sizeof(gui_control_state) / sizeof(KeyDef));
}

// Gui controls
static const KeyDef gui_control [] = {
    {"button", BUTTON},         // IMAGEBUTTON
    {"checkbox", CHECKBOX},
    {"colorpicker", COLORPICKER},
    {"combobox", COMBOBOX},
    {"default", DEFAULT},
    {"dropdownbox", DROPDOWNBOX},
    {"label", LABEL},          // LABELBUTTON
    {"listview", LISTVIEW},
    {"progressbar", PROGRESSBAR},
    {"scrollbar", SCROLLBAR},
    {"slider", SLIDER},         // SLIDERBAR
    {"spinner", SPINNER},
    {"statusbar", STATUSBAR},
    {"textbox", TEXTBOX},        // TEXTBOXMULTI
    {"toggle", TOGGLE},         // TOGGLEGROUP
    {"valuebox", VALUEBOX},
};

static int jaylib_getgui_control(const Janet *argv, int32_t n) {
    return jaylib_castdef(argv, n, gui_control, sizeof(gui_control) / sizeof(KeyDef));
}

// Gui base properties for every control
static const KeyDef gui_control_property [] = {
    {"arrow-padding", ARROW_PADDING},
    {"arrows-size", ARROWS_SIZE},
    {"arrows-visible", ARROWS_VISIBLE},
    {"background-color", BACKGROUND_COLOR},
    {"base-color-disabled", BASE_COLOR_DISABLED},
    {"base-color-focused", BASE_COLOR_FOCUSED},
    {"base-color-normal", BASE_COLOR_NORMAL},
    {"base-color-pressed", BASE_COLOR_PRESSED},
    {"border-color-disabled", BORDER_COLOR_DISABLED},
    {"border-color-focused", BORDER_COLOR_FOCUSED},
    {"border-color-normal", BORDER_COLOR_NORMAL},
    {"border-color-pressed", BORDER_COLOR_PRESSED},
    {"border-width", BORDER_WIDTH},
    {"check-padding", CHECK_PADDING},
    {"color-selector-size", COLOR_SELECTOR_SIZE},
    {"combo-button-spacing", COMBO_BUTTON_SPACING},
    {"combo-button-width", COMBO_BUTTON_WIDTH},
    {"dropdown-items-spacing", DROPDOWN_ITEMS_SPACING},
    {"group-padding", GROUP_PADDING},
    {"huebar-padding", HUEBAR_PADDING},                // Right hue bar separation from panel
    {"huebar-selector-height", HUEBAR_SELECTOR_HEIGHT},        // Right hue bar selector height
    {"huebar-selector-overflow", HUEBAR_SELECTOR_OVERFLOW},       // Right hue bar selector overflow
    {"huebar-width", HUEBAR_WIDTH},                  // Right hue bar width
    {"line-color", LINE_COLOR},
    {"list-items-height", LIST_ITEMS_HEIGHT},
    {"list-items-padding", LIST_ITEMS_SPACING},
    {"progress-padding", PROGRESS_PADDING},
    {"scroll-padding", SCROLL_PADDING},
    {"scroll-slider-padding", SCROLL_SLIDER_PADDING},
    {"scroll-slider-size", SCROLL_SLIDER_SIZE},
    {"scroll-speed", SCROLL_SPEED},
    {"scrollbar-left-side", SCROLLBAR_LEFT_SIDE},
    {"scrollbar-right-side", SCROLLBAR_RIGHT_SIDE},
    {"scrollbar-side", SCROLLBAR_SIDE},
    {"scrollbar-width", SCROLLBAR_WIDTH},
    {"slider-padding", SLIDER_PADDING},
    {"slider-width", SLIDER_WIDTH},
    {"spin-button-padding", SPIN_BUTTON_SPACING},
    {"spin-button-width", SPIN_BUTTON_WIDTH},
    {"text-align-center", TEXT_ALIGN_CENTER},
    {"text-align-left", TEXT_ALIGN_LEFT},
    {"text-align-right", TEXT_ALIGN_RIGHT},
    {"text-alignment", TEXT_ALIGNMENT},
    {"text-color-disabled", TEXT_COLOR_DISABLED},
    {"text-color-focused", TEXT_COLOR_FOCUSED},
    {"text-color-normal", TEXT_COLOR_NORMAL},
    {"text-color-pressed", TEXT_COLOR_PRESSED},
    {"text-line-spacing", TEXT_LINE_SPACING},
    {"text-padding", TEXT_PADDING},
    {"text-size", TEXT_SIZE},
    {"text-spacing", TEXT_SPACING},
};


static int jaylib_getgui_control_property(const Janet *argv, int32_t n) {
    return jaylib_castdef(argv, n, gui_control_property, sizeof(gui_control_property) / sizeof(KeyDef));
}

static const KeyDef gui_icon_name [] = {
    {"icon-1up", ICON_1UP},
    {"icon-223", ICON_223},
    {"icon-224", ICON_224},
    {"icon-225", ICON_225},
    {"icon-226", ICON_226},
    {"icon-227", ICON_227},
    {"icon-228", ICON_228},
    {"icon-229", ICON_229},
    {"icon-230", ICON_230},
    {"icon-231", ICON_231},
    {"icon-232", ICON_232},
    {"icon-233", ICON_233},
    {"icon-234", ICON_234},
    {"icon-235", ICON_235},
    {"icon-236", ICON_236},
    {"icon-237", ICON_237},
    {"icon-238", ICON_238},
    {"icon-239", ICON_239},
    {"icon-240", ICON_240},
    {"icon-241", ICON_241},
    {"icon-242", ICON_242},
    {"icon-243", ICON_243},
    {"icon-244", ICON_244},
    {"icon-245", ICON_245},
    {"icon-246", ICON_246},
    {"icon-247", ICON_247},
    {"icon-248", ICON_248},
    {"icon-249", ICON_249},
    {"icon-250", ICON_250},
    {"icon-251", ICON_251},
    {"icon-252", ICON_252},
    {"icon-253", ICON_253},
    {"icon-254", ICON_254},
    {"icon-255", ICON_255},
    {"icon-alarm", ICON_ALARM},
    {"icon-alpha-clear", ICON_ALPHA_CLEAR},
    {"icon-alpha-multiply", ICON_ALPHA_MULTIPLY},
    {"icon-arrow-down", ICON_ARROW_DOWN},
    {"icon-arrow-down-fill", ICON_ARROW_DOWN_FILL},
    {"icon-arrow-left", ICON_ARROW_LEFT},
    {"icon-arrow-left-fill", ICON_ARROW_LEFT_FILL},
    {"icon-arrow-right", ICON_ARROW_RIGHT},
    {"icon-arrow-right-fill", ICON_ARROW_RIGHT_FILL},
    {"icon-arrow-up", ICON_ARROW_UP},
    {"icon-arrow-up-fill", ICON_ARROW_UP_FILL},
    {"icon-audio", ICON_AUDIO},
    {"icon-bin", ICON_BIN},
    {"icon-box", ICON_BOX},
    {"icon-box-bottom", ICON_BOX_BOTTOM},
    {"icon-box-bottom-left", ICON_BOX_BOTTOM_LEFT},
    {"icon-box-bottom-right", ICON_BOX_BOTTOM_RIGHT},
    {"icon-box-center", ICON_BOX_CENTER},
    {"icon-box-circle-mask", ICON_BOX_CIRCLE_MASK},
    {"icon-box-concentric", ICON_BOX_CONCENTRIC},
    {"icon-box-corners-big", ICON_BOX_CORNERS_BIG},
    {"icon-box-corners-small", ICON_BOX_CORNERS_SMALL},
    {"icon-box-dots-big", ICON_BOX_DOTS_BIG},
    {"icon-box-dots-small", ICON_BOX_DOTS_SMALL},
    {"icon-box-grid", ICON_BOX_GRID},
    {"icon-box-grid-big", ICON_BOX_GRID_BIG},
    {"icon-box-left", ICON_BOX_LEFT},
    {"icon-box-multisize", ICON_BOX_MULTISIZE},
    {"icon-box-right", ICON_BOX_RIGHT},
    {"icon-box-up", ICON_BOX_TOP},
    {"icon-box-up-left", ICON_BOX_TOP_LEFT},
    {"icon-box-up-right", ICON_BOX_TOP_RIGHT},
    {"icon-breakpoint-off", ICON_BREAKPOINT_OFF},
    {"icon-breakpoint-on", ICON_BREAKPOINT_ON},
    {"icon-brush-classic", ICON_BRUSH_CLASSIC},
    {"icon-brush-painter", ICON_BRUSH_PAINTER},
    {"icon-burger-menu", ICON_BURGER_MENU},
    {"icon-camera", ICON_CAMERA},
    {"icon-case-sensitive", ICON_CASE_SENSITIVE},
    {"icon-clock", ICON_CLOCK},
    {"icon-coin", ICON_COIN},
    {"icon-color-bucket", ICON_COLOR_BUCKET},
    {"icon-color-picker", ICON_COLOR_PICKER},
    {"icon-corner", ICON_CORNER},
    {"icon-cpu", ICON_CPU},
    {"icon-crack", ICON_CRACK},
    {"icon-crack-points", ICON_CRACK_POINTS},
    {"icon-crop", ICON_CROP},
    {"icon-crop-alpha", ICON_CROP_ALPHA},
    {"icon-cross", ICON_CROSS},
    {"icon-cross-small", ICON_CROSS_SMALL},
    {"icon-crossline", ICON_CROSSLINE},
    {"icon-cube", ICON_CUBE},
    {"icon-cube-face-back", ICON_CUBE_FACE_BACK},
    {"icon-cube-face-bottom", ICON_CUBE_FACE_BOTTOM},
    {"icon-cube-face-front", ICON_CUBE_FACE_FRONT},
    {"icon-cube-face-left", ICON_CUBE_FACE_LEFT},
    {"icon-cube-face-right", ICON_CUBE_FACE_RIGHT},
    {"icon-cube-face-top", ICON_CUBE_FACE_TOP},
    {"icon-cursor-classic", ICON_CURSOR_CLASSIC},
    {"icon-cursor-hand", ICON_CURSOR_HAND},
    {"icon-cursor-move", ICON_CURSOR_MOVE},
    {"icon-cursor-move-fill", ICON_CURSOR_MOVE_FILL},
    {"icon-cursor-pointer", ICON_CURSOR_POINTER},
    {"icon-cursor-scale", ICON_CURSOR_SCALE},
    {"icon-cursor-scale-fill", ICON_CURSOR_SCALE_FILL},
    {"icon-cursor-scale-left", ICON_CURSOR_SCALE_LEFT},
    {"icon-cursor-scale-left-fill", ICON_CURSOR_SCALE_LEFT_FILL},
    {"icon-cursor-scale-right", ICON_CURSOR_SCALE_RIGHT},
    {"icon-cursor-scale-right-fill", ICON_CURSOR_SCALE_RIGHT_FILL},
    {"icon-demon", ICON_DEMON},
    {"icon-dithering", ICON_DITHERING},
    {"icon-door", ICON_DOOR},
    {"icon-emptybox", ICON_EMPTYBOX},
    {"icon-emptybox-small", ICON_EMPTYBOX_SMALL},
    {"icon-exit", ICON_EXIT},
    {"icon-explosion", ICON_EXPLOSION},
    {"icon-eye-off", ICON_EYE_OFF},
    {"icon-eye-on", ICON_EYE_ON},
    {"icon-file", ICON_FILE},
    {"icon-file-copy", ICON_FILE_COPY},
    {"icon-file-cut", ICON_FILE_CUT},
    {"icon-file-delete", ICON_FILE_DELETE},
    {"icon-file-export", ICON_FILE_EXPORT},
    {"icon-file-new", ICON_FILE_NEW},
    {"icon-file-new", ICON_FILE_NEW},
    {"icon-file-open", ICON_FILE_OPEN},
    {"icon-file-paste", ICON_FILE_PASTE},
    {"icon-file-save", ICON_FILE_SAVE},
    {"icon-file-save-classic", ICON_FILE_SAVE_CLASSIC},
    {"icon-filetype-alpha", ICON_FILETYPE_ALPHA},
    {"icon-filetype-audio", ICON_FILETYPE_AUDIO},
    {"icon-filetype-binary", ICON_FILETYPE_BINARY},
    {"icon-filetype-home", ICON_FILETYPE_HOME},
    {"icon-filetype-image", ICON_FILETYPE_IMAGE},
    {"icon-filetype-info", ICON_FILETYPE_INFO},
    {"icon-filetype-play", ICON_FILETYPE_PLAY},
    {"icon-filetype-text", ICON_FILETYPE_TEXT},
    {"icon-filetype-video", ICON_FILETYPE_VIDEO},
    {"icon-filter", ICON_FILTER},
    {"icon-filter-bilinear", ICON_FILTER_BILINEAR},
    {"icon-filter-point", ICON_FILTER_POINT},
    {"icon-filter-top", ICON_FILTER_TOP},
    {"icon-folder", ICON_FOLDER},
    {"icon-folder-add", ICON_FOLDER_ADD},
    {"icon-folder-file-open", ICON_FOLDER_FILE_OPEN},
    {"icon-folder-open", ICON_FOLDER_OPEN},
    {"icon-folder-save", ICON_FOLDER_SAVE},
    {"icon-four-boxes", ICON_FOUR_BOXES},
    {"icon-fx", ICON_FX},
    {"icon-gear", ICON_GEAR},
    {"icon-gear-big", ICON_GEAR_BIG},
    {"icon-gear-ex", ICON_GEAR_EX},
    {"icon-grid", ICON_GRID},
    {"icon-grid-fill", ICON_GRID_FILL},
    {"icon-hand-pointer", ICON_HAND_POINTER},
    {"icon-heart", ICON_HEART},
    {"icon-help", ICON_HELP},
    {"icon-help-box", ICON_HELP_BOX},
    {"icon-hex", ICON_HEX},
    {"icon-hidpi", ICON_HIDPI},
    {"icon-house", ICON_HOUSE},
    {"icon-info", ICON_INFO},
    {"icon-info-box", ICON_INFO_BOX},
    {"icon-key", ICON_KEY},
    {"icon-laser", ICON_LASER},
    {"icon-layers", ICON_LAYERS},
    {"icon-layers-visible", ICON_LAYERS_VISIBLE},
    {"icon-lens", ICON_LENS},
    {"icon-lens-big", ICON_LENS_BIG},
    {"icon-life-bars", ICON_LIFE_BARS},
    {"icon-link", ICON_LINK},
    {"icon-link-boxes", ICON_LINK_BOXES},
    {"icon-link-broke", ICON_LINK_BROKE},
    {"icon-link-multi", ICON_LINK_MULTI},
    {"icon-link-net", ICON_LINK_NET},
    {"icon-lock-close", ICON_LOCK_CLOSE},
    {"icon-lock-open", ICON_LOCK_OPEN},
    {"icon-magnet", ICON_MAGNET},
    {"icon-mailbox", ICON_MAILBOX},
    {"icon-mipmaps", ICON_MIPMAPS},
    {"icon-mode-2d", ICON_MODE_2D},
    {"icon-mode-3d", ICON_MODE_3D},
    {"icon-monitor", ICON_MONITOR},
    {"icon-mutate", ICON_MUTATE},
    {"icon-mutate-fill", ICON_MUTATE_FILL},
    {"icon-none", ICON_NONE},
    {"icon-notebook", ICON_NOTEBOOK},
    {"icon-ok-tick", ICON_OK_TICK},
    {"icon-pencil", ICON_PENCIL},
    {"icon-pencil-big", ICON_PENCIL_BIG},
    {"icon-photo-camera", ICON_PHOTO_CAMERA},
    {"icon-photo-camera-flash", ICON_PHOTO_CAMERA_FLASH},
    {"icon-player", ICON_PLAYER},
    {"icon-player-jump", ICON_PLAYER_JUMP},
    {"icon-player-next", ICON_PLAYER_NEXT},
    {"icon-player-pause", ICON_PLAYER_PAUSE},
    {"icon-player-play", ICON_PLAYER_PLAY},
    {"icon-player-play-back", ICON_PLAYER_PLAY_BACK},
    {"icon-player-previous", ICON_PLAYER_PREVIOUS},
    {"icon-player-record", ICON_PLAYER_RECORD},
    {"icon-player-stop", ICON_PLAYER_STOP},
    {"icon-pot", ICON_POT},
    {"icon-printer", ICON_PRINTER},
    {"icon-redo", ICON_REDO},
    {"icon-redo-fill", ICON_REDO_FILL},
    {"icon-reg-exp", ICON_REG_EXP},
    {"icon-repeat", ICON_REPEAT},
    {"icon-repeat-fill", ICON_REPEAT_FILL},
    {"icon-reredo", ICON_REREDO},
    {"icon-reredo-fill", ICON_REREDO_FILL},
    {"icon-resize", ICON_RESIZE},
    {"icon-restart", ICON_RESTART},
    {"icon-rom", ICON_ROM},
    {"icon-rotate", ICON_ROTATE},
    {"icon-rotate-fill", ICON_ROTATE_FILL},
    {"icon-rubber", ICON_RUBBER},
    {"icon-sand-timer", ICON_SAND_TIMER},
    {"icon-scale", ICON_SCALE},
    {"icon-shield", ICON_SHIELD},
    {"icon-shuffle", ICON_SHUFFLE},
    {"icon-shuffle-fill", ICON_SHUFFLE_FILL},
    {"icon-special", ICON_SPECIAL},
    {"icon-square-toggle", ICON_SQUARE_TOGGLE},
    {"icon-star", ICON_STAR},
    {"icon-step-into", ICON_STEP_INTO},
    {"icon-step-out", ICON_STEP_OUT},
    {"icon-step-over", ICON_STEP_OVER},
    {"icon-suitcase", ICON_SUITCASE},
    {"icon-suitcase-zip", ICON_SUITCASE_ZIP},
    {"icon-symmetry", ICON_SYMMETRY},
    {"icon-symmetry-horizontal", ICON_SYMMETRY_HORIZONTAL},
    {"icon-symmetry-vertical", ICON_SYMMETRY_VERTICAL},
    {"icon-target", ICON_TARGET},
    {"icon-target-big", ICON_TARGET_BIG},
    {"icon-target-big-fill", ICON_TARGET_BIG_FILL},
    {"icon-target-move", ICON_TARGET_MOVE},
    {"icon-target-move-fill", ICON_TARGET_MOVE_FILL},
    {"icon-target-point", ICON_TARGET_POINT},
    {"icon-target-small", ICON_TARGET_SMALL},
    {"icon-target-small-fill", ICON_TARGET_SMALL_FILL},
    {"icon-text-a", ICON_TEXT_A},
    {"icon-text-notes", ICON_TEXT_NOTES},
    {"icon-text-popup", ICON_TEXT_POPUP},
    {"icon-text-t", ICON_TEXT_T},
    {"icon-tools", ICON_TOOLS},
    {"icon-undo", ICON_UNDO},
    {"icon-undo-fill", ICON_UNDO_FILL},
    {"icon-vertical-bars", ICON_VERTICAL_BARS},
    {"icon-vertical-bars-fill", ICON_VERTICAL_BARS_FILL},
    {"icon-warning", ICON_WARNING},
    {"icon-water-drop", ICON_WATER_DROP},
    {"icon-wave", ICON_WAVE},
    {"icon-wave-sinus", ICON_WAVE_SINUS},
    {"icon-wave-square", ICON_WAVE_SQUARE},
    {"icon-wave-triangular", ICON_WAVE_TRIANGULAR},
    {"icon-window", ICON_WINDOW},
    {"icon-zoom-all", ICON_ZOOM_ALL},
    {"icon-zoom-big", ICON_ZOOM_BIG},
    {"icon-zoom-center", ICON_ZOOM_CENTER},
    {"icon-zoom-medium", ICON_ZOOM_MEDIUM},
    {"icon-zoom-small", ICON_ZOOM_SMALL},
};

static int jaylib_getgui_icon_name(const Janet *argv, int32_t n) {
    return jaylib_castdef(argv, n, gui_icon_name, sizeof(gui_icon_name) / sizeof(KeyDef));
}

static Janet cfun_GuiEnable(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    GuiEnable();                                         // Enable gui controls (global state)
    return janet_wrap_nil();
}

static Janet cfun_GuiDisable(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    GuiDisable();                                        // Disable gui controls (global state)
    return janet_wrap_nil();
}

static Janet cfun_GuiLock(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    GuiLock();                                           // Lock gui controls (global state)
    return janet_wrap_nil();
}

static Janet cfun_GuiUnlock(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    GuiUnlock();                                         // Unlock gui controls (global state)
    return janet_wrap_nil();
}

static Janet cfun_GuiLockedq(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    // Check if gui is locked (global state)
    return janet_wrap_boolean(GuiIsLocked());
}

static Janet cfun_GuiSetAlpha(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    float alpha = (float) janet_getnumber(argv, 1);
    // Set gui controls alpha (global state), alpha goes from 0.0f to 1.0f
    GuiSetAlpha(alpha);
    return janet_wrap_nil();
}

static Janet cfun_GuiFade(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Color color = jaylib_getcolor(argv, 0);
    float alpha = (float) janet_getnumber(argv, 1);
    // Set gui controls alpha (global state), alpha goes from 0.0f to 1.0f
    return jaylib_wrap_color(GuiFade(color, alpha));
}

static Janet cfun_GuiSetState(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int state = jaylib_getgui_control_state(argv, 0);
    GuiSetState(state);                                  // Set gui state (global state)
    return janet_wrap_nil();
}

static Janet cfun_GuiGetState(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    int result = GuiGetState();                                        // Get gui state (global state)
    return janet_wrap_integer(result);
}

// Font set/get functions
static Janet cfun_GuiSetFont(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Font font = *jaylib_getfont(argv, 0);
    GuiSetFont(font);                                   // Set gui custom font (global state)
    return janet_wrap_nil();
}

static Janet cfun_GuiGetFont(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    Font *font = janet_abstract(&AT_Font, sizeof(Font));
    *font = GuiGetFont();                                        // Get gui custom font (global state)
    return janet_wrap_abstract(font);
}


// Style set/get functions
static Janet cfun_GuiSetStyle(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    int control = jaylib_getgui_control(argv, 0);
    int property = jaylib_getgui_control_property(argv, 1);
    int value = jaylib_getgui_control_property(argv, 2);
    GuiSetStyle(control, property, value);       // Set one style property
    return janet_wrap_nil();
}

static Janet cfun_GuiGetStyle(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int control = jaylib_getgui_control(argv, 0);
    int property = jaylib_getgui_control_property(argv, 1);
    int result = GuiGetStyle(control, property);                   // Get one style property
    return janet_wrap_integer(result);
}


// Tooltips set functions
static Janet cfun_GuiEnableTooltip(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    GuiEnableTooltip();                                  // Enable gui tooltips
    return janet_wrap_nil();
}

static Janet cfun_GuiDisableTooltip(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    GuiDisableTooltip();                                 // Disable gui tooltips
    return janet_wrap_nil();
}

static Janet cfun_GuiSetTooltip(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    const char *tooltip = jaylib_getcstring(argv, 0);
    GuiSetTooltip(tooltip);                      // Set current tooltip for display
    return janet_wrap_nil();
}

// Container/separator controls, useful for controls organization
static Janet cfun_GuiWindowBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *title = jaylib_getcstring(argv, 1);
    bool result = GuiWindowBox(bounds, title);                                       // Window Box control, shows a window that can be closed
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiGroupBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    GuiGroupBox(bounds, text);                                         // Group Box control with text name
    return janet_wrap_nil();
}

static Janet cfun_GuiLine(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    GuiLine(bounds, text);                                             // Line separator control, could contain text
    return janet_wrap_nil();
}

static Janet cfun_GuiPanel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    GuiPanel(bounds, text);                                                              // Panel control, useful to group controls
    return janet_wrap_nil();
}

static Janet cfun_GuiScrollPanel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    Rectangle content = jaylib_getrect(argv, 2);
    Vector2 scroll = jaylib_getvec2(argv, 3);
    Rectangle result;
    GuiScrollPanel(bounds, text, content, &scroll, &result);               // Scroll Panel control
    return jaylib_wrap_rectangle(result);
}


// Basic controls set
static Janet cfun_GuiLabel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    GuiLabel(bounds, text);                                            // Label control, shows text
    return janet_wrap_nil();
}

static Janet cfun_GuiButton(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    bool result = GuiButton(bounds, text);                                           // Button control, returns true when clicked
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiLabelButton(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    bool result = GuiLabelButton(bounds, text);                                      // Label button control, show true when clicked
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiToggle(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    bool active = janet_getboolean(argv, 2);
    bool result = GuiToggle(bounds, text, &active);                              // Toggle Button control, returns true when active
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiToggleGroup(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int active = janet_getinteger(argv, 2);
    int result = GuiToggleGroup(bounds, text, &active);                           // Toggle Group control, returns active toggle index
    return janet_wrap_integer(result);
}

static Janet cfun_GuiCheckBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    bool checked = janet_getboolean(argv, 2);
    bool result = GuiCheckBox(bounds, text, &checked);                           // Check Box control, returns true when active
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiComboBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int active = janet_getinteger(argv, 2);
    int result = GuiComboBox(bounds, text, &active);                              // Combo Box control, returns selected item index
    return janet_wrap_integer(result);
}

static Janet jaylib_wrap_gui_integer(bool result, int value) {
    JanetKV *g_r = janet_struct_begin(2);
    janet_struct_put(g_r, janet_ckeywordv("result"), janet_wrap_boolean(result));
    janet_struct_put(g_r, janet_ckeywordv("value"), janet_wrap_integer(value));
    return janet_wrap_struct(janet_struct_end(g_r));
}

static Janet cfun_GuiDropdownBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int active = janet_getinteger(argv, 2);
    bool editMode = janet_getboolean(argv, 3);
    bool result = GuiDropdownBox(bounds, text, &active, editMode);  // Dropdown Box control, returns selected item
    return jaylib_wrap_gui_integer(result, active);
}

static Janet cfun_GuiSpinner(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int value = janet_getinteger(argv, 2);
    int minValue = janet_getinteger(argv, 3);
    int maxValue = janet_getinteger(argv, 4);
    bool editMode = janet_getboolean(argv, 5);
    bool result = GuiSpinner(bounds, text, &value, minValue, maxValue, editMode);     // Spinner control, returns selected value
    return jaylib_wrap_gui_integer(result, value);
}

static Janet cfun_GuiValueBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int value = janet_getinteger(argv, 2);
    int minValue = janet_getinteger(argv, 3);
    int maxValue = janet_getinteger(argv, 4);
    bool editMode = janet_getboolean(argv, 5);
    bool result = GuiValueBox(bounds, text, &value, minValue, maxValue, editMode);    // Value Box control, updates input text with numbers
    return jaylib_wrap_gui_integer(result, value);
}

static Janet jaylib_wrap_gui_string(bool result, char *value) {
    JanetKV *g_r = janet_struct_begin(2);
    janet_struct_put(g_r, janet_ckeywordv("result"), janet_wrap_boolean(result));
    janet_struct_put(g_r, janet_ckeywordv("text"), janet_cstringv(value));
    return janet_wrap_struct(janet_struct_end(g_r));
}

static char *fillBuffer(char* buff, int32_t *buffSize, const char *text)
{
    int32_t textlen = strlen(text);
    if(textlen > *buffSize) {
        *buffSize += textlen;
        buff = janet_srealloc(buff, *buffSize);
    }

    for (int32_t i = 0; i < textlen; i++) {
        buff[i] = text[i];
    }
    return buff;
}

static Janet cfun_GuiTextBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int32_t buffSize = janet_getinteger(argv, 2);
    char *buff = janet_scalloc(sizeof(char), (size_t)(buffSize+1));
    buff = fillBuffer(buff, &buffSize, text);

    bool editMode = janet_getboolean(argv, 3);
    bool result = GuiTextBox(bounds, buff, buffSize, editMode);                   // Text Box control, updates input text
    return jaylib_wrap_gui_string(result, buff);
}

static Janet cfun_GuiSlider(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *textLeft = jaylib_getcstring(argv, 1);
    const char *textRight = jaylib_getcstring(argv, 2);
    float value = janet_getnumber(argv, 3);
    float minValue = janet_getnumber(argv, 4);
    float maxValue = janet_getnumber(argv, 5);
    float result = GuiSlider(bounds, textLeft, textRight, &value, minValue, maxValue);       // Slider control, returns selected value
    return janet_wrap_number(result);
}

static Janet cfun_GuiSliderBar(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
Rectangle bounds = jaylib_getrect(argv, 0);
    const char *textLeft = jaylib_getcstring(argv, 1);
    const char *textRight = jaylib_getcstring(argv, 2);
    float value = janet_getnumber(argv, 3);
    float minValue = janet_getnumber(argv, 4);
    float maxValue = janet_getnumber(argv, 5);
    float result = GuiSliderBar(bounds, textLeft, textRight, &value, minValue, maxValue);    // Slider Bar control, returns selected value
    return janet_wrap_number(result);
}

static Janet cfun_GuiProgressBar(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *textLeft = jaylib_getcstring(argv, 1);
    const char *textRight = jaylib_getcstring(argv, 2);
    float value = janet_getnumber(argv, 3);
    float minValue = janet_getnumber(argv, 4);
    float maxValue = janet_getnumber(argv, 5);
    float result = GuiProgressBar(bounds, textLeft, textRight, &value, minValue, maxValue);  // Progress Bar control, shows current progress value
    return janet_wrap_number(result);
}

static Janet cfun_GuiStatusBar(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    GuiStatusBar(bounds, text);                                        // Status Bar control, shows info text
    return janet_wrap_nil();
}

static Janet cfun_GuiDummyRec(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    GuiDummyRec(bounds, text);                                         // Dummy control for placeholders
    return janet_wrap_nil();
}

static Janet cfun_GuiScrollBar(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    int value = janet_getinteger(argv, 1);
    int minValue = janet_getinteger(argv, 2);
    int maxValue = janet_getinteger(argv, 3);
    int result = GuiScrollBar(bounds, value, minValue, maxValue);                    // Scroll Bar control
    return janet_wrap_integer(result);
}

static Janet cfun_GuiGrid(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    float spacing = janet_getnumber(argv, 2);
    int subdivs = janet_getinteger(argv, 3);
    Vector2 mouseCell;
    GuiGrid(bounds, text, spacing, subdivs, &mouseCell);
    return jaylib_wrap_vec2(mouseCell);                                // Grid control
}

static Janet jaylib_wrap_gui_listviewresult(int active, int scrollindex) {
    JanetKV *g_r = janet_struct_begin(2);
    janet_struct_put(g_r, janet_ckeywordv("active"), janet_wrap_integer(active));
    janet_struct_put(g_r, janet_ckeywordv("scrollindex"), janet_wrap_integer(scrollindex));
    return janet_wrap_struct(janet_struct_end(g_r));
}

// Advance controls set
static Janet cfun_GuiListView(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int scrollIndex = janet_getinteger(argv, 2);
    int active = janet_getinteger(argv, 3);
    int result = GuiListView(bounds, text, &scrollIndex, &active);            // List View control, returns selected list item index
    return jaylib_wrap_gui_listviewresult(result, scrollIndex);
}

static Janet jaylib_wrap_gui_listviewresult_ex(int active, int scrollindex, int focus) {
    JanetKV *g_r = janet_struct_begin(3);
    janet_struct_put(g_r, janet_ckeywordv("active"), janet_wrap_integer(active));
    janet_struct_put(g_r, janet_ckeywordv("scrollindex"), janet_wrap_integer(scrollindex));
    janet_struct_put(g_r, janet_ckeywordv("focus"), janet_wrap_integer(focus));
    return janet_wrap_struct(janet_struct_end(g_r));
}

static Janet cfun_GuiListViewEx(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Rectangle bounds = jaylib_getrect(argv, 0);
    
    //const char **text = jaylib_getcstring(argv, 1);
    JanetView idx = janet_getindexed(argv, 1);
    const char **text = janet_scalloc(sizeof(const char**), (size_t)(idx.len));
    for(unsigned i = 0; i < idx.len; i++) {
        text[i] = jaylib_getcstring(idx.items, i);
    }

    int count = janet_getinteger(argv, 2);
    int focus = janet_getinteger(argv, 3);
    int scrollIndex = janet_getinteger(argv, 4);
    int active = janet_getinteger(argv, 5);
    int result = GuiListViewEx(bounds, text, count, &focus, &scrollIndex, &active);      // List View with extended parameters
    return jaylib_wrap_gui_listviewresult_ex(result, scrollIndex, focus);
}

static Janet cfun_GuiMessageBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *title = jaylib_getcstring(argv, 1);
    const char *message = jaylib_getcstring(argv, 2);
    const char *buttons = jaylib_getcstring(argv, 3);
    int result = GuiMessageBox(bounds, title, message, buttons);                 // Message Box control, displays a message
    return janet_wrap_integer(result);
}


static Janet jaylib_wrap_text_input_box_result(int result, char* text) {
    JanetKV *g_r = janet_struct_begin(2);
    janet_struct_put(g_r, janet_ckeywordv("result"), janet_wrap_integer(result));
    janet_struct_put(g_r, janet_ckeywordv("text"), janet_cstringv(text));
    return janet_wrap_struct(janet_struct_end(g_r));
}

static Janet cfun_GuiTextInputBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *title = jaylib_getcstring(argv, 1);
    const char *message = jaylib_getcstring(argv, 2);
    const char *buttons = jaylib_getcstring(argv, 3);
    const char *text = jaylib_getcstring(argv, 4);
    int32_t buffSize = 512;
    char *buff = janet_scalloc(sizeof(char), (size_t)(buffSize));
    buff = fillBuffer(buff, &buffSize, text);
    int textMaxSize = janet_getnumber(argv, 5);
    bool secretViewActive = janet_getboolean(argv, 6);
    int result = GuiTextInputBox(bounds, title, message, buttons, buff, textMaxSize, &secretViewActive);   // Text Input Box control, ask for text
    return jaylib_wrap_text_input_box_result(result, buff);
}

static Janet cfun_GuiColorPicker(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);    
    const char *text = jaylib_getcstring(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    GuiColorPicker(bounds, text, &color);
    return jaylib_wrap_color(color);                                          // Color Picker control (multiple color controls)
}

static Janet cfun_GuiColorPanel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    GuiColorPanel(bounds, text, &color);
    return jaylib_wrap_color(color);                                           // Color Panel control
}

static Janet cfun_GuiColorBarAlpha(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    float alpha = janet_getnumber(argv, 2);
    GuiColorBarAlpha(bounds, text, &alpha);                                        // Color Bar Alpha control
    return janet_wrap_number(alpha);
}

static Janet cfun_GuiColorBarHue(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    float value = janet_getnumber(argv, 2);
    GuiColorBarHue(bounds, text, &value);
    return janet_wrap_number(value);                                          // Color Bar Hue control
}


// Styles loading functions
static Janet cfun_GuiLoadStyle(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    const char *fileName = jaylib_getcstring(argv, 0);
    GuiLoadStyle(fileName);              // Load style file (.rgs)
    return janet_wrap_nil();
}

static Janet cfun_GuiLoadStyleDefault(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    GuiLoadStyleDefault();                       // Load style default over global style
    return janet_wrap_nil();
}


static Janet cfun_GuiIconText(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int iconId = jaylib_getgui_icon_name(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    return janet_cstringv(GuiIconText(iconId, text)); // Get text with icon id prepended (if supported)
}

static JanetReg gui_cfuns[] = {
    {"gui-disable", cfun_GuiDisable, NULL},
    {"gui-lock", cfun_GuiLock, NULL},
    {"gui-locked?", cfun_GuiLockedq, NULL},
    {"gui-unlock", cfun_GuiUnlock, NULL},
    {"gui-fade", cfun_GuiFade, NULL},
    {"gui-set-alpha", cfun_GuiSetAlpha, NULL},
    {"gui-set-state", cfun_GuiSetState, NULL},
    {"gui-get-state", cfun_GuiGetState, NULL},

// Font set/get functions
    {"gui-set-font", cfun_GuiSetFont, NULL},
    {"gui-get-font", cfun_GuiGetFont, NULL},

// Style set/get functions
    {"gui-set-style", cfun_GuiSetStyle, NULL},
    {"gui-get-style", cfun_GuiGetStyle, NULL},

// Tooltips set functions
    {"gui-enable-tooltip", cfun_GuiEnableTooltip, NULL},
    {"gui-disable-tooltip", cfun_GuiDisableTooltip, NULL},
    {"gui-set-tooltip", cfun_GuiSetTooltip, NULL},

// Container/separator controls, useful for controls organization
    {"gui-window-box", cfun_GuiWindowBox, NULL},
    {"gui-group-box", cfun_GuiGroupBox, NULL},
    {"gui-line", cfun_GuiLine, NULL},
    {"gui-panel", cfun_GuiPanel, NULL},
    {"gui-scroll-panel", cfun_GuiScrollPanel, NULL},

// Basic controls set
    {"gui-label", cfun_GuiLabel, NULL},
    {"gui-button", cfun_GuiButton, NULL},
    {"gui-label-button", cfun_GuiLabelButton, NULL},
    {"gui-toggle", cfun_GuiToggle, NULL},
    {"gui-toggle-group", cfun_GuiToggleGroup, NULL},
    {"gui-check-box", cfun_GuiCheckBox, NULL},
    {"gui-combo-box", cfun_GuiComboBox, NULL},
    {"gui-dropdown-box", cfun_GuiDropdownBox, NULL},
    {"gui-spinner", cfun_GuiSpinner, NULL},
    {"gui-value-box", cfun_GuiValueBox, NULL},
    {"gui-text-box", cfun_GuiTextBox, NULL},
    
    {"gui-slider", cfun_GuiSlider, NULL},
    {"gui-slider-bar", cfun_GuiSliderBar, NULL},
    {"gui-progress-bar", cfun_GuiProgressBar, NULL},
    {"gui-status-bar", cfun_GuiStatusBar, NULL},
    {"gui-dummy-rec", cfun_GuiDummyRec, NULL},
    {"gui-scroll-bar", cfun_GuiScrollBar, NULL},
    {"gui-grid", cfun_GuiGrid, NULL},

// Advance controls set
    {"gui-list-view", cfun_GuiListView, NULL},
    {"gui-list-view-ex", cfun_GuiListViewEx, NULL},
    {"gui-message-box", cfun_GuiMessageBox, NULL},
    {"gui-text-input-box", cfun_GuiTextInputBox, NULL},
    {"gui-color-picker", cfun_GuiColorPicker, NULL},
    {"gui-color-panel", cfun_GuiColorPanel, NULL},
    {"gui-color-bar-alpha", cfun_GuiColorBarAlpha, NULL},
    {"gui-color-bar-hue", cfun_GuiColorBarHue, NULL},

// Styles loading functions
    {"gui-load-style", cfun_GuiLoadStyle, NULL},
    {"gui-load-style-default", cfun_GuiLoadStyleDefault, NULL},

    {"gui-icon-text", cfun_GuiIconText, NULL},

    {NULL, NULL, NULL}
};