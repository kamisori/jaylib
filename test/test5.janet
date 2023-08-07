(use jaylib)

(defn- make-window
  "open window with default values" 
  []
  (set-config-flags :msaa-4x-hint)
  (init-window 800 600 "UI Showcase")
  (set-target-fps 60)
  (set-exit-key 0))

(defn load-sprite-texture
  ""
  [path]
  (let [im (load-image-1 path)]
    (image-dither im 4 4 4 4)
    (image-flip-vertical im)
    (let [t (load-texture-from-image im)]
      (gen-texture-mipmaps t)
      t)))

(defn main
  ""
  [& args]
  (make-window)
  (def home (os/cwd))

  (var sprite-texture (load-sprite-texture "./lenna.png"))
  (var alpha-value 0)
  (var hue-value 0)
  (var view @[])
  (var viewScroll @[])
  (var slider-value 0.0)
  (var slider-bar-value 0.0)
  (var progress-bar-value 0.4)
  (var color-picker-value :green)
  (var spinner @{:result {:value 0}
                :editing false})
  (var value-box @{:result {:value 0}
                :editing false})
  (var checkbox-value true)
  (var text-input-box @{:show false
                        :result {:result false
                                 :text "TEXT-INPUT-BOX"}})
  (var text-box
    @{:editing false
      :length 64
      :result {:result false
               :text "TEXT-BOX"}})
  (var multi-text-box
    @{:editing false
      :length 256
      :result {:result false
               :text "MULTI-TEXT-BOX"}})
  (var combo-box-active 0)
  (var dropdown-box-000 @{:result {:value 0}
                          :editing false})
  (var dropdown-box-001 @{:result {:value 0}
                        :editing false})
  (var listview @{:result {:active -1
                           :scrollindex 0}})
  (var listview-ex @{:result {:focus -1
                              :active -1
                              :scrollindex 0}})
  (var toggle-group-active 0)
  (var picked-color :green)
  (var show-message-box false)
  (var exit-window false)

  (while (not exit-window)
    (gui-enable-tooltip)

    (set exit-window
      (window-should-close))

    (when (key-pressed? :escape)
      (set show-message-box (not show-message-box)))

    (when (and (key-down? :left-control)
            (key-pressed? :s))
      (set (text-input-box :show)
        (not (text-input-box :show))))

    (begin-drawing)

    (clear-background
      (get-color
        (gui-get-style
          :default
          :background-color)))

    (set checkbox-value
      (gui-check-box
        [ 25 108 15 15 ]
        "CHECKBOX"
        checkbox-value))

    (gui-set-style
      :textbox
      :text-alignment
      :gui-text-align-center)

    (let [result
          (gui-spinner
            [25 135 125 30]
            "Spinner Label"
            ((spinner :result) :value)
            0 100
            (spinner :editing))]
      (set (spinner :result) result)
      (when ((spinner :result) :result)
        (set (spinner :editing)
          (not (spinner :editing)))))

    (set (value-box :result)
      (gui-value-box
        [25 175 125 30]
        "Value Box Label"
        ((value-box :result) :value)
        0 100
        (value-box :editing)))

    (when ((value-box :result) :result)
      (set (value-box :editing)
        (not (value-box :editing))))

    (gui-set-style
      :textbox
      :text-alignment
      :gui-text-align-left)

    (set (text-box :result)
      (gui-text-box
        [25 215 125 30]
        ((text-box :result) :text)
        (text-box :length)
        (text-box :editing)))

    (when ((text-box :result) :result)
      (set (text-box :editing)
        (not (text-box :editing))))

    (gui-set-style
      :button
      :text-alignment
      :gui-text-align-center)  

    (gui-set-tooltip "Save current file.")
    (when (gui-button 
            [ 25 255 125 30 ]
            (gui-icon-text
              :ricon-file-save
              "Save File"))
      (set (text-input-box :show) true))
    (gui-clear-tooltip)

    (gui-group-box
      [25 310 125 150]
      "STATES")

    (gui-lock) #prevents the following widgets from receiving input until next gui-unlock
    (gui-set-state :gui-state-normal)
    (gui-button [30 320 115 30] "NORMAL")
    (gui-set-state :gui-state-focused)
    (gui-button [30 355 115 30] "FOCUSED")
    (gui-set-state :gui-state-pressed)
    (gui-button [30 390 115 30] "#15#PRESSED")
    (gui-set-state :gui-state-disabled)
    (gui-button [30 425 115 30] "DISABLED")
    (gui-set-state :gui-state-normal)
    (gui-unlock )

    (set combo-box-active
      (gui-combo-box
        [25 470 125 30]
        "ONE;TWO;THREE;FOUR"
        combo-box-active))

    (gui-set-style
      :dropdownbox
      :text-alignment
      :gui-text-align-left)

    (set (dropdown-box-001 :result)
      (gui-dropdown-box
        [25 65 125 20]
        "#01#ONE;#02#TWO;#03#THREE;#04#FOUR"
        ((dropdown-box-001 :result) :value)
        (dropdown-box-001 :editing)))

    (when ((dropdown-box-001 :result) :result)
      (set (dropdown-box-001 :editing)
        (not (dropdown-box-001 :editing))))

    (gui-set-style
      :dropdownbox
      :text-alignment
      :gui-text-align-center)

    (set (dropdown-box-000 :result)
      (gui-dropdown-box
        [25 25 125 20]
        "ONE;TWO;THREE"
        ((dropdown-box-000 :result) :value)
        (dropdown-box-000 :editing)))
    
    (when ((dropdown-box-000 :result) :result)
      (set (dropdown-box-000 :editing)
        (not (dropdown-box-000 :editing))))

    (let [result
          (gui-list-view
            [165 25 140 140]
            "gui-window-box;gui-panel;gui-scroll-panel;gui-group-box;gui-label;gui-button;gui-label-button;gui-image-button;gui-line"
            ((listview :result) :scrollindex)
            ((listview :result) :active))]
      (set (listview :result) result))

    (let [elements                            #well I dont know about that but at
          ["This" "is" "a" "list view" "with" #least we can show tooltips on each
          "disable" "elements" "amazing!"]   #entry via focus
          {:focus prev-focus
          :scrollindex prev-scrollindex
          :active prev-active}
          (listview-ex :result)
          _ (case prev-focus
              0 (gui-set-tooltip "this")
              1 (gui-set-tooltip "isn't")
              2 (gui-set-tooltip "a")
              3 (gui-set-tooltip "list")
              4 (gui-set-tooltip "view")
              5 (gui-set-tooltip "with")
              6 (gui-set-tooltip "disable")
              7 (gui-set-tooltip "elements")
              8 (gui-set-tooltip "amazingly"))
          result
          (gui-list-view-ex
            [165 180 140 200]
            elements
            (length elements)
            prev-focus
            prev-scrollindex
            prev-active)]
      (set (listview-ex :result) result)
      (gui-clear-tooltip))

    (set toggle-group-active
      (gui-toggle-group
        [165 400 140 25]
        "#1#ONE\n#3#TWO\n#8#THREE\n#23#"
        toggle-group-active))

    (let [result
          (gui-text-box-multi
            [320 25 251 140]
            ((multi-text-box :result) :text)
            (multi-text-box :length)
            (multi-text-box :editing))]
      (set (multi-text-box :result) result)
      (when ((multi-text-box :result) :result)
        (set (multi-text-box :editing)
          (not (multi-text-box :editing)))))

    # cursor placement is off by one pixel per line
    # with text-size:10
    #      text-inner-padding:4
    #      border-width:1
    #      text-spacing:1

    (let [size (gui-get-style :default :text-size)
          spacing (gui-get-style :default :text-spacing)
          inner-padding (gui-get-style :textbox :text-inner-padding)
          width (gui-get-style :textbox :border-width)]
      (when (or (key-pressed? :kp-9)
                (key-pressed? :kp-3)
                (key-pressed? :kp-7)
                (key-pressed? :kp-1))
        (print ":text-size:"size
              ":text-inner-padding:" inner-padding
              ":border-width:" width
              ":text-spacing:" spacing)
        (when (key-pressed? :kp-9)
          (gui-set-style :default :text-spacing (+ 1 spacing)))
        (when (key-pressed? :kp-3)
            (gui-set-style :default :text-spacing (- spacing 1)))
        (when (key-pressed? :kp-7)
          (gui-set-style :textbox :border-width (+ 1 width)))
        (when (key-pressed? :kp-1)
            (gui-set-style :textbox :border-width (- width 1)))))

    (set slider-value
      (gui-slider
        [375 400 165 20]
        "SLIDER"
        (string slider-value)
        slider-value
        -50 100))

    (set slider-bar-value
      (gui-slider-bar
        [375 430 200 20]
        "SLIDERBAR"
        (string slider-bar-value)
        slider-bar-value
        0 100))

    (set progress-bar-value
      (gui-progress-bar
        [375 460 200 20]
        "PROGRESS"
        "BAR"
        progress-bar-value
        0 1))

    (gui-status-bar
      [0 (- (get-screen-height) 20)
        (get-screen-width) 20]
      "This is a status bar")

    (set alpha-value
      (gui-color-bar-alpha
        [320 490 200 30]
        alpha-value))

    (set hue-value
      (gui-color-bar-hue
        [320 530 200 30]
        hue-value))
    
    (when show-message-box
      (draw-rectangle 0 0 (get-screen-width) (get-screen-height) (fade :ray-white 0.8))
      (var result 
          (gui-message-box
            [(- (/ (get-screen-width) 2) 125)
            (- (/ (get-screen-height) 2) 50)
            250 100 ]
            "Close Window" #(gui-icon-text :ricon-exit "Close Window")
            "Do you really want to exit?"
            "Yes;No"))
      (if (or (= result 0)
              (= result 2))
          (set show-message-box false)
          (when (= result 1)
              (set exit-window true))))

    (when (text-input-box :show)
      (draw-rectangle 0 0 (get-screen-width) (get-screen-height) (fade :ray-white 0.8))
      (set (text-input-box :result)
          (gui-text-input-box
            [(- (/ (get-screen-width) 2) 120)
            (- (/ (get-screen-height) 2) 60)
            240 140 ]
            (gui-icon-text :ricon-file-save "Save file as...")
            "Introduce a save file name"
            "Ok;Cancel"
            ((text-input-box :result) :text)))

      (when (or (= ((text-input-box :result) :result) 0)
                (= ((text-input-box :result) :result) 1)
                (= ((text-input-box :result) :result) 2))
        (set (text-input-box :show) false)))

    (case ((listview :result) :active)
      0 (gui-window-box [200 10 500 500] "PORTABLE WINDOW")
      1 (gui-panel [200 10 500 500] )
      2 (gui-scroll-panel [200 10 200 200] [0 0 495 495] [0 0])
      3 (gui-group-box [200 10 200 200] "GROUP BOX")
      4 (gui-label [ 200 10 15 15 ] "LABEL")
      5 (gui-button [ 200 10 75 25 ] "BUTTON")
      6 (gui-label-button [ 200 10 75 25 ] "LABEL BUTTON")
      7 (gui-image-button [ 200 10 512 512 ] "IMAGE BUTTON" sprite-texture)
      8 (gui-line [ 200 10 150 15 ] "LINE"))

    (gui-unlock)
    (end-drawing))
  (unload-texture sprite-texture)
  (close-window))

(main)
(os/exit)