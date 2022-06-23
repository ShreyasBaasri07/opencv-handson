#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    string path = "/home/shreyas/opencv-cpp/face detection/sample.jpeg";
	Mat img = imread(path);
	CascadeClassifier temp_cascade;
    temp_cascade.load("/home/shreyas/opencv-cpp/face detection/haarcascade_frontalface_default.xml");
    if(temp_cascade.empty())
    {
        cout<<"XML file was not found or loaded"<<endl;

    }
    vector<Rect> faces;
    temp_cascade.detectMultiScale(img,faces,1.1,10);
    for(int i=0;i<faces.size();i++)
    {
        rectangle(img,faces[i].tl(),faces[i].br(),Scalar(255,0,255),3);
    }
    imshow("detected face image",img);
	waitKey(0);
    return 0;
}