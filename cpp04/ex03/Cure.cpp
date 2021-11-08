#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	cout << "\e[0;38;5;223m" << " + Cure конструктор" << END << endl;
}

Cure::~Cure()
{
	cout << "\e[0;38;5;223m" << " 🔻 Cure деструктор" << END << endl;
}

Cure::Cure(Cure const &arg)
{
	*this = arg;

	cout << " Cure конструктор копирования : " << type_m << endl;
}

Cure&  Cure::operator=(Cure const &arg)
{
	if(this != &arg) // 2 одинаковых объекта
		this->type_m = arg.type_m;

	cout << " Cure оператор '=' клонирует : "
	<< "\e[0;38;5;229m" << "|" << type_m << "|" << END << endl;

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

AMateria *Cure::clone() const 
{
	AMateria *clone_cure = new Cure(*this);
	return (clone_cure);
}

void Cure::use(ICharacter &target)
{
	cout << "* heals ";
	cout << "\e[0;38;5;121m" << target.getName() << END;
	cout << "'s wounds *" << endl;
}