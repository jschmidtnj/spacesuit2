#!/usr/bin/env/ python

"""
subscribe to sensor topics and get data for remote storage
"""

import rospy
import config
import message_filters
from pymongo import MongoClient


class DataCollector(object):

    def __init__(self):
        connection_uri = rospy.get_param('~connection_uri')
        if len(connection_uri) == 0:
            raise RuntimeError("no connection uri provided")
        client = MongoClient(connection_uri)
        self.suit_name = rospy.get_param('~suit_name')
        self.db = client.sensor_data
        # Subscribe to topics and register call backs
        for topic in config.topics_list:
            common_sub = message_filters.Subscriber(
                topic['topic'], topic['type'])
            common_sub.registerCallback(self._store_data, topic['name'])

    def _store_data(self, data, topic_name):
        json_data = {
            'data': data
        }
        result = self.db[config.db_index][self.suit_name][topic_name].insert_one(json_data)
        rospy.loginfo('added {} to index {}'.format(result.inserted_id, config.db_index))
