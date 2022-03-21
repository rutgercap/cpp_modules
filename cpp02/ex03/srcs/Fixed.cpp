#include <Fixed.hpp>
#include <iostream>
#include <cmath>

/*
	Constructors and destructors
*/
Fixed::Fixed(void): fixedNumber(0) {
}

Fixed::Fixed(const Fixed &to_copy): fixedNumber(to_copy.fixedNumber) {
	fixedNumber = to_copy.fixedNumber;
}

Fixed::Fixed(const int value): fixedNumber(value) {
	fixedNumber = 0;
	fixedNumber = value << fractionalBits;
}

Fixed::Fixed(const float value): fixedNumber(value) {
	fixedNumber = 0;
	fixedNumber = roundf(value * (1 << fractionalBits));
}

Fixed::~Fixed(void) {
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed) {
		setRawBits(fixed.getRawBits());
	}
	return *this;
}

/*
	Arithmetic operators
*/
Fixed	Fixed::operator*(const Fixed &fixed) {
	return toFloat() * fixed.toFloat();
}

Fixed	Fixed::operator+(const Fixed &fixed) {
	return toFloat() + fixed.toFloat();
}

Fixed	Fixed::operator-(const Fixed &fixed) {
	return toFloat() - fixed.toFloat();
}

Fixed	Fixed::operator/(const Fixed &fixed) {
	return toFloat() / fixed.toFloat();
}

/*
	Comparison operators
*/
bool	Fixed::operator>(const Fixed &fixed) const {
	return toFloat() > fixed.toFloat();
}

bool	Fixed::operator<(const Fixed &fixed) const {
	return toFloat() < fixed.toFloat();
}

bool	Fixed::operator<=(const Fixed &fixed) const {
	return toFloat() <= fixed.toFloat();
}

bool	Fixed::operator>=(const Fixed &fixed) const {
	return toFloat() >= fixed.toFloat();
}

bool	Fixed::operator==(const Fixed &fixed) const {
	return toFloat() == fixed.toFloat();
}

bool	Fixed::operator!=(const Fixed &fixed) const {
	return toFloat() != fixed.toFloat();
}

/*
	Incrementors / decrementors
*/
Fixed &Fixed::operator++() {
	fixedNumber++;
	return *this;
}

Fixed Fixed::operator++(int value) {
	(void)value;
	Fixed copy(*this);
	++(*this);
	return copy;
}

Fixed &Fixed::operator--() {
	fixedNumber--;
	return *this;
}

Fixed Fixed::operator--(int value) {
	(void)value;
	Fixed copy(*this);
	--(*this);
	return copy;
}

/*
	Ostream
*/
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
	return Fixed::fixedNumber;
}

void	Fixed::setRawBits(int const raw) {
	fixedNumber = raw;
}

/*
	min max functions
*/
Fixed const	&Fixed::min(const Fixed &first, const Fixed &second) {
	return first > second ? second : first;
}

Fixed const	&Fixed::max(const Fixed &first, const Fixed &second) {
	return first > second ? first : second;
}

Fixed		&Fixed::min(Fixed &first, Fixed &second) {
	return first > second ? second : first;
}

Fixed		&Fixed::max(Fixed &first, Fixed &second) {
	return first > second ? first : second;
}
