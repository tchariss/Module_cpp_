#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define COLOR1 "\e[0;38;5;227m"
# define COLOR2 "\e[0;38;5;197m"
# define COLOR4 "\e[0;38;5;157m"
# define END "\e[37;0m"

#include <iostream>
using std::cout;
using std::endl;

// Наследование для некой модификации
// Производный(Наследние, содержит все свойства базового) и Базовый класс 
class ClapTrap
{
	protected:
		std::string name;
		int hit_points; // очко здоровья
		int energy_points; // энергия
		int attack_damage; // урон
	public:
		ClapTrap();
		~ClapTrap(); 
		ClapTrap(std::string name);

		void attack(std::string const &target); // ф-я атаки и цели
		void takeDamage(unsigned int amount); //  получать повреждения
		void beRepaired(unsigned int amount);

		ClapTrap(ClapTrap const &arg);// копируем класс для других инициализаций и передачи объектов
		ClapTrap& operator=(ClapTrap const &arg); // Перегрузка операторов
// Определила у класса метод с именем (operator=) и констатная ссылка на значение этого типа
// Возвращаемое значение - это ссылка на текущее значение объекта/экземпляр
};

#endif
