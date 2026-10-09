#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << GREEN << "Cat default constructor called."
        << RESET << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << GREEN << "Cat copy constructor called."
        << RESET << std::endl;
    this->brain = new Brain(*src.brain);
}

Cat	&Cat::operator=(const Cat& src)
{
    std::cout << GREEN << "Cat copy assignment constructor called."
        << RESET << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << RED << "Cat Destructor called." << RESET << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << YELLOW << "Miau miau" << RESET << std::endl;
}

Brain*  Cat::getBrain() const
{
    return (this->brain);
}
