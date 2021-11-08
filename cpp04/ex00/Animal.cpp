#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	cout << "\e[0;38;5;223m" << " + Animal конструктор" << END << endl;
}

Animal::~Animal()
{
	cout << "\e[0;38;5;223m" << " 🔻 Animal деструктор" << END << endl;
}

Animal::Animal(std::string arg) 
{
	type = arg;
}

Animal::Animal(Animal const &arg)
{
	*this = arg;

	cout << " Animal конструктор копирования" << type << endl;
}

Animal&  Animal::operator=(Animal const &arg)
{
	// type = arg.type;
	if(this != &arg) // 2 одинаковых объекта
		this->type = arg.type;

	cout << " Animal оператор '=' клонирует : "
	<< "\e[0;38;5;229m" << "|" << type << "|" << END << endl;

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

std::string const &Animal::getType() const
{
	cout << "\e[0;48;5;m" << " Получаю новый тип с именем " << END << " : ";
	return(type);
}

void Animal::makeSound() const
{
	cout << "MakeSound: " << "\e[0;38;5;223m" << "Animal : какие звуки, я ноунейм животное" << END << endl;
}
