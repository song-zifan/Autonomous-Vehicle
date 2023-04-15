// Generated by gencpp from file serial_imu/Imu_0x62_msg.msg
// DO NOT EDIT!


#ifndef SERIAL_IMU_MESSAGE_IMU_0X62_MSG_H
#define SERIAL_IMU_MESSAGE_IMU_0X62_MSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <serial_imu/Imu_data_package.h>

namespace serial_imu
{
template <class ContainerAllocator>
struct Imu_0x62_msg_
{
  typedef Imu_0x62_msg_<ContainerAllocator> Type;

  Imu_0x62_msg_()
    : header()
    , tag(0)
    , gw_id(0)
    , node_num(0)
    , node_data()  {
    }
  Imu_0x62_msg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tag(0)
    , gw_id(0)
    , node_num(0)
    , node_data()  {
  (void)_alloc;
      node_data.assign( ::serial_imu::Imu_data_package_<ContainerAllocator> (_alloc));
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _tag_type;
  _tag_type tag;

   typedef uint8_t _gw_id_type;
  _gw_id_type gw_id;

   typedef uint8_t _node_num_type;
  _node_num_type node_num;

   typedef boost::array< ::serial_imu::Imu_data_package_<ContainerAllocator> , 16>  _node_data_type;
  _node_data_type node_data;





  typedef boost::shared_ptr< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> const> ConstPtr;

}; // struct Imu_0x62_msg_

typedef ::serial_imu::Imu_0x62_msg_<std::allocator<void> > Imu_0x62_msg;

typedef boost::shared_ptr< ::serial_imu::Imu_0x62_msg > Imu_0x62_msgPtr;
typedef boost::shared_ptr< ::serial_imu::Imu_0x62_msg const> Imu_0x62_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serial_imu::Imu_0x62_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::serial_imu::Imu_0x62_msg_<ContainerAllocator1> & lhs, const ::serial_imu::Imu_0x62_msg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.tag == rhs.tag &&
    lhs.gw_id == rhs.gw_id &&
    lhs.node_num == rhs.node_num &&
    lhs.node_data == rhs.node_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::serial_imu::Imu_0x62_msg_<ContainerAllocator1> & lhs, const ::serial_imu::Imu_0x62_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace serial_imu

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "83afb4dd1d120fe370f84d0e12c2a103";
  }

  static const char* value(const ::serial_imu::Imu_0x62_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x83afb4dd1d120fe3ULL;
  static const uint64_t static_value2 = 0x70f84d0e12c2a103ULL;
};

template<class ContainerAllocator>
struct DataType< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serial_imu/Imu_0x62_msg";
  }

  static const char* value(const ::serial_imu::Imu_0x62_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# 0x62  data_package\n"
"Header header\n"
"uint8 tag\n"
"uint8 gw_id\n"
"uint8 node_num\n"
"Imu_data_package[16] node_data\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: serial_imu/Imu_data_package\n"
"uint8 tag\n"
"uint8 bitmap\n"
"uint8 id\n"
"float32 prs\n"
"uint32 time\n"
"uint32 frame_rate\n"
"float32 acc_x\n"
"float32 acc_y\n"
"float32 acc_z\n"
"float32 gyr_x\n"
"float32 gyr_y\n"
"float32 gyr_z\n"
"float32 mag_x\n"
"float32 mag_y\n"
"float32 mag_z\n"
"float32 eul_r\n"
"float32 eul_p\n"
"float32 eul_y\n"
"float32 quat_w\n"
"float32 quat_x\n"
"float32 quat_y\n"
"float32 quat_z\n"
;
  }

  static const char* value(const ::serial_imu::Imu_0x62_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tag);
      stream.next(m.gw_id);
      stream.next(m.node_num);
      stream.next(m.node_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Imu_0x62_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serial_imu::Imu_0x62_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serial_imu::Imu_0x62_msg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tag);
    s << indent << "gw_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gw_id);
    s << indent << "node_num: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.node_num);
    s << indent << "node_data[]" << std::endl;
    for (size_t i = 0; i < v.node_data.size(); ++i)
    {
      s << indent << "  node_data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::serial_imu::Imu_data_package_<ContainerAllocator> >::stream(s, indent + "    ", v.node_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERIAL_IMU_MESSAGE_IMU_0X62_MSG_H