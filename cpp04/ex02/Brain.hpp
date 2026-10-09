#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"

class Brain
{
	public:
		Brain();
		Brain(const Brain& src);
		Brain	&operator=(const Brain& src);
		~Brain();

		void	setIdea(int idx, const std::string& idea);
		std::string	getIdea(int idx) const;

	private:
		static const int	_max_ideas = 100;
		std::string			_ideas[_max_ideas];
};

#endif