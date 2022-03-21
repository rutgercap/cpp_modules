#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	public:
		Fixed	(const Fixed &to_copy);
		Fixed	(const int value);
		Fixed	(const float value);
		Fixed	(void);
		~Fixed	();

		Fixed	&operator=(const Fixed &fixed);
		Fixed	operator*(const Fixed &fixed);
		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
		Fixed	operator/(const Fixed &fixed);
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		Fixed	operator++(int value);
		Fixed	&operator++();
		Fixed	operator--(int value);
		Fixed	&operator--();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static	Fixed const	&min(const Fixed &first, const Fixed &second);
		static	Fixed const	&max(const Fixed &first, const Fixed &second);
		static	Fixed		&min(Fixed &first, Fixed &second);
		static	Fixed		&max(Fixed &first, Fixed &second);

	private:
		static const int	fractionalBits = 8;
		int					fixedNumber;
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);

#endif
