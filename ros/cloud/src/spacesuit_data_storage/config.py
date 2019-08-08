#!/usr/bin/env python3

from sensor_msgs.msg import Imu

# node name
node_name = "spacesuit_data_storage"

db_index = "raw_data"

# IMU
imu_sensor_name = "imu"

imu_data_topic = {'topic': 'imu',
                  'name': imu_sensor_name,  'type': Imu}

# List of all topics:
topics_list = [
    imu_data_topic,
]
