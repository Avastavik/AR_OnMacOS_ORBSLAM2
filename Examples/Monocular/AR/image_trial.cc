#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>


using namespace std;
using namespace cv;

int main ( int argc, char** argsv){
  cout<<"Hi" <<endl;
  namedWindow("Display window");
  Mat image;

  VideoCapture cap(0);

  if (!cap.isOpened()) {

    cout << "cannot open camera";
  }


  while (true) {

    cap >> image;
    imshow("Display window", image);


    char c = waitKey(10);
    if(c == 27){
      cout<<"Esc detected. Exiting now";
      break;
    }

    }

    return 0;
}
