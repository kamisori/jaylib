(use ../build/jaylib)

(set-config-flags :msaa-4x-hint)

(init-window 800 600 "Test Game")
(set-target-fps 60)

(defn get-file [name]
  (if (os/stat (string "test/" name)) (string "test/" name) name))

(def texturefilepath (get-file "lenna.png"))
(def lenna (load-image-1 texturefilepath))
(image-dither lenna 4 4 4 4)
(def lenna-t (load-texture-from-image lenna))
(gen-texture-mipmaps lenna-t)
(def default-material (load-material-default))
(set-material-texture default-material :diffuse lenna-t)

(def cube (let [mesh (gen-mesh-cube 2 2 2)]
            @{:mesh mesh
              :pos [0 0 0]}))

(def shader (load-shader (get-file "test6.vs") (get-file "test6.fs")))
(def time-loc (get-shader-location shader "time"))
(def width-loc (get-shader-location shader "width"))
(def height-loc (get-shader-location shader "height"))
(def freq-loc (get-shader-location shader "freq"))
(def params-loc (get-shader-location shader "params"))

(set-shader-value shader width-loc (get-screen-width) :int)
(set-shader-value shader height-loc (get-screen-height) :int)
(set-shader-value shader freq-loc [25 25] :vec2)
(set-shader-value shader params-loc [5 5 4 4] :vec4)

(def c (camera-3d :target [0 0 0]
                  :up [0 1 0]
                  :fovy 35
                  :type :perspective
                  :position [2 4 6]))
(update-camera c :orbital)

(var time 0)

(while (not (window-should-close))
  (set time (+ time (get-frame-time)))
  (set-shader-value shader time-loc time :float)
  (update-camera c :orbital)

  (begin-drawing)
  (draw-fps 10 10)
  (clear-background :black)

  (begin-mode-3d c)
  (begin-shader-mode shader)

  (let [{:mesh mesh
         :pos p} cube
         [x y z] p
           transform
             [1 0 0 x
              0 1 0 y
              0 0 1 z
              0 0 0 1]]
      (draw-mesh mesh default-material transform))

  (end-shader-mode)
  (end-mode-3d)

  (end-drawing))

(unload-shader shader)
(close-window)
