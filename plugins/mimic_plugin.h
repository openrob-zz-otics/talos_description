#include <boost/bind.hpp>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <stdio.h>

#include <gazebo/common/Plugin.hh>
#include <ros/ros.h>

namespace gazebo {
 class MimicPlugin : public ModelPlugin {
  private:
   bool kill_sim;
   physics::ModelPtr model_;
   physics::WorldPtr world_;
   std::string joint_name_;
   std::string mimic_joint_name_;
   double multiplier_;
   physics::JointPtr joint_;
   physics::JointPtr mimic_joint_;
   event::ConnectionPtr updateConnection; 
  
  public:
   MimicPlugin();
  ~MimicPlugin();
   void Load(physics::ModelPtr _parent, sdf::ElementPtr _sdf );
   void UpdateChild();
 };

}
