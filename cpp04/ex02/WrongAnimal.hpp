#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "AAnimal.hpp"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal	&operator=(const WrongAnimal& src);
		virtual	~WrongAnimal();

		void		makeSound() const;
		std::string	getType() const;

	protected:
		std::string	_type;
};

#endif
