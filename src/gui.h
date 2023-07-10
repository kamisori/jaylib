static const KeyDef gui_control_state [] = {
    {"gui-state-disabled", GUI_STATE_DISABLED},
    {"gui-state-focused", GUI_STATE_FOCUSED},
    {"gui-state-normal", GUI_STATE_NORMAL},
    {"gui-state-pressed", GUI_STATE_PRESSED},
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
    {"color-selected-bg", COLOR_SELECTED_BG},
    {"color-selected-fg", COLOR_SELECTED_FG},
    {"color-selector-size", COLOR_SELECTOR_SIZE},
    {"combo-button-padding", COMBO_BUTTON_PADDING},
    {"combo-button-width", COMBO_BUTTON_WIDTH},
    {"dropdown-items-padding", DROPDOWN_ITEMS_PADDING},
    {"group-padding", GROUP_PADDING},
    {"gui-text-align-center", GUI_TEXT_ALIGN_CENTER},
    {"gui-text-align-left", GUI_TEXT_ALIGN_LEFT},
    {"gui-text-align-right", GUI_TEXT_ALIGN_RIGHT},
    {"huebar-padding", HUEBAR_PADDING},                // Right hue bar separation from panel
    {"huebar-selector-height", HUEBAR_SELECTOR_HEIGHT},        // Right hue bar selector height
    {"huebar-selector-overflow", HUEBAR_SELECTOR_OVERFLOW},       // Right hue bar selector overflow
    {"huebar-width", HUEBAR_WIDTH},                  // Right hue bar width
    {"line-color", LINE_COLOR},
    {"list-items-height", LIST_ITEMS_HEIGHT},
    {"list-items-padding", LIST_ITEMS_PADDING},
    {"progress-padding", PROGRESS_PADDING},
    {"reserved", RESERVED},
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
    {"spin-button-padding", SPIN_BUTTON_PADDING},
    {"spin-button-width", SPIN_BUTTON_WIDTH},
    {"text-alignment", TEXT_ALIGNMENT},
    {"text-color-disabled", TEXT_COLOR_DISABLED},
    {"text-color-focused", TEXT_COLOR_FOCUSED},
    {"text-color-normal", TEXT_COLOR_NORMAL},
    {"text-color-pressed", TEXT_COLOR_PRESSED},
    {"text-inner-padding", TEXT_INNER_PADDING},
    {"text-lines-padding", TEXT_LINES_PADDING},
    {"text-padding", TEXT_PADDING},
    {"text-size", TEXT_SIZE},
    {"text-spacing", TEXT_SPACING},
};


static int jaylib_getgui_control_property(const Janet *argv, int32_t n) {
    return jaylib_castdef(argv, n, gui_control_property, sizeof(gui_control_property) / sizeof(KeyDef));
}

