// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_base:msg/PositionMessage.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_base/msg/detail/position_message__struct.h"
#include "robot_base/msg/detail/position_message__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_base__msg__position_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_base.msg._position_message.PositionMessage", full_classname_dest, 48) == 0);
  }
  robot_base__msg__PositionMessage * ros_message = _ros_message;
  {  // header_odom
    PyObject * field = PyObject_GetAttrString(_pymsg, "header_odom");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->header_odom, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // odom_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odom_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odom_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // header_robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "header_robot");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->header_robot, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // robot_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robot_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robot_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_base__msg__position_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PositionMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_base.msg._position_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PositionMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_base__msg__PositionMessage * ros_message = (robot_base__msg__PositionMessage *)raw_ros_message;
  {  // header_odom
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->header_odom.data,
      strlen(ros_message->header_odom.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header_odom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odom_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // header_robot
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->header_robot.data,
      strlen(ros_message->header_robot.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header_robot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
