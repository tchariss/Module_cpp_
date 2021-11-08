#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *p1;

	p1 = new Zombie(name);
	if (!p1)	// Возвращается null — т.е. память не выделяется
		std::cout << "Не удалось выделить память" << std::endl;

	return (p1);
}
