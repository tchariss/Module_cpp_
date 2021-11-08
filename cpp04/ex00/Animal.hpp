
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define COLOR "\e[0;38;5;171m"
# define END "\e[37;0m"

#include <iostream>
using std::cout;
using std::endl;


class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		virtual ~Animal();
		Animal(std::string arg);

        Animal(Animal const &arg);// копируем класс для других инициализаций и передачи объектов
		Animal& operator=(Animal const &arg); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

        std::string const &getType() const; // получить
        virtual void makeSound() const;
};

#endif
