#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " + _name + " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << "ScavTrap " + _name + " copy assignment constructor called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit_points = src._hit_points;
		this->_energy_points = src._energy_points;
		this->_attack_damage = src._attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " + _name + " destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target 
			<< ", causing " << _attack_damage << " points of damage! [Energy: " 
			<< _energy_points << "]" << std::endl;
	}
	else
		std::cout << "No more energy points!!!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " + _name + " is now in Gate keeper mode!" << std::endl;
}