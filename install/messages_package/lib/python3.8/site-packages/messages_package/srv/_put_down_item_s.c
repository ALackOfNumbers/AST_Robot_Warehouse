// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from messages_package:srv/PutDownItem.idl
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
#include "messages_package/srv/detail/put_down_item__struct.h"
#include "messages_package/srv/detail/put_down_item__functions.h"

bool messages_package__msg__item__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * messages_package__msg__item__convert_to_py(void * raw_ros_message);
bool messages_package__msg__coordinates__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * messages_package__msg__coordinates__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool messages_package__srv__put_down_item__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("messages_package.srv._put_down_item.PutDownItem_Request", full_classname_dest, 55) == 0);
  }
  messages_package__srv__PutDownItem_Request * ros_message = _ros_message;
  {  // item
    PyObject * field = PyObject_GetAttrString(_pymsg, "item");
    if (!field) {
      return false;
    }
    if (!messages_package__msg__item__convert_from_py(field, &ros_message->item)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // location
    PyObject * field = PyObject_GetAttrString(_pymsg, "location");
    if (!field) {
      return false;
    }
    if (!messages_package__msg__coordinates__convert_from_py(field, &ros_message->location)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * messages_package__srv__put_down_item__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PutDownItem_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("messages_package.srv._put_down_item");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PutDownItem_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  messages_package__srv__PutDownItem_Request * ros_message = (messages_package__srv__PutDownItem_Request *)raw_ros_message;
  {  // item
    PyObject * field = NULL;
    field = messages_package__msg__item__convert_to_py(&ros_message->item);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "item", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // location
    PyObject * field = NULL;
    field = messages_package__msg__coordinates__convert_to_py(&ros_message->location);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "messages_package/srv/detail/put_down_item__struct.h"
// already included above
// #include "messages_package/srv/detail/put_down_item__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool messages_package__srv__put_down_item__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("messages_package.srv._put_down_item.PutDownItem_Response", full_classname_dest, 56) == 0);
  }
  messages_package__srv__PutDownItem_Response * ros_message = _ros_message;
  {  // success_or_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "success_or_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success_or_failure = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * messages_package__srv__put_down_item__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PutDownItem_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("messages_package.srv._put_down_item");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PutDownItem_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  messages_package__srv__PutDownItem_Response * ros_message = (messages_package__srv__PutDownItem_Response *)raw_ros_message;
  {  // success_or_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success_or_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success_or_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
