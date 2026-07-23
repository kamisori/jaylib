(use jaylib)
(use spork/test)

(assert-error
    "wrong flag did not error set-config-flags"
    (set-config-flags
      :borderless-windowed-mode
      :fullscreen-mode
      :interlaced-hint
      :msaa-4x-hint
      :vsync-hint
      :window-always-run
      :window-hidden
      :window-highdpi
      :window-maximized
      :window-minimized
      :foo
      :window-mouse-passthrough
      :window-resizable
      :window-topmost
      :window-transparent
      :window-undecorated
      :window-unfocused))

(assert-error
    "wrong flag did not error rl-matrix-mode"
    (rl-matrix-mode :foo))

(assert-no-error
    (set-config-flags
      :borderless-windowed-mode
      :fullscreen-mode
      :interlaced-hint
      :msaa-4x-hint
      :vsync-hint
      :window-always-run
      :window-hidden
      :window-highdpi
      :window-maximized
      :window-minimized
      :window-mouse-passthrough
      :window-resizable
      :window-topmost
      :window-transparent
      :window-undecorated
      :window-unfocused)
    "could not set config flags")

(assert-no-error
    (rl-matrix-mode :rl-modelview)
    "could not set rl-modelview")

(assert-no-error
    (rl-matrix-mode :rl-projection)
    "could not set rl-projection")

(assert-no-error
    (rl-matrix-mode :rl-texture)
    "could not set rl-texture")