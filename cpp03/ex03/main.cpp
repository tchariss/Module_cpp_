#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	cout << "------(2)Инициализируем  DiamondTrap--------" << endl;
	DiamondTrap a1("brilliant");
	a1.attack("Boss");
	a1.whoAmI();

	// cout << endl;

	return (0);
}
