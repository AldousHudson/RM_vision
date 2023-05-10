#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
using namespace cv;
using namespace std::chrono;

void drawRotateRect(Mat &img, RotatedRect rect);
double spd(double t);

int main()
{

    Mat img = Mat::zeros(640, 640, CV_8UC3);
    namedWindow("result");

    double t = 0; //t单位是毫秒
    double dt = 0;
    double res, angle;
    double len = 80;                //矩形中心到旋转中心距离
    double x, y;                    //旋转矩形中心的横纵坐标
    Size size = Size(60, 30);       //矩形尺寸
    Point center = Point(320, 320); //旋转中心坐标
    Point centers[5];               //5个旋转矩形的中心
    RotatedRect rects[5];           //5个旋转矩形

    cout << "请输入大风车初始角度（0-360°）：";
    cin >> angle;
    res = angle * M_PI / 180; //初始角度

    while (true)
    {
        auto up = steady_clock::now();
        Mat img1 = img.clone();
        circle(img, center, 2, Scalar(0, 0, 255), -1); //绘制旋转中心

        t = t + dt;
        //cout << t << endl;
        res = res + dt * spd(t);
        angle = res * 180 / M_PI;
        x = len * cos(res);
        y = len * sin(res);
        centers[0] = center + Point(x, y);
        rects[0] = RotatedRect(centers[0], size, angle);
        drawRotateRect(img1, rects[0]);
        for (int i = 1; i < 5; i++)
        {
            res = res + 2 * M_PI / 5;
            x = len * cos(res);
            y = len * sin(res);
            angle = res * 180 / M_PI;
            centers[i] = center + Point(x, y);
            rects[i] = RotatedRect(centers[i], size, angle);
            drawRotateRect(img1, rects[i]);
        }

        imshow("result", img1);
        char c = waitKey(5);
        if (c == 27) //按“Esc”退出
        {
            break;
        }

        auto down = steady_clock::now();
        auto d = duration_cast<duration<double, micro>>(down - up);
        dt = d.count() / 1000000;

        //cout << dt << endl;
    }

    return 0;
}

void drawRotateRect(Mat &img, RotatedRect rect)
{

    Point2f points[4];
    rect.points(points);          //读取旋转矩形的4个顶点
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
