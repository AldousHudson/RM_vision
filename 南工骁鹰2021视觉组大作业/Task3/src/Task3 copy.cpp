#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>
//#include <chrono>

using namespace std;
using namespace cv;
//using namespace chrono;

void drawRotateRect(Mat &img, RotatedRect rect);
double spd(double t);
double integral(double (*func)(double), double min, double max, long n=10000); //定积分由速度求得弧度

int main()
{
    Mat img = Mat::zeros(640, 640, CV_8UC3);
    namedWindow("result");

    double t = 0;         //t单位是毫秒
    double res , angle;
    double res0, angle0;  //初始角度
    double len = 80;     //矩形中心到旋转中心距离
    double x, y;          //旋转矩形中心的横纵坐标
    Size size = Size(60, 30);  //矩形尺寸
    Point center = Point(320, 320);//旋转中心坐标
    Point centers[5];      //5个旋转矩形的中心
    RotatedRect rects[5];  //5个旋转矩形

    cout << "请输入大风车初始角度（0-360°）：";
    cin >> angle0;
    res0 = angle0 * M_PI / 180;

    while (true)
    {
        Mat img1 = img.clone();
        circle(img, center, 2, Scalar(0, 0, 255), -1); //绘制旋转中心

        cout << t/1000 << endl;

        res = integral(spd, 0, t/1000) - res0;     //从0到t积分求得当前弧度0        
        angle = res * 180 / M_PI;
        x = len * cos(res);
        y = len * sin(res);
        centers[0] = center + Point(x, y);
        rects[0] = RotatedRect(centers[0], size, angle);
        drawRotateRect(img1, rects[0]);
        for (int i = 1; i < 5; i++)
        {
            res = res + 2*M_PI / 5;
            x = len * cos(res);
            y = len * sin(res);
            angle = res * 180 / M_PI;
            centers[i] = center + Point(x, y);
            rects[i] = RotatedRect(centers[i], size, angle);
            drawRotateRect(img1, rects[i]);
        }
        
        imshow("result", img1);
        char c = waitKey(1);
        if (c == 27)  //按“Esc”退出
        {
            break;
        }
        
        t = t + 1;

    }

    return 0;
}

void drawRotateRect(Mat &img, RotatedRect rect)
{

    Point2f points[4];
    rect.points(points); //读取旋转矩形的4个顶点
    Point2f center = rect.center; //矩形中心
    for (int i = 0; i < 4; i++)
    {
        line(img, points[i], points[(i + 1) % 4], Scalar(0, 0, 255), 2); //绘制矩形，红色  
    }
    circle(img, center, 2, Scalar(0, 0, 255), -1); //绘制矩形中心
}

double spd(double t)
{
    return 0.785 * sin(1.884 * t) + 1.305;
}

double integral(double (*func)(double), double min, double max, long n)
{
    double x, dx, sum;
    sum = 0;
    dx = (max - min) / n;
    x = min + 0.5 * dx;    //使用分割区间中点的函数值计算曲边梯形面积
    for (long i = 0; i < n; i++)
    {
        sum = sum + func(x) * dx;
        x = x + dx;
    }
    return sum;
}

