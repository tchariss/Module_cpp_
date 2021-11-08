#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	cout << "\e[0;38;5;218m" << " + WrongCat конструктор" << END << endl;
}

WrongCat::~WrongCat()
{
	cout << "\e[0;38;5;218m" << " 🔻 WrongCat деструктор" << END << endl;
}

WrongCat::WrongCat(std::string arg) : WrongAnimal(arg)
{
	cout << " WrongCat type = " << "\e[0;38;5;218m" 
	<< type << END << endl;
}

void WrongCat::makeSound() const
{
	cout << "(makeSound)Type : " << "\e[0;38;5;212m" << type << END << " говорит :";
	cout << "\e[0;38;5;212m" << " WrongCat мяу-мяу" << END << endl;
}

WrongCat::WrongCat(WrongCat const &arg)
{
	*this = arg;

	cout << " WrongCat конструктор копирования" << type << endl;
}

WrongCat& WrongCat::operator=(WrongCat const &arg)
{
	// type = arg.type;
	if(this != &arg)
		this->type = arg.type;
	
	cout << " WrongCat оператор '=' клонирует : "
	<< "\e[0;38;5;228m" << "|" << type << "|" << END << endl;

	return (*this); // // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}