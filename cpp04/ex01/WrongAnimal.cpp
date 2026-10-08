#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Generic")
{
    std::cout << GREEN << "WrongAnimal default constructor called."
        << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << GREEN << "WrongAnimal " << _type << " constructor called."
        << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : _type(src._type)
{
    std::cout << GREEN << "WrongAnimal copy constructor called."
        << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& src)
{
    std::cout << GREEN << "Animal copy assignment constructor called."
        << RESET << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal Destructor called." << RESET << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << YELLOW << "- Som irreconhecível -" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}