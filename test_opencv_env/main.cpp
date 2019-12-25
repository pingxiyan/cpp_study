
#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv) {
    cv::Mat src = cv::imread(argv[1]);

    cv::imshow("src", src);
    cv::waitKey(0);
}