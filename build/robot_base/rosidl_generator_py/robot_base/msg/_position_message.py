# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_base:msg/PositionMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionMessage(type):
    """Metaclass of message 'PositionMessage'."""

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
            module = import_type_support('robot_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_base.msg.PositionMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PositionMessage(metaclass=Metaclass_PositionMessage):
    """Message class 'PositionMessage'."""

    __slots__ = [
        '_header_odom',
        '_odom_x',
        '_odom_y',
        '_odom_theta',
        '_header_robot',
        '_robot_x',
        '_robot_y',
        '_robot_theta',
    ]

    _fields_and_field_types = {
        'header_odom': 'string',
        'odom_x': 'double',
        'odom_y': 'double',
        'odom_theta': 'double',
        'header_robot': 'string',
        'robot_x': 'double',
        'robot_y': 'double',
        'robot_theta': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.header_odom = kwargs.get('header_odom', str())
        self.odom_x = kwargs.get('odom_x', float())
        self.odom_y = kwargs.get('odom_y', float())
        self.odom_theta = kwargs.get('odom_theta', float())
        self.header_robot = kwargs.get('header_robot', str())
        self.robot_x = kwargs.get('robot_x', float())
        self.robot_y = kwargs.get('robot_y', float())
        self.robot_theta = kwargs.get('robot_theta', float())

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
        if self.header_odom != other.header_odom:
            return False
        if self.odom_x != other.odom_x:
            return False
        if self.odom_y != other.odom_y:
            return False
        if self.odom_theta != other.odom_theta:
            return False
        if self.header_robot != other.header_robot:
            return False
        if self.robot_x != other.robot_x:
            return False
        if self.robot_y != other.robot_y:
            return False
        if self.robot_theta != other.robot_theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header_odom(self):
        """Message field 'header_odom'."""
        return self._header_odom

    @header_odom.setter
    def header_odom(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'header_odom' field must be of type 'str'"
        self._header_odom = value

    @builtins.property
    def odom_x(self):
        """Message field 'odom_x'."""
        return self._odom_x

    @odom_x.setter
    def odom_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odom_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'odom_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._odom_x = value

    @builtins.property
    def odom_y(self):
        """Message field 'odom_y'."""
        return self._odom_y

    @odom_y.setter
    def odom_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odom_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'odom_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._odom_y = value

    @builtins.property
    def odom_theta(self):
        """Message field 'odom_theta'."""
        return self._odom_theta

    @odom_theta.setter
    def odom_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odom_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'odom_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._odom_theta = value

    @builtins.property
    def header_robot(self):
        """Message field 'header_robot'."""
        return self._header_robot

    @header_robot.setter
    def header_robot(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'header_robot' field must be of type 'str'"
        self._header_robot = value

    @builtins.property
    def robot_x(self):
        """Message field 'robot_x'."""
        return self._robot_x

    @robot_x.setter
    def robot_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robot_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'robot_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._robot_x = value

    @builtins.property
    def robot_y(self):
        """Message field 'robot_y'."""
        return self._robot_y

    @robot_y.setter
    def robot_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robot_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'robot_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._robot_y = value

    @builtins.property
    def robot_theta(self):
        """Message field 'robot_theta'."""
        return self._robot_theta

    @robot_theta.setter
    def robot_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robot_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'robot_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._robot_theta = value
