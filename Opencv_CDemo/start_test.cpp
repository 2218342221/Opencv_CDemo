#include <cstdio>
#include "opencv.hpp" //opencv ��ͷ�ļ�

using namespace std;
using namespace cv; //opencv �������ռ�

void opencvVS_helloWorld() {
    printf("Hello Open CV!");
    Mat img = imread("resources/lena.jpg");  //��Ϊ ����->����Ŀ¼ ��������ĿĿ¼�£������������д���·����
    imshow("lena", img);//��ʾͼƬ6��
    waitKey(6000);
}