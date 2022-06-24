#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;


//detecting color of a pen
//trackbar is used to determine the minimum and maximum values of a color
//the detected image is the masked image
Mat imgHSV, mask;
int hmin = 90 , smin = 50 , vmin = 50;
int hmax = 130 , smax = 255 , vmax = 255;
int main()
{
    string path = "/home/shreyas/opencv-cpp/color detection/blue_image.png";
	Mat img = imread(path);
	cvtColor(img, imgHSV, COLOR_BGR2HSV);
	namedWindow("Trackbars", (640, 200));
	createTrackbar("Hue Min", "Trackbars", &hmin, 179);
	createTrackbar("Hue Max", "Trackbars", &hmax, 179);
	createTrackbar("Sat Min", "Trackbars", &smin, 255);
	createTrackbar("Sat Max", "Trackbars", &smax, 255);
	createTrackbar("Val Min", "Trackbars", &vmin, 255);
	createTrackbar("Val Max", "Trackbars", &vmax, 255);

	while (true) {

		Scalar lower(hmin, smin, vmin);
		Scalar upper(hmax, smax, vmax);
		inRange(imgHSV, lower, upper, mask);
		imshow("Image", img);
		imshow("Image HSV", imgHSV);
		imshow("Image Mask", mask);
		imwrite("/home/shreyas/opencv-cpp/color detection/output.jpeg",mask);
		waitKey(1);
	}
	destroyAllWindows();
	return 0;
}