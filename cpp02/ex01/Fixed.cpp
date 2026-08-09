#include "Fixed.hpp"

Fixed::Fixed(void) : _fx_point_nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	_fx_point_nb = src._fx_point_nb;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	_fx_point_nb = nb << _fract_part;
	std::cout << "Int constructor called" << std::endl;  
}

Fixed::Fixed(const float nb)
{
	_fx_point_nb = roundf(nb * (1 << _fract_part));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_fx_point_nb = src._fx_point_nb;
	return (*this);
}

int		Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fx_point_nb);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fx_point_nb = raw;
}

float	Fixed::toFloat(void) const
{
	float	nb;

	nb = (float)_fx_point_nb / (1 << _fract_part);
	return (nb);
}

int	Fixed::toInt(void) const
{
	int	nb;

	nb = _fx_point_nb >> 8;
	return (nb);
}

std::ostream       &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
