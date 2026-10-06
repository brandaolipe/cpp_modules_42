#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const	FragTrap& src);
		FragTrap &operator=(const FragTrap& src);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif
