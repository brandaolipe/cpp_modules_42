#include <iostream>
#include <string>
#include <fstream>

void	replace_content(std::string &filename, std::string &target, std::string &replace)
{
	std::ifstream	source(filename.c_str());
	std::string new_file = filename + ".replace";
	std::ofstream	dest((new_file).c_str());
	std::string	line;
	std::size_t	pos_match;

	if (!dest.is_open())
	{
		std::cerr << "Error in the ofstream function, could not create the file." << std::endl;
		return ;
	}
	while (std::getline(source, line))
	{
		pos_match = line.find(target);
		while (pos_match != std::string::npos)
		{
			line.erase(pos_match, target.length());
			line.insert(pos_match, replace);
			pos_match = line.find(target, pos_match + replace.length());
		}
		dest << line << "\n";
	}
	source.close();
	dest.close();
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
		std::string target = av[2];
		std::string replace = av[3];

		std::ifstream	source(filename);
		
		if (source.is_open())
		{
			//std::string line;
			//std::getline(source, line);
			//source.close();
			replace_content(filename, target, replace);
		}
		else
		{
			std::cerr << "The file cannot be opened." << std::endl;
			return (1);
		}

	}
	return (0);
}