static const KeyDef gui_icon_name [] = {
    {"ricon-1up", RICON_1UP},
    {"ricon-200", RICON_200},
    {"ricon-201", RICON_201},
    {"ricon-202", RICON_202},
    {"ricon-203", RICON_203},
    {"ricon-204", RICON_204},
    {"ricon-205", RICON_205},
    {"ricon-206", RICON_206},
    {"ricon-207", RICON_207},
    {"ricon-208", RICON_208},
    {"ricon-209", RICON_209},
    {"ricon-210", RICON_210},
    {"ricon-211", RICON_211},
    {"ricon-212", RICON_212},
    {"ricon-213", RICON_213},
    {"ricon-214", RICON_214},
    {"ricon-215", RICON_215},
    {"ricon-216", RICON_216},
    {"ricon-217", RICON_217},
    {"ricon-218", RICON_218},
    {"ricon-219", RICON_219},
    {"ricon-220", RICON_220},
    {"ricon-221", RICON_221},
    {"ricon-222", RICON_222},
    {"ricon-223", RICON_223},
    {"ricon-224", RICON_224},
    {"ricon-225", RICON_225},
    {"ricon-226", RICON_226},
    {"ricon-227", RICON_227},
    {"ricon-228", RICON_228},
    {"ricon-229", RICON_229},
    {"ricon-230", RICON_230},
    {"ricon-231", RICON_231},
    {"ricon-232", RICON_232},
    {"ricon-233", RICON_233},
    {"ricon-234", RICON_234},
    {"ricon-235", RICON_235},
    {"ricon-236", RICON_236},
    {"ricon-237", RICON_237},
    {"ricon-238", RICON_238},
    {"ricon-239", RICON_239},
    {"ricon-240", RICON_240},
    {"ricon-241", RICON_241},
    {"ricon-242", RICON_242},
    {"ricon-243", RICON_243},
    {"ricon-244", RICON_244},
    {"ricon-245", RICON_245},
    {"ricon-246", RICON_246},
    {"ricon-247", RICON_247},
    {"ricon-248", RICON_248},
    {"ricon-249", RICON_249},
    {"ricon-250", RICON_250},
    {"ricon-251", RICON_251},
    {"ricon-252", RICON_252},
    {"ricon-253", RICON_253},
    {"ricon-254", RICON_254},
    {"ricon-255", RICON_255},
    {"ricon-alpha-clear", RICON_ALPHA_CLEAR},
    {"ricon-alpha-multiply", RICON_ALPHA_MULTIPLY},
    {"ricon-arrow-bottom", RICON_ARROW_BOTTOM},
    {"ricon-arrow-bottom-fill", RICON_ARROW_BOTTOM_FILL},
    {"ricon-arrow-left", RICON_ARROW_LEFT},
    {"ricon-arrow-left-fill", RICON_ARROW_LEFT_FILL},
    {"ricon-arrow-right", RICON_ARROW_RIGHT},
    {"ricon-arrow-right-fill", RICON_ARROW_RIGHT_FILL},
    {"ricon-arrow-top", RICON_ARROW_TOP},
    {"ricon-arrow-top-fill", RICON_ARROW_TOP_FILL},
    {"ricon-audio", RICON_AUDIO},
    {"ricon-bin", RICON_BIN},
    {"ricon-box", RICON_BOX},
    {"ricon-box-bottom", RICON_BOX_BOTTOM},
    {"ricon-box-bottom-left", RICON_BOX_BOTTOM_LEFT},
    {"ricon-box-bottom-right", RICON_BOX_BOTTOM_RIGHT},
    {"ricon-box-center", RICON_BOX_CENTER},
    {"ricon-box-circle-mask", RICON_BOX_CIRCLE_MASK},
    {"ricon-box-concentric", RICON_BOX_CONCENTRIC},
    {"ricon-box-corners-big", RICON_BOX_CORNERS_BIG},
    {"ricon-box-corners-small", RICON_BOX_CORNERS_SMALL},
    {"ricon-box-dots-big", RICON_BOX_DOTS_BIG},
    {"ricon-box-dots-small", RICON_BOX_DOTS_SMALL},
    {"ricon-box-grid", RICON_BOX_GRID},
    {"ricon-box-grid-big", RICON_BOX_GRID_BIG},
    {"ricon-box-left", RICON_BOX_LEFT},
    {"ricon-box-multisize", RICON_BOX_MULTISIZE},
    {"ricon-box-right", RICON_BOX_RIGHT},
    {"ricon-box-top", RICON_BOX_TOP},
    {"ricon-box-top-left", RICON_BOX_TOP_LEFT},
    {"ricon-box-top-right", RICON_BOX_TOP_RIGHT},
    {"ricon-brush-classic", RICON_BRUSH_CLASSIC},
    {"ricon-brush-painter", RICON_BRUSH_PAINTER},
    {"ricon-camera", RICON_CAMERA},
    {"ricon-clock", RICON_CLOCK},
    {"ricon-coin", RICON_COIN},
    {"ricon-color-bucket", RICON_COLOR_BUCKET},
    {"ricon-color-picker", RICON_COLOR_PICKER},
    {"ricon-corner", RICON_CORNER},
    {"ricon-crack", RICON_CRACK},
    {"ricon-crack-points", RICON_CRACK_POINTS},
    {"ricon-crop", RICON_CROP},
    {"ricon-crop-alpha", RICON_CROP_ALPHA},
    {"ricon-cross", RICON_CROSS},
    {"ricon-cross-small", RICON_CROSS_SMALL},
    {"ricon-crossline", RICON_CROSSLINE},
    {"ricon-cube", RICON_CUBE},
    {"ricon-cube-face-back", RICON_CUBE_FACE_BACK},
    {"ricon-cube-face-bottom", RICON_CUBE_FACE_BOTTOM},
    {"ricon-cube-face-front", RICON_CUBE_FACE_FRONT},
    {"ricon-cube-face-left", RICON_CUBE_FACE_LEFT},
    {"ricon-cube-face-right", RICON_CUBE_FACE_RIGHT},
    {"ricon-cube-face-top", RICON_CUBE_FACE_TOP},
    {"ricon-cursor-classic", RICON_CURSOR_CLASSIC},
    {"ricon-cursor-hand", RICON_CURSOR_HAND},
    {"ricon-cursor-move", RICON_CURSOR_MOVE},
    {"ricon-cursor-move-fill", RICON_CURSOR_MOVE_FILL},
    {"ricon-cursor-pointer", RICON_CURSOR_POINTER},
    {"ricon-cursor-scale", RICON_CURSOR_SCALE},
    {"ricon-cursor-scale-fill", RICON_CURSOR_SCALE_FILL},
    {"ricon-cursor-scale-left", RICON_CURSOR_SCALE_LEFT},
    {"ricon-cursor-scale-left-fill", RICON_CURSOR_SCALE_LEFT_FILL},
    {"ricon-cursor-scale-right", RICON_CURSOR_SCALE_RIGHT},
    {"ricon-cursor-scale-right-fill", RICON_CURSOR_SCALE_RIGHT_FILL},
    {"ricon-demon", RICON_DEMON},
    {"ricon-dithering", RICON_DITHERING},
    {"ricon-door", RICON_DOOR},
    {"ricon-emptybox", RICON_EMPTYBOX},
    {"ricon-emptybox-small", RICON_EMPTYBOX_SMALL},
    {"ricon-exit", RICON_EXIT},
    {"ricon-explosion", RICON_EXPLOSION},
    {"ricon-eye-off", RICON_EYE_OFF},
    {"ricon-eye-on", RICON_EYE_ON},
    {"ricon-file-copy", RICON_FILE_COPY},
    {"ricon-file-cut", RICON_FILE_CUT},
    {"ricon-file-delete", RICON_FILE_DELETE},
    {"ricon-file-export", RICON_FILE_EXPORT},
    {"ricon-file-new", RICON_FILE_NEW},
    {"ricon-file-open", RICON_FILE_OPEN},
    {"ricon-file-paste", RICON_FILE_PASTE},
    {"ricon-file-save", RICON_FILE_SAVE},
    {"ricon-file-save-classic", RICON_FILE_SAVE_CLASSIC},
    {"ricon-filetype-alpha", RICON_FILETYPE_ALPHA},
    {"ricon-filetype-audio", RICON_FILETYPE_AUDIO},
    {"ricon-filetype-home", RICON_FILETYPE_HOME},
    {"ricon-filetype-image", RICON_FILETYPE_IMAGE},
    {"ricon-filetype-info", RICON_FILETYPE_INFO},
    {"ricon-filetype-play", RICON_FILETYPE_PLAY},
    {"ricon-filetype-text", RICON_FILETYPE_TEXT},
    {"ricon-filetype-video", RICON_FILETYPE_VIDEO},
    {"ricon-filter", RICON_FILTER},
    {"ricon-filter-bilinear", RICON_FILTER_BILINEAR},
    {"ricon-filter-point", RICON_FILTER_POINT},
    {"ricon-filter-top", RICON_FILTER_TOP},
    {"ricon-folder-file-open", RICON_FOLDER_FILE_OPEN},
    {"ricon-folder-open", RICON_FOLDER_OPEN},
    {"ricon-folder-save", RICON_FOLDER_SAVE},
    {"ricon-four-boxes", RICON_FOUR_BOXES},
    {"ricon-fx", RICON_FX},
    {"ricon-gear", RICON_GEAR},
    {"ricon-gear-big", RICON_GEAR_BIG},
    {"ricon-gear-ex", RICON_GEAR_EX},
    {"ricon-grid", RICON_GRID},
    {"ricon-grid-fill", RICON_GRID_FILL},
    {"ricon-hand-pointer", RICON_HAND_POINTER},
    {"ricon-heart", RICON_HEART},
    {"ricon-help", RICON_HELP},
    {"ricon-hidpi", RICON_HIDPI},
    {"ricon-house", RICON_HOUSE},
    {"ricon-info", RICON_INFO},
    {"ricon-key", RICON_KEY},
    {"ricon-laser", RICON_LASER},
    {"ricon-layers", RICON_LAYERS},
    {"ricon-layers-visible", RICON_LAYERS_VISIBLE},
    {"ricon-lens", RICON_LENS},
    {"ricon-lens-big", RICON_LENS_BIG},
    {"ricon-life-bars", RICON_LIFE_BARS},
    {"ricon-link", RICON_LINK},
    {"ricon-link-boxes", RICON_LINK_BOXES},
    {"ricon-link-broke", RICON_LINK_BROKE},
    {"ricon-link-multi", RICON_LINK_MULTI},
    {"ricon-link-net", RICON_LINK_NET},
    {"ricon-lock-close", RICON_LOCK_CLOSE},
    {"ricon-lock-open", RICON_LOCK_OPEN},
    {"ricon-magnet", RICON_MAGNET},
    {"ricon-mailbox", RICON_MAILBOX},
    {"ricon-mipmaps", RICON_MIPMAPS},
    {"ricon-mode-2d", RICON_MODE_2D},
    {"ricon-mode-3d", RICON_MODE_3D},
    {"ricon-monitor", RICON_MONITOR},
    {"ricon-mutate", RICON_MUTATE},
    {"ricon-mutate-fill", RICON_MUTATE_FILL},
    {"ricon-none", RICON_NONE},
    {"ricon-notebook", RICON_NOTEBOOK},
    {"ricon-ok-tick", RICON_OK_TICK},
    {"ricon-pencil", RICON_PENCIL},
    {"ricon-pencil-big", RICON_PENCIL_BIG},
    {"ricon-photo-camera", RICON_PHOTO_CAMERA},
    {"ricon-photo-camera-flash", RICON_PHOTO_CAMERA_FLASH},
    {"ricon-player", RICON_PLAYER},
    {"ricon-player-jump", RICON_PLAYER_JUMP},
    {"ricon-player-next", RICON_PLAYER_NEXT},
    {"ricon-player-pause", RICON_PLAYER_PAUSE},
    {"ricon-player-play", RICON_PLAYER_PLAY},
    {"ricon-player-play-back", RICON_PLAYER_PLAY_BACK},
    {"ricon-player-previous", RICON_PLAYER_PREVIOUS},
    {"ricon-player-record", RICON_PLAYER_RECORD},
    {"ricon-player-stop", RICON_PLAYER_STOP},
    {"ricon-pot", RICON_POT},
    {"ricon-printer", RICON_PRINTER},
    {"ricon-redo", RICON_REDO},
    {"ricon-redo-fill", RICON_REDO_FILL},
    {"ricon-repeat", RICON_REPEAT},
    {"ricon-repeat-fill", RICON_REPEAT_FILL},
    {"ricon-reredo", RICON_REREDO},
    {"ricon-reredo-fill", RICON_REREDO_FILL},
    {"ricon-resize", RICON_RESIZE},
    {"ricon-rotate", RICON_ROTATE},
    {"ricon-rotate-fill", RICON_ROTATE_FILL},
    {"ricon-rubber", RICON_RUBBER},
    {"ricon-scale", RICON_SCALE},
    {"ricon-shuffle", RICON_SHUFFLE},
    {"ricon-shuffle-fill", RICON_SHUFFLE_FILL},
    {"ricon-special", RICON_SPECIAL},
    {"ricon-square-toggle", RICON_SQUARE_TOGGLE},
    {"ricon-star", RICON_STAR},
    {"ricon-suitcase", RICON_SUITCASE},
    {"ricon-suitcase-zip", RICON_SUITCASE_ZIP},
    {"ricon-symmetry", RICON_SYMMETRY},
    {"ricon-symmetry-horizontal", RICON_SYMMETRY_HORIZONTAL},
    {"ricon-symmetry-vertical", RICON_SYMMETRY_VERTICAL},
    {"ricon-target", RICON_TARGET},
    {"ricon-target-big", RICON_TARGET_BIG},
    {"ricon-target-big-fill", RICON_TARGET_BIG_FILL},
    {"ricon-target-move", RICON_TARGET_MOVE},
    {"ricon-target-move-fill", RICON_TARGET_MOVE_FILL},
    {"ricon-target-point", RICON_TARGET_POINT},
    {"ricon-target-small", RICON_TARGET_SMALL},
    {"ricon-target-small-fill", RICON_TARGET_SMALL_FILL},
    {"ricon-text-a", RICON_TEXT_A},
    {"ricon-text-notes", RICON_TEXT_NOTES},
    {"ricon-text-popup", RICON_TEXT_POPUP},
    {"ricon-text-t", RICON_TEXT_T},
    {"ricon-tools", RICON_TOOLS},
    {"ricon-undo", RICON_UNDO},
    {"ricon-undo-fill", RICON_UNDO_FILL},
    {"ricon-vertical-bars", RICON_VERTICAL_BARS},
    {"ricon-vertical-bars-fill", RICON_VERTICAL_BARS_FILL},
    {"ricon-water-drop", RICON_WATER_DROP},
    {"ricon-wave", RICON_WAVE},
    {"ricon-wave-sinus", RICON_WAVE_SINUS},
    {"ricon-wave-square", RICON_WAVE_SQUARE},
    {"ricon-wave-triangular", RICON_WAVE_TRIANGULAR},
    {"ricon-window", RICON_WINDOW},
    {"ricon-zoom-all", RICON_ZOOM_ALL},
    {"ricon-zoom-big", RICON_ZOOM_BIG},
    {"ricon-zoom-center", RICON_ZOOM_CENTER},
    {"ricon-zoom-medium", RICON_ZOOM_MEDIUM},
    {"ricon-zoom-small", RICON_ZOOM_SMALL},
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

static Janet cfun_GuiFade(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    float alpha = (float) janet_getnumber(argv, 0);
    GuiFade(alpha);                                    // Set gui controls alpha (global state), alpha goes from 0.0f to 1.0f
    return janet_wrap_nil();
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

static Janet cfun_GuiClearTooltip(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    GuiClearTooltip();                                   // Clear any tooltip registered
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
    janet_fixarity(argc, 1);
    Rectangle bounds = jaylib_getrect(argv, 0);
    GuiPanel(bounds);                                                              // Panel control, useful to group controls
    return janet_wrap_nil();
}

static Janet cfun_GuiScrollPanel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    Rectangle content = jaylib_getrect(argv, 1);
    Vector2 scroll = jaylib_getvec2(argv, 2);
    Rectangle result = GuiScrollPanel(bounds, content, &scroll);               // Scroll Panel control
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

static Janet cfun_GuiImageButton(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    Texture2D texture = *jaylib_gettexture2d(argv, 2);
    bool result = GuiImageButton(bounds, text, texture);                   // Image button control, returns true when clicked
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiImageButtonEx(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    Texture2D texture = *jaylib_gettexture2d(argv, 2);
    Rectangle texSource = jaylib_getrect(argv, 3);
    bool result = GuiImageButtonEx(bounds, text, texture, texSource);    // Image button extended control, returns true when clicked
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiToggle(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    bool active = janet_getboolean(argv, 2);
    bool result = GuiToggle(bounds, text, active);                              // Toggle Button control, returns true when active
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiToggleGroup(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int active = janet_getinteger(argv, 2);
    int result = GuiToggleGroup(bounds, text, active);                           // Toggle Group control, returns active toggle index
    return janet_wrap_integer(result);
}

static Janet cfun_GuiCheckBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    bool checked = janet_getboolean(argv, 2);
    bool result = GuiCheckBox(bounds, text, checked);                           // Check Box control, returns true when active
    return janet_wrap_boolean(result);
}

static Janet cfun_GuiComboBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int active = janet_getinteger(argv, 2);
    int result = GuiComboBox(bounds, text, active);                              // Combo Box control, returns selected item index
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

static Janet cfun_GuiTextBoxMulti(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int32_t buffSize = janet_getinteger(argv, 2);
    char *buff = janet_scalloc(sizeof(char), (size_t)(buffSize+1));
    buff = fillBuffer(buff, &buffSize, text);

    bool editMode = janet_getboolean(argv, 3);
    bool result = GuiTextBoxMulti(bounds, buff, buffSize, editMode);              // Text Box control with multiple lines
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
    float result = GuiSlider(bounds, textLeft, textRight, value, minValue, maxValue);       // Slider control, returns selected value
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
    float result = GuiSliderBar(bounds, textLeft, textRight, value, minValue, maxValue);    // Slider Bar control, returns selected value
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
    float result = GuiProgressBar(bounds, textLeft, textRight, value, minValue, maxValue);  // Progress Bar control, shows current progress value
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
    float spacing = janet_getnumber(argv, 1);
    int subdivs = janet_getinteger(argv, 2);
    return jaylib_wrap_vec2(GuiGrid(bounds, spacing, subdivs));                                // Grid control
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
    int result = GuiListView(bounds, text, &scrollIndex, active);            // List View control, returns selected list item index
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
    int result = GuiListViewEx(bounds, text, count, &focus, &scrollIndex, active);      // List View with extended parameters
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

    int result = GuiTextInputBox(bounds, title, message, buttons, buff);   // Text Input Box control, ask for text
    return jaylib_wrap_text_input_box_result(result, buff);
}

static Janet cfun_GuiColorPicker(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    Color color = jaylib_getcolor(argv, 1);
    return jaylib_wrap_color(GuiColorPicker(bounds, color));                                          // Color Picker control (multiple color controls)
}

static Janet cfun_GuiColorPanel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    Color color = jaylib_getcolor(argv, 1);
    return jaylib_wrap_color(GuiColorPanel(bounds, color));                                           // Color Panel control
}

static Janet cfun_GuiColorBarAlpha(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    float alpha = janet_getnumber(argv, 1);
    return janet_wrap_number(GuiColorBarAlpha(bounds, alpha));                                        // Color Bar Alpha control
}

static Janet cfun_GuiColorBarHue(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Rectangle bounds = jaylib_getrect(argv, 0);
    float value = janet_getnumber(argv, 1);
    return janet_wrap_number(GuiColorBarHue(bounds, value));                                          // Color Bar Hue control
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

// gui_textbox_extended.h:

static Janet cfun_GuiTextBoxSetActive(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  Rectangle bounds = jaylib_getrect(argv, 0);
  GuiTextBoxSetActive(bounds);                   // Sets the active textbox
  return janet_wrap_nil();
}

static Janet cfun_GuiTextBoxGetActive(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 0);
  Rectangle result = GuiTextBoxGetActive();                          // Get bounds of active textbox
  return jaylib_wrap_rectangle(result);
}

// 
static Janet cfun_GuiTextBoxSetCursor(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  int cursor = janet_getinteger(argv, 0);
  GuiTextBoxSetCursor(cursor);                         // Set cursor position of active textbox
  return janet_wrap_nil();
}

static Janet cfun_GuiTextBoxGetCursor(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 0);
  int result = GuiTextBoxGetCursor();                                // Get cursor position of active textbox
  return janet_wrap_integer(result);
}

// 
static Janet cfun_GuiTextBoxSetSelection(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  int start = janet_getinteger(argv, 0);
  int length = janet_getinteger(argv, 1);
  GuiTextBoxSetSelection(start, length);           // Set selection of active textbox
  return janet_wrap_nil();
}

static Janet cfun_GuiTextBoxGetSelection(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 0);
  Vector2 result = GuiTextBoxGetSelection();                         // Get selection of active textbox (x - selection start  y - selection length)
  return jaylib_wrap_vec2(result);
}

// 
static Janet cfun_GuiTextBoxIsActive(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  Rectangle bounds = jaylib_getrect(argv, 0);
  bool result = GuiTextBoxIsActive(bounds);                    // Returns true if a textbox control with specified `bounds` is the active textbox
  return janet_wrap_boolean(result);
}

static Janet cfun_GuiTextBoxGetState(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 0);
  //RAYGUIDEF GuiTextBoxState GuiTextBoxGetState();                     // Get state for the active textbox
  return janet_wrap_nil();
}

