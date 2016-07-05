#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <opencv2/core.hpp>

using namespace cv;
using namespace std;

#define ALPHA 2




/// Function header
void thresh_callback(int, void* );
void erode_callback(int, void* );

void mainAllessandro(Mat& src);
void showImageStop(Mat& img,string name);
void erode_callback(int, void* );
void thresh_callback(int, void* );
void contrast_enhance(Mat& img);


#endif // TEST_H_INCLUDED
