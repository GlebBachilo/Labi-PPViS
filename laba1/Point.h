#pragma once
#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;
class Point {
private:
	int x;
	int	y;
public:
	Point();
	Point(int x, int y);

	int get_X();
	void set_X(int x);

	int get_Y();
	void set_Y(int y);
	friend std::ostream& operator<<(std::ostream& out, const Point& p);
};