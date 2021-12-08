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

from messages_package.msg import RobotDistance

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        #Topic name and message type must match between publisher and subscriber
        self.subscription = self.create_subscription(
            RobotDistance,
            'topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.serial_number = 5

    #Listener callback is called as soon as a message is received
    def listener_callback(self, msg):
        if msg.robot_number == self.serial_number:
            self.get_logger().info('Beacon distance: "%s"' % msg.robot_distance)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
