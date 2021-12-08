// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from messages_package:msg/Delivery.idl
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
#include "messages_package/msg/detail/delivery__struct.h"
#include "messages_package/msg/detail/delivery__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "messages_package/msg/detail/item__functions.h"
// end nested array functions include
bool messages_package__msg__item__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * messages_package__msg__item__convert_to_py(void * raw_ros_message);
bool messages_package__msg__coordinates__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * messages_package__msg__coordinates__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool messages_package__msg__delivery__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("messages_package.msg._delivery.Delivery", full_classname_dest, 39) == 0);
  }
  messages_package__msg__Delivery * ros_message = _ros_message;
  {  // items
    PyObject * field = PyObject_GetAttrString(_pymsg, "items");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'items'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!messages_package__msg__Item__Sequence__init(&(ros_message->items), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create messages_package__msg__Item__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    messages_package__msg__Item * dest = ros_message->items.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!messages_package__msg__item__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * messages_package__msg__delivery__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Delivery */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("messages_package.msg._delivery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Delivery");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  messages_package__msg__Delivery * ros_message = (messages_package__msg__Delivery *)raw_ros_message;
  {  // items
    PyObject * field = NULL;
    size_t size = ros_message->items.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    messages_package__msg__Item * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->items.data[i]);
      PyObject * pyitem = messages_package__msg__item__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "items", field);
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
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
