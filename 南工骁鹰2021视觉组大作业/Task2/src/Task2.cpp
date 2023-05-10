#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void detectHSColor(const cv::Mat &image,
                   double minHue, double maxHue,
                   double minSat, double maxSat,
                   double minVal, double maxVal,
                   cv::Mat &mask);

int main()
{
    Mat img;
    string filename;
    //string outname;      //读入文件名
    cout << "请输入要读取视频的文件名：";
    cin >> filename;
    // cout << "请输入要输出视频的地址和文件名：";  //../src/Q2RED.mp4
    // cin >> outname;

    VideoCapture capture(filename);
    if (!capture.isOpened())
    {
        cout << "视频加载失败!" << endl;
    }

    // capture >> img;

    // VideoWriter writer;
    // int codec = VideoWriter::fourcc('M','J','P','G'); //选择编码格式
    // double fps = 30.0;    //设置帧率
    // writer.open(outname, codec, fps, img.size());  //创建保存视频文件的视频流

    while (1)
    {
        capture >> img;
        if (img.empty())
        {
            cout << "ok" << endl;
            break;
        }
        imshow("0", img);

        //提取图像中具有特定颜色范围的区域
        Mat img_threshold1, img_threshold2, img_threshold;
        detectHSColor(img, 0, 25, 125, 255, 165, 255, img_threshold1);   //分离红色
        detectHSColor(img, 85, 115, 160, 255, 165, 255, img_threshold2); //分离蓝色
        img_threshold = img_threshold1 + img_threshold2;                 //合并，即可同时处理红蓝两种情况
        imshow("1", img_threshold);

        //膨胀操作2次
        Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
        dilate(img_threshold, img_threshold, kernel, Point(-1, -1), 2);
        //闭操作3次，均为消除非连通区域
        morphologyEx(img_threshold, img_threshold, MORPH_CLOSE, kernel, Point(-1, -1), 3);
        imshow("2", img_threshold);

        //轮廓发现与绘制
        vector<vector<Point>> contours;
        vector<Vec4i> hierarchy;
        findContours(img_threshold, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);

        for (int i = 0; i < contours.size(); i++) //遍历所有轮廓
        {
            double S = contourArea(contours[i]);

            //待打击装甲板的轮廓一定有上层父轮廓，没有同级和下层轮廓
            if (hierarchy[i][0] == -1 && hierarchy[i][1] == -1 && hierarchy[i][2] == -1 && hierarchy[i][3] != -1)
            {
                RotatedRect rrect = minAreaRect(contours[i]);
                Point2f points[4];
                rrect.points(points);          //读取最小外接矩形的4个顶点
                Point2f center = rrect.center; //最小外接矩形中心
                for (int i = 0; i < 4; i++)
                {
                    line(img, points[i], points[(i + 1) % 4], Scalar(0, 255, 255), 2); //绘制矩形， 黄色
                }
                circle(img, center, 2, Scalar(0, 255, 255), -1); //绘制矩形中心
                imshow("4", img);
            }

            //已命中装甲板的轮廓一定有上层父轮廓，有同级轮廓, 再用面积限制找到已击中装甲板
            else if (hierarchy[i][3] != -1 && S > 950 && S < 1350)
            {
                // drawContours(img, contours, i, Scalar(0, 255, 0), 4, 8);
                // imshow("4", img);

                RotatedRect rrect = minAreaRect(contours[i]);
                Point2f points[4];
                rrect.points(points);          //读取最小外接矩形的4个顶点
                Point2f center = rrect.center; //最小外接矩形中心
                for (int i = 0; i < 4; i++)
                {
                    line(img, points[i], points[(i + 1) % 4], Scalar(0, 255, 0), 2); //绘制矩形
                }
                circle(img, center, 2, Scalar(0, 255, 0), -1); //绘制矩形中心
                imshow("4", img);
            }

            //中心的R标志可来确定圆心，R的轮廓在最上层，无父、子轮廓且轮廓面积最小
            else if (hierarchy[i][2] == -1 && hierarchy[i][3] == -1 && S > 200 && S < 400)
            {
                //cout << S << endl;
                // drawContours(img, contours, i, Scalar(0, 255, 0), 4, 8);
                // imshow("4", img);
                RotatedRect rrect = minAreaRect(contours[i]);
                Point2f center = rrect.center;                 //最小外接矩形中心，即为旋转中心
                circle(img, center, 8, Scalar(0, 255, 0), -1); //绘制旋转中心，绿色
                imshow("4", img);
            }
        }

        //writer.write(img);

        waitKey(5);
    }
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
    output = mask;
}