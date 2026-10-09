#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << GREEN << "Dog default constructor called."
        << RESET << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << GREEN << "Dog copy constructor called."
        << RESET << std::endl;
	this->brain = new Brain(*src.brain);
}

Dog	&Dog::operator=(const Dog& src)
{
	std::cout << GREEN << "Dog copy assignment constructor called."
        << RESET << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
    std::cout << RED << "Dog Destructor called." << RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << YELLOW << "Au au au" << RESET << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}
