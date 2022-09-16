#include <Fixed.hpp>
#include <iostream>
#include <cmath>

/*
	Constructors and destructors
*/
Fixed::Fixed(void): fixedNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &to_copy): fixedNumber(to_copy.fixedNumber) {
	std::cout << "Copy constructor called" << std::endl;
	fixedNumber = to_copy.fixedNumber;
}

Fixed::Fixed(const int value): fixedNumber(value) {
	std::cout << "Int constructor called" << std::endl;
	fixedNumber = 0;
	fixedNumber = value << fractionalBits;
}

Fixed::Fixed(const float value): fixedNumber(value) {
	std::cout << "Float constructor called" << std::endl;
	fixedNumber = 0;
	fixedNumber = roundf(value * (1 << fractionalBits));
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

std::ostream& operator<<( std::ostream& os, const Fixed &value ) {
	os << value.toFloat();
	return os;
}

/*
	Other functions
*/
float	Fixed::toFloat(void) const {
	int		sign = fixedNumber < 0 ? -1 : 1;
	float	value;

	value = (1.0 * fixedNumber) / 256;
	value = value * sign;
	return (value);
}

int	Fixed::toInt(void) const {
	int	res = fixedNumber;
	int	sign = res < 0 ? -1: 1;

	if (res < 0) {
		res = ~res + 1;
	}
	return ((res & 0xFFFFFF00) >> fractionalBits) * sign;
}

int	Fixed::getRawBits(void) const {
	std::cout << "GetRawBits member function called" << std::endl;
	return Fixed::fixedNumber;
}

void	Fixed::setRawBits(int const raw) {
	fixedNumber = raw;
}
