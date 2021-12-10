import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

#Import custom messages
import messages_package.msg as mp

class Robot(Node):

    def __init__(self, robot_number):
        super().__init__('robot_instance')

        #Define the robots serial number
        self.serial_number = robot_number
        #Define the robots starting state
        self.state = 'idle'

        #Create a callback group
        self.callback_group = ReentrantCallbackGroup()

        #Create subscriber for the distance from the beacon
        self.subscriber_beacon = self.create_subscription(
            mp.RobotDistance,
            'beacon_distance',
            self.listener_callback_beacon,
            10,
            callback_group=self.callback_group)
        #Create a subscriber for the map
        self.subscriber_map = self.create_subscription(
            mp.Map,
            'map',
            self.listener_callback_map,
            10,
            callback_group=self.callback_group)

        #Create a publisher for the robot's location
        self.publisher_location = self.create_publisher(mp.RobotLocation, 'robot_location', 10)
        #Create a publisher for the robot's state
        self.publisher_state = self.create_publisher(mp.RobotState, 'robot_state', 10)

        #Period defined for the timer
        timer_period = 5 # seconds
        #Timer is created with a callback that is executed every 0.5 seconds, and the callback is assigned the callback group
        self.timer = self.create_timer(timer_period, self.timer_callback,callback_group=self.callback_group)

        #Iterator used in the callback
        self.i = 0

    def timer_callback(self):
        '''
        The timer callback publishs the robot's state.
        '''
        #Create message
        msg = mp.RobotState()
        #Assign values to the emssage
        msg.robot_number = self.serial_number
        msg.robot_state = self.state
        #Publish the message
        self.publisher_state.publish(msg)
        #Log that the message was published
        self.get_logger().info('%f %f'% (msg.robot_location.x,msg.robot_location.y))

    #Listener callback for the beacon distance
    def listener_callback_beacon(self, msg):
        '''
        The beacon distance listener callback should publish the robots coordinates. The coordinates do not need to be published with the timer. The formula should be hardcoded.
        '''
        if msg.robot_number == self.serial_number:
            self.get_logger().info('Beacon numer: "%i" Distance: %f' % (msg.beacon_number, msg.robot_distance))

            #TODO publish correct robot location

            #Publish test message
            #Create message
            msg = mp.RobotLocation()
            #Assign values to the message
            msg.robot_number = self.serial_number
            msg.robot_location = mp.Coordinates(x = 13.58+self.i, y = 27.62+self.i)
            #Publish the message
            self.publisher_location.publish(msg)
            #Log the message that was published
            self.get_logger().info('%f'% msg.robot_location.x)
            self.get_logger().info('%f'% msg.robot_location.y)
            #Increase the iterator value
            self.i += 1

    #Listener callback for the map
    def listener_callback_map(self,msg):
        None


def main(args=None):
    #Initialize rcply
    rclpy.init(args=args)

    #Get user input for the robot serial number
    print("Enter robot serial number:")
    serial_number = input()
    #Create the node
    robot_instance = Robot(int(serial_number))
    #Create a multithreading executor
    executor = MultiThreadedExecutor()

    #"Spins" the node so callbacks are called
    rclpy.spin(robot_instance, executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    robot_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
