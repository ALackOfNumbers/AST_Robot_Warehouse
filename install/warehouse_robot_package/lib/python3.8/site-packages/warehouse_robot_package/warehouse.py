import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

#Import custom messages
import messages_package.msg as mp

class Warehouse(Node):

    def __init__(self):
        #Calls the node classes contructor and passes a node name
        super().__init__('warehouse_instance')

        #Create a callback group
        self.callback_group = ReentrantCallbackGroup()

        #Create subscriber for the robot locations
        self.subscriber_location = self.create_subscription(
            mp.RobotLocation,
            'robot_location',
            self.listener_callback_location,
            10,
            callback_group=self.callback_group)

        #Create subscriber for the robot states
        self.subscriber_state = self.create_subscription(
            mp.RobotState,
            'robot_state',
            self.listener_callback_state,
            10,
            callback_group=self.callback_group)

        #Create a publisher for the map
        self.publisher_ = self.create_publisher(mp.Map, 'map', 10)

        #Period defined for the timer
        timer_period = 3  # seconds
        #Timer is created with a callback that is executed every 0.5 seconds
        self.timer = self.create_timer(timer_period, self.timer_callback,callback_group=self.callback_group)

        #Iterator used in the callback
        self.i = 0

        
        
    #Callback from the timer
    def timer_callback(self):
        '''
        The timer callback updates and publishes the map
        '''

        #TODO Update the map

        #TODO Publish the map

        #Publish test message
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

    #Listener callback for the robot locations
    def listener_callback_location(self, msg):
        self.get_logger().info('Robot number: %i,X coordinate: %f,Y coordinate: %f' % (msg.robot_number,msg.robot_location.x,msg.robot_location.y))

    #Listener callback for the robot states
    def listener_callback_state(self, msg):
        self.get_logger().info('Robot: %i State: %s' % (msg.robot_number,msg.robot_state))

def main(args=None):
    #Initialize rclpy
    rclpy.init(args=args)

    #Creates the node
    warehouse_instance = Warehouse()
    #Create a multithreading executor
    executor = MultiThreadedExecutor()

    #"Spins" the node so callbacks are called
    rclpy.spin(warehouse_instance, executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    warehouse_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
