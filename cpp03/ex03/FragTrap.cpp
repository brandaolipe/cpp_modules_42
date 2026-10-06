#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " + _name + " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap& src)
{
	std::cout << "FragTrap " + _name + " copy assignment constructor called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit_points = src._hit_points;
		this->_energy_points = src._energy_points;
		this->_attack_damage = src._attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " + _name + " destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (_hit_points > 0)
		std::cout << "Give me a high five!!!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " is already dead!" << std::endl;
}