static Janet cfun_GuiTextBoxSetState(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 0);
  // RAYGUIDEF void GuiTextBoxSetState(GuiTextBoxState state);               // Set state for the active textbox (state must be valid else things will break)
  return janet_wrap_nil();
}

// 
static Janet cfun_GuiTextBoxSelectAll(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  const char *text = jaylib_getcstring(argv, 0);
  GuiTextBoxSelectAll(text);                   // Select all characters in the active textbox (same as pressing `CTRL` + `A`)
  return janet_wrap_nil();
}

static Janet cfun_GuiTextBoxCopy(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  const char *text = jaylib_getcstring(argv, 0);
  GuiTextBoxCopy(text);                        // Copy selected text to clipboard from the active textbox (same as pressing `CTRL` + `C`)
  return janet_wrap_nil();
}

static Janet cfun_GuiTextBoxPaste(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  const char *text = jaylib_getcstring(argv, 0);
  int textSize = janet_getinteger(argv, 1);
  char *buff = janet_scalloc(sizeof(char), (size_t)(textSize+1));
  buff = fillBuffer(buff, &textSize, text);
  void GuiTextBoxPaste(buff, textSize);               // Paste text from clipboard into the textbox (same as pressing `CTRL` + `V`)
  return janet_wrap_nil();
}

