#include <Point.hpp>
#include <iostream>

Fixed	CalcTriArea(Point a, Point b, Point c) {
	Fixed	result(0.0f);
  	result = ((a.getX() - c.getX()) * (b.getY() - c.getY())) - \
  	((b.getX() - c.getX()) * (a.getY() - c.getY()));
	return (result / 2.0f);
}

// binary space partitioning
bool bsp(Point const a, Point const b, Point const c, Point const point) {
  	Fixed	Area1 = CalcTriArea(point, b, c);
  	Fixed	Area2 = CalcTriArea(point, a, c);
  	Fixed	Area3 = CalcTriArea(point, a, b);

	if (((Area1 < 0) && (Area2 < 0) && (Area3 < 0)) || \
		((Area1 > 0) && (Area2 > 0) && (Area3 > 0)))
		return false;
	else
		return true;
}

void	test(Point const a, Point const b, Point const c, Point const point, int test) {
	std::cout << "test: " << test << ": ";
	if (bsp(a, b, c, point)) {
		std::cout << "true" << std::endl;
	} else {
		std::cout << "false" << std::endl;
	}
}

void	trial_1() {
	Point	a(1, 1);
	Point	b(1,5);
	Point	c(5,1);
	Point	to_find(3, 3);

	test(a, b, c, to_find, 1);
}

void	trial_2() {
	Point	a(1, 1);
	Point	b(1,5);
	Point	c(5,1);
	Point	to_find(1, 1);

	test(a, b, c, to_find, 2);
}

void	trial_3() {
	Point	a(1, 1);
	Point	b(1,5);
	Point	c(5,1);
	Point	to_find(0, 0);

	test(a, b, c, to_find, 3);
}

void	trial_4() {
	Point	a(0, 0);
	Point	b(1,5);
	Point	c(5,1);
	Point	to_find(1.1, 1.1);

	test(a, b, c, to_find, 4);
}

void	trial_5() {
	Point	a(1, 1);
	Point	b(1,5);
	Point	c(5,1);
	Point	to_find(10000, 10000);

	test(a, b, c, to_find, 5);
}

int	main(void) {
	trial_1();
	trial_2();
	trial_3();
	trial_4();
	trial_5();
}
