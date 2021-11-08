#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define COLOR "\e[0;38;5;38m"
# define END "\e[37;0m"

#include "ClapTrap.hpp"

// Наследование для некой модификации
// Производный(Наследние, содержит все свойства базового) и Базовый класс 
class ScavTrap : virtual public ClapTrap /// ScavTrap — наследник класса ClapTrap
{
    public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string arg);

		ScavTrap(ScavTrap const &arg); // копируем класс для других инициализаций и передачи объектов
		ScavTrap& operator=(ScavTrap const &arg); // Перегрузка операторов

		void attack(std::string const &target); // ф-я атаки и цели
		void guardGate();
};

#endif