#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << GREEN << "Cat default constructor called."
        << RESET << std::endl;
    this->brain = new Brain();
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
		Brain* newBrain = new Brain(*src.brain);
		delete this->brain;
		this->brain = newBrain;
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
