#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		ScavTrap &operator=(const ScavTrap& src);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif
