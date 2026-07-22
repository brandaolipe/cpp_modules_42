#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name_(name) {}

Zombie::~Zombie()
{
	std::cout << this->name_ + " was destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name_ + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
