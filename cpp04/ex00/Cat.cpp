#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << GREEN << "Cat default constructor called."
        << RESET << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << GREEN << "Cat copy constructor called."
        << RESET << std::endl;
}

Cat	&Cat::operator=(const Cat& src)
{
    std::cout << GREEN << "Cat copy assignment constructor called."
        << RESET << std::endl;
    if (this != &src)
        Animal::operator=(src);
    return (*this);
}

Cat::~Cat()
{
    std::cout << RED << "Cat Destructor called." << RESET << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << YELLOW << "Miau miau" << RESET << std::endl;
}
