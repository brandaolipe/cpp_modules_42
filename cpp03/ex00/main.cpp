#include "ClapTrap.hpp"

int	main(void)
{
	{
		std::cout << "\n-------  Test Orthodox class form  -------" << std::endl;
		ClapTrap	clap("Sonic");
		ClapTrap	trap(clap);
		ClapTrap	claptrap("Another");
		
		claptrap = trap;
	}
	{
		std::cout << "\n-------  Test clapTrap functions  -------" << std::endl;
		ClapTrap	clap("Sonic");

		clap.attack("Dude");
		clap.takeDamage(5);
		clap.beRepaired(3);
	}
	{
		std::cout << "\n------- Test attack() -------" << std::endl;

		ClapTrap	clap("Sonic");

		for (int i = 0; i < 12; i++)
		{
			clap.attack("Dude");
		}
	}
	{
		std::cout << "\n------- Test takeDamage() -------" << std::endl;
		ClapTrap clap("Sonic");
		
		for (int i = 0; i < 9; i++)
		{
			clap.takeDamage(1);
		}
		std::cout << "\n------- Test beRepaired() -------" << std::endl;
		
		for (int i = 0; i < 12; i++)
		{
			clap.beRepaired(1);
		}
	}
	{
		std::cout << "\n------- Press f -------" << std::endl;
		ClapTrap clap("Sonic");
		
		clap.takeDamage(20);
		clap.takeDamage(1);
	}
	return (0);
}