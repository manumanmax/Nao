#include "Object.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
Object::Object(Mat& img, const string name):img(img),name(name){
    computedMatrix = Mat::zeros(img.size(), CV_32F);
};
Object::~Object()
{
    //dtor
}


void Object::show(){
    imshow(name,img);
}
void Object::showComputed(){
    imshow(name,computedMatrix);
}


void Object::resizeObject(unsigned short divisor){
    Mat dst = Mat::zeros(img.rows/divisor,img.cols/divisor,img.type());
    resize(img, dst, dst.size(), 0, 0, INTER_NEAREST );
    img = dst;
}

unsigned int Object::extract_feature(Feature& feature){
    return feature.extractIn(computedMatrix);
}

void Object::preTreat(){
    resizeObject(2);
    cvtColor(img,computedMatrix,CV_BGR2GRAY);
}

void Object::noPreTreat(){
    computedMatrix = img;
}
