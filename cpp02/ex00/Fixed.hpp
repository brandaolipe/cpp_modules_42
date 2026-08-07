#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_fx_point_nb;
		static const int	_fract_part = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& src);
		~Fixed(void);
		Fixed	&operator=(Fixed const &src);
		int		getRawBits(void);
		void	setRawBits(int const raw);
};

#endif
