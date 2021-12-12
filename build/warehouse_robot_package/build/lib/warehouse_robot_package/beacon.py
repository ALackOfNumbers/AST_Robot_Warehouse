import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
import numpy as np

#Import custom messages
import messages_package.msg as mpmsg

class Beacon(Node):

    def __init__(self, beacon_number):
        #Calls the node classes contructor and passes a node name
        super().__init__('beacon_instance')

        #Define the beacon's serial number
        self.serial_number = beacon_number
        #Store the current map
        self.map = None

        #Create a callback group
        self.callback_group = ReentrantCallbackGroup()

        #Create a publisher for the beacon distance
        self.publisher_ = self.create_publisher(mpmsg.RobotDistance, 'beacon_distance', 10)

        #Create a subscriber for the map
        self.subscriber_map = self.create_subscription(
            mpmsg.Map,
            'map',
            self.listener_callback_map,
            10,
            callback_group=self.callback_group)

        #Period defined for the timer
        timer_period = 0.5  # seconds
        #Timer is created with a callback, and the callback is assigned the callback group
        self.timer = self.create_timer(timer_period, self.timer_callback,callback_group=self.callback_group)

    #Callback from the timer
    def timer_callback(self):
        '''
        The beacon gets the distance of a particular robot from the map, then calculates the distance using the Pythagorian theorem.
        '''
        if self.map != None:
            for row_index,row in enumerate(self.map):
                for col_index,col in enumerate(row):
                    if col == '1' or col == '2' or col == '3':
                        #Create message
                        msg = mpmsg.RobotDistance()
                        #Set the robot number and serial number
                        msg.robot_number = int(col)
                        msg.beacon_number = self.serial_number
                        if self.serial_number == 1:
                            msg.robot_distance = np.sqrt(col_index**2+row_index**2)
                        if self.serial_number == 2:
                            msg.robot_distance = np.sqrt((82-col_index)**2+row_index**2)
                        if self.serial_number == 3:
                            msg.robot_distance = np.sqrt((82-col_index)**2+(15-row_index)**2)
                        if self.serial_number == 4:
                            msg.robot_distance = np.sqrt(col_index**2+(15-row_index)**2)
                        #Publish the message
                        self.publisher_.publish(msg)
                        #Log the message that was published
                        #self.get_logger().info('Transmitting distance: %f' % msg.robot_distance )
                        #self.get_logger().info('X: %i Y: %i'%(col_index,row_index))
        
    #Listener callback for the map
    def listener_callback_map(self,msg):
        # for row in msg.map_array:
        #     print(row.row)
        original = msg.map_array
        rows = 16
        columns = 83
        # Create an empty map
        map = [[0 for i in range(columns)] for j in range(rows)]
        #Loop through the rows in the original map
        for row_index, row in enumerate(original):
            #Loop through the columns in the original map
            for col_index, col in enumerate(list(row.row)):
                #Add the value to the 2D list
                map[row_index][col_index] = col
        self.map = map

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