static Janet cfun_GuiTextBoxCut(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  const char *text = jaylib_getcstring(argv, 0);
  int buffSize = strlen(text);
  char *buff = janet_scalloc(sizeof(char), (size_t)(buffSize+1));
  buff = fillBuffer(buff, &buffSize, text);
  GuiTextBoxCut(buff);                               // Cut selected text in the active textbox and copy it to clipboard (same as pressing `CTRL` + `X`)
  return janet_cstringv(buff);
}

static Janet cfun_GuiTextBoxDelete(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  const char *text = jaylib_getcstring(argv, 0);
  int length = janet_getinteger(argv, 1);
  bool before = janet_getboolean(argv, 2);

  char *buff = janet_scalloc(sizeof(char), (size_t)(length+1));
  buff = fillBuffer(buff, &length, text);

  int result = GuiTextBoxDelete(buff, length, before);    // Deletes a character or selection before from the active textbox (depending on `before`). Returns bytes deleted.
  return jaylib_wrap_text_input_box_result(result, buff);
}

static Janet cfun_GuiTextBoxGetByteIndex(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  const char *text = jaylib_getcstring(argv, 0);
  int start = janet_getinteger(argv, 1);
  int from = janet_getinteger(argv, 2);
  int to = janet_getinteger(argv, 3);
  int result = GuiTextBoxGetByteIndex(text, start, from, to); // Get the byte index for a character starting at position `from` with index `start` until position `to`.
  return janet_wrap_integer(result);
}

