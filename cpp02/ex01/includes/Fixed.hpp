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

		Fixed & operator = (const Fixed &Fixed);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		static const int	fractionalBits = 8;
		int					fixedNumber;
};

std::ostream& operator << (std::ostream& os, const Fixed &fixed);

#endif
