#include <iostream>
#include <string>
#include <fstream>

void	replace_content(std::filename, std::target, std::replace, std::string line)
{
	std::ofstream	dest(filename + ".replace");
	// #########################################################
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: wrong number of parameters\n"
			<< "Expected: ./program \"filename\" \"string 1\" \"string 2\""
			<< std::endl;
			return (1);
	}
	else
	{
		std::string filename = av[1];
		std::string	target = av[2];
		std::string	replace = av[3];

		std::ifstream	source(filename);
		
		if (source.is_open())
		{
			std::string line;
			std::getline(source, line);
			source.close();
			replace_content(filename, target, replace, line);
		}
		else
		{
			std::cerr << "The file cannot be opened." << std::endl;
			return (1);
		}

	}
	return (0);
}

