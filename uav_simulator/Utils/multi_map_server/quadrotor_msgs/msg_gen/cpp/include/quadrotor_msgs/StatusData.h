/* Auto-generated by genmsg_cpp for file /home/jchen/workspace/src/quadrotor_msgs/msg/StatusData.msg */
#ifndef QUADROTOR_MSGS_MESSAGE_STATUSDATA_H
#define QUADROTOR_MSGS_MESSAGE_STATUSDATA_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace quadrotor_msgs
{
template <class ContainerAllocator>
struct StatusData_ {
  typedef StatusData_<ContainerAllocator> Type;

  StatusData_()
  : header()
  , loop_rate(0)
  , voltage(0.0)
  , seq(0)
  {
  }

  StatusData_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , loop_rate(0)
  , voltage(0.0)
  , seq(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint16_t _loop_rate_type;
  uint16_t loop_rate;

  typedef double _voltage_type;
  double voltage;

  typedef uint8_t _seq_type;
  uint8_t seq;


  typedef boost::shared_ptr< ::quadrotor_msgs::StatusData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quadrotor_msgs::StatusData_<ContainerAllocator>  const> ConstPtr;
}; // struct StatusData
typedef  ::quadrotor_msgs::StatusData_<std::allocator<void> > StatusData;

typedef boost::shared_ptr< ::quadrotor_msgs::StatusData> StatusDataPtr;
typedef boost::shared_ptr< ::quadrotor_msgs::StatusData const> StatusDataConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::quadrotor_msgs::StatusData_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::quadrotor_msgs::StatusData_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace quadrotor_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::quadrotor_msgs::StatusData_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::quadrotor_msgs::StatusData_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::quadrotor_msgs::StatusData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c70a4ec4725273263ae176ad30f89553";
  }

  static const char* value(const  ::quadrotor_msgs::StatusData_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc70a4ec472527326ULL;
  static const uint64_t static_value2 = 0x3ae176ad30f89553ULL;
};

template<class ContainerAllocator>
struct DataType< ::quadrotor_msgs::StatusData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "quadrotor_msgs/StatusData";
  }

  static const char* value(const  ::quadrotor_msgs::StatusData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::quadrotor_msgs::StatusData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint16 loop_rate\n\
float64 voltage\n\
uint8 seq\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::quadrotor_msgs::StatusData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::quadrotor_msgs::StatusData_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::quadrotor_msgs::StatusData_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::quadrotor_msgs::StatusData_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.loop_rate);
    stream.next(m.voltage);
    stream.next(m.seq);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StatusData_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quadrotor_msgs::StatusData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::quadrotor_msgs::StatusData_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "loop_rate: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.loop_rate);
    s << indent << "voltage: ";
    Printer<double>::stream(s, indent + "  ", v.voltage);
    s << indent << "seq: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.seq);
  }
};


} // namespace message_operations
} // namespace ros

#endif // QUADROTOR_MSGS_MESSAGE_STATUSDATA_H

