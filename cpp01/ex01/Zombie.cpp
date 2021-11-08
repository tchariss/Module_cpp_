#include "Zombie.hpp"

// Определяю поведение функций класса не в хедере (так правильнее)
void Zombie::SetName(std::string x)
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
	std::cout  << "Announce " << "\e[4;38;5;75m" << name_z  << "\e[37;0m" << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
