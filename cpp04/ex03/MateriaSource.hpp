
#ifndef MATERIASOURC_HPP
# define MATERIASOURC_HPP

# define END "\e[37;0m"

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
using std::cout;
using std::endl;

// Источник материи
class MateriaSource : public IMateriaSource
{
	protected:
		AMateria *mas[4];

	public:
		MateriaSource();
		~MateriaSource();

        MateriaSource(MateriaSource const &orig_materia);// копируем класс для других инициализаций и передачи объектов
		MateriaSource& operator=(MateriaSource const &orig_materia); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		void learnMateria(AMateria*);
        AMateria* createMateria(std::string const &type);
};

#endif
