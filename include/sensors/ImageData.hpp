/*
 * @Descripttion: Type of image sensor data
 * @Author: Xiaochen Qiu
 */

#ifndef IMAGE_DATA_HPP
#define IMAGE_DATA_HPP

#include "boost/shared_ptr.hpp"
#include "opencv2/core.hpp"

namespace larvio {

struct ImgData {
  double timeStampToSec;
  cv::Mat image;
};

typedef boost::shared_ptr<ImgData> ImageDataPtr;

}  // namespace larvio

#endif  // IMAGE_DATA_HPP