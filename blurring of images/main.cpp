#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;


int main()
{
    //Gaussian blur
    // Mat image  = imread("/home/shreyas/opencv-cpp/blurring of images/1.jpeg");
    // if(image.empty())
    // {
    //     cout<<" could not open the image"<<endl;
    //     return -1;
    // }
    // Mat blur_image,blur_image_;
    // GaussianBlur(image,blur_image,Size(3,3),0);
    // GaussianBlur(image,blur_image_,Size(5,5),0);
    // imshow("original image",image);
    // imshow("blurred image with 3X3 kernel",blur_image);
    // imshow("blurred image with 5X5 kernel",blur_image_);
    // waitKey(0);

    //normal blur
    // Mat image  = imread("/home/shreyas/opencv-cpp/blurring of images/1.jpeg");
    // if(image.empty())
    // {
    //     cout<<" could not open the image"<<endl;
    //     return -1;
    // }
    // Mat blur_image;
    // blur(image,blur_image,Size(3,3));
    // imshow("original image",image);
    // imshow("blurred image",blur_image);
    // waitKey(0);

    //median blur
    // Mat image  = imread("/home/shreyas/opencv-cpp/blurring of images/1.jpeg");
    // if(image.empty())
    // {
    //     cout<<" could not open the image"<<endl;
    //     return -1;
    // }
    // Mat blur_image;
    // medianBlur(image,blur_image,(3,3));
    // imshow("original image",image);
    // imshow("median blurred image",blur_image);
    // waitKey(0);
    // return 0;
}