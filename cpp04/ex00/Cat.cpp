#include "Cat.hpp"

Cat::Cat() 
{
	type = "Cat";
	cout << "\e[0;38;5;218m" << " + Cat конструктор" << END << endl;
}

Cat::~Cat()
{
	cout << "\e[0;38;5;218m" << " 🔻 Cat деструктор" << END << endl;
}

Cat::Cat(std::string arg) : Animal(arg)
{
	cout << " Cat type = " << "\e[0;38;5;218m" 
	<< type << END << endl;
}

Cat::Cat(Cat const &arg)
{
	*this = arg;

	cout << " Cat конструктор копирования" << type << endl;
}

Cat& Cat::operator=(Cat const &arg)
{
	// type = arg.type;
	if(this != &arg)
		this->type = arg.type;
	
	cout << " Cat оператор '=' клонирует : "
	<< "\e[0;38;5;228m" << "|" << type << "|" << END << endl;

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

void Cat::makeSound() const
{
	cout << "(makeSound)Type : " << "\e[0;38;5;212m" << type << END << " говорит :";
	cout << "\e[0;38;5;212m" << " Мяу-мяу" << END << endl;
}
