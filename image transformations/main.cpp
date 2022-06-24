#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    // resizing an image
    // Mat image = imread("/home/shreyas/opencv-cpp/image transformations/sample.jpeg");
    // cout<<image.rows<<" "<<image.cols<<endl;
    // imshow("image",image);
    // int high_width = 300,high_height = 250;
    // Mat resized_up_image;
    // resize(image,resized_up_image,Size(high_width,high_height),INTER_LINEAR);
    // imshow("Resized up image",resized_up_image);
    // int low_width = 150,low_height = 85;
    // Mat resized_down_image;
    // resize(image,resized_down_image,Size(low_width,low_height),INTER_LINEAR);
    // imshow("Resized down image",resized_down_image);
    // imwrite("/home/shreyas/opencv-cpp/image transformations/resized_up.jpeg",resized_up_image);
    // imwrite("/home/shreyas/opencv-cpp/image transformations/resized_down.jpeg",resized_down_image);
    // waitKey(0);
    // destroyAllWindows();

    // crop an image
    // Mat image = imread("/home/shreyas/opencv-cpp/image transformations/sample.jpeg");
    // cout<<image.rows<<" "<<image.cols<<endl;
    // imshow("image",image);
    // Mat crop_image = image(Range(30,70),Range(100,175));
    // imshow("cropped image",crop_image);
    // imwrite("/home/shreyas/opencv-cpp/image transformations/cropped.jpeg",crop_image);
    // waitKey(0);
    // destroyAllWindows();

    //rotation of images
    // Mat image = imread("/home/shreyas/opencv-cpp/image transformations/sample.jpeg");
    // imshow("image",image);
    // double angle = 45;
    // Point2f center((image.cols-1)/2,(image.rows-1)/2);
    // Mat rotation_mat = getRotationMatrix2D(center,angle,1.0);
    // Mat rotated_img;
    // warpAffine(image,rotated_img,rotation_mat,image.size());
    // imshow("rotated image",rotated_img);
    // imwrite("/home/shreyas/opencv-cpp/image transformations/rotated.jpeg",rotated_img);
    // waitKey(0);
    // destroyAllWindows();
    // return 0;
}