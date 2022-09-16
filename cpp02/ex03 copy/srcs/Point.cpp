#include <Point.hpp>

/*
	Constructors and destructors
*/
Point::Point(void)
	: x(0), y(0) {
}

Point::Point(const Point &to_copy)
	: x(to_copy.x), y(to_copy.y) {
}

Point::Point(const float x, const float y)
	: x(x), y(y) {
}

Point::~Point(void) {
}

/*
	Operators
*/
Point &Point::operator=(const Point &point) {
	(void)point;
	return *this;
}

/*
	Getters
*/

Fixed	Point::getX() {
	return x;
}

Fixed	Point::getY() {
	return y;
}
