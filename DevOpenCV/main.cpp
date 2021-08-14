//
//  main.cpp
//  DevOpenCV
//
//  Created by sfky on 2021/8/14.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, const char * argv[]) {
    // insert code here...
    Mat  image;
    image = imread(argv[1]);
    namedWindow("Image", WINDOW_AUTOSIZE);
    imshow("Image", image);
    cout << "完成了!"<< endl;;
    waitKey(0);
    return 0;
}
