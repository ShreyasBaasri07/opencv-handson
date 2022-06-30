#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    Mat img  = imread("/home/shreyas/opencv-cpp/edge detection/tiger.jpg");
    imshow("Original", img);
    Mat img_gray;
    cvtColor(img, img_gray, COLOR_BGR2GRAY);
    Mat img_blur;
    GaussianBlur(img_gray, img_blur, Size(3,3), 0);

    Mat sobelx, sobely, sobelxy;
    Sobel(img_blur, sobelx, CV_64F, 1, 0, 5);
    Sobel(img_blur, sobely, CV_64F, 0, 1, 5);
    Sobel(img_blur, sobelxy, CV_64F, 1, 1, 5);

    imshow("Sobel X", sobelx);
    imshow("Sobel Y", sobely);
    imshow("Sobel XY using Sobel() function", sobelxy);


    Mat edges;
    Canny(img_blur, edges, 100, 200, 3, false);
    imshow("Canny edge detection", edges);
    

    waitKey(0);
    destroyAllWindows();
    return 0;
}