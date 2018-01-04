//头文件
#include<opencv2/objdetect/objdetect.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace cv;

//人脸检测的类
CascadeClassifier faceCascade;

int main()
{
	faceCascade.load("./haarcascade_frontalface_alt2.xml");   //加载分类器，注意文件路径

	Mat img = imread("./1.jpg");
	Mat imgGray;
	vector<Rect> faces;
	if(img.empty())
	{
	  return 1;
	}

	if(img.channels() ==3)
	{
	   cvtColor(img, imgGray, CV_RGB2GRAY);
	}
	else
	{
	   imgGray = img;
	}

	faceCascade.detectMultiScale(imgGray, faces, 1.2, 6, 0, Size(0, 0));   //检测人脸

	if(faces.size()>0)
	{
	   for(int i =0; i<faces.size(); i++)
	   {
	       rectangle(img, Point(faces[i].x, faces[i].y), Point(faces[i].x + faces[i].width, faces[i].y + faces[i].height), 
			               Scalar(0, 255, 0), 1, 8);    //框出人脸位置
	   }
	}

	imshow("FacesOfPrettyGirl", img);

	waitKey(0);
	return 0;
}
