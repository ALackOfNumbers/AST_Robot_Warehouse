import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

#Import custom messages
import messages_package.msg as mpmsg

class Beacon(Node):

    def __init__(self, beacon_number):
        #Calls the node classes contructor and passes a node name
        super().__init__('beacon_instance')

        #Define the beacon's serial number
        self.serial_number = beacon_number

        #Create a callback group
        self.callback_group = ReentrantCallbackGroup()

        #Create a publisher for the beacon distance
        self.publisher_ = self.create_publisher(mpmsg.RobotDistance, 'beacon_distance', 10)

        #Period defined for the timer
        timer_period = 0.5  # seconds
        #Timer is created with a callback that is executed every 0.5 seconds, and the callback is assigned the callback group
        self.timer = self.create_timer(timer_period, self.timer_callback,callback_group=self.callback_group)

        #Iterator used in the callback
        self.i = 0.0

    #Callback from the timer
    def timer_callback(self):
        '''
        The beacon gets the distance of a particular robot from the map, then calculates the distance using the Pythagorian theorem.
        '''

        #TODO publish correct beacon distance

        #Publish test message
        #Create message
        msg = mpmsg.RobotDistance()
        #Assign values to the message
        msg.robot_number = 1
        msg.robot_distance = 0.0+self.i
        msg.beacon_number = self.serial_number
        #Publish the message
        self.publisher_.publish(msg)
        #Log the message that was published
        self.get_logger().info('Transmitting distance: "%i"' % msg.robot_distance )

        #Create message
        msg = mpmsg.RobotDistance()
        #Assign values to the message
        msg.robot_number = 2
        msg.robot_distance = 0.4+self.i
        msg.beacon_number = self.serial_number
        #Publish the message
        self.publisher_.publish(msg)
        #Log the message that was published
        self.get_logger().info('Transmitting distance: "%i"' % msg.robot_distance )
        #Increase the iterator value
        self.i += 1


def main(args=None):
    #Initialize rclpy
    rclpy.init(args=args)

    #Get user input for the robot serial number
    print("Enter beacon serial number:")
    serial_number = input()
    #Create the node
    beacon_instance = Beacon(int(serial_number))
    #Create a multithreading executor
    executor = MultiThreadedExecutor()

    #"Spins" the node so callbacks are called
    rclpy.spin(beacon_instance, executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    beacon_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
