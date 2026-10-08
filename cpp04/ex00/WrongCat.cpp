#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << GREEN << "WrongCat default constructor called."
        << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
    std::cout << GREEN << "WrongCat copy constructor called."
        << RESET << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat& src)
{
    std::cout << GREEN << "WrongCat copy assignment constructor called."
        << RESET << std::endl;
    if (this != &src)
        WrongAnimal::operator=(src);
    return (*this); 
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat Destructor called." << RESET << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << YELLOW << "Miau miau" << RESET << std::endl;
}
