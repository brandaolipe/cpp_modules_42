#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	scav;
	ScavTrap	anotherScav("Namesake");
	ScavTrap	scav2(anotherScav);

	scav = anotherScav;

	scav.attack("Blue");
	scav.attack("Red");
	scav.takeDamage(25);
	scav.beRepaired(15);
	scav.takeDamage(5);
	scav.beRepaired(15);
	scav.guardGate();

	std::cout << "\n------- Attack time -------" << std::endl;
	for (int i = 0; i < 50; i++)
		scav.attack("steel block");

	return (0);
}