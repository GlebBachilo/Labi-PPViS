
#include"rectangle.h";



Rectangle::Rectangle()	{

	lenth = 0;
	height = 0;
	}

Rectangle::Rectangle(Point A, int lenth, int height) {
		this->A = A;
		this->lenth = lenth;
		this->height = height;
	}

int Rectangle::get_Lenth()
{
	return lenth;
}

int Rectangle::get_Height()
{
	return height;
}

void Rectangle::set_Lenth(int lenth)
{
	this->lenth = lenth;
}

void Rectangle::set_Height(int height)
{
	this->height = height;
}

Point Rectangle::get_A()
{
	return A;
}

Point Rectangle::get_B()
{
	return Point(A.get_X() + lenth, A.get_Y());
}

Point Rectangle::get_C()
{
	return Point(A.get_X() + lenth, A.get_Y() - height);
}

Point Rectangle::get_D()
{
	return Point(A.get_X(), A.get_Y() - height);
}

	void Rectangle::reSize(int delLenth, int delHeight) {
		lenth += delLenth;
		height += delHeight;
	}

	void Rectangle::replace(int delX, int delY) {
		A.set_X(A.get_X() + delX);
		A.set_Y(A.get_Y() + delY);
	}

	Rectangle& Rectangle::operator++() {
		lenth++;
		height++;
		return *this;
	}

	Rectangle& Rectangle::operator--() {
		lenth--;
		height--;
		return *this;
	}

	Rectangle& Rectangle::operator++(int d) {
		lenth++;
		height++;
		return *this;
	}

	Rectangle& Rectangle::operator--(int d) {
		lenth--;
		height--;
		return *this;
	}
	
	int Rectangle::max_y()
	{
		return A.get_Y() + lenth;
	}

	int Rectangle::max_x()
	{
		return A.get_X() + height;
	}

	int Rectangle::min_y()
	{
		return A.get_Y();
	}

	int Rectangle::min_x()
	{
		return A.get_X();
	}


	Rectangle& Rectangle::operator+(Rectangle anotherRectangle)
	{
		int minx = min(this->min_x(), anotherRectangle.min_x());
		int miny = min(this->min_y(), anotherRectangle.min_y());
		int height = max(this->max_y(), anotherRectangle.max_y()) - miny;
		int lenght = max(this->max_x(), anotherRectangle.max_x()) - minx;
		Rectangle result = Rectangle(Point(minx, miny), lenght, height);
		return result;
	}

	Rectangle& Rectangle::operator+=(Rectangle anotherRectangle)
	{
		return  *this = *this + anotherRectangle;
	}

	std::ostream& operator<<(std::ostream& out, const Point& p)
	{
		cout <<" Point :("<<p.x<<","<<p.y<<")"<<endl;
		return out;
	}
