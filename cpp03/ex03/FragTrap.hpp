#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define END "\e[37;0m"

#include "ClapTrap.hpp"

// Наследование для некой модификации
// Производный(Наследние, содержит все свойства базового) и Базовый класс 
class FragTrap : virtual public ClapTrap /// FragTrap — наследник класса ClapTrap
{
	public:
		FragTrap(); // нельзя вызывать
		~FragTrap();
		FragTrap(std::string arg);
		FragTrap(FragTrap const &arg); // копируем класс для других инициализаций и передачи объектов
		FragTrap& operator=(FragTrap const &arg); // Перегрузка операторов

		void attack(std::string const &target); // ф-я атаки и цели
		void highFivesGuys();
};

#endif