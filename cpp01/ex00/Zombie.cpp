#include "Zombie.hpp"

// Определяю поведение функций класса не в хедере (так правильнее)
Zombie::Zombie(std::string x)
{
    name_z = x;
    std::cout << "Name of the Zombie: " << "\e[0;38;5;85m" << name_z << "\e[37;0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\e[0;38;5;125m" << "Call destructor : " << "\e[37;0m" << name_z << std::endl;
}

void Zombie::announce()
{
	std::cout << "\e[0;38;5;75m" << "Announce " << name_z << " : BraiiiiiiinnnzzzZ..." << "\e[37;0m" << std::endl;
}
