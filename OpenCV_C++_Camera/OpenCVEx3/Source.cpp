#include <opencv2\opencv.hpp>

using namespace cv;

using namespace std;

int main() {

	Mat image, grey;

	namedWindow("Display window");

	VideoCapture cap(0);

	if (!cap.isOpened()) {

		cout << "cannot open camera";

	}

	while (true) {

		cap >> image;

		imshow("Display window", image);

		waitKey(1);

		cvtColor(image, grey, COLOR_BGR2GRAY);
		namedWindow("Greyscale");
		imshow("Grey Scale", grey);
		waitKey(1);
		

	}

	return 0;

}