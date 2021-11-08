#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name_z;

	public:
		Zombie(std::string x);
		// {
		// 	name_z = x;
		// 	std::cout << "Name of the Zombie: " << name_z << std::endl;
		// }

		~Zombie();
		// {
			// std::cout << "Call destructor" << std::endl;
		// }

		void announce();
		// {
		// 	std::cout << "\e[0;38;5;153m" << "Announce " << name_z << " : BraiiiiiiinnnzzzZ..." << "\e[37;0m" << std::endl;
		// }
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
