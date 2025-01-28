#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/ros_ws/mapping_task_ws/src/turtlebot3/turtlebot3_example"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/ros_ws/mapping_task_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/ros_ws/mapping_task_ws/install/lib/python3/dist-packages:/ros_ws/mapping_task_ws/build/turtlebot3_example/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/ros_ws/mapping_task_ws/build/turtlebot3_example" \
    "/usr/bin/python3" \
    "/ros_ws/mapping_task_ws/src/turtlebot3/turtlebot3_example/setup.py" \
     \
    build --build-base "/ros_ws/mapping_task_ws/build/turtlebot3_example" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/ros_ws/mapping_task_ws/install" --install-scripts="/ros_ws/mapping_task_ws/install/bin"
