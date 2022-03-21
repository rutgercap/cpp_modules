#include <Fixed.hpp>
#include <iostream>

void	comparison_tests() {
	Fixed	a(10);
	Fixed	b(1);
	Fixed	c(10);

	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a >= c) << std::endl;
	std::cout << (a <= c) << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << (a != c) << std::endl;
} 

void	arithmetic_tests() {
	Fixed	a(5);
	Fixed	b(5);
	Fixed	c = a + b;

	std::cout << c.toInt() << std::endl;
	a = a + 10;
	std::cout << a.toInt() << std::endl;
	a = a / 5;
	std::cout << a.toInt() << std::endl;
	a = a - 2;
	std:: cout << a.toInt() << std::endl;
}

int	main(void) {
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "------ Arithmetic tests: ------" << std::endl;
	arithmetic_tests();
	std::cout << "------ Comparison tests: ------" << std::endl;
	comparison_tests();
	std::cout << "------ Max test: ------" << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0; 
}
