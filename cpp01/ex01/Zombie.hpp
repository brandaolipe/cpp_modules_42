#include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string name_;

	public:
		Zombie();
		~Zombie();
		void	announce(void) const;
		void	set_name(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
