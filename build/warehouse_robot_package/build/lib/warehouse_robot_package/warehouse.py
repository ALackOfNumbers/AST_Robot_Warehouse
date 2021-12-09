# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node

#Imports string message type. We will import our own message types from our message package
from messages_package import Map


class Warehouse(Node):

    def __init__(self):
        #Calls the node classes contructor and passes a node name
        super().__init__('warehouse_instance')
        #Declares self as a publisher that publishes String messages to the 'topic' topic with a queue size of 10
        #Queue size is a QoS setting that limits the amount of queued messafe if a subscriber is not receiving them fast enough
        self.publisher_ = self.create_publisher(Map, 'map', 10)
        #Period defined for the timer
        timer_period = 0.5  # seconds
        #Timer is created with a callback that is executed every 0.5 seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        #Iterator used in the callback
        self.i = 0

    #Callback from the timer
    def timer_callback(self):
        #Create message string
        msg = Map()
        #Add data to the string, which is hello world and the iterator int
        msg.map_array = '-----\n |R[]|\n| C |\n|D D|\n-----'
        #Publish the message
        self.publisher_.publish(msg)
        #Log the message that was published
        self.get_logger().info('%s' % msg.map_array)
        #Increase the iterator value
        self.i += 1


def main(args=None):
    #Initializes rclpy
    rclpy.init(args=args)
    #Creates the node
    warehouse_instance = Warehouse()
    #"Spins" the node to callbacks are called
    rclpy.spin(warehouse_instance)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    warehouse_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
