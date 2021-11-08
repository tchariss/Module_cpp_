
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

using std::cout;
using std::endl;

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(std::string arg);
		
		Cat(Cat const &arg);// копируем класс для других инициализаций и передачи объектов
		Cat& operator=(Cat const &arg); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		void makeSound() const;
};

#endif