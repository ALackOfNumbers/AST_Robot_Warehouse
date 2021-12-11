# generated from rosidl_generator_py/resource/_idl.py.em
# with input from messages_package:srv/PutDownItem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PutDownItem_Request(type):
    """Metaclass of message 'PutDownItem_Request'."""

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
                'messages_package.srv.PutDownItem_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__put_down_item__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__put_down_item__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__put_down_item__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__put_down_item__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__put_down_item__request

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


class PutDownItem_Request(metaclass=Metaclass_PutDownItem_Request):
    """Message class 'PutDownItem_Request'."""

    __slots__ = [
        '_item',
        '_location',
    ]

    _fields_and_field_types = {
        'item': 'messages_package/Item',
        'location': 'messages_package/Coordinates',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['messages_package', 'msg'], 'Item'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['messages_package', 'msg'], 'Coordinates'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from messages_package.msg import Item
        self.item = kwargs.get('item', Item())
        from messages_package.msg import Coordinates
        self.location = kwargs.get('location', Coordinates())

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
        if self.location != other.location:
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
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            from messages_package.msg import Coordinates
            assert \
                isinstance(value, Coordinates), \
                "The 'location' field must be a sub message of type 'Coordinates'"
        self._location = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PutDownItem_Response(type):
    """Metaclass of message 'PutDownItem_Response'."""

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
                'messages_package.srv.PutDownItem_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__put_down_item__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__put_down_item__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__put_down_item__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__put_down_item__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__put_down_item__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PutDownItem_Response(metaclass=Metaclass_PutDownItem_Response):
    """Message class 'PutDownItem_Response'."""

    __slots__ = [
        '_success_or_failure',
    ]

    _fields_and_field_types = {
        'success_or_failure': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success_or_failure = kwargs.get('success_or_failure', bool())

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


class Metaclass_PutDownItem(type):
    """Metaclass of service 'PutDownItem'."""

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
                'messages_package.srv.PutDownItem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__put_down_item

            from messages_package.srv import _put_down_item
            if _put_down_item.Metaclass_PutDownItem_Request._TYPE_SUPPORT is None:
                _put_down_item.Metaclass_PutDownItem_Request.__import_type_support__()
            if _put_down_item.Metaclass_PutDownItem_Response._TYPE_SUPPORT is None:
                _put_down_item.Metaclass_PutDownItem_Response.__import_type_support__()


class PutDownItem(metaclass=Metaclass_PutDownItem):
    from messages_package.srv._put_down_item import PutDownItem_Request as Request
    from messages_package.srv._put_down_item import PutDownItem_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
