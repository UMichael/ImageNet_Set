// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
#include <filesystem>
#include <Windows.h>
#include <string>

using namespace std;
using namespace cv;
int main(int argc, char** argv)
{
	int i = 1;
	for (auto& info : std::experimental::filesystem::directory_iterator(argv[1]))
	{
		
		//Mat img = imread(string( info), IMREAD_GRAYSCALE);
		string file = info.path().u8string();
		cout << file << endl;
		Mat image = imread(file, IMREAD_GRAYSCALE);
		string name= i + ".jpg";
		name = "C:\\Users\\Michael\\source\\repos\\ConsoleApplication10\\x64\\Debug\\pos\\" + name;
		Size dsize(100, 100);
		Mat rimage;
		resize(image, rimage, dsize);
		imwrite(name, rimage);
		i++;
	}
	system("Pause");
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
