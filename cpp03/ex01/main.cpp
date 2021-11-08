#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	cout << "1) ";
	ClapTrap a1("Lolik");
	
	cout << "2) ";
	ClapTrap a2("Bobik"); // конструктор копирования

	cout << "3) ";
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
	cout << endl;
	cout << "------Инициализируем ScavTrap--------" << endl;
	cout << endl;

	ScavTrap a4("Vikos");
	cout << "------Вызовем метод attack от ScavTrap--------" << endl;
	a4.attack("Boss_monster");
	a4.guardGate();

	return (0);
}
