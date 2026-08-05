#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2 || (!av[1] || !av[1][0]))
	{
		std::cerr << "How to use:\n"
			<< "./harlFilter STRING\n\n"
			<< "The 'STRING' can be any valid string, or one of the following patterns:\n"
			<< "DEBUG, INFO, WARNING, ERROR.\n" << std::endl;
		return (1);
	}
	
	harl.harlFilter(av[1]);
	return (0);
}
