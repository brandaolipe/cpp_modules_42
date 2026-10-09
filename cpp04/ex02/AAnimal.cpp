#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Generic")
{
    std::cout << GREEN << "AAnimal default constructor called."
        << RESET << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << GREEN << "AAnimal " << _type << " constructor called."
        << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) : _type(src._type)
{
    std::cout << GREEN << "AAnimal copy constructor called."
        << RESET << std::endl;
}

AAnimal  &AAnimal::operator=(const AAnimal& src)
{
    std::cout << GREEN << "AAnimal copy assignment constructor called."
        << RESET << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << RED << "AAnimal Destructor called." << RESET << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->_type);
}