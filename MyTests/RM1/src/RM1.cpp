#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>

using namespace cv;
using namespace std;

void detectHSColor(const cv::Mat &image,
                   double minHue, double maxHue,
                   double minSat, double maxSat,
                   double minVal, double maxVal,
                   cv::Mat &mask);

int main()
{
    Mat img = imread("../src/1.jpg");

    if (img.empty())
    {
        cout << "请确认文件名是否正确" << endl;
        return -1;
    }

    namedWindow("1", 0);
    resizeWindow("1", 1200, 800);
    imshow("1", img);

    Mat img1;
    img.copyTo(img1); //将生成的矩形画到一个新复制的图中

    //颜色提取
    Mat mask, mask_inverse;
    detectHSColor(img, 20, 40, 130, 255, 70, 255, mask);

    //膨胀操作
    Mat kernel = getStructuringElement(2, Size(5, 5));
    dilate(mask, mask, kernel, Point(-1, -1) , 2);
    namedWindow("2", 0);
    resizeWindow("2", 1200, 800);
    imshow("2", mask);
    

    //边缘检测
    Mat canny;
    Canny(mask, canny, 100, 200);

    //膨胀操作
    Mat kernel2 = getStructuringElement(0, Size(3, 3));
    dilate(canny, canny, kernel2);
    namedWindow("3", 0);
    resizeWindow("3", 1200, 800);
    imshow("3", canny);
    




    //轮廓发现与绘制
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;
    findContours(canny, contours, hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE);

    for (int i = 0; i < contours.size(); i++)
    {
        //最小外接矩形
        RotatedRect rrect = minAreaRect(contours[i]);
        Point2f points[4];
        rrect.points(points); //读取最小外接矩形的4个顶点

        //绘制旋转矩形
        for (int i = 0; i < 4; i++)
        {
            if (i == 3)
            {
                line(img1, points[i], points[0], Scalar(0, 255, 0), 2);
                break;
            }
            line(img1, points[i], points[i + 1], Scalar(0, 255, 0), 2);
        }
    }

    namedWindow("min", 0);
    resizeWindow("min", 1200, 800);
    imshow("min", img1);


    waitKey(0);
    return 0; 
    
}


/**
 * @brief detectHSColor 提取图像中具有特定颜色范围的区域，图像是3 通道 BGR 图像
 * @param image 输入图像，要求是 3 通道 BGR 图像
 * @param minHue  Hue 的最小值，Hue 范围 0-179 （Hue本质是个角度，在0-360之间，OpenCV 用 0-180 表示。0表示红色。）
 * @param maxHue  Hue 的最大值，Hue 范围 0-179
 * @param minSat Sat 的最小值，Sat 范围 0-255
 * @param maxSat Sat 的最大值，Sat 范围 0-255
 * @param minVal Val 的最小值，Val 范围 0-255
 * @param maxVal Val 的最大值，Val 范围 0-255
 * @param mask 提取出的区域
 */
//hsv分别表示颜色、饱和度、亮度
void detectHSColor(const cv::Mat &input,
                   double minHue, double maxHue,
                   double minSat, double maxSat,
                   double minVal, double maxVal,
                   cv::Mat &output)
{
    cv::Mat hsv, mask;
    cvtColor(input, hsv, COLOR_BGR2HSV);
    //将规定颜色范围内的像素变为白，其余变为黑，mask为一二值图。
    inRange(hsv, Scalar(minHue, minSat, minVal), Scalar(maxHue, maxSat, maxVal), mask);
    namedWindow("mask", 0);
    resizeWindow("mask", 1200, 800);
    imshow("mask", mask);
    output = mask;
/*    //将原图与mask图进行按位“与”操作，则得到规定颜色范围内的图,范围之外为黑色。
    bitwise_and(input, input, output, mask);
    namedWindow("output", 0);
    resizeWindow("output", 1200, 800);
    imshow("output", output);
*/
}

