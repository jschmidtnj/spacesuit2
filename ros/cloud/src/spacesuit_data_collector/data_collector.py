#!/usr/bin/env python

"""
Trigger to run data collector to save data from sensors
"""

import rospy
import config
import core
from time import time
import util

def main():
    rospy.init_node(config.node_name)
    dc = core.DataCollector()
    # Collect data (see core.py)
    start_time = time()
    time_formatted = util.get_time()
    rospy.loginfo('Data Collector : Starting Collection of Data')
    rospy.spin()
    path = dc.user_dir + dc.date + dc.curr_time
    util.save_meta_data(path, start_time, dc.curr_time)
    rospy.loginfo('Data Collector : done')


if __name__=="__main__":
    main()
