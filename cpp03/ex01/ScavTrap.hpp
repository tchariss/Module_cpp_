#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define COLOR "\e[0;38;5;38m"
# define END "\e[37;0m"

#include "ClapTrap.hpp"

// Подкласс(subclass)/производный/дочерний : наследующий свойства другого класса
// Базовый(super class)/родительский : класс, свойства которого наследуются подклассами.

// Наследование для некой модификации
// Производный(Наследние, содержит все свойства базового) и Базовый класс 

// Производный класс получает методы и переменные базового класса.
class ScavTrap : public ClapTrap /// ScavTrap(дочерний) — наследник класса ClapTrap
{
	// приватные переменные и методы не могут быть унаследованы.
	public:
		ScavTrap(); 
		~ScavTrap();
		ScavTrap(std::string arg);

		ScavTrap(ScavTrap const &arg); // копируем класс для других инициализаций и передачи объектов
		ScavTrap& operator=(ScavTrap const &arg); // Перегрузка операторов
// Определила у класса метод с именем (operator=) и констатная ссылка на значение этого типа
// Возвращаемое значение - это ссылка на текущее значение объекта/экземпляр
		void attack(std::string const &target); // ф-я атаки и цели
		void guardGate();
};

#endif