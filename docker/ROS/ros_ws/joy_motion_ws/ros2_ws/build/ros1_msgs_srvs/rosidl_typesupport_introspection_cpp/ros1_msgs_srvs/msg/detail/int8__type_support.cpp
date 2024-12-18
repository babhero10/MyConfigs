// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros1_msgs_srvs:msg/Int8.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros1_msgs_srvs/msg/detail/int8__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros1_msgs_srvs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Int8_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros1_msgs_srvs::msg::Int8(_init);
}

void Int8_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros1_msgs_srvs::msg::Int8 *>(message_memory);
  typed_message->~Int8();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Int8_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros1_msgs_srvs::msg::Int8, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Int8_message_members = {
  "ros1_msgs_srvs::msg",  // message namespace
  "Int8",  // message name
  1,  // number of fields
  sizeof(ros1_msgs_srvs::msg::Int8),
  Int8_message_member_array,  // message members
  Int8_init_function,  // function to initialize message memory (memory has to be allocated)
  Int8_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Int8_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Int8_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros1_msgs_srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros1_msgs_srvs::msg::Int8>()
{
  return &::ros1_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::Int8_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros1_msgs_srvs, msg, Int8)() {
  return &::ros1_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::Int8_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
