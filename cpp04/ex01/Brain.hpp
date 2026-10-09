#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain& src);
		Brain	&operator=(const Brain& src);
		~Brain();

		void	setIdea(int idx, const std::string& idea);
		std::string	getIdea(int idx);

	private:
		static const int	_max_ideas = 100;
		std::string			_ideas[_max_ideas];
};

#endif