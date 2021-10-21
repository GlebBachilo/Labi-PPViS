#include"Point.h";

Point::Point() {
	x = y = 0;
};
Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}

int Point::get_X()
{
	return x;
}

void Point::set_X(int x)
{
	this->x = x;
}

int Point::get_Y()
{
	return y;
}

void Point::set_Y(int y)
{
	this->y = y;
}

