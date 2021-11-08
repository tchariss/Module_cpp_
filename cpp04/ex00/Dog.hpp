 #ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

using std::cout;
using std::endl;

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(std::string arg);

		Dog(Dog const &arg);// копируем класс для других инициализаций и передачи объектов
		Dog& operator=(Dog const &arg); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		void makeSound() const;
};

#endif