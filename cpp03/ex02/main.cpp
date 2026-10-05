#include "FragTrap.hpp"

int main(void)
{
	FragTrap	frag("Lin");

	frag.attack("Marvin");
	frag.takeDamage(21);
	frag.beRepaired(1);
	frag.takeDamage(5);
	frag.beRepaired(1);
	frag.highFivesGuys();

	std::cout << "\n------- Taking damage -------" << std::endl;
	for (int i = 0; i < 8; i++)
		frag.takeDamage(15);

	frag.highFivesGuys();

	return (0);
}