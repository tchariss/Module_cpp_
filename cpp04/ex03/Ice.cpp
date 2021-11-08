#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	cout << "\e[0;38;5;223m" << " + Ice конструктор" << END << endl;
}

Ice::~Ice()
{
	cout << "\e[0;38;5;223m" << " 🔻 Ice деструктор" << END << endl;
}


Ice::Ice(Ice const &arg)
{
	*this = arg;

	cout << " Ice конструктор копирования : " << type_m << endl;
}

Ice&  Ice::operator=(Ice const &arg)
{
	if(this != &arg) // 2 одинаковых объекта
		this->type_m = arg.type_m;

	cout << " Ice оператор '=' клонирует : "
	<< "\e[0;38;5;229m" << "|" << type_m << "|" << END << endl;

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

AMateria *Ice::clone() const 
{
	AMateria *clone_ice = new Ice(*this);
	return (clone_ice);
}

void Ice::use(ICharacter &target)
{
	cout << "* shoots an ice bolt at ";
	cout << "\e[0;38;5;111m" << target.getName() << END;
	cout << " *" << endl;
}

