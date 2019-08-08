#!/usr/bin/env python

import rospy
import datetime
import os
import config
import yaml
from time import time


def get_date():
    now = datetime.datetime.now()
    return now.strftime("%Y/%b/%d/")


def get_time():
    now = datetime.datetime.now()
    return now.strftime("%H_%M_%S/")


def check_dirs():
    date = get_date()
    user_dir = get_user_dir()
    curr_time = get_time()
    for topic in config.topics_list:
        filepath = user_dir + date + curr_time + topic['name']
        if not os.path.exists(filepath):
            os.makedirs(filepath)


def get_user_dir():
    config_path = rospy.get_param('~config_path')
    data_path = rospy.get_param('~data_path')
    with open(config_path, 'r') as f:
        meta_data = yaml.safe_load(f)
    return data_path + '/data/' + meta_data["name"] + '/'


def save_meta_data(path, start_time, time_formatted):
    record_time = time() - start_time
    config_path = rospy.get_param('~config_path')
    msg = rospy.get_param('~message')
    with open(config_path, 'r') as f:
        yaml_data = yaml.safe_load(f)
    meta_data = {'name': yaml_data["name"], 'message': msg, 'location': yaml_data["location"], 'type': yaml_data["type"],
                 'date': get_date(), 'start_time': time_formatted, 'total_time': str(record_time)}
    with open(path + 'meta_data.yaml', 'w') as f:
        yaml.dump(meta_data, f, default_flow_style=False)
