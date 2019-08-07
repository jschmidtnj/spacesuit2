#!/usr/bin/env python

"""
Trigger to run data storage to store data in database
"""

import rospy
import config
import core

def main():
    rospy.init_node(config.node_name)
    dc = core.DataCollector()
    # Store data (see core.py)
    rospy.loginfo('Data Storage: Starting Data Storage')
    rospy.spin()


if __name__=="__main__":
    main()
