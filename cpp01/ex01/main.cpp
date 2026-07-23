#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;

	Zombie* horde = zombieHorde(5, "steve");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie id:" << i << " named ";
		horde[i].announce();
	}
	std::cout << "\nClean up the mess\n"
		<< "-----------------------" << std::endl;
	delete[] horde;
	return (0);
}
