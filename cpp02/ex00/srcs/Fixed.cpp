#include "Fixed.hpp"
#include <iostream>

/*
	Constructors & destructors
*/
Fixed::Fixed(void): fixedNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &to_copy): fixedNumber(to_copy.fixedNumber) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

/*
	Operators
*/
Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixed) {
		setRawBits(fixed.getRawBits());
	}
	return *this;
}

/*
	Other functions
*/
int	Fixed::getRawBits(void) const {
	std::cout << "GetRawBits member function called" << std::endl;
	return Fixed::fixedNumber;
}

void	Fixed::setRawBits(int const raw) {
	fixedNumber = raw;
}
