;; Auto-generated. Do not edit!


(when (boundp 'ros1_msgs_srvs::Int16)
  (if (not (find-package "ROS1_MSGS_SRVS"))
    (make-package "ROS1_MSGS_SRVS"))
  (shadow 'Int16 (find-package "ROS1_MSGS_SRVS")))
(unless (find-package "ROS1_MSGS_SRVS::INT16")
  (make-package "ROS1_MSGS_SRVS::INT16"))

(in-package "ROS")
;;//! \htmlinclude Int16.msg.html


(defclass ros1_msgs_srvs::Int16
  :super ros::object
  :slots (_data ))

(defmethod ros1_msgs_srvs::Int16
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
    ;; int16 _data
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _data
       (write-word _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _data
     (setq _data (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get ros1_msgs_srvs::Int16 :md5sum-) "8524586e34fbd7cb1c08c5f5f1ca0e57")
(setf (get ros1_msgs_srvs::Int16 :datatype-) "ros1_msgs_srvs/Int16")
(setf (get ros1_msgs_srvs::Int16 :definition-)
      "int16 data

")



(provide :ros1_msgs_srvs/Int16 "8524586e34fbd7cb1c08c5f5f1ca0e57")


