#pragma once
#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include"Point.h";

using namespace std;
//class Point {
//private:
//	int x;
//	int	y;
//public:
//	Point() {};
//	Point(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//
//	int get_X() {
//		return x;
//	}
//
//	void set_X(int x) {
//		this->x = x;
//	}
//
//	int get_Y() {
//		return y;
//	}
//
//	void set_Y(int y) {
//		this->y = y;
//	}
//
//
//};
class Rectangle :public Point {
private:
	Point A;
	int lenth;
	int height;
public:

	Rectangle(Point A, int lenth, int height);

	int get_Lenth();
	int get_Height();

	Point get_A();
	Point get_B();
	Point get_C();
	Point get_D();

	void reSize(int delLenth, int delHeight);
	void replace(int delX, int delY);

	Rectangle& operator++();
	Rectangle& operator--();

	Rectangle& operator++(int d);
	Rectangle& operator--(int d);

	//Rectangle& operator-(Rectangle anotherRectangle);
	//Rectangle& operator-=(Rectangle anotherRectangle);

	int max_y();
	int max_x();
	int min_y();
	int min_x();

	Rectangle& operator+(Rectangle anotherRectangle);
	Rectangle& operator+=(Rectangle anotherRectangle);

};
