#include "Fixed.hpp"

Fixed::Fixed(void) : _fx_point_nb(0) {}

Fixed::Fixed(const Fixed& src)
{
	_fx_point_nb = src._fx_point_nb;
}

Fixed::Fixed(const int nb)
{
	_fx_point_nb = nb * (1 << _fract_part);
}

Fixed::Fixed(const float nb)
{
	_fx_point_nb = roundf(nb * (1 << _fract_part));
}

Fixed::~Fixed(void) {}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_fx_point_nb = src._fx_point_nb;
	return (*this);
}

int		Fixed::getRawBits(void)
{
	return (_fx_point_nb);
}

void	Fixed::setRawBits(int const raw)
{
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

// Comparison operators

bool	Fixed::operator>(Fixed const &src) const
{
	return (this->_fx_point_nb > src._fx_point_nb);
}

bool	Fixed::operator<(Fixed const &src) const
{
	return (this->_fx_point_nb < src._fx_point_nb);
}

bool	Fixed::operator>=(Fixed const &src) const
{
	return (this->_fx_point_nb >= src._fx_point_nb);
}

bool	Fixed::operator<=(Fixed const &src) const
{
	return (this->_fx_point_nb <= src._fx_point_nb);
}

bool	Fixed::operator==(Fixed const &src) const
{
	return (this->_fx_point_nb == src._fx_point_nb);
}

bool	Fixed::operator!=(Fixed const &src) const
{
	return (this->_fx_point_nb != src._fx_point_nb);
}

// Arithmetic operators

Fixed	Fixed::operator*(Fixed const &src) const
{
	Fixed	result;

	result._fx_point_nb = (this->_fx_point_nb * src._fx_point_nb) >> _fract_part;
	return (result);
}

Fixed	Fixed::operator/(Fixed const &src) const
{
	Fixed	result;

	result._fx_point_nb = (this->_fx_point_nb << _fract_part) / src._fx_point_nb;
	return (result);
}

Fixed	Fixed::operator+(Fixed const &src) const
{
	Fixed	result;

	result.setRawBits(this->_fx_point_nb + src._fx_point_nb);
	return (result);
}

Fixed	Fixed::operator-(Fixed const &src) const
{
	Fixed	result;

	result.setRawBits(this->_fx_point_nb - src._fx_point_nb);
	return (result);
}

// Increment/decrement operator

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->_fx_point_nb++;
	return (temp);
}

Fixed	&Fixed::operator++()
{
	this->_fx_point_nb++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_fx_point_nb--;
	return (temp);
}

Fixed	&Fixed::operator--()
{
	this->_fx_point_nb--;
	return (*this);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first._fx_point_nb > second._fx_point_nb)
		return (second);
	return (first);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first._fx_point_nb > second._fx_point_nb)
		return (first);
	return (second);
}

const Fixed	&Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first._fx_point_nb > second._fx_point_nb)
		return (second);
	return (first);
}

const Fixed	&Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first._fx_point_nb > second._fx_point_nb)
		return (first);
	return (second);
}
