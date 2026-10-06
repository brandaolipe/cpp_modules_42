#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
    : ClapTrap(),
      FragTrap(),
      ScavTrap(),
      _name("unnamed")
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name),
      ScavTrap(name),
      _name(name)
{
	this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap " + _name + " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src),
	  FragTrap(src),
	  ScavTrap(src),
	  _name(src._name)
{
	
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& src)
{
	std::cout	<< "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		ClapTrap::operator=(src);
		this->_name = src._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	if (_hit_points > 0)
		std::cout << "My name is " + _name + ", and the claptrap name is " 
			<< ClapTrap::_name + ".\n"; 
	else
		std::cout << "DiamondTrap " << this->_name << " is already dead!" << std::endl;

}
