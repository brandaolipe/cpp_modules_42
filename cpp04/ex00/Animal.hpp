#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define BOLD	"\033[1m"

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& src);
		Animal	&operator=(const Animal& src);
		virtual	~Animal();

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string	_type;
};

#endif