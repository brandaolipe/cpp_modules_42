#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << GREEN << "Dog default constructor called."
        << RESET << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& src) : AAnimal(src)
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
		AAnimal::operator=(src);
		Brain* newBrain = new Brain(*src.brain);
		delete this->brain;
		this->brain = newBrain;
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
