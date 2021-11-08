
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# define END "\e[37;0m"

#include <iostream>
#include "WrongAnimal.hpp"

using std::cout;
using std::endl;

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();

		WrongCat(std::string arg);
		
		WrongCat(WrongCat const &arg);// копируем класс для других инициализаций и передачи объектов
		WrongCat& operator=(WrongCat const &arg); // Перегрузка операторов
// Верну ссылку на текущее значение объекта/экземпляр

		void makeSound() const;
};

#endif