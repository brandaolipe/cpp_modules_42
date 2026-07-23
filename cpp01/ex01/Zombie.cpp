#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << this->name_ + " was destroyed." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->name_ + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name_ = name;
}
