﻿// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
using namespace cv;
int main(int argc, char** argv)
{
	for (auto& info : std::experimental::filesystem::directory_iterator(argv[1]))
	{
		string file = info.path().u8string();
		cout << file << endl;
		Mat image = imread(file, IMREAD_GRAYSCALE);
		name = "C:\\Users\\Michael\\source\\repos\\ConsoleApplication10\\x64\\Debug\\pos\\" + name;
		Size dsize(100, 100);
		Mat rimage;
		resize(image, rimage, dsize);
		imwrite(name, rimage);
	}
}



