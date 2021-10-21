#pragma once
#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include"Point.h"

using namespace std;

class Rectangle :public Point {
private:
	Point A;
	int lenth;
	int height;
public:
	Rectangle();
	Rectangle(Point A, int lenth, int height);

	int get_Lenth();
	int get_Height();
	void set_Lenth(int lenth);
	void set_Height(int height);

	void reSize(int delLenth, int delHeight);
	void replace(int delX, int delY);

	Rectangle& operator++();
	Rectangle& operator--();

	Rectangle& operator++(int d);
	Rectangle& operator--(int d);

	

	int max_y();
	int max_x();
	int min_y();
	int min_x();

	Point get_A();
	Point get_B();
	Point get_C();
	Point get_D();

	Rectangle& operator+(Rectangle anotherRectangle);
	Rectangle& operator+=(Rectangle anotherRectangle);

};