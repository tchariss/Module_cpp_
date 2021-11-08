#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	cout << "\e[0;38;5;195m" << " + Dog конструктор" << END << endl;
}

Dog::~Dog() 
{
	cout << "\e[0;38;5;195m" << " 🔻 Dog деструктор" << END << endl;
}

Dog::Dog(std::string arg) : Animal(arg)
{
	cout << " Dog type = " << "\e[0;38;5;216m" 
	<< type << END << endl;
}

Dog::Dog(Dog const &arg)
{
	*this = arg;

	cout << " Dog конструктор копирования" << type << endl;
}

Dog& Dog::operator=(Dog const &arg)
{
	// type = arg.type;
	if(this != &arg)
		this->type = arg.type;

	cout << " Dog оператор '=' клонирует : "
	<< "\e[0;38;5;227m" << "|" << type << "|" << END << endl;

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

void Dog::makeSound() const
{
	cout << "(makeSound)Type : " << "\e[0;38;5;159m" << type << END << " говорит :";
	cout << "\e[0;38;5;159m" << " Гав-гав" END << endl;
}
