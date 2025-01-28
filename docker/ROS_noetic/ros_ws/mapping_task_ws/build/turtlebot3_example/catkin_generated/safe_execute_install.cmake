execute_process(COMMAND "/ros_ws/mapping_task_ws/build/turtlebot3_example/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/ros_ws/mapping_task_ws/build/turtlebot3_example/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
