# generated from rosidl_generator_py/resource/_idl.py.em
# with input from messages_package:msg/Item.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Item(type):
    """Metaclass of message 'Item'."""

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
                'messages_package.msg.Item')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__item
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__item
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__item
            cls._TYPE_SUPPORT = module.type_support_msg__msg__item
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__item

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


class Item(metaclass=Metaclass_Item):
    """Message class 'Item'."""

    __slots__ = [
        '_name',
        '_age',
        '_location',
        '_quantity',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'age': 'double',
        'location': 'messages_package/Coordinates',
        'quantity': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['messages_package', 'msg'], 'Coordinates'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.age = kwargs.get('age', float())
        from messages_package.msg import Coordinates
        self.location = kwargs.get('location', Coordinates())
        self.quantity = kwargs.get('quantity', int())

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
        if self.name != other.name:
            return False
        if self.age != other.age:
            return False
        if self.location != other.location:
            return False
        if self.quantity != other.quantity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'age' field must be of type 'float'"
        self._age = value

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

    @property
    def quantity(self):
        """Message field 'quantity'."""
        return self._quantity

    @quantity.setter
    def quantity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quantity' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'quantity' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._quantity = value
