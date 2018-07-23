// Generated by gencpp from file disp_cv/pos3dtime.msg
// DO NOT EDIT!


#ifndef DISP_CV_MESSAGE_POS3DTIME_H
#define DISP_CV_MESSAGE_POS3DTIME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace disp_cv
{
template <class ContainerAllocator>
struct pos3dtime_
{
  typedef pos3dtime_<ContainerAllocator> Type;

  pos3dtime_()
    : timestamp()
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  pos3dtime_(const ContainerAllocator& _alloc)
    : timestamp()
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::disp_cv::pos3dtime_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::disp_cv::pos3dtime_<ContainerAllocator> const> ConstPtr;

}; // struct pos3dtime_

typedef ::disp_cv::pos3dtime_<std::allocator<void> > pos3dtime;

typedef boost::shared_ptr< ::disp_cv::pos3dtime > pos3dtimePtr;
typedef boost::shared_ptr< ::disp_cv::pos3dtime const> pos3dtimeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::disp_cv::pos3dtime_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::disp_cv::pos3dtime_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace disp_cv

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'disp_cv': ['/home/harsh/ros_ws/src/disp_cv/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::disp_cv::pos3dtime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::disp_cv::pos3dtime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::disp_cv::pos3dtime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::disp_cv::pos3dtime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::disp_cv::pos3dtime_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::disp_cv::pos3dtime_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::disp_cv::pos3dtime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b3a345dba06884a6ee42beb55ab1ae4";
  }

  static const char* value(const ::disp_cv::pos3dtime_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b3a345dba06884aULL;
  static const uint64_t static_value2 = 0x6ee42beb55ab1ae4ULL;
};

template<class ContainerAllocator>
struct DataType< ::disp_cv::pos3dtime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "disp_cv/pos3dtime";
  }

  static const char* value(const ::disp_cv::pos3dtime_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::disp_cv::pos3dtime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time timestamp\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::disp_cv::pos3dtime_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::disp_cv::pos3dtime_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pos3dtime_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::disp_cv::pos3dtime_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::disp_cv::pos3dtime_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DISP_CV_MESSAGE_POS3DTIME_H