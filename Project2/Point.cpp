#include "Point.h"

bool Point::operator==(const Point& p) {
	if (x == p.getX() && y == p.getY() && z == p.getZ())
		return true;
	else
		return false;
}

Point Point::operator+(const Point& p) {
	return Point{ x+p.x, y+p.y, z+p.z };
}

Point Point::operator-(const Point& p) {
	return Point{ x - p.x, y - p.y, z - p.z };
}

Point Point::operator-() {
	return Point{ -x, -y, -z };
}

Point Point::operator*(const Point& p) {//p1*p2
	return Point{ x*p.x, y*p.y, z*p.z };
}

Point Point::operator*(int n) {//p*num
	return Point{ x*n, y*n, z*n };
}

	//unary operator
