#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("unnamed"),
	  _hit_points(10),
	  _energy_points(10),
	  _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name),
	  _hit_points(10),
	  _energy_points(10),
	  _attack_damage(0)
{
	std::cout << "ClapTrap " + _name + " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
	: _name(src._name),
	  _hit_points(src._hit_points),
	  _energy_points(src._energy_points),
	  _attack_damage(src._attack_damage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& src)
{
	std::cout	<< "ClapTrap copy assignment operator called" << std::endl;
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
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	overkill;

	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
	}
	else if (amount > _hit_points)
	{
		overkill = amount;
		amount = _hit_points;

		this->_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " takes " << overkill << " points of damage!"
			<< " [Hit points: " << _hit_points <<  "]" << std::endl;
	}
	else
	{
		this->_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!"
			<< " [Hit points: " << _hit_points <<  "]" << std::endl;
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
		std::cout << "ClapTrap " << _name << " was healed " << amount << " hit points!"
			<< " [Hit points: " << _hit_points <<  " | Energy: " << _energy_points << "]"  << std::endl;
	}
}
