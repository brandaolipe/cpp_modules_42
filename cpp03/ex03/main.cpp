#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	diamond("Amora");

	std::cout << "------- Testing functions -------\n";
	diamond.attack("random character");

	diamond.attack("Mr. Lemon");
	diamond.takeDamage(10);
	diamond.beRepaired(5);
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();

	diamond.takeDamage(110);
	diamond.whoAmI();
	return (0);
}
