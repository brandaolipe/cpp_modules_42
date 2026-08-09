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
		Fixed(const Fixed& src);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed	&operator=(Fixed const &src);
		~Fixed(void);
		int		getRawBits(void);
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &f);

#endif
