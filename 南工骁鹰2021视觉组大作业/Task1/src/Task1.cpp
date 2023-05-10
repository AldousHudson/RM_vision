#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void CDF(const Mat &hist, int bins, float cdf[]); //计算x的累积分布函数，此处x的取值范围为0-bin（255），返回一个储存所有x对应值的数组

int main()
{
    Mat img = imread("../src/附件2.jpeg");
    if (img.empty())
    {
        cout << "输入的文件名称有误";
    }
    imshow("", img);

    Mat redHist, greenHist, blueHist; //存放直方图绘制结果,这些都是有256个元素的一维数组

    int bins = 256;                 //设置子区域个数为256，分别对应256种灰度值
    const int histSize[1] = {bins}; //直方图的维度，将0-255的灰度划分为bins个子区域
    float inRanges[2] = {0, 255};
    const float *ranges[1] = {inRanges}; //像素灰度值范围

    //计算红色直方图
    const int channels_r[] = {2};
    calcHist(&img, 1, channels_r, Mat(), redHist, 1, histSize, ranges);
    //计算绿色直方图
    const int channels_g[] = {1};
    calcHist(&img, 1, channels_g, Mat(), greenHist, 1, histSize, ranges);
    //计算蓝色直方图
    const int channels_b[] = {0};
    calcHist(&img, 1, channels_b, Mat(), blueHist, 1, histSize, ranges);

    //分别计算三个通道中灰度数最大值,以便绘制直方图
    double maxValue_red, maxValue_green, maxValue_blue;
    minMaxLoc(redHist, 0, &maxValue_red, 0, 0);
    minMaxLoc(greenHist, 0, &maxValue_green, 0, 0);
    minMaxLoc(blueHist, 0, &maxValue_blue, 0, 0);

    int scale = 1;                                              //划分的每个子区域的宽度，此处为1
    int histHeight = 256;                                       //高度设置为256
    int histWidth = 256 * 3;                                    //将三种颜色的直方图绘制在一起，单种颜色的宽度为256，分别对应256种灰度值
    Mat hist1 = Mat::zeros(histHeight, histWidth, CV_8UC3); //创建黑图像，在其上画实心矩形以绘制直方图

    //绘制第i种灰度值的实心矩形，其宽度为scale，高度为灰度值数目
    for (int i = 0; i < bins; i++)
    {
        float red = redHist.at<float>(i); //使用float类型是为了接下来更好地进行除法运算
        float green = greenHist.at<float>(i);
        float blue = blueHist.at<float>(i);

        //计算灰度值数目应显示的高度，以灰度数最大值触碰到直方图最高点的比例计算其在直方图中的高度，且应换算至整数，即直方图归一化
        int int_red = cvRound(red / maxValue_red * histHeight);
        int int_green = cvRound(green / maxValue_green * histHeight);
        int int_blue = cvRound(blue / maxValue_blue * histHeight);

        //绘制红色分量直方图
        rectangle(hist1, Point(i * scale, histHeight - 1),
                  Point((i + 1) * scale - 1, histHeight - int_red),
                  Scalar(0, 0, 255), -1);
        //绘制绿色分量直方图
        rectangle(hist1, Point((i + bins) * scale, histHeight - 1),
                  Point((i + bins + 1) * scale - 1, histHeight - int_green),
                  Scalar(0, 255, 0), -1);
        //绘制蓝色分量直方图
        rectangle(hist1, Point((i + bins * 2) * scale, histHeight - 1),
                  Point((i + bins * 2 + 1) * scale - 1, histHeight - int_blue),
                  Scalar(255, 0, 0), -1);
    }
    imshow("hist1", hist1);

    //分离img的BGR通道
    Mat img_red, img_green, img_blue;
    Mat imgs[3];
    split(img, imgs);
    img_red = imgs[2];
    img_green = imgs[1];
    img_blue = imgs[0];

    float cdf_red[256], cdf_green[256], cdf_blue[256];
    CDF(redHist, bins, cdf_red);
    CDF(greenHist, bins, cdf_green);
    CDF(blueHist, bins, cdf_blue);

    //均衡化红色通道，灰度值映射公式为 F(x) = (N-1)CDF(x)+0.5 ，取四舍五入
    for (int i = 0; i < img_red.rows; i++)
    {
        for (int j = 0; j < img_red.cols; j++)
        {
            img_red.at<uchar>(i, j) = cvRound(254 * cdf_red[(int)img_red.at<uchar>(i, j)] + 0.5);
        }
    }
    //均衡化绿色通道
    for (int i = 0; i < img_green.rows; i++)
    {
        for (int j = 0; j < img_green.cols; j++)
        {
            img_green.at<uchar>(i, j) = cvRound(254 * cdf_green[(int)img_green.at<uchar>(i, j)] + 0.5);
        }
    }
    //均衡化蓝色通道
    for (int i = 0; i < img_blue.rows; i++)
    {
        for (int j = 0; j < img_blue.cols; j++)
        {
            img_blue.at<uchar>(i, j) = cvRound(254 * cdf_blue[(int)img_blue.at<uchar>(i, j)] + 0.5);
        }
    }
    //合并三个均衡化后的通道
    Mat result;
    merge(imgs, 3, result);
    imshow("result", result);

    //绘制均衡化后的直方图
    Mat hist2 = Mat::zeros(histHeight, histWidth, CV_8UC3); //创建黑图像，在其上画实心矩形以绘制直方图
    //计算红色直方图
    calcHist(&result, 1, channels_r, Mat(), redHist, 1, histSize, ranges);
    //计算绿色直方图
    calcHist(&result, 1, channels_g, Mat(), greenHist, 1, histSize, ranges);
    //计算蓝色直方图
    calcHist(&result, 1, channels_b, Mat(), blueHist, 1, histSize, ranges);

    //分别计算三个通道中灰度数最大值,以便绘制直方图
    minMaxLoc(redHist, 0, &maxValue_red, 0, 0);
    minMaxLoc(greenHist, 0, &maxValue_green, 0, 0);
    minMaxLoc(blueHist, 0, &maxValue_blue, 0, 0);

    //绘制第i种灰度值的实心矩形，其宽度为scale，高度为灰度值数目
    for (int i = 0; i < bins; i++)
    {
        float red = redHist.at<float>(i); //使用float类型是为了接下来更好地进行除法运算
        float green = greenHist.at<float>(i);
        float blue = blueHist.at<float>(i);

        //计算灰度值数目应显示的高度，以灰度数最大值触碰到直方图最高点的比例计算其在直方图中的高度，且应换算至整数，即直方图归一化
        int int_red = cvRound(red / maxValue_red * histHeight);
        int int_green = cvRound(green / maxValue_green * histHeight);
        int int_blue = cvRound(blue / maxValue_blue * histHeight);

        //绘制红色分量直方图
        rectangle(hist2, Point(i * scale, histHeight - 1),
                  Point((i + 1) * scale - 1, histHeight - int_red),
                  Scalar(0, 0, 255), -1);
        //绘制绿色分量直方图
        rectangle(hist2, Point((i + bins) * scale, histHeight - 1),
                  Point((i + bins + 1) * scale - 1, histHeight - int_green),
                  Scalar(0, 255, 0), -1);
        //绘制蓝色分量直方图
        rectangle(hist2, Point((i + bins * 2) * scale, histHeight - 1),
                  Point((i + bins * 2 + 1) * scale - 1, histHeight - int_blue),
                  Scalar(255, 0, 0), -1);
    }
    imshow("hist2", hist2);


    imwrite("../hist1.jpg", hist1);
    imwrite("../hist2.jpg", hist2);
    imwrite("../Q1.jpg", result);

    waitKey(0);
    return 0;
}

void CDF(const Mat &hist, int bins, float cdf[])
{
    float sum = 0;                
    for (int i = 0; i < bins; i++)
    {
        sum = sum + hist.at<float>(i);
    }
    float t;
    for (int x = 0; x < bins; x++)
    {
        t = 0;
        for (int i = 0; i <= x; i++)
        {
            t = t + hist.at<float>(i) / sum;
        }
        cdf[x] = t;
    }
}