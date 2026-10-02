#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed		a(0);
		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ));

		std::cout << "value of 'a': " << a << std::endl;
		std::cout << "value of 'b': " << b << std::endl;

		std::cout << "\n--Increment and decrement--" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << --a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}

	Fixed		a(2);
	Fixed		b(5.05f);
	Fixed const	c(42);
	Fixed const d(9.8f);

	std::cout << "\nvalue of 'a': " << a << std::endl;
	std::cout << "value of 'b': " << b << std::endl;
	std::cout << "value of 'c': " << c << std::endl;
	std::cout << "value of 'd': " << d << std::endl;

	std::cout << "\n--Arithmetic operators--" << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "b / a: " << b / a << std::endl;
	std::cout << "b + a: "<< b + a << std::endl;
	std::cout << "b - a: " << b - a << std::endl;

	std::cout << "\n--Comparison operators--" << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "\n--Min and max functions--" << std::endl;
	std::cout << "Min a and b: " << Fixed::min(a, b) << std::endl;
	std::cout << "Max a and b: " << Fixed::max(a, b) << std::endl;
	std::cout << "Min c and d: " << Fixed::min(c, d) << std::endl;
	std::cout << "Max c and d: " << Fixed::max(c, d) << std::endl;

	return (0);
}