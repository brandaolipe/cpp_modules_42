#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name),
	  _hit_points(10),
	  _energy_points(10),
	  _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
	: _name(src._name),
	  _hit_points(src._hit_points),
	  _energy_points(src._energy_points),
	  _attack_damage(src._attack_damage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& src)
{
	std::cout	<< "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit_points = src._hit_points;
		this->_energy_points = src._energy_points;
		this->_attack_damage = src._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
			<< ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "No more energy points!!!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	overkill;

	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	}
	else if (amount > _hit_points)
	{
		overkill = amount;
		amount = _hit_points;

		this->_hit_points -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << overkill << " points of damage!"
			<< " [ Hit points: " << this->_hit_points <<  " ]" << std::endl;
	}
	else
	{
		this->_hit_points -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!"
			<< " [ Hit points: " << this->_hit_points <<  " ]" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{	
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap" << this->_name << " is already dead!" << std::endl;
	}
	else if (this->_energy_points <= 0)
		std::cout << "No more energy points!!!" << std::endl;
	else
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name << " was healed " << amount << " hit points!"
			<< " [ Hit points: " << this->_hit_points <<  " ]"  << std::endl;
	}
}
