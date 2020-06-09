(use ./build/jaylib)

(defn print-pairs
  [x]
  (loop [[k v] :pairs x]
  (if (or (table? v) (tuple? v))
    (do (printf "[%v]:" k)
        (print-pairs v))
    (printf "[%v]=%v" k v))))

(defn test
  [label &opt test-candidate params]
  (print label)
  (cond 
    (and (not= test-candidate nil) (or (array? params) (tuple? params)))
    (if-let [result (test-candidate (splice params))]
      (print-pairs result)
      (print "returned nil"))
    (and (not= test-candidate nil) (= params nil))
    (if-let [result (test-candidate)]
        (print-pairs result)
        (print "returned nil"))))

(set-config-flags :msaa-4x-hint)

(init-window 800 600 "Test Game")
(set-target-fps 60)

(def lenna (load-image-1 "test/lenna.png"))
(image-dither lenna 4 4 4 4)
(def lenna-t (load-texture-from-image lenna))
(gen-texture-mipmaps lenna-t)

(def c (camera-3d :target [0 3 0]
                  :up [0 1 0]
                  :fovy 60
                  :type :perspective
                  :position [6 3 6]))

(set-camera-mode c :orbital)

(while (not (window-should-close))
  (update-camera c)
  (begin-drawing)
  (clear-background :black)
  
  (begin-mode-3d c)
  (draw-gizmo [0 0 0])

  (test "Testing newly implemented CAPI from Jaylib")
  (test "get-mouse-position:" get-mouse-position)
  (test "get-mouse-ray:" get-mouse-ray [(get-mouse-position) c])
  (test "get-world->screen"
        get-world->screen
        [((get-mouse-ray (get-mouse-position) c) 0)
          c])
  (test "get-camera-matrix" get-camera-matrix c)
  (test "color->int" color->int :green)
  (test "color-normalize" color-normalize :green)
  (test "color->HSV" color->HSV :green)
  (test "color<-HSV (color->HSV :green)" color<-HSV [(color->HSV :green)])
  (test "get-color 0xffffff" get-color [0xffffff])
  (test "fade :green 0.5" fade [:green 0.5])
  
  #need to make a rectangle named source
#  (test "set-shapes-texture" set-shapes-texture [lenna-t source])
#  (test "check-collision-recs" check-collision-recs [Rectangle rec1, Rectangle rec2])
#  (test "check-collision-circles" check-collision-circles [Vector2 center1, float radius1, Vector2 center2, float radius2])
#  (test "check-collision-circle-rec" check-collision-circle-rec [Vector2 center, float radius, Rectangle rec])
#  (test "get-collision-rec" get-collision-rec [Rectangle rec1, Rectangle rec2])
#  (test "check-collision-point-rec" check-collision-point-rec [Vector2 point, Rectangle rec])
#  (test "check-collision-point-circle" check-collision-point-circle [Vector2 point, Vector2 center, float radius])
#  (test "check-collision-point-triangle" check-collision-point-triangle [Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3])
  (test "load-model" load-model ["test/turret.obj"])
  (test "load-texture" load-texture ["test/turret_diffuse.png"])
  #(let [model (load-model "test/turret.obj")]
  #  (test "draw-model" draw-model [model [2 2 2] 1.0 :white]))
  #(let [model (load-model "test/turret.obj")
  #      material (load-material-default)
  #      texture (load-texture "test/turret_diffuse.png")]
  #  (set-material-texture material :map-diffuse texture)
  #  (print "(get model :materials)")
  #  (print (get model :materials))
  #  (print "(put model :materials [material])")
  #  (print (put model :materials [material]))
  #  (test "draw-model" draw-model [model [2 2 2] 1.0 :white]))
  #(let [model (load-model "test/turret.obj")
  #      texture (load-texture "test/turret_diffuse.png")]
  #  (set-model-texture model 0 :map-diffuse texture)
  #  (test "draw-model" draw-model [model [2 2 2] 1.0 :white]))
  
  (each x [1 2.4 3.3 3.9 4.4 5]
    (def s (/ 2 x))
    (draw-cube-texture lenna-t [2 x 2] s s 0.125 :white))

  (end-mode-3d)

  (end-drawing))

(close-window)
