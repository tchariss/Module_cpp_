#include "Zombie.hpp"

int main()
{
    Zombie a("Vikos01");
	a.announce();
	
	Zombie *p;
	p = 0;

	p = newZombie("Vikos02");
	std::cout <<  "Check p: " << "\e[4;38;5;218m" << p << "\e[37;0m" << std::endl;
	p->announce(); // проверка что создалось (объявляю его) и не потерялся

	randomChump("Random_Vikos");

	delete p;
	p = 0;

    return (0);
}
