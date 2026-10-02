#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_fx_point_nb;
		static const int	_fract_part = 8;

	public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed& src);
		Fixed	&operator=(Fixed const &src);
		~Fixed(void);

		int		getRawBits(void);
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(Fixed const &src) const;
		bool	operator<(Fixed const &src) const;
		bool	operator>=(Fixed const &src) const;
		bool	operator<=(Fixed const &src) const;
		bool	operator==(Fixed const &src) const;
		bool	operator!=(Fixed const &src) const;

		Fixed	operator*(Fixed const &src) const;
		Fixed	operator/(Fixed const &src) const;
		Fixed	operator+(Fixed const &src) const;
		Fixed	operator-(Fixed const &src) const;

		// The 4 increment/decrement
		Fixed	operator++(int);
		Fixed	&operator++(void);
		Fixed	operator--(int);
		Fixed	&operator--(void);

		static Fixed		&min(Fixed &first, Fixed &second);
		static Fixed		&max(Fixed &first, Fixed &second);
		static const Fixed	&min(Fixed const &first, Fixed const &second);
		static const Fixed	&max(Fixed const &first, Fixed const &second);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &f);

#endif
