#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name_;

	public:
		Zombie(std::string name_);
		~Zombie();
		void		announce(void);
};

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);
