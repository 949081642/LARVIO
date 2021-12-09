//
// Created by xiaochen at 19-8-21.
// Nodelet for system manager.
//

#ifndef SYSTEM_NODELET_H
#define SYSTEM_NODELET_H

#include <System.h>
#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>

namespace larvio {
class SystemNodelet : public nodelet::Nodelet {
 public:
  SystemNodelet() { return; }
  ~SystemNodelet() {
    // debug log
    std::cout << "in ~SystemNodelet()" << std::endl;
    return;
  }

 private:
  virtual void onInit();
  SystemPtr system_ptr;
};
}  // end namespace larvio

#endif  // SYSTEM_NODELET_H
