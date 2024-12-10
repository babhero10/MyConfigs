;; Auto-generated. Do not edit!


(when (boundp 'ros1_msgs_srvs::Int8)
  (if (not (find-package "ROS1_MSGS_SRVS"))
    (make-package "ROS1_MSGS_SRVS"))
  (shadow 'Int8 (find-package "ROS1_MSGS_SRVS")))
(unless (find-package "ROS1_MSGS_SRVS::INT8")
  (make-package "ROS1_MSGS_SRVS::INT8"))

(in-package "ROS")
;;//! \htmlinclude Int8.msg.html


(defclass ros1_msgs_srvs::Int8
  :super ros::object
  :slots (_data ))

(defmethod ros1_msgs_srvs::Int8
  (:init
   (&key
    ((:data __data) 0)
    )
   (send-super :init)
   (setq _data (round __data))
   self)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; int8 _data
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _data
       (write-byte _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _data
     (setq _data (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _data 127) (setq _data (- _data 256)))
   ;;
   self)
  )

(setf (get ros1_msgs_srvs::Int8 :md5sum-) "27ffa0c9c4b8fb8492252bcad9e5c57b")
(setf (get ros1_msgs_srvs::Int8 :datatype-) "ros1_msgs_srvs/Int8")
(setf (get ros1_msgs_srvs::Int8 :definition-)
      "int8 data

")



(provide :ros1_msgs_srvs/Int8 "27ffa0c9c4b8fb8492252bcad9e5c57b")


