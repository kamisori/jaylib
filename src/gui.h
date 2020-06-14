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

static Janet cfun_GuiDropdownBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int active = janet_getinteger(argv, 2);
    bool editMode = janet_getboolean(argv, 3);
    return janet_wrap_boolean(GuiDropdownBox(bounds, text, active, editMode));  // Dropdown Box control, returns selected item
}

static Janet jaylib_wrap_gui_integer(bool result, int value) {
    JanetKV *g_r = janet_struct_begin(2);
    janet_struct_put(g_r, janet_ckeywordv("result"), janet_wrap_boolean(result));
    janet_struct_put(g_r, janet_ckeywordv("value"), janet_wrap_integer(value));
    return janet_wrap_struct(janet_struct_end(g_r));
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

static Janet jaylib_wrap_gui_string(bool result, const char *value) {
    JanetKV *g_r = janet_struct_begin(2);
    janet_struct_put(g_r, janet_ckeywordv("result"), janet_wrap_boolean(result));
    janet_struct_put(g_r, janet_ckeywordv("value"), janet_wrap_string(value));
    return janet_wrap_struct(janet_struct_end(g_r));
}

static Janet cfun_GuiTextBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    char *text = jaylib_getcstring(argv, 1);
    int textSize = janet_getinteger(argv, 2);
    bool editMode = janet_getboolean(argv, 3);
    bool result = GuiTextBox(bounds, text, textSize, editMode);                   // Text Box control, updates input text
    return jaylib_wrap_gui_string(result, text);
}

static Janet cfun_GuiTextBoxMulti(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int textSize = janet_getinteger(argv, 2);
    bool editMode = janet_getboolean(argv, 3);
    bool result = GuiTextBoxMulti(bounds, text, textSize, editMode);              // Text Box control with multiple lines
    return jaylib_wrap_gui_string(result, text);
}

static Janet cfun_GuiSlider(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *textLeft = jaylib_getcstring(argv, 1);
    const char *textRight = jaylib_getcstring(argv, 2);
    float value = janet_getnumber(argv, 3);
    float minValue = janet_getnumber(argv, 4);
    float maxValue = janet_getnumber(argv, 5);
    bool editMode = janet_getboolean(argv, 6);
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
    bool editMode = janet_getboolean(argv, 6);
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
    bool editMode = janet_getboolean(argv, 6);
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


// Advance controls set
static Janet cfun_GuiListView(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int scrollIndex = 0;
    int active = janet_getinteger(argv, 2);
    int result = GuiListView(bounds, text, &scrollIndex, active);            // List View control, returns selected list item index
    return janet_wrap_integer(result);
}

static Janet cfun_GuiListViewEx(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    int count = janet_getinteger(argv, 2);
    int focus = janet_getinteger(argv, 3);
    int scrollIndex = janet_getinteger(argv, 4);
    int active = janet_getinteger(argv, 5);
    int result = GuiListViewEx(bounds, text, count, focus, scrollIndex, active);      // List View with extended parameters
    return janet_wrap_integer(result);
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

static Janet cfun_GuiTextInputBox(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Rectangle bounds = jaylib_getrect(argv, 0);
    const char *title = jaylib_getcstring(argv, 1);
    const char *message = jaylib_getcstring(argv, 2);
    const char *buttons = jaylib_getcstring(argv, 3);
    const char *text = jaylib_getcstring(argv, 4);
    int result = GuiTextInputBox(bounds, title, message, buttons, text);   // Text Input Box control, ask for text
    return janet_wrap_integer(result);
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
    int iconId = janet_getinteger(argv, 0);
    const char *text = jaylib_getcstring(argv, 1);
    return janet_wrap_string(GuiIconText(iconId, text)); // Get text with icon id prepended (if supported)
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
    {NULL, NULL, NULL}
};