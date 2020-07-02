#include <cstdio>
#include "opencv.hpp" //opencv 的头文件

using namespace std;
using namespace cv; //opencv 的命名空间

void opencvVS_helloWorld() {
    printf("Hello Open CV!");
    Mat img = imread("resources/lena.jpg");  //这个图片需要自己准备，放在project目录下，或者直接写绝对路径
    imshow("lena", img);//显示图片6秒
    waitKey(6000);
}