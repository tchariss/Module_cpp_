#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	// cout << "\e[0;38;5;223m" << " + AMateria конструктор" << END << endl;
}

AMateria::~AMateria()
{
	// cout << "\e[0;38;5;223m" << " 🔻 AMateria деструктор" << END << endl;
}

AMateria::AMateria(std::string const & type)
{
	type_m = type;
}

AMateria::AMateria(AMateria const &orig_materia)
{
	*this = orig_materia;

	cout << " AMateria конструктор копирования" << endl;
}

AMateria&  AMateria::operator=(AMateria const &orig_materia)
{
	if(this != &orig_materia) // 2 одинаковых объекта
		this->type_m = orig_materia.type_m;

	cout << "\e[0;38;5;229m" << " AMateria оператор '=' "<< END << endl;

	return (*this); // Разыменовываем this и получаем ссылку на текущий экземпляр объекта
}

std::string const & AMateria::getType() const
{
	return (this->type_m); // Возвращает тип материи
}

void AMateria::use(ICharacter& target)
{
	if (type_m != "ice" || type_m != "cure")
		cout << "Несуществующая материя :(" << target.getName() << endl;
}