#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
		void		announce(void);

	public:
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
}