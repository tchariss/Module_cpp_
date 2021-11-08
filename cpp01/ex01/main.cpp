#include "Zombie.hpp"

int main()
{
	Zombie *ind;
	ind = 0;

	ind = ZombieHorde(6, "zombik");
    if (!ind)
    {
        std::cout << "Не удалось выделить память" << std::endl;
        return (-1);
    }

    std::cout <<  "Check ind: " << "\e[4;38;5;218m" << ind << "\e[37;0m" << std::endl;

	delete[] ind;
	ind = 0;

    return (0);
}
