#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::~ClapTrap()
{
	cout << " ClapTrap удаляет с именем : " << COLOR2 << name << END << endl;
}

ClapTrap::ClapTrap(std::string arg)
{
	name = arg;
	hit_points = 10; // xp - здровье
	energy_points = 10; // энерог
	attack_damage = 0; // урон

	cout << "ClapTrap создает нового персонажа с именем : "
	<< COLOR4 << "|" << name << "|" << END << endl;
}

ClapTrap::ClapTrap(ClapTrap const &arg)// конструктор копирования // копия объектов класса
{
	*this = arg;

	cout << " ClapTrap оператор конструктор копирования" << endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &arg) 
{
// Возвращаемое значение - это ссылка на текущее значение объекта/экземпляр
	name = arg.name;
	hit_points = arg.hit_points; // xp - здровье
	energy_points = arg.energy_points; // энерог
	attack_damage = arg.attack_damage; // урон

	cout << " ClapTrap оператор '=' клонирует : "
	<< "\e[0;38;5;229m" << "|" << name << "|" << END << endl;

	return (*this); // ссылка на экземпляр
// Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

void ClapTrap::attack(std::string const &target)  // ф-я атаки и цели
{
	cout << COLOR4 << name << END << " аттакует " 
	<< COLOR2 << target << END << ", наносит |"
	<< COLOR1 << attack_damage << END << "| очков урона" << endl;

	cout << "🎯 " << target << " XP = |" << COLOR1 << hit_points - attack_damage << END << "|" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) // получить ур-нь урона
{
	cout << name << " XP = |" << COLOR1 << hit_points << END << "|" << endl;
	
	cout << " 💥 " << COLOR2 << name << END << " получает |"
	<< COLOR1 << amount << END << "| урона" << endl;

	// hit_points - amount = сколько здоровья осталось
	hit_points -= amount; 

	cout << "\e[0;38;5;112m" << " XP : " << END << name << " = |" << COLOR1 << hit_points << END << "|" << endl;
}
 
void ClapTrap::beRepaired(unsigned int amount) // восстановить
{
	cout << " 🔹 " << name << " XP = |" << COLOR1 << hit_points << END << "|" << endl;
	// hit_points + amount = восстановили здоровье на amount очков
	hit_points += amount;

	cout << "💚 Восстанавливаем +XP (" << amount <<  ") : " << 
	name << " = |" << COLOR1 << hit_points << END << "|" << endl;
}
