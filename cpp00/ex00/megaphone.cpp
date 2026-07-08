#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		int j = 0;
		while (argv[i][j])
		{
			argv[i][j] = toupper(argv[i][j]);
			j++;
		}
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (0);
}
