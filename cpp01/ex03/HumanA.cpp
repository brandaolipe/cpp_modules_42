#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(
	std::string name,
	Weapon &weapon)
	: _name(name),
	  _weapon(weapon) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout << this->_name + " atacou com a arma " 
		<< this->_weapon.getType() + "!!!" << std::endl;
}
