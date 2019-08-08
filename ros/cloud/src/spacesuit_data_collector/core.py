#!/usr/bin/env python3

"""
subscribe to sensor topics and get data for local storage
"""

import rospy
import config
import message_filters
import pickle
import util


class DataCollector(object):

    def __init__(self):
        self.date = util.get_date()
        self.curr_time = util.get_time()
        util.check_dirs()
        self.user_dir = util.get_user_dir()
        # Subscribe to topics and register call backs
        for topic in config.topics_list:
            common_sub = message_filters.Subscriber(
                topic['topic'], topic['type'])
            common_sub.registerCallback(self._download_data, topic['name'] + "/download/")

    def _download_data(self, data, topic_name):
        with open(self.user_dir + self.date + self.curr_time + topic_name + 'data.dat', 'ab') as f:
            pickle.dump(data, f)
