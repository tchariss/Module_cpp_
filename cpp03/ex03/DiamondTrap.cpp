#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::~DiamondTrap()
{
    cout << "Деструктор DiamondTrap удаляет с именем : " << "\e[0;38;5;127m" << name << END << endl;
}

DiamondTrap::DiamondTrap(std::string arg) : ClapTrap(arg + "_clap_name"), ScavTrap(arg), FragTrap(arg)
{
    name = arg;
    hit_points = 100; // Hitpoints (Fragtrap)
	energy_points =  50; // Energy points (Scavtrap)
	attack_damage = 30; // Attack damage (Fragtrap)

    cout << "\e[0;38;5;153m"<< "Последний наследник престола DiamondTraprap" << END <<
    " создает человека с именем : " << "\e[0;38;5;208m" << "|" << arg << "|" << END << endl;

    cout << " ‣ hit_points = " << "\e[0;38;5;112m" << hit_points << END << endl;
    cout << " ‣ energy_points = " << "\e[0;38;5;141m" << energy_points << END << endl;
    cout << " ‣ attack_damage = " << "\e[0;38;5;205m" << attack_damage << END << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &arg) // копия объектов класса
{
	*this = arg;

	cout << " DiamondTrap оператор конструктор копирования" << endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &arg) 
{
	name = arg.name;
	hit_points = arg.hit_points; // xp - здровье
	energy_points = arg.energy_points; // энерог
	attack_damage = arg.attack_damage; // урон

	cout << " DiamondTrap оператор '=' клонирует : "
	<< "\e[0;38;5;229m" << "|" << name << "|" << END << endl;

	return (*this); // ссылка на экземпляр
}

void DiamondTrap::attack(std::string const &target)  // ф-я атаки и цели
{
	cout << COLOR4 << name << END << " аттакует " 
	<< COLOR2 << target << END << ", наносит |"
	<< COLOR1 << attack_damage << END << "| очков урона" << endl;

	cout << "🎯 " << target << " XP = |" << COLOR1 << hit_points - attack_damage << END << "|" << endl;
}

void DiamondTrap::whoAmI()
{
    cout <<  "DiamondTrap вызвал функцию " << "\e[0;38;5;185m" << "whoAmI()" << END << 
    ", name = " << "\e[0;38;5;45m"  << name << END << endl;
    cout <<  "Нооо ClapTrap name = " << "\e[0;38;5;45m"  << ClapTrap::name << END << endl;
    cout << "---------" <<endl;
}
 