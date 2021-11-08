#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::~ScavTrap()
{
    cout << "\e[0;38;5;125m" << "Деструктор ScavTrap" << END <<
    " удаляет выдающуюся особу с именем : " << COLOR2 << name << END << endl;
}

ScavTrap::ScavTrap(std::string arg) : ClapTrap(arg) 
{
    // name = arg;
    hit_points = 100; // xp - здровье
    energy_points = 50;
    attack_damage = 20;

    cout << COLOR << "Наследник ScavTrap" << END <<
    " создает выдающуюся особу с именем : " << "\e[0;38;5;185m" << "|" << name << "|" << END << endl;
    cout << " ‣ hit_points = " << "\e[0;38;5;114m" << hit_points << END << endl;
    cout << " ‣ energy_points = " << "\e[0;38;5;111m" << energy_points << END << endl;
    cout << " ‣ attack_damage = " << "\e[0;38;5;203m" << attack_damage << END << endl;
}

ScavTrap::ScavTrap(ScavTrap const &arg) // копия объектов класса
{
	*this = arg;

	cout << " ScavTrap конструктор копирования" << endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &arg) 
{
	name = arg.name;
	hit_points = arg.hit_points; // xp - здровье
	energy_points = arg.energy_points; // энерог
	attack_damage = arg.attack_damage; // урон

	cout << " ScavTrap оператор '=' клонирует : "
	<< "\e[0;38;5;229m" << "|" << name << "|" << END << endl;

	return (*this); // ссылка на экземпляр
}

void ScavTrap::attack(std::string const &target)  // ф-я атаки и цели
{
	cout << COLOR4 << name << END << " аттакует " 
	<< COLOR2 << target << END << ", наносит |"
	<< COLOR1 << attack_damage << END << "| очков урона" << endl;

	cout << "🎯 " << target << " XP = |" << COLOR1 << hit_points - attack_damage << END << "|" << endl;
}

void ScavTrap::guardGate()
{
    cout <<  "ScavTrap вызвал функцию " << "\e[0;38;5;153m" << "guardGate()" << END << 
    " name = " <<  "\e[0;38;5;218m" << name << END << endl;
}
 