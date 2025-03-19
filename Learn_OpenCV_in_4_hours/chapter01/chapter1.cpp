#include <print>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>



int main(int argc, char** argv){

    std::string path = "../Resources/book.jpg";
    cv::Mat img = cv::imread(path, cv::IMREAD_COLOR);
    cv::imshow("Image", img);

    cv::waitKey(0);
    // std::println("hello, from chapter01!");
    return 0;
}
