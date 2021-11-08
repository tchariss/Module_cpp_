#include "ClapTrap.hpp"

int	main(void)
{
	cout << "1)";
	ClapTrap a1("Lolik");
	
	cout << "2)";
	ClapTrap a2("Bobik"); // конструктор копирования

	cout << "3)";
	ClapTrap a3("Boss_monster");
	
	cout << "--------------" << endl;
	a1.attack("Boss_monster");
	a2.attack("Boss_monster");

	cout << "--------------" << endl;
	a1.takeDamage(8);
	a2.takeDamage(6);

	cout << "--------------" << endl;
	a1.beRepaired(13);
	a2.beRepaired(8);

	cout << "--------------" << endl;
	return (0);
}
