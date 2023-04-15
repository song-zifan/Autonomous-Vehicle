// Generated by gencpp from file first_circle_pathplanning/DetectFinal.msg
// DO NOT EDIT!


#ifndef FIRST_CIRCLE_PATHPLANNING_MESSAGE_DETECTFINAL_H
#define FIRST_CIRCLE_PATHPLANNING_MESSAGE_DETECTFINAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace first_circle_pathplanning
{
template <class ContainerAllocator>
struct DetectFinal_
{
  typedef DetectFinal_<ContainerAllocator> Type;

  DetectFinal_()
    : barrels_x()
    , barrels_y()
    , barrels_z()  {
      barrels_x.assign(0.0);

      barrels_y.assign(0.0);

      barrels_z.assign(0.0);
  }
  DetectFinal_(const ContainerAllocator& _alloc)
    : barrels_x()
    , barrels_y()
    , barrels_z()  {
  (void)_alloc;
      barrels_x.assign(0.0);

      barrels_y.assign(0.0);

      barrels_z.assign(0.0);
  }



   typedef boost::array<float, 8>  _barrels_x_type;
  _barrels_x_type barrels_x;

   typedef boost::array<float, 8>  _barrels_y_type;
  _barrels_y_type barrels_y;

   typedef boost::array<float, 8>  _barrels_z_type;
  _barrels_z_type barrels_z;





  typedef boost::shared_ptr< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> const> ConstPtr;

}; // struct DetectFinal_

typedef ::first_circle_pathplanning::DetectFinal_<std::allocator<void> > DetectFinal;

typedef boost::shared_ptr< ::first_circle_pathplanning::DetectFinal > DetectFinalPtr;
typedef boost::shared_ptr< ::first_circle_pathplanning::DetectFinal const> DetectFinalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator1> & lhs, const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator2> & rhs)
{
  return lhs.barrels_x == rhs.barrels_x &&
    lhs.barrels_y == rhs.barrels_y &&
    lhs.barrels_z == rhs.barrels_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator1> & lhs, const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace first_circle_pathplanning

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "47a5bbb1bcd3f2398868a84a6aefd851";
  }

  static const char* value(const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x47a5bbb1bcd3f239ULL;
  static const uint64_t static_value2 = 0x8868a84a6aefd851ULL;
};

template<class ContainerAllocator>
struct DataType< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "first_circle_pathplanning/DetectFinal";
  }

  static const char* value(const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[8] barrels_x\n"
"float32[8] barrels_y\n"
"float32[8] barrels_z\n"
"# int32 color[8]\n"
;
  }

  static const char* value(const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.barrels_x);
      stream.next(m.barrels_y);
      stream.next(m.barrels_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectFinal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::first_circle_pathplanning::DetectFinal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::first_circle_pathplanning::DetectFinal_<ContainerAllocator>& v)
  {
    s << indent << "barrels_x[]" << std::endl;
    for (size_t i = 0; i < v.barrels_x.size(); ++i)
    {
      s << indent << "  barrels_x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.barrels_x[i]);
    }
    s << indent << "barrels_y[]" << std::endl;
    for (size_t i = 0; i < v.barrels_y.size(); ++i)
    {
      s << indent << "  barrels_y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.barrels_y[i]);
    }
    s << indent << "barrels_z[]" << std::endl;
    for (size_t i = 0; i < v.barrels_z.size(); ++i)
    {
      s << indent << "  barrels_z[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.barrels_z[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FIRST_CIRCLE_PATHPLANNING_MESSAGE_DETECTFINAL_H