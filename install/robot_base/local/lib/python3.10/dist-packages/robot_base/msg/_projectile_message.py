# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_base:msg/ProjectileMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProjectileMessage(type):
    """Metaclass of message 'ProjectileMessage'."""

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
                'robot_base.msg.ProjectileMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__projectile_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__projectile_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__projectile_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__projectile_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__projectile_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProjectileMessage(metaclass=Metaclass_ProjectileMessage):
    """Message class 'ProjectileMessage'."""

    __slots__ = [
        '_goaldistance',
        '_goalangle',
        '_robotdistance',
        '_robotangle',
    ]

    _fields_and_field_types = {
        'goaldistance': 'double',
        'goalangle': 'double',
        'robotdistance': 'double',
        'robotangle': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goaldistance = kwargs.get('goaldistance', float())
        self.goalangle = kwargs.get('goalangle', float())
        self.robotdistance = kwargs.get('robotdistance', float())
        self.robotangle = kwargs.get('robotangle', float())

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
        if self.goaldistance != other.goaldistance:
            return False
        if self.goalangle != other.goalangle:
            return False
        if self.robotdistance != other.robotdistance:
            return False
        if self.robotangle != other.robotangle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goaldistance(self):
        """Message field 'goaldistance'."""
        return self._goaldistance

    @goaldistance.setter
    def goaldistance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goaldistance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'goaldistance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._goaldistance = value

    @builtins.property
    def goalangle(self):
        """Message field 'goalangle'."""
        return self._goalangle

    @goalangle.setter
    def goalangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goalangle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'goalangle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._goalangle = value

    @builtins.property
    def robotdistance(self):
        """Message field 'robotdistance'."""
        return self._robotdistance

    @robotdistance.setter
    def robotdistance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robotdistance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'robotdistance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._robotdistance = value

    @builtins.property
    def robotangle(self):
        """Message field 'robotangle'."""
        return self._robotangle

    @robotangle.setter
    def robotangle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robotangle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'robotangle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._robotangle = value
