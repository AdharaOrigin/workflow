#include <iostream>

// #include "opencv2/opencv.hpp"

int main(int argc, char* argv[])
{
    std::cout << "Hello, World & Travis!" << std::endl;
    std::cout << argv[0] << std::endl;

    /*
    cv::VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    cv::namedWindow("RedCam");
    for(;;)
    {
        cv::Mat frame;
        cap >> frame; // get a new frame from camera
        cv::imshow("Red Cam", frame);
        if(cv::waitKey(30) >= 0) break;
    }
    */

    return 0;
}