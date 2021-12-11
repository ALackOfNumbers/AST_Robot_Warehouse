# generated from rosidl_generator_py/resource/_idl.py.em
# with input from messages_package:action/MoveItem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveItem_Goal(type):
    """Metaclass of message 'MoveItem_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_item__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_item__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_item__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_item__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_item__goal

            from messages_package.msg import Coordinates
            if Coordinates.__class__._TYPE_SUPPORT is None:
                Coordinates.__class__.__import_type_support__()

            from messages_package.msg import Item
            if Item.__class__._TYPE_SUPPORT is None:
                Item.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveItem_Goal(metaclass=Metaclass_MoveItem_Goal):
    """Message class 'MoveItem_Goal'."""

    __slots__ = [
        '_item',
        '_initial_location',
        '_final_location',
    ]

    _fields_and_field_types = {
        'item': 'messages_package/Item',
        'initial_location': 'messages_package/Coordinates',
        'final_location': 'messages_package/Coordinates',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['messages_package', 'msg'], 'Item'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['messages_package', 'msg'], 'Coordinates'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['messages_package', 'msg'], 'Coordinates'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from messages_package.msg import Item
        self.item = kwargs.get('item', Item())
        from messages_package.msg import Coordinates
        self.initial_location = kwargs.get('initial_location', Coordinates())
        from messages_package.msg import Coordinates
        self.final_location = kwargs.get('final_location', Coordinates())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.item != other.item:
            return False
        if self.initial_location != other.initial_location:
            return False
        if self.final_location != other.final_location:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def item(self):
        """Message field 'item'."""
        return self._item

    @item.setter
    def item(self, value):
        if __debug__:
            from messages_package.msg import Item
            assert \
                isinstance(value, Item), \
                "The 'item' field must be a sub message of type 'Item'"
        self._item = value

    @property
    def initial_location(self):
        """Message field 'initial_location'."""
        return self._initial_location

    @initial_location.setter
    def initial_location(self, value):
        if __debug__:
            from messages_package.msg import Coordinates
            assert \
                isinstance(value, Coordinates), \
                "The 'initial_location' field must be a sub message of type 'Coordinates'"
        self._initial_location = value

    @property
    def final_location(self):
        """Message field 'final_location'."""
        return self._final_location

    @final_location.setter
    def final_location(self, value):
        if __debug__:
            from messages_package.msg import Coordinates
            assert \
                isinstance(value, Coordinates), \
                "The 'final_location' field must be a sub message of type 'Coordinates'"
        self._final_location = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveItem_Result(type):
    """Metaclass of message 'MoveItem_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_item__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_item__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_item__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_item__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_item__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveItem_Result(metaclass=Metaclass_MoveItem_Result):
    """Message class 'MoveItem_Result'."""

    __slots__ = [
        '_success_or_failure',
        '_failure_reason',
    ]

    _fields_and_field_types = {
        'success_or_failure': 'boolean',
        'failure_reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success_or_failure = kwargs.get('success_or_failure', bool())
        self.failure_reason = kwargs.get('failure_reason', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success_or_failure != other.success_or_failure:
            return False
        if self.failure_reason != other.failure_reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success_or_failure(self):
        """Message field 'success_or_failure'."""
        return self._success_or_failure

    @success_or_failure.setter
    def success_or_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success_or_failure' field must be of type 'bool'"
        self._success_or_failure = value

    @property
    def failure_reason(self):
        """Message field 'failure_reason'."""
        return self._failure_reason

    @failure_reason.setter
    def failure_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'failure_reason' field must be of type 'str'"
        self._failure_reason = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveItem_Feedback(type):
    """Metaclass of message 'MoveItem_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_item__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_item__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_item__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_item__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_item__feedback

            from messages_package.msg import Coordinates
            if Coordinates.__class__._TYPE_SUPPORT is None:
                Coordinates.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveItem_Feedback(metaclass=Metaclass_MoveItem_Feedback):
    """Message class 'MoveItem_Feedback'."""

    __slots__ = [
        '_current_location',
        '_target_location',
    ]

    _fields_and_field_types = {
        'current_location': 'messages_package/Coordinates',
        'target_location': 'messages_package/Coordinates',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['messages_package', 'msg'], 'Coordinates'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['messages_package', 'msg'], 'Coordinates'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from messages_package.msg import Coordinates
        self.current_location = kwargs.get('current_location', Coordinates())
        from messages_package.msg import Coordinates
        self.target_location = kwargs.get('target_location', Coordinates())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_location != other.current_location:
            return False
        if self.target_location != other.target_location:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def current_location(self):
        """Message field 'current_location'."""
        return self._current_location

    @current_location.setter
    def current_location(self, value):
        if __debug__:
            from messages_package.msg import Coordinates
            assert \
                isinstance(value, Coordinates), \
                "The 'current_location' field must be a sub message of type 'Coordinates'"
        self._current_location = value

    @property
    def target_location(self):
        """Message field 'target_location'."""
        return self._target_location

    @target_location.setter
    def target_location(self, value):
        if __debug__:
            from messages_package.msg import Coordinates
            assert \
                isinstance(value, Coordinates), \
                "The 'target_location' field must be a sub message of type 'Coordinates'"
        self._target_location = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveItem_SendGoal_Request(type):
    """Metaclass of message 'MoveItem_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_item__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_item__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_item__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_item__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_item__send_goal__request

            from messages_package.action import MoveItem
            if MoveItem.Goal.__class__._TYPE_SUPPORT is None:
                MoveItem.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveItem_SendGoal_Request(metaclass=Metaclass_MoveItem_SendGoal_Request):
    """Message class 'MoveItem_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'messages_package/MoveItem_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['messages_package', 'action'], 'MoveItem_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from messages_package.action._move_item import MoveItem_Goal
        self.goal = kwargs.get('goal', MoveItem_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from messages_package.action._move_item import MoveItem_Goal
            assert \
                isinstance(value, MoveItem_Goal), \
                "The 'goal' field must be a sub message of type 'MoveItem_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveItem_SendGoal_Response(type):
    """Metaclass of message 'MoveItem_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_item__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_item__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_item__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_item__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_item__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveItem_SendGoal_Response(metaclass=Metaclass_MoveItem_SendGoal_Response):
    """Message class 'MoveItem_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_MoveItem_SendGoal(type):
    """Metaclass of service 'MoveItem_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__move_item__send_goal

            from messages_package.action import _move_item
            if _move_item.Metaclass_MoveItem_SendGoal_Request._TYPE_SUPPORT is None:
                _move_item.Metaclass_MoveItem_SendGoal_Request.__import_type_support__()
            if _move_item.Metaclass_MoveItem_SendGoal_Response._TYPE_SUPPORT is None:
                _move_item.Metaclass_MoveItem_SendGoal_Response.__import_type_support__()


class MoveItem_SendGoal(metaclass=Metaclass_MoveItem_SendGoal):
    from messages_package.action._move_item import MoveItem_SendGoal_Request as Request
    from messages_package.action._move_item import MoveItem_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveItem_GetResult_Request(type):
    """Metaclass of message 'MoveItem_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_item__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_item__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_item__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_item__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_item__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveItem_GetResult_Request(metaclass=Metaclass_MoveItem_GetResult_Request):
    """Message class 'MoveItem_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveItem_GetResult_Response(type):
    """Metaclass of message 'MoveItem_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_item__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_item__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_item__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_item__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_item__get_result__response

            from messages_package.action import MoveItem
            if MoveItem.Result.__class__._TYPE_SUPPORT is None:
                MoveItem.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveItem_GetResult_Response(metaclass=Metaclass_MoveItem_GetResult_Response):
    """Message class 'MoveItem_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'messages_package/MoveItem_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['messages_package', 'action'], 'MoveItem_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from messages_package.action._move_item import MoveItem_Result
        self.result = kwargs.get('result', MoveItem_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from messages_package.action._move_item import MoveItem_Result
            assert \
                isinstance(value, MoveItem_Result), \
                "The 'result' field must be a sub message of type 'MoveItem_Result'"
        self._result = value


class Metaclass_MoveItem_GetResult(type):
    """Metaclass of service 'MoveItem_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__move_item__get_result

            from messages_package.action import _move_item
            if _move_item.Metaclass_MoveItem_GetResult_Request._TYPE_SUPPORT is None:
                _move_item.Metaclass_MoveItem_GetResult_Request.__import_type_support__()
            if _move_item.Metaclass_MoveItem_GetResult_Response._TYPE_SUPPORT is None:
                _move_item.Metaclass_MoveItem_GetResult_Response.__import_type_support__()


class MoveItem_GetResult(metaclass=Metaclass_MoveItem_GetResult):
    from messages_package.action._move_item import MoveItem_GetResult_Request as Request
    from messages_package.action._move_item import MoveItem_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveItem_FeedbackMessage(type):
    """Metaclass of message 'MoveItem_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_item__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_item__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_item__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_item__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_item__feedback_message

            from messages_package.action import MoveItem
            if MoveItem.Feedback.__class__._TYPE_SUPPORT is None:
                MoveItem.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveItem_FeedbackMessage(metaclass=Metaclass_MoveItem_FeedbackMessage):
    """Message class 'MoveItem_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'messages_package/MoveItem_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['messages_package', 'action'], 'MoveItem_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from messages_package.action._move_item import MoveItem_Feedback
        self.feedback = kwargs.get('feedback', MoveItem_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from messages_package.action._move_item import MoveItem_Feedback
            assert \
                isinstance(value, MoveItem_Feedback), \
                "The 'feedback' field must be a sub message of type 'MoveItem_Feedback'"
        self._feedback = value


class Metaclass_MoveItem(type):
    """Metaclass of action 'MoveItem'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('messages_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'messages_package.action.MoveItem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__move_item

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from messages_package.action import _move_item
            if _move_item.Metaclass_MoveItem_SendGoal._TYPE_SUPPORT is None:
                _move_item.Metaclass_MoveItem_SendGoal.__import_type_support__()
            if _move_item.Metaclass_MoveItem_GetResult._TYPE_SUPPORT is None:
                _move_item.Metaclass_MoveItem_GetResult.__import_type_support__()
            if _move_item.Metaclass_MoveItem_FeedbackMessage._TYPE_SUPPORT is None:
                _move_item.Metaclass_MoveItem_FeedbackMessage.__import_type_support__()


class MoveItem(metaclass=Metaclass_MoveItem):

    # The goal message defined in the action definition.
    from messages_package.action._move_item import MoveItem_Goal as Goal
    # The result message defined in the action definition.
    from messages_package.action._move_item import MoveItem_Result as Result
    # The feedback message defined in the action definition.
    from messages_package.action._move_item import MoveItem_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from messages_package.action._move_item import MoveItem_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from messages_package.action._move_item import MoveItem_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from messages_package.action._move_item import MoveItem_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
