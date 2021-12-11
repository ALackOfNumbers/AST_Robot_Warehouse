import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

#Import custom messages
import messages_package.msg as mpmsg
import messages_package.srv as mpsrv
import messages_package.action as mpaction

class Warehouse(Node):

    def __init__(self):
        #Calls the node classes contructor and passes a node name
        super().__init__('warehouse_instance')

        #Define the warehouse's stock
        self.stock = []
        #Define the warehouse's map locations
        #TODO define map locations
        self.map_locations = {}
        #Define the warehouse's maximum stock size
        self.max_stock = 30
        #Define the default warehouse map
        #TODO define the default map
        self.map = None

        #Create a callback group
        self.callback_group = ReentrantCallbackGroup()

        #Create subscriber for the robot locations
        self.subscriber_location = self.create_subscription(
            mpmsg.RobotLocation,
            'robot_location',
            self.listener_callback_location,
            10,
            callback_group=self.callback_group)

        #Create subscriber for the robot states
        self.subscriber_state = self.create_subscription(
            mpmsg.RobotState,
            'robot_state',
            self.listener_callback_state,
            10,
            callback_group=self.callback_group)

        #Create a publisher for the map
        self.publisher_ = self.create_publisher(mpmsg.Map, 'map', 10)

        #Period defined for the timer
        timer_period = 3  # seconds
        #Timer is created with a callback that is executed every 0.5 seconds
        self.timer = self.create_timer(timer_period, self.timer_callback,callback_group=self.callback_group)

        #Create a server for the delivery service 
        self.srv_delivery = self.create_service(mpsrv.Delivery,'delivery',self.callback_delivery,callback_group=self.callback_group)

        #Create a server for pick_up_item service 
        self.srv_pick_up_item = self.create_service(mpsrv.PickUpItem,'pick_up_item',self.callback_pick_up_item,callback_group=self.callback_group)

        #Create a server for put_down_item service 
        self.srv_put_down_item = self.create_service(mpsrv.PutDownItem,'put_down_item',self.callback_put_down_item,callback_group=self.callback_group)

        #Create a client for the charge_robot action
        self._action_client_charge_robot = ActionClient(self, mpaction.ChargeRobot, 'charge_robot')

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
        msg = mpmsg.Map()
        #Add data to the string
        row1 = mpmsg.Row(row = '-----')
        row2 = mpmsg.Row(row = '|R[]|')
        row3 = mpmsg.Row(row = '| C |')
        row4 = mpmsg.Row(row = '|D D|')
        row5 = mpmsg.Row(row = '-----')
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

    #Service callback for the delivery server
    def callback_delivery(self, request, response):
        #TODO make real success/failure response
        #TODO make a robot process the delivery
        response.success_or_failure = True
        #Log all items in the delivery 
        for item in request.delivery_contents.items:
            self.get_logger().info('Delivery: Name: %s Age: %f Location: %i,%i Quantity: %i ' % (item.name,item.age,item.location.x,item.location.y,item.quantity))
        return response

    #Service callback for the pick_up_item server
    def callback_pick_up_item(self, request, response):
        #TODO Update map
        self.get_logger().info('Item %s picked up at %i,%i' %(request.item.name,request.location.x,request.location.y))
        response.success_or_failure = True
        return response

    #Service callback for the put_down_item server
    def callback_put_down_item(self, request, response):
        #TODO Update map
        self.get_logger().info('Item %s placed at %i,%i' %(request.item.name,request.location.x,request.location.y))
        response.success_or_failure = True
        return response

    #Send goal for the charge robot action
    def send_goal_charge_robot(self, location):
        goal_msg = mpaction.ChargeRobot.Goal()
        goal_msg.charger_location = location

        self._action_client_charge_robot.wait_for_server()

        self._send_goal_future_charge_robot = self._action_client_charge_robot.send_goal_async(goal_msg, feedback_callback=self.feedback_callback_charge_robot)

        self._send_goal_future_charge_robot.add_done_callback(self.goal_response_callback_charge_robot)   

    #Goal response callback for charge robot action
    def goal_response_callback_charge_robot(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Charge robot rejected')
            return

        self.get_logger().info('Charge robot accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback_charge_robot)

    #Result callback for the charge robot action
    def get_result_callback_charge_robot(self, future):
        result = future.result().result
        self.get_logger().info('Final robot battery level: %i'% result.final_battery_level)
        #rclpy.shutdown()

    #Feedback callback for charge robot action
    def feedback_callback_charge_robot(self, feedback_msg):
        current_battery = feedback_msg.current_battery_level
        self.get_logger().info('Current robot battery level: %i'% current_battery)

def main(args=None):
    #Initialize rclpy
    rclpy.init(args=args)

    #Creates the node
    warehouse_instance = Warehouse()
    #Create a multithreading executor
    executor = MultiThreadedExecutor()

    #Test charge robot action
    warehouse_instance.send_goal_charge_robot(mpmsg.Coordinates(x=7.0,y = 18.0))

    #"Spins" the node so callbacks are called
    rclpy.spin(warehouse_instance, executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    warehouse_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
