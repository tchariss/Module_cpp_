
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define END "\e[37;0m"

#include <iostream>
#include "ICharacter.hpp"
using std::cout;
using std::endl;

class AMateria 
{
	protected:
		std::string type_m;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const & type);

        AMateria(AMateria const &orig_materia);// копируем класс для других инициализаций и передачи объектов
		AMateria& operator=(AMateria const &orig_materia); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

		std::string const &getType() const;
};

#endif
