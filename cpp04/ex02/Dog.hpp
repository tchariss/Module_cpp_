 #ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using std::cout;
using std::endl;

class Dog: public Animal
{
	private:
		Brain *brain_dog;
	public:
		Dog();
		~Dog();
		// Dog(std::string arg);

		Dog(Dog const &orig_dog);// копируем класс для других инициализаций и передачи объектов
		Dog& operator=(Dog const &orig_dog); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		void makeSound() const;
		Brain &getBrainDog() const; // получить
};

#endif