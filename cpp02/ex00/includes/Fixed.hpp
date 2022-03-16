#ifndef FIXED_H
# define FIXED_H

class Fixed {
	public:
		Fixed (const Fixed &fixed);
		Fixed (void);
		~Fixed ();

		Fixed & operator = (const Fixed &Fixed);
		
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );

	private:
		static const int	fractionalBits = 8;
		int					fixedNumber;
};

#endif
