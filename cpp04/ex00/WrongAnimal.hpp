
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define END "\e[37;0m"

#include <iostream>
using std::cout;
using std::endl;


class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
        WrongAnimal(std::string arg);

        WrongAnimal(WrongAnimal const &arg);// копируем класс для других инициализаций и передачи объектов
		WrongAnimal& operator=(WrongAnimal const &arg); // Перегрузка операторов // Верну ссылку на текущее значение объекта/экземпляр

        std::string const &getType() const; // получить
        virtual void makeSound() const;
};

#endif
