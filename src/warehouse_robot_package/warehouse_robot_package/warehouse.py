import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
import copy 
import time

#Import custom messages
import messages_package.msg as mpmsg
import messages_package.srv as mpsrv
import messages_package.action as mpaction

class Warehouse(Node):

    def __init__(self):
        #Calls the node classes contructor and passes a node name
        super().__init__('warehouse_instance')

        #Store the robot states in a dictionary
        self.robot_states = {}
        #Define the map as a string
        '''
        The explanation of the map symbols is given in the map.py file in the src folder.
        '''

        self.string_map = """#######################################@###########################################
#B    { }{ }{ }                                                 #                B#
#      -  -  -                                                  #                 #
#                           [ ] [ ] [ ] [ ] [ ] [ ]             #                 #
#                           [ ] [ ] [ ] [ ] [ ] [ ]             #                 #
#                           [ ] [ ] [ ] [ ] [ ] [ ]                               #
#                           [ ] [ ] [ ] [ ] [ ] [ ]             #                 #
#C1                         [ ] [ ] [ ] [ ] [ ] [ ]             ###########  ######
#C2                         [ ] [ ] [ ] [ ] [ ] [ ]                               @
#C3                         [ ] [ ] [ ] [ ] [ ] [ ]             ###########  ######
#                           [ ] [ ] [ ] [ ] [ ] [ ]             #                 #
#                           [ ] [ ] [ ] [ ] [ ] [ ]                               #
#                                                               #                 #
#       -  -                                                    #                 #
#B     < >< >                                                   #                B#
#######################################@###########################################
"""
        #Define the warehouse's stock
        self.stock = []
        #Define the warehouse's map locations
        self.map_locations = {'delivery1':[7,2],'delivery2':[10,2],'delivery3':[13,2],'charger1':[2,7],'charger2:':[2,8],'charger3':[2,9],'dispatch1':[8,13],'dispatch2':[11,13]}
        #Define the coordinates of all shelves
        self.shelf_coords=[]
        for x in range(3,12):
            for y in range(29,50,4):
                self.shelf_coords.append([x,y])
        #Define the warehouse's maximum stock size
        self.max_stock = 54
        #Define the default warehouse map
        row = []
        self.default_map = []
        for char in self.string_map:
            if char != '\n':
                row.append(char)
            else:
                self.default_map.append(row)
                row = []

        #Store the current map
        self.current_map = copy.deepcopy(self.default_map)

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
        timer_period = 4  # seconds
        #Timer is created with a callback
        self.timer = self.create_timer(timer_period, self.timer_callback,callback_group=self.callback_group)

        #Create a server for the delivery service 
        self.srv_delivery = self.create_service(mpsrv.Delivery,'delivery',self.callback_delivery,callback_group=self.callback_group)

        #Create a server for pick_up_item service 
        self.srv_pick_up_item = self.create_service(mpsrv.PickUpItem,'pick_up_item',self.callback_pick_up_item,callback_group=self.callback_group)

        #Create a server for put_down_item service 
        self.srv_put_down_item = self.create_service(mpsrv.PutDownItem,'put_down_item',self.callback_put_down_item,callback_group=self.callback_group)

        #Create a client for the charge_robot action
        self._action_client_charge_robot = ActionClient(self, mpaction.ChargeRobot, 'charge_robot')

        #Create a client for the move_item action
        self._action_client_move_item = ActionClient(self, mpaction.MoveItem, 'move_item')

        #Create a server for the order action
        self._action_server_order = ActionServer(
            self,
            mpaction.Order,
            'order',
            self.callback_order,
            callback_group=self.callback_group)    
        
    #Callback from the timer
    def timer_callback(self):
        pass

        '''
        To test the update_map function remove the comments below and comment out the pass above.
        '''
        
        #Test update map function
        #self.update_map(add=[['1',7,6]],remove=[['',7,10]])
        #time.sleep(2)
        #self.update_map(add=[['1',7,10]],remove=[['',7,6]])

    #Function for updating the map and publishing it
    def update_map(self,add=None,remove=None):
        '''
        Function for updating the map
        Parameters
        ----------
        add : [[str(symbol), int(row), int(column)]]
            List of symbols to add to the map
        remove : [[str(symbol), int(row), int(column)]]
            Lit of symbols to remove from the map
        '''
        updated_map = self.current_map
        #Go through all objects to add
        if add != None:
            for object in add:
                for row_index, row in enumerate(updated_map):
                    for col_index, col in enumerate(row):
                        #If the coordinates match, place the symbol on the map
                        if row_index == object[1] and col_index == object[2]:
                            updated_map[row_index][col_index] = object[0]
        #Go through all objects to remove
        if remove != None:
            for object in remove:
                for row_index, row in enumerate(updated_map):
                    for col_index, col in enumerate(row):
                        #If the coordinates match, place the default symbol on the map
                        if row_index == object[1] and col_index == object[2]:
                            if self.default_map[row_index][col_index] == '1' or self.default_map[row_index][col_index] == '2' or self.default_map[row_index][col_index] == '3':
                                updated_map[row_index][col_index] = ' '
                            else:
                                updated_map[row_index][col_index] = self.default_map[row_index][col_index]
        #Update the current map
        self.current_map = updated_map
        #Create a message with the current map
        msg = mpmsg.Map()
        #Store rows in a list
        rows = []
        #Iterate through rows in the map
        for row_index, row in enumerate(updated_map):
            #Create empty string to store row
            row_string = ''
            #Iterate through columns in row
            for col_index, col in enumerate(row):
                #Append columns to the row string, so that the row string contains the entire row as a single string
                row_string+=updated_map[row_index][col_index]
            #Add the row to the list of rows after converting it to a row message
            rows.append(mpmsg.Row(row=row_string))
        #Create a map_array message
        msg.map_array = rows
        #Publish the message
        self.publisher_.publish(msg)
        #Log the message that was published
        #self.get_logger().info('%s' % msg.map_array)
    
    #Function for getting the location of a robot from the map
    def get_robot_location(self, robot_number):
        for row in self.current_map:
            for col in row:
                if col == str(robot_number):
                    return [row,col]

    #Listener callback for the robot locations
    def listener_callback_location(self, msg):
        pass
        self.get_logger().info('Robot number: %i X coordinate: %f Y coordinate: %f' % (msg.robot_number,msg.robot_location.x,msg.robot_location.y))

    #Listener callback for the robot states
    def listener_callback_state(self, msg):
        #Update the robot states dictionary
        self.robot_states[msg.robot_number] = msg.robot_state
        #Log the robot state
        self.get_logger().info('Robot: %i State: %s' % (msg.robot_number,msg.robot_state))

    #Service callback for the delivery server
    def callback_delivery(self, request, response):
        #Print the default map
        self.update_map(add=[['1',7,2]])

        #Return failure if no delivery ports are available
        if self.current_map[self.map_locations['delivery1'][0]-1][self.map_locations['delivery1'][1]] != ' ' and self.current_map[self.map_locations['delivery2'][0]-1][self.map_locations['delivery2'][1]] != ' ':
            response.success_or_failure = False
            return response

        #Iterate through robot states
        for key in self.robot_states:
            #Assign an idle robot
            if self.robot_states[key] == 'idle':
                assigned_robot = str(key)
                break

        #Move robot from charger to delivery port
        self.update_map(add=[['1',2,7]],remove=[['',7,2]])
        time.sleep(1)

        #Loop through items in delivery, move them to shelves
        #for item in range(len(request.delivery_contents)):
            #Nested action/service calls are not working
            #self.send_goal_move_item(item,mpmsg.Coordinates(x=2.0,y=7.0),mpmsg.Coordinates(x=11.0,y=27.0))

        #Move from delivery port to shelves
        self.update_map(add=[['1',11,27]],remove=[['',2,7]])
        time.sleep(1)

        #Charge the robot
        self.update_map(add=[['1',7,2]],remove=[['',11,27]])

        #Nested action/service calls are not working
        #self.send_goal_charge_robot(mpmsg.Coordinates(x=7.0,y =2.0))

        #Empty the delivery port on the map
        self.update_map(remove=[["",1,8]])

        response.success_or_failure = True
        #Iterate through all items in the delivery 
        for item in request.delivery_contents.items:
            #Add the items to the stock
            self.stock.append(item)
            #Log the item
            self.get_logger().info('Delivery: Name: %s Age: %f Location: %i,%i Quantity: %i ' % (item.name,item.age,item.location.x,item.location.y,item.quantity))
        return response

    #Service callback for the pick_up_item server
    def callback_pick_up_item(self, request, response):
        self.update_map(remove=['',request.location.x,request.location.y])
        self.get_logger().info('Item %s picked up at %i,%i' %(request.item.name,request.location.x,request.location.y))
        response.success_or_failure = True
        return response

    #Service callback for the put_down_item server
    def callback_put_down_item(self, request, response):
        self.update_map(add=['I',request.location.x,request.location.y])
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

        #TODO Move robot to charger without teleporting
        robot_location = self.get_robot_location(1)
        self.update_map(remove=[['',robot_location[0],robot_location[1]]],add=[['1',7,2]])
        time.sleep(1)

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback_charge_robot)

    #Result callback for the charge robot action
    def get_result_callback_charge_robot(self, future):
        result = future.result().result
        self.get_logger().info('Final robot battery level: %i'% result.final_battery_level)
        #rclpy.shutdown()

    #Feedback callback for charge robot action
    def feedback_callback_charge_robot(self, feedback_msg):
        self.get_logger().info('Current robot battery level: %i'% feedback_msg.feedback.current_battery_level)

    #Send goal for the move item action
    def send_goal_move_item(self, item, start_location, end_location):
        goal_msg = mpaction.MoveItem.Goal()
        goal_msg.item = item
        goal_msg.initial_location = start_location
        goal_msg.final_location = end_location

        self._action_client_move_item.wait_for_server()

        self._send_goal_future_move_item = self._action_client_move_item.send_goal_async(goal_msg, feedback_callback=self.feedback_callback_move_item)

        self._send_goal_future_move_item.add_done_callback(self.goal_response_callback_move_item)   

    #Goal response callback for move item action
    def goal_response_callback_move_item(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Move item rejected')
            return

        self.get_logger().info('Move item accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback_move_item)

    #Result callback for the move item action
    def get_result_callback_move_item(self, future):
        result = future.result().result
        self.get_logger().info('Item moved: %s Failure reason: %s'% (result.success_or_failure,result.failure_reason))
        #rclpy.shutdown()

    #Feedback callback for move item action
    def feedback_callback_move_item(self, feedback_msg):

        #TODO Move the robot from the current location towards the target location
        robot_location = self.get_robot_location(1)
        self.update_map(add=[['1',feedback_msg.feedback.target_location.y,feedback_msg.feedback.target_location.x]], remove=[["",robot_location[0],robot_location[1]]])
        time.sleep(1)

        self.get_logger().info('Current robot location: %i,%i Target robot location: %i,%i'% (feedback_msg.feedback.current_location.x,feedback_msg.feedback.current_location.y,feedback_msg.feedback.target_location.x,feedback_msg.feedback.target_location.y))

    #Callback for the order action
    def callback_order(self, goal_handle):
        self.get_logger().info('Processing order...')

        #Check if all the order items are in stock
        for item in goal_handle.request.items:
            available = False
            for in_stock in self.stock:
                if in_stock.name == item.name:
                    available = True
            #If an item is not available, abort the order
            if available == False:
                
                result = mpaction.Order.Result()
                result.success_or_failure = False
                result.failure_reason = 'Items not in stock'
                return result       

        feedback_msg = mpaction.Order.Feedback()
        feedback_msg.order_status = 'Assigning robot'
        goal_handle.publish_feedback(feedback_msg)

        #Iterate through robot states
        for key in self.robot_states:
            #Assign an idle robot
            if self.robot_states[key] == 'idle':
                assigned_robot = key
                break

        feedback_msg.order_status = 'Robot assigned'
        goal_handle.publish_feedback(feedback_msg)
        
        #TODO Loop move items from shelves to dispatch, populate the dispatch
        self.update_map(add=[['1',11,27]],remove=[['',7,2]]) #Move from charger to shelf
        time.sleep(1)
        self.update_map(add=[['1',13,8]],remove=[['1',11,27]]) #Move from shelf to dispatch
        time.sleep(1)
        

        #TODO Update item locations in the stock
        
        feedback_msg.order_status = 'Taking items to dispatch'
        goal_handle.publish_feedback(feedback_msg)

        goal_handle.succeed()

        result = mpaction.Order.Result()
        result.success_or_failure = True
        result.failure_reason = 'None'
        self.get_logger().info('Order shipped: %s Failure reason: %s'%(result.success_or_failure,result.failure_reason))

        #Charge the robot
        self.update_map(add=[['1',7,2]],remove=[['1',13,8]]) #Move from dispatch to charger
        #self.send_goal_charge_robot(mpmsg.Coordinates(x=float(self.map_locations['charger1'][0]),y = float(self.map_locations['charger1'][1])))

        #Empty the dispatch to show that the order was sent
        #self.update_map(remove=[["",self.map_locations['dispatch1'][0]+1,self.map_locations['dispatch1'][1]]])

        return result

def main(args=None):
    #Initialize rclpy
    rclpy.init(args=args)

    #Creates the node
    warehouse_instance = Warehouse()
    #Create a multithreading executor
    executor = MultiThreadedExecutor()

    '''
    Uncomment the below line to test the charge_robot action
    '''
    #warehouse_instance.send_goal_charge_robot(mpmsg.Coordinates(x=7.0,y = 18.0))

    '''
    Uncomment the beloew lines to test the send_goal_move_item action
    '''
    #location = mpmsg.Coordinates(x=6.0,y=9.0)
    #location2 = mpmsg.Coordinates(x=15.0,y=32.0)
    #warehouse_instance.send_goal_move_item(mpmsg.Item(name='Cheese',age=7.0,location=location,quantity=10),location,location2)

    #"Spins" the node so callbacks are called
    rclpy.spin(warehouse_instance, executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    warehouse_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
