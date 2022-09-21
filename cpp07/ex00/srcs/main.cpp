#include "../includes/templates.hpp"
#include <iostream>

void testDoubleSwap() {
	int i = 0;
	int j = 10;

	::swap(i, j);
	std::cout << "---- Swap: int ----" << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "j: " << j << std::endl;
}

void testIntSwap() {
	double i = 0;
	double j = 10;

	::swap(i, j);
	std::cout << "---- Swap: double ----" << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << "j: " << j << std::endl;
}

void testDoubleMax() {
	double min = 0;
	double max = 10;
	double equal = 10;

	std::cout << "---- Max: double ----" << std::endl;
	std::cout << ::max(min, max) << std::endl;
	std::cout << ::max(min, max) << std::endl;
	std::cout << ::max(max, equal) << std::endl;
}

void testIntMax() {
	int min = 0;
	int max = 10;
	int equal = 10;

	std::cout << "---- Max: int ----" << std::endl;
	std::cout << ::max(min, max) << std::endl;
	std::cout << ::max(min, max) << std::endl;
	std::cout << ::max(max, equal) << std::endl;
}

void testDoubleMin() {
	double min = 0;
	double max = 10;
	double equal = 10;

	std::cout << "---- Min: double ----" << std::endl;
	std::cout << ::min(min, max) << std::endl;
	std::cout << ::min(min, max) << std::endl;
	std::cout << ::min(max, equal) << std::endl;
}

void testIntMin() {
	int min = 0;
	int max = 10;
	int equal = 10;

	std::cout << "---- Min: int ----" << std::endl;
	std::cout << ::min(min, max) << std::endl;
	std::cout << ::min(min, max) << std::endl;
	std::cout << ::min(max, equal) << std::endl;
}

int subjectTests() {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

int main(void) {
	testIntMax();
	testDoubleMax();
	testIntMin();
	testDoubleMin();
	testIntSwap();
	testDoubleSwap();
	std::cout << "---- subject tests ----" << std::endl;
	return subjectTests();
}
