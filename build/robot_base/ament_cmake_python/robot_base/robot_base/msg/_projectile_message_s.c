// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_base:msg/ProjectileMessage.idl
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
#include "robot_base/msg/detail/projectile_message__struct.h"
#include "robot_base/msg/detail/projectile_message__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_base__msg__projectile_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("robot_base.msg._projectile_message.ProjectileMessage", full_classname_dest, 52) == 0);
  }
  robot_base__msg__ProjectileMessage * ros_message = _ros_message;
  {  // goaldistance
    PyObject * field = PyObject_GetAttrString(_pymsg, "goaldistance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goaldistance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goalangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "goalangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goalangle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robotdistance
    PyObject * field = PyObject_GetAttrString(_pymsg, "robotdistance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robotdistance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robotangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "robotangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robotangle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_base__msg__projectile_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ProjectileMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_base.msg._projectile_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ProjectileMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_base__msg__ProjectileMessage * ros_message = (robot_base__msg__ProjectileMessage *)raw_ros_message;
  {  // goaldistance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goaldistance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goaldistance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goalangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goalangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goalangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robotdistance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robotdistance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robotdistance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robotangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robotangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robotangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
