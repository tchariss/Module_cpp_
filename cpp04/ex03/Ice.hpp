
#ifndef ICE_HPP
# define ICE_HPP

# define END "\e[37;0m"

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
using std::cout;
using std::endl;

// Лёд
class Ice : public AMateria
{
	public:
		Ice();
		~Ice();

        Ice(Ice const &arg);// копируем класс для других инициализаций и передачи объектов
		Ice& operator=(Ice const &arg); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		AMateria *clone() const;
		void use(ICharacter& target);
		// Ice(std::string const& type_m);
};

#endif
