#include "../FileIO/FileInOut.h"
//#include <cv.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/video/tracking.hpp>
#include "settings.inl"
using namespace cv; //quick and dirty
#include <vector>
#include <tuple>


//void findSkyFromCannyImage(const Mat& cannyimg,vector<Point> (&edges)[2]);
auto skyDetect(const Mat& osrc)->vector<pair<double,double> >;
auto houghLine(const Mat& osrc)->vector<Vec4i>;
auto trajectoryDetect(const vector<Mat>& imgs,int index)->vector<vector<Point2f> > ;
Point vanishFromSky(const Mat& img);


Point vanishPointDecide(const Mat&,int index,const vector<Point> &,const vector<Vec4i> &,const vector<vector<Point2f> > &);