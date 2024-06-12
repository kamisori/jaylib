(use ../build/jaylib)

(set-config-flags :msaa-4x-hint)

(init-window 800 600 "Test Game")
(set-target-fps 60)

(def texturefilepath (if (os/stat "test/lenna.png") "test/lenna.png" "lenna.png"))
(def lenna (load-image-1 texturefilepath))
(image-dither lenna 4 4 4 4)
(def lenna-t (load-texture-from-image lenna))
(gen-texture-mipmaps lenna-t)

(def default-material (load-material-default))
(set-material-texture default-material :diffuse lenna-t)

(def cubes (map |(let [s (/ 2 $0)
                             mesh (gen-mesh-cube s s s)]
                          @{:mesh mesh
                            :posy $0})
                      [1 2.4 3.3 3.9 4.4 5]))

(def c (camera-3d :target [0 3 0]
                  :up [0 1 0]
                  :fovy 60
                  :type :perspective
                  :position [6 3 6]))

(while (not (window-should-close))
  (update-camera c :orbital)
  (begin-drawing)
  (clear-background :black)
  
  (begin-mode-3d c)
  (each c cubes
    (let [{:mesh mesh
           :posy y} c
           transform
             [1 0 0 2
              0 1 0 y
              0 0 1 2
              0 0 0 1]]
      (draw-mesh mesh default-material transform)))

  (end-mode-3d)

  (end-drawing))

(each c cubes
    (let [{:mesh mesh} c]
      (unload-mesh mesh)))
(unload-material default-material)
(unload-texture lenna-t)
(unload-image lenna)
(close-window)
