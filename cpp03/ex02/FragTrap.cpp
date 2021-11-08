#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
}

FragTrap::~FragTrap()
{
    cout << "\e[0;38;5;126m" << "Деструктор FragTrap" << END << 
    " удаляет человека с именем : " << COLOR2 << name << END << endl;
}

FragTrap::FragTrap(std::string arg) : ClapTrap(arg) 
{
    // name = arg;
    hit_points = 100; // xp - здровье
	energy_points = 100; // энерог
	attack_damage = 30; // урон

    cout << "\e[0;38;5;150 m"<< "2-й Наследник FragTrap" << END <<
    " создает человека с именем : " << "\e[0;38;5;208m" << "|" << name << "|" << END << endl;

    cout << " ‣ hit_points = " << "\e[0;38;5;114m" << hit_points << END << endl;
    cout << " ‣ energy_points = " << "\e[0;38;5;111m" << energy_points << END << endl;
    cout << " ‣ attack_damage = " << "\e[0;38;5;203m" << attack_damage << END << endl;
}

FragTrap::FragTrap(FragTrap const &arg) // копия объектов класса
{
	*this = arg;

	cout << " FragTrap оператор конструктор копирования" << endl;
}

FragTrap& FragTrap::operator=(FragTrap const &arg) 
{
	name = arg.name;
	hit_points = arg.hit_points; // xp - здровье
	energy_points = arg.energy_points; // энерог
	attack_damage = arg.attack_damage; // урон

	cout << " FragTrap оператор '=' клонирует : "
	<< "\e[0;38;5;229m" << "|" << name << "|" << END << endl;

	return (*this); // ссылка на экземпляр
}

void FragTrap::attack(std::string const &target)  // ф-я атаки и цели
{
	cout << COLOR4 << name << END << " аттакует " 
	<< COLOR2 << target << END << ", наносит |"
	<< COLOR1 << attack_damage << END << "| очков урона" << endl;

	cout << "🎯 " << target << " XP = |" << COLOR1 << hit_points - attack_damage << END << "|" << endl;
}

void FragTrap::highFivesGuys()
{
    cout <<  "FragTrap c именем " << "\e[0;38;5;208m" << "|" << name << "|" << END << " вызвал функцию " << "\e[0;38;5;185m" << "highFivesGuys()" << END << endl;
}
 