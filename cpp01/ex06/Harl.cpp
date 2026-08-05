#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup "
		<< "burger. I really do!\n" << std::endl;	
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! If you did, "
		<< "I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years, whereas you started working "
		<< "here just last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n"
		<< std::endl;
}

void	Harl::harlFilter(std::string level)
{
	int	targetLevel = getLevel(level);

	switch (targetLevel)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			Harl::debug();			
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			Harl::info();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			Harl::warning();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			Harl::error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
	}
}

int		Harl::getLevel(std::string level)
{
	std::string	arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (arr[i] == level)
			return (i);
		i++;
	}
	return (i);
}
