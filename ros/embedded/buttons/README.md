# buttons

button input for suit

## setup

- run `roscore` on ros_master machine on the network. get the ip address for that machine
- record that ip address in the `include/config.h` file, along with the other params listed in the sample
- run `rosrun rosserial_python serial_node.py tcp` to run the rosserial over tcp, connecting to the esp32
- upload the script to the esp32 and start it
- run `rostopic list` and `rostopic echo <topic name>` to see the data outputted on ros
