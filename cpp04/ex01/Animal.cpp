#include "Animal.hpp"

Animal::Animal() : _type("Generic")
{
    std::cout << GREEN << "Animal default constructor called."
        << RESET << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << GREEN << "Animal " << _type << " constructor called."
        << RESET << std::endl;
}

Animal::Animal(const Animal& src) : _type(src._type)
{
    std::cout << GREEN << "Animal copy constructor called."
        << RESET << std::endl;
}

Animal  &Animal::operator=(const Animal& src)
{
    std::cout << GREEN << "Animal copy assignment constructor called."
        << RESET << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << RED << "Animal Destructor called." << RESET << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << YELLOW << "- Som irreconhecível -" << RESET << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}