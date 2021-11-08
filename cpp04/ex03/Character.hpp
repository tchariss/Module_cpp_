#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define END "\e[37;0m"

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
using std::cout;
using std::endl;

// массив из 4х AMateria [4]

// virtual void equip(AMateria* m) = 0; // надеть Одевает материю , если 0 в 0, цикл , чтобы положить
// virtual void unequip(int idx) = 0; // снять определенную материю и ПРОВЕРИТЬ СУЩЕСТВОВАНИЕ (>1 <4) Валидные цифры
// virtual void use(int idx, ICharacter& target) = 0; // использовать 

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *arr[4];
		
	public:
		Character();
		~Character();
		Character(std::string arg);

        Character(Character const &arg);// копируем класс для других инициализаций и передачи объектов
		Character& operator=(Character const &arg); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

// Наследуем от ICharacter
		std::string const & getName() const;
		void equip(AMateria* m); // надеть Одевает материю , если 0 в 0, цикл , чтобы положить
		void unequip(int idx); // снять определенную материю и ПРОВЕРИТЬ СУЩЕСТВОВАНИЕ (>1 <4) Валидные цифры
		void use(int idx, ICharacter& target);

};

#endif
