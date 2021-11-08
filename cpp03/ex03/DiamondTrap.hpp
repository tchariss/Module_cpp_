#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# define END "\e[37;0m"

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// Унаследуется от ScavTrap и FragTrap

class DiamondTrap : public ScavTrap, public FragTrap /// DiamondTrap — наследник класса ClapTrap от FragTrap и ScavTrap
{
	private:
		std::string name;
    public:
		DiamondTrap(); // нельзя вызывать
		~DiamondTrap();
		DiamondTrap(std::string arg);

		DiamondTrap(DiamondTrap const &arg); // копируем класс для других инициализаций и передачи объектов
		DiamondTrap& operator=(DiamondTrap const &arg); // Перегрузка операторов

		void attack(std::string const &target); // ф-я атаки и цели
		void whoAmI();
};

#endif