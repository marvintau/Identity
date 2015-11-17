#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/nonfree/features2d.hpp>

#include <iostream>

void removeQRRegion(cv::Mat &image, int radius);

void getAnchors(cv::Mat &image, std::vector<cv::Point2f> &centerAnchors);