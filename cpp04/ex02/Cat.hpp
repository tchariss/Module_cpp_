
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using std::cout;
using std::endl;

class Cat: public Animal
{
	private:
		Brain *brain_cat;
	public:
		Cat();
		~Cat();
		Cat(std::string arg);
		
		Cat(Cat const &orig_cat);// копируем класс для других инициализаций и передачи объектов
		Cat& operator=(Cat const &orig_cat); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

		void makeSound() const;
		Brain &getBrainCat() const; // получить
};

#endif