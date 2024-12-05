#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

int Point::pointsCounter = 0;


void func(Point p) {
	p.print();
}

bool isEqual(const Point& p1, const Point& p2) {
	if (p1.getX() == p2.getX() && p1.getY() == p2.getY() && p1.getZ() == p2.getZ())
		return true;
	else
		return false;
}

Point addPoints(const Point& p1, const Point& p2) {
	int a = p1.getX() + p2.getX();
	int b = p1.getY() + p2.getY();
	int c = p1.getZ() + p2.getZ();
	return Point{a,b,c};
}



int main() {
	
	Point point1{10,11,12};//значения по умолчанию 0 0 0 
	Point point2{0,0,0};

	cout << "CASTING" << endl;
	cout << (bool)point2 << endl;




	if (point1 == point2)
		cout << "Points are equal" << endl;
	else 
		cout << "Points are not equal" << endl;

	Point point3{ addPoints(point1, point2) };
	cout << "Point 3" << endl;
	point3.print();
}