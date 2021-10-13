#pragma once
#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include "rectangle.h";
#include "Point.h";


using namespace std;

int main() {
	Rectangle rect(Point(0, 1), 3, 8);
	Rectangle rect2(Point(2, 5), 6, 4);
	cout <<" Height : "<< rect.get_Lenth()<<" Lenth : "<< rect.get_Height() << endl;
	cout << " Height : " << rect2.get_Lenth() << " Lenth : " << rect2.get_Height() << endl;

	++rect;
	cout << " Height : " << rect.get_Lenth() << " Lenth : " << rect.get_Height() << endl;
	rect--;
	cout << " Height : " << rect.get_Lenth() << " Lenth : " << rect.get_Height() << endl;
	rect.reSize(3,5);
	cout << " Height : " << rect.get_Lenth() << " Lenth : " << rect.get_Height() << endl;
	rect += rect2;
	
	cout << " Height : " << rect.get_Lenth() << " Lenth : " << rect.get_Height() << endl;
	

	
	 
}
