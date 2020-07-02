#include <cstdio>
#include "opencv.hpp" //opencv 的头文件

using namespace std;
using namespace cv; //opencv 的命名空间

void opencvVS_helloWorld() {
    printf("Hello Open CV!");
    Mat img = imread("resources/lena.jpg");  //因为 调试->工作目录 就是在项目目录下，所以这里可以写相对路径。
    imshow("lena", img);//显示图片6秒
    waitKey(6000);
}