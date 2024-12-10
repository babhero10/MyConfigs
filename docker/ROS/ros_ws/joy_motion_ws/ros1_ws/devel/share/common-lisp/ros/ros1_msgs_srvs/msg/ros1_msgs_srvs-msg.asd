
(cl:in-package :asdf)

(defsystem "ros1_msgs_srvs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Int16" :depends-on ("_package_Int16"))
    (:file "_package_Int16" :depends-on ("_package"))
    (:file "Int8" :depends-on ("_package_Int8"))
    (:file "_package_Int8" :depends-on ("_package"))
  ))