// 
static Janet cfun_GuiTextBoxEx(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  Rectangle bounds = jaylib_getrect(argv, 0);
  const char *text = jaylib_getcstring(argv, 1);
  int textSize = janet_getinteger(argv, 2);
  bool editMode = janet_getboolean(argv, 3);
  char *buff = janet_scalloc(sizeof(char), (size_t)(textSize+1));
  buff = fillBuffer(buff, &textSize, text);
  bool result = GuiTextBoxEx(bounds, buff, textSize, editMode);
  return jaylib_wrap_gui_string(result, buff);
}

static JanetReg gui_cfuns[] = {
    {"gui-disable", cfun_GuiDisable, NULL},
    {"gui-lock", cfun_GuiLock, NULL},
    {"gui-unlock", cfun_GuiUnlock, NULL},
    {"gui-fade", cfun_GuiFade, NULL},
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
    {"gui-clear-tooltip", cfun_GuiClearTooltip, NULL},

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
    {"gui-image-button", cfun_GuiImageButton, NULL},
    {"gui-image-button-ex", cfun_GuiImageButtonEx, NULL},
    {"gui-toggle", cfun_GuiToggle, NULL},
    {"gui-toggle-group", cfun_GuiToggleGroup, NULL},
    {"gui-check-box", cfun_GuiCheckBox, NULL},
    {"gui-combo-box", cfun_GuiComboBox, NULL},
    {"gui-dropdown-box", cfun_GuiDropdownBox, NULL},
    {"gui-spinner", cfun_GuiSpinner, NULL},
    {"gui-value-box", cfun_GuiValueBox, NULL},
    {"gui-text-box", cfun_GuiTextBox, NULL},
    {"gui-text-box-multi", cfun_GuiTextBoxMulti, NULL},
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

// gui_textbox_extended.h:
    {"gui-text-box-set-active", cfun_GuiTextBoxSetActive, NULL},
    {"gui-text-box-get-active", cfun_GuiTextBoxGetActive, NULL},
    {"gui-text-box-set-cursor", cfun_GuiTextBoxSetCursor, NULL},
    {"gui-text-box-get-cursor", cfun_GuiTextBoxGetCursor, NULL},
    {"gui-text-box-set-selection", cfun_GuiTextBoxSetSelection, NULL},
    {"gui-text-box-get-selection", cfun_GuiTextBoxGetSelection, NULL},
    {"gui-text-box-is-active", cfun_GuiTextBoxIsActive, NULL},
    {"gui-text-box-get-state", cfun_GuiTextBoxGetState, NULL},
    {"gui-text-box-set-state", cfun_GuiTextBoxSetState, NULL},
    {"gui-text-box-selectall", cfun_GuiTextBoxSelectAll, NULL},
    {"gui-text-box-copy", cfun_GuiTextBoxCopy, NULL},
    {"gui-text-box-paste", cfun_GuiTextBoxPaste, NULL},
    {"gui-text-box-cut", cfun_GuiTextBoxCut, NULL},
    {"gui-text-box-delete", cfun_GuiTextBoxDelete, NULL},
    {"gui-text-box-get-byte-index", cfun_GuiTextBoxGetByteIndex, NULL},
    {"gui-text-box-ex", cfun_GuiTextBoxEx, NULL},

    {NULL, NULL, NULL}
};