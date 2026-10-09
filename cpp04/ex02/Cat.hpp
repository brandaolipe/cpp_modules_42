#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal
{
    public:
		Cat();
		Cat(const Cat& src);
		Cat	&operator=(const Cat& src);
		~Cat();

		void	makeSound() const;
		Brain*	getBrain() const;

	private:
		Brain*	brain;
};

#endif