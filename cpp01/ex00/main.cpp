#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Zombie on the heap" << std::endl;
	std::cout << "------------------" <<std::endl;

	Zombie*	new_zombie = newZombie("Joe"); 

	new_zombie->announce();
	new_zombie->announce();

	delete new_zombie;
	
	std::cout << std::endl << "Zombies on the stack" << std::endl
		<< "--------------------" << std::endl;
	randomChump("Meg");
	randomChump("Tracy");
	return (0);
}
