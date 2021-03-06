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
from std_msgs.msg import String
import messages_package.msg as mp

class Warehouse(Node):

    def __init__(self):
        #Calls the node classes contructor and passes a node name
        super().__init__('warehouse_instance')
        #Declares self as a publisher that publishes String messages to the 'topic' topic with a queue size of 10
        #Queue size is a QoS setting that limits the amount of queued messafe if a subscriber is not receiving them fast enough
        self.publisher_ = self.create_publisher(mp.Map, 'map', 10)
        #Period defined for the timer
        timer_period = 3  # seconds
        #Timer is created with a callback that is executed every 0.5 seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        #Iterator used in the callback
        self.i = 0

        self.subscriber_location = self.create_subscription(
            mp.RobotLocation,
            'robot_location',
            self.listener_callback_location,
            10)

        self.subscriber_state = self.create_subscription(
            String,
            'robot_state',
            self.listener_callback_state,
            10)
        

    #Callback from the timer
    def timer_callback(self):
        #Create message string
        msg = mp.Map()
        #Add data to the string
        row1 = mp.Row(row = '-----')
        row2 = mp.Row(row = '|R[]|')
        row3 = mp.Row(row = '| C |')
        row4 = mp.Row(row = '|D D|')
        row5 = mp.Row(row = '-----')
        msg.map_array = [row1,row2,row3,row4,row5]
        #Publish the message
        self.publisher_.publish(msg)
        #Log the message that was published
        self.get_logger().info('%s' % msg.map_array)
        #Increase the iterator value
        self.i += 1

    def listener_callback_location(self, msg):
        self.get_logger().info('Robot number: %i"' % msg.robot_number)
        self.get_logger().info('X coordinate: %f"' % msg.robot_location.x)
        self.get_logger().info('Y coordinate: %f"' % msg.robot_location.y)
    
    def listener_callback_state(self, msg):
        self.get_logger().info('Robot state: %s' % msg.data)

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
