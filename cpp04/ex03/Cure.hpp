
#ifndef CURE_HPP
# define CURE_HPP

# define END "\e[37;0m"

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
using std::cout;
using std::endl;

// Лечение 
class Cure : public AMateria
{
	public:
		Cure();
		~Cure();

        Cure(Cure const &arg);// копируем класс для других инициализаций и передачи объектов
		Cure& operator=(Cure const &arg); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif
