import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

import messages_package.msg as mp

class OrderConsole(Node):

    def __init__(self):
        super().__init__('order_console_instance')

        #Create a callback group
        self.callback_group = ReentrantCallbackGroup()

        #Create a subscriber for the map
        self.subscription = self.create_subscription(
            mp.Map,
            'map',
            self.listener_callback,
            10,
            callback_group=self.callback_group)

    #Listener callback for the map
    def listener_callback(self, msg):
        for row in msg.map_array:
            #self.get_logger().info('%s' %row)
            print(row.row)
            


def main(args=None):
    #Initializes rclpy
    rclpy.init(args=args)

    #Create the node
    order_console_instance = OrderConsole()
    #Create a multithreading executor
    executor = MultiThreadedExecutor()

    #"Spins" the node so callbacks are called
    rclpy.spin(order_console_instance, executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    order_console_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
