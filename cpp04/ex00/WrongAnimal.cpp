#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	cout << "\e[0;38;5;223m" << " + WrongAnimal конструктор" << END << endl;
}

WrongAnimal::~WrongAnimal()
{
		cout << "\e[0;38;5;223m" << " 🔻 WrongAnimal деструктор" << END << endl;
}

WrongAnimal::WrongAnimal(std::string arg)
{
	type = arg;
}

WrongAnimal::WrongAnimal(WrongAnimal const &arg)
{
	*this = arg;

	cout << " WrongAnimal конструктор копирования" << type << endl;
}

WrongAnimal&  WrongAnimal::operator=(WrongAnimal const &arg)
{
	// type = arg.type;
	if(this != &arg)
		this->type = arg.type;

	cout << " WrongAnimal оператор '=' клонирует : "
	<< "\e[0;38;5;230m" << "|" << type << "|" << END << endl;

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}


std::string const &WrongAnimal::getType() const
{
	cout << "\e[0;48;5;m" << " Получаю новый тип с именем " << END << " : ";
	return(type);
}

void WrongAnimal::makeSound() const
{
	cout << "MakeSound: " << "\e[0;38;5;223m" << "WrongAnimal : ноунейм звуки" << END << endl;
}
