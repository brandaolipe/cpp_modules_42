#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog& src);
		Dog	&operator=(const Dog& src);
		~Dog();

		void	makeSound() const;
		Brain*	getBrain() const;

	private:
		Brain*	brain;
};

#endif