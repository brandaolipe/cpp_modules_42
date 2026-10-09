#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain default constructor called."
        << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "food";
}

Brain::Brain(const Brain& src)
{
	std::cout << GREEN << "Brain copy constructor called."
        << RESET << std::endl;
	*this = other;
}

Brain	&operator=(const Brain& src)
{
	std::cout << GREEN << "Brain copy assignment constructor called."
        << RESET << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "Brain Destructor called." << RESET << std::endl;
}

void	Brain::setIdea(int idx, std::string idea)
{
	if (idx <= 99 && idx >= 0)
		_ideas[idx] = idea;
}

std::string	Brain::getIdea(int idx)
{
	if (idx <= 99 && idx >= _max_ideas)
		return (_ideas[idx]);
	return ("");
}
