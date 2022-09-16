#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:
		Point	();
		Point	(const Point &to_copy);
		Point	(const float x, const float y);
		~Point	();

		Point	&operator=(const Point &point);

		Fixed	getX();
		Fixed	getY();

	private:
		const Fixed	x;
		const Fixed	y;
};

#endif
