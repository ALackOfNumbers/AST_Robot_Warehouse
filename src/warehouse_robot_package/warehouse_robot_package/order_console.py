import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
import time 

#Import custom messages
import messages_package.msg as mpmsg
import messages_package.srv as mpsrv
import messages_package.action as mpaction

class OrderConsole(Node):

    def __init__(self):
        super().__init__('order_console_instance')

        #Create a callback group
        self.callback_group = ReentrantCallbackGroup()

        #Create a subscriber for the map
        self.subscription = self.create_subscription(
            mpmsg.Map,
            'map',
            self.listener_callback,
            10,
            callback_group=self.callback_group)

        #Create a client for the delivery service
        self.client_delivery = self.create_client(mpsrv.Delivery, 'delivery')
        while not self.client_delivery.wait_for_service(timeout_sec=5.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req = mpsrv.Delivery.Request()

        #Create a client for the order action
        self._action_client_order = ActionClient(self, mpaction.Order, 'order')


    #Listener callback for the map
    def listener_callback(self, msg):
        '''
        Prints the map
        '''
        for row in msg.map_array:
            print(row.row)

    #Send delivery service request       
    def send_request(self):
        print('Entering delivery:')
        more_items = 1
        items_list = []
        current_time = float(time.time())
        #Loop while there are items to input
        while more_items > 0:
            #Create item
            item = mpmsg.Item()
            #Get item name
            item.name = str(input('Enter item name: '))
            #Get item quantity
            item.quantity = int(input('Enter item quantity: '))
            #Calculate item age
            item.age = float(current_time)
            #Determine item starting location
            item.location.x = 0.0
            item.location.y = 0.0
            #Add item to items list
            items_list.append(item)
            #Ask user if they have more items
            more_items = int(input('1 to continue, 0 for no more items: '))
        #Create the request
        self.req.delivery_contents.items = items_list
        self.req.delivery_contents.location.x = 0.0
        self.req.delivery_contents.location.y = 0.0
        self.req.delivery_contents.time = float(current_time)
        self.future_delivery = self.client_delivery.call_async(self.req)

    #Send goal for the order action
    def send_goal_order(self):
        print('Entering order:')
        more_items = 1
        items_list = []
        current_time = float(time.time())
        #Loop while there are items to input
        while more_items > 0:
            #Create item
            item = mpmsg.Item()
            #Get item name
            item.name = str(input('Enter item name: '))
            #Get item quantity
            item.quantity = int(input('Enter item quantity: '))
            #Calculate item age
            item.age = float(current_time)
            #Determine item starting location
            item.location.x = 0.0
            item.location.y = 0.0
            #Add item to items list
            items_list.append(item)
            #Ask user if they have more items
            more_items = int(input('1 to continue, 0 for no more items: '))
        goal_msg = mpaction.Order.Goal()
        goal_msg.items = items_list

        self._action_client_order.wait_for_server()

        self._send_goal_future_order = self._action_client_order.send_goal_async(goal_msg, feedback_callback=self.feedback_callback_order)

        self._send_goal_future_order.add_done_callback(self.goal_response_callback_order)   

    #Goal response callback for order action
    def goal_response_callback_order(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Order rejected')
            return

        self.get_logger().info('Order accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback_order)

    #Result callback for the order action
    def get_result_callback_order(self, future):
        result = future.result().result
        self.get_logger().info('Order shipped: %s Failure reason: %s'% (result.success_or_failure,result.failure_reason))
        #rclpy.shutdown()

    #Feedback callback for order action
    def feedback_callback_order(self, feedback_msg):
        self.get_logger().info('Order status: %s'% feedback_msg.feedback.order_status)

def main(args=None):
    #Initializes rclpy
    rclpy.init(args=args)

    #Create the node
    order_console_instance = OrderConsole()
    #Create a multithreading executor
    executor = MultiThreadedExecutor()

    #Send the request once
    order_console_instance.send_request()

    #Send a single order 
    order_console_instance.send_goal_order()

    #Flag for printing delivery results once
    delivery_handled = 0

    #Loop
    while rclpy.ok():
        #Spin each time
        rclpy.spin_once(order_console_instance)
        #If the delivery is done
        if order_console_instance.future_delivery.done():
            #Try to get the result
            try:
                response = order_console_instance.future_delivery.result()
                #Display any exceptions
            except Exception as e:
                order_console_instance.get_logger().info(
                    'Service call failed %r' % (e,))
            #If there is no exception, print the delivery contents and the result
            else: 
                if delivery_handled == 0:
                    for item in order_console_instance.req.delivery_contents.items:
                        order_console_instance.get_logger().info(
                            'Name: %s Age: %f Coordinates: %i,%i Quantity: %i  '%
                            (item.name,item.age,item.location.x,item.location.y,item.quantity ))
                            
                    order_console_instance.get_logger().info('Result: %s' % response.success_or_failure)

                    delivery_handled = 1
            #break
        

    #"Spins" the node so callbacks are called
    #rclpy.spin(order_console_instance, executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    order_console_instance.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
