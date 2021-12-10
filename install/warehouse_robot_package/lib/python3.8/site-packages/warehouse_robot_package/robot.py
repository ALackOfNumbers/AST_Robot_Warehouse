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

import messages_package.msg as mp
from std_msgs.msg import String

class Robot(Node):

    def __init__(self):
        super().__init__('robot_instance')
        #Topic name and message type must match between publisher and subscriber
        self.subscriber_beacon = self.create_subscription(
            mp.RobotDistance,
            'beacon_distance',
            self.listener_callback_beacon,
            10)
        self.subscriber_map = self.create_subscription(
            mp.Map,
            'map',
            self.listener_callback_map,
            10)
        self.publisher_location = self.create_publisher(mp.RobotLocation, 'robot_location', 3)
        self.publisher_state = self.create_publisher(String, 'robot_state', 10)
        timer_period = 5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        #Iterator used in the callback
        self.i = 0
        self.serial_number = 5

    def timer_callback(self):
        #Create message string
        msg = mp.RobotLocation()
        msg.robot_number = self.serial_number
        msg.robot_location = mp.Coordinates(x = 13.58+self.i, y = 27.62+self.i)
        self.publisher_location.publish(msg)
        #Log the message that was published
        self.get_logger().info('%f %f'% (msg.robot_location.x,msg.robot_location.y))
        #self.get_logger().info('%f'% msg.robot_location.y)

        msg = String()
        msg.data = 'Idle'
        self.publisher_state.publish(msg)
        self.get_logger().info('State: %s'% msg.data)
        #Increase the iterator value
        self.i += 1

    #Listener callback is called as soon as a message is received
    def listener_callback_beacon(self, msg):
        if msg.robot_number == self.serial_number:
            self.get_logger().info('Beacon distance: "%s"' % msg.robot_distance)

    def listener_callback_map(self,msg):
        for row in msg.map_array:
            self.get_logger().info('%s' %row)


def main(args=None):
    rclpy.init(args=args)

    robot_instance = Robot()

    rclpy.spin(robot_instance)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    robot_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
