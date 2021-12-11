import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
import time

#Import custom messages
import messages_package.msg as mpmsg
import messages_package.srv as mpsrv
import messages_package.action as mpaction

class Robot(Node):

    def __init__(self, robot_number):
        super().__init__('robot_instance')

        #Define the robots serial number
        self.serial_number = robot_number
        #Define the robots starting state
        self.state = 'idle'
        #Define the robot's held item
        self.item = None
        #Define the robot's current battery level
        self.current_battery = 60
        #Define the robot's critical battery level
        self.critical_battery = 30
        #Define the robot's location
        self.location = [1,1]

        #Create a callback group
        self.callback_group = ReentrantCallbackGroup()

        #Create subscriber for the distance from the beacon
        self.subscriber_beacon = self.create_subscription(
            mpmsg.RobotDistance,
            'beacon_distance',
            self.listener_callback_beacon,
            10,
            callback_group=self.callback_group)
        #Create a subscriber for the map
        self.subscriber_map = self.create_subscription(
            mpmsg.Map,
            'map',
            self.listener_callback_map,
            10,
            callback_group=self.callback_group)

        #Create a publisher for the robot's location
        self.publisher_location = self.create_publisher(mpmsg.RobotLocation, 'robot_location', 10)
        #Create a publisher for the robot's state
        self.publisher_state = self.create_publisher(mpmsg.RobotState, 'robot_state', 10)

        #Period defined for the timer
        timer_period = 5 # seconds
        #Timer is created with a callback that is executed every 0.5 seconds, and the callback is assigned the callback group
        self.timer = self.create_timer(timer_period, self.timer_callback,callback_group=self.callback_group)

        #Create a client for the pick_up_item service
        self.client_pick_up_item = self.create_client(mpsrv.PickUpItem, 'pick_up_item')
        while not self.client_pick_up_item.wait_for_service(timeout_sec=5.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req_pick_up_item = mpsrv.PickUpItem.Request()

        #Create a client for the put_down_item service
        self.client_put_down_item = self.create_client(mpsrv.PutDownItem, 'put_down_item')
        while not self.client_put_down_item.wait_for_service(timeout_sec=5.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req_put_down_item = mpsrv.PutDownItem.Request()

        #Create a server for the charge_robot action
        self._action_server_charge_robot = ActionServer(
            self,
            mpaction.ChargeRobot,
            'charge_robot',
            self.callback_charge_robot,
            callback_group=self.callback_group)

        #Create a server for the move_item action
        self._action_server_move_item = ActionServer(
            self,
            mpaction.MoveItem,
            'move_item',
            self.callback_move_item,
            callback_group=self.callback_group)

        #Iterator used in the callback
        self.i = 0

    def timer_callback(self):
        '''
        The timer callback publishs the robot's state.
        '''
        #Create message
        msg = mpmsg.RobotState()
        #Assign values to the emssage
        msg.robot_number = self.serial_number
        msg.robot_state = self.state
        #Publish the message
        self.publisher_state.publish(msg)
        #Log that the message was published
        self.get_logger().info('Robot number: %i State %s'% (msg.robot_number,msg.robot_state))

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
            msg = mpmsg.RobotLocation()
            #Assign values to the message
            msg.robot_number = self.serial_number
            msg.robot_location = mpmsg.Coordinates(x = 13.58+self.i, y = 27.62+self.i)
            #Publish the message
            self.publisher_location.publish(msg)
            #Log the message that was published
            self.get_logger().info('%f'% msg.robot_location.x)
            self.get_logger().info('%f'% msg.robot_location.y)
            #Increase the iterator value
            self.i += 1

    #Listener callback for the map
    def listener_callback_map(self,msg):
        pass

    #Send pick_up_item service request       
    def send_request_pick_up_item(self, picked_item, location):
        self.req_pick_up_item.item = picked_item
        self.req_pick_up_item.location = location
        self.future_pick_up_item = self.client_pick_up_item.call_async(self.req_pick_up_item)

    #Send put_down_item service request       
    def send_request_put_down_item(self, placed_item, location):
        self.req_put_down_item.item = placed_item
        self.req_put_down_item.location = location
        self.future_put_down_item = self.client_put_down_item.call_async(self.req_put_down_item)

    #Callback for the charge_robot action
    def callback_charge_robot(self, goal_handle):
        self.get_logger().info('Sending robot to charger...')

        #TODO Move robot to charger

        feedback_msg = mpaction.ChargeRobot.Feedback()
        feedback_msg.current_battery_level = self.current_battery
        
        #Charge until battery is full
        while self.current_battery < 100:
            #self.get_logger().info('Current battery level: %i'%(feedback_msg.current_battery_level))
            goal_handle.publish_feedback(feedback_msg)
            self.current_battery += 10
            feedback_msg.current_battery_level = self.current_battery
            time.sleep(1)

        goal_handle.succeed()

        result = mpaction.ChargeRobot.Result()
        result.final_battery_level = self.current_battery
        self.get_logger().info('Final battery level: %i'%(result.final_battery_level))
        return result

    #Callback for the move_item action
    def callback_move_item(self, goal_handle):

        #TODO Check the current battery and abort goal if battery is below critical

        self.get_logger().info('Going to starting location...')

        feedback_msg = mpaction.MoveItem.Feedback()
        feedback_msg.current_location = mpmsg.Coordinates(x=float(self.location[0]),y=float(self.location[1]))
        feedback_msg.target_location = goal_handle.request.initial_location
        goal_handle.publish_feedback(feedback_msg)
        self.get_logger().info('Target location: %i,%i'%(feedback_msg.target_location.x,feedback_msg.target_location.y))

        #TODO Move to the initial location by polling current location from the beacon. Update the target location when the initial location is reached.
        
        feedback_msg.target_location = goal_handle.request.final_location
        goal_handle.publish_feedback(feedback_msg)
        self.get_logger().info('Target location: %i,%i'%(feedback_msg.target_location.x,feedback_msg.target_location.y))

        #TODO Robot picks up the item using the service

        #TODO Move robot to the final location

        #TODO Robot places the item using the service

        goal_handle.succeed()

        result = mpaction.MoveItem.Result()
        result.success_or_failure = True
        result.failure_reason = 'None'
        self.get_logger().info('Item moved: %s Failure: %s'%(result.success_or_failure,result.failure_reason))
        return result

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

    #Test pick up item
    picked_item = mpmsg.Item()
    picked_item.name = 'Chicken'
    picked_item.age = float(time.time())
    picked_item.location = mpmsg.Coordinates(x=4.0,y=5.0)
    picked_item.quantity = 32
    robot_instance.send_request_pick_up_item(picked_item,picked_item.location)
    pick_up_item_flag = 0

    #Test put down item
    placed_item = mpmsg.Item()
    placed_item.name = 'Rice'
    placed_item.age = float(time.time())
    placed_item.location = mpmsg.Coordinates(x=23.0,y=6.0)
    placed_item.quantity = 17
    robot_instance.send_request_put_down_item(placed_item,placed_item.location)
    put_down_item_flag = 0

    #Loop
    while rclpy.ok():
        #Spin each time
        rclpy.spin_once(robot_instance)
        #If the item is put down is done
        if robot_instance.future_pick_up_item.done():
            #Try to get the result
            try:
                response_pick_up_item = robot_instance.future_pick_up_item.result()
                #Display any exceptions
            except Exception as e:
                robot_instance.get_logger().info(
                    'Service call failed %r' % (e,))
            #If there is no exception, print the picked item and its previous location
            else:
                if pick_up_item_flag == 0:
                    robot_instance.get_logger().info('Item picked up: Name: %s Coordinates: %i,%i '% (robot_instance.req_pick_up_item.item.name,robot_instance.req_pick_up_item.item.location.x,robot_instance.req_pick_up_item.item.location.y))
                    robot_instance.get_logger().info('Result of picking up item: %s' % response_pick_up_item.success_or_failure)
                    pick_up_item_flag = 1
            #break
        if robot_instance.future_put_down_item.done():
            #Try to get the result
            try:
                response_put_down_item = robot_instance.future_put_down_item.result()
                #Display any exceptions
            except Exception as e:
                robot_instance.get_logger().info(
                    'Service call failed %r' % (e,))
            #If there is no exception, print the placed item and its location
            else:
                if put_down_item_flag == 0:
                    robot_instance.get_logger().info('Item placed down: Name: %s Coordinates: %i,%i '% (robot_instance.req_put_down_item.item.name,robot_instance.req_put_down_item.item.location.x,robot_instance.req_put_down_item.item.location.y))
                    robot_instance.get_logger().info('Result of placing item: %s' % response_put_down_item.success_or_failure)
                    put_down_item_flag = 1
    #"Spins" the node so callbacks are called
    #rclpy.spin(robot_instance, executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    robot_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
